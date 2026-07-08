/*
 * Copyright (c) 2017-2019 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/utils/Utils.h>
#include <tencentcloud/core/Sign.h>
#include <tencentcloud/core/Config.h>

using namespace TencentCloud;
using std::string;

namespace
{
    const string SDK_VERSION_PREFIX = "SDK_CPP_";
}

AbstractClient::AbstractClient(const string &endpoint, const string &version, const Credential &credential, const string &region) :
    AbstractClient(endpoint, version, credential, region, ClientProfile())
{
}

AbstractClient::AbstractClient(const string &endpoint, const string &version, const Credential &credential, const string &region, const ClientProfile &profile) :
    m_credential(credential),
    m_clientProfile(profile),
    m_endpoint(endpoint),
    m_region(region),
    m_sdkVersion(SDK_VERSION_PREFIX + TENCENTCLOUD_VERSION_STR),
    m_apiVersion(version),
    m_httpClient(new HttpClient()),
    m_service(""),
    m_breakers(nullptr)
{
    InitRegionBreakers();
}

AbstractClient::~AbstractClient()
{
    // delete m_httpClient first to join its async worker. Breakers are
    // held by shared_ptr (in m_breakers and possibly captured by async
    // callbacks), so they release automatically and safely regardless
    // of destruction timing.
    delete m_httpClient;
}

void AbstractClient::SetNetworkProxy(const NetworkProxy &proxy)
{
    m_httpClient->SetProxy(proxy);
}

void AbstractClient::SetRegion(const string &region)
{
    m_region = region;
}

string AbstractClient::GetRegion() const
{
    return m_region;
}

void AbstractClient::SetClientProfile(const ClientProfile &profile)
{
    m_clientProfile = profile;
}

ClientProfile AbstractClient::GetClientProfile() const
{
    return m_clientProfile;
}

void AbstractClient::SetCredential(const Credential &credential)
{
    m_credential = credential;
}

Credential AbstractClient::GetCredential() const
{
    return m_credential;
}

void AbstractClient::SetHeader(const std::map<std::string, std::string> &headers)
{
    m_headers = headers;
}

HttpClient::HttpResponseOutcome AbstractClient::MakeRequest(const AbstractModel& request, const std::string &actionName)
{
    const string body = request.ToJsonString();
    std::map<std::string, std::string> headers;
    headers.insert(std::make_pair("Content-Type", "application/json"));
    return DoRequest(actionName, body, headers);
}

HttpClient::HttpResponseOutcome AbstractClient::MakeRequestJson(const std::string &actionName, const std::string &params)
{
    std::map<std::string, std::string> headers;
    headers.insert(std::make_pair("Content-Type", "application/json"));
    return DoRequest(actionName, params, headers);
}

HttpClient::HttpResponseOutcome AbstractClient::MakeRequestOctetStream(const std::string &actionName, std::map<std::string, std::string> &headers, const std::string &body)
{
    headers.insert(std::make_pair("Content-Type", "application/octet-stream"));
    return DoRequest(actionName, body, headers);
}

typedef std::map<std::string, std::string> OctetStreamHeadersMap;

void AbstractClient::InitRegionBreakers()
{
    // Only build the registry when region failover is enabled.
    // When disabled, m_breakers stays nullptr and SelectEndpoint
    // early-returns without touching it.
    if (m_clientProfile.GetDisableRegionBreaker())
    {
        return;
    }
    m_breakers = std::make_shared<BreakerRegistry>();
}

std::shared_ptr<CircuitBreaker> AbstractClient::BreakerFor(
    const std::string &origin, const std::string &host)
{
    const std::string key = origin + "\n" + host;
    std::lock_guard<std::mutex> lock(m_breakers->mutex);
    std::map<std::string, std::shared_ptr<CircuitBreaker> >::iterator it =
        m_breakers->map.find(key);
    if (it != m_breakers->map.end())
    {
        return it->second;  // reuse (accumulates state)
    }
    std::shared_ptr<CircuitBreaker> breaker = std::make_shared<CircuitBreaker>(
        m_clientProfile.GetRegionBreakerProfile());
    m_breakers->map.insert(std::make_pair(key, breaker));  // lazy load
    return breaker;
}

AbstractClient::EndpointDecision AbstractClient::SelectEndpoint(
    const std::string &primary_endpoint)
{
    // Bypass: failover disabled / non-TencentCloud endpoint -> send the
    // primary directly, no breaker, no report.
    if (!m_breakers ||
        !DomainFailoverManager::IsTencentCloudDomain(primary_endpoint))
    {
        EndpointDecision d;
        d.host = primary_endpoint;
        d.breaker = nullptr;
        return d;
    }

    RegionBreakerProfile rb_profile = m_clientProfile.GetRegionBreakerProfile();
    std::string backup_ep = rb_profile.GetBackupEndpoint();
    std::vector<std::string> candidates =
        DomainFailoverManager::BuildCandidates(primary_endpoint, backup_ep);

    // Every candidate (including the last) is guarded by a breaker.
    // If a candidate's breaker Allow()s, we send to it and Report the
    // outcome. If ALL breakers are Open, we fall back to the primary
    // (candidates[0]) without a breaker — force-send, no report.
    // This aligns with Java SDK's selectHost(): origin first, then
    // TLD rotation, all breakers open → fall through to origin.
    for (size_t i = 0; i < candidates.size(); ++i)
    {
        std::shared_ptr<CircuitBreaker> breaker =
            BreakerFor(primary_endpoint, candidates[i]);
        if (breaker->Allow())
        {
            EndpointDecision d;
            d.host = candidates[i];
            d.breaker = breaker;  // hit -> must Report
            return d;
        }
    }
    // All breakers Open -> force-send primary (origin), no report.
    EndpointDecision d;
    d.host = candidates[0];
    d.breaker = nullptr;
    return d;
}

void AbstractClient::ReportResult(
    const std::shared_ptr<CircuitBreaker> &breaker, bool success)
{
    if (breaker)
    {
        breaker->Report(success);
    }
}

bool AbstractClient::IsFailoverTriggering(const std::string &error_code)
{
    // Only network-level errors that are reliably attributable to the
    // current endpoint warrant a failover transition:
    //   DnsError        - CURLE_COULDNT_RESOLVE_HOST
    //   ConnectionError - CURLE_COULDNT_CONNECT
    //   SSLError        - CURLE_PEER_FAILED_VERIFICATION (strong hint
    //                     of DNS hijacking for TencentCloud domains)
    //
    // Explicitly NOT triggering failover:
    //   ServiceNetworkError - any HTTP non-2xx; may come from business
    //     errors (4xx), server faults (5xx), or throttling, and cannot
    //     be reliably attributed to a per-endpoint network problem.
    //     Matches HEAD's original behavior.
    //   NetworkError - e.g. CURLE_OPERATION_TIMEDOUT spans multiple
    //     stages; local client cert errors cannot be fixed by switching
    //     domain.
    return error_code == "DnsError" ||
           error_code == "ConnectionError" ||
           error_code == "SSLError";
}

HttpClient::HttpResponseOutcome AbstractClient::DoRequestWithEndpoint(
    const std::string &actionName, const std::string &body,
    std::map<std::string, std::string> &headers,
    const std::string &endpoint)
{
    string::size_type pos = endpoint.find_first_of(".");
    if (pos != string::npos)
        m_service = endpoint.substr(0, pos);
    else
    {
        m_service = "unknown";
        return HttpClient::HttpResponseOutcome(Core::Error("ClientError", "endpoint `"+ endpoint + "` is not valid"));
    }

    HttpProfile httpProfile = m_clientProfile.GetHttpProfile();

    Url url;
    url.SetHost(endpoint);
    HttpProfile::Scheme scheme = httpProfile.GetProtocol();
    if (scheme == HttpProfile::Scheme::HTTP)
        url.SetScheme("http");

    HttpRequest httpRequest(url);
    httpRequest.SetMethod(HttpRequest::Method::POST);
    httpRequest.SetBody(body);
    httpRequest.AddHeader("Host", url.GetHost());
    httpRequest.AddHeader("X-TC-Action", actionName);
    httpRequest.AddHeader("X-TC-Version", m_apiVersion);
    if (m_region != "")
        httpRequest.AddHeader("X-TC-Region", m_region);
    string token = m_credential.GetToken();
    if (token != "")
        httpRequest.AddHeader("X-TC-Token", token);
    httpRequest.AddHeader("X-TC-RequestClient", m_sdkVersion);
    if (httpProfile.IsKeepAlive())
        httpRequest.AddHeader("Connection", "Keep-Alive");
    else
        httpRequest.AddHeader("Connection", "Close");
    if (headers.size() > 0)
    {
        for (std::map<std::string, std::string>::iterator iter = headers.begin(); iter != headers.end(); ++iter)
        {
            httpRequest.AddHeader(iter->first, iter->second);
        }
    }
    if (m_headers.size() > 0)
    {
        for (std::map<std::string, std::string>::iterator iter = m_headers.begin(); iter != m_headers.end(); ++iter)
        {
            httpRequest.AddHeader(iter->first, iter->second);
        }
    }
    GenerateSignature(httpRequest);
    m_httpClient->SetReqTimeout(httpProfile.GetReqTimeout()*1000);
    m_httpClient->SetConnectTimeout(httpProfile.GetConnectTimeout()*1000);

    m_httpClient->SetCaInfo(httpProfile.GetCaInfo());
    m_httpClient->SetCaPath(httpProfile.GetCaPath());

    m_httpClient->SetResolveIp(httpProfile.GetResolveIp());

    return m_httpClient->SendRequest(httpRequest);
}

HttpClient::HttpResponseOutcome AbstractClient::DoRequest(const std::string &actionName, const std::string &body, std::map<std::string, std::string> &headers)
{
    HttpProfile httpProfile = m_clientProfile.GetHttpProfile();
    string primary_endpoint = httpProfile.GetEndpoint();
    if (primary_endpoint == "")
        primary_endpoint = m_endpoint;

    // Pick an endpoint for this request based on circuit breaker state.
    // No in-request retry: the breakers make the decision once per
    // request. The outcome of that single request is then fed back to
    // the breaker.
    EndpointDecision decision = SelectEndpoint(primary_endpoint);

    auto outcome = DoRequestWithEndpoint(actionName, body, headers, decision.host);

    // Unified report rule: any Allow()==true request MUST Report() once.
    // A non-failover error (business 4xx / throttling) counts as a
    // "success" for the endpoint so the HalfOpen probe slot is released
    // (fixes P7). decision.breaker == nullptr (bypass / bottom) -> no-op.
    bool ok = outcome.IsSuccess() ||
              !IsFailoverTriggering(outcome.GetError().GetErrorCode());
    ReportResult(decision.breaker, ok);

    return outcome;
}

void AbstractClient::GenerateSignature(HttpRequest &request)
{
    int64_t currentTime;
    string credDate;
    Utils::GetCurrentTimeAndUtcDate(currentTime, credDate);
    request.AddHeader("X-TC-Timestamp", Utils::int2str(currentTime));
    string credentialScope = credDate + "/" + m_service + "/tc3_request";

    string serviceName = m_service;
    string canonicalUri = request.GetUrl().GetPath();
    string canonicalQueryString = "";
    string payloadHash;
    string method;

    if (request.GetMethod() == HttpRequest::Method::POST)
    {
        method = "POST";
        payloadHash = Utils::HashSha256(string(request.Body(), request.BodySize()));
    }
    Http::HeaderCollection headers = request.Headers();
    string canonicalHeaders = "content-type:" + headers[string("Content-Type")] + "\nhost:"
                        + headers["Host"] + "\n";
    string signedHeaders = "content-type;host";
    string canonicalRequest = method + "\n" + canonicalUri + "\n" + canonicalQueryString
                       + "\n" + canonicalHeaders + "\n" + signedHeaders + "\n" + payloadHash;

    string algorithm = "TC3-HMAC-SHA256";
    string cannonicalRequestHash = Utils::HashSha256(canonicalRequest);
    string stringToSign = algorithm + "\n" +  headers["X-TC-Timestamp"] +
                            "\n" +  credentialScope + "\n" + cannonicalRequestHash;

    string secretId = m_credential.GetSecretId();
    string secretKey = m_credential.GetSecretKey();
    Sign signHandler(secretId, secretKey);
    string signature = signHandler.Tc3Sign(credDate, serviceName, stringToSign);

    string authorization = "TC3-HMAC-SHA256 Credential=" + secretId + "/" + credentialScope
                           + ", SignedHeaders=content-type;host" + ", Signature=" + signature;
    request.AddHeader("Authorization", authorization);
}
