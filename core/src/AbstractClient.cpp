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
    m_endpointBreakers(nullptr),
    m_endpointBreakerCount(0)
{
    InitRegionBreakers();
}

AbstractClient::~AbstractClient()
{
    // Order matters: deleting m_httpClient joins its async worker,
    // ensuring no DoRequestAsync callback is still running (and thus no
    // callback is still holding `this` or about to touch
    // m_endpointBreakers) by the time ReleaseRegionBreakers() runs.
    // Do NOT reorder these two lines. See the lifetime note in
    // AbstractClient.h.
    delete m_httpClient;
    ReleaseRegionBreakers();
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
    // Only allocate breakers when region failover is enabled.
    // When disabled, m_endpointBreakers stays nullptr and
    // SelectEndpoint early-returns without touching them.
    if (m_clientProfile.GetDisableRegionBreaker())
    {
        return;
    }
    m_endpointBreakerCount = DomainFailoverManager::GetBreakerSlotCount();
    RegionBreakerProfile rb_profile = m_clientProfile.GetRegionBreakerProfile();
    m_endpointBreakers = new CircuitBreaker*[m_endpointBreakerCount];
    for (int i = 0; i < m_endpointBreakerCount; ++i)
    {
        m_endpointBreakers[i] = new CircuitBreaker(rb_profile);
    }
}

void AbstractClient::ReleaseRegionBreakers()
{
    if (m_endpointBreakers != nullptr)
    {
        for (int i = 0; i < m_endpointBreakerCount; ++i)
        {
            delete m_endpointBreakers[i];
        }
        delete[] m_endpointBreakers;
        m_endpointBreakers = nullptr;
        m_endpointBreakerCount = 0;
    }
}

std::string AbstractClient::SelectEndpoint(const std::string &primary_endpoint,
                                            int &out_allowed_breaker_idx)
{
    out_allowed_breaker_idx = -1;

    // If region failover is disabled, always use the primary endpoint.
    if (m_clientProfile.GetDisableRegionBreaker())
    {
        return primary_endpoint;
    }
    // Guard: breakers were not allocated (e.g. failover was disabled
    // at construction time but enabled at runtime via SetClientProfile).
    if (m_endpointBreakers == nullptr || m_endpointBreakerCount == 0)
    {
        return primary_endpoint;
    }
    // Non-TencentCloud endpoints (e.g. custom proxy) bypass failover.
    if (!DomainFailoverManager::IsTencentCloudDomain(primary_endpoint))
    {
        return primary_endpoint;
    }

    RegionBreakerProfile rb_profile = m_clientProfile.GetRegionBreakerProfile();
    std::string backup_ep = rb_profile.GetBackupEndpoint();

    // Walk the fallback chain. At iteration |i| we:
    //   - compute |next| = the endpoint that |i|-th fallback target
    //     resolves to (or empty if that fallback is not configured,
    //     i.e. layer 0 with no BackupEndpoint);
    //   - consult m_endpointBreakers[i], which records the statistics
    //     of the endpoint currently held in |current|.
    //
    // If that breaker Allow()s, we stay on |current| and reply to the
    // caller that m_endpointBreakers[i] is the one to Report() back
    // to. Otherwise the breaker is Open -- |current| is unhealthy --
    // and we descend to |next|, consulting the next breaker on the
    // next iteration.
    //
    // If all breakers end up Open, the loop completes without setting
    // out_allowed_breaker_idx. |current| will be the last-resort
    // bottom TLD endpoint (the last in the ring after primary's TLD)
    // and out_allowed_breaker_idx stays -1: no breaker needs
    // to hear about this request because .cn is the bottom and has no
    // further fallback.
    std::string current = primary_endpoint;
    const int count = m_endpointBreakerCount;
    for (int i = 0; i < count; ++i)
    {
        std::string next = DomainFailoverManager::GetFallbackEndpoint(
            primary_endpoint, backup_ep, i);
        if (next.empty())
        {
            // This fallback slot is unused (e.g. layer 0 with no
            // BackupEndpoint). Skip WITHOUT consulting breaker[i];
            // it stays idle for this request. The next iteration
            // will consult breaker[i+1] for the |current| endpoint.
            continue;
        }

        if (m_endpointBreakers[i]->Allow())
        {
            // Breaker i says: "the endpoint you are currently on is
            // healthy -- stay." Remember this breaker so the outcome
            // can be reported back to it.
            out_allowed_breaker_idx = i;
            break;
        }
        // Breaker i Open: |current| is unhealthy. Descend.
        current = next;
    }
    return current;
}

void AbstractClient::ReportResult(int allowed_breaker_idx, bool success)
{
    if (allowed_breaker_idx >= 0 && m_endpointBreakers != nullptr)
    {
        m_endpointBreakers[allowed_breaker_idx]->Report(success);
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
    // the breaker (success or failover-triggering error).
    int allowed_breaker_idx = -1;
    string target_endpoint = SelectEndpoint(primary_endpoint, allowed_breaker_idx);

    auto outcome = DoRequestWithEndpoint(actionName, body, headers, target_endpoint);

    if (outcome.IsSuccess())
    {
        ReportResult(allowed_breaker_idx, /*success=*/true);
    }
    else
    {
        const auto &error_code = outcome.GetError().GetErrorCode();
        // ClientError here is raised by DoRequestWithEndpoint when the
        // resolved endpoint is syntactically invalid. That endpoint is
        // unusable, so release the HalfOpen probe slot Allow() reserved
        // for this request -- otherwise repeated invalid-endpoint paths
        // would leak probe capacity.
        if (IsFailoverTriggering(error_code) || error_code == "ClientError")
        {
            ReportResult(allowed_breaker_idx, /*success=*/false);
        }
    }

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
