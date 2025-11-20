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

#include <tencentcloud/habo/v20181203/HaboClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Habo::V20181203;
using namespace TencentCloud::Habo::V20181203::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-03";
    const string ENDPOINT = "habo.tencentcloudapi.com";
}

HaboClient::HaboClient(const Credential &credential, const string &region) :
    HaboClient(credential, region, ClientProfile())
{
}

HaboClient::HaboClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HaboClient::DescribeStatusOutcome HaboClient::DescribeStatus(const DescribeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatusResponse rsp = DescribeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatusOutcome(rsp);
        else
            return DescribeStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeStatusOutcome(outcome.GetError());
    }
}

void HaboClient::DescribeStatusAsync(const DescribeStatusRequest& request, const DescribeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatusRequest&;
    using Resp = DescribeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaboClient::DescribeStatusOutcomeCallable HaboClient::DescribeStatusCallable(const DescribeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatusOutcome>>();
    DescribeStatusAsync(
    request,
    [prom](
        const HaboClient*,
        const DescribeStatusRequest&,
        DescribeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HaboClient::StartAnalyseOutcome HaboClient::StartAnalyse(const StartAnalyseRequest &request)
{
    auto outcome = MakeRequest(request, "StartAnalyse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAnalyseResponse rsp = StartAnalyseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAnalyseOutcome(rsp);
        else
            return StartAnalyseOutcome(o.GetError());
    }
    else
    {
        return StartAnalyseOutcome(outcome.GetError());
    }
}

void HaboClient::StartAnalyseAsync(const StartAnalyseRequest& request, const StartAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAnalyseRequest&;
    using Resp = StartAnalyseResponse;

    DoRequestAsync<Req, Resp>(
        "StartAnalyse", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HaboClient::StartAnalyseOutcomeCallable HaboClient::StartAnalyseCallable(const StartAnalyseRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAnalyseOutcome>>();
    StartAnalyseAsync(
    request,
    [prom](
        const HaboClient*,
        const StartAnalyseRequest&,
        StartAnalyseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

