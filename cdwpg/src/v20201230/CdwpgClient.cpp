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

#include <tencentcloud/cdwpg/v20201230/CdwpgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwpg::V20201230;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-30";
    const string ENDPOINT = "cdwpg.tencentcloudapi.com";
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region) :
    CdwpgClient(credential, region, ClientProfile())
{
}

CdwpgClient::CdwpgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwpgClient::CreateInstanceByApiOutcome CdwpgClient::CreateInstanceByApi(const CreateInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceByApiResponse rsp = CreateInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceByApiOutcome(rsp);
        else
            return CreateInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::CreateInstanceByApiAsync(const CreateInstanceByApiRequest& request, const CreateInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceByApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::CreateInstanceByApiOutcomeCallable CdwpgClient::CreateInstanceByApiCallable(const CreateInstanceByApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceByApiOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceByApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceOutcome CdwpgClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceOutcomeCallable CdwpgClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceInfoOutcome CdwpgClient::DescribeInstanceInfo(const DescribeInstanceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceInfoResponse rsp = DescribeInstanceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceInfoOutcome(rsp);
        else
            return DescribeInstanceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceInfoOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceInfoAsync(const DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceInfoOutcomeCallable CdwpgClient::DescribeInstanceInfoCallable(const DescribeInstanceInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstanceStateOutcome CdwpgClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstanceStateOutcomeCallable CdwpgClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeInstancesOutcome CdwpgClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeInstancesOutcomeCallable CdwpgClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DescribeSimpleInstancesOutcome CdwpgClient::DescribeSimpleInstances(const DescribeSimpleInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleInstancesResponse rsp = DescribeSimpleInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleInstancesOutcome(rsp);
        else
            return DescribeSimpleInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleInstancesOutcome(outcome.GetError());
    }
}

void CdwpgClient::DescribeSimpleInstancesAsync(const DescribeSimpleInstancesRequest& request, const DescribeSimpleInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSimpleInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DescribeSimpleInstancesOutcomeCallable CdwpgClient::DescribeSimpleInstancesCallable(const DescribeSimpleInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSimpleInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSimpleInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::DestroyInstanceByApiOutcome CdwpgClient::DestroyInstanceByApi(const DestroyInstanceByApiRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstanceByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceByApiResponse rsp = DestroyInstanceByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceByApiOutcome(rsp);
        else
            return DestroyInstanceByApiOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceByApiOutcome(outcome.GetError());
    }
}

void CdwpgClient::DestroyInstanceByApiAsync(const DestroyInstanceByApiRequest& request, const DestroyInstanceByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyInstanceByApi(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::DestroyInstanceByApiOutcomeCallable CdwpgClient::DestroyInstanceByApiCallable(const DestroyInstanceByApiRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyInstanceByApiOutcome()>>(
        [this, request]()
        {
            return this->DestroyInstanceByApi(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdwpgClient::ModifyInstanceOutcome CdwpgClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwpgClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdwpgClient::ModifyInstanceOutcomeCallable CdwpgClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

