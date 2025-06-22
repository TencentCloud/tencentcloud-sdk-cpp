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

#include <tencentcloud/trocket/v20230308/TrocketClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trocket::V20230308;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-08";
    const string ENDPOINT = "trocket.tencentcloudapi.com";
}

TrocketClient::TrocketClient(const Credential &credential, const string &region) :
    TrocketClient(credential, region, ClientProfile())
{
}

TrocketClient::TrocketClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrocketClient::ChangeMigratingTopicToNextStageOutcome TrocketClient::ChangeMigratingTopicToNextStage(const ChangeMigratingTopicToNextStageRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeMigratingTopicToNextStage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeMigratingTopicToNextStageResponse rsp = ChangeMigratingTopicToNextStageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeMigratingTopicToNextStageOutcome(rsp);
        else
            return ChangeMigratingTopicToNextStageOutcome(o.GetError());
    }
    else
    {
        return ChangeMigratingTopicToNextStageOutcome(outcome.GetError());
    }
}

void TrocketClient::ChangeMigratingTopicToNextStageAsync(const ChangeMigratingTopicToNextStageRequest& request, const ChangeMigratingTopicToNextStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChangeMigratingTopicToNextStage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ChangeMigratingTopicToNextStageOutcomeCallable TrocketClient::ChangeMigratingTopicToNextStageCallable(const ChangeMigratingTopicToNextStageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChangeMigratingTopicToNextStageOutcome()>>(
        [this, request]()
        {
            return this->ChangeMigratingTopicToNextStage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateConsumerGroupOutcome TrocketClient::CreateConsumerGroup(const CreateConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerGroupResponse rsp = CreateConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerGroupOutcome(rsp);
        else
            return CreateConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateConsumerGroupOutcomeCallable TrocketClient::CreateConsumerGroupCallable(const CreateConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateInstanceOutcome TrocketClient::CreateInstance(const CreateInstanceRequest &request)
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

void TrocketClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateInstanceOutcomeCallable TrocketClient::CreateInstanceCallable(const CreateInstanceRequest &request)
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

TrocketClient::CreateMQTTInsPublicEndpointOutcome TrocketClient::CreateMQTTInsPublicEndpoint(const CreateMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTInsPublicEndpointResponse rsp = CreateMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTInsPublicEndpointOutcome(rsp);
        else
            return CreateMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTInsPublicEndpointAsync(const CreateMQTTInsPublicEndpointRequest& request, const CreateMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMQTTInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateMQTTInsPublicEndpointOutcomeCallable TrocketClient::CreateMQTTInsPublicEndpointCallable(const CreateMQTTInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMQTTInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateMQTTInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateMQTTInstanceOutcome TrocketClient::CreateMQTTInstance(const CreateMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTInstanceResponse rsp = CreateMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTInstanceOutcome(rsp);
        else
            return CreateMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTInstanceAsync(const CreateMQTTInstanceRequest& request, const CreateMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMQTTInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateMQTTInstanceOutcomeCallable TrocketClient::CreateMQTTInstanceCallable(const CreateMQTTInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMQTTInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateMQTTInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateMQTTTopicOutcome TrocketClient::CreateMQTTTopic(const CreateMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTTopicResponse rsp = CreateMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTTopicOutcome(rsp);
        else
            return CreateMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTTopicAsync(const CreateMQTTTopicRequest& request, const CreateMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMQTTTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateMQTTTopicOutcomeCallable TrocketClient::CreateMQTTTopicCallable(const CreateMQTTTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMQTTTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateMQTTTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateMQTTUserOutcome TrocketClient::CreateMQTTUser(const CreateMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMQTTUserResponse rsp = CreateMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMQTTUserOutcome(rsp);
        else
            return CreateMQTTUserOutcome(o.GetError());
    }
    else
    {
        return CreateMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateMQTTUserAsync(const CreateMQTTUserRequest& request, const CreateMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMQTTUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateMQTTUserOutcomeCallable TrocketClient::CreateMQTTUserCallable(const CreateMQTTUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMQTTUserOutcome()>>(
        [this, request]()
        {
            return this->CreateMQTTUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateRoleOutcome TrocketClient::CreateRole(const CreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleResponse rsp = CreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleOutcome(rsp);
        else
            return CreateRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateRoleOutcomeCallable TrocketClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateTopicOutcome TrocketClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateTopicOutcomeCallable TrocketClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteConsumerGroupOutcome TrocketClient::DeleteConsumerGroup(const DeleteConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerGroupResponse rsp = DeleteConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerGroupOutcome(rsp);
        else
            return DeleteConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteConsumerGroupOutcomeCallable TrocketClient::DeleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteInstanceOutcome TrocketClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteInstanceOutcomeCallable TrocketClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteMQTTInsPublicEndpointOutcome TrocketClient::DeleteMQTTInsPublicEndpoint(const DeleteMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTInsPublicEndpointResponse rsp = DeleteMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTInsPublicEndpointOutcome(rsp);
        else
            return DeleteMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTInsPublicEndpointAsync(const DeleteMQTTInsPublicEndpointRequest& request, const DeleteMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMQTTInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteMQTTInsPublicEndpointOutcomeCallable TrocketClient::DeleteMQTTInsPublicEndpointCallable(const DeleteMQTTInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMQTTInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->DeleteMQTTInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteMQTTInstanceOutcome TrocketClient::DeleteMQTTInstance(const DeleteMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTInstanceResponse rsp = DeleteMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTInstanceOutcome(rsp);
        else
            return DeleteMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTInstanceAsync(const DeleteMQTTInstanceRequest& request, const DeleteMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMQTTInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteMQTTInstanceOutcomeCallable TrocketClient::DeleteMQTTInstanceCallable(const DeleteMQTTInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMQTTInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteMQTTInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteMQTTTopicOutcome TrocketClient::DeleteMQTTTopic(const DeleteMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTTopicResponse rsp = DeleteMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTTopicOutcome(rsp);
        else
            return DeleteMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTTopicAsync(const DeleteMQTTTopicRequest& request, const DeleteMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMQTTTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteMQTTTopicOutcomeCallable TrocketClient::DeleteMQTTTopicCallable(const DeleteMQTTTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMQTTTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteMQTTTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteMQTTUserOutcome TrocketClient::DeleteMQTTUser(const DeleteMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMQTTUserResponse rsp = DeleteMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMQTTUserOutcome(rsp);
        else
            return DeleteMQTTUserOutcome(o.GetError());
    }
    else
    {
        return DeleteMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteMQTTUserAsync(const DeleteMQTTUserRequest& request, const DeleteMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMQTTUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteMQTTUserOutcomeCallable TrocketClient::DeleteMQTTUserCallable(const DeleteMQTTUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMQTTUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteMQTTUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteRoleOutcome TrocketClient::DeleteRole(const DeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleResponse rsp = DeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleOutcome(rsp);
        else
            return DeleteRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteRoleOutcomeCallable TrocketClient::DeleteRoleCallable(const DeleteRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteSmoothMigrationTaskOutcome TrocketClient::DeleteSmoothMigrationTask(const DeleteSmoothMigrationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmoothMigrationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmoothMigrationTaskResponse rsp = DeleteSmoothMigrationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmoothMigrationTaskOutcome(rsp);
        else
            return DeleteSmoothMigrationTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteSmoothMigrationTaskOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteSmoothMigrationTaskAsync(const DeleteSmoothMigrationTaskRequest& request, const DeleteSmoothMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmoothMigrationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteSmoothMigrationTaskOutcomeCallable TrocketClient::DeleteSmoothMigrationTaskCallable(const DeleteSmoothMigrationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmoothMigrationTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmoothMigrationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteTopicOutcome TrocketClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteTopicOutcomeCallable TrocketClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerClientOutcome TrocketClient::DescribeConsumerClient(const DescribeConsumerClientRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerClientResponse rsp = DescribeConsumerClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerClientOutcome(rsp);
        else
            return DescribeConsumerClientOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerClientOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerClientAsync(const DescribeConsumerClientRequest& request, const DescribeConsumerClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerClient(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerClientOutcomeCallable TrocketClient::DescribeConsumerClientCallable(const DescribeConsumerClientRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerClientOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerClient(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerGroupOutcome TrocketClient::DescribeConsumerGroup(const DescribeConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupResponse rsp = DescribeConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupOutcome(rsp);
        else
            return DescribeConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerGroupOutcomeCallable TrocketClient::DescribeConsumerGroupCallable(const DescribeConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerGroupListOutcome TrocketClient::DescribeConsumerGroupList(const DescribeConsumerGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupListResponse rsp = DescribeConsumerGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupListOutcome(rsp);
        else
            return DescribeConsumerGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupListAsync(const DescribeConsumerGroupListRequest& request, const DescribeConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerGroupListOutcomeCallable TrocketClient::DescribeConsumerGroupListCallable(const DescribeConsumerGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerLagOutcome TrocketClient::DescribeConsumerLag(const DescribeConsumerLagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerLag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerLagResponse rsp = DescribeConsumerLagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerLagOutcome(rsp);
        else
            return DescribeConsumerLagOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerLagOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerLagAsync(const DescribeConsumerLagRequest& request, const DescribeConsumerLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerLag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerLagOutcomeCallable TrocketClient::DescribeConsumerLagCallable(const DescribeConsumerLagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerLagOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerLag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeFusionInstanceListOutcome TrocketClient::DescribeFusionInstanceList(const DescribeFusionInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFusionInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFusionInstanceListResponse rsp = DescribeFusionInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFusionInstanceListOutcome(rsp);
        else
            return DescribeFusionInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeFusionInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeFusionInstanceListAsync(const DescribeFusionInstanceListRequest& request, const DescribeFusionInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFusionInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeFusionInstanceListOutcomeCallable TrocketClient::DescribeFusionInstanceListCallable(const DescribeFusionInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFusionInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFusionInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeInstanceOutcome TrocketClient::DescribeInstance(const DescribeInstanceRequest &request)
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

void TrocketClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeInstanceOutcomeCallable TrocketClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
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

TrocketClient::DescribeInstanceListOutcome TrocketClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeInstanceListOutcomeCallable TrocketClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTClientOutcome TrocketClient::DescribeMQTTClient(const DescribeMQTTClientRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTClientResponse rsp = DescribeMQTTClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTClientOutcome(rsp);
        else
            return DescribeMQTTClientOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTClientOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTClientAsync(const DescribeMQTTClientRequest& request, const DescribeMQTTClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTClient(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTClientOutcomeCallable TrocketClient::DescribeMQTTClientCallable(const DescribeMQTTClientRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTClientOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTClient(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTInsPublicEndpointsOutcome TrocketClient::DescribeMQTTInsPublicEndpoints(const DescribeMQTTInsPublicEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInsPublicEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInsPublicEndpointsResponse rsp = DescribeMQTTInsPublicEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInsPublicEndpointsOutcome(rsp);
        else
            return DescribeMQTTInsPublicEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInsPublicEndpointsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInsPublicEndpointsAsync(const DescribeMQTTInsPublicEndpointsRequest& request, const DescribeMQTTInsPublicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTInsPublicEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTInsPublicEndpointsOutcomeCallable TrocketClient::DescribeMQTTInsPublicEndpointsCallable(const DescribeMQTTInsPublicEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTInsPublicEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTInsPublicEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTInsVPCEndpointsOutcome TrocketClient::DescribeMQTTInsVPCEndpoints(const DescribeMQTTInsVPCEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInsVPCEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInsVPCEndpointsResponse rsp = DescribeMQTTInsVPCEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInsVPCEndpointsOutcome(rsp);
        else
            return DescribeMQTTInsVPCEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInsVPCEndpointsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInsVPCEndpointsAsync(const DescribeMQTTInsVPCEndpointsRequest& request, const DescribeMQTTInsVPCEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTInsVPCEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTInsVPCEndpointsOutcomeCallable TrocketClient::DescribeMQTTInsVPCEndpointsCallable(const DescribeMQTTInsVPCEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTInsVPCEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTInsVPCEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTInstanceOutcome TrocketClient::DescribeMQTTInstance(const DescribeMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceResponse rsp = DescribeMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceOutcome(rsp);
        else
            return DescribeMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceAsync(const DescribeMQTTInstanceRequest& request, const DescribeMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTInstanceOutcomeCallable TrocketClient::DescribeMQTTInstanceCallable(const DescribeMQTTInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTInstanceCertOutcome TrocketClient::DescribeMQTTInstanceCert(const DescribeMQTTInstanceCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstanceCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceCertResponse rsp = DescribeMQTTInstanceCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceCertOutcome(rsp);
        else
            return DescribeMQTTInstanceCertOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceCertOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceCertAsync(const DescribeMQTTInstanceCertRequest& request, const DescribeMQTTInstanceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTInstanceCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTInstanceCertOutcomeCallable TrocketClient::DescribeMQTTInstanceCertCallable(const DescribeMQTTInstanceCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTInstanceCertOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTInstanceCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTInstanceListOutcome TrocketClient::DescribeMQTTInstanceList(const DescribeMQTTInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTInstanceListResponse rsp = DescribeMQTTInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTInstanceListOutcome(rsp);
        else
            return DescribeMQTTInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTInstanceListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTInstanceListAsync(const DescribeMQTTInstanceListRequest& request, const DescribeMQTTInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTInstanceListOutcomeCallable TrocketClient::DescribeMQTTInstanceListCallable(const DescribeMQTTInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTMessageOutcome TrocketClient::DescribeMQTTMessage(const DescribeMQTTMessageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTMessageResponse rsp = DescribeMQTTMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTMessageOutcome(rsp);
        else
            return DescribeMQTTMessageOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTMessageAsync(const DescribeMQTTMessageRequest& request, const DescribeMQTTMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTMessageOutcomeCallable TrocketClient::DescribeMQTTMessageCallable(const DescribeMQTTMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTMessageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTMessageListOutcome TrocketClient::DescribeMQTTMessageList(const DescribeMQTTMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTMessageListResponse rsp = DescribeMQTTMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTMessageListOutcome(rsp);
        else
            return DescribeMQTTMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTMessageListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTMessageListAsync(const DescribeMQTTMessageListRequest& request, const DescribeMQTTMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTMessageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTMessageListOutcomeCallable TrocketClient::DescribeMQTTMessageListCallable(const DescribeMQTTMessageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTMessageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTMessageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTProductSKUListOutcome TrocketClient::DescribeMQTTProductSKUList(const DescribeMQTTProductSKUListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTProductSKUList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTProductSKUListResponse rsp = DescribeMQTTProductSKUListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTProductSKUListOutcome(rsp);
        else
            return DescribeMQTTProductSKUListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTProductSKUListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTProductSKUListAsync(const DescribeMQTTProductSKUListRequest& request, const DescribeMQTTProductSKUListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTProductSKUList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTProductSKUListOutcomeCallable TrocketClient::DescribeMQTTProductSKUListCallable(const DescribeMQTTProductSKUListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTProductSKUListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTProductSKUList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTTopicOutcome TrocketClient::DescribeMQTTTopic(const DescribeMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTTopicResponse rsp = DescribeMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTTopicOutcome(rsp);
        else
            return DescribeMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTTopicAsync(const DescribeMQTTTopicRequest& request, const DescribeMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTTopicOutcomeCallable TrocketClient::DescribeMQTTTopicCallable(const DescribeMQTTTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTTopicListOutcome TrocketClient::DescribeMQTTTopicList(const DescribeMQTTTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTTopicListResponse rsp = DescribeMQTTTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTTopicListOutcome(rsp);
        else
            return DescribeMQTTTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTTopicListAsync(const DescribeMQTTTopicListRequest& request, const DescribeMQTTTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTTopicListOutcomeCallable TrocketClient::DescribeMQTTTopicListCallable(const DescribeMQTTTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMQTTUserListOutcome TrocketClient::DescribeMQTTUserList(const DescribeMQTTUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMQTTUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMQTTUserListResponse rsp = DescribeMQTTUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMQTTUserListOutcome(rsp);
        else
            return DescribeMQTTUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeMQTTUserListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMQTTUserListAsync(const DescribeMQTTUserListRequest& request, const DescribeMQTTUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMQTTUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMQTTUserListOutcomeCallable TrocketClient::DescribeMQTTUserListCallable(const DescribeMQTTUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMQTTUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMQTTUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMessageOutcome TrocketClient::DescribeMessage(const DescribeMessageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageResponse rsp = DescribeMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageOutcome(rsp);
        else
            return DescribeMessageOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageAsync(const DescribeMessageRequest& request, const DescribeMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMessageOutcomeCallable TrocketClient::DescribeMessageCallable(const DescribeMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMessageListOutcome TrocketClient::DescribeMessageList(const DescribeMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageListResponse rsp = DescribeMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageListOutcome(rsp);
        else
            return DescribeMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageListAsync(const DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMessageListOutcomeCallable TrocketClient::DescribeMessageListCallable(const DescribeMessageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMessageTraceOutcome TrocketClient::DescribeMessageTrace(const DescribeMessageTraceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageTraceResponse rsp = DescribeMessageTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageTraceOutcome(rsp);
        else
            return DescribeMessageTraceOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageTraceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMessageTraceAsync(const DescribeMessageTraceRequest& request, const DescribeMessageTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMessageTraceOutcomeCallable TrocketClient::DescribeMessageTraceCallable(const DescribeMessageTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageTraceOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMigratingGroupStatsOutcome TrocketClient::DescribeMigratingGroupStats(const DescribeMigratingGroupStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingGroupStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingGroupStatsResponse rsp = DescribeMigratingGroupStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingGroupStatsOutcome(rsp);
        else
            return DescribeMigratingGroupStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingGroupStatsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingGroupStatsAsync(const DescribeMigratingGroupStatsRequest& request, const DescribeMigratingGroupStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigratingGroupStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMigratingGroupStatsOutcomeCallable TrocketClient::DescribeMigratingGroupStatsCallable(const DescribeMigratingGroupStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigratingGroupStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigratingGroupStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMigratingTopicListOutcome TrocketClient::DescribeMigratingTopicList(const DescribeMigratingTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingTopicListResponse rsp = DescribeMigratingTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingTopicListOutcome(rsp);
        else
            return DescribeMigratingTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingTopicListAsync(const DescribeMigratingTopicListRequest& request, const DescribeMigratingTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigratingTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMigratingTopicListOutcomeCallable TrocketClient::DescribeMigratingTopicListCallable(const DescribeMigratingTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigratingTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigratingTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMigratingTopicStatsOutcome TrocketClient::DescribeMigratingTopicStats(const DescribeMigratingTopicStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigratingTopicStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigratingTopicStatsResponse rsp = DescribeMigratingTopicStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigratingTopicStatsOutcome(rsp);
        else
            return DescribeMigratingTopicStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigratingTopicStatsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigratingTopicStatsAsync(const DescribeMigratingTopicStatsRequest& request, const DescribeMigratingTopicStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigratingTopicStats(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMigratingTopicStatsOutcomeCallable TrocketClient::DescribeMigratingTopicStatsCallable(const DescribeMigratingTopicStatsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigratingTopicStatsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigratingTopicStats(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeMigrationTaskListOutcome TrocketClient::DescribeMigrationTaskList(const DescribeMigrationTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationTaskListResponse rsp = DescribeMigrationTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationTaskListOutcome(rsp);
        else
            return DescribeMigrationTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationTaskListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeMigrationTaskListAsync(const DescribeMigrationTaskListRequest& request, const DescribeMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeMigrationTaskListOutcomeCallable TrocketClient::DescribeMigrationTaskListCallable(const DescribeMigrationTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeProductSKUsOutcome TrocketClient::DescribeProductSKUs(const DescribeProductSKUsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductSKUs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductSKUsResponse rsp = DescribeProductSKUsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductSKUsOutcome(rsp);
        else
            return DescribeProductSKUsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductSKUsOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeProductSKUsAsync(const DescribeProductSKUsRequest& request, const DescribeProductSKUsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductSKUs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeProductSKUsOutcomeCallable TrocketClient::DescribeProductSKUsCallable(const DescribeProductSKUsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductSKUsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductSKUs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeRoleListOutcome TrocketClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeRoleListOutcomeCallable TrocketClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeSmoothMigrationTaskListOutcome TrocketClient::DescribeSmoothMigrationTaskList(const DescribeSmoothMigrationTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmoothMigrationTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmoothMigrationTaskListResponse rsp = DescribeSmoothMigrationTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmoothMigrationTaskListOutcome(rsp);
        else
            return DescribeSmoothMigrationTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeSmoothMigrationTaskListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeSmoothMigrationTaskListAsync(const DescribeSmoothMigrationTaskListRequest& request, const DescribeSmoothMigrationTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmoothMigrationTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeSmoothMigrationTaskListOutcomeCallable TrocketClient::DescribeSmoothMigrationTaskListCallable(const DescribeSmoothMigrationTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmoothMigrationTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmoothMigrationTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeSourceClusterGroupListOutcome TrocketClient::DescribeSourceClusterGroupList(const DescribeSourceClusterGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceClusterGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceClusterGroupListResponse rsp = DescribeSourceClusterGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceClusterGroupListOutcome(rsp);
        else
            return DescribeSourceClusterGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceClusterGroupListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeSourceClusterGroupListAsync(const DescribeSourceClusterGroupListRequest& request, const DescribeSourceClusterGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSourceClusterGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeSourceClusterGroupListOutcomeCallable TrocketClient::DescribeSourceClusterGroupListCallable(const DescribeSourceClusterGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSourceClusterGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSourceClusterGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicOutcome TrocketClient::DescribeTopic(const DescribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicResponse rsp = DescribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicOutcome(rsp);
        else
            return DescribeTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicOutcomeCallable TrocketClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicListOutcome TrocketClient::DescribeTopicList(const DescribeTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicListResponse rsp = DescribeTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicListOutcome(rsp);
        else
            return DescribeTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicListAsync(const DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicListOutcomeCallable TrocketClient::DescribeTopicListCallable(const DescribeTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicListByGroupOutcome TrocketClient::DescribeTopicListByGroup(const DescribeTopicListByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicListByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicListByGroupResponse rsp = DescribeTopicListByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicListByGroupOutcome(rsp);
        else
            return DescribeTopicListByGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicListByGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicListByGroupAsync(const DescribeTopicListByGroupRequest& request, const DescribeTopicListByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicListByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicListByGroupOutcomeCallable TrocketClient::DescribeTopicListByGroupCallable(const DescribeTopicListByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicListByGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicListByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DoHealthCheckOnMigratingTopicOutcome TrocketClient::DoHealthCheckOnMigratingTopic(const DoHealthCheckOnMigratingTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DoHealthCheckOnMigratingTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DoHealthCheckOnMigratingTopicResponse rsp = DoHealthCheckOnMigratingTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DoHealthCheckOnMigratingTopicOutcome(rsp);
        else
            return DoHealthCheckOnMigratingTopicOutcome(o.GetError());
    }
    else
    {
        return DoHealthCheckOnMigratingTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DoHealthCheckOnMigratingTopicAsync(const DoHealthCheckOnMigratingTopicRequest& request, const DoHealthCheckOnMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DoHealthCheckOnMigratingTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DoHealthCheckOnMigratingTopicOutcomeCallable TrocketClient::DoHealthCheckOnMigratingTopicCallable(const DoHealthCheckOnMigratingTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DoHealthCheckOnMigratingTopicOutcome()>>(
        [this, request]()
        {
            return this->DoHealthCheckOnMigratingTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcome TrocketClient::ImportSourceClusterConsumerGroups(const ImportSourceClusterConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterConsumerGroupsResponse rsp = ImportSourceClusterConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterConsumerGroupsOutcome(rsp);
        else
            return ImportSourceClusterConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterConsumerGroupsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterConsumerGroupsAsync(const ImportSourceClusterConsumerGroupsRequest& request, const ImportSourceClusterConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportSourceClusterConsumerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcomeCallable TrocketClient::ImportSourceClusterConsumerGroupsCallable(const ImportSourceClusterConsumerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportSourceClusterConsumerGroupsOutcome()>>(
        [this, request]()
        {
            return this->ImportSourceClusterConsumerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ImportSourceClusterTopicsOutcome TrocketClient::ImportSourceClusterTopics(const ImportSourceClusterTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterTopicsResponse rsp = ImportSourceClusterTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterTopicsOutcome(rsp);
        else
            return ImportSourceClusterTopicsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterTopicsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterTopicsAsync(const ImportSourceClusterTopicsRequest& request, const ImportSourceClusterTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportSourceClusterTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ImportSourceClusterTopicsOutcomeCallable TrocketClient::ImportSourceClusterTopicsCallable(const ImportSourceClusterTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportSourceClusterTopicsOutcome()>>(
        [this, request]()
        {
            return this->ImportSourceClusterTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyConsumerGroupOutcome TrocketClient::ModifyConsumerGroup(const ModifyConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupResponse rsp = ModifyConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupOutcome(rsp);
        else
            return ModifyConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyConsumerGroupAsync(const ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyConsumerGroupOutcomeCallable TrocketClient::ModifyConsumerGroupCallable(const ModifyConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyInstanceOutcome TrocketClient::ModifyInstance(const ModifyInstanceRequest &request)
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

void TrocketClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyInstanceOutcomeCallable TrocketClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
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

TrocketClient::ModifyInstanceEndpointOutcome TrocketClient::ModifyInstanceEndpoint(const ModifyInstanceEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceEndpointResponse rsp = ModifyInstanceEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceEndpointOutcome(rsp);
        else
            return ModifyInstanceEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyInstanceEndpointAsync(const ModifyInstanceEndpointRequest& request, const ModifyInstanceEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyInstanceEndpointOutcomeCallable TrocketClient::ModifyInstanceEndpointCallable(const ModifyInstanceEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceEndpointOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyMQTTInsPublicEndpointOutcome TrocketClient::ModifyMQTTInsPublicEndpoint(const ModifyMQTTInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInsPublicEndpointResponse rsp = ModifyMQTTInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInsPublicEndpointOutcome(rsp);
        else
            return ModifyMQTTInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInsPublicEndpointOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInsPublicEndpointAsync(const ModifyMQTTInsPublicEndpointRequest& request, const ModifyMQTTInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMQTTInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyMQTTInsPublicEndpointOutcomeCallable TrocketClient::ModifyMQTTInsPublicEndpointCallable(const ModifyMQTTInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMQTTInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->ModifyMQTTInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyMQTTInstanceOutcome TrocketClient::ModifyMQTTInstance(const ModifyMQTTInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInstanceResponse rsp = ModifyMQTTInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInstanceOutcome(rsp);
        else
            return ModifyMQTTInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInstanceAsync(const ModifyMQTTInstanceRequest& request, const ModifyMQTTInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMQTTInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyMQTTInstanceOutcomeCallable TrocketClient::ModifyMQTTInstanceCallable(const ModifyMQTTInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMQTTInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyMQTTInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyMQTTInstanceCertBindingOutcome TrocketClient::ModifyMQTTInstanceCertBinding(const ModifyMQTTInstanceCertBindingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTInstanceCertBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTInstanceCertBindingResponse rsp = ModifyMQTTInstanceCertBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTInstanceCertBindingOutcome(rsp);
        else
            return ModifyMQTTInstanceCertBindingOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTInstanceCertBindingOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTInstanceCertBindingAsync(const ModifyMQTTInstanceCertBindingRequest& request, const ModifyMQTTInstanceCertBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMQTTInstanceCertBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyMQTTInstanceCertBindingOutcomeCallable TrocketClient::ModifyMQTTInstanceCertBindingCallable(const ModifyMQTTInstanceCertBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMQTTInstanceCertBindingOutcome()>>(
        [this, request]()
        {
            return this->ModifyMQTTInstanceCertBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyMQTTTopicOutcome TrocketClient::ModifyMQTTTopic(const ModifyMQTTTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTTopicResponse rsp = ModifyMQTTTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTTopicOutcome(rsp);
        else
            return ModifyMQTTTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTTopicAsync(const ModifyMQTTTopicRequest& request, const ModifyMQTTTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMQTTTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyMQTTTopicOutcomeCallable TrocketClient::ModifyMQTTTopicCallable(const ModifyMQTTTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMQTTTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyMQTTTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyMQTTUserOutcome TrocketClient::ModifyMQTTUser(const ModifyMQTTUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMQTTUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMQTTUserResponse rsp = ModifyMQTTUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMQTTUserOutcome(rsp);
        else
            return ModifyMQTTUserOutcome(o.GetError());
    }
    else
    {
        return ModifyMQTTUserOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyMQTTUserAsync(const ModifyMQTTUserRequest& request, const ModifyMQTTUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMQTTUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyMQTTUserOutcomeCallable TrocketClient::ModifyMQTTUserCallable(const ModifyMQTTUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMQTTUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyMQTTUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyRoleOutcome TrocketClient::ModifyRole(const ModifyRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoleResponse rsp = ModifyRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoleOutcome(rsp);
        else
            return ModifyRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyRoleAsync(const ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyRoleOutcomeCallable TrocketClient::ModifyRoleCallable(const ModifyRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyTopicOutcome TrocketClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyTopicOutcomeCallable TrocketClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::RemoveMigratingTopicOutcome TrocketClient::RemoveMigratingTopic(const RemoveMigratingTopicRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMigratingTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMigratingTopicResponse rsp = RemoveMigratingTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMigratingTopicOutcome(rsp);
        else
            return RemoveMigratingTopicOutcome(o.GetError());
    }
    else
    {
        return RemoveMigratingTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::RemoveMigratingTopicAsync(const RemoveMigratingTopicRequest& request, const RemoveMigratingTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveMigratingTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::RemoveMigratingTopicOutcomeCallable TrocketClient::RemoveMigratingTopicCallable(const RemoveMigratingTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveMigratingTopicOutcome()>>(
        [this, request]()
        {
            return this->RemoveMigratingTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ResendDeadLetterMessageOutcome TrocketClient::ResendDeadLetterMessage(const ResendDeadLetterMessageRequest &request)
{
    auto outcome = MakeRequest(request, "ResendDeadLetterMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResendDeadLetterMessageResponse rsp = ResendDeadLetterMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResendDeadLetterMessageOutcome(rsp);
        else
            return ResendDeadLetterMessageOutcome(o.GetError());
    }
    else
    {
        return ResendDeadLetterMessageOutcome(outcome.GetError());
    }
}

void TrocketClient::ResendDeadLetterMessageAsync(const ResendDeadLetterMessageRequest& request, const ResendDeadLetterMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResendDeadLetterMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ResendDeadLetterMessageOutcomeCallable TrocketClient::ResendDeadLetterMessageCallable(const ResendDeadLetterMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResendDeadLetterMessageOutcome()>>(
        [this, request]()
        {
            return this->ResendDeadLetterMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ResetConsumerGroupOffsetOutcome TrocketClient::ResetConsumerGroupOffset(const ResetConsumerGroupOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "ResetConsumerGroupOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetConsumerGroupOffsetResponse rsp = ResetConsumerGroupOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetConsumerGroupOffsetOutcome(rsp);
        else
            return ResetConsumerGroupOffsetOutcome(o.GetError());
    }
    else
    {
        return ResetConsumerGroupOffsetOutcome(outcome.GetError());
    }
}

void TrocketClient::ResetConsumerGroupOffsetAsync(const ResetConsumerGroupOffsetRequest& request, const ResetConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetConsumerGroupOffset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ResetConsumerGroupOffsetOutcomeCallable TrocketClient::ResetConsumerGroupOffsetCallable(const ResetConsumerGroupOffsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetConsumerGroupOffsetOutcome()>>(
        [this, request]()
        {
            return this->ResetConsumerGroupOffset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::RollbackMigratingTopicStageOutcome TrocketClient::RollbackMigratingTopicStage(const RollbackMigratingTopicStageRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackMigratingTopicStage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackMigratingTopicStageResponse rsp = RollbackMigratingTopicStageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackMigratingTopicStageOutcome(rsp);
        else
            return RollbackMigratingTopicStageOutcome(o.GetError());
    }
    else
    {
        return RollbackMigratingTopicStageOutcome(outcome.GetError());
    }
}

void TrocketClient::RollbackMigratingTopicStageAsync(const RollbackMigratingTopicStageRequest& request, const RollbackMigratingTopicStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackMigratingTopicStage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::RollbackMigratingTopicStageOutcomeCallable TrocketClient::RollbackMigratingTopicStageCallable(const RollbackMigratingTopicStageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackMigratingTopicStageOutcome()>>(
        [this, request]()
        {
            return this->RollbackMigratingTopicStage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

