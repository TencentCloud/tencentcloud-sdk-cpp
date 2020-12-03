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

#include <tencentcloud/tic/v20201117/TicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tic::V20201117;
using namespace TencentCloud::Tic::V20201117::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-17";
    const string ENDPOINT = "tic.tencentcloudapi.com";
}

TicClient::TicClient(const Credential &credential, const string &region) :
    TicClient(credential, region, ClientProfile())
{
}

TicClient::TicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TicClient::ApplyStackOutcome TicClient::ApplyStack(const ApplyStackRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyStackResponse rsp = ApplyStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyStackOutcome(rsp);
        else
            return ApplyStackOutcome(o.GetError());
    }
    else
    {
        return ApplyStackOutcome(outcome.GetError());
    }
}

void TicClient::ApplyStackAsync(const ApplyStackRequest& request, const ApplyStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::ApplyStackOutcomeCallable TicClient::ApplyStackCallable(const ApplyStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyStackOutcome()>>(
        [this, request]()
        {
            return this->ApplyStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::CreateStackOutcome TicClient::CreateStack(const CreateStackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStackResponse rsp = CreateStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStackOutcome(rsp);
        else
            return CreateStackOutcome(o.GetError());
    }
    else
    {
        return CreateStackOutcome(outcome.GetError());
    }
}

void TicClient::CreateStackAsync(const CreateStackRequest& request, const CreateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::CreateStackOutcomeCallable TicClient::CreateStackCallable(const CreateStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStackOutcome()>>(
        [this, request]()
        {
            return this->CreateStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::CreateStackVersionOutcome TicClient::CreateStackVersion(const CreateStackVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStackVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStackVersionResponse rsp = CreateStackVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStackVersionOutcome(rsp);
        else
            return CreateStackVersionOutcome(o.GetError());
    }
    else
    {
        return CreateStackVersionOutcome(outcome.GetError());
    }
}

void TicClient::CreateStackVersionAsync(const CreateStackVersionRequest& request, const CreateStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStackVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::CreateStackVersionOutcomeCallable TicClient::CreateStackVersionCallable(const CreateStackVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStackVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateStackVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DeleteStackOutcome TicClient::DeleteStack(const DeleteStackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStackResponse rsp = DeleteStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStackOutcome(rsp);
        else
            return DeleteStackOutcome(o.GetError());
    }
    else
    {
        return DeleteStackOutcome(outcome.GetError());
    }
}

void TicClient::DeleteStackAsync(const DeleteStackRequest& request, const DeleteStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DeleteStackOutcomeCallable TicClient::DeleteStackCallable(const DeleteStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStackOutcome()>>(
        [this, request]()
        {
            return this->DeleteStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DeleteStackVersionOutcome TicClient::DeleteStackVersion(const DeleteStackVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStackVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStackVersionResponse rsp = DeleteStackVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStackVersionOutcome(rsp);
        else
            return DeleteStackVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteStackVersionOutcome(outcome.GetError());
    }
}

void TicClient::DeleteStackVersionAsync(const DeleteStackVersionRequest& request, const DeleteStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStackVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DeleteStackVersionOutcomeCallable TicClient::DeleteStackVersionCallable(const DeleteStackVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStackVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteStackVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DescribeStackEventOutcome TicClient::DescribeStackEvent(const DescribeStackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStackEventResponse rsp = DescribeStackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStackEventOutcome(rsp);
        else
            return DescribeStackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeStackEventOutcome(outcome.GetError());
    }
}

void TicClient::DescribeStackEventAsync(const DescribeStackEventRequest& request, const DescribeStackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStackEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DescribeStackEventOutcomeCallable TicClient::DescribeStackEventCallable(const DescribeStackEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStackEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeStackEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DescribeStackEventsOutcome TicClient::DescribeStackEvents(const DescribeStackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStackEventsResponse rsp = DescribeStackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStackEventsOutcome(rsp);
        else
            return DescribeStackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeStackEventsOutcome(outcome.GetError());
    }
}

void TicClient::DescribeStackEventsAsync(const DescribeStackEventsRequest& request, const DescribeStackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStackEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DescribeStackEventsOutcomeCallable TicClient::DescribeStackEventsCallable(const DescribeStackEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStackEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStackEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DescribeStackVersionsOutcome TicClient::DescribeStackVersions(const DescribeStackVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStackVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStackVersionsResponse rsp = DescribeStackVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStackVersionsOutcome(rsp);
        else
            return DescribeStackVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeStackVersionsOutcome(outcome.GetError());
    }
}

void TicClient::DescribeStackVersionsAsync(const DescribeStackVersionsRequest& request, const DescribeStackVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStackVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DescribeStackVersionsOutcomeCallable TicClient::DescribeStackVersionsCallable(const DescribeStackVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStackVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStackVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DescribeStacksOutcome TicClient::DescribeStacks(const DescribeStacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStacksResponse rsp = DescribeStacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStacksOutcome(rsp);
        else
            return DescribeStacksOutcome(o.GetError());
    }
    else
    {
        return DescribeStacksOutcome(outcome.GetError());
    }
}

void TicClient::DescribeStacksAsync(const DescribeStacksRequest& request, const DescribeStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DescribeStacksOutcomeCallable TicClient::DescribeStacksCallable(const DescribeStacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeStacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::DestroyStackOutcome TicClient::DestroyStack(const DestroyStackRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyStackResponse rsp = DestroyStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyStackOutcome(rsp);
        else
            return DestroyStackOutcome(o.GetError());
    }
    else
    {
        return DestroyStackOutcome(outcome.GetError());
    }
}

void TicClient::DestroyStackAsync(const DestroyStackRequest& request, const DestroyStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::DestroyStackOutcomeCallable TicClient::DestroyStackCallable(const DestroyStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyStackOutcome()>>(
        [this, request]()
        {
            return this->DestroyStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::PlanStackOutcome TicClient::PlanStack(const PlanStackRequest &request)
{
    auto outcome = MakeRequest(request, "PlanStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PlanStackResponse rsp = PlanStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PlanStackOutcome(rsp);
        else
            return PlanStackOutcome(o.GetError());
    }
    else
    {
        return PlanStackOutcome(outcome.GetError());
    }
}

void TicClient::PlanStackAsync(const PlanStackRequest& request, const PlanStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PlanStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::PlanStackOutcomeCallable TicClient::PlanStackCallable(const PlanStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PlanStackOutcome()>>(
        [this, request]()
        {
            return this->PlanStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::UpdateStackOutcome TicClient::UpdateStack(const UpdateStackRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStackResponse rsp = UpdateStackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStackOutcome(rsp);
        else
            return UpdateStackOutcome(o.GetError());
    }
    else
    {
        return UpdateStackOutcome(outcome.GetError());
    }
}

void TicClient::UpdateStackAsync(const UpdateStackRequest& request, const UpdateStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateStack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::UpdateStackOutcomeCallable TicClient::UpdateStackCallable(const UpdateStackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateStackOutcome()>>(
        [this, request]()
        {
            return this->UpdateStack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TicClient::UpdateStackVersionOutcome TicClient::UpdateStackVersion(const UpdateStackVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStackVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStackVersionResponse rsp = UpdateStackVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStackVersionOutcome(rsp);
        else
            return UpdateStackVersionOutcome(o.GetError());
    }
    else
    {
        return UpdateStackVersionOutcome(outcome.GetError());
    }
}

void TicClient::UpdateStackVersionAsync(const UpdateStackVersionRequest& request, const UpdateStackVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateStackVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TicClient::UpdateStackVersionOutcomeCallable TicClient::UpdateStackVersionCallable(const UpdateStackVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateStackVersionOutcome()>>(
        [this, request]()
        {
            return this->UpdateStackVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

