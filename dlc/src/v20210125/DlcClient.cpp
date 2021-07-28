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

#include <tencentcloud/dlc/v20210125/DlcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dlc::V20210125;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-25";
    const string ENDPOINT = "dlc.tencentcloudapi.com";
}

DlcClient::DlcClient(const Credential &credential, const string &region) :
    DlcClient(credential, region, ClientProfile())
{
}

DlcClient::DlcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DlcClient::AddUsersToWorkGroupOutcome DlcClient::AddUsersToWorkGroup(const AddUsersToWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersToWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersToWorkGroupResponse rsp = AddUsersToWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersToWorkGroupOutcome(rsp);
        else
            return AddUsersToWorkGroupOutcome(o.GetError());
    }
    else
    {
        return AddUsersToWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::AddUsersToWorkGroupAsync(const AddUsersToWorkGroupRequest& request, const AddUsersToWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersToWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AddUsersToWorkGroupOutcomeCallable DlcClient::AddUsersToWorkGroupCallable(const AddUsersToWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersToWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->AddUsersToWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AttachUserPolicyOutcome DlcClient::AttachUserPolicy(const AttachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachUserPolicyResponse rsp = AttachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachUserPolicyOutcome(rsp);
        else
            return AttachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AttachUserPolicyOutcomeCallable DlcClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AttachWorkGroupPolicyOutcome DlcClient::AttachWorkGroupPolicy(const AttachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachWorkGroupPolicyResponse rsp = AttachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachWorkGroupPolicyOutcome(rsp);
        else
            return AttachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::AttachWorkGroupPolicyAsync(const AttachWorkGroupPolicyRequest& request, const AttachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachWorkGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AttachWorkGroupPolicyOutcomeCallable DlcClient::AttachWorkGroupPolicyCallable(const AttachWorkGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachWorkGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachWorkGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::BindWorkGroupsToUserOutcome DlcClient::BindWorkGroupsToUser(const BindWorkGroupsToUserRequest &request)
{
    auto outcome = MakeRequest(request, "BindWorkGroupsToUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindWorkGroupsToUserResponse rsp = BindWorkGroupsToUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindWorkGroupsToUserOutcome(rsp);
        else
            return BindWorkGroupsToUserOutcome(o.GetError());
    }
    else
    {
        return BindWorkGroupsToUserOutcome(outcome.GetError());
    }
}

void DlcClient::BindWorkGroupsToUserAsync(const BindWorkGroupsToUserRequest& request, const BindWorkGroupsToUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindWorkGroupsToUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::BindWorkGroupsToUserOutcomeCallable DlcClient::BindWorkGroupsToUserCallable(const BindWorkGroupsToUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindWorkGroupsToUserOutcome()>>(
        [this, request]()
        {
            return this->BindWorkGroupsToUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CancelTaskOutcome DlcClient::CancelTask(const CancelTaskRequest &request)
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

void DlcClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelTaskOutcomeCallable DlcClient::CancelTaskCallable(const CancelTaskRequest &request)
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

DlcClient::CreateDatabaseOutcome DlcClient::CreateDatabase(const CreateDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatabaseResponse rsp = CreateDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatabaseOutcome(rsp);
        else
            return CreateDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDatabaseOutcomeCallable DlcClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateScriptOutcome DlcClient::CreateScript(const CreateScriptRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScriptResponse rsp = CreateScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScriptOutcome(rsp);
        else
            return CreateScriptOutcome(o.GetError());
    }
    else
    {
        return CreateScriptOutcome(outcome.GetError());
    }
}

void DlcClient::CreateScriptAsync(const CreateScriptRequest& request, const CreateScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateScriptOutcomeCallable DlcClient::CreateScriptCallable(const CreateScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScriptOutcome()>>(
        [this, request]()
        {
            return this->CreateScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateStoreLocationOutcome DlcClient::CreateStoreLocation(const CreateStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStoreLocationResponse rsp = CreateStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStoreLocationOutcome(rsp);
        else
            return CreateStoreLocationOutcome(o.GetError());
    }
    else
    {
        return CreateStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::CreateStoreLocationAsync(const CreateStoreLocationRequest& request, const CreateStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateStoreLocationOutcomeCallable DlcClient::CreateStoreLocationCallable(const CreateStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->CreateStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTableOutcome DlcClient::CreateTable(const CreateTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTableResponse rsp = CreateTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTableOutcome(rsp);
        else
            return CreateTableOutcome(o.GetError());
    }
    else
    {
        return CreateTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTableOutcomeCallable DlcClient::CreateTableCallable(const CreateTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
        [this, request]()
        {
            return this->CreateTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTaskOutcome DlcClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTaskOutcomeCallable DlcClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateTasksInOrderOutcome DlcClient::CreateTasksInOrder(const CreateTasksInOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTasksInOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTasksInOrderResponse rsp = CreateTasksInOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTasksInOrderOutcome(rsp);
        else
            return CreateTasksInOrderOutcome(o.GetError());
    }
    else
    {
        return CreateTasksInOrderOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTasksInOrderAsync(const CreateTasksInOrderRequest& request, const CreateTasksInOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTasksInOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTasksInOrderOutcomeCallable DlcClient::CreateTasksInOrderCallable(const CreateTasksInOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTasksInOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateTasksInOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateUserOutcome DlcClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void DlcClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateUserOutcomeCallable DlcClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateWorkGroupOutcome DlcClient::CreateWorkGroup(const CreateWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkGroupResponse rsp = CreateWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkGroupOutcome(rsp);
        else
            return CreateWorkGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::CreateWorkGroupAsync(const CreateWorkGroupRequest& request, const CreateWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateWorkGroupOutcomeCallable DlcClient::CreateWorkGroupCallable(const CreateWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteScriptOutcome DlcClient::DeleteScript(const DeleteScriptRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScript");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScriptResponse rsp = DeleteScriptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScriptOutcome(rsp);
        else
            return DeleteScriptOutcome(o.GetError());
    }
    else
    {
        return DeleteScriptOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteScriptAsync(const DeleteScriptRequest& request, const DeleteScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScript(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteScriptOutcomeCallable DlcClient::DeleteScriptCallable(const DeleteScriptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScriptOutcome()>>(
        [this, request]()
        {
            return this->DeleteScript(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteUserOutcome DlcClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteUserOutcomeCallable DlcClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteUsersFromWorkGroupOutcome DlcClient::DeleteUsersFromWorkGroup(const DeleteUsersFromWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsersFromWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersFromWorkGroupResponse rsp = DeleteUsersFromWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersFromWorkGroupOutcome(rsp);
        else
            return DeleteUsersFromWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersFromWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteUsersFromWorkGroupAsync(const DeleteUsersFromWorkGroupRequest& request, const DeleteUsersFromWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsersFromWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteUsersFromWorkGroupOutcomeCallable DlcClient::DeleteUsersFromWorkGroupCallable(const DeleteUsersFromWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUsersFromWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteUsersFromWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteWorkGroupOutcome DlcClient::DeleteWorkGroup(const DeleteWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkGroupResponse rsp = DeleteWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkGroupOutcome(rsp);
        else
            return DeleteWorkGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteWorkGroupAsync(const DeleteWorkGroupRequest& request, const DeleteWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteWorkGroupOutcomeCallable DlcClient::DeleteWorkGroupCallable(const DeleteWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDatabasesOutcome DlcClient::DescribeDatabases(const DescribeDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesResponse rsp = DescribeDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesOutcome(rsp);
        else
            return DescribeDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDatabasesOutcomeCallable DlcClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeScriptsOutcome DlcClient::DescribeScripts(const DescribeScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScriptsResponse rsp = DescribeScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScriptsOutcome(rsp);
        else
            return DescribeScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeScriptsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeScriptsAsync(const DescribeScriptsRequest& request, const DescribeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScripts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeScriptsOutcomeCallable DlcClient::DescribeScriptsCallable(const DescribeScriptsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScriptsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScripts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeStoreLocationOutcome DlcClient::DescribeStoreLocation(const DescribeStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStoreLocationResponse rsp = DescribeStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStoreLocationOutcome(rsp);
        else
            return DescribeStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeStoreLocationAsync(const DescribeStoreLocationRequest& request, const DescribeStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeStoreLocationOutcomeCallable DlcClient::DescribeStoreLocationCallable(const DescribeStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTableOutcome DlcClient::DescribeTable(const DescribeTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableResponse rsp = DescribeTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableOutcome(rsp);
        else
            return DescribeTableOutcome(o.GetError());
    }
    else
    {
        return DescribeTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTableAsync(const DescribeTableRequest& request, const DescribeTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTableOutcomeCallable DlcClient::DescribeTableCallable(const DescribeTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTablesOutcome DlcClient::DescribeTables(const DescribeTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesResponse rsp = DescribeTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesOutcome(rsp);
        else
            return DescribeTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablesAsync(const DescribeTablesRequest& request, const DescribeTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTablesOutcomeCallable DlcClient::DescribeTablesCallable(const DescribeTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTasksOutcome DlcClient::DescribeTasks(const DescribeTasksRequest &request)
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

void DlcClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksOutcomeCallable DlcClient::DescribeTasksCallable(const DescribeTasksRequest &request)
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

DlcClient::DescribeUsersOutcome DlcClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUsersOutcomeCallable DlcClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeViewsOutcome DlcClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeViews(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeViewsOutcomeCallable DlcClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeViewsOutcome()>>(
        [this, request]()
        {
            return this->DescribeViews(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeWorkGroupsOutcome DlcClient::DescribeWorkGroups(const DescribeWorkGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupsResponse rsp = DescribeWorkGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupsOutcome(rsp);
        else
            return DescribeWorkGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupsAsync(const DescribeWorkGroupsRequest& request, const DescribeWorkGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeWorkGroupsOutcomeCallable DlcClient::DescribeWorkGroupsCallable(const DescribeWorkGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DetachUserPolicyOutcome DlcClient::DetachUserPolicy(const DetachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachUserPolicyResponse rsp = DetachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachUserPolicyOutcome(rsp);
        else
            return DetachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachUserPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DetachUserPolicyOutcomeCallable DlcClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DetachWorkGroupPolicyOutcome DlcClient::DetachWorkGroupPolicy(const DetachWorkGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachWorkGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachWorkGroupPolicyResponse rsp = DetachWorkGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachWorkGroupPolicyOutcome(rsp);
        else
            return DetachWorkGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachWorkGroupPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DetachWorkGroupPolicyAsync(const DetachWorkGroupPolicyRequest& request, const DetachWorkGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachWorkGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DetachWorkGroupPolicyOutcomeCallable DlcClient::DetachWorkGroupPolicyCallable(const DetachWorkGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachWorkGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachWorkGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyUserOutcome DlcClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyUserOutcomeCallable DlcClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyWorkGroupOutcome DlcClient::ModifyWorkGroup(const ModifyWorkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkGroupResponse rsp = ModifyWorkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkGroupOutcome(rsp);
        else
            return ModifyWorkGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkGroupOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyWorkGroupAsync(const ModifyWorkGroupRequest& request, const ModifyWorkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWorkGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyWorkGroupOutcomeCallable DlcClient::ModifyWorkGroupCallable(const ModifyWorkGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWorkGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyWorkGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UnbindWorkGroupsFromUserOutcome DlcClient::UnbindWorkGroupsFromUser(const UnbindWorkGroupsFromUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindWorkGroupsFromUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindWorkGroupsFromUserResponse rsp = UnbindWorkGroupsFromUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindWorkGroupsFromUserOutcome(rsp);
        else
            return UnbindWorkGroupsFromUserOutcome(o.GetError());
    }
    else
    {
        return UnbindWorkGroupsFromUserOutcome(outcome.GetError());
    }
}

void DlcClient::UnbindWorkGroupsFromUserAsync(const UnbindWorkGroupsFromUserRequest& request, const UnbindWorkGroupsFromUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindWorkGroupsFromUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UnbindWorkGroupsFromUserOutcomeCallable DlcClient::UnbindWorkGroupsFromUserCallable(const UnbindWorkGroupsFromUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindWorkGroupsFromUserOutcome()>>(
        [this, request]()
        {
            return this->UnbindWorkGroupsFromUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

