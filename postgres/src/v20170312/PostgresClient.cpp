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

#include <tencentcloud/postgres/v20170312/PostgresClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Postgres::V20170312;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "postgres.tencentcloudapi.com";
}

PostgresClient::PostgresClient(const Credential &credential, const string &region) :
    PostgresClient(credential, region, ClientProfile())
{
}

PostgresClient::PostgresClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PostgresClient::AddDBInstanceToReadOnlyGroupOutcome PostgresClient::AddDBInstanceToReadOnlyGroup(const AddDBInstanceToReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddDBInstanceToReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDBInstanceToReadOnlyGroupResponse rsp = AddDBInstanceToReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDBInstanceToReadOnlyGroupOutcome(rsp);
        else
            return AddDBInstanceToReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return AddDBInstanceToReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::AddDBInstanceToReadOnlyGroupAsync(const AddDBInstanceToReadOnlyGroupRequest& request, const AddDBInstanceToReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDBInstanceToReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::AddDBInstanceToReadOnlyGroupOutcomeCallable PostgresClient::AddDBInstanceToReadOnlyGroupCallable(const AddDBInstanceToReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDBInstanceToReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->AddDBInstanceToReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CloneDBInstanceOutcome PostgresClient::CloneDBInstance(const CloneDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CloneDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneDBInstanceResponse rsp = CloneDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneDBInstanceOutcome(rsp);
        else
            return CloneDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CloneDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::CloneDBInstanceAsync(const CloneDBInstanceRequest& request, const CloneDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CloneDBInstanceOutcomeCallable PostgresClient::CloneDBInstanceCallable(const CloneDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CloneDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CloseDBExtranetAccessOutcome PostgresClient::CloseDBExtranetAccess(const CloseDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CloseDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseDBExtranetAccessResponse rsp = CloseDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseDBExtranetAccessOutcome(rsp);
        else
            return CloseDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return CloseDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CloseDBExtranetAccessAsync(const CloseDBExtranetAccessRequest& request, const CloseDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CloseDBExtranetAccessOutcomeCallable PostgresClient::CloseDBExtranetAccessCallable(const CloseDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->CloseDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateAccountOutcome PostgresClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateAccountOutcomeCallable PostgresClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateBackupPlanOutcome PostgresClient::CreateBackupPlan(const CreateBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupPlanResponse rsp = CreateBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupPlanOutcome(rsp);
        else
            return CreateBackupPlanOutcome(o.GetError());
    }
    else
    {
        return CreateBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateBackupPlanOutcomeCallable PostgresClient::CreateBackupPlanCallable(const CreateBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->CreateBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateBaseBackupOutcome PostgresClient::CreateBaseBackup(const CreateBaseBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaseBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaseBackupResponse rsp = CreateBaseBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaseBackupOutcome(rsp);
        else
            return CreateBaseBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBaseBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateBaseBackupAsync(const CreateBaseBackupRequest& request, const CreateBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBaseBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateBaseBackupOutcomeCallable PostgresClient::CreateBaseBackupCallable(const CreateBaseBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBaseBackupOutcome()>>(
        [this, request]()
        {
            return this->CreateBaseBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateDBInstanceNetworkAccessOutcome PostgresClient::CreateDBInstanceNetworkAccess(const CreateDBInstanceNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceNetworkAccessResponse rsp = CreateDBInstanceNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceNetworkAccessOutcome(rsp);
        else
            return CreateDBInstanceNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateDBInstanceNetworkAccessAsync(const CreateDBInstanceNetworkAccessRequest& request, const CreateDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstanceNetworkAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateDBInstanceNetworkAccessOutcomeCallable PostgresClient::CreateDBInstanceNetworkAccessCallable(const CreateDBInstanceNetworkAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstanceNetworkAccessOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstanceNetworkAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateDatabaseOutcome PostgresClient::CreateDatabase(const CreateDatabaseRequest &request)
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

void PostgresClient::CreateDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateDatabaseOutcomeCallable PostgresClient::CreateDatabaseCallable(const CreateDatabaseRequest &request)
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

PostgresClient::CreateInstancesOutcome PostgresClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateInstancesOutcomeCallable PostgresClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateParameterTemplateOutcome PostgresClient::CreateParameterTemplate(const CreateParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateParameterTemplateResponse rsp = CreateParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateParameterTemplateOutcome(rsp);
        else
            return CreateParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateParameterTemplateAsync(const CreateParameterTemplateRequest& request, const CreateParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateParameterTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateParameterTemplateOutcomeCallable PostgresClient::CreateParameterTemplateCallable(const CreateParameterTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateParameterTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateParameterTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateReadOnlyDBInstanceOutcome PostgresClient::CreateReadOnlyDBInstance(const CreateReadOnlyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyDBInstanceResponse rsp = CreateReadOnlyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyDBInstanceOutcome(rsp);
        else
            return CreateReadOnlyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyDBInstanceAsync(const CreateReadOnlyDBInstanceRequest& request, const CreateReadOnlyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReadOnlyDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateReadOnlyDBInstanceOutcomeCallable PostgresClient::CreateReadOnlyDBInstanceCallable(const CreateReadOnlyDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReadOnlyDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateReadOnlyDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateReadOnlyGroupOutcome PostgresClient::CreateReadOnlyGroup(const CreateReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyGroupResponse rsp = CreateReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyGroupOutcome(rsp);
        else
            return CreateReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyGroupAsync(const CreateReadOnlyGroupRequest& request, const CreateReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateReadOnlyGroupOutcomeCallable PostgresClient::CreateReadOnlyGroupCallable(const CreateReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateReadOnlyGroupNetworkAccessOutcome PostgresClient::CreateReadOnlyGroupNetworkAccess(const CreateReadOnlyGroupNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyGroupNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyGroupNetworkAccessResponse rsp = CreateReadOnlyGroupNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyGroupNetworkAccessOutcome(rsp);
        else
            return CreateReadOnlyGroupNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyGroupNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateReadOnlyGroupNetworkAccessAsync(const CreateReadOnlyGroupNetworkAccessRequest& request, const CreateReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReadOnlyGroupNetworkAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateReadOnlyGroupNetworkAccessOutcomeCallable PostgresClient::CreateReadOnlyGroupNetworkAccessCallable(const CreateReadOnlyGroupNetworkAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReadOnlyGroupNetworkAccessOutcome()>>(
        [this, request]()
        {
            return this->CreateReadOnlyGroupNetworkAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::CreateServerlessDBInstanceOutcome PostgresClient::CreateServerlessDBInstance(const CreateServerlessDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerlessDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerlessDBInstanceResponse rsp = CreateServerlessDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerlessDBInstanceOutcome(rsp);
        else
            return CreateServerlessDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateServerlessDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::CreateServerlessDBInstanceAsync(const CreateServerlessDBInstanceRequest& request, const CreateServerlessDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerlessDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::CreateServerlessDBInstanceOutcomeCallable PostgresClient::CreateServerlessDBInstanceCallable(const CreateServerlessDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerlessDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateServerlessDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteAccountOutcome PostgresClient::DeleteAccount(const DeleteAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccountResponse rsp = DeleteAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccountOutcome(rsp);
        else
            return DeleteAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteAccountOutcomeCallable PostgresClient::DeleteAccountCallable(const DeleteAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteBackupPlanOutcome PostgresClient::DeleteBackupPlan(const DeleteBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupPlanResponse rsp = DeleteBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupPlanOutcome(rsp);
        else
            return DeleteBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteBackupPlanAsync(const DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteBackupPlanOutcomeCallable PostgresClient::DeleteBackupPlanCallable(const DeleteBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->DeleteBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteBaseBackupOutcome PostgresClient::DeleteBaseBackup(const DeleteBaseBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaseBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaseBackupResponse rsp = DeleteBaseBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaseBackupOutcome(rsp);
        else
            return DeleteBaseBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteBaseBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteBaseBackupAsync(const DeleteBaseBackupRequest& request, const DeleteBaseBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBaseBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteBaseBackupOutcomeCallable PostgresClient::DeleteBaseBackupCallable(const DeleteBaseBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBaseBackupOutcome()>>(
        [this, request]()
        {
            return this->DeleteBaseBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteDBInstanceNetworkAccessOutcome PostgresClient::DeleteDBInstanceNetworkAccess(const DeleteDBInstanceNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBInstanceNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBInstanceNetworkAccessResponse rsp = DeleteDBInstanceNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBInstanceNetworkAccessOutcome(rsp);
        else
            return DeleteDBInstanceNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return DeleteDBInstanceNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteDBInstanceNetworkAccessAsync(const DeleteDBInstanceNetworkAccessRequest& request, const DeleteDBInstanceNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDBInstanceNetworkAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteDBInstanceNetworkAccessOutcomeCallable PostgresClient::DeleteDBInstanceNetworkAccessCallable(const DeleteDBInstanceNetworkAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBInstanceNetworkAccessOutcome()>>(
        [this, request]()
        {
            return this->DeleteDBInstanceNetworkAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteLogBackupOutcome PostgresClient::DeleteLogBackup(const DeleteLogBackupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogBackupResponse rsp = DeleteLogBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogBackupOutcome(rsp);
        else
            return DeleteLogBackupOutcome(o.GetError());
    }
    else
    {
        return DeleteLogBackupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteLogBackupAsync(const DeleteLogBackupRequest& request, const DeleteLogBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteLogBackupOutcomeCallable PostgresClient::DeleteLogBackupCallable(const DeleteLogBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogBackupOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteParameterTemplateOutcome PostgresClient::DeleteParameterTemplate(const DeleteParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteParameterTemplateResponse rsp = DeleteParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteParameterTemplateOutcome(rsp);
        else
            return DeleteParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteParameterTemplateAsync(const DeleteParameterTemplateRequest& request, const DeleteParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteParameterTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteParameterTemplateOutcomeCallable PostgresClient::DeleteParameterTemplateCallable(const DeleteParameterTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteParameterTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteParameterTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteReadOnlyGroupOutcome PostgresClient::DeleteReadOnlyGroup(const DeleteReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReadOnlyGroupResponse rsp = DeleteReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReadOnlyGroupOutcome(rsp);
        else
            return DeleteReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteReadOnlyGroupAsync(const DeleteReadOnlyGroupRequest& request, const DeleteReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteReadOnlyGroupOutcomeCallable PostgresClient::DeleteReadOnlyGroupCallable(const DeleteReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DeleteReadOnlyGroupNetworkAccessOutcome PostgresClient::DeleteReadOnlyGroupNetworkAccess(const DeleteReadOnlyGroupNetworkAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReadOnlyGroupNetworkAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReadOnlyGroupNetworkAccessResponse rsp = DeleteReadOnlyGroupNetworkAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReadOnlyGroupNetworkAccessOutcome(rsp);
        else
            return DeleteReadOnlyGroupNetworkAccessOutcome(o.GetError());
    }
    else
    {
        return DeleteReadOnlyGroupNetworkAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::DeleteReadOnlyGroupNetworkAccessAsync(const DeleteReadOnlyGroupNetworkAccessRequest& request, const DeleteReadOnlyGroupNetworkAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReadOnlyGroupNetworkAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DeleteReadOnlyGroupNetworkAccessOutcomeCallable PostgresClient::DeleteReadOnlyGroupNetworkAccessCallable(const DeleteReadOnlyGroupNetworkAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReadOnlyGroupNetworkAccessOutcome()>>(
        [this, request]()
        {
            return this->DeleteReadOnlyGroupNetworkAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeAccountPrivilegesOutcome PostgresClient::DescribeAccountPrivileges(const DescribeAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegesResponse rsp = DescribeAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegesOutcome(rsp);
        else
            return DescribeAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAccountPrivilegesAsync(const DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeAccountPrivilegesOutcomeCallable PostgresClient::DescribeAccountPrivilegesCallable(const DescribeAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeAccountsOutcome PostgresClient::DescribeAccounts(const DescribeAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountsResponse rsp = DescribeAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountsOutcome(rsp);
        else
            return DescribeAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeAccountsOutcomeCallable PostgresClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeAvailableRecoveryTimeOutcome PostgresClient::DescribeAvailableRecoveryTime(const DescribeAvailableRecoveryTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableRecoveryTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableRecoveryTimeResponse rsp = DescribeAvailableRecoveryTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableRecoveryTimeOutcome(rsp);
        else
            return DescribeAvailableRecoveryTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableRecoveryTimeOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeAvailableRecoveryTimeAsync(const DescribeAvailableRecoveryTimeRequest& request, const DescribeAvailableRecoveryTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailableRecoveryTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeAvailableRecoveryTimeOutcomeCallable PostgresClient::DescribeAvailableRecoveryTimeCallable(const DescribeAvailableRecoveryTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailableRecoveryTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailableRecoveryTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBackupDownloadRestrictionOutcome PostgresClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadRestrictionResponse rsp = DescribeBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadRestrictionOutcome(rsp);
        else
            return DescribeBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBackupDownloadRestrictionOutcomeCallable PostgresClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDownloadRestrictionOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDownloadRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBackupDownloadURLOutcome PostgresClient::DescribeBackupDownloadURL(const DescribeBackupDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadURLResponse rsp = DescribeBackupDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadURLOutcome(rsp);
        else
            return DescribeBackupDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadURLOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupDownloadURLAsync(const DescribeBackupDownloadURLRequest& request, const DescribeBackupDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupDownloadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBackupDownloadURLOutcomeCallable PostgresClient::DescribeBackupDownloadURLCallable(const DescribeBackupDownloadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupDownloadURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupDownloadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBackupOverviewOutcome PostgresClient::DescribeBackupOverview(const DescribeBackupOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupOverviewResponse rsp = DescribeBackupOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupOverviewOutcome(rsp);
        else
            return DescribeBackupOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupOverviewOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupOverviewAsync(const DescribeBackupOverviewRequest& request, const DescribeBackupOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBackupOverviewOutcomeCallable PostgresClient::DescribeBackupOverviewCallable(const DescribeBackupOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBackupPlansOutcome PostgresClient::DescribeBackupPlans(const DescribeBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupPlansResponse rsp = DescribeBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupPlansOutcome(rsp);
        else
            return DescribeBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupPlansOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupPlansAsync(const DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupPlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBackupPlansOutcomeCallable PostgresClient::DescribeBackupPlansCallable(const DescribeBackupPlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupPlansOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupPlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBackupSummariesOutcome PostgresClient::DescribeBackupSummaries(const DescribeBackupSummariesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummariesResponse rsp = DescribeBackupSummariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummariesOutcome(rsp);
        else
            return DescribeBackupSummariesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummariesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBackupSummariesAsync(const DescribeBackupSummariesRequest& request, const DescribeBackupSummariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupSummaries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBackupSummariesOutcomeCallable PostgresClient::DescribeBackupSummariesCallable(const DescribeBackupSummariesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupSummariesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupSummaries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeBaseBackupsOutcome PostgresClient::DescribeBaseBackups(const DescribeBaseBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaseBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaseBackupsResponse rsp = DescribeBaseBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaseBackupsOutcome(rsp);
        else
            return DescribeBaseBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBaseBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeBaseBackupsAsync(const DescribeBaseBackupsRequest& request, const DescribeBaseBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaseBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeBaseBackupsOutcomeCallable PostgresClient::DescribeBaseBackupsCallable(const DescribeBaseBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaseBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaseBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeClassesOutcome PostgresClient::DescribeClasses(const DescribeClassesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClasses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassesResponse rsp = DescribeClassesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassesOutcome(rsp);
        else
            return DescribeClassesOutcome(o.GetError());
    }
    else
    {
        return DescribeClassesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeClassesAsync(const DescribeClassesRequest& request, const DescribeClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClasses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeClassesOutcomeCallable PostgresClient::DescribeClassesCallable(const DescribeClassesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClassesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClasses(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeCloneDBInstanceSpecOutcome PostgresClient::DescribeCloneDBInstanceSpec(const DescribeCloneDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloneDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloneDBInstanceSpecResponse rsp = DescribeCloneDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloneDBInstanceSpecOutcome(rsp);
        else
            return DescribeCloneDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeCloneDBInstanceSpecOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeCloneDBInstanceSpecAsync(const DescribeCloneDBInstanceSpecRequest& request, const DescribeCloneDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloneDBInstanceSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeCloneDBInstanceSpecOutcomeCallable PostgresClient::DescribeCloneDBInstanceSpecCallable(const DescribeCloneDBInstanceSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloneDBInstanceSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloneDBInstanceSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBBackupsOutcome PostgresClient::DescribeDBBackups(const DescribeDBBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBBackupsResponse rsp = DescribeDBBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBBackupsOutcome(rsp);
        else
            return DescribeDBBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBBackupsAsync(const DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBBackupsOutcomeCallable PostgresClient::DescribeDBBackupsCallable(const DescribeDBBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBErrlogsOutcome PostgresClient::DescribeDBErrlogs(const DescribeDBErrlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBErrlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBErrlogsResponse rsp = DescribeDBErrlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBErrlogsOutcome(rsp);
        else
            return DescribeDBErrlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBErrlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBErrlogsAsync(const DescribeDBErrlogsRequest& request, const DescribeDBErrlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBErrlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBErrlogsOutcomeCallable PostgresClient::DescribeDBErrlogsCallable(const DescribeDBErrlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBErrlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBErrlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceAttributeOutcome PostgresClient::DescribeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceAttributeResponse rsp = DescribeDBInstanceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceAttributeOutcome(rsp);
        else
            return DescribeDBInstanceAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceAttributeOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceAttributeAsync(const DescribeDBInstanceAttributeRequest& request, const DescribeDBInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceAttributeOutcomeCallable PostgresClient::DescribeDBInstanceAttributeCallable(const DescribeDBInstanceAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceHAConfigOutcome PostgresClient::DescribeDBInstanceHAConfig(const DescribeDBInstanceHAConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceHAConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceHAConfigResponse rsp = DescribeDBInstanceHAConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceHAConfigOutcome(rsp);
        else
            return DescribeDBInstanceHAConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceHAConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceHAConfigAsync(const DescribeDBInstanceHAConfigRequest& request, const DescribeDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceHAConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceHAConfigOutcomeCallable PostgresClient::DescribeDBInstanceHAConfigCallable(const DescribeDBInstanceHAConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceHAConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceHAConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceParametersOutcome PostgresClient::DescribeDBInstanceParameters(const DescribeDBInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceParametersResponse rsp = DescribeDBInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceParametersOutcome(rsp);
        else
            return DescribeDBInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceParametersAsync(const DescribeDBInstanceParametersRequest& request, const DescribeDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceParametersOutcomeCallable PostgresClient::DescribeDBInstanceParametersCallable(const DescribeDBInstanceParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceParametersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceSSLConfigOutcome PostgresClient::DescribeDBInstanceSSLConfig(const DescribeDBInstanceSSLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSSLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSSLConfigResponse rsp = DescribeDBInstanceSSLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSSLConfigOutcome(rsp);
        else
            return DescribeDBInstanceSSLConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSSLConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceSSLConfigAsync(const DescribeDBInstanceSSLConfigRequest& request, const DescribeDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceSSLConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceSSLConfigOutcomeCallable PostgresClient::DescribeDBInstanceSSLConfigCallable(const DescribeDBInstanceSSLConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSSLConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceSSLConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstanceSecurityGroupsOutcome PostgresClient::DescribeDBInstanceSecurityGroups(const DescribeDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceSecurityGroupsResponse rsp = DescribeDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceSecurityGroupsOutcome(rsp);
        else
            return DescribeDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstanceSecurityGroupsAsync(const DescribeDBInstanceSecurityGroupsRequest& request, const DescribeDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstanceSecurityGroupsOutcomeCallable PostgresClient::DescribeDBInstanceSecurityGroupsCallable(const DescribeDBInstanceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBInstancesOutcome PostgresClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBInstancesOutcomeCallable PostgresClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBSlowlogsOutcome PostgresClient::DescribeDBSlowlogs(const DescribeDBSlowlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSlowlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSlowlogsResponse rsp = DescribeDBSlowlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSlowlogsOutcome(rsp);
        else
            return DescribeDBSlowlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSlowlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBSlowlogsAsync(const DescribeDBSlowlogsRequest& request, const DescribeDBSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSlowlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBSlowlogsOutcomeCallable PostgresClient::DescribeDBSlowlogsCallable(const DescribeDBSlowlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSlowlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSlowlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBVersionsOutcome PostgresClient::DescribeDBVersions(const DescribeDBVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBVersionsResponse rsp = DescribeDBVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBVersionsOutcome(rsp);
        else
            return DescribeDBVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBVersionsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBVersionsAsync(const DescribeDBVersionsRequest& request, const DescribeDBVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBVersionsOutcomeCallable PostgresClient::DescribeDBVersionsCallable(const DescribeDBVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDBXlogsOutcome PostgresClient::DescribeDBXlogs(const DescribeDBXlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBXlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBXlogsResponse rsp = DescribeDBXlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBXlogsOutcome(rsp);
        else
            return DescribeDBXlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBXlogsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDBXlogsAsync(const DescribeDBXlogsRequest& request, const DescribeDBXlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBXlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDBXlogsOutcomeCallable PostgresClient::DescribeDBXlogsCallable(const DescribeDBXlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBXlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBXlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDatabaseObjectsOutcome PostgresClient::DescribeDatabaseObjects(const DescribeDatabaseObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseObjectsResponse rsp = DescribeDatabaseObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseObjectsOutcome(rsp);
        else
            return DescribeDatabaseObjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseObjectsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDatabaseObjectsAsync(const DescribeDatabaseObjectsRequest& request, const DescribeDatabaseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDatabaseObjectsOutcomeCallable PostgresClient::DescribeDatabaseObjectsCallable(const DescribeDatabaseObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseObjectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDatabasesOutcome PostgresClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void PostgresClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDatabasesOutcomeCallable PostgresClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
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

PostgresClient::DescribeDedicatedClustersOutcome PostgresClient::DescribeDedicatedClusters(const DescribeDedicatedClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDedicatedClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDedicatedClustersResponse rsp = DescribeDedicatedClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDedicatedClustersOutcome(rsp);
        else
            return DescribeDedicatedClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeDedicatedClustersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDedicatedClustersAsync(const DescribeDedicatedClustersRequest& request, const DescribeDedicatedClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDedicatedClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDedicatedClustersOutcomeCallable PostgresClient::DescribeDedicatedClustersCallable(const DescribeDedicatedClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDedicatedClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDedicatedClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeDefaultParametersOutcome PostgresClient::DescribeDefaultParameters(const DescribeDefaultParametersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultParametersResponse rsp = DescribeDefaultParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultParametersOutcome(rsp);
        else
            return DescribeDefaultParametersOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeDefaultParametersAsync(const DescribeDefaultParametersRequest& request, const DescribeDefaultParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeDefaultParametersOutcomeCallable PostgresClient::DescribeDefaultParametersCallable(const DescribeDefaultParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultParametersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeEncryptionKeysOutcome PostgresClient::DescribeEncryptionKeys(const DescribeEncryptionKeysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEncryptionKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEncryptionKeysResponse rsp = DescribeEncryptionKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEncryptionKeysOutcome(rsp);
        else
            return DescribeEncryptionKeysOutcome(o.GetError());
    }
    else
    {
        return DescribeEncryptionKeysOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeEncryptionKeysAsync(const DescribeEncryptionKeysRequest& request, const DescribeEncryptionKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEncryptionKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeEncryptionKeysOutcomeCallable PostgresClient::DescribeEncryptionKeysCallable(const DescribeEncryptionKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEncryptionKeysOutcome()>>(
        [this, request]()
        {
            return this->DescribeEncryptionKeys(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeLogBackupsOutcome PostgresClient::DescribeLogBackups(const DescribeLogBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogBackupsResponse rsp = DescribeLogBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogBackupsOutcome(rsp);
        else
            return DescribeLogBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogBackupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeLogBackupsAsync(const DescribeLogBackupsRequest& request, const DescribeLogBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeLogBackupsOutcomeCallable PostgresClient::DescribeLogBackupsCallable(const DescribeLogBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeMaintainTimeWindowOutcome PostgresClient::DescribeMaintainTimeWindow(const DescribeMaintainTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintainTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintainTimeWindowResponse rsp = DescribeMaintainTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintainTimeWindowOutcome(rsp);
        else
            return DescribeMaintainTimeWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintainTimeWindowOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeMaintainTimeWindowAsync(const DescribeMaintainTimeWindowRequest& request, const DescribeMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintainTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeMaintainTimeWindowOutcomeCallable PostgresClient::DescribeMaintainTimeWindowCallable(const DescribeMaintainTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintainTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintainTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeOrdersOutcome PostgresClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeOrdersOutcomeCallable PostgresClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrdersOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeParameterTemplateAttributesOutcome PostgresClient::DescribeParameterTemplateAttributes(const DescribeParameterTemplateAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParameterTemplateAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParameterTemplateAttributesResponse rsp = DescribeParameterTemplateAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParameterTemplateAttributesOutcome(rsp);
        else
            return DescribeParameterTemplateAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeParameterTemplateAttributesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParameterTemplateAttributesAsync(const DescribeParameterTemplateAttributesRequest& request, const DescribeParameterTemplateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParameterTemplateAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeParameterTemplateAttributesOutcomeCallable PostgresClient::DescribeParameterTemplateAttributesCallable(const DescribeParameterTemplateAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParameterTemplateAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeParameterTemplateAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeParameterTemplatesOutcome PostgresClient::DescribeParameterTemplates(const DescribeParameterTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParameterTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParameterTemplatesResponse rsp = DescribeParameterTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParameterTemplatesOutcome(rsp);
        else
            return DescribeParameterTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeParameterTemplatesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParameterTemplatesAsync(const DescribeParameterTemplatesRequest& request, const DescribeParameterTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParameterTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeParameterTemplatesOutcomeCallable PostgresClient::DescribeParameterTemplatesCallable(const DescribeParameterTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParameterTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeParameterTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeParamsEventOutcome PostgresClient::DescribeParamsEvent(const DescribeParamsEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamsEventResponse rsp = DescribeParamsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamsEventOutcome(rsp);
        else
            return DescribeParamsEventOutcome(o.GetError());
    }
    else
    {
        return DescribeParamsEventOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeParamsEventAsync(const DescribeParamsEventRequest& request, const DescribeParamsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeParamsEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeParamsEventOutcomeCallable PostgresClient::DescribeParamsEventCallable(const DescribeParamsEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeParamsEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeParamsEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeProductConfigOutcome PostgresClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductConfigResponse rsp = DescribeProductConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductConfigOutcome(rsp);
        else
            return DescribeProductConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeProductConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeProductConfigOutcomeCallable PostgresClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeReadOnlyGroupsOutcome PostgresClient::DescribeReadOnlyGroups(const DescribeReadOnlyGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupsResponse rsp = DescribeReadOnlyGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupsOutcome(rsp);
        else
            return DescribeReadOnlyGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeReadOnlyGroupsAsync(const DescribeReadOnlyGroupsRequest& request, const DescribeReadOnlyGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReadOnlyGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeReadOnlyGroupsOutcomeCallable PostgresClient::DescribeReadOnlyGroupsCallable(const DescribeReadOnlyGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReadOnlyGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReadOnlyGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeRegionsOutcome PostgresClient::DescribeRegions(const DescribeRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionsResponse rsp = DescribeRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionsOutcome(rsp);
        else
            return DescribeRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionsOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeRegionsOutcomeCallable PostgresClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeServerlessDBInstancesOutcome PostgresClient::DescribeServerlessDBInstances(const DescribeServerlessDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerlessDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerlessDBInstancesResponse rsp = DescribeServerlessDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerlessDBInstancesOutcome(rsp);
        else
            return DescribeServerlessDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeServerlessDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeServerlessDBInstancesAsync(const DescribeServerlessDBInstancesRequest& request, const DescribeServerlessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServerlessDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeServerlessDBInstancesOutcomeCallable PostgresClient::DescribeServerlessDBInstancesCallable(const DescribeServerlessDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServerlessDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeServerlessDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeSlowQueryAnalysisOutcome PostgresClient::DescribeSlowQueryAnalysis(const DescribeSlowQueryAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryAnalysisResponse rsp = DescribeSlowQueryAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryAnalysisOutcome(rsp);
        else
            return DescribeSlowQueryAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryAnalysisOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeSlowQueryAnalysisAsync(const DescribeSlowQueryAnalysisRequest& request, const DescribeSlowQueryAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeSlowQueryAnalysisOutcomeCallable PostgresClient::DescribeSlowQueryAnalysisCallable(const DescribeSlowQueryAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryAnalysisOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeSlowQueryListOutcome PostgresClient::DescribeSlowQueryList(const DescribeSlowQueryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryListResponse rsp = DescribeSlowQueryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryListOutcome(rsp);
        else
            return DescribeSlowQueryListOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryListOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeSlowQueryListAsync(const DescribeSlowQueryListRequest& request, const DescribeSlowQueryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowQueryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeSlowQueryListOutcomeCallable PostgresClient::DescribeSlowQueryListCallable(const DescribeSlowQueryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowQueryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowQueryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DescribeTasksOutcome PostgresClient::DescribeTasks(const DescribeTasksRequest &request)
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

void PostgresClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeTasksOutcomeCallable PostgresClient::DescribeTasksCallable(const DescribeTasksRequest &request)
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

PostgresClient::DescribeZonesOutcome PostgresClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void PostgresClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DescribeZonesOutcomeCallable PostgresClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DestroyDBInstanceOutcome PostgresClient::DestroyDBInstance(const DestroyDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBInstanceResponse rsp = DestroyDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBInstanceOutcome(rsp);
        else
            return DestroyDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::DestroyDBInstanceAsync(const DestroyDBInstanceRequest& request, const DestroyDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DestroyDBInstanceOutcomeCallable PostgresClient::DestroyDBInstanceCallable(const DestroyDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->DestroyDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::DisIsolateDBInstancesOutcome PostgresClient::DisIsolateDBInstances(const DisIsolateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DisIsolateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisIsolateDBInstancesResponse rsp = DisIsolateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisIsolateDBInstancesOutcome(rsp);
        else
            return DisIsolateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DisIsolateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::DisIsolateDBInstancesAsync(const DisIsolateDBInstancesRequest& request, const DisIsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisIsolateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::DisIsolateDBInstancesOutcomeCallable PostgresClient::DisIsolateDBInstancesCallable(const DisIsolateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisIsolateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->DisIsolateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceCreateDBInstancesOutcome PostgresClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateDBInstancesResponse rsp = InquiryPriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateDBInstancesOutcome(rsp);
        else
            return InquiryPriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceCreateDBInstancesOutcomeCallable PostgresClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceRenewDBInstanceOutcome PostgresClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewDBInstanceResponse rsp = InquiryPriceRenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewDBInstanceOutcome(rsp);
        else
            return InquiryPriceRenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceRenewDBInstanceOutcomeCallable PostgresClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcome PostgresClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeDBInstanceResponse rsp = InquiryPriceUpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeDBInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::InquiryPriceUpgradeDBInstanceOutcomeCallable PostgresClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceUpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceUpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::IsolateDBInstancesOutcome PostgresClient::IsolateDBInstances(const IsolateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstancesResponse rsp = IsolateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstancesOutcome(rsp);
        else
            return IsolateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstancesOutcome(outcome.GetError());
    }
}

void PostgresClient::IsolateDBInstancesAsync(const IsolateDBInstancesRequest& request, const IsolateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IsolateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::IsolateDBInstancesOutcomeCallable PostgresClient::IsolateDBInstancesCallable(const IsolateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IsolateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->IsolateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::LockAccountOutcome PostgresClient::LockAccount(const LockAccountRequest &request)
{
    auto outcome = MakeRequest(request, "LockAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockAccountResponse rsp = LockAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockAccountOutcome(rsp);
        else
            return LockAccountOutcome(o.GetError());
    }
    else
    {
        return LockAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::LockAccountAsync(const LockAccountRequest& request, const LockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LockAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::LockAccountOutcomeCallable PostgresClient::LockAccountCallable(const LockAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LockAccountOutcome()>>(
        [this, request]()
        {
            return this->LockAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyAccountPrivilegesOutcome PostgresClient::ModifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegesResponse rsp = ModifyAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegesOutcome(rsp);
        else
            return ModifyAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegesOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyAccountPrivilegesAsync(const ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivileges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyAccountPrivilegesOutcomeCallable PostgresClient::ModifyAccountPrivilegesCallable(const ModifyAccountPrivilegesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountPrivileges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyAccountRemarkOutcome PostgresClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountRemarkResponse rsp = ModifyAccountRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountRemarkOutcome(rsp);
        else
            return ModifyAccountRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountRemarkOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyAccountRemarkOutcomeCallable PostgresClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyBackupDownloadRestrictionOutcome PostgresClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupDownloadRestriction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupDownloadRestrictionResponse rsp = ModifyBackupDownloadRestrictionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupDownloadRestrictionOutcome(rsp);
        else
            return ModifyBackupDownloadRestrictionOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupDownloadRestrictionOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupDownloadRestriction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyBackupDownloadRestrictionOutcomeCallable PostgresClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupDownloadRestrictionOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupDownloadRestriction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyBackupPlanOutcome PostgresClient::ModifyBackupPlan(const ModifyBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupPlanResponse rsp = ModifyBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupPlanOutcome(rsp);
        else
            return ModifyBackupPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupPlanOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBackupPlanAsync(const ModifyBackupPlanRequest& request, const ModifyBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyBackupPlanOutcomeCallable PostgresClient::ModifyBackupPlanCallable(const ModifyBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyBaseBackupExpireTimeOutcome PostgresClient::ModifyBaseBackupExpireTime(const ModifyBaseBackupExpireTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaseBackupExpireTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaseBackupExpireTimeResponse rsp = ModifyBaseBackupExpireTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaseBackupExpireTimeOutcome(rsp);
        else
            return ModifyBaseBackupExpireTimeOutcome(o.GetError());
    }
    else
    {
        return ModifyBaseBackupExpireTimeOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyBaseBackupExpireTimeAsync(const ModifyBaseBackupExpireTimeRequest& request, const ModifyBaseBackupExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBaseBackupExpireTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyBaseBackupExpireTimeOutcomeCallable PostgresClient::ModifyBaseBackupExpireTimeCallable(const ModifyBaseBackupExpireTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBaseBackupExpireTimeOutcome()>>(
        [this, request]()
        {
            return this->ModifyBaseBackupExpireTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceChargeTypeOutcome PostgresClient::ModifyDBInstanceChargeType(const ModifyDBInstanceChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceChargeTypeResponse rsp = ModifyDBInstanceChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceChargeTypeOutcome(rsp);
        else
            return ModifyDBInstanceChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceChargeTypeOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceChargeTypeAsync(const ModifyDBInstanceChargeTypeRequest& request, const ModifyDBInstanceChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceChargeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceChargeTypeOutcomeCallable PostgresClient::ModifyDBInstanceChargeTypeCallable(const ModifyDBInstanceChargeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceChargeTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceChargeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceDeploymentOutcome PostgresClient::ModifyDBInstanceDeployment(const ModifyDBInstanceDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceDeploymentResponse rsp = ModifyDBInstanceDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceDeploymentOutcome(rsp);
        else
            return ModifyDBInstanceDeploymentOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceDeploymentOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceDeploymentAsync(const ModifyDBInstanceDeploymentRequest& request, const ModifyDBInstanceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceDeployment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceDeploymentOutcomeCallable PostgresClient::ModifyDBInstanceDeploymentCallable(const ModifyDBInstanceDeploymentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceDeploymentOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceDeployment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceHAConfigOutcome PostgresClient::ModifyDBInstanceHAConfig(const ModifyDBInstanceHAConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceHAConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceHAConfigResponse rsp = ModifyDBInstanceHAConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceHAConfigOutcome(rsp);
        else
            return ModifyDBInstanceHAConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceHAConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceHAConfigAsync(const ModifyDBInstanceHAConfigRequest& request, const ModifyDBInstanceHAConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceHAConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceHAConfigOutcomeCallable PostgresClient::ModifyDBInstanceHAConfigCallable(const ModifyDBInstanceHAConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceHAConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceHAConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceNameOutcome PostgresClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNameResponse rsp = ModifyDBInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNameOutcome(rsp);
        else
            return ModifyDBInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNameOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceNameOutcomeCallable PostgresClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceParametersOutcome PostgresClient::ModifyDBInstanceParameters(const ModifyDBInstanceParametersRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceParameters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceParametersResponse rsp = ModifyDBInstanceParametersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceParametersOutcome(rsp);
        else
            return ModifyDBInstanceParametersOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceParametersOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceParametersAsync(const ModifyDBInstanceParametersRequest& request, const ModifyDBInstanceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceParameters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceParametersOutcomeCallable PostgresClient::ModifyDBInstanceParametersCallable(const ModifyDBInstanceParametersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceParametersOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceParameters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceReadOnlyGroupOutcome PostgresClient::ModifyDBInstanceReadOnlyGroup(const ModifyDBInstanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceReadOnlyGroupResponse rsp = ModifyDBInstanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceReadOnlyGroupOutcome(rsp);
        else
            return ModifyDBInstanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceReadOnlyGroupAsync(const ModifyDBInstanceReadOnlyGroupRequest& request, const ModifyDBInstanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceReadOnlyGroupOutcomeCallable PostgresClient::ModifyDBInstanceReadOnlyGroupCallable(const ModifyDBInstanceReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceSSLConfigOutcome PostgresClient::ModifyDBInstanceSSLConfig(const ModifyDBInstanceSSLConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSSLConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSSLConfigResponse rsp = ModifyDBInstanceSSLConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSSLConfigOutcome(rsp);
        else
            return ModifyDBInstanceSSLConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSSLConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSSLConfigAsync(const ModifyDBInstanceSSLConfigRequest& request, const ModifyDBInstanceSSLConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSSLConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceSSLConfigOutcomeCallable PostgresClient::ModifyDBInstanceSSLConfigCallable(const ModifyDBInstanceSSLConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSSLConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceSecurityGroupsOutcome PostgresClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupsResponse rsp = ModifyDBInstanceSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupsOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupsOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceSecurityGroupsOutcomeCallable PostgresClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstanceSpecOutcome PostgresClient::ModifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSpecResponse rsp = ModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSpecOutcome(rsp);
        else
            return ModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstanceSpecOutcomeCallable PostgresClient::ModifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSpecOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDBInstancesProjectOutcome PostgresClient::ModifyDBInstancesProject(const ModifyDBInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstancesProjectResponse rsp = ModifyDBInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstancesProjectOutcome(rsp);
        else
            return ModifyDBInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstancesProjectOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDBInstancesProjectAsync(const ModifyDBInstancesProjectRequest& request, const ModifyDBInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDBInstancesProjectOutcomeCallable PostgresClient::ModifyDBInstancesProjectCallable(const ModifyDBInstancesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstancesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstancesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyDatabaseOwnerOutcome PostgresClient::ModifyDatabaseOwner(const ModifyDatabaseOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseOwnerResponse rsp = ModifyDatabaseOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseOwnerOutcome(rsp);
        else
            return ModifyDatabaseOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseOwnerOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyDatabaseOwnerAsync(const ModifyDatabaseOwnerRequest& request, const ModifyDatabaseOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyDatabaseOwnerOutcomeCallable PostgresClient::ModifyDatabaseOwnerCallable(const ModifyDatabaseOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseOwnerOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyMaintainTimeWindowOutcome PostgresClient::ModifyMaintainTimeWindow(const ModifyMaintainTimeWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintainTimeWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintainTimeWindowResponse rsp = ModifyMaintainTimeWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintainTimeWindowOutcome(rsp);
        else
            return ModifyMaintainTimeWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintainTimeWindowOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyMaintainTimeWindowAsync(const ModifyMaintainTimeWindowRequest& request, const ModifyMaintainTimeWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaintainTimeWindow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyMaintainTimeWindowOutcomeCallable PostgresClient::ModifyMaintainTimeWindowCallable(const ModifyMaintainTimeWindowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaintainTimeWindowOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaintainTimeWindow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyParameterTemplateOutcome PostgresClient::ModifyParameterTemplate(const ModifyParameterTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyParameterTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyParameterTemplateResponse rsp = ModifyParameterTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyParameterTemplateOutcome(rsp);
        else
            return ModifyParameterTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyParameterTemplateOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyParameterTemplateAsync(const ModifyParameterTemplateRequest& request, const ModifyParameterTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyParameterTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyParameterTemplateOutcomeCallable PostgresClient::ModifyParameterTemplateCallable(const ModifyParameterTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyParameterTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyParameterTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyReadOnlyDBInstanceWeightOutcome PostgresClient::ModifyReadOnlyDBInstanceWeight(const ModifyReadOnlyDBInstanceWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyDBInstanceWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyDBInstanceWeightResponse rsp = ModifyReadOnlyDBInstanceWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyDBInstanceWeightOutcome(rsp);
        else
            return ModifyReadOnlyDBInstanceWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyDBInstanceWeightOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyReadOnlyDBInstanceWeightAsync(const ModifyReadOnlyDBInstanceWeightRequest& request, const ModifyReadOnlyDBInstanceWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReadOnlyDBInstanceWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyReadOnlyDBInstanceWeightOutcomeCallable PostgresClient::ModifyReadOnlyDBInstanceWeightCallable(const ModifyReadOnlyDBInstanceWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReadOnlyDBInstanceWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyReadOnlyDBInstanceWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifyReadOnlyGroupConfigOutcome PostgresClient::ModifyReadOnlyGroupConfig(const ModifyReadOnlyGroupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyGroupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyGroupConfigResponse rsp = ModifyReadOnlyGroupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyGroupConfigOutcome(rsp);
        else
            return ModifyReadOnlyGroupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyGroupConfigOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifyReadOnlyGroupConfigAsync(const ModifyReadOnlyGroupConfigRequest& request, const ModifyReadOnlyGroupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReadOnlyGroupConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifyReadOnlyGroupConfigOutcomeCallable PostgresClient::ModifyReadOnlyGroupConfigCallable(const ModifyReadOnlyGroupConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReadOnlyGroupConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyReadOnlyGroupConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ModifySwitchTimePeriodOutcome PostgresClient::ModifySwitchTimePeriod(const ModifySwitchTimePeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySwitchTimePeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySwitchTimePeriodResponse rsp = ModifySwitchTimePeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySwitchTimePeriodOutcome(rsp);
        else
            return ModifySwitchTimePeriodOutcome(o.GetError());
    }
    else
    {
        return ModifySwitchTimePeriodOutcome(outcome.GetError());
    }
}

void PostgresClient::ModifySwitchTimePeriodAsync(const ModifySwitchTimePeriodRequest& request, const ModifySwitchTimePeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySwitchTimePeriod(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ModifySwitchTimePeriodOutcomeCallable PostgresClient::ModifySwitchTimePeriodCallable(const ModifySwitchTimePeriodRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySwitchTimePeriodOutcome()>>(
        [this, request]()
        {
            return this->ModifySwitchTimePeriod(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::OpenDBExtranetAccessOutcome PostgresClient::OpenDBExtranetAccess(const OpenDBExtranetAccessRequest &request)
{
    auto outcome = MakeRequest(request, "OpenDBExtranetAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenDBExtranetAccessResponse rsp = OpenDBExtranetAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenDBExtranetAccessOutcome(rsp);
        else
            return OpenDBExtranetAccessOutcome(o.GetError());
    }
    else
    {
        return OpenDBExtranetAccessOutcome(outcome.GetError());
    }
}

void PostgresClient::OpenDBExtranetAccessAsync(const OpenDBExtranetAccessRequest& request, const OpenDBExtranetAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenDBExtranetAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::OpenDBExtranetAccessOutcomeCallable PostgresClient::OpenDBExtranetAccessCallable(const OpenDBExtranetAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenDBExtranetAccessOutcome()>>(
        [this, request]()
        {
            return this->OpenDBExtranetAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RebalanceReadOnlyGroupOutcome PostgresClient::RebalanceReadOnlyGroup(const RebalanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RebalanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebalanceReadOnlyGroupResponse rsp = RebalanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebalanceReadOnlyGroupOutcome(rsp);
        else
            return RebalanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RebalanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::RebalanceReadOnlyGroupAsync(const RebalanceReadOnlyGroupRequest& request, const RebalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebalanceReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RebalanceReadOnlyGroupOutcomeCallable PostgresClient::RebalanceReadOnlyGroupCallable(const RebalanceReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebalanceReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->RebalanceReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RemoveDBInstanceFromReadOnlyGroupOutcome PostgresClient::RemoveDBInstanceFromReadOnlyGroup(const RemoveDBInstanceFromReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveDBInstanceFromReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveDBInstanceFromReadOnlyGroupResponse rsp = RemoveDBInstanceFromReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveDBInstanceFromReadOnlyGroupOutcome(rsp);
        else
            return RemoveDBInstanceFromReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveDBInstanceFromReadOnlyGroupOutcome(outcome.GetError());
    }
}

void PostgresClient::RemoveDBInstanceFromReadOnlyGroupAsync(const RemoveDBInstanceFromReadOnlyGroupRequest& request, const RemoveDBInstanceFromReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveDBInstanceFromReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RemoveDBInstanceFromReadOnlyGroupOutcomeCallable PostgresClient::RemoveDBInstanceFromReadOnlyGroupCallable(const RemoveDBInstanceFromReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveDBInstanceFromReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->RemoveDBInstanceFromReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RenewInstanceOutcome PostgresClient::RenewInstance(const RenewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstanceResponse rsp = RenewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstanceOutcome(rsp);
        else
            return RenewInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RenewInstanceOutcomeCallable PostgresClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::ResetAccountPasswordOutcome PostgresClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAccountPasswordResponse rsp = ResetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAccountPasswordOutcome(rsp);
        else
            return ResetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAccountPasswordOutcome(outcome.GetError());
    }
}

void PostgresClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::ResetAccountPasswordOutcomeCallable PostgresClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RestartDBInstanceOutcome PostgresClient::RestartDBInstance(const RestartDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDBInstanceResponse rsp = RestartDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDBInstanceOutcome(rsp);
        else
            return RestartDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartDBInstanceOutcome(outcome.GetError());
    }
}

void PostgresClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RestartDBInstanceOutcomeCallable PostgresClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestartDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::RestoreDBInstanceObjectsOutcome PostgresClient::RestoreDBInstanceObjects(const RestoreDBInstanceObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreDBInstanceObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreDBInstanceObjectsResponse rsp = RestoreDBInstanceObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreDBInstanceObjectsOutcome(rsp);
        else
            return RestoreDBInstanceObjectsOutcome(o.GetError());
    }
    else
    {
        return RestoreDBInstanceObjectsOutcome(outcome.GetError());
    }
}

void PostgresClient::RestoreDBInstanceObjectsAsync(const RestoreDBInstanceObjectsRequest& request, const RestoreDBInstanceObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreDBInstanceObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::RestoreDBInstanceObjectsOutcomeCallable PostgresClient::RestoreDBInstanceObjectsCallable(const RestoreDBInstanceObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreDBInstanceObjectsOutcome()>>(
        [this, request]()
        {
            return this->RestoreDBInstanceObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::SetAutoRenewFlagOutcome PostgresClient::SetAutoRenewFlag(const SetAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAutoRenewFlagResponse rsp = SetAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAutoRenewFlagOutcome(rsp);
        else
            return SetAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return SetAutoRenewFlagOutcome(outcome.GetError());
    }
}

void PostgresClient::SetAutoRenewFlagAsync(const SetAutoRenewFlagRequest& request, const SetAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::SetAutoRenewFlagOutcomeCallable PostgresClient::SetAutoRenewFlagCallable(const SetAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->SetAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::SwitchDBInstancePrimaryOutcome PostgresClient::SwitchDBInstancePrimary(const SwitchDBInstancePrimaryRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDBInstancePrimary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDBInstancePrimaryResponse rsp = SwitchDBInstancePrimaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDBInstancePrimaryOutcome(rsp);
        else
            return SwitchDBInstancePrimaryOutcome(o.GetError());
    }
    else
    {
        return SwitchDBInstancePrimaryOutcome(outcome.GetError());
    }
}

void PostgresClient::SwitchDBInstancePrimaryAsync(const SwitchDBInstancePrimaryRequest& request, const SwitchDBInstancePrimaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDBInstancePrimary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::SwitchDBInstancePrimaryOutcomeCallable PostgresClient::SwitchDBInstancePrimaryCallable(const SwitchDBInstancePrimaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDBInstancePrimaryOutcome()>>(
        [this, request]()
        {
            return this->SwitchDBInstancePrimary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::UnlockAccountOutcome PostgresClient::UnlockAccount(const UnlockAccountRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockAccountResponse rsp = UnlockAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockAccountOutcome(rsp);
        else
            return UnlockAccountOutcome(o.GetError());
    }
    else
    {
        return UnlockAccountOutcome(outcome.GetError());
    }
}

void PostgresClient::UnlockAccountAsync(const UnlockAccountRequest& request, const UnlockAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnlockAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::UnlockAccountOutcomeCallable PostgresClient::UnlockAccountCallable(const UnlockAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnlockAccountOutcome()>>(
        [this, request]()
        {
            return this->UnlockAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::UpgradeDBInstanceKernelVersionOutcome PostgresClient::UpgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceKernelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceKernelVersionResponse rsp = UpgradeDBInstanceKernelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceKernelVersionOutcome(rsp);
        else
            return UpgradeDBInstanceKernelVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceKernelVersionOutcome(outcome.GetError());
    }
}

void PostgresClient::UpgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstanceKernelVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::UpgradeDBInstanceKernelVersionOutcomeCallable PostgresClient::UpgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceKernelVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstanceKernelVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PostgresClient::UpgradeDBInstanceMajorVersionOutcome PostgresClient::UpgradeDBInstanceMajorVersion(const UpgradeDBInstanceMajorVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceMajorVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceMajorVersionResponse rsp = UpgradeDBInstanceMajorVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceMajorVersionOutcome(rsp);
        else
            return UpgradeDBInstanceMajorVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceMajorVersionOutcome(outcome.GetError());
    }
}

void PostgresClient::UpgradeDBInstanceMajorVersionAsync(const UpgradeDBInstanceMajorVersionRequest& request, const UpgradeDBInstanceMajorVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstanceMajorVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PostgresClient::UpgradeDBInstanceMajorVersionOutcomeCallable PostgresClient::UpgradeDBInstanceMajorVersionCallable(const UpgradeDBInstanceMajorVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceMajorVersionOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstanceMajorVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

