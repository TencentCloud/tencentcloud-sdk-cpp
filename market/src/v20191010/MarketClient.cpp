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

#include <tencentcloud/market/v20191010/MarketClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Market::V20191010;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-10";
    const string ENDPOINT = "market.tencentcloudapi.com";
}

MarketClient::MarketClient(const Credential &credential, const string &region) :
    MarketClient(credential, region, ClientProfile())
{
}

MarketClient::MarketClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MarketClient::FlowProductRemindOutcome MarketClient::FlowProductRemind(const FlowProductRemindRequest &request)
{
    auto outcome = MakeRequest(request, "FlowProductRemind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlowProductRemindResponse rsp = FlowProductRemindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlowProductRemindOutcome(rsp);
        else
            return FlowProductRemindOutcome(o.GetError());
    }
    else
    {
        return FlowProductRemindOutcome(outcome.GetError());
    }
}

void MarketClient::FlowProductRemindAsync(const FlowProductRemindRequest& request, const FlowProductRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FlowProductRemind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MarketClient::FlowProductRemindOutcomeCallable MarketClient::FlowProductRemindCallable(const FlowProductRemindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FlowProductRemindOutcome()>>(
        [this, request]()
        {
            return this->FlowProductRemind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MarketClient::GetUsagePlanUsageAmountOutcome MarketClient::GetUsagePlanUsageAmount(const GetUsagePlanUsageAmountRequest &request)
{
    auto outcome = MakeRequest(request, "GetUsagePlanUsageAmount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUsagePlanUsageAmountResponse rsp = GetUsagePlanUsageAmountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUsagePlanUsageAmountOutcome(rsp);
        else
            return GetUsagePlanUsageAmountOutcome(o.GetError());
    }
    else
    {
        return GetUsagePlanUsageAmountOutcome(outcome.GetError());
    }
}

void MarketClient::GetUsagePlanUsageAmountAsync(const GetUsagePlanUsageAmountRequest& request, const GetUsagePlanUsageAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUsagePlanUsageAmount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MarketClient::GetUsagePlanUsageAmountOutcomeCallable MarketClient::GetUsagePlanUsageAmountCallable(const GetUsagePlanUsageAmountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUsagePlanUsageAmountOutcome()>>(
        [this, request]()
        {
            return this->GetUsagePlanUsageAmount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

