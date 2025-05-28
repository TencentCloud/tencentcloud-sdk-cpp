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


EmrClient::AddMetricScaleStrategyOutcome EmrClient::AddMetricScaleStrategy(const AddMetricScaleStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "AddMetricScaleStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMetricScaleStrategyResponse rsp = AddMetricScaleStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMetricScaleStrategyOutcome(rsp);
        else
            return AddMetricScaleStrategyOutcome(o.GetError());
    }
    else
    {
        return AddMetricScaleStrategyOutcome(outcome.GetError());
    }
}

void EmrClient::AddMetricScaleStrategyAsync(const AddMetricScaleStrategyRequest& request, const AddMetricScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddMetricScaleStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddMetricScaleStrategyOutcomeCallable EmrClient::AddMetricScaleStrategyCallable(const AddMetricScaleStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddMetricScaleStrategyOutcome()>>(
        [this, request]()
        {
            return this->AddMetricScaleStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::AddNodeResourceConfigOutcome EmrClient::AddNodeResourceConfig(const AddNodeResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "AddNodeResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNodeResourceConfigResponse rsp = AddNodeResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNodeResourceConfigOutcome(rsp);
        else
            return AddNodeResourceConfigOutcome(o.GetError());
    }
    else
    {
        return AddNodeResourceConfigOutcome(outcome.GetError());
    }
}

void EmrClient::AddNodeResourceConfigAsync(const AddNodeResourceConfigRequest& request, const AddNodeResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNodeResourceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddNodeResourceConfigOutcomeCallable EmrClient::AddNodeResourceConfigCallable(const AddNodeResourceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNodeResourceConfigOutcome()>>(
        [this, request]()
        {
            return this->AddNodeResourceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::AddUsersForUserManagerOutcome EmrClient::AddUsersForUserManager(const AddUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "AddUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUsersForUserManagerResponse rsp = AddUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUsersForUserManagerOutcome(rsp);
        else
            return AddUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return AddUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::AddUsersForUserManagerAsync(const AddUsersForUserManagerRequest& request, const AddUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AddUsersForUserManagerOutcomeCallable EmrClient::AddUsersForUserManagerCallable(const AddUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->AddUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::AttachDisksOutcome EmrClient::AttachDisks(const AttachDisksRequest &request)
{
    auto outcome = MakeRequest(request, "AttachDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachDisksResponse rsp = AttachDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachDisksOutcome(rsp);
        else
            return AttachDisksOutcome(o.GetError());
    }
    else
    {
        return AttachDisksOutcome(outcome.GetError());
    }
}

void EmrClient::AttachDisksAsync(const AttachDisksRequest& request, const AttachDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::AttachDisksOutcomeCallable EmrClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachDisksOutcome()>>(
        [this, request]()
        {
            return this->AttachDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateCloudInstanceOutcome EmrClient::CreateCloudInstance(const CreateCloudInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudInstanceResponse rsp = CreateCloudInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudInstanceOutcome(rsp);
        else
            return CreateCloudInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateCloudInstanceAsync(const CreateCloudInstanceRequest& request, const CreateCloudInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateCloudInstanceOutcomeCallable EmrClient::CreateCloudInstanceCallable(const CreateCloudInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateClusterOutcome EmrClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void EmrClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateClusterOutcomeCallable EmrClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::CreateGroupsSTDOutcome EmrClient::CreateGroupsSTD(const CreateGroupsSTDRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupsSTD");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupsSTDResponse rsp = CreateGroupsSTDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupsSTDOutcome(rsp);
        else
            return CreateGroupsSTDOutcome(o.GetError());
    }
    else
    {
        return CreateGroupsSTDOutcome(outcome.GetError());
    }
}

void EmrClient::CreateGroupsSTDAsync(const CreateGroupsSTDRequest& request, const CreateGroupsSTDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroupsSTD(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateGroupsSTDOutcomeCallable EmrClient::CreateGroupsSTDCallable(const CreateGroupsSTDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupsSTDOutcome()>>(
        [this, request]()
        {
            return this->CreateGroupsSTD(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

EmrClient::CreateSLInstanceOutcome EmrClient::CreateSLInstance(const CreateSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSLInstanceResponse rsp = CreateSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSLInstanceOutcome(rsp);
        else
            return CreateSLInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::CreateSLInstanceAsync(const CreateSLInstanceRequest& request, const CreateSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::CreateSLInstanceOutcomeCallable EmrClient::CreateSLInstanceCallable(const CreateSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateSLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DeleteAutoScaleStrategyOutcome EmrClient::DeleteAutoScaleStrategy(const DeleteAutoScaleStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAutoScaleStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAutoScaleStrategyResponse rsp = DeleteAutoScaleStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAutoScaleStrategyOutcome(rsp);
        else
            return DeleteAutoScaleStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteAutoScaleStrategyOutcome(outcome.GetError());
    }
}

void EmrClient::DeleteAutoScaleStrategyAsync(const DeleteAutoScaleStrategyRequest& request, const DeleteAutoScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAutoScaleStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DeleteAutoScaleStrategyOutcomeCallable EmrClient::DeleteAutoScaleStrategyCallable(const DeleteAutoScaleStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAutoScaleStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAutoScaleStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DeleteGroupsSTDOutcome EmrClient::DeleteGroupsSTD(const DeleteGroupsSTDRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroupsSTD");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupsSTDResponse rsp = DeleteGroupsSTDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupsSTDOutcome(rsp);
        else
            return DeleteGroupsSTDOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupsSTDOutcome(outcome.GetError());
    }
}

void EmrClient::DeleteGroupsSTDAsync(const DeleteGroupsSTDRequest& request, const DeleteGroupsSTDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroupsSTD(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DeleteGroupsSTDOutcomeCallable EmrClient::DeleteGroupsSTDCallable(const DeleteGroupsSTDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupsSTDOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroupsSTD(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DeleteNodeResourceConfigOutcome EmrClient::DeleteNodeResourceConfig(const DeleteNodeResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodeResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodeResourceConfigResponse rsp = DeleteNodeResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodeResourceConfigOutcome(rsp);
        else
            return DeleteNodeResourceConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteNodeResourceConfigOutcome(outcome.GetError());
    }
}

void EmrClient::DeleteNodeResourceConfigAsync(const DeleteNodeResourceConfigRequest& request, const DeleteNodeResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNodeResourceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DeleteNodeResourceConfigOutcomeCallable EmrClient::DeleteNodeResourceConfigCallable(const DeleteNodeResourceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNodeResourceConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteNodeResourceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DeleteUserManagerUserListOutcome EmrClient::DeleteUserManagerUserList(const DeleteUserManagerUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserManagerUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserManagerUserListResponse rsp = DeleteUserManagerUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserManagerUserListOutcome(rsp);
        else
            return DeleteUserManagerUserListOutcome(o.GetError());
    }
    else
    {
        return DeleteUserManagerUserListOutcome(outcome.GetError());
    }
}

void EmrClient::DeleteUserManagerUserListAsync(const DeleteUserManagerUserListRequest& request, const DeleteUserManagerUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserManagerUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DeleteUserManagerUserListOutcomeCallable EmrClient::DeleteUserManagerUserListCallable(const DeleteUserManagerUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserManagerUserListOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserManagerUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DeployYarnConfOutcome EmrClient::DeployYarnConf(const DeployYarnConfRequest &request)
{
    auto outcome = MakeRequest(request, "DeployYarnConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployYarnConfResponse rsp = DeployYarnConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployYarnConfOutcome(rsp);
        else
            return DeployYarnConfOutcome(o.GetError());
    }
    else
    {
        return DeployYarnConfOutcome(outcome.GetError());
    }
}

void EmrClient::DeployYarnConfAsync(const DeployYarnConfRequest& request, const DeployYarnConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployYarnConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DeployYarnConfOutcomeCallable EmrClient::DeployYarnConfCallable(const DeployYarnConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployYarnConfOutcome()>>(
        [this, request]()
        {
            return this->DeployYarnConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeAutoScaleGroupGlobalConfOutcome EmrClient::DescribeAutoScaleGroupGlobalConf(const DescribeAutoScaleGroupGlobalConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScaleGroupGlobalConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScaleGroupGlobalConfResponse rsp = DescribeAutoScaleGroupGlobalConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScaleGroupGlobalConfOutcome(rsp);
        else
            return DescribeAutoScaleGroupGlobalConfOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScaleGroupGlobalConfOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeAutoScaleGroupGlobalConfAsync(const DescribeAutoScaleGroupGlobalConfRequest& request, const DescribeAutoScaleGroupGlobalConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScaleGroupGlobalConf(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeAutoScaleGroupGlobalConfOutcomeCallable EmrClient::DescribeAutoScaleGroupGlobalConfCallable(const DescribeAutoScaleGroupGlobalConfRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScaleGroupGlobalConfOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScaleGroupGlobalConf(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeAutoScaleRecordsOutcome EmrClient::DescribeAutoScaleRecords(const DescribeAutoScaleRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScaleRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScaleRecordsResponse rsp = DescribeAutoScaleRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScaleRecordsOutcome(rsp);
        else
            return DescribeAutoScaleRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScaleRecordsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeAutoScaleRecordsAsync(const DescribeAutoScaleRecordsRequest& request, const DescribeAutoScaleRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScaleRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeAutoScaleRecordsOutcomeCallable EmrClient::DescribeAutoScaleRecordsCallable(const DescribeAutoScaleRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScaleRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScaleRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeAutoScaleStrategiesOutcome EmrClient::DescribeAutoScaleStrategies(const DescribeAutoScaleStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScaleStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScaleStrategiesResponse rsp = DescribeAutoScaleStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScaleStrategiesOutcome(rsp);
        else
            return DescribeAutoScaleStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScaleStrategiesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeAutoScaleStrategiesAsync(const DescribeAutoScaleStrategiesRequest& request, const DescribeAutoScaleStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScaleStrategies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeAutoScaleStrategiesOutcomeCallable EmrClient::DescribeAutoScaleStrategiesCallable(const DescribeAutoScaleStrategiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScaleStrategiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScaleStrategies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeClusterFlowStatusDetailOutcome EmrClient::DescribeClusterFlowStatusDetail(const DescribeClusterFlowStatusDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterFlowStatusDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterFlowStatusDetailResponse rsp = DescribeClusterFlowStatusDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterFlowStatusDetailOutcome(rsp);
        else
            return DescribeClusterFlowStatusDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterFlowStatusDetailOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeClusterFlowStatusDetailAsync(const DescribeClusterFlowStatusDetailRequest& request, const DescribeClusterFlowStatusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterFlowStatusDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeClusterFlowStatusDetailOutcomeCallable EmrClient::DescribeClusterFlowStatusDetailCallable(const DescribeClusterFlowStatusDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterFlowStatusDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterFlowStatusDetail(request);
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

EmrClient::DescribeCvmQuotaOutcome EmrClient::DescribeCvmQuota(const DescribeCvmQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmQuotaResponse rsp = DescribeCvmQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmQuotaOutcome(rsp);
        else
            return DescribeCvmQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmQuotaOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeCvmQuotaAsync(const DescribeCvmQuotaRequest& request, const DescribeCvmQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCvmQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeCvmQuotaOutcomeCallable EmrClient::DescribeCvmQuotaCallable(const DescribeCvmQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCvmQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeCvmQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeDAGInfoOutcome EmrClient::DescribeDAGInfo(const DescribeDAGInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDAGInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDAGInfoResponse rsp = DescribeDAGInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDAGInfoOutcome(rsp);
        else
            return DescribeDAGInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDAGInfoOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeDAGInfoAsync(const DescribeDAGInfoRequest& request, const DescribeDAGInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDAGInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeDAGInfoOutcomeCallable EmrClient::DescribeDAGInfoCallable(const DescribeDAGInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDAGInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDAGInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeEmrApplicationStaticsOutcome EmrClient::DescribeEmrApplicationStatics(const DescribeEmrApplicationStaticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmrApplicationStatics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmrApplicationStaticsResponse rsp = DescribeEmrApplicationStaticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmrApplicationStaticsOutcome(rsp);
        else
            return DescribeEmrApplicationStaticsOutcome(o.GetError());
    }
    else
    {
        return DescribeEmrApplicationStaticsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeEmrApplicationStaticsAsync(const DescribeEmrApplicationStaticsRequest& request, const DescribeEmrApplicationStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmrApplicationStatics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeEmrApplicationStaticsOutcomeCallable EmrClient::DescribeEmrApplicationStaticsCallable(const DescribeEmrApplicationStaticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmrApplicationStaticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmrApplicationStatics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeEmrOverviewMetricsOutcome EmrClient::DescribeEmrOverviewMetrics(const DescribeEmrOverviewMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmrOverviewMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmrOverviewMetricsResponse rsp = DescribeEmrOverviewMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmrOverviewMetricsOutcome(rsp);
        else
            return DescribeEmrOverviewMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeEmrOverviewMetricsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeEmrOverviewMetricsAsync(const DescribeEmrOverviewMetricsRequest& request, const DescribeEmrOverviewMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmrOverviewMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeEmrOverviewMetricsOutcomeCallable EmrClient::DescribeEmrOverviewMetricsCallable(const DescribeEmrOverviewMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmrOverviewMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmrOverviewMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeGlobalConfigOutcome EmrClient::DescribeGlobalConfig(const DescribeGlobalConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalConfigResponse rsp = DescribeGlobalConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalConfigOutcome(rsp);
        else
            return DescribeGlobalConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalConfigOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeGlobalConfigAsync(const DescribeGlobalConfigRequest& request, const DescribeGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGlobalConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeGlobalConfigOutcomeCallable EmrClient::DescribeGlobalConfigCallable(const DescribeGlobalConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGlobalConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeGlobalConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeGroupsSTDOutcome EmrClient::DescribeGroupsSTD(const DescribeGroupsSTDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupsSTD");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsSTDResponse rsp = DescribeGroupsSTDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsSTDOutcome(rsp);
        else
            return DescribeGroupsSTDOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsSTDOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeGroupsSTDAsync(const DescribeGroupsSTDRequest& request, const DescribeGroupsSTDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupsSTD(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeGroupsSTDOutcomeCallable EmrClient::DescribeGroupsSTDCallable(const DescribeGroupsSTDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupsSTDOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupsSTD(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeHBaseTableOverviewOutcome EmrClient::DescribeHBaseTableOverview(const DescribeHBaseTableOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHBaseTableOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHBaseTableOverviewResponse rsp = DescribeHBaseTableOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHBaseTableOverviewOutcome(rsp);
        else
            return DescribeHBaseTableOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeHBaseTableOverviewOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeHBaseTableOverviewAsync(const DescribeHBaseTableOverviewRequest& request, const DescribeHBaseTableOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHBaseTableOverview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeHBaseTableOverviewOutcomeCallable EmrClient::DescribeHBaseTableOverviewCallable(const DescribeHBaseTableOverviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHBaseTableOverviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeHBaseTableOverview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeHDFSStorageInfoOutcome EmrClient::DescribeHDFSStorageInfo(const DescribeHDFSStorageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHDFSStorageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHDFSStorageInfoResponse rsp = DescribeHDFSStorageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHDFSStorageInfoOutcome(rsp);
        else
            return DescribeHDFSStorageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeHDFSStorageInfoOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeHDFSStorageInfoAsync(const DescribeHDFSStorageInfoRequest& request, const DescribeHDFSStorageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHDFSStorageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeHDFSStorageInfoOutcomeCallable EmrClient::DescribeHDFSStorageInfoCallable(const DescribeHDFSStorageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHDFSStorageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeHDFSStorageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeHiveQueriesOutcome EmrClient::DescribeHiveQueries(const DescribeHiveQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHiveQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHiveQueriesResponse rsp = DescribeHiveQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHiveQueriesOutcome(rsp);
        else
            return DescribeHiveQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeHiveQueriesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeHiveQueriesAsync(const DescribeHiveQueriesRequest& request, const DescribeHiveQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHiveQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeHiveQueriesOutcomeCallable EmrClient::DescribeHiveQueriesCallable(const DescribeHiveQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHiveQueriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeHiveQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeImpalaQueriesOutcome EmrClient::DescribeImpalaQueries(const DescribeImpalaQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImpalaQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImpalaQueriesResponse rsp = DescribeImpalaQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImpalaQueriesOutcome(rsp);
        else
            return DescribeImpalaQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeImpalaQueriesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeImpalaQueriesAsync(const DescribeImpalaQueriesRequest& request, const DescribeImpalaQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImpalaQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeImpalaQueriesOutcomeCallable EmrClient::DescribeImpalaQueriesCallable(const DescribeImpalaQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImpalaQueriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImpalaQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInsightListOutcome EmrClient::DescribeInsightList(const DescribeInsightListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInsightList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInsightListResponse rsp = DescribeInsightListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInsightListOutcome(rsp);
        else
            return DescribeInsightListOutcome(o.GetError());
    }
    else
    {
        return DescribeInsightListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInsightListAsync(const DescribeInsightListRequest& request, const DescribeInsightListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInsightList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInsightListOutcomeCallable EmrClient::DescribeInsightListCallable(const DescribeInsightListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInsightListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInsightList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInspectionTaskResultOutcome EmrClient::DescribeInspectionTaskResult(const DescribeInspectionTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInspectionTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInspectionTaskResultResponse rsp = DescribeInspectionTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInspectionTaskResultOutcome(rsp);
        else
            return DescribeInspectionTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeInspectionTaskResultOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInspectionTaskResultAsync(const DescribeInspectionTaskResultRequest& request, const DescribeInspectionTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInspectionTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInspectionTaskResultOutcomeCallable EmrClient::DescribeInspectionTaskResultCallable(const DescribeInspectionTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInspectionTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeInspectionTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeInstanceRenewNodesOutcome EmrClient::DescribeInstanceRenewNodes(const DescribeInstanceRenewNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceRenewNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceRenewNodesResponse rsp = DescribeInstanceRenewNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceRenewNodesOutcome(rsp);
        else
            return DescribeInstanceRenewNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceRenewNodesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstanceRenewNodesAsync(const DescribeInstanceRenewNodesRequest& request, const DescribeInstanceRenewNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceRenewNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstanceRenewNodesOutcomeCallable EmrClient::DescribeInstanceRenewNodesCallable(const DescribeInstanceRenewNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceRenewNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceRenewNodes(request);
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

EmrClient::DescribeInstancesListOutcome EmrClient::DescribeInstancesList(const DescribeInstancesListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesListResponse rsp = DescribeInstancesListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesListOutcome(rsp);
        else
            return DescribeInstancesListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeInstancesListAsync(const DescribeInstancesListRequest& request, const DescribeInstancesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeInstancesListOutcomeCallable EmrClient::DescribeInstancesListCallable(const DescribeInstancesListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeJobFlowOutcome EmrClient::DescribeJobFlow(const DescribeJobFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobFlowResponse rsp = DescribeJobFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobFlowOutcome(rsp);
        else
            return DescribeJobFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeJobFlowOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeJobFlowAsync(const DescribeJobFlowRequest& request, const DescribeJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeJobFlowOutcomeCallable EmrClient::DescribeJobFlowCallable(const DescribeJobFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeKyuubiQueryInfoOutcome EmrClient::DescribeKyuubiQueryInfo(const DescribeKyuubiQueryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKyuubiQueryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKyuubiQueryInfoResponse rsp = DescribeKyuubiQueryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKyuubiQueryInfoOutcome(rsp);
        else
            return DescribeKyuubiQueryInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeKyuubiQueryInfoOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeKyuubiQueryInfoAsync(const DescribeKyuubiQueryInfoRequest& request, const DescribeKyuubiQueryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKyuubiQueryInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeKyuubiQueryInfoOutcomeCallable EmrClient::DescribeKyuubiQueryInfoCallable(const DescribeKyuubiQueryInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKyuubiQueryInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeKyuubiQueryInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeNodeDataDisksOutcome EmrClient::DescribeNodeDataDisks(const DescribeNodeDataDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeDataDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeDataDisksResponse rsp = DescribeNodeDataDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeDataDisksOutcome(rsp);
        else
            return DescribeNodeDataDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeDataDisksOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeNodeDataDisksAsync(const DescribeNodeDataDisksRequest& request, const DescribeNodeDataDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeDataDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeNodeDataDisksOutcomeCallable EmrClient::DescribeNodeDataDisksCallable(const DescribeNodeDataDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeDataDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeDataDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeNodeResourceConfigFastOutcome EmrClient::DescribeNodeResourceConfigFast(const DescribeNodeResourceConfigFastRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeResourceConfigFast");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeResourceConfigFastResponse rsp = DescribeNodeResourceConfigFastResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeResourceConfigFastOutcome(rsp);
        else
            return DescribeNodeResourceConfigFastOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeResourceConfigFastOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeNodeResourceConfigFastAsync(const DescribeNodeResourceConfigFastRequest& request, const DescribeNodeResourceConfigFastAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodeResourceConfigFast(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeNodeResourceConfigFastOutcomeCallable EmrClient::DescribeNodeResourceConfigFastCallable(const DescribeNodeResourceConfigFastRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodeResourceConfigFastOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodeResourceConfigFast(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeResourceScheduleOutcome EmrClient::DescribeResourceSchedule(const DescribeResourceScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceScheduleResponse rsp = DescribeResourceScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceScheduleOutcome(rsp);
        else
            return DescribeResourceScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceScheduleOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeResourceScheduleAsync(const DescribeResourceScheduleRequest& request, const DescribeResourceScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeResourceScheduleOutcomeCallable EmrClient::DescribeResourceScheduleCallable(const DescribeResourceScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceScheduleOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeResourceScheduleDiffDetailOutcome EmrClient::DescribeResourceScheduleDiffDetail(const DescribeResourceScheduleDiffDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceScheduleDiffDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceScheduleDiffDetailResponse rsp = DescribeResourceScheduleDiffDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceScheduleDiffDetailOutcome(rsp);
        else
            return DescribeResourceScheduleDiffDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceScheduleDiffDetailOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeResourceScheduleDiffDetailAsync(const DescribeResourceScheduleDiffDetailRequest& request, const DescribeResourceScheduleDiffDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceScheduleDiffDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeResourceScheduleDiffDetailOutcomeCallable EmrClient::DescribeResourceScheduleDiffDetailCallable(const DescribeResourceScheduleDiffDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceScheduleDiffDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceScheduleDiffDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeSLInstanceOutcome EmrClient::DescribeSLInstance(const DescribeSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSLInstanceResponse rsp = DescribeSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSLInstanceOutcome(rsp);
        else
            return DescribeSLInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSLInstanceAsync(const DescribeSLInstanceRequest& request, const DescribeSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeSLInstanceOutcomeCallable EmrClient::DescribeSLInstanceCallable(const DescribeSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeSLInstanceListOutcome EmrClient::DescribeSLInstanceList(const DescribeSLInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSLInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSLInstanceListResponse rsp = DescribeSLInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSLInstanceListOutcome(rsp);
        else
            return DescribeSLInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeSLInstanceListOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSLInstanceListAsync(const DescribeSLInstanceListRequest& request, const DescribeSLInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSLInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeSLInstanceListOutcomeCallable EmrClient::DescribeSLInstanceListCallable(const DescribeSLInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSLInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSLInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeServiceNodeInfosOutcome EmrClient::DescribeServiceNodeInfos(const DescribeServiceNodeInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceNodeInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceNodeInfosResponse rsp = DescribeServiceNodeInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceNodeInfosOutcome(rsp);
        else
            return DescribeServiceNodeInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceNodeInfosOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeServiceNodeInfosAsync(const DescribeServiceNodeInfosRequest& request, const DescribeServiceNodeInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeServiceNodeInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeServiceNodeInfosOutcomeCallable EmrClient::DescribeServiceNodeInfosCallable(const DescribeServiceNodeInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeServiceNodeInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeServiceNodeInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeSparkQueriesOutcome EmrClient::DescribeSparkQueries(const DescribeSparkQueriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkQueries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkQueriesResponse rsp = DescribeSparkQueriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkQueriesOutcome(rsp);
        else
            return DescribeSparkQueriesOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkQueriesOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSparkQueriesAsync(const DescribeSparkQueriesRequest& request, const DescribeSparkQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSparkQueries(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeSparkQueriesOutcomeCallable EmrClient::DescribeSparkQueriesCallable(const DescribeSparkQueriesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSparkQueriesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSparkQueries(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeStarRocksQueryInfoOutcome EmrClient::DescribeStarRocksQueryInfo(const DescribeStarRocksQueryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStarRocksQueryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStarRocksQueryInfoResponse rsp = DescribeStarRocksQueryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStarRocksQueryInfoOutcome(rsp);
        else
            return DescribeStarRocksQueryInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeStarRocksQueryInfoOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeStarRocksQueryInfoAsync(const DescribeStarRocksQueryInfoRequest& request, const DescribeStarRocksQueryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStarRocksQueryInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeStarRocksQueryInfoOutcomeCallable EmrClient::DescribeStarRocksQueryInfoCallable(const DescribeStarRocksQueryInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStarRocksQueryInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeStarRocksQueryInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeTrinoQueryInfoOutcome EmrClient::DescribeTrinoQueryInfo(const DescribeTrinoQueryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrinoQueryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrinoQueryInfoResponse rsp = DescribeTrinoQueryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrinoQueryInfoOutcome(rsp);
        else
            return DescribeTrinoQueryInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTrinoQueryInfoOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeTrinoQueryInfoAsync(const DescribeTrinoQueryInfoRequest& request, const DescribeTrinoQueryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrinoQueryInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeTrinoQueryInfoOutcomeCallable EmrClient::DescribeTrinoQueryInfoCallable(const DescribeTrinoQueryInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrinoQueryInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrinoQueryInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeUsersForUserManagerOutcome EmrClient::DescribeUsersForUserManager(const DescribeUsersForUserManagerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsersForUserManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersForUserManagerResponse rsp = DescribeUsersForUserManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersForUserManagerOutcome(rsp);
        else
            return DescribeUsersForUserManagerOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersForUserManagerOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeUsersForUserManagerAsync(const DescribeUsersForUserManagerRequest& request, const DescribeUsersForUserManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsersForUserManager(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeUsersForUserManagerOutcomeCallable EmrClient::DescribeUsersForUserManagerCallable(const DescribeUsersForUserManagerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersForUserManagerOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsersForUserManager(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeYarnApplicationsOutcome EmrClient::DescribeYarnApplications(const DescribeYarnApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeYarnApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeYarnApplicationsResponse rsp = DescribeYarnApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeYarnApplicationsOutcome(rsp);
        else
            return DescribeYarnApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeYarnApplicationsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeYarnApplicationsAsync(const DescribeYarnApplicationsRequest& request, const DescribeYarnApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeYarnApplications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeYarnApplicationsOutcomeCallable EmrClient::DescribeYarnApplicationsCallable(const DescribeYarnApplicationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeYarnApplicationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeYarnApplications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeYarnQueueOutcome EmrClient::DescribeYarnQueue(const DescribeYarnQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeYarnQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeYarnQueueResponse rsp = DescribeYarnQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeYarnQueueOutcome(rsp);
        else
            return DescribeYarnQueueOutcome(o.GetError());
    }
    else
    {
        return DescribeYarnQueueOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeYarnQueueAsync(const DescribeYarnQueueRequest& request, const DescribeYarnQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeYarnQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeYarnQueueOutcomeCallable EmrClient::DescribeYarnQueueCallable(const DescribeYarnQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeYarnQueueOutcome()>>(
        [this, request]()
        {
            return this->DescribeYarnQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::DescribeYarnScheduleHistoryOutcome EmrClient::DescribeYarnScheduleHistory(const DescribeYarnScheduleHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeYarnScheduleHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeYarnScheduleHistoryResponse rsp = DescribeYarnScheduleHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeYarnScheduleHistoryOutcome(rsp);
        else
            return DescribeYarnScheduleHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeYarnScheduleHistoryOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeYarnScheduleHistoryAsync(const DescribeYarnScheduleHistoryRequest& request, const DescribeYarnScheduleHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeYarnScheduleHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::DescribeYarnScheduleHistoryOutcomeCallable EmrClient::DescribeYarnScheduleHistoryCallable(const DescribeYarnScheduleHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeYarnScheduleHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeYarnScheduleHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::InquirePriceRenewEmrOutcome EmrClient::InquirePriceRenewEmr(const InquirePriceRenewEmrRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewEmr");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewEmrResponse rsp = InquirePriceRenewEmrResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewEmrOutcome(rsp);
        else
            return InquirePriceRenewEmrOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewEmrOutcome(outcome.GetError());
    }
}

void EmrClient::InquirePriceRenewEmrAsync(const InquirePriceRenewEmrRequest& request, const InquirePriceRenewEmrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePriceRenewEmr(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::InquirePriceRenewEmrOutcomeCallable EmrClient::InquirePriceRenewEmrCallable(const InquirePriceRenewEmrRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePriceRenewEmrOutcome()>>(
        [this, request]()
        {
            return this->InquirePriceRenewEmr(request);
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

EmrClient::ModifyAutoRenewFlagOutcome EmrClient::ModifyAutoRenewFlag(const ModifyAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoRenewFlagResponse rsp = ModifyAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoRenewFlagOutcome(rsp);
        else
            return ModifyAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoRenewFlagOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyAutoRenewFlagAsync(const ModifyAutoRenewFlagRequest& request, const ModifyAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyAutoRenewFlagOutcomeCallable EmrClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyAutoScaleStrategyOutcome EmrClient::ModifyAutoScaleStrategy(const ModifyAutoScaleStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoScaleStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoScaleStrategyResponse rsp = ModifyAutoScaleStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoScaleStrategyOutcome(rsp);
        else
            return ModifyAutoScaleStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoScaleStrategyOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyAutoScaleStrategyAsync(const ModifyAutoScaleStrategyRequest& request, const ModifyAutoScaleStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAutoScaleStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyAutoScaleStrategyOutcomeCallable EmrClient::ModifyAutoScaleStrategyCallable(const ModifyAutoScaleStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAutoScaleStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyAutoScaleStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyGlobalConfigOutcome EmrClient::ModifyGlobalConfig(const ModifyGlobalConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalConfigResponse rsp = ModifyGlobalConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalConfigOutcome(rsp);
        else
            return ModifyGlobalConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyGlobalConfigAsync(const ModifyGlobalConfigRequest& request, const ModifyGlobalConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGlobalConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyGlobalConfigOutcomeCallable EmrClient::ModifyGlobalConfigCallable(const ModifyGlobalConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGlobalConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyGlobalConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyInspectionSettingsOutcome EmrClient::ModifyInspectionSettings(const ModifyInspectionSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInspectionSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInspectionSettingsResponse rsp = ModifyInspectionSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInspectionSettingsOutcome(rsp);
        else
            return ModifyInspectionSettingsOutcome(o.GetError());
    }
    else
    {
        return ModifyInspectionSettingsOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyInspectionSettingsAsync(const ModifyInspectionSettingsRequest& request, const ModifyInspectionSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInspectionSettings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyInspectionSettingsOutcomeCallable EmrClient::ModifyInspectionSettingsCallable(const ModifyInspectionSettingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInspectionSettingsOutcome()>>(
        [this, request]()
        {
            return this->ModifyInspectionSettings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyInstanceBasicOutcome EmrClient::ModifyInstanceBasic(const ModifyInstanceBasicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceBasic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceBasicResponse rsp = ModifyInstanceBasicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceBasicOutcome(rsp);
        else
            return ModifyInstanceBasicOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceBasicOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyInstanceBasicAsync(const ModifyInstanceBasicRequest& request, const ModifyInstanceBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceBasic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyInstanceBasicOutcomeCallable EmrClient::ModifyInstanceBasicCallable(const ModifyInstanceBasicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceBasicOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceBasic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyPodNumOutcome EmrClient::ModifyPodNum(const ModifyPodNumRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPodNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPodNumResponse rsp = ModifyPodNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPodNumOutcome(rsp);
        else
            return ModifyPodNumOutcome(o.GetError());
    }
    else
    {
        return ModifyPodNumOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyPodNumAsync(const ModifyPodNumRequest& request, const ModifyPodNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPodNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyPodNumOutcomeCallable EmrClient::ModifyPodNumCallable(const ModifyPodNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPodNumOutcome()>>(
        [this, request]()
        {
            return this->ModifyPodNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceOutcome EmrClient::ModifyResource(const ModifyResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceResponse rsp = ModifyResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceOutcome(rsp);
        else
            return ModifyResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceAsync(const ModifyResourceRequest& request, const ModifyResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceOutcomeCallable EmrClient::ModifyResourceCallable(const ModifyResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourcePoolsOutcome EmrClient::ModifyResourcePools(const ModifyResourcePoolsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcePools");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcePoolsResponse rsp = ModifyResourcePoolsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcePoolsOutcome(rsp);
        else
            return ModifyResourcePoolsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcePoolsOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourcePoolsAsync(const ModifyResourcePoolsRequest& request, const ModifyResourcePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcePools(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourcePoolsOutcomeCallable EmrClient::ModifyResourcePoolsCallable(const ModifyResourcePoolsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcePoolsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcePools(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceScheduleConfigOutcome EmrClient::ModifyResourceScheduleConfig(const ModifyResourceScheduleConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduleConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceScheduleConfigResponse rsp = ModifyResourceScheduleConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceScheduleConfigOutcome(rsp);
        else
            return ModifyResourceScheduleConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceScheduleConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceScheduleConfigAsync(const ModifyResourceScheduleConfigRequest& request, const ModifyResourceScheduleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduleConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceScheduleConfigOutcomeCallable EmrClient::ModifyResourceScheduleConfigCallable(const ModifyResourceScheduleConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceScheduleConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduleConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourceSchedulerOutcome EmrClient::ModifyResourceScheduler(const ModifyResourceSchedulerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceScheduler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceSchedulerResponse rsp = ModifyResourceSchedulerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceSchedulerOutcome(rsp);
        else
            return ModifyResourceSchedulerOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceSchedulerOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourceSchedulerAsync(const ModifyResourceSchedulerRequest& request, const ModifyResourceSchedulerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceScheduler(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourceSchedulerOutcomeCallable EmrClient::ModifyResourceSchedulerCallable(const ModifyResourceSchedulerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceSchedulerOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceScheduler(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyResourcesTagsOutcome EmrClient::ModifyResourcesTags(const ModifyResourcesTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourcesTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourcesTagsResponse rsp = ModifyResourcesTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourcesTagsOutcome(rsp);
        else
            return ModifyResourcesTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourcesTagsOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyResourcesTagsAsync(const ModifyResourcesTagsRequest& request, const ModifyResourcesTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourcesTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyResourcesTagsOutcomeCallable EmrClient::ModifyResourcesTagsCallable(const ModifyResourcesTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourcesTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourcesTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifySLInstanceOutcome EmrClient::ModifySLInstance(const ModifySLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySLInstanceResponse rsp = ModifySLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySLInstanceOutcome(rsp);
        else
            return ModifySLInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifySLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::ModifySLInstanceAsync(const ModifySLInstanceRequest& request, const ModifySLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifySLInstanceOutcomeCallable EmrClient::ModifySLInstanceCallable(const ModifySLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySLInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifySLInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifySLInstanceBasicOutcome EmrClient::ModifySLInstanceBasic(const ModifySLInstanceBasicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySLInstanceBasic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySLInstanceBasicResponse rsp = ModifySLInstanceBasicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySLInstanceBasicOutcome(rsp);
        else
            return ModifySLInstanceBasicOutcome(o.GetError());
    }
    else
    {
        return ModifySLInstanceBasicOutcome(outcome.GetError());
    }
}

void EmrClient::ModifySLInstanceBasicAsync(const ModifySLInstanceBasicRequest& request, const ModifySLInstanceBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySLInstanceBasic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifySLInstanceBasicOutcomeCallable EmrClient::ModifySLInstanceBasicCallable(const ModifySLInstanceBasicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySLInstanceBasicOutcome()>>(
        [this, request]()
        {
            return this->ModifySLInstanceBasic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyUserGroupOutcome EmrClient::ModifyUserGroup(const ModifyUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserGroupResponse rsp = ModifyUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserGroupOutcome(rsp);
        else
            return ModifyUserGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserGroupOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyUserGroupOutcomeCallable EmrClient::ModifyUserGroupCallable(const ModifyUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyUserManagerPwdOutcome EmrClient::ModifyUserManagerPwd(const ModifyUserManagerPwdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserManagerPwd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserManagerPwdResponse rsp = ModifyUserManagerPwdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserManagerPwdOutcome(rsp);
        else
            return ModifyUserManagerPwdOutcome(o.GetError());
    }
    else
    {
        return ModifyUserManagerPwdOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyUserManagerPwdAsync(const ModifyUserManagerPwdRequest& request, const ModifyUserManagerPwdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserManagerPwd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyUserManagerPwdOutcomeCallable EmrClient::ModifyUserManagerPwdCallable(const ModifyUserManagerPwdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserManagerPwdOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserManagerPwd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyUsersOfGroupSTDOutcome EmrClient::ModifyUsersOfGroupSTD(const ModifyUsersOfGroupSTDRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUsersOfGroupSTD");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUsersOfGroupSTDResponse rsp = ModifyUsersOfGroupSTDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUsersOfGroupSTDOutcome(rsp);
        else
            return ModifyUsersOfGroupSTDOutcome(o.GetError());
    }
    else
    {
        return ModifyUsersOfGroupSTDOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyUsersOfGroupSTDAsync(const ModifyUsersOfGroupSTDRequest& request, const ModifyUsersOfGroupSTDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUsersOfGroupSTD(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyUsersOfGroupSTDOutcomeCallable EmrClient::ModifyUsersOfGroupSTDCallable(const ModifyUsersOfGroupSTDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUsersOfGroupSTDOutcome()>>(
        [this, request]()
        {
            return this->ModifyUsersOfGroupSTD(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyYarnDeployOutcome EmrClient::ModifyYarnDeploy(const ModifyYarnDeployRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyYarnDeploy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyYarnDeployResponse rsp = ModifyYarnDeployResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyYarnDeployOutcome(rsp);
        else
            return ModifyYarnDeployOutcome(o.GetError());
    }
    else
    {
        return ModifyYarnDeployOutcome(outcome.GetError());
    }
}

void EmrClient::ModifyYarnDeployAsync(const ModifyYarnDeployRequest& request, const ModifyYarnDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyYarnDeploy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyYarnDeployOutcomeCallable EmrClient::ModifyYarnDeployCallable(const ModifyYarnDeployRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyYarnDeployOutcome()>>(
        [this, request]()
        {
            return this->ModifyYarnDeploy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ModifyYarnQueueV2Outcome EmrClient::ModifyYarnQueueV2(const ModifyYarnQueueV2Request &request)
{
    auto outcome = MakeRequest(request, "ModifyYarnQueueV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyYarnQueueV2Response rsp = ModifyYarnQueueV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyYarnQueueV2Outcome(rsp);
        else
            return ModifyYarnQueueV2Outcome(o.GetError());
    }
    else
    {
        return ModifyYarnQueueV2Outcome(outcome.GetError());
    }
}

void EmrClient::ModifyYarnQueueV2Async(const ModifyYarnQueueV2Request& request, const ModifyYarnQueueV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyYarnQueueV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ModifyYarnQueueV2OutcomeCallable EmrClient::ModifyYarnQueueV2Callable(const ModifyYarnQueueV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyYarnQueueV2Outcome()>>(
        [this, request]()
        {
            return this->ModifyYarnQueueV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ResetYarnConfigOutcome EmrClient::ResetYarnConfig(const ResetYarnConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ResetYarnConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetYarnConfigResponse rsp = ResetYarnConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetYarnConfigOutcome(rsp);
        else
            return ResetYarnConfigOutcome(o.GetError());
    }
    else
    {
        return ResetYarnConfigOutcome(outcome.GetError());
    }
}

void EmrClient::ResetYarnConfigAsync(const ResetYarnConfigRequest& request, const ResetYarnConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetYarnConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ResetYarnConfigOutcomeCallable EmrClient::ResetYarnConfigCallable(const ResetYarnConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetYarnConfigOutcome()>>(
        [this, request]()
        {
            return this->ResetYarnConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ResizeDataDisksOutcome EmrClient::ResizeDataDisks(const ResizeDataDisksRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDataDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDataDisksResponse rsp = ResizeDataDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDataDisksOutcome(rsp);
        else
            return ResizeDataDisksOutcome(o.GetError());
    }
    else
    {
        return ResizeDataDisksOutcome(outcome.GetError());
    }
}

void EmrClient::ResizeDataDisksAsync(const ResizeDataDisksRequest& request, const ResizeDataDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeDataDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ResizeDataDisksOutcomeCallable EmrClient::ResizeDataDisksCallable(const ResizeDataDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeDataDisksOutcome()>>(
        [this, request]()
        {
            return this->ResizeDataDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::RunJobFlowOutcome EmrClient::RunJobFlow(const RunJobFlowRequest &request)
{
    auto outcome = MakeRequest(request, "RunJobFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunJobFlowResponse rsp = RunJobFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunJobFlowOutcome(rsp);
        else
            return RunJobFlowOutcome(o.GetError());
    }
    else
    {
        return RunJobFlowOutcome(outcome.GetError());
    }
}

void EmrClient::RunJobFlowAsync(const RunJobFlowRequest& request, const RunJobFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunJobFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::RunJobFlowOutcomeCallable EmrClient::RunJobFlowCallable(const RunJobFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunJobFlowOutcome()>>(
        [this, request]()
        {
            return this->RunJobFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::ScaleOutClusterOutcome EmrClient::ScaleOutCluster(const ScaleOutClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutClusterResponse rsp = ScaleOutClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutClusterOutcome(rsp);
        else
            return ScaleOutClusterOutcome(o.GetError());
    }
    else
    {
        return ScaleOutClusterOutcome(outcome.GetError());
    }
}

void EmrClient::ScaleOutClusterAsync(const ScaleOutClusterRequest& request, const ScaleOutClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScaleOutCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::ScaleOutClusterOutcomeCallable EmrClient::ScaleOutClusterCallable(const ScaleOutClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScaleOutClusterOutcome()>>(
        [this, request]()
        {
            return this->ScaleOutCluster(request);
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

EmrClient::SetNodeResourceConfigDefaultOutcome EmrClient::SetNodeResourceConfigDefault(const SetNodeResourceConfigDefaultRequest &request)
{
    auto outcome = MakeRequest(request, "SetNodeResourceConfigDefault");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetNodeResourceConfigDefaultResponse rsp = SetNodeResourceConfigDefaultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetNodeResourceConfigDefaultOutcome(rsp);
        else
            return SetNodeResourceConfigDefaultOutcome(o.GetError());
    }
    else
    {
        return SetNodeResourceConfigDefaultOutcome(outcome.GetError());
    }
}

void EmrClient::SetNodeResourceConfigDefaultAsync(const SetNodeResourceConfigDefaultRequest& request, const SetNodeResourceConfigDefaultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetNodeResourceConfigDefault(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::SetNodeResourceConfigDefaultOutcomeCallable EmrClient::SetNodeResourceConfigDefaultCallable(const SetNodeResourceConfigDefaultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetNodeResourceConfigDefaultOutcome()>>(
        [this, request]()
        {
            return this->SetNodeResourceConfigDefault(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::StartStopServiceOrMonitorOutcome EmrClient::StartStopServiceOrMonitor(const StartStopServiceOrMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StartStopServiceOrMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStopServiceOrMonitorResponse rsp = StartStopServiceOrMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStopServiceOrMonitorOutcome(rsp);
        else
            return StartStopServiceOrMonitorOutcome(o.GetError());
    }
    else
    {
        return StartStopServiceOrMonitorOutcome(outcome.GetError());
    }
}

void EmrClient::StartStopServiceOrMonitorAsync(const StartStopServiceOrMonitorRequest& request, const StartStopServiceOrMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStopServiceOrMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::StartStopServiceOrMonitorOutcomeCallable EmrClient::StartStopServiceOrMonitorCallable(const StartStopServiceOrMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStopServiceOrMonitorOutcome()>>(
        [this, request]()
        {
            return this->StartStopServiceOrMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::SyncPodStateOutcome EmrClient::SyncPodState(const SyncPodStateRequest &request)
{
    auto outcome = MakeRequest(request, "SyncPodState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncPodStateResponse rsp = SyncPodStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncPodStateOutcome(rsp);
        else
            return SyncPodStateOutcome(o.GetError());
    }
    else
    {
        return SyncPodStateOutcome(outcome.GetError());
    }
}

void EmrClient::SyncPodStateAsync(const SyncPodStateRequest& request, const SyncPodStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncPodState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::SyncPodStateOutcomeCallable EmrClient::SyncPodStateCallable(const SyncPodStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncPodStateOutcome()>>(
        [this, request]()
        {
            return this->SyncPodState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EmrClient::TerminateClusterNodesOutcome EmrClient::TerminateClusterNodes(const TerminateClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateClusterNodesResponse rsp = TerminateClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateClusterNodesOutcome(rsp);
        else
            return TerminateClusterNodesOutcome(o.GetError());
    }
    else
    {
        return TerminateClusterNodesOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateClusterNodesAsync(const TerminateClusterNodesRequest& request, const TerminateClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateClusterNodesOutcomeCallable EmrClient::TerminateClusterNodesCallable(const TerminateClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->TerminateClusterNodes(request);
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

EmrClient::TerminateSLInstanceOutcome EmrClient::TerminateSLInstance(const TerminateSLInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateSLInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateSLInstanceResponse rsp = TerminateSLInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateSLInstanceOutcome(rsp);
        else
            return TerminateSLInstanceOutcome(o.GetError());
    }
    else
    {
        return TerminateSLInstanceOutcome(outcome.GetError());
    }
}

void EmrClient::TerminateSLInstanceAsync(const TerminateSLInstanceRequest& request, const TerminateSLInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateSLInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EmrClient::TerminateSLInstanceOutcomeCallable EmrClient::TerminateSLInstanceCallable(const TerminateSLInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateSLInstanceOutcome()>>(
        [this, request]()
        {
            return this->TerminateSLInstance(request);
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

