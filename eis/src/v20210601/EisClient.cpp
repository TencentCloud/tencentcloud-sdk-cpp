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

#include <tencentcloud/eis/v20210601/EisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Eis::V20210601;
using namespace TencentCloud::Eis::V20210601::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-06-01";
    const string ENDPOINT = "eis.tencentcloudapi.com";
}

EisClient::EisClient(const Credential &credential, const string &region) :
    EisClient(credential, region, ClientProfile())
{
}

EisClient::EisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EisClient::GetRuntimeMCOutcome EisClient::GetRuntimeMC(const GetRuntimeMCRequest &request)
{
    auto outcome = MakeRequest(request, "GetRuntimeMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuntimeMCResponse rsp = GetRuntimeMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuntimeMCOutcome(rsp);
        else
            return GetRuntimeMCOutcome(o.GetError());
    }
    else
    {
        return GetRuntimeMCOutcome(outcome.GetError());
    }
}

void EisClient::GetRuntimeMCAsync(const GetRuntimeMCRequest& request, const GetRuntimeMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRuntimeMC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::GetRuntimeMCOutcomeCallable EisClient::GetRuntimeMCCallable(const GetRuntimeMCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRuntimeMCOutcome()>>(
        [this, request]()
        {
            return this->GetRuntimeMC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::GetRuntimeResourceMonitorMetricMCOutcome EisClient::GetRuntimeResourceMonitorMetricMC(const GetRuntimeResourceMonitorMetricMCRequest &request)
{
    auto outcome = MakeRequest(request, "GetRuntimeResourceMonitorMetricMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRuntimeResourceMonitorMetricMCResponse rsp = GetRuntimeResourceMonitorMetricMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRuntimeResourceMonitorMetricMCOutcome(rsp);
        else
            return GetRuntimeResourceMonitorMetricMCOutcome(o.GetError());
    }
    else
    {
        return GetRuntimeResourceMonitorMetricMCOutcome(outcome.GetError());
    }
}

void EisClient::GetRuntimeResourceMonitorMetricMCAsync(const GetRuntimeResourceMonitorMetricMCRequest& request, const GetRuntimeResourceMonitorMetricMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRuntimeResourceMonitorMetricMC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::GetRuntimeResourceMonitorMetricMCOutcomeCallable EisClient::GetRuntimeResourceMonitorMetricMCCallable(const GetRuntimeResourceMonitorMetricMCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRuntimeResourceMonitorMetricMCOutcome()>>(
        [this, request]()
        {
            return this->GetRuntimeResourceMonitorMetricMC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::ListDeployableRuntimesMCOutcome EisClient::ListDeployableRuntimesMC(const ListDeployableRuntimesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListDeployableRuntimesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDeployableRuntimesMCResponse rsp = ListDeployableRuntimesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDeployableRuntimesMCOutcome(rsp);
        else
            return ListDeployableRuntimesMCOutcome(o.GetError());
    }
    else
    {
        return ListDeployableRuntimesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListDeployableRuntimesMCAsync(const ListDeployableRuntimesMCRequest& request, const ListDeployableRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDeployableRuntimesMC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::ListDeployableRuntimesMCOutcomeCallable EisClient::ListDeployableRuntimesMCCallable(const ListDeployableRuntimesMCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDeployableRuntimesMCOutcome()>>(
        [this, request]()
        {
            return this->ListDeployableRuntimesMC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::ListRuntimeDeployedInstancesMCOutcome EisClient::ListRuntimeDeployedInstancesMC(const ListRuntimeDeployedInstancesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListRuntimeDeployedInstancesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRuntimeDeployedInstancesMCResponse rsp = ListRuntimeDeployedInstancesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRuntimeDeployedInstancesMCOutcome(rsp);
        else
            return ListRuntimeDeployedInstancesMCOutcome(o.GetError());
    }
    else
    {
        return ListRuntimeDeployedInstancesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListRuntimeDeployedInstancesMCAsync(const ListRuntimeDeployedInstancesMCRequest& request, const ListRuntimeDeployedInstancesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRuntimeDeployedInstancesMC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::ListRuntimeDeployedInstancesMCOutcomeCallable EisClient::ListRuntimeDeployedInstancesMCCallable(const ListRuntimeDeployedInstancesMCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRuntimeDeployedInstancesMCOutcome()>>(
        [this, request]()
        {
            return this->ListRuntimeDeployedInstancesMC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EisClient::ListRuntimesMCOutcome EisClient::ListRuntimesMC(const ListRuntimesMCRequest &request)
{
    auto outcome = MakeRequest(request, "ListRuntimesMC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRuntimesMCResponse rsp = ListRuntimesMCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRuntimesMCOutcome(rsp);
        else
            return ListRuntimesMCOutcome(o.GetError());
    }
    else
    {
        return ListRuntimesMCOutcome(outcome.GetError());
    }
}

void EisClient::ListRuntimesMCAsync(const ListRuntimesMCRequest& request, const ListRuntimesMCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRuntimesMC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EisClient::ListRuntimesMCOutcomeCallable EisClient::ListRuntimesMCCallable(const ListRuntimesMCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRuntimesMCOutcome()>>(
        [this, request]()
        {
            return this->ListRuntimesMC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

