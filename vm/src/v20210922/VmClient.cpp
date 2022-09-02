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

#include <tencentcloud/vm/v20210922/VmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vm::V20210922;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-09-22";
    const string ENDPOINT = "vm.tencentcloudapi.com";
}

VmClient::VmClient(const Credential &credential, const string &region) :
    VmClient(credential, region, ClientProfile())
{
}

VmClient::VmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VmClient::CancelTaskOutcome VmClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void VmClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmClient::CancelTaskOutcomeCallable VmClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelTaskOutcome()>>(
        [this, request]()
        {
            return this->CancelTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VmClient::CreateVideoModerationTaskOutcome VmClient::CreateVideoModerationTask(const CreateVideoModerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoModerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoModerationTaskResponse rsp = CreateVideoModerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoModerationTaskOutcome(rsp);
        else
            return CreateVideoModerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoModerationTaskOutcome(outcome.GetError());
    }
}

void VmClient::CreateVideoModerationTaskAsync(const CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoModerationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmClient::CreateVideoModerationTaskOutcomeCallable VmClient::CreateVideoModerationTaskCallable(const CreateVideoModerationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoModerationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoModerationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VmClient::DescribeTaskDetailOutcome VmClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void VmClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmClient::DescribeTaskDetailOutcomeCallable VmClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VmClient::DescribeTasksOutcome VmClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void VmClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VmClient::DescribeTasksOutcomeCallable VmClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

