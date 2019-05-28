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

#include <tencentcloud/msp/v20180319/MspClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Msp::V20180319;
using namespace TencentCloud::Msp::V20180319::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-19";
    const string ENDPOINT = "msp.tencentcloudapi.com";
}

MspClient::MspClient(const Credential &credential, const string &region) :
    MspClient(credential, region, ClientProfile())
{
}

MspClient::MspClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MspClient::DeregisterMigrationTaskOutcome MspClient::DeregisterMigrationTask(const DeregisterMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterMigrationTaskResponse rsp = DeregisterMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterMigrationTaskOutcome(rsp);
        else
            return DeregisterMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeregisterMigrationTaskOutcome(outcome.GetError());
    }
}

void MspClient::DeregisterMigrationTaskAsync(const DeregisterMigrationTaskRequest& request, const DeregisterMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeregisterMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::DeregisterMigrationTaskOutcomeCallable MspClient::DeregisterMigrationTaskCallable(const DeregisterMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeregisterMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DeregisterMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::DescribeMigrationTaskOutcome MspClient::DescribeMigrationTask(const DescribeMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationTaskResponse rsp = DescribeMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationTaskOutcome(rsp);
        else
            return DescribeMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationTaskOutcome(outcome.GetError());
    }
}

void MspClient::DescribeMigrationTaskAsync(const DescribeMigrationTaskRequest& request, const DescribeMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::DescribeMigrationTaskOutcomeCallable MspClient::DescribeMigrationTaskCallable(const DescribeMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::ListMigrationProjectOutcome MspClient::ListMigrationProject(const ListMigrationProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ListMigrationProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMigrationProjectResponse rsp = ListMigrationProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMigrationProjectOutcome(rsp);
        else
            return ListMigrationProjectOutcome(o.GetError());
    }
    else
    {
        return ListMigrationProjectOutcome(outcome.GetError());
    }
}

void MspClient::ListMigrationProjectAsync(const ListMigrationProjectRequest& request, const ListMigrationProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListMigrationProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::ListMigrationProjectOutcomeCallable MspClient::ListMigrationProjectCallable(const ListMigrationProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListMigrationProjectOutcome()>>(
        [this, request]()
        {
            return this->ListMigrationProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::ListMigrationTaskOutcome MspClient::ListMigrationTask(const ListMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ListMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListMigrationTaskResponse rsp = ListMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListMigrationTaskOutcome(rsp);
        else
            return ListMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return ListMigrationTaskOutcome(outcome.GetError());
    }
}

void MspClient::ListMigrationTaskAsync(const ListMigrationTaskRequest& request, const ListMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::ListMigrationTaskOutcomeCallable MspClient::ListMigrationTaskCallable(const ListMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->ListMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::ModifyMigrationTaskBelongToProjectOutcome MspClient::ModifyMigrationTaskBelongToProject(const ModifyMigrationTaskBelongToProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrationTaskBelongToProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationTaskBelongToProjectResponse rsp = ModifyMigrationTaskBelongToProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationTaskBelongToProjectOutcome(rsp);
        else
            return ModifyMigrationTaskBelongToProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationTaskBelongToProjectOutcome(outcome.GetError());
    }
}

void MspClient::ModifyMigrationTaskBelongToProjectAsync(const ModifyMigrationTaskBelongToProjectRequest& request, const ModifyMigrationTaskBelongToProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrationTaskBelongToProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::ModifyMigrationTaskBelongToProjectOutcomeCallable MspClient::ModifyMigrationTaskBelongToProjectCallable(const ModifyMigrationTaskBelongToProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrationTaskBelongToProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrationTaskBelongToProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::ModifyMigrationTaskStatusOutcome MspClient::ModifyMigrationTaskStatus(const ModifyMigrationTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrationTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationTaskStatusResponse rsp = ModifyMigrationTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationTaskStatusOutcome(rsp);
        else
            return ModifyMigrationTaskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationTaskStatusOutcome(outcome.GetError());
    }
}

void MspClient::ModifyMigrationTaskStatusAsync(const ModifyMigrationTaskStatusRequest& request, const ModifyMigrationTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigrationTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::ModifyMigrationTaskStatusOutcomeCallable MspClient::ModifyMigrationTaskStatusCallable(const ModifyMigrationTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrationTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigrationTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MspClient::RegisterMigrationTaskOutcome MspClient::RegisterMigrationTask(const RegisterMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterMigrationTaskResponse rsp = RegisterMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterMigrationTaskOutcome(rsp);
        else
            return RegisterMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return RegisterMigrationTaskOutcome(outcome.GetError());
    }
}

void MspClient::RegisterMigrationTaskAsync(const RegisterMigrationTaskRequest& request, const RegisterMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MspClient::RegisterMigrationTaskOutcomeCallable MspClient::RegisterMigrationTaskCallable(const RegisterMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->RegisterMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

