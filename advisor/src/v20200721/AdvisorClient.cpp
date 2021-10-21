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

#include <tencentcloud/advisor/v20200721/AdvisorClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Advisor::V20200721;
using namespace TencentCloud::Advisor::V20200721::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-21";
    const string ENDPOINT = "advisor.tencentcloudapi.com";
}

AdvisorClient::AdvisorClient(const Credential &credential, const string &region) :
    AdvisorClient(credential, region, ClientProfile())
{
}

AdvisorClient::AdvisorClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AdvisorClient::DescribeStrategiesOutcome AdvisorClient::DescribeStrategies(const DescribeStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategiesResponse rsp = DescribeStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategiesOutcome(rsp);
        else
            return DescribeStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategiesOutcome(outcome.GetError());
    }
}

void AdvisorClient::DescribeStrategiesAsync(const DescribeStrategiesRequest& request, const DescribeStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStrategies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AdvisorClient::DescribeStrategiesOutcomeCallable AdvisorClient::DescribeStrategiesCallable(const DescribeStrategiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStrategiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeStrategies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AdvisorClient::DescribeTaskStrategyRisksOutcome AdvisorClient::DescribeTaskStrategyRisks(const DescribeTaskStrategyRisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStrategyRisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStrategyRisksResponse rsp = DescribeTaskStrategyRisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStrategyRisksOutcome(rsp);
        else
            return DescribeTaskStrategyRisksOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStrategyRisksOutcome(outcome.GetError());
    }
}

void AdvisorClient::DescribeTaskStrategyRisksAsync(const DescribeTaskStrategyRisksRequest& request, const DescribeTaskStrategyRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStrategyRisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AdvisorClient::DescribeTaskStrategyRisksOutcomeCallable AdvisorClient::DescribeTaskStrategyRisksCallable(const DescribeTaskStrategyRisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStrategyRisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStrategyRisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

