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
    ///      worker; its completion callback captures `this` and touches
    ///      m_endpointBreakers via ReportResult(). Correctness of those
    ///      callbacks relies on the invariant that by the time
    ///      ~AbstractClient() proceeds past `delete m_httpClient`, the
    ///      worker has been joined and no callback is still running.
    ///      The destructor is written to preserve this ordering; DO
    ///      NOT:
    ///        * reorder the dtor to release breakers before deleting
    ///          m_httpClient;
    ///        * replace m_httpClient with any lifetime management that
    ///          lets it outlive AbstractClient.
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
        // There are 4 endpoints in the fallback chain, but only the
        // first 3 need a circuit breaker -- the last one is the bottom
        // fallback and never needs to "fail over" to anything:
        //
        //   breaker[0] : primary endpoint (user-supplied)
        //   breaker[1] : BackupEndpoint   (fallback_index=0; skipped if not set)
        //   breaker[2] : 1st TLD fallback (fallback_index=1)
        //   (no breaker): 2nd TLD fallback (fallback_index=2) <- last resort
        //
        //   TLD ring: .com → .com.cn → .cn → .com → ...
        //   Examples (primary = .com, no BackupEndpoint):
        //     breaker[0]: cvm.ap-shanghai.tencentcloudapi.com
        //     breaker[1]: (skipped, BackupEndpoint empty)
        //     breaker[2]: cvm.tencentcloudapi.com.cn
        //     bottom:     cvm.tencentcloudapi.cn
        //
        // Semantics: breaker[i] Open means "the endpoint currently
        // handled by this breaker is unhealthy -- the next request
        // should skip past it to endpoint i+1". When all three
        // breakers are Open, requests go to the bottom TLD (no breaker
        // needed since there is no further fallback).
        //
        // For any single request, at most ONE breaker is Allow()ed ==
        // true, and that breaker is the only one that receives a
        // Report() call. Breakers whose Allow() returned false are not
        // reported; they recover via their own Open-to-HalfOpen
        // timeout.
        //
        // Size == DomainFailoverManager::GetBreakerSlotCount() (== 3).
        //
        // Stored as raw pointers (new[]/delete[] in Init/Release) to
        // preserve AbstractClient's implicit copyability -- adding
        // unique_ptr would make the class non-copyable and break
        // backward compatibility even though no one actually copies
        // a Client instance. The ownership is clear: AbstractClient
        // creates them in the ctor and destroys them in the dtor.
        CircuitBreaker **m_endpointBreakers;
        int m_endpointBreakerCount;

        void InitRegionBreakers();
        void ReleaseRegionBreakers();

        /// Pick the endpoint to use for this request.
        /// |out_allowed_breaker_idx| is set to the index (0..2) of the
        /// breaker that returned Allow() == true (the breaker
        /// associated with the endpoint this request will use), or -1
        /// in the following cases:
        ///   - region failover disabled (no breaker consulted)
        ///   - non-TencentCloud primary endpoint (breakers bypassed)
        ///   - all three breakers are Open, so the request falls
        ///     through to the bottom TLD endpoint (the last in the
        ///     ring) which has no breaker to report to
        /// In any of these cases, ReportResult() is a no-op.
        std::string SelectEndpoint(const std::string &primary_endpoint,
                                    int &out_allowed_breaker_idx);

        /// Report the request outcome to the single breaker that
        /// Allow()ed this request. |allowed_breaker_idx| == -1 is a
        /// no-op (see SelectEndpoint for when that happens).
        void ReportResult(int allowed_breaker_idx, bool success);

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
    int allowed_breaker_idx = -1;
    std::string resolved_endpoint = SelectEndpoint(primary_endpoint, allowed_breaker_idx);

    std::string::size_type pos = resolved_endpoint.find_first_of('.');
    if (pos != std::string::npos)
        m_service = resolved_endpoint.substr(0, pos);
    else
    {
        m_service = "unknown";
        // Endpoint is syntactically invalid and cannot be used.
        // Release the HalfOpen probe slot SelectEndpoint reserved, so
        // invalid-endpoint paths don't leak breaker probe capacity.
        ReportResult(allowed_breaker_idx, /*success=*/false);
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

    // Capture |allowed_breaker_idx| (a plain int) so the async
    // callback can Report() via AbstractClient's method.
    //
    // Capturing `this` is safe because of the lifetime contract
    // documented on the AbstractClient class: ~AbstractClient() deletes
    // m_httpClient first, which joins the async worker and guarantees
    // no callback is running before m_endpointBreakers is released.
    // Breaking that contract (e.g. reordering the dtor, or sharing
    // HttpClient across longer-lived owners) turns this capture into a
    // dangling-this bug.
    m_httpClient->SendRequestAsync(http_req,
        [this, req, handler, allowed_breaker_idx](
            HttpClient::HttpResponseOutcome http_resp) mutable
    {
        if (!http_resp.IsSuccess())
        {
            const auto& error_code = http_resp.GetError().GetErrorCode();
            if (IsFailoverTriggering(error_code)) {
                ReportResult(allowed_breaker_idx, /*success=*/false);
            }
            handler(req, RequestOutcome(http_resp.GetError()));
            return;
        }

        ReportResult(allowed_breaker_idx, /*success=*/true);

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
