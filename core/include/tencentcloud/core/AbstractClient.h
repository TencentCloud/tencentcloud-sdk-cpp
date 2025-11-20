/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
#include "AbstractModel.h"
#include <map>

namespace TencentCloud
{
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
    };
}

template <typename Req, typename Resp>
void TencentCloud::AbstractClient::DoRequestAsync(
    std::string action, Req req, ReqOpts opts, AsyncCompletionHandler<Req, Resp> handler)
{
    using RequestOutcome = Outcome<Core::Error, Resp>;
    const auto& http_profile = m_clientProfile.GetHttpProfile();
    std::string endpoint = http_profile.GetEndpoint();
    if (endpoint.empty())
    {
        endpoint = m_endpoint;
    }

    std::string::size_type pos = endpoint.find_first_of('.');
    if (pos != std::string::npos)
        m_service = endpoint.substr(0, pos);
    else
    {
        m_service = "unknown";
        Core::Error err("ClientError", "endpoint `" + endpoint + "` is not valid");
        handler(req, RequestOutcome(err));
        return;
    }

    Url url;
    url.SetHost(endpoint);
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

    m_httpClient->SendRequestAsync(http_req, [req, handler](HttpClient::HttpResponseOutcome http_resp)
    {
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
