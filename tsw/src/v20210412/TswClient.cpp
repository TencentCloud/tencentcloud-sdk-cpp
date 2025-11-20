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

#include <tencentcloud/tsw/v20210412/TswClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsw::V20210412;
using namespace TencentCloud::Tsw::V20210412::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-12";
    const string ENDPOINT = "tsw.tencentcloudapi.com";
}

TswClient::TswClient(const Credential &credential, const string &region) :
    TswClient(credential, region, ClientProfile())
{
}

TswClient::TswClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TswClient::DescribeComponentAlertObjectOutcome TswClient::DescribeComponentAlertObject(const DescribeComponentAlertObjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComponentAlertObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComponentAlertObjectResponse rsp = DescribeComponentAlertObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComponentAlertObjectOutcome(rsp);
        else
            return DescribeComponentAlertObjectOutcome(o.GetError());
    }
    else
    {
        return DescribeComponentAlertObjectOutcome(outcome.GetError());
    }
}

void TswClient::DescribeComponentAlertObjectAsync(const DescribeComponentAlertObjectRequest& request, const DescribeComponentAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComponentAlertObjectRequest&;
    using Resp = DescribeComponentAlertObjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComponentAlertObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TswClient::DescribeComponentAlertObjectOutcomeCallable TswClient::DescribeComponentAlertObjectCallable(const DescribeComponentAlertObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComponentAlertObjectOutcome>>();
    DescribeComponentAlertObjectAsync(
    request,
    [prom](
        const TswClient*,
        const DescribeComponentAlertObjectRequest&,
        DescribeComponentAlertObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TswClient::DescribeServiceAlertObjectOutcome TswClient::DescribeServiceAlertObject(const DescribeServiceAlertObjectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceAlertObject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceAlertObjectResponse rsp = DescribeServiceAlertObjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceAlertObjectOutcome(rsp);
        else
            return DescribeServiceAlertObjectOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceAlertObjectOutcome(outcome.GetError());
    }
}

void TswClient::DescribeServiceAlertObjectAsync(const DescribeServiceAlertObjectRequest& request, const DescribeServiceAlertObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceAlertObjectRequest&;
    using Resp = DescribeServiceAlertObjectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceAlertObject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TswClient::DescribeServiceAlertObjectOutcomeCallable TswClient::DescribeServiceAlertObjectCallable(const DescribeServiceAlertObjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceAlertObjectOutcome>>();
    DescribeServiceAlertObjectAsync(
    request,
    [prom](
        const TswClient*,
        const DescribeServiceAlertObjectRequest&,
        DescribeServiceAlertObjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TswClient::DescribeTokenOutcome TswClient::DescribeToken(const DescribeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTokenResponse rsp = DescribeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTokenOutcome(rsp);
        else
            return DescribeTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeTokenOutcome(outcome.GetError());
    }
}

void TswClient::DescribeTokenAsync(const DescribeTokenRequest& request, const DescribeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTokenRequest&;
    using Resp = DescribeTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TswClient::DescribeTokenOutcomeCallable TswClient::DescribeTokenCallable(const DescribeTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTokenOutcome>>();
    DescribeTokenAsync(
    request,
    [prom](
        const TswClient*,
        const DescribeTokenRequest&,
        DescribeTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

