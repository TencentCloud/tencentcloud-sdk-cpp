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

#include <tencentcloud/sqlserver/v20180328/SqlserverClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sqlserver::V20180328;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-28";
    const string ENDPOINT = "sqlserver.tencentcloudapi.com";
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region) :
    SqlserverClient(credential, region, ClientProfile())
{
}

SqlserverClient::SqlserverClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SqlserverClient::AssociateSecurityGroupsOutcome SqlserverClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateSecurityGroupsResponse rsp = AssociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateSecurityGroupsOutcome(rsp);
        else
            return AssociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::AssociateSecurityGroupsOutcomeCallable SqlserverClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::BalanceReadOnlyGroupOutcome SqlserverClient::BalanceReadOnlyGroup(const BalanceReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BalanceReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BalanceReadOnlyGroupResponse rsp = BalanceReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BalanceReadOnlyGroupOutcome(rsp);
        else
            return BalanceReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return BalanceReadOnlyGroupOutcome(outcome.GetError());
    }
}

void SqlserverClient::BalanceReadOnlyGroupAsync(const BalanceReadOnlyGroupRequest& request, const BalanceReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BalanceReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::BalanceReadOnlyGroupOutcomeCallable SqlserverClient::BalanceReadOnlyGroupCallable(const BalanceReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BalanceReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->BalanceReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CloneDBOutcome SqlserverClient::CloneDB(const CloneDBRequest &request)
{
    auto outcome = MakeRequest(request, "CloneDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneDBResponse rsp = CloneDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneDBOutcome(rsp);
        else
            return CloneDBOutcome(o.GetError());
    }
    else
    {
        return CloneDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::CloneDBAsync(const CloneDBRequest& request, const CloneDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloneDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CloneDBOutcomeCallable SqlserverClient::CloneDBCallable(const CloneDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloneDBOutcome()>>(
        [this, request]()
        {
            return this->CloneDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CloseInterCommunicationOutcome SqlserverClient::CloseInterCommunication(const CloseInterCommunicationRequest &request)
{
    auto outcome = MakeRequest(request, "CloseInterCommunication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseInterCommunicationResponse rsp = CloseInterCommunicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseInterCommunicationOutcome(rsp);
        else
            return CloseInterCommunicationOutcome(o.GetError());
    }
    else
    {
        return CloseInterCommunicationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CloseInterCommunicationAsync(const CloseInterCommunicationRequest& request, const CloseInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseInterCommunication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CloseInterCommunicationOutcomeCallable SqlserverClient::CloseInterCommunicationCallable(const CloseInterCommunicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseInterCommunicationOutcome()>>(
        [this, request]()
        {
            return this->CloseInterCommunication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CompleteExpansionOutcome SqlserverClient::CompleteExpansion(const CompleteExpansionRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteExpansion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteExpansionResponse rsp = CompleteExpansionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteExpansionOutcome(rsp);
        else
            return CompleteExpansionOutcome(o.GetError());
    }
    else
    {
        return CompleteExpansionOutcome(outcome.GetError());
    }
}

void SqlserverClient::CompleteExpansionAsync(const CompleteExpansionRequest& request, const CompleteExpansionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteExpansion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CompleteExpansionOutcomeCallable SqlserverClient::CompleteExpansionCallable(const CompleteExpansionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteExpansionOutcome()>>(
        [this, request]()
        {
            return this->CompleteExpansion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CompleteMigrationOutcome SqlserverClient::CompleteMigration(const CompleteMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrationResponse rsp = CompleteMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrationOutcome(rsp);
        else
            return CompleteMigrationOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CompleteMigrationAsync(const CompleteMigrationRequest& request, const CompleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompleteMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CompleteMigrationOutcomeCallable SqlserverClient::CompleteMigrationCallable(const CompleteMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompleteMigrationOutcome()>>(
        [this, request]()
        {
            return this->CompleteMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateAccountOutcome SqlserverClient::CreateAccount(const CreateAccountRequest &request)
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

void SqlserverClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateAccountOutcomeCallable SqlserverClient::CreateAccountCallable(const CreateAccountRequest &request)
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

SqlserverClient::CreateBackupOutcome SqlserverClient::CreateBackup(const CreateBackupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupResponse rsp = CreateBackupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupOutcome(rsp);
        else
            return CreateBackupOutcome(o.GetError());
    }
    else
    {
        return CreateBackupOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBackupAsync(const CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBackupOutcomeCallable SqlserverClient::CreateBackupCallable(const CreateBackupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackupOutcome()>>(
        [this, request]()
        {
            return this->CreateBackup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateBackupMigrationOutcome SqlserverClient::CreateBackupMigration(const CreateBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupMigrationResponse rsp = CreateBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupMigrationOutcome(rsp);
        else
            return CreateBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBackupMigrationAsync(const CreateBackupMigrationRequest& request, const CreateBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBackupMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBackupMigrationOutcomeCallable SqlserverClient::CreateBackupMigrationCallable(const CreateBackupMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBackupMigrationOutcome()>>(
        [this, request]()
        {
            return this->CreateBackupMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateBasicDBInstancesOutcome SqlserverClient::CreateBasicDBInstances(const CreateBasicDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBasicDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBasicDBInstancesResponse rsp = CreateBasicDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBasicDBInstancesOutcome(rsp);
        else
            return CreateBasicDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateBasicDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBasicDBInstancesAsync(const CreateBasicDBInstancesRequest& request, const CreateBasicDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBasicDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBasicDBInstancesOutcomeCallable SqlserverClient::CreateBasicDBInstancesCallable(const CreateBasicDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBasicDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateBasicDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateBusinessDBInstancesOutcome SqlserverClient::CreateBusinessDBInstances(const CreateBusinessDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBusinessDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBusinessDBInstancesResponse rsp = CreateBusinessDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBusinessDBInstancesOutcome(rsp);
        else
            return CreateBusinessDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateBusinessDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBusinessDBInstancesAsync(const CreateBusinessDBInstancesRequest& request, const CreateBusinessDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBusinessDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBusinessDBInstancesOutcomeCallable SqlserverClient::CreateBusinessDBInstancesCallable(const CreateBusinessDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBusinessDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateBusinessDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateBusinessIntelligenceFileOutcome SqlserverClient::CreateBusinessIntelligenceFile(const CreateBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBusinessIntelligenceFileResponse rsp = CreateBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBusinessIntelligenceFileOutcome(rsp);
        else
            return CreateBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return CreateBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateBusinessIntelligenceFileAsync(const CreateBusinessIntelligenceFileRequest& request, const CreateBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBusinessIntelligenceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateBusinessIntelligenceFileOutcomeCallable SqlserverClient::CreateBusinessIntelligenceFileCallable(const CreateBusinessIntelligenceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBusinessIntelligenceFileOutcome()>>(
        [this, request]()
        {
            return this->CreateBusinessIntelligenceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateCloudDBInstancesOutcome SqlserverClient::CreateCloudDBInstances(const CreateCloudDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudDBInstancesResponse rsp = CreateCloudDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudDBInstancesOutcome(rsp);
        else
            return CreateCloudDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateCloudDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateCloudDBInstancesAsync(const CreateCloudDBInstancesRequest& request, const CreateCloudDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateCloudDBInstancesOutcomeCallable SqlserverClient::CreateCloudDBInstancesCallable(const CreateCloudDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateCloudReadOnlyDBInstancesOutcome SqlserverClient::CreateCloudReadOnlyDBInstances(const CreateCloudReadOnlyDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudReadOnlyDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudReadOnlyDBInstancesResponse rsp = CreateCloudReadOnlyDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudReadOnlyDBInstancesOutcome(rsp);
        else
            return CreateCloudReadOnlyDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateCloudReadOnlyDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateCloudReadOnlyDBInstancesAsync(const CreateCloudReadOnlyDBInstancesRequest& request, const CreateCloudReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudReadOnlyDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateCloudReadOnlyDBInstancesOutcomeCallable SqlserverClient::CreateCloudReadOnlyDBInstancesCallable(const CreateCloudReadOnlyDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudReadOnlyDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudReadOnlyDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateDBOutcome SqlserverClient::CreateDB(const CreateDBRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBResponse rsp = CreateDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBOutcome(rsp);
        else
            return CreateDBOutcome(o.GetError());
    }
    else
    {
        return CreateDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBAsync(const CreateDBRequest& request, const CreateDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateDBOutcomeCallable SqlserverClient::CreateDBCallable(const CreateDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBOutcome()>>(
        [this, request]()
        {
            return this->CreateDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateDBInstancesOutcome SqlserverClient::CreateDBInstances(const CreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstancesResponse rsp = CreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstancesOutcome(rsp);
        else
            return CreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateDBInstancesAsync(const CreateDBInstancesRequest& request, const CreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateDBInstancesOutcomeCallable SqlserverClient::CreateDBInstancesCallable(const CreateDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateIncrementalMigrationOutcome SqlserverClient::CreateIncrementalMigration(const CreateIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncrementalMigrationResponse rsp = CreateIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncrementalMigrationOutcome(rsp);
        else
            return CreateIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateIncrementalMigrationAsync(const CreateIncrementalMigrationRequest& request, const CreateIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIncrementalMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateIncrementalMigrationOutcomeCallable SqlserverClient::CreateIncrementalMigrationCallable(const CreateIncrementalMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIncrementalMigrationOutcome()>>(
        [this, request]()
        {
            return this->CreateIncrementalMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateMigrationOutcome SqlserverClient::CreateMigration(const CreateMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrationResponse rsp = CreateMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrationOutcome(rsp);
        else
            return CreateMigrationOutcome(o.GetError());
    }
    else
    {
        return CreateMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateMigrationAsync(const CreateMigrationRequest& request, const CreateMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateMigrationOutcomeCallable SqlserverClient::CreateMigrationCallable(const CreateMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMigrationOutcome()>>(
        [this, request]()
        {
            return this->CreateMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreatePublishSubscribeOutcome SqlserverClient::CreatePublishSubscribe(const CreatePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublishSubscribeResponse rsp = CreatePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublishSubscribeOutcome(rsp);
        else
            return CreatePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreatePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreatePublishSubscribeAsync(const CreatePublishSubscribeRequest& request, const CreatePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePublishSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreatePublishSubscribeOutcomeCallable SqlserverClient::CreatePublishSubscribeCallable(const CreatePublishSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePublishSubscribeOutcome()>>(
        [this, request]()
        {
            return this->CreatePublishSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CreateReadOnlyDBInstancesOutcome SqlserverClient::CreateReadOnlyDBInstances(const CreateReadOnlyDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReadOnlyDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReadOnlyDBInstancesResponse rsp = CreateReadOnlyDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReadOnlyDBInstancesOutcome(rsp);
        else
            return CreateReadOnlyDBInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateReadOnlyDBInstancesOutcome(outcome.GetError());
    }
}

void SqlserverClient::CreateReadOnlyDBInstancesAsync(const CreateReadOnlyDBInstancesRequest& request, const CreateReadOnlyDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReadOnlyDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CreateReadOnlyDBInstancesOutcomeCallable SqlserverClient::CreateReadOnlyDBInstancesCallable(const CreateReadOnlyDBInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReadOnlyDBInstancesOutcome()>>(
        [this, request]()
        {
            return this->CreateReadOnlyDBInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::CutXEventsOutcome SqlserverClient::CutXEvents(const CutXEventsRequest &request)
{
    auto outcome = MakeRequest(request, "CutXEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CutXEventsResponse rsp = CutXEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CutXEventsOutcome(rsp);
        else
            return CutXEventsOutcome(o.GetError());
    }
    else
    {
        return CutXEventsOutcome(outcome.GetError());
    }
}

void SqlserverClient::CutXEventsAsync(const CutXEventsRequest& request, const CutXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CutXEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::CutXEventsOutcomeCallable SqlserverClient::CutXEventsCallable(const CutXEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CutXEventsOutcome()>>(
        [this, request]()
        {
            return this->CutXEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteAccountOutcome SqlserverClient::DeleteAccount(const DeleteAccountRequest &request)
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

void SqlserverClient::DeleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteAccountOutcomeCallable SqlserverClient::DeleteAccountCallable(const DeleteAccountRequest &request)
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

SqlserverClient::DeleteBackupMigrationOutcome SqlserverClient::DeleteBackupMigration(const DeleteBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupMigrationResponse rsp = DeleteBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupMigrationOutcome(rsp);
        else
            return DeleteBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteBackupMigrationAsync(const DeleteBackupMigrationRequest& request, const DeleteBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBackupMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteBackupMigrationOutcomeCallable SqlserverClient::DeleteBackupMigrationCallable(const DeleteBackupMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBackupMigrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteBackupMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteBusinessIntelligenceFileOutcome SqlserverClient::DeleteBusinessIntelligenceFile(const DeleteBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBusinessIntelligenceFileResponse rsp = DeleteBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBusinessIntelligenceFileOutcome(rsp);
        else
            return DeleteBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return DeleteBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteBusinessIntelligenceFileAsync(const DeleteBusinessIntelligenceFileRequest& request, const DeleteBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBusinessIntelligenceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteBusinessIntelligenceFileOutcomeCallable SqlserverClient::DeleteBusinessIntelligenceFileCallable(const DeleteBusinessIntelligenceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBusinessIntelligenceFileOutcome()>>(
        [this, request]()
        {
            return this->DeleteBusinessIntelligenceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteDBOutcome SqlserverClient::DeleteDB(const DeleteDBRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBResponse rsp = DeleteDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBOutcome(rsp);
        else
            return DeleteDBOutcome(o.GetError());
    }
    else
    {
        return DeleteDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteDBAsync(const DeleteDBRequest& request, const DeleteDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteDBOutcomeCallable SqlserverClient::DeleteDBCallable(const DeleteDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBOutcome()>>(
        [this, request]()
        {
            return this->DeleteDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteDBInstanceOutcome SqlserverClient::DeleteDBInstance(const DeleteDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDBInstanceResponse rsp = DeleteDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDBInstanceOutcome(rsp);
        else
            return DeleteDBInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteDBInstanceAsync(const DeleteDBInstanceRequest& request, const DeleteDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteDBInstanceOutcomeCallable SqlserverClient::DeleteDBInstanceCallable(const DeleteDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteIncrementalMigrationOutcome SqlserverClient::DeleteIncrementalMigration(const DeleteIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIncrementalMigrationResponse rsp = DeleteIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIncrementalMigrationOutcome(rsp);
        else
            return DeleteIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteIncrementalMigrationAsync(const DeleteIncrementalMigrationRequest& request, const DeleteIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIncrementalMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteIncrementalMigrationOutcomeCallable SqlserverClient::DeleteIncrementalMigrationCallable(const DeleteIncrementalMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIncrementalMigrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteIncrementalMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteMigrationOutcome SqlserverClient::DeleteMigration(const DeleteMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrationResponse rsp = DeleteMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrationOutcome(rsp);
        else
            return DeleteMigrationOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteMigrationAsync(const DeleteMigrationRequest& request, const DeleteMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteMigrationOutcomeCallable SqlserverClient::DeleteMigrationCallable(const DeleteMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMigrationOutcome()>>(
        [this, request]()
        {
            return this->DeleteMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeletePublishSubscribeOutcome SqlserverClient::DeletePublishSubscribe(const DeletePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePublishSubscribeResponse rsp = DeletePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePublishSubscribeOutcome(rsp);
        else
            return DeletePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeletePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeletePublishSubscribeAsync(const DeletePublishSubscribeRequest& request, const DeletePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePublishSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeletePublishSubscribeOutcomeCallable SqlserverClient::DeletePublishSubscribeCallable(const DeletePublishSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePublishSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DeletePublishSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DeleteRestoreTaskOutcome SqlserverClient::DeleteRestoreTask(const DeleteRestoreTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRestoreTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRestoreTaskResponse rsp = DeleteRestoreTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRestoreTaskOutcome(rsp);
        else
            return DeleteRestoreTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRestoreTaskOutcome(outcome.GetError());
    }
}

void SqlserverClient::DeleteRestoreTaskAsync(const DeleteRestoreTaskRequest& request, const DeleteRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRestoreTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DeleteRestoreTaskOutcomeCallable SqlserverClient::DeleteRestoreTaskCallable(const DeleteRestoreTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRestoreTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRestoreTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeAccountPrivilegeByDBOutcome SqlserverClient::DescribeAccountPrivilegeByDB(const DescribeAccountPrivilegeByDBRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountPrivilegeByDB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountPrivilegeByDBResponse rsp = DescribeAccountPrivilegeByDBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountPrivilegeByDBOutcome(rsp);
        else
            return DescribeAccountPrivilegeByDBOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountPrivilegeByDBOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeAccountPrivilegeByDBAsync(const DescribeAccountPrivilegeByDBRequest& request, const DescribeAccountPrivilegeByDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountPrivilegeByDB(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeAccountPrivilegeByDBOutcomeCallable SqlserverClient::DescribeAccountPrivilegeByDBCallable(const DescribeAccountPrivilegeByDBRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountPrivilegeByDBOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountPrivilegeByDB(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeAccountsOutcome SqlserverClient::DescribeAccounts(const DescribeAccountsRequest &request)
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

void SqlserverClient::DescribeAccountsAsync(const DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeAccountsOutcomeCallable SqlserverClient::DescribeAccountsCallable(const DescribeAccountsRequest &request)
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

SqlserverClient::DescribeBackupByFlowIdOutcome SqlserverClient::DescribeBackupByFlowId(const DescribeBackupByFlowIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupByFlowId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupByFlowIdResponse rsp = DescribeBackupByFlowIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupByFlowIdOutcome(rsp);
        else
            return DescribeBackupByFlowIdOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupByFlowIdOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupByFlowIdAsync(const DescribeBackupByFlowIdRequest& request, const DescribeBackupByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupByFlowId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupByFlowIdOutcomeCallable SqlserverClient::DescribeBackupByFlowIdCallable(const DescribeBackupByFlowIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupByFlowIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupByFlowId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupCommandOutcome SqlserverClient::DescribeBackupCommand(const DescribeBackupCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupCommandResponse rsp = DescribeBackupCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupCommandOutcome(rsp);
        else
            return DescribeBackupCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupCommandOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupCommandAsync(const DescribeBackupCommandRequest& request, const DescribeBackupCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupCommandOutcomeCallable SqlserverClient::DescribeBackupCommandCallable(const DescribeBackupCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupFilesOutcome SqlserverClient::DescribeBackupFiles(const DescribeBackupFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupFilesResponse rsp = DescribeBackupFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupFilesOutcome(rsp);
        else
            return DescribeBackupFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupFilesOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupFilesAsync(const DescribeBackupFilesRequest& request, const DescribeBackupFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupFilesOutcomeCallable SqlserverClient::DescribeBackupFilesCallable(const DescribeBackupFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupMigrationOutcome SqlserverClient::DescribeBackupMigration(const DescribeBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupMigrationResponse rsp = DescribeBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupMigrationOutcome(rsp);
        else
            return DescribeBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupMigrationAsync(const DescribeBackupMigrationRequest& request, const DescribeBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupMigrationOutcomeCallable SqlserverClient::DescribeBackupMigrationCallable(const DescribeBackupMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupMigrationOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupMonitorOutcome SqlserverClient::DescribeBackupMonitor(const DescribeBackupMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupMonitorResponse rsp = DescribeBackupMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupMonitorOutcome(rsp);
        else
            return DescribeBackupMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupMonitorOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupMonitorAsync(const DescribeBackupMonitorRequest& request, const DescribeBackupMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupMonitorOutcomeCallable SqlserverClient::DescribeBackupMonitorCallable(const DescribeBackupMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupMonitorOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupStatisticalOutcome SqlserverClient::DescribeBackupStatistical(const DescribeBackupStatisticalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupStatistical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupStatisticalResponse rsp = DescribeBackupStatisticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupStatisticalOutcome(rsp);
        else
            return DescribeBackupStatisticalOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupStatisticalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupStatisticalAsync(const DescribeBackupStatisticalRequest& request, const DescribeBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupStatistical(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupStatisticalOutcomeCallable SqlserverClient::DescribeBackupStatisticalCallable(const DescribeBackupStatisticalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupStatisticalOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupStatistical(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupSummaryOutcome SqlserverClient::DescribeBackupSummary(const DescribeBackupSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupSummaryResponse rsp = DescribeBackupSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupSummaryOutcome(rsp);
        else
            return DescribeBackupSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupSummaryOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupSummaryAsync(const DescribeBackupSummaryRequest& request, const DescribeBackupSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupSummaryOutcomeCallable SqlserverClient::DescribeBackupSummaryCallable(const DescribeBackupSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupUploadSizeOutcome SqlserverClient::DescribeBackupUploadSize(const DescribeBackupUploadSizeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupUploadSize");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupUploadSizeResponse rsp = DescribeBackupUploadSizeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupUploadSizeOutcome(rsp);
        else
            return DescribeBackupUploadSizeOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupUploadSizeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupUploadSizeAsync(const DescribeBackupUploadSizeRequest& request, const DescribeBackupUploadSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackupUploadSize(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupUploadSizeOutcomeCallable SqlserverClient::DescribeBackupUploadSizeCallable(const DescribeBackupUploadSizeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupUploadSizeOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackupUploadSize(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBackupsOutcome SqlserverClient::DescribeBackups(const DescribeBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupsResponse rsp = DescribeBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupsOutcome(rsp);
        else
            return DescribeBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBackupsAsync(const DescribeBackupsRequest& request, const DescribeBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBackupsOutcomeCallable SqlserverClient::DescribeBackupsCallable(const DescribeBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBackupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeBusinessIntelligenceFileOutcome SqlserverClient::DescribeBusinessIntelligenceFile(const DescribeBusinessIntelligenceFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBusinessIntelligenceFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBusinessIntelligenceFileResponse rsp = DescribeBusinessIntelligenceFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBusinessIntelligenceFileOutcome(rsp);
        else
            return DescribeBusinessIntelligenceFileOutcome(o.GetError());
    }
    else
    {
        return DescribeBusinessIntelligenceFileOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeBusinessIntelligenceFileAsync(const DescribeBusinessIntelligenceFileRequest& request, const DescribeBusinessIntelligenceFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBusinessIntelligenceFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeBusinessIntelligenceFileOutcomeCallable SqlserverClient::DescribeBusinessIntelligenceFileCallable(const DescribeBusinessIntelligenceFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBusinessIntelligenceFileOutcome()>>(
        [this, request]()
        {
            return this->DescribeBusinessIntelligenceFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeCollationTimeZoneOutcome SqlserverClient::DescribeCollationTimeZone(const DescribeCollationTimeZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCollationTimeZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCollationTimeZoneResponse rsp = DescribeCollationTimeZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCollationTimeZoneOutcome(rsp);
        else
            return DescribeCollationTimeZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCollationTimeZoneOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCollationTimeZoneAsync(const DescribeCollationTimeZoneRequest& request, const DescribeCollationTimeZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCollationTimeZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeCollationTimeZoneOutcomeCallable SqlserverClient::DescribeCollationTimeZoneCallable(const DescribeCollationTimeZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCollationTimeZoneOutcome()>>(
        [this, request]()
        {
            return this->DescribeCollationTimeZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeCrossBackupStatisticalOutcome SqlserverClient::DescribeCrossBackupStatistical(const DescribeCrossBackupStatisticalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBackupStatistical");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBackupStatisticalResponse rsp = DescribeCrossBackupStatisticalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBackupStatisticalOutcome(rsp);
        else
            return DescribeCrossBackupStatisticalOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBackupStatisticalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossBackupStatisticalAsync(const DescribeCrossBackupStatisticalRequest& request, const DescribeCrossBackupStatisticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossBackupStatistical(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeCrossBackupStatisticalOutcomeCallable SqlserverClient::DescribeCrossBackupStatisticalCallable(const DescribeCrossBackupStatisticalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossBackupStatisticalOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossBackupStatistical(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeCrossRegionZoneOutcome SqlserverClient::DescribeCrossRegionZone(const DescribeCrossRegionZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossRegionZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossRegionZoneResponse rsp = DescribeCrossRegionZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossRegionZoneOutcome(rsp);
        else
            return DescribeCrossRegionZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossRegionZoneOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossRegionZoneAsync(const DescribeCrossRegionZoneRequest& request, const DescribeCrossRegionZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossRegionZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeCrossRegionZoneOutcomeCallable SqlserverClient::DescribeCrossRegionZoneCallable(const DescribeCrossRegionZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossRegionZoneOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossRegionZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeCrossRegionsOutcome SqlserverClient::DescribeCrossRegions(const DescribeCrossRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossRegionsResponse rsp = DescribeCrossRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossRegionsOutcome(rsp);
        else
            return DescribeCrossRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossRegionsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeCrossRegionsAsync(const DescribeCrossRegionsRequest& request, const DescribeCrossRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeCrossRegionsOutcomeCallable SqlserverClient::DescribeCrossRegionsCallable(const DescribeCrossRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBCharsetsOutcome SqlserverClient::DescribeDBCharsets(const DescribeDBCharsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCharsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCharsetsResponse rsp = DescribeDBCharsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCharsetsOutcome(rsp);
        else
            return DescribeDBCharsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCharsetsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBCharsetsAsync(const DescribeDBCharsetsRequest& request, const DescribeDBCharsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBCharsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBCharsetsOutcomeCallable SqlserverClient::DescribeDBCharsetsCallable(const DescribeDBCharsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBCharsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBCharsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBInstanceInterOutcome SqlserverClient::DescribeDBInstanceInter(const DescribeDBInstanceInterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceInter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceInterResponse rsp = DescribeDBInstanceInterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceInterOutcome(rsp);
        else
            return DescribeDBInstanceInterOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceInterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBInstanceInterAsync(const DescribeDBInstanceInterRequest& request, const DescribeDBInstanceInterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstanceInter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBInstanceInterOutcomeCallable SqlserverClient::DescribeDBInstanceInterCallable(const DescribeDBInstanceInterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstanceInterOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstanceInter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBInstancesOutcome SqlserverClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
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

void SqlserverClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBInstancesOutcomeCallable SqlserverClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
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

SqlserverClient::DescribeDBInstancesAttributeOutcome SqlserverClient::DescribeDBInstancesAttribute(const DescribeDBInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesAttributeResponse rsp = DescribeDBInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesAttributeOutcome(rsp);
        else
            return DescribeDBInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesAttributeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBInstancesAttributeAsync(const DescribeDBInstancesAttributeRequest& request, const DescribeDBInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBInstancesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBInstancesAttributeOutcomeCallable SqlserverClient::DescribeDBInstancesAttributeCallable(const DescribeDBInstancesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBInstancesAttributeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBInstancesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBPrivilegeByAccountOutcome SqlserverClient::DescribeDBPrivilegeByAccount(const DescribeDBPrivilegeByAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBPrivilegeByAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBPrivilegeByAccountResponse rsp = DescribeDBPrivilegeByAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBPrivilegeByAccountOutcome(rsp);
        else
            return DescribeDBPrivilegeByAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeDBPrivilegeByAccountOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBPrivilegeByAccountAsync(const DescribeDBPrivilegeByAccountRequest& request, const DescribeDBPrivilegeByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBPrivilegeByAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBPrivilegeByAccountOutcomeCallable SqlserverClient::DescribeDBPrivilegeByAccountCallable(const DescribeDBPrivilegeByAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBPrivilegeByAccountOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBPrivilegeByAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBRestoreTimeOutcome SqlserverClient::DescribeDBRestoreTime(const DescribeDBRestoreTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBRestoreTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBRestoreTimeResponse rsp = DescribeDBRestoreTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBRestoreTimeOutcome(rsp);
        else
            return DescribeDBRestoreTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeDBRestoreTimeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBRestoreTimeAsync(const DescribeDBRestoreTimeRequest& request, const DescribeDBRestoreTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBRestoreTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBRestoreTimeOutcomeCallable SqlserverClient::DescribeDBRestoreTimeCallable(const DescribeDBRestoreTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBRestoreTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBRestoreTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBSecurityGroupsOutcome SqlserverClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBSecurityGroupsResponse rsp = DescribeDBSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBSecurityGroupsOutcome(rsp);
        else
            return DescribeDBSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBSecurityGroupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBSecurityGroupsOutcomeCallable SqlserverClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBsOutcome SqlserverClient::DescribeDBs(const DescribeDBsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBsResponse rsp = DescribeDBsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBsOutcome(rsp);
        else
            return DescribeDBsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBsAsync(const DescribeDBsRequest& request, const DescribeDBsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBsOutcomeCallable SqlserverClient::DescribeDBsCallable(const DescribeDBsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDBsNormalOutcome SqlserverClient::DescribeDBsNormal(const DescribeDBsNormalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBsNormal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBsNormalResponse rsp = DescribeDBsNormalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBsNormalOutcome(rsp);
        else
            return DescribeDBsNormalOutcome(o.GetError());
    }
    else
    {
        return DescribeDBsNormalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDBsNormalAsync(const DescribeDBsNormalRequest& request, const DescribeDBsNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDBsNormal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDBsNormalOutcomeCallable SqlserverClient::DescribeDBsNormalCallable(const DescribeDBsNormalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDBsNormalOutcome()>>(
        [this, request]()
        {
            return this->DescribeDBsNormal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDatabaseNamesOutcome SqlserverClient::DescribeDatabaseNames(const DescribeDatabaseNamesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseNamesResponse rsp = DescribeDatabaseNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseNamesOutcome(rsp);
        else
            return DescribeDatabaseNamesOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseNamesOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDatabaseNamesAsync(const DescribeDatabaseNamesRequest& request, const DescribeDatabaseNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabaseNames(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDatabaseNamesOutcomeCallable SqlserverClient::DescribeDatabaseNamesCallable(const DescribeDatabaseNamesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabaseNamesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabaseNames(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeDatabasesOutcome SqlserverClient::DescribeDatabases(const DescribeDatabasesRequest &request)
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

void SqlserverClient::DescribeDatabasesAsync(const DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDatabasesOutcomeCallable SqlserverClient::DescribeDatabasesCallable(const DescribeDatabasesRequest &request)
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

SqlserverClient::DescribeDatabasesNormalOutcome SqlserverClient::DescribeDatabasesNormal(const DescribeDatabasesNormalRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabasesNormal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabasesNormalResponse rsp = DescribeDatabasesNormalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabasesNormalOutcome(rsp);
        else
            return DescribeDatabasesNormalOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabasesNormalOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeDatabasesNormalAsync(const DescribeDatabasesNormalRequest& request, const DescribeDatabasesNormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatabasesNormal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeDatabasesNormalOutcomeCallable SqlserverClient::DescribeDatabasesNormalCallable(const DescribeDatabasesNormalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatabasesNormalOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatabasesNormal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeFlowStatusOutcome SqlserverClient::DescribeFlowStatus(const DescribeFlowStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowStatusResponse rsp = DescribeFlowStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowStatusOutcome(rsp);
        else
            return DescribeFlowStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowStatusOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeFlowStatusAsync(const DescribeFlowStatusRequest& request, const DescribeFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeFlowStatusOutcomeCallable SqlserverClient::DescribeFlowStatusCallable(const DescribeFlowStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeHASwitchLogOutcome SqlserverClient::DescribeHASwitchLog(const DescribeHASwitchLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHASwitchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHASwitchLogResponse rsp = DescribeHASwitchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHASwitchLogOutcome(rsp);
        else
            return DescribeHASwitchLogOutcome(o.GetError());
    }
    else
    {
        return DescribeHASwitchLogOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeHASwitchLogAsync(const DescribeHASwitchLogRequest& request, const DescribeHASwitchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHASwitchLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeHASwitchLogOutcomeCallable SqlserverClient::DescribeHASwitchLogCallable(const DescribeHASwitchLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHASwitchLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeHASwitchLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeIncrementalMigrationOutcome SqlserverClient::DescribeIncrementalMigration(const DescribeIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementalMigrationResponse rsp = DescribeIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementalMigrationOutcome(rsp);
        else
            return DescribeIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeIncrementalMigrationAsync(const DescribeIncrementalMigrationRequest& request, const DescribeIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIncrementalMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeIncrementalMigrationOutcomeCallable SqlserverClient::DescribeIncrementalMigrationCallable(const DescribeIncrementalMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIncrementalMigrationOutcome()>>(
        [this, request]()
        {
            return this->DescribeIncrementalMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInquiryPriceParameterOutcome SqlserverClient::DescribeInquiryPriceParameter(const DescribeInquiryPriceParameterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInquiryPriceParameter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInquiryPriceParameterResponse rsp = DescribeInquiryPriceParameterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInquiryPriceParameterOutcome(rsp);
        else
            return DescribeInquiryPriceParameterOutcome(o.GetError());
    }
    else
    {
        return DescribeInquiryPriceParameterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInquiryPriceParameterAsync(const DescribeInquiryPriceParameterRequest& request, const DescribeInquiryPriceParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInquiryPriceParameter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInquiryPriceParameterOutcomeCallable SqlserverClient::DescribeInquiryPriceParameterCallable(const DescribeInquiryPriceParameterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInquiryPriceParameterOutcome()>>(
        [this, request]()
        {
            return this->DescribeInquiryPriceParameter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInstanceByOrdersOutcome SqlserverClient::DescribeInstanceByOrders(const DescribeInstanceByOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceByOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceByOrdersResponse rsp = DescribeInstanceByOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceByOrdersOutcome(rsp);
        else
            return DescribeInstanceByOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceByOrdersOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceByOrdersAsync(const DescribeInstanceByOrdersRequest& request, const DescribeInstanceByOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceByOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInstanceByOrdersOutcomeCallable SqlserverClient::DescribeInstanceByOrdersCallable(const DescribeInstanceByOrdersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceByOrdersOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceByOrders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInstanceParamRecordsOutcome SqlserverClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParamRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamRecordsResponse rsp = DescribeInstanceParamRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamRecordsOutcome(rsp);
        else
            return DescribeInstanceParamRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamRecordsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParamRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInstanceParamRecordsOutcomeCallable SqlserverClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParamRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInstanceParamsOutcome SqlserverClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceParams(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInstanceParamsOutcomeCallable SqlserverClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceParamsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceParams(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInstanceTasksOutcome SqlserverClient::DescribeInstanceTasks(const DescribeInstanceTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTasksResponse rsp = DescribeInstanceTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTasksOutcome(rsp);
        else
            return DescribeInstanceTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTasksOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceTasksAsync(const DescribeInstanceTasksRequest& request, const DescribeInstanceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInstanceTasksOutcomeCallable SqlserverClient::DescribeInstanceTasksCallable(const DescribeInstanceTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeInstanceTradeParameterOutcome SqlserverClient::DescribeInstanceTradeParameter(const DescribeInstanceTradeParameterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTradeParameter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTradeParameterResponse rsp = DescribeInstanceTradeParameterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTradeParameterOutcome(rsp);
        else
            return DescribeInstanceTradeParameterOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTradeParameterOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeInstanceTradeParameterAsync(const DescribeInstanceTradeParameterRequest& request, const DescribeInstanceTradeParameterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTradeParameter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeInstanceTradeParameterOutcomeCallable SqlserverClient::DescribeInstanceTradeParameterCallable(const DescribeInstanceTradeParameterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTradeParameterOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTradeParameter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMaintenanceSpanOutcome SqlserverClient::DescribeMaintenanceSpan(const DescribeMaintenanceSpanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceSpan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceSpanResponse rsp = DescribeMaintenanceSpanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceSpanOutcome(rsp);
        else
            return DescribeMaintenanceSpanOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceSpanOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMaintenanceSpanAsync(const DescribeMaintenanceSpanRequest& request, const DescribeMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMaintenanceSpan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMaintenanceSpanOutcomeCallable SqlserverClient::DescribeMaintenanceSpanCallable(const DescribeMaintenanceSpanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMaintenanceSpanOutcome()>>(
        [this, request]()
        {
            return this->DescribeMaintenanceSpan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMigrationDatabasesOutcome SqlserverClient::DescribeMigrationDatabases(const DescribeMigrationDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDatabasesResponse rsp = DescribeMigrationDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDatabasesOutcome(rsp);
        else
            return DescribeMigrationDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDatabasesOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationDatabasesAsync(const DescribeMigrationDatabasesRequest& request, const DescribeMigrationDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationDatabases(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMigrationDatabasesOutcomeCallable SqlserverClient::DescribeMigrationDatabasesCallable(const DescribeMigrationDatabasesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationDatabasesOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationDatabases(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMigrationDetailOutcome SqlserverClient::DescribeMigrationDetail(const DescribeMigrationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationDetailResponse rsp = DescribeMigrationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationDetailOutcome(rsp);
        else
            return DescribeMigrationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationDetailOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationDetailAsync(const DescribeMigrationDetailRequest& request, const DescribeMigrationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMigrationDetailOutcomeCallable SqlserverClient::DescribeMigrationDetailCallable(const DescribeMigrationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeMigrationsOutcome SqlserverClient::DescribeMigrations(const DescribeMigrationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrationsResponse rsp = DescribeMigrationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrationsOutcome(rsp);
        else
            return DescribeMigrationsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrationsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeMigrationsAsync(const DescribeMigrationsRequest& request, const DescribeMigrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMigrations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeMigrationsOutcomeCallable SqlserverClient::DescribeMigrationsCallable(const DescribeMigrationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMigrationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMigrations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeOrdersOutcome SqlserverClient::DescribeOrders(const DescribeOrdersRequest &request)
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

void SqlserverClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeOrdersOutcomeCallable SqlserverClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
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

SqlserverClient::DescribeProductConfigOutcome SqlserverClient::DescribeProductConfig(const DescribeProductConfigRequest &request)
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

void SqlserverClient::DescribeProductConfigAsync(const DescribeProductConfigRequest& request, const DescribeProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeProductConfigOutcomeCallable SqlserverClient::DescribeProductConfigCallable(const DescribeProductConfigRequest &request)
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

SqlserverClient::DescribeProductSpecOutcome SqlserverClient::DescribeProductSpec(const DescribeProductSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductSpecResponse rsp = DescribeProductSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductSpecOutcome(rsp);
        else
            return DescribeProductSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeProductSpecOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeProductSpecAsync(const DescribeProductSpecRequest& request, const DescribeProductSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductSpec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeProductSpecOutcomeCallable SqlserverClient::DescribeProductSpecCallable(const DescribeProductSpecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductSpecOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductSpec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeProjectSecurityGroupsOutcome SqlserverClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupsResponse rsp = DescribeProjectSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupsOutcome(rsp);
        else
            return DescribeProjectSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProjectSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeProjectSecurityGroupsOutcomeCallable SqlserverClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProjectSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProjectSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribePublishSubscribeOutcome SqlserverClient::DescribePublishSubscribe(const DescribePublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublishSubscribeResponse rsp = DescribePublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublishSubscribeOutcome(rsp);
        else
            return DescribePublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return DescribePublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribePublishSubscribeAsync(const DescribePublishSubscribeRequest& request, const DescribePublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublishSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribePublishSubscribeOutcomeCallable SqlserverClient::DescribePublishSubscribeCallable(const DescribePublishSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublishSubscribeOutcome()>>(
        [this, request]()
        {
            return this->DescribePublishSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeReadOnlyGroupAutoWeightOutcome SqlserverClient::DescribeReadOnlyGroupAutoWeight(const DescribeReadOnlyGroupAutoWeightRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupAutoWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupAutoWeightResponse rsp = DescribeReadOnlyGroupAutoWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupAutoWeightOutcome(rsp);
        else
            return DescribeReadOnlyGroupAutoWeightOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupAutoWeightOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupAutoWeightAsync(const DescribeReadOnlyGroupAutoWeightRequest& request, const DescribeReadOnlyGroupAutoWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReadOnlyGroupAutoWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeReadOnlyGroupAutoWeightOutcomeCallable SqlserverClient::DescribeReadOnlyGroupAutoWeightCallable(const DescribeReadOnlyGroupAutoWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReadOnlyGroupAutoWeightOutcome()>>(
        [this, request]()
        {
            return this->DescribeReadOnlyGroupAutoWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceOutcome SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstance(const DescribeReadOnlyGroupByReadOnlyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupByReadOnlyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupByReadOnlyInstanceResponse rsp = DescribeReadOnlyGroupByReadOnlyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(rsp);
        else
            return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupByReadOnlyInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceAsync(const DescribeReadOnlyGroupByReadOnlyInstanceRequest& request, const DescribeReadOnlyGroupByReadOnlyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReadOnlyGroupByReadOnlyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceOutcomeCallable SqlserverClient::DescribeReadOnlyGroupByReadOnlyInstanceCallable(const DescribeReadOnlyGroupByReadOnlyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReadOnlyGroupByReadOnlyInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeReadOnlyGroupByReadOnlyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeReadOnlyGroupDetailsOutcome SqlserverClient::DescribeReadOnlyGroupDetails(const DescribeReadOnlyGroupDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupDetailsResponse rsp = DescribeReadOnlyGroupDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupDetailsOutcome(rsp);
        else
            return DescribeReadOnlyGroupDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupDetailsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupDetailsAsync(const DescribeReadOnlyGroupDetailsRequest& request, const DescribeReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReadOnlyGroupDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeReadOnlyGroupDetailsOutcomeCallable SqlserverClient::DescribeReadOnlyGroupDetailsCallable(const DescribeReadOnlyGroupDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReadOnlyGroupDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReadOnlyGroupDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeReadOnlyGroupListOutcome SqlserverClient::DescribeReadOnlyGroupList(const DescribeReadOnlyGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReadOnlyGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReadOnlyGroupListResponse rsp = DescribeReadOnlyGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReadOnlyGroupListOutcome(rsp);
        else
            return DescribeReadOnlyGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeReadOnlyGroupListOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeReadOnlyGroupListAsync(const DescribeReadOnlyGroupListRequest& request, const DescribeReadOnlyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReadOnlyGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeReadOnlyGroupListOutcomeCallable SqlserverClient::DescribeReadOnlyGroupListCallable(const DescribeReadOnlyGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReadOnlyGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeReadOnlyGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRegionsOutcome SqlserverClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void SqlserverClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRegionsOutcomeCallable SqlserverClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
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

SqlserverClient::DescribeRegularBackupPlanOutcome SqlserverClient::DescribeRegularBackupPlan(const DescribeRegularBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegularBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegularBackupPlanResponse rsp = DescribeRegularBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegularBackupPlanOutcome(rsp);
        else
            return DescribeRegularBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DescribeRegularBackupPlanOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRegularBackupPlanAsync(const DescribeRegularBackupPlanRequest& request, const DescribeRegularBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegularBackupPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRegularBackupPlanOutcomeCallable SqlserverClient::DescribeRegularBackupPlanCallable(const DescribeRegularBackupPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegularBackupPlanOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegularBackupPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRestoreTaskOutcome SqlserverClient::DescribeRestoreTask(const DescribeRestoreTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTaskResponse rsp = DescribeRestoreTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTaskOutcome(rsp);
        else
            return DescribeRestoreTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTaskOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRestoreTaskAsync(const DescribeRestoreTaskRequest& request, const DescribeRestoreTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRestoreTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRestoreTaskOutcomeCallable SqlserverClient::DescribeRestoreTaskCallable(const DescribeRestoreTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRestoreTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRestoreTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRestoreTimeRangeOutcome SqlserverClient::DescribeRestoreTimeRange(const DescribeRestoreTimeRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTimeRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTimeRangeResponse rsp = DescribeRestoreTimeRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTimeRangeOutcome(rsp);
        else
            return DescribeRestoreTimeRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTimeRangeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRestoreTimeRangeAsync(const DescribeRestoreTimeRangeRequest& request, const DescribeRestoreTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRestoreTimeRange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRestoreTimeRangeOutcomeCallable SqlserverClient::DescribeRestoreTimeRangeCallable(const DescribeRestoreTimeRangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRestoreTimeRangeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRestoreTimeRange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeRollbackTimeOutcome SqlserverClient::DescribeRollbackTime(const DescribeRollbackTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRollbackTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRollbackTimeResponse rsp = DescribeRollbackTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRollbackTimeOutcome(rsp);
        else
            return DescribeRollbackTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeRollbackTimeOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeRollbackTimeAsync(const DescribeRollbackTimeRequest& request, const DescribeRollbackTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRollbackTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeRollbackTimeOutcomeCallable SqlserverClient::DescribeRollbackTimeCallable(const DescribeRollbackTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRollbackTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRollbackTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeSlowlogsOutcome SqlserverClient::DescribeSlowlogs(const DescribeSlowlogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowlogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowlogsResponse rsp = DescribeSlowlogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowlogsOutcome(rsp);
        else
            return DescribeSlowlogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowlogsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeSlowlogsAsync(const DescribeSlowlogsRequest& request, const DescribeSlowlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSlowlogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeSlowlogsOutcomeCallable SqlserverClient::DescribeSlowlogsCallable(const DescribeSlowlogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSlowlogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSlowlogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeSpecSellStatusOutcome SqlserverClient::DescribeSpecSellStatus(const DescribeSpecSellStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecSellStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecSellStatusResponse rsp = DescribeSpecSellStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecSellStatusOutcome(rsp);
        else
            return DescribeSpecSellStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecSellStatusOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeSpecSellStatusAsync(const DescribeSpecSellStatusRequest& request, const DescribeSpecSellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpecSellStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeSpecSellStatusOutcomeCallable SqlserverClient::DescribeSpecSellStatusCallable(const DescribeSpecSellStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpecSellStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpecSellStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeUpgradeInstanceCheckOutcome SqlserverClient::DescribeUpgradeInstanceCheck(const DescribeUpgradeInstanceCheckRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpgradeInstanceCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpgradeInstanceCheckResponse rsp = DescribeUpgradeInstanceCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpgradeInstanceCheckOutcome(rsp);
        else
            return DescribeUpgradeInstanceCheckOutcome(o.GetError());
    }
    else
    {
        return DescribeUpgradeInstanceCheckOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUpgradeInstanceCheckAsync(const DescribeUpgradeInstanceCheckRequest& request, const DescribeUpgradeInstanceCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpgradeInstanceCheck(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeUpgradeInstanceCheckOutcomeCallable SqlserverClient::DescribeUpgradeInstanceCheckCallable(const DescribeUpgradeInstanceCheckRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpgradeInstanceCheckOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpgradeInstanceCheck(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeUploadBackupInfoOutcome SqlserverClient::DescribeUploadBackupInfo(const DescribeUploadBackupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadBackupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadBackupInfoResponse rsp = DescribeUploadBackupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadBackupInfoOutcome(rsp);
        else
            return DescribeUploadBackupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadBackupInfoOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUploadBackupInfoAsync(const DescribeUploadBackupInfoRequest& request, const DescribeUploadBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadBackupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeUploadBackupInfoOutcomeCallable SqlserverClient::DescribeUploadBackupInfoCallable(const DescribeUploadBackupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadBackupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadBackupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeUploadIncrementalInfoOutcome SqlserverClient::DescribeUploadIncrementalInfo(const DescribeUploadIncrementalInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadIncrementalInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadIncrementalInfoResponse rsp = DescribeUploadIncrementalInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadIncrementalInfoOutcome(rsp);
        else
            return DescribeUploadIncrementalInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadIncrementalInfoOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeUploadIncrementalInfoAsync(const DescribeUploadIncrementalInfoRequest& request, const DescribeUploadIncrementalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUploadIncrementalInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeUploadIncrementalInfoOutcomeCallable SqlserverClient::DescribeUploadIncrementalInfoCallable(const DescribeUploadIncrementalInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUploadIncrementalInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUploadIncrementalInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeXEventsOutcome SqlserverClient::DescribeXEvents(const DescribeXEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeXEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeXEventsResponse rsp = DescribeXEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeXEventsOutcome(rsp);
        else
            return DescribeXEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeXEventsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DescribeXEventsAsync(const DescribeXEventsRequest& request, const DescribeXEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeXEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeXEventsOutcomeCallable SqlserverClient::DescribeXEventsCallable(const DescribeXEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeXEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeXEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::DescribeZonesOutcome SqlserverClient::DescribeZones(const DescribeZonesRequest &request)
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

void SqlserverClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DescribeZonesOutcomeCallable SqlserverClient::DescribeZonesCallable(const DescribeZonesRequest &request)
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

SqlserverClient::DisassociateSecurityGroupsOutcome SqlserverClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupsResponse rsp = DisassociateSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupsOutcome(rsp);
        else
            return DisassociateSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::DisassociateSecurityGroupsOutcomeCallable SqlserverClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::InquiryPriceCreateDBInstancesOutcome SqlserverClient::InquiryPriceCreateDBInstances(const InquiryPriceCreateDBInstancesRequest &request)
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

void SqlserverClient::InquiryPriceCreateDBInstancesAsync(const InquiryPriceCreateDBInstancesRequest& request, const InquiryPriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateDBInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceCreateDBInstancesOutcomeCallable SqlserverClient::InquiryPriceCreateDBInstancesCallable(const InquiryPriceCreateDBInstancesRequest &request)
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

SqlserverClient::InquiryPriceRenewDBInstanceOutcome SqlserverClient::InquiryPriceRenewDBInstance(const InquiryPriceRenewDBInstanceRequest &request)
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

void SqlserverClient::InquiryPriceRenewDBInstanceAsync(const InquiryPriceRenewDBInstanceRequest& request, const InquiryPriceRenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceRenewDBInstanceOutcomeCallable SqlserverClient::InquiryPriceRenewDBInstanceCallable(const InquiryPriceRenewDBInstanceRequest &request)
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

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcome SqlserverClient::InquiryPriceUpgradeDBInstance(const InquiryPriceUpgradeDBInstanceRequest &request)
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

void SqlserverClient::InquiryPriceUpgradeDBInstanceAsync(const InquiryPriceUpgradeDBInstanceRequest& request, const InquiryPriceUpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceUpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::InquiryPriceUpgradeDBInstanceOutcomeCallable SqlserverClient::InquiryPriceUpgradeDBInstanceCallable(const InquiryPriceUpgradeDBInstanceRequest &request)
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

SqlserverClient::ModifyAccountPrivilegeOutcome SqlserverClient::ModifyAccountPrivilege(const ModifyAccountPrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccountPrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccountPrivilegeResponse rsp = ModifyAccountPrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccountPrivilegeOutcome(rsp);
        else
            return ModifyAccountPrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyAccountPrivilegeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyAccountPrivilegeAsync(const ModifyAccountPrivilegeRequest& request, const ModifyAccountPrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountPrivilege(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyAccountPrivilegeOutcomeCallable SqlserverClient::ModifyAccountPrivilegeCallable(const ModifyAccountPrivilegeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccountPrivilegeOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccountPrivilege(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyAccountRemarkOutcome SqlserverClient::ModifyAccountRemark(const ModifyAccountRemarkRequest &request)
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

void SqlserverClient::ModifyAccountRemarkAsync(const ModifyAccountRemarkRequest& request, const ModifyAccountRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccountRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyAccountRemarkOutcomeCallable SqlserverClient::ModifyAccountRemarkCallable(const ModifyAccountRemarkRequest &request)
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

SqlserverClient::ModifyBackupMigrationOutcome SqlserverClient::ModifyBackupMigration(const ModifyBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupMigrationResponse rsp = ModifyBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupMigrationOutcome(rsp);
        else
            return ModifyBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupMigrationAsync(const ModifyBackupMigrationRequest& request, const ModifyBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyBackupMigrationOutcomeCallable SqlserverClient::ModifyBackupMigrationCallable(const ModifyBackupMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupMigrationOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyBackupNameOutcome SqlserverClient::ModifyBackupName(const ModifyBackupNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupNameResponse rsp = ModifyBackupNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupNameOutcome(rsp);
        else
            return ModifyBackupNameOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupNameAsync(const ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyBackupNameOutcomeCallable SqlserverClient::ModifyBackupNameCallable(const ModifyBackupNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyBackupStrategyOutcome SqlserverClient::ModifyBackupStrategy(const ModifyBackupStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupStrategyResponse rsp = ModifyBackupStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupStrategyOutcome(rsp);
        else
            return ModifyBackupStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupStrategyOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyBackupStrategyAsync(const ModifyBackupStrategyRequest& request, const ModifyBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBackupStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyBackupStrategyOutcomeCallable SqlserverClient::ModifyBackupStrategyCallable(const ModifyBackupStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBackupStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyBackupStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyCloseWanIpOutcome SqlserverClient::ModifyCloseWanIp(const ModifyCloseWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloseWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloseWanIpResponse rsp = ModifyCloseWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloseWanIpOutcome(rsp);
        else
            return ModifyCloseWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyCloseWanIpOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyCloseWanIpAsync(const ModifyCloseWanIpRequest& request, const ModifyCloseWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloseWanIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyCloseWanIpOutcomeCallable SqlserverClient::ModifyCloseWanIpCallable(const ModifyCloseWanIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloseWanIpOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloseWanIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyCrossBackupStrategyOutcome SqlserverClient::ModifyCrossBackupStrategy(const ModifyCrossBackupStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCrossBackupStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCrossBackupStrategyResponse rsp = ModifyCrossBackupStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCrossBackupStrategyOutcome(rsp);
        else
            return ModifyCrossBackupStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyCrossBackupStrategyOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyCrossBackupStrategyAsync(const ModifyCrossBackupStrategyRequest& request, const ModifyCrossBackupStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCrossBackupStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyCrossBackupStrategyOutcomeCallable SqlserverClient::ModifyCrossBackupStrategyCallable(const ModifyCrossBackupStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCrossBackupStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCrossBackupStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBEncryptAttributesOutcome SqlserverClient::ModifyDBEncryptAttributes(const ModifyDBEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBEncryptAttributesResponse rsp = ModifyDBEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBEncryptAttributesOutcome(rsp);
        else
            return ModifyDBEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDBEncryptAttributesOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBEncryptAttributesAsync(const ModifyDBEncryptAttributesRequest& request, const ModifyDBEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBEncryptAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBEncryptAttributesOutcomeCallable SqlserverClient::ModifyDBEncryptAttributesCallable(const ModifyDBEncryptAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBEncryptAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBEncryptAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceNameOutcome SqlserverClient::ModifyDBInstanceName(const ModifyDBInstanceNameRequest &request)
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

void SqlserverClient::ModifyDBInstanceNameAsync(const ModifyDBInstanceNameRequest& request, const ModifyDBInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceNameOutcomeCallable SqlserverClient::ModifyDBInstanceNameCallable(const ModifyDBInstanceNameRequest &request)
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

SqlserverClient::ModifyDBInstanceNetworkOutcome SqlserverClient::ModifyDBInstanceNetwork(const ModifyDBInstanceNetworkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceNetwork");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNetworkResponse rsp = ModifyDBInstanceNetworkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNetworkOutcome(rsp);
        else
            return ModifyDBInstanceNetworkOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNetworkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceNetworkAsync(const ModifyDBInstanceNetworkRequest& request, const ModifyDBInstanceNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceNetwork(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceNetworkOutcomeCallable SqlserverClient::ModifyDBInstanceNetworkCallable(const ModifyDBInstanceNetworkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNetworkOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceNetwork(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceNoteOutcome SqlserverClient::ModifyDBInstanceNote(const ModifyDBInstanceNoteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceNote");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNoteResponse rsp = ModifyDBInstanceNoteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNoteOutcome(rsp);
        else
            return ModifyDBInstanceNoteOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNoteOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceNoteAsync(const ModifyDBInstanceNoteRequest& request, const ModifyDBInstanceNoteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceNote(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceNoteOutcomeCallable SqlserverClient::ModifyDBInstanceNoteCallable(const ModifyDBInstanceNoteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceNoteOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceNote(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceProjectOutcome SqlserverClient::ModifyDBInstanceProject(const ModifyDBInstanceProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceProjectResponse rsp = ModifyDBInstanceProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceProjectOutcome(rsp);
        else
            return ModifyDBInstanceProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceProjectOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceProjectAsync(const ModifyDBInstanceProjectRequest& request, const ModifyDBInstanceProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceProjectOutcomeCallable SqlserverClient::ModifyDBInstanceProjectCallable(const ModifyDBInstanceProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceRenewFlagOutcome SqlserverClient::ModifyDBInstanceRenewFlag(const ModifyDBInstanceRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceRenewFlagResponse rsp = ModifyDBInstanceRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceRenewFlagOutcome(rsp);
        else
            return ModifyDBInstanceRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceRenewFlagOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceRenewFlagAsync(const ModifyDBInstanceRenewFlagRequest& request, const ModifyDBInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceRenewFlagOutcomeCallable SqlserverClient::ModifyDBInstanceRenewFlagCallable(const ModifyDBInstanceRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceSSLOutcome SqlserverClient::ModifyDBInstanceSSL(const ModifyDBInstanceSSLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSSLResponse rsp = ModifyDBInstanceSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSSLOutcome(rsp);
        else
            return ModifyDBInstanceSSLOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSSLOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBInstanceSSLAsync(const ModifyDBInstanceSSLRequest& request, const ModifyDBInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSSL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceSSLOutcomeCallable SqlserverClient::ModifyDBInstanceSSLCallable(const ModifyDBInstanceSSLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBInstanceSSLOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBInstanceSSL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBInstanceSecurityGroupsOutcome SqlserverClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void SqlserverClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBInstanceSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBInstanceSecurityGroupsOutcomeCallable SqlserverClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
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

SqlserverClient::ModifyDBNameOutcome SqlserverClient::ModifyDBName(const ModifyDBNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBNameResponse rsp = ModifyDBNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBNameOutcome(rsp);
        else
            return ModifyDBNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDBNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBNameAsync(const ModifyDBNameRequest& request, const ModifyDBNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBNameOutcomeCallable SqlserverClient::ModifyDBNameCallable(const ModifyDBNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDBRemarkOutcome SqlserverClient::ModifyDBRemark(const ModifyDBRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBRemarkResponse rsp = ModifyDBRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBRemarkOutcome(rsp);
        else
            return ModifyDBRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDBRemarkOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDBRemarkAsync(const ModifyDBRemarkRequest& request, const ModifyDBRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDBRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDBRemarkOutcomeCallable SqlserverClient::ModifyDBRemarkCallable(const ModifyDBRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDBRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyDBRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDReadableOutcome SqlserverClient::ModifyDReadable(const ModifyDReadableRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDReadable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDReadableResponse rsp = ModifyDReadableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDReadableOutcome(rsp);
        else
            return ModifyDReadableOutcome(o.GetError());
    }
    else
    {
        return ModifyDReadableOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDReadableAsync(const ModifyDReadableRequest& request, const ModifyDReadableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDReadable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDReadableOutcomeCallable SqlserverClient::ModifyDReadableCallable(const ModifyDReadableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDReadableOutcome()>>(
        [this, request]()
        {
            return this->ModifyDReadable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDatabaseCDCOutcome SqlserverClient::ModifyDatabaseCDC(const ModifyDatabaseCDCRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseCDC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseCDCResponse rsp = ModifyDatabaseCDCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseCDCOutcome(rsp);
        else
            return ModifyDatabaseCDCOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseCDCOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseCDCAsync(const ModifyDatabaseCDCRequest& request, const ModifyDatabaseCDCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseCDC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDatabaseCDCOutcomeCallable SqlserverClient::ModifyDatabaseCDCCallable(const ModifyDatabaseCDCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseCDCOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseCDC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDatabaseCTOutcome SqlserverClient::ModifyDatabaseCT(const ModifyDatabaseCTRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseCT");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseCTResponse rsp = ModifyDatabaseCTResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseCTOutcome(rsp);
        else
            return ModifyDatabaseCTOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseCTOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseCTAsync(const ModifyDatabaseCTRequest& request, const ModifyDatabaseCTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseCT(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDatabaseCTOutcomeCallable SqlserverClient::ModifyDatabaseCTCallable(const ModifyDatabaseCTRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseCTOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseCT(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDatabaseMdfOutcome SqlserverClient::ModifyDatabaseMdf(const ModifyDatabaseMdfRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseMdf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseMdfResponse rsp = ModifyDatabaseMdfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseMdfOutcome(rsp);
        else
            return ModifyDatabaseMdfOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseMdfOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseMdfAsync(const ModifyDatabaseMdfRequest& request, const ModifyDatabaseMdfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseMdf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDatabaseMdfOutcomeCallable SqlserverClient::ModifyDatabaseMdfCallable(const ModifyDatabaseMdfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseMdfOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseMdf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDatabasePrivilegeOutcome SqlserverClient::ModifyDatabasePrivilege(const ModifyDatabasePrivilegeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabasePrivilege");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabasePrivilegeResponse rsp = ModifyDatabasePrivilegeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabasePrivilegeOutcome(rsp);
        else
            return ModifyDatabasePrivilegeOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabasePrivilegeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabasePrivilegeAsync(const ModifyDatabasePrivilegeRequest& request, const ModifyDatabasePrivilegeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabasePrivilege(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDatabasePrivilegeOutcomeCallable SqlserverClient::ModifyDatabasePrivilegeCallable(const ModifyDatabasePrivilegeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabasePrivilegeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabasePrivilege(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyDatabaseShrinkMDFOutcome SqlserverClient::ModifyDatabaseShrinkMDF(const ModifyDatabaseShrinkMDFRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatabaseShrinkMDF");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatabaseShrinkMDFResponse rsp = ModifyDatabaseShrinkMDFResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatabaseShrinkMDFOutcome(rsp);
        else
            return ModifyDatabaseShrinkMDFOutcome(o.GetError());
    }
    else
    {
        return ModifyDatabaseShrinkMDFOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyDatabaseShrinkMDFAsync(const ModifyDatabaseShrinkMDFRequest& request, const ModifyDatabaseShrinkMDFAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatabaseShrinkMDF(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyDatabaseShrinkMDFOutcomeCallable SqlserverClient::ModifyDatabaseShrinkMDFCallable(const ModifyDatabaseShrinkMDFRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatabaseShrinkMDFOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatabaseShrinkMDF(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyIncrementalMigrationOutcome SqlserverClient::ModifyIncrementalMigration(const ModifyIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIncrementalMigrationResponse rsp = ModifyIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIncrementalMigrationOutcome(rsp);
        else
            return ModifyIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyIncrementalMigrationAsync(const ModifyIncrementalMigrationRequest& request, const ModifyIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIncrementalMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyIncrementalMigrationOutcomeCallable SqlserverClient::ModifyIncrementalMigrationCallable(const ModifyIncrementalMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIncrementalMigrationOutcome()>>(
        [this, request]()
        {
            return this->ModifyIncrementalMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyInstanceEncryptAttributesOutcome SqlserverClient::ModifyInstanceEncryptAttributes(const ModifyInstanceEncryptAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceEncryptAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceEncryptAttributesResponse rsp = ModifyInstanceEncryptAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceEncryptAttributesOutcome(rsp);
        else
            return ModifyInstanceEncryptAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceEncryptAttributesOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyInstanceEncryptAttributesAsync(const ModifyInstanceEncryptAttributesRequest& request, const ModifyInstanceEncryptAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceEncryptAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyInstanceEncryptAttributesOutcomeCallable SqlserverClient::ModifyInstanceEncryptAttributesCallable(const ModifyInstanceEncryptAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceEncryptAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceEncryptAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyInstanceParamOutcome SqlserverClient::ModifyInstanceParam(const ModifyInstanceParamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamResponse rsp = ModifyInstanceParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamOutcome(rsp);
        else
            return ModifyInstanceParamOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyInstanceParamAsync(const ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceParam(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyInstanceParamOutcomeCallable SqlserverClient::ModifyInstanceParamCallable(const ModifyInstanceParamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceParamOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceParam(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyMaintenanceSpanOutcome SqlserverClient::ModifyMaintenanceSpan(const ModifyMaintenanceSpanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceSpan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceSpanResponse rsp = ModifyMaintenanceSpanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceSpanOutcome(rsp);
        else
            return ModifyMaintenanceSpanOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceSpanOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyMaintenanceSpanAsync(const ModifyMaintenanceSpanRequest& request, const ModifyMaintenanceSpanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMaintenanceSpan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyMaintenanceSpanOutcomeCallable SqlserverClient::ModifyMaintenanceSpanCallable(const ModifyMaintenanceSpanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMaintenanceSpanOutcome()>>(
        [this, request]()
        {
            return this->ModifyMaintenanceSpan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyMigrationOutcome SqlserverClient::ModifyMigration(const ModifyMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrationResponse rsp = ModifyMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrationOutcome(rsp);
        else
            return ModifyMigrationOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyMigrationAsync(const ModifyMigrationRequest& request, const ModifyMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyMigrationOutcomeCallable SqlserverClient::ModifyMigrationCallable(const ModifyMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMigrationOutcome()>>(
        [this, request]()
        {
            return this->ModifyMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyOpenWanIpOutcome SqlserverClient::ModifyOpenWanIp(const ModifyOpenWanIpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOpenWanIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOpenWanIpResponse rsp = ModifyOpenWanIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOpenWanIpOutcome(rsp);
        else
            return ModifyOpenWanIpOutcome(o.GetError());
    }
    else
    {
        return ModifyOpenWanIpOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyOpenWanIpAsync(const ModifyOpenWanIpRequest& request, const ModifyOpenWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOpenWanIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyOpenWanIpOutcomeCallable SqlserverClient::ModifyOpenWanIpCallable(const ModifyOpenWanIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOpenWanIpOutcome()>>(
        [this, request]()
        {
            return this->ModifyOpenWanIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyPublishSubscribeOutcome SqlserverClient::ModifyPublishSubscribe(const ModifyPublishSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublishSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublishSubscribeResponse rsp = ModifyPublishSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublishSubscribeOutcome(rsp);
        else
            return ModifyPublishSubscribeOutcome(o.GetError());
    }
    else
    {
        return ModifyPublishSubscribeOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyPublishSubscribeAsync(const ModifyPublishSubscribeRequest& request, const ModifyPublishSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPublishSubscribe(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyPublishSubscribeOutcomeCallable SqlserverClient::ModifyPublishSubscribeCallable(const ModifyPublishSubscribeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPublishSubscribeOutcome()>>(
        [this, request]()
        {
            return this->ModifyPublishSubscribe(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyPublishSubscribeNameOutcome SqlserverClient::ModifyPublishSubscribeName(const ModifyPublishSubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublishSubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublishSubscribeNameResponse rsp = ModifyPublishSubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublishSubscribeNameOutcome(rsp);
        else
            return ModifyPublishSubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifyPublishSubscribeNameOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyPublishSubscribeNameAsync(const ModifyPublishSubscribeNameRequest& request, const ModifyPublishSubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPublishSubscribeName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyPublishSubscribeNameOutcomeCallable SqlserverClient::ModifyPublishSubscribeNameCallable(const ModifyPublishSubscribeNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPublishSubscribeNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyPublishSubscribeName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ModifyReadOnlyGroupDetailsOutcome SqlserverClient::ModifyReadOnlyGroupDetails(const ModifyReadOnlyGroupDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReadOnlyGroupDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReadOnlyGroupDetailsResponse rsp = ModifyReadOnlyGroupDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReadOnlyGroupDetailsOutcome(rsp);
        else
            return ModifyReadOnlyGroupDetailsOutcome(o.GetError());
    }
    else
    {
        return ModifyReadOnlyGroupDetailsOutcome(outcome.GetError());
    }
}

void SqlserverClient::ModifyReadOnlyGroupDetailsAsync(const ModifyReadOnlyGroupDetailsRequest& request, const ModifyReadOnlyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReadOnlyGroupDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ModifyReadOnlyGroupDetailsOutcomeCallable SqlserverClient::ModifyReadOnlyGroupDetailsCallable(const ModifyReadOnlyGroupDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReadOnlyGroupDetailsOutcome()>>(
        [this, request]()
        {
            return this->ModifyReadOnlyGroupDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::OpenInterCommunicationOutcome SqlserverClient::OpenInterCommunication(const OpenInterCommunicationRequest &request)
{
    auto outcome = MakeRequest(request, "OpenInterCommunication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenInterCommunicationResponse rsp = OpenInterCommunicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenInterCommunicationOutcome(rsp);
        else
            return OpenInterCommunicationOutcome(o.GetError());
    }
    else
    {
        return OpenInterCommunicationOutcome(outcome.GetError());
    }
}

void SqlserverClient::OpenInterCommunicationAsync(const OpenInterCommunicationRequest& request, const OpenInterCommunicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenInterCommunication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::OpenInterCommunicationOutcomeCallable SqlserverClient::OpenInterCommunicationCallable(const OpenInterCommunicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenInterCommunicationOutcome()>>(
        [this, request]()
        {
            return this->OpenInterCommunication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::QueryMigrationCheckProcessOutcome SqlserverClient::QueryMigrationCheckProcess(const QueryMigrationCheckProcessRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMigrationCheckProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMigrationCheckProcessResponse rsp = QueryMigrationCheckProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMigrationCheckProcessOutcome(rsp);
        else
            return QueryMigrationCheckProcessOutcome(o.GetError());
    }
    else
    {
        return QueryMigrationCheckProcessOutcome(outcome.GetError());
    }
}

void SqlserverClient::QueryMigrationCheckProcessAsync(const QueryMigrationCheckProcessRequest& request, const QueryMigrationCheckProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMigrationCheckProcess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::QueryMigrationCheckProcessOutcomeCallable SqlserverClient::QueryMigrationCheckProcessCallable(const QueryMigrationCheckProcessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMigrationCheckProcessOutcome()>>(
        [this, request]()
        {
            return this->QueryMigrationCheckProcess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RecycleDBInstanceOutcome SqlserverClient::RecycleDBInstance(const RecycleDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RecycleDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecycleDBInstanceResponse rsp = RecycleDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecycleDBInstanceOutcome(rsp);
        else
            return RecycleDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RecycleDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RecycleDBInstanceAsync(const RecycleDBInstanceRequest& request, const RecycleDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecycleDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RecycleDBInstanceOutcomeCallable SqlserverClient::RecycleDBInstanceCallable(const RecycleDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecycleDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RecycleDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RecycleReadOnlyGroupOutcome SqlserverClient::RecycleReadOnlyGroup(const RecycleReadOnlyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RecycleReadOnlyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecycleReadOnlyGroupResponse rsp = RecycleReadOnlyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecycleReadOnlyGroupOutcome(rsp);
        else
            return RecycleReadOnlyGroupOutcome(o.GetError());
    }
    else
    {
        return RecycleReadOnlyGroupOutcome(outcome.GetError());
    }
}

void SqlserverClient::RecycleReadOnlyGroupAsync(const RecycleReadOnlyGroupRequest& request, const RecycleReadOnlyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecycleReadOnlyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RecycleReadOnlyGroupOutcomeCallable SqlserverClient::RecycleReadOnlyGroupCallable(const RecycleReadOnlyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecycleReadOnlyGroupOutcome()>>(
        [this, request]()
        {
            return this->RecycleReadOnlyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RemoveBackupsOutcome SqlserverClient::RemoveBackups(const RemoveBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveBackupsResponse rsp = RemoveBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveBackupsOutcome(rsp);
        else
            return RemoveBackupsOutcome(o.GetError());
    }
    else
    {
        return RemoveBackupsOutcome(outcome.GetError());
    }
}

void SqlserverClient::RemoveBackupsAsync(const RemoveBackupsRequest& request, const RemoveBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveBackups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RemoveBackupsOutcomeCallable SqlserverClient::RemoveBackupsCallable(const RemoveBackupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveBackupsOutcome()>>(
        [this, request]()
        {
            return this->RemoveBackups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RenewDBInstanceOutcome SqlserverClient::RenewDBInstance(const RenewDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstanceResponse rsp = RenewDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstanceOutcome(rsp);
        else
            return RenewDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RenewDBInstanceAsync(const RenewDBInstanceRequest& request, const RenewDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RenewDBInstanceOutcomeCallable SqlserverClient::RenewDBInstanceCallable(const RenewDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RenewPostpaidDBInstanceOutcome SqlserverClient::RenewPostpaidDBInstance(const RenewPostpaidDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewPostpaidDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewPostpaidDBInstanceResponse rsp = RenewPostpaidDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewPostpaidDBInstanceOutcome(rsp);
        else
            return RenewPostpaidDBInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewPostpaidDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RenewPostpaidDBInstanceAsync(const RenewPostpaidDBInstanceRequest& request, const RenewPostpaidDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewPostpaidDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RenewPostpaidDBInstanceOutcomeCallable SqlserverClient::RenewPostpaidDBInstanceCallable(const RenewPostpaidDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewPostpaidDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewPostpaidDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::ResetAccountPasswordOutcome SqlserverClient::ResetAccountPassword(const ResetAccountPasswordRequest &request)
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

void SqlserverClient::ResetAccountPasswordAsync(const ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::ResetAccountPasswordOutcomeCallable SqlserverClient::ResetAccountPasswordCallable(const ResetAccountPasswordRequest &request)
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

SqlserverClient::RestartDBInstanceOutcome SqlserverClient::RestartDBInstance(const RestartDBInstanceRequest &request)
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

void SqlserverClient::RestartDBInstanceAsync(const RestartDBInstanceRequest& request, const RestartDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RestartDBInstanceOutcomeCallable SqlserverClient::RestartDBInstanceCallable(const RestartDBInstanceRequest &request)
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

SqlserverClient::RestoreInstanceOutcome SqlserverClient::RestoreInstance(const RestoreInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreInstanceResponse rsp = RestoreInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreInstanceOutcome(rsp);
        else
            return RestoreInstanceOutcome(o.GetError());
    }
    else
    {
        return RestoreInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RestoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RestoreInstanceOutcomeCallable SqlserverClient::RestoreInstanceCallable(const RestoreInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreInstanceOutcome()>>(
        [this, request]()
        {
            return this->RestoreInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RollbackInstanceOutcome SqlserverClient::RollbackInstance(const RollbackInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackInstanceResponse rsp = RollbackInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackInstanceOutcome(rsp);
        else
            return RollbackInstanceOutcome(o.GetError());
    }
    else
    {
        return RollbackInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::RollbackInstanceAsync(const RollbackInstanceRequest& request, const RollbackInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RollbackInstanceOutcomeCallable SqlserverClient::RollbackInstanceCallable(const RollbackInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackInstanceOutcome()>>(
        [this, request]()
        {
            return this->RollbackInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::RunMigrationOutcome SqlserverClient::RunMigration(const RunMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "RunMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunMigrationResponse rsp = RunMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunMigrationOutcome(rsp);
        else
            return RunMigrationOutcome(o.GetError());
    }
    else
    {
        return RunMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::RunMigrationAsync(const RunMigrationRequest& request, const RunMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::RunMigrationOutcomeCallable SqlserverClient::RunMigrationCallable(const RunMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunMigrationOutcome()>>(
        [this, request]()
        {
            return this->RunMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::StartBackupMigrationOutcome SqlserverClient::StartBackupMigration(const StartBackupMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StartBackupMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBackupMigrationResponse rsp = StartBackupMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBackupMigrationOutcome(rsp);
        else
            return StartBackupMigrationOutcome(o.GetError());
    }
    else
    {
        return StartBackupMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartBackupMigrationAsync(const StartBackupMigrationRequest& request, const StartBackupMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartBackupMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::StartBackupMigrationOutcomeCallable SqlserverClient::StartBackupMigrationCallable(const StartBackupMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartBackupMigrationOutcome()>>(
        [this, request]()
        {
            return this->StartBackupMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::StartIncrementalMigrationOutcome SqlserverClient::StartIncrementalMigration(const StartIncrementalMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StartIncrementalMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartIncrementalMigrationResponse rsp = StartIncrementalMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartIncrementalMigrationOutcome(rsp);
        else
            return StartIncrementalMigrationOutcome(o.GetError());
    }
    else
    {
        return StartIncrementalMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartIncrementalMigrationAsync(const StartIncrementalMigrationRequest& request, const StartIncrementalMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartIncrementalMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::StartIncrementalMigrationOutcomeCallable SqlserverClient::StartIncrementalMigrationCallable(const StartIncrementalMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartIncrementalMigrationOutcome()>>(
        [this, request]()
        {
            return this->StartIncrementalMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::StartInstanceXEventOutcome SqlserverClient::StartInstanceXEvent(const StartInstanceXEventRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstanceXEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstanceXEventResponse rsp = StartInstanceXEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstanceXEventOutcome(rsp);
        else
            return StartInstanceXEventOutcome(o.GetError());
    }
    else
    {
        return StartInstanceXEventOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartInstanceXEventAsync(const StartInstanceXEventRequest& request, const StartInstanceXEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstanceXEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::StartInstanceXEventOutcomeCallable SqlserverClient::StartInstanceXEventCallable(const StartInstanceXEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstanceXEventOutcome()>>(
        [this, request]()
        {
            return this->StartInstanceXEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::StartMigrationCheckOutcome SqlserverClient::StartMigrationCheck(const StartMigrationCheckRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrationCheck");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrationCheckResponse rsp = StartMigrationCheckResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrationCheckOutcome(rsp);
        else
            return StartMigrationCheckOutcome(o.GetError());
    }
    else
    {
        return StartMigrationCheckOutcome(outcome.GetError());
    }
}

void SqlserverClient::StartMigrationCheckAsync(const StartMigrationCheckRequest& request, const StartMigrationCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMigrationCheck(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::StartMigrationCheckOutcomeCallable SqlserverClient::StartMigrationCheckCallable(const StartMigrationCheckRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMigrationCheckOutcome()>>(
        [this, request]()
        {
            return this->StartMigrationCheck(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::StopMigrationOutcome SqlserverClient::StopMigration(const StopMigrationRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrationResponse rsp = StopMigrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrationOutcome(rsp);
        else
            return StopMigrationOutcome(o.GetError());
    }
    else
    {
        return StopMigrationOutcome(outcome.GetError());
    }
}

void SqlserverClient::StopMigrationAsync(const StopMigrationRequest& request, const StopMigrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMigration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::StopMigrationOutcomeCallable SqlserverClient::StopMigrationCallable(const StopMigrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMigrationOutcome()>>(
        [this, request]()
        {
            return this->StopMigration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::SwitchCloudInstanceHAOutcome SqlserverClient::SwitchCloudInstanceHA(const SwitchCloudInstanceHARequest &request)
{
    auto outcome = MakeRequest(request, "SwitchCloudInstanceHA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchCloudInstanceHAResponse rsp = SwitchCloudInstanceHAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchCloudInstanceHAOutcome(rsp);
        else
            return SwitchCloudInstanceHAOutcome(o.GetError());
    }
    else
    {
        return SwitchCloudInstanceHAOutcome(outcome.GetError());
    }
}

void SqlserverClient::SwitchCloudInstanceHAAsync(const SwitchCloudInstanceHARequest& request, const SwitchCloudInstanceHAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchCloudInstanceHA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::SwitchCloudInstanceHAOutcomeCallable SqlserverClient::SwitchCloudInstanceHACallable(const SwitchCloudInstanceHARequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchCloudInstanceHAOutcome()>>(
        [this, request]()
        {
            return this->SwitchCloudInstanceHA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::TerminateDBInstanceOutcome SqlserverClient::TerminateDBInstance(const TerminateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDBInstanceResponse rsp = TerminateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDBInstanceOutcome(rsp);
        else
            return TerminateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::TerminateDBInstanceAsync(const TerminateDBInstanceRequest& request, const TerminateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::TerminateDBInstanceOutcomeCallable SqlserverClient::TerminateDBInstanceCallable(const TerminateDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SqlserverClient::UpgradeDBInstanceOutcome SqlserverClient::UpgradeDBInstance(const UpgradeDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceResponse rsp = UpgradeDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceOutcome(rsp);
        else
            return UpgradeDBInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceOutcome(outcome.GetError());
    }
}

void SqlserverClient::UpgradeDBInstanceAsync(const UpgradeDBInstanceRequest& request, const UpgradeDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDBInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SqlserverClient::UpgradeDBInstanceOutcomeCallable SqlserverClient::UpgradeDBInstanceCallable(const UpgradeDBInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDBInstanceOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDBInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

