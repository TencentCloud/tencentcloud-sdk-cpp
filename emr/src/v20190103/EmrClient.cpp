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

#include <tencentcloud/emr/v20190103/EmrClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Emr::V20190103;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-03";
    const string ENDPOINT = "emr.tencentcloudapi.com";
}

EmrClient::EmrClient(const Credential &credential, const string &region) :
    EmrClient(credential, region, ClientProfile())
{
}

EmrClient::EmrClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EmrClient::CreateInstanceOutcome EmrClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateInstanceOutcomeCallable EmrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeClusterNodesOutcome EmrClient::DescribeClusterNodes(const DescribeClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterNodesResponse rsp = DescribeClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterNodesOutcome(rsp);
        else
            return DescribeClusterNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeClusterNodesOutcomeCallable EmrClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstancesOutcome EmrClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void EmrClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesOutcomeCallable EmrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
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

EmrClient::InquiryPriceCreateInstanceOutcome EmrClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateInstanceResponse rsp = InquiryPriceCreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateInstanceOutcome(rsp);
        else
            return InquiryPriceCreateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceCreateInstanceOutcomeCallable EmrClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceRenewInstanceOutcome EmrClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstanceResponse rsp = InquiryPriceRenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstanceOutcome(rsp);
        else
            return InquiryPriceRenewInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceRenewInstanceOutcomeCallable EmrClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceScaleOutInstanceOutcome EmrClient::InquiryPriceScaleOutInstance(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceScaleOutInstanceResponse rsp = InquiryPriceScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceScaleOutInstanceOutcome(rsp);
        else
            return InquiryPriceScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceScaleOutInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceScaleOutInstanceAsync(const InquiryPriceScaleOutInstanceRequest& request, const InquiryPriceScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceScaleOutInstanceOutcomeCallable EmrClient::InquiryPriceScaleOutInstanceCallable(const InquiryPriceScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquiryPriceUpdateInstanceOutcome EmrClient::InquiryPriceUpdateInstance(const InquiryPriceUpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpdateInstanceResponse rsp = InquiryPriceUpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpdateInstanceOutcome(rsp);
        else
            return InquiryPriceUpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpdateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::InquiryPriceUpdateInstanceAsync(const InquiryPriceUpdateInstanceRequest& request, const InquiryPriceUpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpdateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquiryPriceUpdateInstanceOutcomeCallable EmrClient::InquiryPriceUpdateInstanceCallable(const InquiryPriceUpdateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpdateInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpdateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ScaleOutInstanceOutcome EmrClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ScaleOutInstanceOutcomeCallable EmrClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutInstanceOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateInstanceOutcome EmrClient::TerminateInstance(const TerminateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstanceResponse rsp = TerminateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstanceOutcome(rsp);
        else
            return TerminateInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateInstanceAsync(const TerminateInstanceRequest& request, const TerminateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateInstanceOutcomeCallable EmrClient::TerminateInstanceCallable(const TerminateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateTasksOutcome EmrClient::TerminateTasks(const TerminateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTasksResponse rsp = TerminateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTasksOutcome(rsp);
        else
            return TerminateTasksOutcome(o.GetError());
    }
    else
    {
        return TerminateTasksOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateTasksAsync(const TerminateTasksRequest& request, const TerminateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateTasksOutcomeCallable EmrClient::TerminateTasksCallable(const TerminateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateTasksOutcome()>>(
        [this, request]()
        {
            return this->TerminateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

