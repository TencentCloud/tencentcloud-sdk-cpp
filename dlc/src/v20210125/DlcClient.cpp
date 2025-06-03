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


DlcClient::AddDMSPartitionsOutcome DlcClient::AddDMSPartitions(const AddDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "AddDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDMSPartitionsResponse rsp = AddDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDMSPartitionsOutcome(rsp);
        else
            return AddDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return AddDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::AddDMSPartitionsAsync(const AddDMSPartitionsRequest& request, const AddDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDMSPartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AddDMSPartitionsOutcomeCallable DlcClient::AddDMSPartitionsCallable(const AddDMSPartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDMSPartitionsOutcome()>>(
        [this, request]()
        {
            return this->AddDMSPartitions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AddOptimizerEnginesOutcome DlcClient::AddOptimizerEngines(const AddOptimizerEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "AddOptimizerEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOptimizerEnginesResponse rsp = AddOptimizerEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOptimizerEnginesOutcome(rsp);
        else
            return AddOptimizerEnginesOutcome(o.GetError());
    }
    else
    {
        return AddOptimizerEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::AddOptimizerEnginesAsync(const AddOptimizerEnginesRequest& request, const AddOptimizerEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddOptimizerEngines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AddOptimizerEnginesOutcomeCallable DlcClient::AddOptimizerEnginesCallable(const AddOptimizerEnginesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddOptimizerEnginesOutcome()>>(
        [this, request]()
        {
            return this->AddOptimizerEngines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

DlcClient::AlterDMSDatabaseOutcome DlcClient::AlterDMSDatabase(const AlterDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSDatabaseResponse rsp = AlterDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSDatabaseOutcome(rsp);
        else
            return AlterDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return AlterDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSDatabaseAsync(const AlterDMSDatabaseRequest& request, const AlterDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AlterDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AlterDMSDatabaseOutcomeCallable DlcClient::AlterDMSDatabaseCallable(const AlterDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AlterDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->AlterDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AlterDMSPartitionOutcome DlcClient::AlterDMSPartition(const AlterDMSPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSPartitionResponse rsp = AlterDMSPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSPartitionOutcome(rsp);
        else
            return AlterDMSPartitionOutcome(o.GetError());
    }
    else
    {
        return AlterDMSPartitionOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSPartitionAsync(const AlterDMSPartitionRequest& request, const AlterDMSPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AlterDMSPartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AlterDMSPartitionOutcomeCallable DlcClient::AlterDMSPartitionCallable(const AlterDMSPartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AlterDMSPartitionOutcome()>>(
        [this, request]()
        {
            return this->AlterDMSPartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AlterDMSTableOutcome DlcClient::AlterDMSTable(const AlterDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "AlterDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AlterDMSTableResponse rsp = AlterDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AlterDMSTableOutcome(rsp);
        else
            return AlterDMSTableOutcome(o.GetError());
    }
    else
    {
        return AlterDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::AlterDMSTableAsync(const AlterDMSTableRequest& request, const AlterDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AlterDMSTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AlterDMSTableOutcomeCallable DlcClient::AlterDMSTableCallable(const AlterDMSTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AlterDMSTableOutcome()>>(
        [this, request]()
        {
            return this->AlterDMSTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::AssignMangedTablePropertiesOutcome DlcClient::AssignMangedTableProperties(const AssignMangedTablePropertiesRequest &request)
{
    auto outcome = MakeRequest(request, "AssignMangedTableProperties");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignMangedTablePropertiesResponse rsp = AssignMangedTablePropertiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignMangedTablePropertiesOutcome(rsp);
        else
            return AssignMangedTablePropertiesOutcome(o.GetError());
    }
    else
    {
        return AssignMangedTablePropertiesOutcome(outcome.GetError());
    }
}

void DlcClient::AssignMangedTablePropertiesAsync(const AssignMangedTablePropertiesRequest& request, const AssignMangedTablePropertiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssignMangedTableProperties(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::AssignMangedTablePropertiesOutcomeCallable DlcClient::AssignMangedTablePropertiesCallable(const AssignMangedTablePropertiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssignMangedTablePropertiesOutcome()>>(
        [this, request]()
        {
            return this->AssignMangedTableProperties(request);
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

DlcClient::CancelNotebookSessionStatementOutcome DlcClient::CancelNotebookSessionStatement(const CancelNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "CancelNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelNotebookSessionStatementResponse rsp = CancelNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelNotebookSessionStatementOutcome(rsp);
        else
            return CancelNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return CancelNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::CancelNotebookSessionStatementAsync(const CancelNotebookSessionStatementRequest& request, const CancelNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelNotebookSessionStatement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelNotebookSessionStatementOutcomeCallable DlcClient::CancelNotebookSessionStatementCallable(const CancelNotebookSessionStatementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelNotebookSessionStatementOutcome()>>(
        [this, request]()
        {
            return this->CancelNotebookSessionStatement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CancelNotebookSessionStatementBatchOutcome DlcClient::CancelNotebookSessionStatementBatch(const CancelNotebookSessionStatementBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CancelNotebookSessionStatementBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelNotebookSessionStatementBatchResponse rsp = CancelNotebookSessionStatementBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelNotebookSessionStatementBatchOutcome(rsp);
        else
            return CancelNotebookSessionStatementBatchOutcome(o.GetError());
    }
    else
    {
        return CancelNotebookSessionStatementBatchOutcome(outcome.GetError());
    }
}

void DlcClient::CancelNotebookSessionStatementBatchAsync(const CancelNotebookSessionStatementBatchRequest& request, const CancelNotebookSessionStatementBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelNotebookSessionStatementBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelNotebookSessionStatementBatchOutcomeCallable DlcClient::CancelNotebookSessionStatementBatchCallable(const CancelNotebookSessionStatementBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelNotebookSessionStatementBatchOutcome()>>(
        [this, request]()
        {
            return this->CancelNotebookSessionStatementBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CancelSparkSessionBatchSQLOutcome DlcClient::CancelSparkSessionBatchSQL(const CancelSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CancelSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelSparkSessionBatchSQLResponse rsp = CancelSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelSparkSessionBatchSQLOutcome(rsp);
        else
            return CancelSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CancelSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CancelSparkSessionBatchSQLAsync(const CancelSparkSessionBatchSQLRequest& request, const CancelSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelSparkSessionBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CancelSparkSessionBatchSQLOutcomeCallable DlcClient::CancelSparkSessionBatchSQLCallable(const CancelSparkSessionBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelSparkSessionBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->CancelSparkSessionBatchSQL(request);
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

DlcClient::CheckDataEngineConfigPairsValidityOutcome DlcClient::CheckDataEngineConfigPairsValidity(const CheckDataEngineConfigPairsValidityRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineConfigPairsValidity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineConfigPairsValidityResponse rsp = CheckDataEngineConfigPairsValidityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineConfigPairsValidityOutcome(rsp);
        else
            return CheckDataEngineConfigPairsValidityOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineConfigPairsValidityOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineConfigPairsValidityAsync(const CheckDataEngineConfigPairsValidityRequest& request, const CheckDataEngineConfigPairsValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineConfigPairsValidity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineConfigPairsValidityOutcomeCallable DlcClient::CheckDataEngineConfigPairsValidityCallable(const CheckDataEngineConfigPairsValidityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineConfigPairsValidityOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineConfigPairsValidity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcome DlcClient::CheckDataEngineImageCanBeRollback(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeRollbackResponse rsp = CheckDataEngineImageCanBeRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeRollbackOutcome(rsp);
        else
            return CheckDataEngineImageCanBeRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeRollbackOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeRollbackAsync(const CheckDataEngineImageCanBeRollbackRequest& request, const CheckDataEngineImageCanBeRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineImageCanBeRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineImageCanBeRollbackOutcomeCallable DlcClient::CheckDataEngineImageCanBeRollbackCallable(const CheckDataEngineImageCanBeRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineImageCanBeRollbackOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineImageCanBeRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcome DlcClient::CheckDataEngineImageCanBeUpgrade(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDataEngineImageCanBeUpgrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDataEngineImageCanBeUpgradeResponse rsp = CheckDataEngineImageCanBeUpgradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDataEngineImageCanBeUpgradeOutcome(rsp);
        else
            return CheckDataEngineImageCanBeUpgradeOutcome(o.GetError());
    }
    else
    {
        return CheckDataEngineImageCanBeUpgradeOutcome(outcome.GetError());
    }
}

void DlcClient::CheckDataEngineImageCanBeUpgradeAsync(const CheckDataEngineImageCanBeUpgradeRequest& request, const CheckDataEngineImageCanBeUpgradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDataEngineImageCanBeUpgrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckDataEngineImageCanBeUpgradeOutcomeCallable DlcClient::CheckDataEngineImageCanBeUpgradeCallable(const CheckDataEngineImageCanBeUpgradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDataEngineImageCanBeUpgradeOutcome()>>(
        [this, request]()
        {
            return this->CheckDataEngineImageCanBeUpgrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CheckLockMetaDataOutcome DlcClient::CheckLockMetaData(const CheckLockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLockMetaDataResponse rsp = CheckLockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLockMetaDataOutcome(rsp);
        else
            return CheckLockMetaDataOutcome(o.GetError());
    }
    else
    {
        return CheckLockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::CheckLockMetaDataAsync(const CheckLockMetaDataRequest& request, const CheckLockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckLockMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CheckLockMetaDataOutcomeCallable DlcClient::CheckLockMetaDataCallable(const CheckLockMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckLockMetaDataOutcome()>>(
        [this, request]()
        {
            return this->CheckLockMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateCHDFSBindingProductOutcome DlcClient::CreateCHDFSBindingProduct(const CreateCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCHDFSBindingProductResponse rsp = CreateCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCHDFSBindingProductOutcome(rsp);
        else
            return CreateCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return CreateCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::CreateCHDFSBindingProductAsync(const CreateCHDFSBindingProductRequest& request, const CreateCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCHDFSBindingProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateCHDFSBindingProductOutcomeCallable DlcClient::CreateCHDFSBindingProductCallable(const CreateCHDFSBindingProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCHDFSBindingProductOutcome()>>(
        [this, request]()
        {
            return this->CreateCHDFSBindingProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDMSDatabaseOutcome DlcClient::CreateDMSDatabase(const CreateDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDMSDatabaseResponse rsp = CreateDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDMSDatabaseOutcome(rsp);
        else
            return CreateDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return CreateDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDMSDatabaseAsync(const CreateDMSDatabaseRequest& request, const CreateDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDMSDatabaseOutcomeCallable DlcClient::CreateDMSDatabaseCallable(const CreateDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDMSTableOutcome DlcClient::CreateDMSTable(const CreateDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDMSTableResponse rsp = CreateDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDMSTableOutcome(rsp);
        else
            return CreateDMSTableOutcome(o.GetError());
    }
    else
    {
        return CreateDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDMSTableAsync(const CreateDMSTableRequest& request, const CreateDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDMSTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDMSTableOutcomeCallable DlcClient::CreateDMSTableCallable(const CreateDMSTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDMSTableOutcome()>>(
        [this, request]()
        {
            return this->CreateDMSTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateDataEngineOutcome DlcClient::CreateDataEngine(const CreateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataEngineResponse rsp = CreateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataEngineOutcome(rsp);
        else
            return CreateDataEngineOutcome(o.GetError());
    }
    else
    {
        return CreateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::CreateDataEngineAsync(const CreateDataEngineRequest& request, const CreateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateDataEngineOutcomeCallable DlcClient::CreateDataEngineCallable(const CreateDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDataEngineOutcome()>>(
        [this, request]()
        {
            return this->CreateDataEngine(request);
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

DlcClient::CreateExportTaskOutcome DlcClient::CreateExportTask(const CreateExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportTaskResponse rsp = CreateExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportTaskOutcome(rsp);
        else
            return CreateExportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateExportTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateExportTaskAsync(const CreateExportTaskRequest& request, const CreateExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateExportTaskOutcomeCallable DlcClient::CreateExportTaskCallable(const CreateExportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateExportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateImportTaskOutcome DlcClient::CreateImportTask(const CreateImportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImportTaskResponse rsp = CreateImportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImportTaskOutcome(rsp);
        else
            return CreateImportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateImportTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateImportTaskAsync(const CreateImportTaskRequest& request, const CreateImportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImportTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateImportTaskOutcomeCallable DlcClient::CreateImportTaskCallable(const CreateImportTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImportTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateImportTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateInternalTableOutcome DlcClient::CreateInternalTable(const CreateInternalTableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInternalTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInternalTableResponse rsp = CreateInternalTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInternalTableOutcome(rsp);
        else
            return CreateInternalTableOutcome(o.GetError());
    }
    else
    {
        return CreateInternalTableOutcome(outcome.GetError());
    }
}

void DlcClient::CreateInternalTableAsync(const CreateInternalTableRequest& request, const CreateInternalTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInternalTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateInternalTableOutcomeCallable DlcClient::CreateInternalTableCallable(const CreateInternalTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInternalTableOutcome()>>(
        [this, request]()
        {
            return this->CreateInternalTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateNotebookSessionOutcome DlcClient::CreateNotebookSession(const CreateNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionResponse rsp = CreateNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionOutcome(rsp);
        else
            return CreateNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionAsync(const CreateNotebookSessionRequest& request, const CreateNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotebookSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateNotebookSessionOutcomeCallable DlcClient::CreateNotebookSessionCallable(const CreateNotebookSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotebookSessionOutcome()>>(
        [this, request]()
        {
            return this->CreateNotebookSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateNotebookSessionStatementOutcome DlcClient::CreateNotebookSessionStatement(const CreateNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionStatementResponse rsp = CreateNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionStatementOutcome(rsp);
        else
            return CreateNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionStatementAsync(const CreateNotebookSessionStatementRequest& request, const CreateNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotebookSessionStatement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateNotebookSessionStatementOutcomeCallable DlcClient::CreateNotebookSessionStatementCallable(const CreateNotebookSessionStatementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotebookSessionStatementOutcome()>>(
        [this, request]()
        {
            return this->CreateNotebookSessionStatement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateNotebookSessionStatementSupportBatchSQLOutcome DlcClient::CreateNotebookSessionStatementSupportBatchSQL(const CreateNotebookSessionStatementSupportBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNotebookSessionStatementSupportBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNotebookSessionStatementSupportBatchSQLResponse rsp = CreateNotebookSessionStatementSupportBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNotebookSessionStatementSupportBatchSQLOutcome(rsp);
        else
            return CreateNotebookSessionStatementSupportBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CreateNotebookSessionStatementSupportBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CreateNotebookSessionStatementSupportBatchSQLAsync(const CreateNotebookSessionStatementSupportBatchSQLRequest& request, const CreateNotebookSessionStatementSupportBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNotebookSessionStatementSupportBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateNotebookSessionStatementSupportBatchSQLOutcomeCallable DlcClient::CreateNotebookSessionStatementSupportBatchSQLCallable(const CreateNotebookSessionStatementSupportBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNotebookSessionStatementSupportBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->CreateNotebookSessionStatementSupportBatchSQL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateResultDownloadOutcome DlcClient::CreateResultDownload(const CreateResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResultDownloadResponse rsp = CreateResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResultDownloadOutcome(rsp);
        else
            return CreateResultDownloadOutcome(o.GetError());
    }
    else
    {
        return CreateResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::CreateResultDownloadAsync(const CreateResultDownloadRequest& request, const CreateResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResultDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateResultDownloadOutcomeCallable DlcClient::CreateResultDownloadCallable(const CreateResultDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResultDownloadOutcome()>>(
        [this, request]()
        {
            return this->CreateResultDownload(request);
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

DlcClient::CreateSparkAppOutcome DlcClient::CreateSparkApp(const CreateSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppResponse rsp = CreateSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppOutcome(rsp);
        else
            return CreateSparkAppOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppAsync(const CreateSparkAppRequest& request, const CreateSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkAppOutcomeCallable DlcClient::CreateSparkAppCallable(const CreateSparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkAppOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateSparkAppTaskOutcome DlcClient::CreateSparkAppTask(const CreateSparkAppTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkAppTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkAppTaskResponse rsp = CreateSparkAppTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkAppTaskOutcome(rsp);
        else
            return CreateSparkAppTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSparkAppTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkAppTaskAsync(const CreateSparkAppTaskRequest& request, const CreateSparkAppTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkAppTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkAppTaskOutcomeCallable DlcClient::CreateSparkAppTaskCallable(const CreateSparkAppTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkAppTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkAppTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateSparkSessionBatchSQLOutcome DlcClient::CreateSparkSessionBatchSQL(const CreateSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkSessionBatchSQLResponse rsp = CreateSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkSessionBatchSQLOutcome(rsp);
        else
            return CreateSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return CreateSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkSessionBatchSQLAsync(const CreateSparkSessionBatchSQLRequest& request, const CreateSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkSessionBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkSessionBatchSQLOutcomeCallable DlcClient::CreateSparkSessionBatchSQLCallable(const CreateSparkSessionBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkSessionBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkSessionBatchSQL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::CreateSparkSubmitTaskOutcome DlcClient::CreateSparkSubmitTask(const CreateSparkSubmitTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSparkSubmitTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSparkSubmitTaskResponse rsp = CreateSparkSubmitTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSparkSubmitTaskOutcome(rsp);
        else
            return CreateSparkSubmitTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSparkSubmitTaskOutcome(outcome.GetError());
    }
}

void DlcClient::CreateSparkSubmitTaskAsync(const CreateSparkSubmitTaskRequest& request, const CreateSparkSubmitTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSparkSubmitTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateSparkSubmitTaskOutcomeCallable DlcClient::CreateSparkSubmitTaskCallable(const CreateSparkSubmitTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSparkSubmitTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSparkSubmitTask(request);
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

DlcClient::CreateTasksOutcome DlcClient::CreateTasks(const CreateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTasksResponse rsp = CreateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTasksOutcome(rsp);
        else
            return CreateTasksOutcome(o.GetError());
    }
    else
    {
        return CreateTasksOutcome(outcome.GetError());
    }
}

void DlcClient::CreateTasksAsync(const CreateTasksRequest& request, const CreateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::CreateTasksOutcomeCallable DlcClient::CreateTasksCallable(const CreateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateTasks(request);
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

DlcClient::DeleteCHDFSBindingProductOutcome DlcClient::DeleteCHDFSBindingProduct(const DeleteCHDFSBindingProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCHDFSBindingProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCHDFSBindingProductResponse rsp = DeleteCHDFSBindingProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCHDFSBindingProductOutcome(rsp);
        else
            return DeleteCHDFSBindingProductOutcome(o.GetError());
    }
    else
    {
        return DeleteCHDFSBindingProductOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteCHDFSBindingProductAsync(const DeleteCHDFSBindingProductRequest& request, const DeleteCHDFSBindingProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCHDFSBindingProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteCHDFSBindingProductOutcomeCallable DlcClient::DeleteCHDFSBindingProductCallable(const DeleteCHDFSBindingProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCHDFSBindingProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteCHDFSBindingProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteDataEngineOutcome DlcClient::DeleteDataEngine(const DeleteDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataEngineResponse rsp = DeleteDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataEngineOutcome(rsp);
        else
            return DeleteDataEngineOutcome(o.GetError());
    }
    else
    {
        return DeleteDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteDataEngineAsync(const DeleteDataEngineRequest& request, const DeleteDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteDataEngineOutcomeCallable DlcClient::DeleteDataEngineCallable(const DeleteDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDataEngineOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteNotebookSessionOutcome DlcClient::DeleteNotebookSession(const DeleteNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNotebookSessionResponse rsp = DeleteNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNotebookSessionOutcome(rsp);
        else
            return DeleteNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return DeleteNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteNotebookSessionAsync(const DeleteNotebookSessionRequest& request, const DeleteNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNotebookSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteNotebookSessionOutcomeCallable DlcClient::DeleteNotebookSessionCallable(const DeleteNotebookSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNotebookSessionOutcome()>>(
        [this, request]()
        {
            return this->DeleteNotebookSession(request);
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

DlcClient::DeleteSparkAppOutcome DlcClient::DeleteSparkApp(const DeleteSparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSparkAppResponse rsp = DeleteSparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSparkAppOutcome(rsp);
        else
            return DeleteSparkAppOutcome(o.GetError());
    }
    else
    {
        return DeleteSparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteSparkAppAsync(const DeleteSparkAppRequest& request, const DeleteSparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteSparkAppOutcomeCallable DlcClient::DeleteSparkAppCallable(const DeleteSparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSparkAppOutcome()>>(
        [this, request]()
        {
            return this->DeleteSparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteTableOutcome DlcClient::DeleteTable(const DeleteTableRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableResponse rsp = DeleteTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableOutcome(rsp);
        else
            return DeleteTableOutcome(o.GetError());
    }
    else
    {
        return DeleteTableOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteTableAsync(const DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteTableOutcomeCallable DlcClient::DeleteTableCallable(const DeleteTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTableOutcome()>>(
        [this, request]()
        {
            return this->DeleteTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DeleteThirdPartyAccessUserOutcome DlcClient::DeleteThirdPartyAccessUser(const DeleteThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteThirdPartyAccessUserResponse rsp = DeleteThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteThirdPartyAccessUserOutcome(rsp);
        else
            return DeleteThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DeleteThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DeleteThirdPartyAccessUserAsync(const DeleteThirdPartyAccessUserRequest& request, const DeleteThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DeleteThirdPartyAccessUserOutcomeCallable DlcClient::DeleteThirdPartyAccessUserCallable(const DeleteThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteThirdPartyAccessUser(request);
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

DlcClient::DescribeAdvancedStoreLocationOutcome DlcClient::DescribeAdvancedStoreLocation(const DescribeAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdvancedStoreLocationResponse rsp = DescribeAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdvancedStoreLocationOutcome(rsp);
        else
            return DescribeAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeAdvancedStoreLocationAsync(const DescribeAdvancedStoreLocationRequest& request, const DescribeAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdvancedStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeAdvancedStoreLocationOutcomeCallable DlcClient::DescribeAdvancedStoreLocationCallable(const DescribeAdvancedStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAdvancedStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeAdvancedStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeClusterMonitorInfosOutcome DlcClient::DescribeClusterMonitorInfos(const DescribeClusterMonitorInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterMonitorInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterMonitorInfosResponse rsp = DescribeClusterMonitorInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterMonitorInfosOutcome(rsp);
        else
            return DescribeClusterMonitorInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterMonitorInfosOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeClusterMonitorInfosAsync(const DescribeClusterMonitorInfosRequest& request, const DescribeClusterMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterMonitorInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeClusterMonitorInfosOutcomeCallable DlcClient::DescribeClusterMonitorInfosCallable(const DescribeClusterMonitorInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterMonitorInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterMonitorInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDLCCatalogAccessOutcome DlcClient::DescribeDLCCatalogAccess(const DescribeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDLCCatalogAccessResponse rsp = DescribeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDLCCatalogAccessOutcome(rsp);
        else
            return DescribeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return DescribeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDLCCatalogAccessAsync(const DescribeDLCCatalogAccessRequest& request, const DescribeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDLCCatalogAccessOutcomeCallable DlcClient::DescribeDLCCatalogAccessCallable(const DescribeDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->DescribeDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSDatabaseOutcome DlcClient::DescribeDMSDatabase(const DescribeDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSDatabaseResponse rsp = DescribeDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSDatabaseOutcome(rsp);
        else
            return DescribeDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSDatabaseAsync(const DescribeDMSDatabaseRequest& request, const DescribeDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSDatabaseOutcomeCallable DlcClient::DescribeDMSDatabaseCallable(const DescribeDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSPartitionsOutcome DlcClient::DescribeDMSPartitions(const DescribeDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSPartitionsResponse rsp = DescribeDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSPartitionsOutcome(rsp);
        else
            return DescribeDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSPartitionsAsync(const DescribeDMSPartitionsRequest& request, const DescribeDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSPartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSPartitionsOutcomeCallable DlcClient::DescribeDMSPartitionsCallable(const DescribeDMSPartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSPartitionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSPartitions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSTableOutcome DlcClient::DescribeDMSTable(const DescribeDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSTableResponse rsp = DescribeDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSTableOutcome(rsp);
        else
            return DescribeDMSTableOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSTableAsync(const DescribeDMSTableRequest& request, const DescribeDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSTableOutcomeCallable DlcClient::DescribeDMSTableCallable(const DescribeDMSTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSTableOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDMSTablesOutcome DlcClient::DescribeDMSTables(const DescribeDMSTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDMSTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDMSTablesResponse rsp = DescribeDMSTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDMSTablesOutcome(rsp);
        else
            return DescribeDMSTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeDMSTablesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDMSTablesAsync(const DescribeDMSTablesRequest& request, const DescribeDMSTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDMSTables(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDMSTablesOutcomeCallable DlcClient::DescribeDMSTablesCallable(const DescribeDMSTablesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDMSTablesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDMSTables(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEngineOutcome DlcClient::DescribeDataEngine(const DescribeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineResponse rsp = DescribeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineOutcome(rsp);
        else
            return DescribeDataEngineOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineAsync(const DescribeDataEngineRequest& request, const DescribeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEngineOutcomeCallable DlcClient::DescribeDataEngineCallable(const DescribeDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEngineOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEngineEventsOutcome DlcClient::DescribeDataEngineEvents(const DescribeDataEngineEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineEventsResponse rsp = DescribeDataEngineEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineEventsOutcome(rsp);
        else
            return DescribeDataEngineEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineEventsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineEventsAsync(const DescribeDataEngineEventsRequest& request, const DescribeDataEngineEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngineEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEngineEventsOutcomeCallable DlcClient::DescribeDataEngineEventsCallable(const DescribeDataEngineEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEngineEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngineEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEngineImageVersionsOutcome DlcClient::DescribeDataEngineImageVersions(const DescribeDataEngineImageVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngineImageVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEngineImageVersionsResponse rsp = DescribeDataEngineImageVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEngineImageVersionsOutcome(rsp);
        else
            return DescribeDataEngineImageVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEngineImageVersionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEngineImageVersionsAsync(const DescribeDataEngineImageVersionsRequest& request, const DescribeDataEngineImageVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngineImageVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEngineImageVersionsOutcomeCallable DlcClient::DescribeDataEngineImageVersionsCallable(const DescribeDataEngineImageVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEngineImageVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngineImageVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcome DlcClient::DescribeDataEnginePythonSparkImages(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginePythonSparkImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginePythonSparkImagesResponse rsp = DescribeDataEnginePythonSparkImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginePythonSparkImagesOutcome(rsp);
        else
            return DescribeDataEnginePythonSparkImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginePythonSparkImagesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginePythonSparkImagesAsync(const DescribeDataEnginePythonSparkImagesRequest& request, const DescribeDataEnginePythonSparkImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEnginePythonSparkImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEnginePythonSparkImagesOutcomeCallable DlcClient::DescribeDataEnginePythonSparkImagesCallable(const DescribeDataEnginePythonSparkImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEnginePythonSparkImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEnginePythonSparkImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEnginesOutcome DlcClient::DescribeDataEngines(const DescribeDataEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginesResponse rsp = DescribeDataEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginesOutcome(rsp);
        else
            return DescribeDataEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginesAsync(const DescribeDataEnginesRequest& request, const DescribeDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEngines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEnginesOutcomeCallable DlcClient::DescribeDataEnginesCallable(const DescribeDataEnginesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEnginesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEngines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeDataEnginesScaleDetailOutcome DlcClient::DescribeDataEnginesScaleDetail(const DescribeDataEnginesScaleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataEnginesScaleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataEnginesScaleDetailResponse rsp = DescribeDataEnginesScaleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataEnginesScaleDetailOutcome(rsp);
        else
            return DescribeDataEnginesScaleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDataEnginesScaleDetailOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDataEnginesScaleDetailAsync(const DescribeDataEnginesScaleDetailRequest& request, const DescribeDataEnginesScaleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDataEnginesScaleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDataEnginesScaleDetailOutcomeCallable DlcClient::DescribeDataEnginesScaleDetailCallable(const DescribeDataEnginesScaleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDataEnginesScaleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDataEnginesScaleDetail(request);
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

DlcClient::DescribeDatasourceConnectionOutcome DlcClient::DescribeDatasourceConnection(const DescribeDatasourceConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasourceConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceConnectionResponse rsp = DescribeDatasourceConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceConnectionOutcome(rsp);
        else
            return DescribeDatasourceConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceConnectionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeDatasourceConnectionAsync(const DescribeDatasourceConnectionRequest& request, const DescribeDatasourceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasourceConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeDatasourceConnectionOutcomeCallable DlcClient::DescribeDatasourceConnectionCallable(const DescribeDatasourceConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasourceConnectionOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasourceConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeEngineUsageInfoOutcome DlcClient::DescribeEngineUsageInfo(const DescribeEngineUsageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEngineUsageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEngineUsageInfoResponse rsp = DescribeEngineUsageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEngineUsageInfoOutcome(rsp);
        else
            return DescribeEngineUsageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEngineUsageInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeEngineUsageInfoAsync(const DescribeEngineUsageInfoRequest& request, const DescribeEngineUsageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEngineUsageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeEngineUsageInfoOutcomeCallable DlcClient::DescribeEngineUsageInfoCallable(const DescribeEngineUsageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEngineUsageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeEngineUsageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeForbiddenTableProOutcome DlcClient::DescribeForbiddenTablePro(const DescribeForbiddenTableProRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForbiddenTablePro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForbiddenTableProResponse rsp = DescribeForbiddenTableProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForbiddenTableProOutcome(rsp);
        else
            return DescribeForbiddenTableProOutcome(o.GetError());
    }
    else
    {
        return DescribeForbiddenTableProOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeForbiddenTableProAsync(const DescribeForbiddenTableProRequest& request, const DescribeForbiddenTableProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeForbiddenTablePro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeForbiddenTableProOutcomeCallable DlcClient::DescribeForbiddenTableProCallable(const DescribeForbiddenTableProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeForbiddenTableProOutcome()>>(
        [this, request]()
        {
            return this->DescribeForbiddenTablePro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeLakeFsDirSummaryOutcome DlcClient::DescribeLakeFsDirSummary(const DescribeLakeFsDirSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsDirSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsDirSummaryResponse rsp = DescribeLakeFsDirSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsDirSummaryOutcome(rsp);
        else
            return DescribeLakeFsDirSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsDirSummaryOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsDirSummaryAsync(const DescribeLakeFsDirSummaryRequest& request, const DescribeLakeFsDirSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLakeFsDirSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeLakeFsDirSummaryOutcomeCallable DlcClient::DescribeLakeFsDirSummaryCallable(const DescribeLakeFsDirSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLakeFsDirSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeLakeFsDirSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeLakeFsInfoOutcome DlcClient::DescribeLakeFsInfo(const DescribeLakeFsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsInfoResponse rsp = DescribeLakeFsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsInfoOutcome(rsp);
        else
            return DescribeLakeFsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsInfoAsync(const DescribeLakeFsInfoRequest& request, const DescribeLakeFsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLakeFsInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeLakeFsInfoOutcomeCallable DlcClient::DescribeLakeFsInfoCallable(const DescribeLakeFsInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLakeFsInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLakeFsInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeLakeFsTaskResultOutcome DlcClient::DescribeLakeFsTaskResult(const DescribeLakeFsTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLakeFsTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLakeFsTaskResultResponse rsp = DescribeLakeFsTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLakeFsTaskResultOutcome(rsp);
        else
            return DescribeLakeFsTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeLakeFsTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeLakeFsTaskResultAsync(const DescribeLakeFsTaskResultRequest& request, const DescribeLakeFsTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLakeFsTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeLakeFsTaskResultOutcomeCallable DlcClient::DescribeLakeFsTaskResultCallable(const DescribeLakeFsTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLakeFsTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeLakeFsTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionOutcome DlcClient::DescribeNotebookSession(const DescribeNotebookSessionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionResponse rsp = DescribeNotebookSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionOutcome(rsp);
        else
            return DescribeNotebookSessionOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionAsync(const DescribeNotebookSessionRequest& request, const DescribeNotebookSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionOutcomeCallable DlcClient::DescribeNotebookSessionCallable(const DescribeNotebookSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionLogOutcome DlcClient::DescribeNotebookSessionLog(const DescribeNotebookSessionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionLogResponse rsp = DescribeNotebookSessionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionLogOutcome(rsp);
        else
            return DescribeNotebookSessionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionLogAsync(const DescribeNotebookSessionLogRequest& request, const DescribeNotebookSessionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSessionLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionLogOutcomeCallable DlcClient::DescribeNotebookSessionLogCallable(const DescribeNotebookSessionLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSessionLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionStatementOutcome DlcClient::DescribeNotebookSessionStatement(const DescribeNotebookSessionStatementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementResponse rsp = DescribeNotebookSessionStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementOutcome(rsp);
        else
            return DescribeNotebookSessionStatementOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementAsync(const DescribeNotebookSessionStatementRequest& request, const DescribeNotebookSessionStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSessionStatement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionStatementOutcomeCallable DlcClient::DescribeNotebookSessionStatementCallable(const DescribeNotebookSessionStatementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionStatementOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSessionStatement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionStatementSqlResultOutcome DlcClient::DescribeNotebookSessionStatementSqlResult(const DescribeNotebookSessionStatementSqlResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatementSqlResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementSqlResultResponse rsp = DescribeNotebookSessionStatementSqlResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementSqlResultOutcome(rsp);
        else
            return DescribeNotebookSessionStatementSqlResultOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementSqlResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementSqlResultAsync(const DescribeNotebookSessionStatementSqlResultRequest& request, const DescribeNotebookSessionStatementSqlResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSessionStatementSqlResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionStatementSqlResultOutcomeCallable DlcClient::DescribeNotebookSessionStatementSqlResultCallable(const DescribeNotebookSessionStatementSqlResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionStatementSqlResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSessionStatementSqlResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionStatementsOutcome DlcClient::DescribeNotebookSessionStatements(const DescribeNotebookSessionStatementsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessionStatements");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionStatementsResponse rsp = DescribeNotebookSessionStatementsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionStatementsOutcome(rsp);
        else
            return DescribeNotebookSessionStatementsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionStatementsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionStatementsAsync(const DescribeNotebookSessionStatementsRequest& request, const DescribeNotebookSessionStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSessionStatements(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionStatementsOutcomeCallable DlcClient::DescribeNotebookSessionStatementsCallable(const DescribeNotebookSessionStatementsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionStatementsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSessionStatements(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeNotebookSessionsOutcome DlcClient::DescribeNotebookSessions(const DescribeNotebookSessionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotebookSessions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotebookSessionsResponse rsp = DescribeNotebookSessionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotebookSessionsOutcome(rsp);
        else
            return DescribeNotebookSessionsOutcome(o.GetError());
    }
    else
    {
        return DescribeNotebookSessionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeNotebookSessionsAsync(const DescribeNotebookSessionsRequest& request, const DescribeNotebookSessionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNotebookSessions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeNotebookSessionsOutcomeCallable DlcClient::DescribeNotebookSessionsCallable(const DescribeNotebookSessionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNotebookSessionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeNotebookSessions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeOtherCHDFSBindingListOutcome DlcClient::DescribeOtherCHDFSBindingList(const DescribeOtherCHDFSBindingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtherCHDFSBindingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtherCHDFSBindingListResponse rsp = DescribeOtherCHDFSBindingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtherCHDFSBindingListOutcome(rsp);
        else
            return DescribeOtherCHDFSBindingListOutcome(o.GetError());
    }
    else
    {
        return DescribeOtherCHDFSBindingListOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeOtherCHDFSBindingListAsync(const DescribeOtherCHDFSBindingListRequest& request, const DescribeOtherCHDFSBindingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOtherCHDFSBindingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeOtherCHDFSBindingListOutcomeCallable DlcClient::DescribeOtherCHDFSBindingListCallable(const DescribeOtherCHDFSBindingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOtherCHDFSBindingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeOtherCHDFSBindingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeResultDownloadOutcome DlcClient::DescribeResultDownload(const DescribeResultDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResultDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResultDownloadResponse rsp = DescribeResultDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResultDownloadOutcome(rsp);
        else
            return DescribeResultDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeResultDownloadOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeResultDownloadAsync(const DescribeResultDownloadRequest& request, const DescribeResultDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResultDownload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeResultDownloadOutcomeCallable DlcClient::DescribeResultDownloadCallable(const DescribeResultDownloadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResultDownloadOutcome()>>(
        [this, request]()
        {
            return this->DescribeResultDownload(request);
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

DlcClient::DescribeSparkAppJobOutcome DlcClient::DescribeSparkAppJob(const DescribeSparkAppJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobResponse rsp = DescribeSparkAppJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobOutcome(rsp);
        else
            return DescribeSparkAppJobOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobAsync(const DescribeSparkAppJobRequest& request, const DescribeSparkAppJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppJobOutcomeCallable DlcClient::DescribeSparkAppJobCallable(const DescribeSparkAppJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkAppJobsOutcome DlcClient::DescribeSparkAppJobs(const DescribeSparkAppJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppJobsResponse rsp = DescribeSparkAppJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppJobsOutcome(rsp);
        else
            return DescribeSparkAppJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppJobsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppJobsAsync(const DescribeSparkAppJobsRequest& request, const DescribeSparkAppJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppJobsOutcomeCallable DlcClient::DescribeSparkAppJobsCallable(const DescribeSparkAppJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppJobsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkAppTasksOutcome DlcClient::DescribeSparkAppTasks(const DescribeSparkAppTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkAppTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkAppTasksResponse rsp = DescribeSparkAppTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkAppTasksOutcome(rsp);
        else
            return DescribeSparkAppTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkAppTasksOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkAppTasksAsync(const DescribeSparkAppTasksRequest& request, const DescribeSparkAppTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkAppTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkAppTasksOutcomeCallable DlcClient::DescribeSparkAppTasksCallable(const DescribeSparkAppTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkAppTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkAppTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkSessionBatchSQLOutcome DlcClient::DescribeSparkSessionBatchSQL(const DescribeSparkSessionBatchSQLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSQL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSQLResponse rsp = DescribeSparkSessionBatchSQLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSQLOutcome(rsp);
        else
            return DescribeSparkSessionBatchSQLOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSQLOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSQLAsync(const DescribeSparkSessionBatchSQLRequest& request, const DescribeSparkSessionBatchSQLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkSessionBatchSQL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkSessionBatchSQLOutcomeCallable DlcClient::DescribeSparkSessionBatchSQLCallable(const DescribeSparkSessionBatchSQLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkSessionBatchSQLOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkSessionBatchSQL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkSessionBatchSQLCostOutcome DlcClient::DescribeSparkSessionBatchSQLCost(const DescribeSparkSessionBatchSQLCostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSQLCost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSQLCostResponse rsp = DescribeSparkSessionBatchSQLCostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSQLCostOutcome(rsp);
        else
            return DescribeSparkSessionBatchSQLCostOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSQLCostOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSQLCostAsync(const DescribeSparkSessionBatchSQLCostRequest& request, const DescribeSparkSessionBatchSQLCostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkSessionBatchSQLCost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkSessionBatchSQLCostOutcomeCallable DlcClient::DescribeSparkSessionBatchSQLCostCallable(const DescribeSparkSessionBatchSQLCostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkSessionBatchSQLCostOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkSessionBatchSQLCost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcome DlcClient::DescribeSparkSessionBatchSqlLog(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkSessionBatchSqlLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkSessionBatchSqlLogResponse rsp = DescribeSparkSessionBatchSqlLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkSessionBatchSqlLogOutcome(rsp);
        else
            return DescribeSparkSessionBatchSqlLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkSessionBatchSqlLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSparkSessionBatchSqlLogAsync(const DescribeSparkSessionBatchSqlLogRequest& request, const DescribeSparkSessionBatchSqlLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkSessionBatchSqlLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSparkSessionBatchSqlLogOutcomeCallable DlcClient::DescribeSparkSessionBatchSqlLogCallable(const DescribeSparkSessionBatchSqlLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkSessionBatchSqlLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkSessionBatchSqlLog(request);
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

DlcClient::DescribeSubUserAccessPolicyOutcome DlcClient::DescribeSubUserAccessPolicy(const DescribeSubUserAccessPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubUserAccessPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubUserAccessPolicyResponse rsp = DescribeSubUserAccessPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubUserAccessPolicyOutcome(rsp);
        else
            return DescribeSubUserAccessPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSubUserAccessPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeSubUserAccessPolicyAsync(const DescribeSubUserAccessPolicyRequest& request, const DescribeSubUserAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubUserAccessPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeSubUserAccessPolicyOutcomeCallable DlcClient::DescribeSubUserAccessPolicyCallable(const DescribeSubUserAccessPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubUserAccessPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubUserAccessPolicy(request);
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

DlcClient::DescribeTablePartitionsOutcome DlcClient::DescribeTablePartitions(const DescribeTablePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablePartitionsResponse rsp = DescribeTablePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablePartitionsOutcome(rsp);
        else
            return DescribeTablePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTablePartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablePartitionsAsync(const DescribeTablePartitionsRequest& request, const DescribeTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablePartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTablePartitionsOutcomeCallable DlcClient::DescribeTablePartitionsCallable(const DescribeTablePartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablePartitionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablePartitions(request);
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

DlcClient::DescribeTablesNameOutcome DlcClient::DescribeTablesName(const DescribeTablesNameRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTablesName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTablesNameResponse rsp = DescribeTablesNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTablesNameOutcome(rsp);
        else
            return DescribeTablesNameOutcome(o.GetError());
    }
    else
    {
        return DescribeTablesNameOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTablesNameAsync(const DescribeTablesNameRequest& request, const DescribeTablesNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTablesName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTablesNameOutcomeCallable DlcClient::DescribeTablesNameCallable(const DescribeTablesNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTablesNameOutcome()>>(
        [this, request]()
        {
            return this->DescribeTablesName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTaskLogOutcome DlcClient::DescribeTaskLog(const DescribeTaskLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogResponse rsp = DescribeTaskLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogOutcome(rsp);
        else
            return DescribeTaskLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskLogAsync(const DescribeTaskLogRequest& request, const DescribeTaskLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTaskLogOutcomeCallable DlcClient::DescribeTaskLogCallable(const DescribeTaskLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTaskMonitorInfosOutcome DlcClient::DescribeTaskMonitorInfos(const DescribeTaskMonitorInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskMonitorInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskMonitorInfosResponse rsp = DescribeTaskMonitorInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskMonitorInfosOutcome(rsp);
        else
            return DescribeTaskMonitorInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskMonitorInfosOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskMonitorInfosAsync(const DescribeTaskMonitorInfosRequest& request, const DescribeTaskMonitorInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskMonitorInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTaskMonitorInfosOutcomeCallable DlcClient::DescribeTaskMonitorInfosCallable(const DescribeTaskMonitorInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskMonitorInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskMonitorInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTaskResultOutcome DlcClient::DescribeTaskResult(const DescribeTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultResponse rsp = DescribeTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultOutcome(rsp);
        else
            return DescribeTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTaskResultOutcomeCallable DlcClient::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskResult(request);
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

DlcClient::DescribeTasksAnalysisOutcome DlcClient::DescribeTasksAnalysis(const DescribeTasksAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksAnalysisResponse rsp = DescribeTasksAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksAnalysisOutcome(rsp);
        else
            return DescribeTasksAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksAnalysisOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksAnalysisAsync(const DescribeTasksAnalysisRequest& request, const DescribeTasksAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksAnalysisOutcomeCallable DlcClient::DescribeTasksAnalysisCallable(const DescribeTasksAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksAnalysisOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTasksCostInfoOutcome DlcClient::DescribeTasksCostInfo(const DescribeTasksCostInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksCostInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksCostInfoResponse rsp = DescribeTasksCostInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksCostInfoOutcome(rsp);
        else
            return DescribeTasksCostInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksCostInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksCostInfoAsync(const DescribeTasksCostInfoRequest& request, const DescribeTasksCostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksCostInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksCostInfoOutcomeCallable DlcClient::DescribeTasksCostInfoCallable(const DescribeTasksCostInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksCostInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksCostInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeTasksOverviewOutcome DlcClient::DescribeTasksOverview(const DescribeTasksOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasksOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksOverviewResponse rsp = DescribeTasksOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOverviewOutcome(rsp);
        else
            return DescribeTasksOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOverviewOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeTasksOverviewAsync(const DescribeTasksOverviewRequest& request, const DescribeTasksOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasksOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeTasksOverviewOutcomeCallable DlcClient::DescribeTasksOverviewCallable(const DescribeTasksOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasksOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeThirdPartyAccessUserOutcome DlcClient::DescribeThirdPartyAccessUser(const DescribeThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeThirdPartyAccessUserResponse rsp = DescribeThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeThirdPartyAccessUserOutcome(rsp);
        else
            return DescribeThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return DescribeThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeThirdPartyAccessUserAsync(const DescribeThirdPartyAccessUserRequest& request, const DescribeThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeThirdPartyAccessUserOutcomeCallable DlcClient::DescribeThirdPartyAccessUserCallable(const DescribeThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeThirdPartyAccessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUpdatableDataEnginesOutcome DlcClient::DescribeUpdatableDataEngines(const DescribeUpdatableDataEnginesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpdatableDataEngines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpdatableDataEnginesResponse rsp = DescribeUpdatableDataEnginesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpdatableDataEnginesOutcome(rsp);
        else
            return DescribeUpdatableDataEnginesOutcome(o.GetError());
    }
    else
    {
        return DescribeUpdatableDataEnginesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUpdatableDataEnginesAsync(const DescribeUpdatableDataEnginesRequest& request, const DescribeUpdatableDataEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUpdatableDataEngines(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUpdatableDataEnginesOutcomeCallable DlcClient::DescribeUpdatableDataEnginesCallable(const DescribeUpdatableDataEnginesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUpdatableDataEnginesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUpdatableDataEngines(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserDataEngineConfigOutcome DlcClient::DescribeUserDataEngineConfig(const DescribeUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDataEngineConfigResponse rsp = DescribeUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDataEngineConfigOutcome(rsp);
        else
            return DescribeUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserDataEngineConfigAsync(const DescribeUserDataEngineConfigRequest& request, const DescribeUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserDataEngineConfigOutcomeCallable DlcClient::DescribeUserDataEngineConfigCallable(const DescribeUserDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserInfoOutcome DlcClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserInfoOutcomeCallable DlcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserRolesOutcome DlcClient::DescribeUserRoles(const DescribeUserRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRolesResponse rsp = DescribeUserRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRolesOutcome(rsp);
        else
            return DescribeUserRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRolesOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserRolesAsync(const DescribeUserRolesRequest& request, const DescribeUserRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserRolesOutcomeCallable DlcClient::DescribeUserRolesCallable(const DescribeUserRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DescribeUserTypeOutcome DlcClient::DescribeUserType(const DescribeUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserTypeResponse rsp = DescribeUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserTypeOutcome(rsp);
        else
            return DescribeUserTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeUserTypeAsync(const DescribeUserTypeRequest& request, const DescribeUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeUserTypeOutcomeCallable DlcClient::DescribeUserTypeCallable(const DescribeUserTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserType(request);
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

DlcClient::DescribeWorkGroupInfoOutcome DlcClient::DescribeWorkGroupInfo(const DescribeWorkGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkGroupInfoResponse rsp = DescribeWorkGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkGroupInfoOutcome(rsp);
        else
            return DescribeWorkGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkGroupInfoOutcome(outcome.GetError());
    }
}

void DlcClient::DescribeWorkGroupInfoAsync(const DescribeWorkGroupInfoRequest& request, const DescribeWorkGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DescribeWorkGroupInfoOutcomeCallable DlcClient::DescribeWorkGroupInfoCallable(const DescribeWorkGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkGroupInfo(request);
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

DlcClient::DropDMSDatabaseOutcome DlcClient::DropDMSDatabase(const DropDMSDatabaseRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSDatabase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSDatabaseResponse rsp = DropDMSDatabaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSDatabaseOutcome(rsp);
        else
            return DropDMSDatabaseOutcome(o.GetError());
    }
    else
    {
        return DropDMSDatabaseOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSDatabaseAsync(const DropDMSDatabaseRequest& request, const DropDMSDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDMSDatabase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDMSDatabaseOutcomeCallable DlcClient::DropDMSDatabaseCallable(const DropDMSDatabaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDMSDatabaseOutcome()>>(
        [this, request]()
        {
            return this->DropDMSDatabase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DropDMSPartitionsOutcome DlcClient::DropDMSPartitions(const DropDMSPartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSPartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSPartitionsResponse rsp = DropDMSPartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSPartitionsOutcome(rsp);
        else
            return DropDMSPartitionsOutcome(o.GetError());
    }
    else
    {
        return DropDMSPartitionsOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSPartitionsAsync(const DropDMSPartitionsRequest& request, const DropDMSPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDMSPartitions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDMSPartitionsOutcomeCallable DlcClient::DropDMSPartitionsCallable(const DropDMSPartitionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDMSPartitionsOutcome()>>(
        [this, request]()
        {
            return this->DropDMSPartitions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::DropDMSTableOutcome DlcClient::DropDMSTable(const DropDMSTableRequest &request)
{
    auto outcome = MakeRequest(request, "DropDMSTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropDMSTableResponse rsp = DropDMSTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropDMSTableOutcome(rsp);
        else
            return DropDMSTableOutcome(o.GetError());
    }
    else
    {
        return DropDMSTableOutcome(outcome.GetError());
    }
}

void DlcClient::DropDMSTableAsync(const DropDMSTableRequest& request, const DropDMSTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DropDMSTable(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::DropDMSTableOutcomeCallable DlcClient::DropDMSTableCallable(const DropDMSTableRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DropDMSTableOutcome()>>(
        [this, request]()
        {
            return this->DropDMSTable(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::GenerateCreateMangedTableSqlOutcome DlcClient::GenerateCreateMangedTableSql(const GenerateCreateMangedTableSqlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateCreateMangedTableSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateCreateMangedTableSqlResponse rsp = GenerateCreateMangedTableSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateCreateMangedTableSqlOutcome(rsp);
        else
            return GenerateCreateMangedTableSqlOutcome(o.GetError());
    }
    else
    {
        return GenerateCreateMangedTableSqlOutcome(outcome.GetError());
    }
}

void DlcClient::GenerateCreateMangedTableSqlAsync(const GenerateCreateMangedTableSqlRequest& request, const GenerateCreateMangedTableSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateCreateMangedTableSql(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GenerateCreateMangedTableSqlOutcomeCallable DlcClient::GenerateCreateMangedTableSqlCallable(const GenerateCreateMangedTableSqlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateCreateMangedTableSqlOutcome()>>(
        [this, request]()
        {
            return this->GenerateCreateMangedTableSql(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::GetOptimizerPolicyOutcome DlcClient::GetOptimizerPolicy(const GetOptimizerPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "GetOptimizerPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOptimizerPolicyResponse rsp = GetOptimizerPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOptimizerPolicyOutcome(rsp);
        else
            return GetOptimizerPolicyOutcome(o.GetError());
    }
    else
    {
        return GetOptimizerPolicyOutcome(outcome.GetError());
    }
}

void DlcClient::GetOptimizerPolicyAsync(const GetOptimizerPolicyRequest& request, const GetOptimizerPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetOptimizerPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GetOptimizerPolicyOutcomeCallable DlcClient::GetOptimizerPolicyCallable(const GetOptimizerPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetOptimizerPolicyOutcome()>>(
        [this, request]()
        {
            return this->GetOptimizerPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::GrantDLCCatalogAccessOutcome DlcClient::GrantDLCCatalogAccess(const GrantDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "GrantDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GrantDLCCatalogAccessResponse rsp = GrantDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GrantDLCCatalogAccessOutcome(rsp);
        else
            return GrantDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return GrantDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::GrantDLCCatalogAccessAsync(const GrantDLCCatalogAccessRequest& request, const GrantDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GrantDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::GrantDLCCatalogAccessOutcomeCallable DlcClient::GrantDLCCatalogAccessCallable(const GrantDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GrantDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->GrantDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ListTaskJobLogDetailOutcome DlcClient::ListTaskJobLogDetail(const ListTaskJobLogDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskJobLogDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskJobLogDetailResponse rsp = ListTaskJobLogDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskJobLogDetailOutcome(rsp);
        else
            return ListTaskJobLogDetailOutcome(o.GetError());
    }
    else
    {
        return ListTaskJobLogDetailOutcome(outcome.GetError());
    }
}

void DlcClient::ListTaskJobLogDetailAsync(const ListTaskJobLogDetailRequest& request, const ListTaskJobLogDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTaskJobLogDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ListTaskJobLogDetailOutcomeCallable DlcClient::ListTaskJobLogDetailCallable(const ListTaskJobLogDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTaskJobLogDetailOutcome()>>(
        [this, request]()
        {
            return this->ListTaskJobLogDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ListTaskJobLogNameOutcome DlcClient::ListTaskJobLogName(const ListTaskJobLogNameRequest &request)
{
    auto outcome = MakeRequest(request, "ListTaskJobLogName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTaskJobLogNameResponse rsp = ListTaskJobLogNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTaskJobLogNameOutcome(rsp);
        else
            return ListTaskJobLogNameOutcome(o.GetError());
    }
    else
    {
        return ListTaskJobLogNameOutcome(outcome.GetError());
    }
}

void DlcClient::ListTaskJobLogNameAsync(const ListTaskJobLogNameRequest& request, const ListTaskJobLogNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTaskJobLogName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ListTaskJobLogNameOutcomeCallable DlcClient::ListTaskJobLogNameCallable(const ListTaskJobLogNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTaskJobLogNameOutcome()>>(
        [this, request]()
        {
            return this->ListTaskJobLogName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::LockMetaDataOutcome DlcClient::LockMetaData(const LockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "LockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LockMetaDataResponse rsp = LockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LockMetaDataOutcome(rsp);
        else
            return LockMetaDataOutcome(o.GetError());
    }
    else
    {
        return LockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::LockMetaDataAsync(const LockMetaDataRequest& request, const LockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LockMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::LockMetaDataOutcomeCallable DlcClient::LockMetaDataCallable(const LockMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LockMetaDataOutcome()>>(
        [this, request]()
        {
            return this->LockMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyAdvancedStoreLocationOutcome DlcClient::ModifyAdvancedStoreLocation(const ModifyAdvancedStoreLocationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAdvancedStoreLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAdvancedStoreLocationResponse rsp = ModifyAdvancedStoreLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAdvancedStoreLocationOutcome(rsp);
        else
            return ModifyAdvancedStoreLocationOutcome(o.GetError());
    }
    else
    {
        return ModifyAdvancedStoreLocationOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyAdvancedStoreLocationAsync(const ModifyAdvancedStoreLocationRequest& request, const ModifyAdvancedStoreLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAdvancedStoreLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyAdvancedStoreLocationOutcomeCallable DlcClient::ModifyAdvancedStoreLocationCallable(const ModifyAdvancedStoreLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAdvancedStoreLocationOutcome()>>(
        [this, request]()
        {
            return this->ModifyAdvancedStoreLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyDataEngineDescriptionOutcome DlcClient::ModifyDataEngineDescription(const ModifyDataEngineDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataEngineDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataEngineDescriptionResponse rsp = ModifyDataEngineDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataEngineDescriptionOutcome(rsp);
        else
            return ModifyDataEngineDescriptionOutcome(o.GetError());
    }
    else
    {
        return ModifyDataEngineDescriptionOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyDataEngineDescriptionAsync(const ModifyDataEngineDescriptionRequest& request, const ModifyDataEngineDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDataEngineDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyDataEngineDescriptionOutcomeCallable DlcClient::ModifyDataEngineDescriptionCallable(const ModifyDataEngineDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDataEngineDescriptionOutcome()>>(
        [this, request]()
        {
            return this->ModifyDataEngineDescription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifyGovernEventRuleOutcome DlcClient::ModifyGovernEventRule(const ModifyGovernEventRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGovernEventRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGovernEventRuleResponse rsp = ModifyGovernEventRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGovernEventRuleOutcome(rsp);
        else
            return ModifyGovernEventRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGovernEventRuleOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyGovernEventRuleAsync(const ModifyGovernEventRuleRequest& request, const ModifyGovernEventRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGovernEventRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyGovernEventRuleOutcomeCallable DlcClient::ModifyGovernEventRuleCallable(const ModifyGovernEventRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGovernEventRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyGovernEventRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifySparkAppOutcome DlcClient::ModifySparkApp(const ModifySparkAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppResponse rsp = ModifySparkAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppOutcome(rsp);
        else
            return ModifySparkAppOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppAsync(const ModifySparkAppRequest& request, const ModifySparkAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySparkApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifySparkAppOutcomeCallable DlcClient::ModifySparkAppCallable(const ModifySparkAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySparkAppOutcome()>>(
        [this, request]()
        {
            return this->ModifySparkApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ModifySparkAppBatchOutcome DlcClient::ModifySparkAppBatch(const ModifySparkAppBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySparkAppBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySparkAppBatchResponse rsp = ModifySparkAppBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySparkAppBatchOutcome(rsp);
        else
            return ModifySparkAppBatchOutcome(o.GetError());
    }
    else
    {
        return ModifySparkAppBatchOutcome(outcome.GetError());
    }
}

void DlcClient::ModifySparkAppBatchAsync(const ModifySparkAppBatchRequest& request, const ModifySparkAppBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySparkAppBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifySparkAppBatchOutcomeCallable DlcClient::ModifySparkAppBatchCallable(const ModifySparkAppBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySparkAppBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifySparkAppBatch(request);
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

DlcClient::ModifyUserTypeOutcome DlcClient::ModifyUserType(const ModifyUserTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserTypeResponse rsp = ModifyUserTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserTypeOutcome(rsp);
        else
            return ModifyUserTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyUserTypeOutcome(outcome.GetError());
    }
}

void DlcClient::ModifyUserTypeAsync(const ModifyUserTypeRequest& request, const ModifyUserTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ModifyUserTypeOutcomeCallable DlcClient::ModifyUserTypeCallable(const ModifyUserTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserType(request);
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

DlcClient::QueryInternalTableWarehouseOutcome DlcClient::QueryInternalTableWarehouse(const QueryInternalTableWarehouseRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInternalTableWarehouse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInternalTableWarehouseResponse rsp = QueryInternalTableWarehouseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInternalTableWarehouseOutcome(rsp);
        else
            return QueryInternalTableWarehouseOutcome(o.GetError());
    }
    else
    {
        return QueryInternalTableWarehouseOutcome(outcome.GetError());
    }
}

void DlcClient::QueryInternalTableWarehouseAsync(const QueryInternalTableWarehouseRequest& request, const QueryInternalTableWarehouseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryInternalTableWarehouse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::QueryInternalTableWarehouseOutcomeCallable DlcClient::QueryInternalTableWarehouseCallable(const QueryInternalTableWarehouseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryInternalTableWarehouseOutcome()>>(
        [this, request]()
        {
            return this->QueryInternalTableWarehouse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::QueryResultOutcome DlcClient::QueryResult(const QueryResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResultResponse rsp = QueryResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryResultOutcome(rsp);
        else
            return QueryResultOutcome(o.GetError());
    }
    else
    {
        return QueryResultOutcome(outcome.GetError());
    }
}

void DlcClient::QueryResultAsync(const QueryResultRequest& request, const QueryResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::QueryResultOutcomeCallable DlcClient::QueryResultCallable(const QueryResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryResultOutcome()>>(
        [this, request]()
        {
            return this->QueryResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::QueryTaskCostDetailOutcome DlcClient::QueryTaskCostDetail(const QueryTaskCostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTaskCostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTaskCostDetailResponse rsp = QueryTaskCostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTaskCostDetailOutcome(rsp);
        else
            return QueryTaskCostDetailOutcome(o.GetError());
    }
    else
    {
        return QueryTaskCostDetailOutcome(outcome.GetError());
    }
}

void DlcClient::QueryTaskCostDetailAsync(const QueryTaskCostDetailRequest& request, const QueryTaskCostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTaskCostDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::QueryTaskCostDetailOutcomeCallable DlcClient::QueryTaskCostDetailCallable(const QueryTaskCostDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTaskCostDetailOutcome()>>(
        [this, request]()
        {
            return this->QueryTaskCostDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RegisterThirdPartyAccessUserOutcome DlcClient::RegisterThirdPartyAccessUser(const RegisterThirdPartyAccessUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterThirdPartyAccessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterThirdPartyAccessUserResponse rsp = RegisterThirdPartyAccessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterThirdPartyAccessUserOutcome(rsp);
        else
            return RegisterThirdPartyAccessUserOutcome(o.GetError());
    }
    else
    {
        return RegisterThirdPartyAccessUserOutcome(outcome.GetError());
    }
}

void DlcClient::RegisterThirdPartyAccessUserAsync(const RegisterThirdPartyAccessUserRequest& request, const RegisterThirdPartyAccessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterThirdPartyAccessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RegisterThirdPartyAccessUserOutcomeCallable DlcClient::RegisterThirdPartyAccessUserCallable(const RegisterThirdPartyAccessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterThirdPartyAccessUserOutcome()>>(
        [this, request]()
        {
            return this->RegisterThirdPartyAccessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RenewDataEngineOutcome DlcClient::RenewDataEngine(const RenewDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDataEngineResponse rsp = RenewDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDataEngineOutcome(rsp);
        else
            return RenewDataEngineOutcome(o.GetError());
    }
    else
    {
        return RenewDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RenewDataEngineAsync(const RenewDataEngineRequest& request, const RenewDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RenewDataEngineOutcomeCallable DlcClient::RenewDataEngineCallable(const RenewDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDataEngineOutcome()>>(
        [this, request]()
        {
            return this->RenewDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::ReportHeartbeatMetaDataOutcome DlcClient::ReportHeartbeatMetaData(const ReportHeartbeatMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "ReportHeartbeatMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportHeartbeatMetaDataResponse rsp = ReportHeartbeatMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportHeartbeatMetaDataOutcome(rsp);
        else
            return ReportHeartbeatMetaDataOutcome(o.GetError());
    }
    else
    {
        return ReportHeartbeatMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::ReportHeartbeatMetaDataAsync(const ReportHeartbeatMetaDataRequest& request, const ReportHeartbeatMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReportHeartbeatMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::ReportHeartbeatMetaDataOutcomeCallable DlcClient::ReportHeartbeatMetaDataCallable(const ReportHeartbeatMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReportHeartbeatMetaDataOutcome()>>(
        [this, request]()
        {
            return this->ReportHeartbeatMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RestartDataEngineOutcome DlcClient::RestartDataEngine(const RestartDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "RestartDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartDataEngineResponse rsp = RestartDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartDataEngineOutcome(rsp);
        else
            return RestartDataEngineOutcome(o.GetError());
    }
    else
    {
        return RestartDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::RestartDataEngineAsync(const RestartDataEngineRequest& request, const RestartDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RestartDataEngineOutcomeCallable DlcClient::RestartDataEngineCallable(const RestartDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartDataEngineOutcome()>>(
        [this, request]()
        {
            return this->RestartDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RevokeDLCCatalogAccessOutcome DlcClient::RevokeDLCCatalogAccess(const RevokeDLCCatalogAccessRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeDLCCatalogAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeDLCCatalogAccessResponse rsp = RevokeDLCCatalogAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeDLCCatalogAccessOutcome(rsp);
        else
            return RevokeDLCCatalogAccessOutcome(o.GetError());
    }
    else
    {
        return RevokeDLCCatalogAccessOutcome(outcome.GetError());
    }
}

void DlcClient::RevokeDLCCatalogAccessAsync(const RevokeDLCCatalogAccessRequest& request, const RevokeDLCCatalogAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeDLCCatalogAccess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RevokeDLCCatalogAccessOutcomeCallable DlcClient::RevokeDLCCatalogAccessCallable(const RevokeDLCCatalogAccessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeDLCCatalogAccessOutcome()>>(
        [this, request]()
        {
            return this->RevokeDLCCatalogAccess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::RollbackDataEngineImageOutcome DlcClient::RollbackDataEngineImage(const RollbackDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackDataEngineImageResponse rsp = RollbackDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackDataEngineImageOutcome(rsp);
        else
            return RollbackDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return RollbackDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::RollbackDataEngineImageAsync(const RollbackDataEngineImageRequest& request, const RollbackDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::RollbackDataEngineImageOutcomeCallable DlcClient::RollbackDataEngineImageCallable(const RollbackDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->RollbackDataEngineImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::SuspendResumeDataEngineOutcome DlcClient::SuspendResumeDataEngine(const SuspendResumeDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SuspendResumeDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SuspendResumeDataEngineResponse rsp = SuspendResumeDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SuspendResumeDataEngineOutcome(rsp);
        else
            return SuspendResumeDataEngineOutcome(o.GetError());
    }
    else
    {
        return SuspendResumeDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SuspendResumeDataEngineAsync(const SuspendResumeDataEngineRequest& request, const SuspendResumeDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SuspendResumeDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SuspendResumeDataEngineOutcomeCallable DlcClient::SuspendResumeDataEngineCallable(const SuspendResumeDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SuspendResumeDataEngineOutcome()>>(
        [this, request]()
        {
            return this->SuspendResumeDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::SwitchDataEngineOutcome DlcClient::SwitchDataEngine(const SwitchDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineResponse rsp = SwitchDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineOutcome(rsp);
        else
            return SwitchDataEngineOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineAsync(const SwitchDataEngineRequest& request, const SwitchDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SwitchDataEngineOutcomeCallable DlcClient::SwitchDataEngineCallable(const SwitchDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDataEngineOutcome()>>(
        [this, request]()
        {
            return this->SwitchDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::SwitchDataEngineImageOutcome DlcClient::SwitchDataEngineImage(const SwitchDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchDataEngineImageResponse rsp = SwitchDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchDataEngineImageOutcome(rsp);
        else
            return SwitchDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return SwitchDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::SwitchDataEngineImageAsync(const SwitchDataEngineImageRequest& request, const SwitchDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::SwitchDataEngineImageOutcomeCallable DlcClient::SwitchDataEngineImageCallable(const SwitchDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->SwitchDataEngineImage(request);
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

DlcClient::UnlockMetaDataOutcome DlcClient::UnlockMetaData(const UnlockMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "UnlockMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlockMetaDataResponse rsp = UnlockMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlockMetaDataOutcome(rsp);
        else
            return UnlockMetaDataOutcome(o.GetError());
    }
    else
    {
        return UnlockMetaDataOutcome(outcome.GetError());
    }
}

void DlcClient::UnlockMetaDataAsync(const UnlockMetaDataRequest& request, const UnlockMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnlockMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UnlockMetaDataOutcomeCallable DlcClient::UnlockMetaDataCallable(const UnlockMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnlockMetaDataOutcome()>>(
        [this, request]()
        {
            return this->UnlockMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateDataEngineOutcome DlcClient::UpdateDataEngine(const UpdateDataEngineRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineResponse rsp = UpdateDataEngineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineOutcome(rsp);
        else
            return UpdateDataEngineOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineAsync(const UpdateDataEngineRequest& request, const UpdateDataEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataEngine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateDataEngineOutcomeCallable DlcClient::UpdateDataEngineCallable(const UpdateDataEngineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataEngineOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataEngine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateDataEngineConfigOutcome DlcClient::UpdateDataEngineConfig(const UpdateDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDataEngineConfigResponse rsp = UpdateDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDataEngineConfigOutcome(rsp);
        else
            return UpdateDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateDataEngineConfigAsync(const UpdateDataEngineConfigRequest& request, const UpdateDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateDataEngineConfigOutcomeCallable DlcClient::UpdateDataEngineConfigCallable(const UpdateDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateRowFilterOutcome DlcClient::UpdateRowFilter(const UpdateRowFilterRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRowFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRowFilterResponse rsp = UpdateRowFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRowFilterOutcome(rsp);
        else
            return UpdateRowFilterOutcome(o.GetError());
    }
    else
    {
        return UpdateRowFilterOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateRowFilterAsync(const UpdateRowFilterRequest& request, const UpdateRowFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRowFilter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateRowFilterOutcomeCallable DlcClient::UpdateRowFilterCallable(const UpdateRowFilterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRowFilterOutcome()>>(
        [this, request]()
        {
            return this->UpdateRowFilter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpdateUserDataEngineConfigOutcome DlcClient::UpdateUserDataEngineConfig(const UpdateUserDataEngineConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserDataEngineConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserDataEngineConfigResponse rsp = UpdateUserDataEngineConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserDataEngineConfigOutcome(rsp);
        else
            return UpdateUserDataEngineConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateUserDataEngineConfigOutcome(outcome.GetError());
    }
}

void DlcClient::UpdateUserDataEngineConfigAsync(const UpdateUserDataEngineConfigRequest& request, const UpdateUserDataEngineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserDataEngineConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpdateUserDataEngineConfigOutcomeCallable DlcClient::UpdateUserDataEngineConfigCallable(const UpdateUserDataEngineConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserDataEngineConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserDataEngineConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DlcClient::UpgradeDataEngineImageOutcome DlcClient::UpgradeDataEngineImage(const UpgradeDataEngineImageRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDataEngineImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDataEngineImageResponse rsp = UpgradeDataEngineImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDataEngineImageOutcome(rsp);
        else
            return UpgradeDataEngineImageOutcome(o.GetError());
    }
    else
    {
        return UpgradeDataEngineImageOutcome(outcome.GetError());
    }
}

void DlcClient::UpgradeDataEngineImageAsync(const UpgradeDataEngineImageRequest& request, const UpgradeDataEngineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradeDataEngineImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DlcClient::UpgradeDataEngineImageOutcomeCallable DlcClient::UpgradeDataEngineImageCallable(const UpgradeDataEngineImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradeDataEngineImageOutcome()>>(
        [this, request]()
        {
            return this->UpgradeDataEngineImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

