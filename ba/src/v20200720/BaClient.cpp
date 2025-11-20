/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ba/v20200720/BaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ba::V20200720;
using namespace TencentCloud::Ba::V20200720::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-20";
    const string ENDPOINT = "ba.tencentcloudapi.com";
}

BaClient::BaClient(const Credential &credential, const string &region) :
    BaClient(credential, region, ClientProfile())
{
}

BaClient::BaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BaClient::CreateWeappQRUrlOutcome BaClient::CreateWeappQRUrl(const CreateWeappQRUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWeappQRUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWeappQRUrlResponse rsp = CreateWeappQRUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWeappQRUrlOutcome(rsp);
        else
            return CreateWeappQRUrlOutcome(o.GetError());
    }
    else
    {
        return CreateWeappQRUrlOutcome(outcome.GetError());
    }
}

void BaClient::CreateWeappQRUrlAsync(const CreateWeappQRUrlRequest& request, const CreateWeappQRUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWeappQRUrlRequest&;
    using Resp = CreateWeappQRUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWeappQRUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BaClient::CreateWeappQRUrlOutcomeCallable BaClient::CreateWeappQRUrlCallable(const CreateWeappQRUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWeappQRUrlOutcome>>();
    CreateWeappQRUrlAsync(
    request,
    [prom](
        const BaClient*,
        const CreateWeappQRUrlRequest&,
        CreateWeappQRUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BaClient::DescribeGetAuthInfoOutcome BaClient::DescribeGetAuthInfo(const DescribeGetAuthInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGetAuthInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGetAuthInfoResponse rsp = DescribeGetAuthInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGetAuthInfoOutcome(rsp);
        else
            return DescribeGetAuthInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGetAuthInfoOutcome(outcome.GetError());
    }
}

void BaClient::DescribeGetAuthInfoAsync(const DescribeGetAuthInfoRequest& request, const DescribeGetAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGetAuthInfoRequest&;
    using Resp = DescribeGetAuthInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGetAuthInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BaClient::DescribeGetAuthInfoOutcomeCallable BaClient::DescribeGetAuthInfoCallable(const DescribeGetAuthInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGetAuthInfoOutcome>>();
    DescribeGetAuthInfoAsync(
    request,
    [prom](
        const BaClient*,
        const DescribeGetAuthInfoRequest&,
        DescribeGetAuthInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BaClient::SyncIcpOrderWebInfoOutcome BaClient::SyncIcpOrderWebInfo(const SyncIcpOrderWebInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SyncIcpOrderWebInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncIcpOrderWebInfoResponse rsp = SyncIcpOrderWebInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncIcpOrderWebInfoOutcome(rsp);
        else
            return SyncIcpOrderWebInfoOutcome(o.GetError());
    }
    else
    {
        return SyncIcpOrderWebInfoOutcome(outcome.GetError());
    }
}

void BaClient::SyncIcpOrderWebInfoAsync(const SyncIcpOrderWebInfoRequest& request, const SyncIcpOrderWebInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncIcpOrderWebInfoRequest&;
    using Resp = SyncIcpOrderWebInfoResponse;

    DoRequestAsync<Req, Resp>(
        "SyncIcpOrderWebInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BaClient::SyncIcpOrderWebInfoOutcomeCallable BaClient::SyncIcpOrderWebInfoCallable(const SyncIcpOrderWebInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncIcpOrderWebInfoOutcome>>();
    SyncIcpOrderWebInfoAsync(
    request,
    [prom](
        const BaClient*,
        const SyncIcpOrderWebInfoRequest&,
        SyncIcpOrderWebInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

