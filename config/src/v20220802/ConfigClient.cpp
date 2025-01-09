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

#include <tencentcloud/config/v20220802/ConfigClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Config::V20220802;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-02";
    const string ENDPOINT = "config.tencentcloudapi.com";
}

ConfigClient::ConfigClient(const Credential &credential, const string &region) :
    ConfigClient(credential, region, ClientProfile())
{
}

ConfigClient::ConfigClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ConfigClient::DescribeAggregateDiscoveredResourceOutcome ConfigClient::DescribeAggregateDiscoveredResource(const DescribeAggregateDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAggregateDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAggregateDiscoveredResourceResponse rsp = DescribeAggregateDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAggregateDiscoveredResourceOutcome(rsp);
        else
            return DescribeAggregateDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeAggregateDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeAggregateDiscoveredResourceAsync(const DescribeAggregateDiscoveredResourceRequest& request, const DescribeAggregateDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAggregateDiscoveredResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::DescribeAggregateDiscoveredResourceOutcomeCallable ConfigClient::DescribeAggregateDiscoveredResourceCallable(const DescribeAggregateDiscoveredResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAggregateDiscoveredResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeAggregateDiscoveredResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::DescribeDiscoveredResourceOutcome ConfigClient::DescribeDiscoveredResource(const DescribeDiscoveredResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiscoveredResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiscoveredResourceResponse rsp = DescribeDiscoveredResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiscoveredResourceOutcome(rsp);
        else
            return DescribeDiscoveredResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDiscoveredResourceOutcome(outcome.GetError());
    }
}

void ConfigClient::DescribeDiscoveredResourceAsync(const DescribeDiscoveredResourceRequest& request, const DescribeDiscoveredResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiscoveredResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::DescribeDiscoveredResourceOutcomeCallable ConfigClient::DescribeDiscoveredResourceCallable(const DescribeDiscoveredResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiscoveredResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiscoveredResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::ListAggregateConfigRulesOutcome ConfigClient::ListAggregateConfigRules(const ListAggregateConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateConfigRulesResponse rsp = ListAggregateConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateConfigRulesOutcome(rsp);
        else
            return ListAggregateConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateConfigRulesAsync(const ListAggregateConfigRulesRequest& request, const ListAggregateConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAggregateConfigRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::ListAggregateConfigRulesOutcomeCallable ConfigClient::ListAggregateConfigRulesCallable(const ListAggregateConfigRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAggregateConfigRulesOutcome()>>(
        [this, request]()
        {
            return this->ListAggregateConfigRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::ListAggregateDiscoveredResourcesOutcome ConfigClient::ListAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAggregateDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAggregateDiscoveredResourcesResponse rsp = ListAggregateDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAggregateDiscoveredResourcesOutcome(rsp);
        else
            return ListAggregateDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListAggregateDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequest& request, const ListAggregateDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAggregateDiscoveredResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::ListAggregateDiscoveredResourcesOutcomeCallable ConfigClient::ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAggregateDiscoveredResourcesOutcome()>>(
        [this, request]()
        {
            return this->ListAggregateDiscoveredResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::ListConfigRulesOutcome ConfigClient::ListConfigRules(const ListConfigRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ListConfigRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConfigRulesResponse rsp = ListConfigRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConfigRulesOutcome(rsp);
        else
            return ListConfigRulesOutcome(o.GetError());
    }
    else
    {
        return ListConfigRulesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListConfigRulesAsync(const ListConfigRulesRequest& request, const ListConfigRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListConfigRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::ListConfigRulesOutcomeCallable ConfigClient::ListConfigRulesCallable(const ListConfigRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListConfigRulesOutcome()>>(
        [this, request]()
        {
            return this->ListConfigRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::ListDiscoveredResourcesOutcome ConfigClient::ListDiscoveredResources(const ListDiscoveredResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "ListDiscoveredResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDiscoveredResourcesResponse rsp = ListDiscoveredResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDiscoveredResourcesOutcome(rsp);
        else
            return ListDiscoveredResourcesOutcome(o.GetError());
    }
    else
    {
        return ListDiscoveredResourcesOutcome(outcome.GetError());
    }
}

void ConfigClient::ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequest& request, const ListDiscoveredResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDiscoveredResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::ListDiscoveredResourcesOutcomeCallable ConfigClient::ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDiscoveredResourcesOutcome()>>(
        [this, request]()
        {
            return this->ListDiscoveredResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ConfigClient::PutEvaluationsOutcome ConfigClient::PutEvaluations(const PutEvaluationsRequest &request)
{
    auto outcome = MakeRequest(request, "PutEvaluations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutEvaluationsResponse rsp = PutEvaluationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutEvaluationsOutcome(rsp);
        else
            return PutEvaluationsOutcome(o.GetError());
    }
    else
    {
        return PutEvaluationsOutcome(outcome.GetError());
    }
}

void ConfigClient::PutEvaluationsAsync(const PutEvaluationsRequest& request, const PutEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PutEvaluations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ConfigClient::PutEvaluationsOutcomeCallable ConfigClient::PutEvaluationsCallable(const PutEvaluationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PutEvaluationsOutcome()>>(
        [this, request]()
        {
            return this->PutEvaluations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

