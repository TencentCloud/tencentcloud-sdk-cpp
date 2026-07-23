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

#ifndef TENCENTCLOUD_CORE_ABSTRACTCLIENT_H_
#define TENCENTCLOUD_CORE_ABSTRACTCLIENT_H_

#include "Credential.h"
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/http/HttpClient.h>
#include <tencentcloud/core/DomainFailoverManager.h>
#include <tencentcloud/core/CircuitBreaker.h>
#include "AbstractModel.h"
#include <map>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

namespace TencentCloud
{
    /// Abstract base for all generated service clients.
    ///
    /// Thread safety & lifetime contract:
    ///
    ///   1. Set*() methods (SetClientProfile, SetCredential,
    ///      SetNetworkProxy, SetHeader, SetRegion) are NOT thread-safe
    ///      with concurrent DoRequest / DoRequestAsync calls. Configure
    ///      the client fully before issuing requests from multiple
    ///      threads.
    ///
    ///   2. DoRequestAsync() dispatches work on HttpClient's background
    ///      worker; its completion callback captures the selected
    ///      breaker as a std::shared_ptr<CircuitBreaker> (NOT `this`).
    ///      The breaker therefore stays alive for the whole callback
    ///      regardless of AbstractClient's destruction timing, so the
    ///      callback never dereferences a dangling client. The
    ///      destructor still deletes m_httpClient first to join the
    ///      worker before other members are torn down.
    class AbstractClient
    {
    public:
        AbstractClient(const std::string &endpoint, const std::string &version, const Credential &credential, const std::string &region);
        AbstractClient(const std::string &endpoint, const std::string &version, const Credential &credential, const std::string &region, const ClientProfile &profile);
        ~AbstractClient();

        void SetRegion(const std::string &region);
        std::string GetRegion() const;
        void SetClientProfile(const ClientProfile &profile);
        ClientProfile GetClientProfile() const;
        void SetCredential(const Credential &credential);
        Credential GetCredential() const;
        void SetNetworkProxy(const NetworkProxy &proxy);
        void SetHeader(const std::map<std::string, std::string> &headers);
        HttpClient::HttpResponseOutcome MakeRequestJson(const std::string &actionName, const std::string &params);
        HttpClient::HttpResponseOutcome MakeRequestOctetStream(const std::string &actionName, std::map<std::string, std::string> &headers, const std::string &body);

    protected:
        HttpClient::HttpResponseOutcome MakeRequest(const AbstractModel& request, const std::string &actionName);
        HttpClient::HttpResponseOutcome DoRequest(const std::string &actionName, const std::string &body, std::map<std::string, std::string> &headers);

        void GenerateSignature(HttpRequest &request);

        struct ReqOpts
        {
            std::unordered_map<std::string, std::string> headers;
        };

        template <typename Req, typename Resp>
        using AsyncCompletionHandler = std::function<void(Req, Outcome<Core::Error, Resp>)>;

        template <typename Req, typename Resp>
        void DoRequestAsync(std::string action, Req req, ReqOpts opts, AsyncCompletionHandler<Req, Resp> handler);

        // Result of picking an endpoint for one request.
        struct EndpointDecision
        {
            std::string host;  // endpoint to send to (always non-empty)
            // Breaker to report the outcome to; nullptr when bypassed
            // (failover disabled / non-TencentCloud) or when falling
            // through to the bottom fallback (force-send, no report).
            std::shared_ptr<CircuitBreaker> breaker;
        };

        // Get-or-create the breaker guarding |host| under |origin|.
        std::shared_ptr<CircuitBreaker> BreakerFor(const std::string &origin,
                                                   const std::string &host);

        // Pick the endpoint for this request. See EndpointDecision.
        EndpointDecision SelectEndpoint(const std::string &primary_endpoint);

        // Report the outcome to the breaker that Allow()ed this request.
        // |breaker| == nullptr is a no-op (bypass / bottom fallback).
        static void ReportResult(const std::shared_ptr<CircuitBreaker> &breaker,
                                 bool success);

    private:
        Credential m_credential;
        ClientProfile m_clientProfile;
        std::string m_endpoint;
        std::string m_region;
        std::string m_sdkVersion;
        std::string m_apiVersion;
        HttpClient *m_httpClient;
        std::string m_service;
        std::map<std::string, std::string> m_headers;

        // Region failover (domain-level circuit breaker).
        //
        // Breakers are keyed by (origin, host) in a lazily-populated
        // registry. The candidate list for a request is built by
        // DomainFailoverManager::BuildCandidates(); EVERY candidate
        // (including the last) is guarded by a breaker. If all breakers
        // are Open, SelectEndpoint falls back to the primary (origin)
        // without a breaker — force-sent, no report.
        //
        // shared_ptr is used so async completion callbacks can capture
        // the selected breaker directly; the breaker then outlives the
        // AbstractClient if needed, independent of destruction order.
        struct BreakerRegistry
        {
            std::mutex mutex;  // guards lazy insertion into |map|
            // key = origin + "\n" + host
            std::map<std::string, std::shared_ptr<CircuitBreaker> > map;
        };

        // nullptr when region failover is disabled -> fully bypassed.
        std::shared_ptr<BreakerRegistry> m_breakers;

        void InitRegionBreakers();

        static bool IsFailoverTriggering(const std::string &error_code);

        HttpClient::HttpResponseOutcome DoRequestWithEndpoint(
            const std::string &actionName, const std::string &body,
            std::map<std::string, std::string> &headers,
            const std::string &endpoint);
    };
}

template <typename Req, typename Resp>
void TencentCloud::AbstractClient::DoRequestAsync(
    std::string action, Req req, ReqOpts opts, AsyncCompletionHandler<Req, Resp> handler)
{
    using RequestOutcome = Outcome<Core::Error, Resp>;
    const auto& http_profile = m_clientProfile.GetHttpProfile();
    std::string primary_endpoint = http_profile.GetEndpoint();
    if (primary_endpoint.empty())
    {
        primary_endpoint = m_endpoint;
    }

    // Pick an endpoint for this request based on circuit breaker state.
    EndpointDecision decision = SelectEndpoint(primary_endpoint);
    std::string resolved_endpoint = decision.host;
    std::shared_ptr<CircuitBreaker> breaker = decision.breaker;

    std::string::size_type pos = resolved_endpoint.find_first_of('.');
    if (pos != std::string::npos)
        m_service = resolved_endpoint.substr(0, pos);
    else
    {
        m_service = "unknown";
        // Endpoint is syntactically invalid and cannot be used.
        // Release the HalfOpen probe slot SelectEndpoint reserved, so
        // invalid-endpoint paths don't leak breaker probe capacity.
        ReportResult(breaker, /*success=*/false);
        Core::Error err("ClientError", "endpoint `" + resolved_endpoint + "` is not valid");
        handler(req, RequestOutcome(err));
        return;
    }

    Url url;
    url.SetHost(resolved_endpoint);
    HttpProfile::Scheme scheme = http_profile.GetProtocol();
    if (scheme == HttpProfile::Scheme::HTTP)
        url.SetScheme("http");

    HttpRequest http_req(url);
    http_req.SetMethod(HttpRequest::Method::POST);
    http_req.SetBody(req.ToJsonString());
    http_req.AddHeader("Host", url.GetHost());
    http_req.AddHeader("X-TC-Action", action);
    http_req.AddHeader("X-TC-Version", m_apiVersion);
    if (!m_region.empty())
    {
        http_req.AddHeader("X-TC-Region", m_region);
    }

    std::string token = m_credential.GetToken();
    if (!token.empty())
    {
        http_req.AddHeader("X-TC-Token", token);
    }

    http_req.AddHeader("X-TC-RequestClient", m_sdkVersion);

    if (http_profile.IsKeepAlive())
    {
        http_req.AddHeader("Connection", "Keep-Alive");
    }
    else
    {
        http_req.AddHeader("Connection", "Close");
    }

    for (const auto& kv : opts.headers)
    {
        http_req.AddHeader(kv.first, kv.second);
    }
    for (const auto& kv : m_headers)
    {
        http_req.AddHeader(kv.first, kv.second);
    }

    GenerateSignature(http_req);
    m_httpClient->SetReqTimeout(http_profile.GetReqTimeout() * 1000);
    m_httpClient->SetConnectTimeout(http_profile.GetConnectTimeout() * 1000);

    // Align with the synchronous path: honor user-provided CA and
    // resolve-IP settings so that async requests respect HTTPS custom
    // trust anchors and forced DNS resolution.
    m_httpClient->SetCaInfo(http_profile.GetCaInfo());
    m_httpClient->SetCaPath(http_profile.GetCaPath());
    m_httpClient->SetResolveIp(http_profile.GetResolveIp());

    // Capture the selected breaker (a shared_ptr) so the async callback
    // can Report() to it. The breaker is kept alive by the captured
    // shared_ptr for the whole callback, independent of AbstractClient's
    // destruction order. The callback no longer captures `this`.
    m_httpClient->SendRequestAsync(http_req,
        [req, handler, breaker](
            HttpClient::HttpResponseOutcome http_resp) mutable
    {
        // Unified report rule: any Allow()==true request MUST Report()
        // exactly once. A non-failover error (business 4xx / throttling)
        // is treated as a "success" for the endpoint, so the HalfOpen
        // probe slot is released (fixes P7). |breaker| nullptr -> no-op.
        bool ok = http_resp.IsSuccess() ||
                  !IsFailoverTriggering(http_resp.GetError().GetErrorCode());
        ReportResult(breaker, ok);

        if (!http_resp.IsSuccess())
        {
            handler(req, RequestOutcome(http_resp.GetError()));
            return;
        }

        std::string http_resp_body{http_resp.GetResult().Body(), http_resp.GetResult().BodySize()};

        Resp resp{};
        auto r = resp.Deserialize(http_resp_body);
        if (r.IsSuccess())
        {
            handler(req, RequestOutcome(resp));
        }
        else
        {
            handler(req, RequestOutcome(r.GetError()));
        }
    });
}


#endif // !TENCENTCLOUD_CORE_ABSTRACTCLIENT_H_
