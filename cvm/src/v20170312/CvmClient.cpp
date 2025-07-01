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

#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>
#include <tencentcloud/core/CurlAsync.h>
#include <tencentcloud/core/Credential.h>
#include <iostream>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

namespace
{
    const string VERSION = "2017-03-12";
    const string ENDPOINT = "cvm.tencentcloudapi.com";
}

CvmClient::CvmClient(const Credential &credential, const string &region) :
    CvmClient(credential, region, ClientProfile())
{
}

CvmClient::CvmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CvmClient::AllocateHostsOutcome CvmClient::AllocateHosts(const AllocateHostsRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateHostsResponse rsp = AllocateHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateHostsOutcome(rsp);
        else
            return AllocateHostsOutcome(o.GetError());
    }
    else
    {
        return AllocateHostsOutcome(outcome.GetError());
    }
}

void CvmClient::AllocateHostsAsync(const AllocateHostsRequest& request, const AllocateHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::AllocateHostsOutcomeCallable CvmClient::AllocateHostsCallable(const AllocateHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateHostsOutcome()>>(
        [this, request]()
        {
            return this->AllocateHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::AssociateInstancesKeyPairsOutcome CvmClient::AssociateInstancesKeyPairs(const AssociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateInstancesKeyPairsResponse rsp = AssociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateInstancesKeyPairsOutcome(rsp);
        else
            return AssociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return AssociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void CvmClient::AssociateInstancesKeyPairsAsync(const AssociateInstancesKeyPairsRequest& request, const AssociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateInstancesKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::AssociateInstancesKeyPairsOutcomeCallable CvmClient::AssociateInstancesKeyPairsCallable(const AssociateInstancesKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateInstancesKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->AssociateInstancesKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::AssociateSecurityGroupsOutcome CvmClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void CvmClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::AssociateSecurityGroupsOutcomeCallable CvmClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
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

CvmClient::ConfigureChcAssistVpcOutcome CvmClient::ConfigureChcAssistVpc(const ConfigureChcAssistVpcRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureChcAssistVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureChcAssistVpcResponse rsp = ConfigureChcAssistVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureChcAssistVpcOutcome(rsp);
        else
            return ConfigureChcAssistVpcOutcome(o.GetError());
    }
    else
    {
        return ConfigureChcAssistVpcOutcome(outcome.GetError());
    }
}

void CvmClient::ConfigureChcAssistVpcAsync(const ConfigureChcAssistVpcRequest& request, const ConfigureChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfigureChcAssistVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ConfigureChcAssistVpcOutcomeCallable CvmClient::ConfigureChcAssistVpcCallable(const ConfigureChcAssistVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfigureChcAssistVpcOutcome()>>(
        [this, request]()
        {
            return this->ConfigureChcAssistVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ConfigureChcDeployVpcOutcome CvmClient::ConfigureChcDeployVpc(const ConfigureChcDeployVpcRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureChcDeployVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureChcDeployVpcResponse rsp = ConfigureChcDeployVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureChcDeployVpcOutcome(rsp);
        else
            return ConfigureChcDeployVpcOutcome(o.GetError());
    }
    else
    {
        return ConfigureChcDeployVpcOutcome(outcome.GetError());
    }
}

void CvmClient::ConfigureChcDeployVpcAsync(const ConfigureChcDeployVpcRequest& request, const ConfigureChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfigureChcDeployVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ConfigureChcDeployVpcOutcomeCallable CvmClient::ConfigureChcDeployVpcCallable(const ConfigureChcDeployVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfigureChcDeployVpcOutcome()>>(
        [this, request]()
        {
            return this->ConfigureChcDeployVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ConvertOperatingSystemsOutcome CvmClient::ConvertOperatingSystems(const ConvertOperatingSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "ConvertOperatingSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConvertOperatingSystemsResponse rsp = ConvertOperatingSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConvertOperatingSystemsOutcome(rsp);
        else
            return ConvertOperatingSystemsOutcome(o.GetError());
    }
    else
    {
        return ConvertOperatingSystemsOutcome(outcome.GetError());
    }
}

void CvmClient::ConvertOperatingSystemsAsync(const ConvertOperatingSystemsRequest& request, const ConvertOperatingSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConvertOperatingSystems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ConvertOperatingSystemsOutcomeCallable CvmClient::ConvertOperatingSystemsCallable(const ConvertOperatingSystemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConvertOperatingSystemsOutcome()>>(
        [this, request]()
        {
            return this->ConvertOperatingSystems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateDisasterRecoverGroupOutcome CvmClient::CreateDisasterRecoverGroup(const CreateDisasterRecoverGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisasterRecoverGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisasterRecoverGroupResponse rsp = CreateDisasterRecoverGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisasterRecoverGroupOutcome(rsp);
        else
            return CreateDisasterRecoverGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDisasterRecoverGroupOutcome(outcome.GetError());
    }
}

void CvmClient::CreateDisasterRecoverGroupAsync(const CreateDisasterRecoverGroupRequest& request, const CreateDisasterRecoverGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDisasterRecoverGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateDisasterRecoverGroupOutcomeCallable CvmClient::CreateDisasterRecoverGroupCallable(const CreateDisasterRecoverGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDisasterRecoverGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDisasterRecoverGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateHpcClusterOutcome CvmClient::CreateHpcCluster(const CreateHpcClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHpcCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHpcClusterResponse rsp = CreateHpcClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHpcClusterOutcome(rsp);
        else
            return CreateHpcClusterOutcome(o.GetError());
    }
    else
    {
        return CreateHpcClusterOutcome(outcome.GetError());
    }
}

void CvmClient::CreateHpcClusterAsync(const CreateHpcClusterRequest& request, const CreateHpcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHpcCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateHpcClusterOutcomeCallable CvmClient::CreateHpcClusterCallable(const CreateHpcClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHpcClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateHpcCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateImageOutcome CvmClient::CreateImage(const CreateImageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageResponse rsp = CreateImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageOutcome(rsp);
        else
            return CreateImageOutcome(o.GetError());
    }
    else
    {
        return CreateImageOutcome(outcome.GetError());
    }
}

void CvmClient::CreateImageAsync(const CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateImageOutcomeCallable CvmClient::CreateImageCallable(const CreateImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageOutcome()>>(
        [this, request]()
        {
            return this->CreateImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateKeyPairOutcome CvmClient::CreateKeyPair(const CreateKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKeyPairResponse rsp = CreateKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKeyPairOutcome(rsp);
        else
            return CreateKeyPairOutcome(o.GetError());
    }
    else
    {
        return CreateKeyPairOutcome(outcome.GetError());
    }
}

void CvmClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKeyPair(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateKeyPairOutcomeCallable CvmClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKeyPairOutcome()>>(
        [this, request]()
        {
            return this->CreateKeyPair(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateLaunchTemplateOutcome CvmClient::CreateLaunchTemplate(const CreateLaunchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLaunchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaunchTemplateResponse rsp = CreateLaunchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaunchTemplateOutcome(rsp);
        else
            return CreateLaunchTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLaunchTemplateOutcome(outcome.GetError());
    }
}

void CvmClient::CreateLaunchTemplateAsync(const CreateLaunchTemplateRequest& request, const CreateLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLaunchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateLaunchTemplateOutcomeCallable CvmClient::CreateLaunchTemplateCallable(const CreateLaunchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLaunchTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLaunchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::CreateLaunchTemplateVersionOutcome CvmClient::CreateLaunchTemplateVersion(const CreateLaunchTemplateVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLaunchTemplateVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaunchTemplateVersionResponse rsp = CreateLaunchTemplateVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaunchTemplateVersionOutcome(rsp);
        else
            return CreateLaunchTemplateVersionOutcome(o.GetError());
    }
    else
    {
        return CreateLaunchTemplateVersionOutcome(outcome.GetError());
    }
}

void CvmClient::CreateLaunchTemplateVersionAsync(const CreateLaunchTemplateVersionRequest& request, const CreateLaunchTemplateVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLaunchTemplateVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::CreateLaunchTemplateVersionOutcomeCallable CvmClient::CreateLaunchTemplateVersionCallable(const CreateLaunchTemplateVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLaunchTemplateVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateLaunchTemplateVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteDisasterRecoverGroupsOutcome CvmClient::DeleteDisasterRecoverGroups(const DeleteDisasterRecoverGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDisasterRecoverGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDisasterRecoverGroupsResponse rsp = DeleteDisasterRecoverGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDisasterRecoverGroupsOutcome(rsp);
        else
            return DeleteDisasterRecoverGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDisasterRecoverGroupsOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteDisasterRecoverGroupsAsync(const DeleteDisasterRecoverGroupsRequest& request, const DeleteDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDisasterRecoverGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteDisasterRecoverGroupsOutcomeCallable CvmClient::DeleteDisasterRecoverGroupsCallable(const DeleteDisasterRecoverGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDisasterRecoverGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDisasterRecoverGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteHpcClustersOutcome CvmClient::DeleteHpcClusters(const DeleteHpcClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHpcClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHpcClustersResponse rsp = DeleteHpcClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHpcClustersOutcome(rsp);
        else
            return DeleteHpcClustersOutcome(o.GetError());
    }
    else
    {
        return DeleteHpcClustersOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteHpcClustersAsync(const DeleteHpcClustersRequest& request, const DeleteHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHpcClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteHpcClustersOutcomeCallable CvmClient::DeleteHpcClustersCallable(const DeleteHpcClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHpcClustersOutcome()>>(
        [this, request]()
        {
            return this->DeleteHpcClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteImagesOutcome CvmClient::DeleteImages(const DeleteImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImagesResponse rsp = DeleteImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImagesOutcome(rsp);
        else
            return DeleteImagesOutcome(o.GetError());
    }
    else
    {
        return DeleteImagesOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteImagesAsync(const DeleteImagesRequest& request, const DeleteImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteImagesOutcomeCallable CvmClient::DeleteImagesCallable(const DeleteImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImagesOutcome()>>(
        [this, request]()
        {
            return this->DeleteImages(request);
        }
    );
    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteInstancesActionTimerOutcome CvmClient::DeleteInstancesActionTimer(const DeleteInstancesActionTimerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstancesActionTimer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstancesActionTimerResponse rsp = DeleteInstancesActionTimerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstancesActionTimerOutcome(rsp);
        else
            return DeleteInstancesActionTimerOutcome(o.GetError());
    }
    else
    {
        return DeleteInstancesActionTimerOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteInstancesActionTimerAsync(const DeleteInstancesActionTimerRequest& request, const DeleteInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstancesActionTimer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteInstancesActionTimerOutcomeCallable CvmClient::DeleteInstancesActionTimerCallable(const DeleteInstancesActionTimerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstancesActionTimerOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstancesActionTimer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteKeyPairsOutcome CvmClient::DeleteKeyPairs(const DeleteKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKeyPairsResponse rsp = DeleteKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKeyPairsOutcome(rsp);
        else
            return DeleteKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DeleteKeyPairsOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteKeyPairsAsync(const DeleteKeyPairsRequest& request, const DeleteKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteKeyPairsOutcomeCallable CvmClient::DeleteKeyPairsCallable(const DeleteKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DeleteKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}
CvmClient::DeleteLaunchTemplateOutcome CvmClient::DeleteLaunchTemplate(const DeleteLaunchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLaunchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaunchTemplateResponse rsp = DeleteLaunchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaunchTemplateOutcome(rsp);
        else
            return DeleteLaunchTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLaunchTemplateOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteLaunchTemplateAsync(const DeleteLaunchTemplateRequest& request, const DeleteLaunchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLaunchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteLaunchTemplateOutcomeCallable CvmClient::DeleteLaunchTemplateCallable(const DeleteLaunchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLaunchTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLaunchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DeleteLaunchTemplateVersionsOutcome CvmClient::DeleteLaunchTemplateVersions(const DeleteLaunchTemplateVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLaunchTemplateVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaunchTemplateVersionsResponse rsp = DeleteLaunchTemplateVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaunchTemplateVersionsOutcome(rsp);
        else
            return DeleteLaunchTemplateVersionsOutcome(o.GetError());
    }
    else
    {
        return DeleteLaunchTemplateVersionsOutcome(outcome.GetError());
    }
}

void CvmClient::DeleteLaunchTemplateVersionsAsync(const DeleteLaunchTemplateVersionsRequest& request, const DeleteLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLaunchTemplateVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DeleteLaunchTemplateVersionsOutcomeCallable CvmClient::DeleteLaunchTemplateVersionsCallable(const DeleteLaunchTemplateVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLaunchTemplateVersionsOutcome()>>(
        [this, request]()
        {
            return this->DeleteLaunchTemplateVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeAccountQuotaOutcome CvmClient::DescribeAccountQuota(const DescribeAccountQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountQuotaResponse rsp = DescribeAccountQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountQuotaOutcome(rsp);
        else
            return DescribeAccountQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountQuotaOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeAccountQuotaAsync(const DescribeAccountQuotaRequest& request, const DescribeAccountQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccountQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeAccountQuotaOutcomeCallable CvmClient::DescribeAccountQuotaCallable(const DescribeAccountQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccountQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccountQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeChcDeniedActionsOutcome CvmClient::DescribeChcDeniedActions(const DescribeChcDeniedActionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChcDeniedActions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChcDeniedActionsResponse rsp = DescribeChcDeniedActionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChcDeniedActionsOutcome(rsp);
        else
            return DescribeChcDeniedActionsOutcome(o.GetError());
    }
    else
    {
        return DescribeChcDeniedActionsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeChcDeniedActionsAsync(const DescribeChcDeniedActionsRequest& request, const DescribeChcDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChcDeniedActions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeChcDeniedActionsOutcomeCallable CvmClient::DescribeChcDeniedActionsCallable(const DescribeChcDeniedActionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChcDeniedActionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeChcDeniedActions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeChcHostsOutcome CvmClient::DescribeChcHosts(const DescribeChcHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChcHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChcHostsResponse rsp = DescribeChcHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChcHostsOutcome(rsp);
        else
            return DescribeChcHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeChcHostsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeChcHostsAsync(const DescribeChcHostsRequest& request, const DescribeChcHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChcHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeChcHostsOutcomeCallable CvmClient::DescribeChcHostsCallable(const DescribeChcHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChcHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeChcHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeDisasterRecoverGroupQuotaOutcome CvmClient::DescribeDisasterRecoverGroupQuota(const DescribeDisasterRecoverGroupQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoverGroupQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoverGroupQuotaResponse rsp = DescribeDisasterRecoverGroupQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoverGroupQuotaOutcome(rsp);
        else
            return DescribeDisasterRecoverGroupQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoverGroupQuotaOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeDisasterRecoverGroupQuotaAsync(const DescribeDisasterRecoverGroupQuotaRequest& request, const DescribeDisasterRecoverGroupQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisasterRecoverGroupQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeDisasterRecoverGroupQuotaOutcomeCallable CvmClient::DescribeDisasterRecoverGroupQuotaCallable(const DescribeDisasterRecoverGroupQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisasterRecoverGroupQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisasterRecoverGroupQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeDisasterRecoverGroupsOutcome CvmClient::DescribeDisasterRecoverGroups(const DescribeDisasterRecoverGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDisasterRecoverGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDisasterRecoverGroupsResponse rsp = DescribeDisasterRecoverGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDisasterRecoverGroupsOutcome(rsp);
        else
            return DescribeDisasterRecoverGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDisasterRecoverGroupsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeDisasterRecoverGroupsAsync(const DescribeDisasterRecoverGroupsRequest& request, const DescribeDisasterRecoverGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDisasterRecoverGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeDisasterRecoverGroupsOutcomeCallable CvmClient::DescribeDisasterRecoverGroupsCallable(const DescribeDisasterRecoverGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDisasterRecoverGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDisasterRecoverGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeHostsOutcome CvmClient::DescribeHosts(const DescribeHostsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsResponse rsp = DescribeHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsOutcome(rsp);
        else
            return DescribeHostsOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeHostsAsync(const DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeHostsOutcomeCallable CvmClient::DescribeHostsCallable(const DescribeHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeHpcClustersOutcome CvmClient::DescribeHpcClusters(const DescribeHpcClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHpcClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHpcClustersResponse rsp = DescribeHpcClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHpcClustersOutcome(rsp);
        else
            return DescribeHpcClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeHpcClustersOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeHpcClustersAsync(const DescribeHpcClustersRequest& request, const DescribeHpcClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHpcClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeHpcClustersOutcomeCallable CvmClient::DescribeHpcClustersCallable(const DescribeHpcClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHpcClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeHpcClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeImageFromFamilyOutcome CvmClient::DescribeImageFromFamily(const DescribeImageFromFamilyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageFromFamily");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageFromFamilyResponse rsp = DescribeImageFromFamilyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageFromFamilyOutcome(rsp);
        else
            return DescribeImageFromFamilyOutcome(o.GetError());
    }
    else
    {
        return DescribeImageFromFamilyOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeImageFromFamilyAsync(const DescribeImageFromFamilyRequest& request, const DescribeImageFromFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageFromFamily(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeImageFromFamilyOutcomeCallable CvmClient::DescribeImageFromFamilyCallable(const DescribeImageFromFamilyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageFromFamilyOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageFromFamily(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeImageQuotaOutcome CvmClient::DescribeImageQuota(const DescribeImageQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageQuotaResponse rsp = DescribeImageQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageQuotaOutcome(rsp);
        else
            return DescribeImageQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeImageQuotaOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeImageQuotaAsync(const DescribeImageQuotaRequest& request, const DescribeImageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeImageQuotaOutcomeCallable CvmClient::DescribeImageQuotaCallable(const DescribeImageQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeImageSharePermissionOutcome CvmClient::DescribeImageSharePermission(const DescribeImageSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageSharePermissionResponse rsp = DescribeImageSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageSharePermissionOutcome(rsp);
        else
            return DescribeImageSharePermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeImageSharePermissionOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeImageSharePermissionAsync(const DescribeImageSharePermissionRequest& request, const DescribeImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageSharePermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeImageSharePermissionOutcomeCallable CvmClient::DescribeImageSharePermissionCallable(const DescribeImageSharePermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageSharePermissionOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageSharePermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeImagesOutcome CvmClient::DescribeImages(const DescribeImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImagesResponse rsp = DescribeImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImagesOutcome(rsp);
        else
            return DescribeImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeImagesOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeImagesOutcomeCallable CvmClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeImportImageOsOutcome CvmClient::DescribeImportImageOs(const DescribeImportImageOsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportImageOs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportImageOsResponse rsp = DescribeImportImageOsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportImageOsOutcome(rsp);
        else
            return DescribeImportImageOsOutcome(o.GetError());
    }
    else
    {
        return DescribeImportImageOsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeImportImageOsAsync(const DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImportImageOs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeImportImageOsOutcomeCallable CvmClient::DescribeImportImageOsCallable(const DescribeImportImageOsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImportImageOsOutcome()>>(
        [this, request]()
        {
            return this->DescribeImportImageOs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstanceFamilyConfigsOutcome CvmClient::DescribeInstanceFamilyConfigs(const DescribeInstanceFamilyConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceFamilyConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceFamilyConfigsResponse rsp = DescribeInstanceFamilyConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceFamilyConfigsOutcome(rsp);
        else
            return DescribeInstanceFamilyConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceFamilyConfigsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstanceFamilyConfigsAsync(const DescribeInstanceFamilyConfigsRequest& request, const DescribeInstanceFamilyConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceFamilyConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstanceFamilyConfigsOutcomeCallable CvmClient::DescribeInstanceFamilyConfigsCallable(const DescribeInstanceFamilyConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceFamilyConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceFamilyConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}
CvmClient::DescribeInstanceInternetBandwidthConfigsOutcome CvmClient::DescribeInstanceInternetBandwidthConfigs(const DescribeInstanceInternetBandwidthConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceInternetBandwidthConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceInternetBandwidthConfigsResponse rsp = DescribeInstanceInternetBandwidthConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceInternetBandwidthConfigsOutcome(rsp);
        else
            return DescribeInstanceInternetBandwidthConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceInternetBandwidthConfigsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstanceInternetBandwidthConfigsAsync(const DescribeInstanceInternetBandwidthConfigsRequest& request, const DescribeInstanceInternetBandwidthConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceInternetBandwidthConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstanceInternetBandwidthConfigsOutcomeCallable CvmClient::DescribeInstanceInternetBandwidthConfigsCallable(const DescribeInstanceInternetBandwidthConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceInternetBandwidthConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceInternetBandwidthConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}
CvmClient::DescribeInstanceTypeConfigsOutcome CvmClient::DescribeInstanceTypeConfigs(const DescribeInstanceTypeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypeConfigsResponse rsp = DescribeInstanceTypeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypeConfigsOutcome(rsp);
        else
            return DescribeInstanceTypeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypeConfigsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstanceTypeConfigsAsync(const DescribeInstanceTypeConfigsRequest& request, const DescribeInstanceTypeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceTypeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstanceTypeConfigsOutcomeCallable CvmClient::DescribeInstanceTypeConfigsCallable(const DescribeInstanceTypeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceTypeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceTypeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstanceVncUrlOutcome CvmClient::DescribeInstanceVncUrl(const DescribeInstanceVncUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceVncUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceVncUrlResponse rsp = DescribeInstanceVncUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceVncUrlOutcome(rsp);
        else
            return DescribeInstanceVncUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceVncUrlOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstanceVncUrlAsync(const DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceVncUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstanceVncUrlOutcomeCallable CvmClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceVncUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceVncUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstancesOutcome CvmClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CvmClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, 
                                     const DescribeInstancesAsyncHandler& handler, 
                                     const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesOutcomeCallable CvmClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto httpFuture = MakeRequestAsync(request, "DescribeInstances");
    cout << "after MakeRequestAsync" << endl;
    return std::async(std::launch::async, [this](std::future<HttpClient::HttpResponseOutcome> f) mutable -> DescribeInstancesOutcome {
        auto outcome = f.get();
        cout << "after f.get();" << endl;
        if (outcome.IsSuccess())
        {
            auto r = outcome.GetResult();
            std::string payload(r.Body(), r.BodySize());
            DescribeInstancesResponse rsp;
            auto o = rsp.Deserialize(payload);
            if (o.IsSuccess()){
                cout << "o.IsSuccess()\n";
                return DescribeInstancesOutcome(rsp);
            }
            else{
                cout << "o.GetError()\n";
                return DescribeInstancesOutcome(o.GetError());
            }
        }
        else
        {
            cout << "outcome.GetError()\n";
            return DescribeInstancesOutcome(outcome.GetError());
        }
    }, std::move(httpFuture)); // 注意传参时 move
}

CvmClient::DescribeInstancesActionTimerOutcome CvmClient::DescribeInstancesActionTimer(const DescribeInstancesActionTimerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesActionTimer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesActionTimerResponse rsp = DescribeInstancesActionTimerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesActionTimerOutcome(rsp);
        else
            return DescribeInstancesActionTimerOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesActionTimerOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstancesActionTimerAsync(const DescribeInstancesActionTimerRequest& request, const DescribeInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesActionTimer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesActionTimerOutcomeCallable CvmClient::DescribeInstancesActionTimerCallable(const DescribeInstancesActionTimerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesActionTimerOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesActionTimer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstancesAttributesOutcome CvmClient::DescribeInstancesAttributes(const DescribeInstancesAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesAttributesResponse rsp = DescribeInstancesAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesAttributesOutcome(rsp);
        else
            return DescribeInstancesAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesAttributesOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstancesAttributesAsync(const DescribeInstancesAttributesRequest& request, const DescribeInstancesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesAttributesOutcomeCallable CvmClient::DescribeInstancesAttributesCallable(const DescribeInstancesAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstancesModificationOutcome CvmClient::DescribeInstancesModification(const DescribeInstancesModificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesModification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesModificationResponse rsp = DescribeInstancesModificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesModificationOutcome(rsp);
        else
            return DescribeInstancesModificationOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesModificationOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstancesModificationAsync(const DescribeInstancesModificationRequest& request, const DescribeInstancesModificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesModification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesModificationOutcomeCallable CvmClient::DescribeInstancesModificationCallable(const DescribeInstancesModificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesModificationOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesModification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstancesOperationLimitOutcome CvmClient::DescribeInstancesOperationLimit(const DescribeInstancesOperationLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesOperationLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesOperationLimitResponse rsp = DescribeInstancesOperationLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOperationLimitOutcome(rsp);
        else
            return DescribeInstancesOperationLimitOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOperationLimitOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstancesOperationLimitAsync(const DescribeInstancesOperationLimitRequest& request, const DescribeInstancesOperationLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesOperationLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesOperationLimitOutcomeCallable CvmClient::DescribeInstancesOperationLimitCallable(const DescribeInstancesOperationLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOperationLimitOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesOperationLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInstancesStatusOutcome CvmClient::DescribeInstancesStatus(const DescribeInstancesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesStatusResponse rsp = DescribeInstancesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesStatusOutcome(rsp);
        else
            return DescribeInstancesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesStatusOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInstancesStatusAsync(const DescribeInstancesStatusRequest& request, const DescribeInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInstancesStatusOutcomeCallable CvmClient::DescribeInstancesStatusCallable(const DescribeInstancesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeInternetChargeTypeConfigsOutcome CvmClient::DescribeInternetChargeTypeConfigs(const DescribeInternetChargeTypeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternetChargeTypeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternetChargeTypeConfigsResponse rsp = DescribeInternetChargeTypeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternetChargeTypeConfigsOutcome(rsp);
        else
            return DescribeInternetChargeTypeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeInternetChargeTypeConfigsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeInternetChargeTypeConfigsAsync(const DescribeInternetChargeTypeConfigsRequest& request, const DescribeInternetChargeTypeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInternetChargeTypeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeInternetChargeTypeConfigsOutcomeCallable CvmClient::DescribeInternetChargeTypeConfigsCallable(const DescribeInternetChargeTypeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInternetChargeTypeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInternetChargeTypeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeKeyPairsOutcome CvmClient::DescribeKeyPairs(const DescribeKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeyPairsResponse rsp = DescribeKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeyPairsOutcome(rsp);
        else
            return DescribeKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DescribeKeyPairsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeKeyPairsAsync(const DescribeKeyPairsRequest& request, const DescribeKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeKeyPairsOutcomeCallable CvmClient::DescribeKeyPairsCallable(const DescribeKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DescribeKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeLaunchTemplateVersionsOutcome CvmClient::DescribeLaunchTemplateVersions(const DescribeLaunchTemplateVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLaunchTemplateVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLaunchTemplateVersionsResponse rsp = DescribeLaunchTemplateVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLaunchTemplateVersionsOutcome(rsp);
        else
            return DescribeLaunchTemplateVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeLaunchTemplateVersionsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeLaunchTemplateVersionsAsync(const DescribeLaunchTemplateVersionsRequest& request, const DescribeLaunchTemplateVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLaunchTemplateVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeLaunchTemplateVersionsOutcomeCallable CvmClient::DescribeLaunchTemplateVersionsCallable(const DescribeLaunchTemplateVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLaunchTemplateVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLaunchTemplateVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeLaunchTemplatesOutcome CvmClient::DescribeLaunchTemplates(const DescribeLaunchTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLaunchTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLaunchTemplatesResponse rsp = DescribeLaunchTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLaunchTemplatesOutcome(rsp);
        else
            return DescribeLaunchTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLaunchTemplatesOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeLaunchTemplatesAsync(const DescribeLaunchTemplatesRequest& request, const DescribeLaunchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLaunchTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeLaunchTemplatesOutcomeCallable CvmClient::DescribeLaunchTemplatesCallable(const DescribeLaunchTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLaunchTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLaunchTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeRegionsOutcome CvmClient::DescribeRegions(const DescribeRegionsRequest &request)
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

void CvmClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeRegionsOutcomeCallable CvmClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
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

CvmClient::DescribeReservedInstancesConfigInfosOutcome CvmClient::DescribeReservedInstancesConfigInfos(const DescribeReservedInstancesConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedInstancesConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedInstancesConfigInfosResponse rsp = DescribeReservedInstancesConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedInstancesConfigInfosOutcome(rsp);
        else
            return DescribeReservedInstancesConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedInstancesConfigInfosOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeReservedInstancesConfigInfosAsync(const DescribeReservedInstancesConfigInfosRequest& request, const DescribeReservedInstancesConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReservedInstancesConfigInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeReservedInstancesConfigInfosOutcomeCallable CvmClient::DescribeReservedInstancesConfigInfosCallable(const DescribeReservedInstancesConfigInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReservedInstancesConfigInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeReservedInstancesConfigInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeReservedInstancesOfferingsOutcome CvmClient::DescribeReservedInstancesOfferings(const DescribeReservedInstancesOfferingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedInstancesOfferings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedInstancesOfferingsResponse rsp = DescribeReservedInstancesOfferingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedInstancesOfferingsOutcome(rsp);
        else
            return DescribeReservedInstancesOfferingsOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedInstancesOfferingsOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeReservedInstancesOfferingsAsync(const DescribeReservedInstancesOfferingsRequest& request, const DescribeReservedInstancesOfferingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReservedInstancesOfferings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeReservedInstancesOfferingsOutcomeCallable CvmClient::DescribeReservedInstancesOfferingsCallable(const DescribeReservedInstancesOfferingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReservedInstancesOfferingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReservedInstancesOfferings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeTaskInfoOutcome CvmClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskInfoResponse rsp = DescribeTaskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskInfoOutcome(rsp);
        else
            return DescribeTaskInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskInfoOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeTaskInfoOutcomeCallable CvmClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeZoneInstanceConfigInfosOutcome CvmClient::DescribeZoneInstanceConfigInfos(const DescribeZoneInstanceConfigInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneInstanceConfigInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneInstanceConfigInfosResponse rsp = DescribeZoneInstanceConfigInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneInstanceConfigInfosOutcome(rsp);
        else
            return DescribeZoneInstanceConfigInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneInstanceConfigInfosOutcome(outcome.GetError());
    }
}

void CvmClient::DescribeZoneInstanceConfigInfosAsync(const DescribeZoneInstanceConfigInfosRequest& request, const DescribeZoneInstanceConfigInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneInstanceConfigInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeZoneInstanceConfigInfosOutcomeCallable CvmClient::DescribeZoneInstanceConfigInfosCallable(const DescribeZoneInstanceConfigInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneInstanceConfigInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneInstanceConfigInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DescribeZonesOutcome CvmClient::DescribeZones(const DescribeZonesRequest &request)
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

void CvmClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DescribeZonesOutcomeCallable CvmClient::DescribeZonesCallable(const DescribeZonesRequest &request)
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

CvmClient::DisassociateInstancesKeyPairsOutcome CvmClient::DisassociateInstancesKeyPairs(const DisassociateInstancesKeyPairsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateInstancesKeyPairs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateInstancesKeyPairsResponse rsp = DisassociateInstancesKeyPairsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateInstancesKeyPairsOutcome(rsp);
        else
            return DisassociateInstancesKeyPairsOutcome(o.GetError());
    }
    else
    {
        return DisassociateInstancesKeyPairsOutcome(outcome.GetError());
    }
}

void CvmClient::DisassociateInstancesKeyPairsAsync(const DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateInstancesKeyPairs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DisassociateInstancesKeyPairsOutcomeCallable CvmClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateInstancesKeyPairsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateInstancesKeyPairs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::DisassociateSecurityGroupsOutcome CvmClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void CvmClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::DisassociateSecurityGroupsOutcomeCallable CvmClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
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

CvmClient::EnterRescueModeOutcome CvmClient::EnterRescueMode(const EnterRescueModeRequest &request)
{
    auto outcome = MakeRequest(request, "EnterRescueMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnterRescueModeResponse rsp = EnterRescueModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnterRescueModeOutcome(rsp);
        else
            return EnterRescueModeOutcome(o.GetError());
    }
    else
    {
        return EnterRescueModeOutcome(outcome.GetError());
    }
}

void CvmClient::EnterRescueModeAsync(const EnterRescueModeRequest& request, const EnterRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnterRescueMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::EnterRescueModeOutcomeCallable CvmClient::EnterRescueModeCallable(const EnterRescueModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnterRescueModeOutcome()>>(
        [this, request]()
        {
            return this->EnterRescueMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ExitRescueModeOutcome CvmClient::ExitRescueMode(const ExitRescueModeRequest &request)
{
    auto outcome = MakeRequest(request, "ExitRescueMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExitRescueModeResponse rsp = ExitRescueModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExitRescueModeOutcome(rsp);
        else
            return ExitRescueModeOutcome(o.GetError());
    }
    else
    {
        return ExitRescueModeOutcome(outcome.GetError());
    }
}

void CvmClient::ExitRescueModeAsync(const ExitRescueModeRequest& request, const ExitRescueModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExitRescueMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ExitRescueModeOutcomeCallable CvmClient::ExitRescueModeCallable(const ExitRescueModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExitRescueModeOutcome()>>(
        [this, request]()
        {
            return this->ExitRescueMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ExportImagesOutcome CvmClient::ExportImages(const ExportImagesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportImagesResponse rsp = ExportImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportImagesOutcome(rsp);
        else
            return ExportImagesOutcome(o.GetError());
    }
    else
    {
        return ExportImagesOutcome(outcome.GetError());
    }
}

void CvmClient::ExportImagesAsync(const ExportImagesRequest& request, const ExportImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ExportImagesOutcomeCallable CvmClient::ExportImagesCallable(const ExportImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportImagesOutcome()>>(
        [this, request]()
        {
            return this->ExportImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ImportImageOutcome CvmClient::ImportImage(const ImportImageRequest &request)
{
    auto outcome = MakeRequest(request, "ImportImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportImageResponse rsp = ImportImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportImageOutcome(rsp);
        else
            return ImportImageOutcome(o.GetError());
    }
    else
    {
        return ImportImageOutcome(outcome.GetError());
    }
}

void CvmClient::ImportImageAsync(const ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ImportImageOutcomeCallable CvmClient::ImportImageCallable(const ImportImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportImageOutcome()>>(
        [this, request]()
        {
            return this->ImportImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ImportInstancesActionTimerOutcome CvmClient::ImportInstancesActionTimer(const ImportInstancesActionTimerRequest &request)
{
    auto outcome = MakeRequest(request, "ImportInstancesActionTimer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportInstancesActionTimerResponse rsp = ImportInstancesActionTimerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportInstancesActionTimerOutcome(rsp);
        else
            return ImportInstancesActionTimerOutcome(o.GetError());
    }
    else
    {
        return ImportInstancesActionTimerOutcome(outcome.GetError());
    }
}

void CvmClient::ImportInstancesActionTimerAsync(const ImportInstancesActionTimerRequest& request, const ImportInstancesActionTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportInstancesActionTimer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ImportInstancesActionTimerOutcomeCallable CvmClient::ImportInstancesActionTimerCallable(const ImportInstancesActionTimerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportInstancesActionTimerOutcome()>>(
        [this, request]()
        {
            return this->ImportInstancesActionTimer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ImportKeyPairOutcome CvmClient::ImportKeyPair(const ImportKeyPairRequest &request)
{
    auto outcome = MakeRequest(request, "ImportKeyPair");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportKeyPairResponse rsp = ImportKeyPairResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportKeyPairOutcome(rsp);
        else
            return ImportKeyPairOutcome(o.GetError());
    }
    else
    {
        return ImportKeyPairOutcome(outcome.GetError());
    }
}

void CvmClient::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportKeyPair(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ImportKeyPairOutcomeCallable CvmClient::ImportKeyPairCallable(const ImportKeyPairRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportKeyPairOutcome()>>(
        [this, request]()
        {
            return this->ImportKeyPair(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquirePricePurchaseReservedInstancesOfferingOutcome CvmClient::InquirePricePurchaseReservedInstancesOffering(const InquirePricePurchaseReservedInstancesOfferingRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePricePurchaseReservedInstancesOffering");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePricePurchaseReservedInstancesOfferingResponse rsp = InquirePricePurchaseReservedInstancesOfferingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePricePurchaseReservedInstancesOfferingOutcome(rsp);
        else
            return InquirePricePurchaseReservedInstancesOfferingOutcome(o.GetError());
    }
    else
    {
        return InquirePricePurchaseReservedInstancesOfferingOutcome(outcome.GetError());
    }
}

void CvmClient::InquirePricePurchaseReservedInstancesOfferingAsync(const InquirePricePurchaseReservedInstancesOfferingRequest& request, const InquirePricePurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquirePricePurchaseReservedInstancesOffering(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquirePricePurchaseReservedInstancesOfferingOutcomeCallable CvmClient::InquirePricePurchaseReservedInstancesOfferingCallable(const InquirePricePurchaseReservedInstancesOfferingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquirePricePurchaseReservedInstancesOfferingOutcome()>>(
        [this, request]()
        {
            return this->InquirePricePurchaseReservedInstancesOffering(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceModifyInstancesChargeTypeOutcome CvmClient::InquiryPriceModifyInstancesChargeType(const InquiryPriceModifyInstancesChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceModifyInstancesChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceModifyInstancesChargeTypeResponse rsp = InquiryPriceModifyInstancesChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceModifyInstancesChargeTypeOutcome(rsp);
        else
            return InquiryPriceModifyInstancesChargeTypeOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceModifyInstancesChargeTypeOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceModifyInstancesChargeTypeAsync(const InquiryPriceModifyInstancesChargeTypeRequest& request, const InquiryPriceModifyInstancesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceModifyInstancesChargeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceModifyInstancesChargeTypeOutcomeCallable CvmClient::InquiryPriceModifyInstancesChargeTypeCallable(const InquiryPriceModifyInstancesChargeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceModifyInstancesChargeTypeOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceModifyInstancesChargeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceRenewHostsOutcome CvmClient::InquiryPriceRenewHosts(const InquiryPriceRenewHostsRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewHostsResponse rsp = InquiryPriceRenewHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewHostsOutcome(rsp);
        else
            return InquiryPriceRenewHostsOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewHostsOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceRenewHostsAsync(const InquiryPriceRenewHostsRequest& request, const InquiryPriceRenewHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceRenewHostsOutcomeCallable CvmClient::InquiryPriceRenewHostsCallable(const InquiryPriceRenewHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewHostsOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceRenewInstancesOutcome CvmClient::InquiryPriceRenewInstances(const InquiryPriceRenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewInstancesResponse rsp = InquiryPriceRenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewInstancesOutcome(rsp);
        else
            return InquiryPriceRenewInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceRenewInstancesAsync(const InquiryPriceRenewInstancesRequest& request, const InquiryPriceRenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRenewInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceRenewInstancesOutcomeCallable CvmClient::InquiryPriceRenewInstancesCallable(const InquiryPriceRenewInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRenewInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRenewInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceResetInstanceOutcome CvmClient::InquiryPriceResetInstance(const InquiryPriceResetInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResetInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResetInstanceResponse rsp = InquiryPriceResetInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResetInstanceOutcome(rsp);
        else
            return InquiryPriceResetInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResetInstanceOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceResetInstanceAsync(const InquiryPriceResetInstanceRequest& request, const InquiryPriceResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResetInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceResetInstanceOutcomeCallable CvmClient::InquiryPriceResetInstanceCallable(const InquiryPriceResetInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResetInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResetInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthOutcome CvmClient::InquiryPriceResetInstancesInternetMaxBandwidth(const InquiryPriceResetInstancesInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResetInstancesInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResetInstancesInternetMaxBandwidthResponse rsp = InquiryPriceResetInstancesInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResetInstancesInternetMaxBandwidthOutcome(rsp);
        else
            return InquiryPriceResetInstancesInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResetInstancesInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthAsync(const InquiryPriceResetInstancesInternetMaxBandwidthRequest& request, const InquiryPriceResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResetInstancesInternetMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthCallable(const InquiryPriceResetInstancesInternetMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResetInstancesInternetMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResetInstancesInternetMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceResetInstancesTypeOutcome CvmClient::InquiryPriceResetInstancesType(const InquiryPriceResetInstancesTypeRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResetInstancesType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResetInstancesTypeResponse rsp = InquiryPriceResetInstancesTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResetInstancesTypeOutcome(rsp);
        else
            return InquiryPriceResetInstancesTypeOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResetInstancesTypeOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceResetInstancesTypeAsync(const InquiryPriceResetInstancesTypeRequest& request, const InquiryPriceResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResetInstancesType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceResetInstancesTypeOutcomeCallable CvmClient::InquiryPriceResetInstancesTypeCallable(const InquiryPriceResetInstancesTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResetInstancesTypeOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResetInstancesType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceResizeInstanceDisksOutcome CvmClient::InquiryPriceResizeInstanceDisks(const InquiryPriceResizeInstanceDisksRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceResizeInstanceDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceResizeInstanceDisksResponse rsp = InquiryPriceResizeInstanceDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceResizeInstanceDisksOutcome(rsp);
        else
            return InquiryPriceResizeInstanceDisksOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceResizeInstanceDisksOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceResizeInstanceDisksAsync(const InquiryPriceResizeInstanceDisksRequest& request, const InquiryPriceResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceResizeInstanceDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceResizeInstanceDisksOutcomeCallable CvmClient::InquiryPriceResizeInstanceDisksCallable(const InquiryPriceResizeInstanceDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceResizeInstanceDisksOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceResizeInstanceDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceRunInstancesOutcome CvmClient::InquiryPriceRunInstances(const InquiryPriceRunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRunInstancesResponse rsp = InquiryPriceRunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRunInstancesOutcome(rsp);
        else
            return InquiryPriceRunInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRunInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceRunInstancesAsync(const InquiryPriceRunInstancesRequest& request, const InquiryPriceRunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceRunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceRunInstancesOutcomeCallable CvmClient::InquiryPriceRunInstancesCallable(const InquiryPriceRunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceRunInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceRunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::InquiryPriceTerminateInstancesOutcome CvmClient::InquiryPriceTerminateInstances(const InquiryPriceTerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceTerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceTerminateInstancesResponse rsp = InquiryPriceTerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceTerminateInstancesOutcome(rsp);
        else
            return InquiryPriceTerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceTerminateInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::InquiryPriceTerminateInstancesAsync(const InquiryPriceTerminateInstancesRequest& request, const InquiryPriceTerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceTerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::InquiryPriceTerminateInstancesOutcomeCallable CvmClient::InquiryPriceTerminateInstancesCallable(const InquiryPriceTerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceTerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceTerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyChcAttributeOutcome CvmClient::ModifyChcAttribute(const ModifyChcAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChcAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChcAttributeResponse rsp = ModifyChcAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChcAttributeOutcome(rsp);
        else
            return ModifyChcAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyChcAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyChcAttributeAsync(const ModifyChcAttributeRequest& request, const ModifyChcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyChcAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyChcAttributeOutcomeCallable CvmClient::ModifyChcAttributeCallable(const ModifyChcAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyChcAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyChcAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyDisasterRecoverGroupAttributeOutcome CvmClient::ModifyDisasterRecoverGroupAttribute(const ModifyDisasterRecoverGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDisasterRecoverGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDisasterRecoverGroupAttributeResponse rsp = ModifyDisasterRecoverGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDisasterRecoverGroupAttributeOutcome(rsp);
        else
            return ModifyDisasterRecoverGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDisasterRecoverGroupAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyDisasterRecoverGroupAttributeAsync(const ModifyDisasterRecoverGroupAttributeRequest& request, const ModifyDisasterRecoverGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDisasterRecoverGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyDisasterRecoverGroupAttributeOutcomeCallable CvmClient::ModifyDisasterRecoverGroupAttributeCallable(const ModifyDisasterRecoverGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDisasterRecoverGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDisasterRecoverGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyHostsAttributeOutcome CvmClient::ModifyHostsAttribute(const ModifyHostsAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostsAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostsAttributeResponse rsp = ModifyHostsAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostsAttributeOutcome(rsp);
        else
            return ModifyHostsAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHostsAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyHostsAttributeAsync(const ModifyHostsAttributeRequest& request, const ModifyHostsAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostsAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyHostsAttributeOutcomeCallable CvmClient::ModifyHostsAttributeCallable(const ModifyHostsAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostsAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostsAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyHpcClusterAttributeOutcome CvmClient::ModifyHpcClusterAttribute(const ModifyHpcClusterAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHpcClusterAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHpcClusterAttributeResponse rsp = ModifyHpcClusterAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHpcClusterAttributeOutcome(rsp);
        else
            return ModifyHpcClusterAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHpcClusterAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyHpcClusterAttributeAsync(const ModifyHpcClusterAttributeRequest& request, const ModifyHpcClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHpcClusterAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyHpcClusterAttributeOutcomeCallable CvmClient::ModifyHpcClusterAttributeCallable(const ModifyHpcClusterAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHpcClusterAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHpcClusterAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyImageAttributeOutcome CvmClient::ModifyImageAttribute(const ModifyImageAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageAttributeResponse rsp = ModifyImageAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageAttributeOutcome(rsp);
        else
            return ModifyImageAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyImageAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyImageAttributeAsync(const ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyImageAttributeOutcomeCallable CvmClient::ModifyImageAttributeCallable(const ModifyImageAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyImageSharePermissionOutcome CvmClient::ModifyImageSharePermission(const ModifyImageSharePermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageSharePermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageSharePermissionResponse rsp = ModifyImageSharePermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageSharePermissionOutcome(rsp);
        else
            return ModifyImageSharePermissionOutcome(o.GetError());
    }
    else
    {
        return ModifyImageSharePermissionOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyImageSharePermissionAsync(const ModifyImageSharePermissionRequest& request, const ModifyImageSharePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageSharePermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyImageSharePermissionOutcomeCallable CvmClient::ModifyImageSharePermissionCallable(const ModifyImageSharePermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageSharePermissionOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageSharePermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstanceDiskTypeOutcome CvmClient::ModifyInstanceDiskType(const ModifyInstanceDiskTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceDiskType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceDiskTypeResponse rsp = ModifyInstanceDiskTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceDiskTypeOutcome(rsp);
        else
            return ModifyInstanceDiskTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceDiskTypeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstanceDiskTypeAsync(const ModifyInstanceDiskTypeRequest& request, const ModifyInstanceDiskTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceDiskType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstanceDiskTypeOutcomeCallable CvmClient::ModifyInstanceDiskTypeCallable(const ModifyInstanceDiskTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceDiskTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceDiskType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesAttributeOutcome CvmClient::ModifyInstancesAttribute(const ModifyInstancesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesAttributeResponse rsp = ModifyInstancesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesAttributeOutcome(rsp);
        else
            return ModifyInstancesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesAttributeAsync(const ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesAttributeOutcomeCallable CvmClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesChargeTypeOutcome CvmClient::ModifyInstancesChargeType(const ModifyInstancesChargeTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesChargeType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesChargeTypeResponse rsp = ModifyInstancesChargeTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesChargeTypeOutcome(rsp);
        else
            return ModifyInstancesChargeTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesChargeTypeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesChargeTypeAsync(const ModifyInstancesChargeTypeRequest& request, const ModifyInstancesChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesChargeType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesChargeTypeOutcomeCallable CvmClient::ModifyInstancesChargeTypeCallable(const ModifyInstancesChargeTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesChargeTypeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesChargeType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesDisasterRecoverGroupOutcome CvmClient::ModifyInstancesDisasterRecoverGroup(const ModifyInstancesDisasterRecoverGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesDisasterRecoverGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesDisasterRecoverGroupResponse rsp = ModifyInstancesDisasterRecoverGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesDisasterRecoverGroupOutcome(rsp);
        else
            return ModifyInstancesDisasterRecoverGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesDisasterRecoverGroupOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesDisasterRecoverGroupAsync(const ModifyInstancesDisasterRecoverGroupRequest& request, const ModifyInstancesDisasterRecoverGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesDisasterRecoverGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesDisasterRecoverGroupOutcomeCallable CvmClient::ModifyInstancesDisasterRecoverGroupCallable(const ModifyInstancesDisasterRecoverGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesDisasterRecoverGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesDisasterRecoverGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesProjectOutcome CvmClient::ModifyInstancesProject(const ModifyInstancesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesProjectResponse rsp = ModifyInstancesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesProjectOutcome(rsp);
        else
            return ModifyInstancesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesProjectOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesProjectAsync(const ModifyInstancesProjectRequest& request, const ModifyInstancesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesProjectOutcomeCallable CvmClient::ModifyInstancesProjectCallable(const ModifyInstancesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesRenewFlagOutcome CvmClient::ModifyInstancesRenewFlag(const ModifyInstancesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesRenewFlagResponse rsp = ModifyInstancesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesRenewFlagOutcome(rsp);
        else
            return ModifyInstancesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesRenewFlagOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesRenewFlagAsync(const ModifyInstancesRenewFlagRequest& request, const ModifyInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesRenewFlagOutcomeCallable CvmClient::ModifyInstancesRenewFlagCallable(const ModifyInstancesRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyInstancesVpcAttributeOutcome CvmClient::ModifyInstancesVpcAttribute(const ModifyInstancesVpcAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancesVpcAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancesVpcAttributeResponse rsp = ModifyInstancesVpcAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancesVpcAttributeOutcome(rsp);
        else
            return ModifyInstancesVpcAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancesVpcAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyInstancesVpcAttributeAsync(const ModifyInstancesVpcAttributeRequest& request, const ModifyInstancesVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancesVpcAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyInstancesVpcAttributeOutcomeCallable CvmClient::ModifyInstancesVpcAttributeCallable(const ModifyInstancesVpcAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancesVpcAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancesVpcAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyKeyPairAttributeOutcome CvmClient::ModifyKeyPairAttribute(const ModifyKeyPairAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKeyPairAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKeyPairAttributeResponse rsp = ModifyKeyPairAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKeyPairAttributeOutcome(rsp);
        else
            return ModifyKeyPairAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyKeyPairAttributeOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyKeyPairAttributeAsync(const ModifyKeyPairAttributeRequest& request, const ModifyKeyPairAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyKeyPairAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyKeyPairAttributeOutcomeCallable CvmClient::ModifyKeyPairAttributeCallable(const ModifyKeyPairAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyKeyPairAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyKeyPairAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ModifyLaunchTemplateDefaultVersionOutcome CvmClient::ModifyLaunchTemplateDefaultVersion(const ModifyLaunchTemplateDefaultVersionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLaunchTemplateDefaultVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaunchTemplateDefaultVersionResponse rsp = ModifyLaunchTemplateDefaultVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaunchTemplateDefaultVersionOutcome(rsp);
        else
            return ModifyLaunchTemplateDefaultVersionOutcome(o.GetError());
    }
    else
    {
        return ModifyLaunchTemplateDefaultVersionOutcome(outcome.GetError());
    }
}

void CvmClient::ModifyLaunchTemplateDefaultVersionAsync(const ModifyLaunchTemplateDefaultVersionRequest& request, const ModifyLaunchTemplateDefaultVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLaunchTemplateDefaultVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ModifyLaunchTemplateDefaultVersionOutcomeCallable CvmClient::ModifyLaunchTemplateDefaultVersionCallable(const ModifyLaunchTemplateDefaultVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLaunchTemplateDefaultVersionOutcome()>>(
        [this, request]()
        {
            return this->ModifyLaunchTemplateDefaultVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ProgramFpgaImageOutcome CvmClient::ProgramFpgaImage(const ProgramFpgaImageRequest &request)
{
    auto outcome = MakeRequest(request, "ProgramFpgaImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProgramFpgaImageResponse rsp = ProgramFpgaImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProgramFpgaImageOutcome(rsp);
        else
            return ProgramFpgaImageOutcome(o.GetError());
    }
    else
    {
        return ProgramFpgaImageOutcome(outcome.GetError());
    }
}

void CvmClient::ProgramFpgaImageAsync(const ProgramFpgaImageRequest& request, const ProgramFpgaImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProgramFpgaImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ProgramFpgaImageOutcomeCallable CvmClient::ProgramFpgaImageCallable(const ProgramFpgaImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProgramFpgaImageOutcome()>>(
        [this, request]()
        {
            return this->ProgramFpgaImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::PurchaseReservedInstancesOfferingOutcome CvmClient::PurchaseReservedInstancesOffering(const PurchaseReservedInstancesOfferingRequest &request)
{
    auto outcome = MakeRequest(request, "PurchaseReservedInstancesOffering");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurchaseReservedInstancesOfferingResponse rsp = PurchaseReservedInstancesOfferingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurchaseReservedInstancesOfferingOutcome(rsp);
        else
            return PurchaseReservedInstancesOfferingOutcome(o.GetError());
    }
    else
    {
        return PurchaseReservedInstancesOfferingOutcome(outcome.GetError());
    }
}

void CvmClient::PurchaseReservedInstancesOfferingAsync(const PurchaseReservedInstancesOfferingRequest& request, const PurchaseReservedInstancesOfferingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurchaseReservedInstancesOffering(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::PurchaseReservedInstancesOfferingOutcomeCallable CvmClient::PurchaseReservedInstancesOfferingCallable(const PurchaseReservedInstancesOfferingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PurchaseReservedInstancesOfferingOutcome()>>(
        [this, request]()
        {
            return this->PurchaseReservedInstancesOffering(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RebootInstancesOutcome CvmClient::RebootInstances(const RebootInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RebootInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebootInstancesResponse rsp = RebootInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebootInstancesOutcome(rsp);
        else
            return RebootInstancesOutcome(o.GetError());
    }
    else
    {
        return RebootInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::RebootInstancesAsync(const RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebootInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RebootInstancesOutcomeCallable CvmClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebootInstancesOutcome()>>(
        [this, request]()
        {
            return this->RebootInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RemoveChcAssistVpcOutcome CvmClient::RemoveChcAssistVpc(const RemoveChcAssistVpcRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveChcAssistVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveChcAssistVpcResponse rsp = RemoveChcAssistVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveChcAssistVpcOutcome(rsp);
        else
            return RemoveChcAssistVpcOutcome(o.GetError());
    }
    else
    {
        return RemoveChcAssistVpcOutcome(outcome.GetError());
    }
}

void CvmClient::RemoveChcAssistVpcAsync(const RemoveChcAssistVpcRequest& request, const RemoveChcAssistVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveChcAssistVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RemoveChcAssistVpcOutcomeCallable CvmClient::RemoveChcAssistVpcCallable(const RemoveChcAssistVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveChcAssistVpcOutcome()>>(
        [this, request]()
        {
            return this->RemoveChcAssistVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RemoveChcDeployVpcOutcome CvmClient::RemoveChcDeployVpc(const RemoveChcDeployVpcRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveChcDeployVpc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveChcDeployVpcResponse rsp = RemoveChcDeployVpcResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveChcDeployVpcOutcome(rsp);
        else
            return RemoveChcDeployVpcOutcome(o.GetError());
    }
    else
    {
        return RemoveChcDeployVpcOutcome(outcome.GetError());
    }
}

void CvmClient::RemoveChcDeployVpcAsync(const RemoveChcDeployVpcRequest& request, const RemoveChcDeployVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveChcDeployVpc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RemoveChcDeployVpcOutcomeCallable CvmClient::RemoveChcDeployVpcCallable(const RemoveChcDeployVpcRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveChcDeployVpcOutcome()>>(
        [this, request]()
        {
            return this->RemoveChcDeployVpc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RenewHostsOutcome CvmClient::RenewHosts(const RenewHostsRequest &request)
{
    auto outcome = MakeRequest(request, "RenewHosts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewHostsResponse rsp = RenewHostsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewHostsOutcome(rsp);
        else
            return RenewHostsOutcome(o.GetError());
    }
    else
    {
        return RenewHostsOutcome(outcome.GetError());
    }
}

void CvmClient::RenewHostsAsync(const RenewHostsRequest& request, const RenewHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewHosts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RenewHostsOutcomeCallable CvmClient::RenewHostsCallable(const RenewHostsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewHostsOutcome()>>(
        [this, request]()
        {
            return this->RenewHosts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RenewInstancesOutcome CvmClient::RenewInstances(const RenewInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewInstancesResponse rsp = RenewInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewInstancesOutcome(rsp);
        else
            return RenewInstancesOutcome(o.GetError());
    }
    else
    {
        return RenewInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::RenewInstancesAsync(const RenewInstancesRequest& request, const RenewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RenewInstancesOutcomeCallable CvmClient::RenewInstancesCallable(const RenewInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewInstancesOutcome()>>(
        [this, request]()
        {
            return this->RenewInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RepairTaskControlOutcome CvmClient::RepairTaskControl(const RepairTaskControlRequest &request)
{
    auto outcome = MakeRequest(request, "RepairTaskControl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RepairTaskControlResponse rsp = RepairTaskControlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RepairTaskControlOutcome(rsp);
        else
            return RepairTaskControlOutcome(o.GetError());
    }
    else
    {
        return RepairTaskControlOutcome(outcome.GetError());
    }
}

void CvmClient::RepairTaskControlAsync(const RepairTaskControlRequest& request, const RepairTaskControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RepairTaskControl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RepairTaskControlOutcomeCallable CvmClient::RepairTaskControlCallable(const RepairTaskControlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RepairTaskControlOutcome()>>(
        [this, request]()
        {
            return this->RepairTaskControl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ResetInstanceOutcome CvmClient::ResetInstance(const ResetInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstanceResponse rsp = ResetInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstanceOutcome(rsp);
        else
            return ResetInstanceOutcome(o.GetError());
    }
    else
    {
        return ResetInstanceOutcome(outcome.GetError());
    }
}

void CvmClient::ResetInstanceAsync(const ResetInstanceRequest& request, const ResetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ResetInstanceOutcomeCallable CvmClient::ResetInstanceCallable(const ResetInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstanceOutcome()>>(
        [this, request]()
        {
            return this->ResetInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ResetInstancesInternetMaxBandwidthOutcome CvmClient::ResetInstancesInternetMaxBandwidth(const ResetInstancesInternetMaxBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesInternetMaxBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesInternetMaxBandwidthResponse rsp = ResetInstancesInternetMaxBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesInternetMaxBandwidthOutcome(rsp);
        else
            return ResetInstancesInternetMaxBandwidthOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesInternetMaxBandwidthOutcome(outcome.GetError());
    }
}

void CvmClient::ResetInstancesInternetMaxBandwidthAsync(const ResetInstancesInternetMaxBandwidthRequest& request, const ResetInstancesInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesInternetMaxBandwidth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ResetInstancesInternetMaxBandwidthOutcomeCallable CvmClient::ResetInstancesInternetMaxBandwidthCallable(const ResetInstancesInternetMaxBandwidthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesInternetMaxBandwidthOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesInternetMaxBandwidth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ResetInstancesPasswordOutcome CvmClient::ResetInstancesPassword(const ResetInstancesPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesPasswordResponse rsp = ResetInstancesPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesPasswordOutcome(rsp);
        else
            return ResetInstancesPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesPasswordOutcome(outcome.GetError());
    }
}

void CvmClient::ResetInstancesPasswordAsync(const ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ResetInstancesPasswordOutcomeCallable CvmClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ResetInstancesTypeOutcome CvmClient::ResetInstancesType(const ResetInstancesTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ResetInstancesType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetInstancesTypeResponse rsp = ResetInstancesTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetInstancesTypeOutcome(rsp);
        else
            return ResetInstancesTypeOutcome(o.GetError());
    }
    else
    {
        return ResetInstancesTypeOutcome(outcome.GetError());
    }
}

void CvmClient::ResetInstancesTypeAsync(const ResetInstancesTypeRequest& request, const ResetInstancesTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetInstancesType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ResetInstancesTypeOutcomeCallable CvmClient::ResetInstancesTypeCallable(const ResetInstancesTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetInstancesTypeOutcome()>>(
        [this, request]()
        {
            return this->ResetInstancesType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::ResizeInstanceDisksOutcome CvmClient::ResizeInstanceDisks(const ResizeInstanceDisksRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeInstanceDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeInstanceDisksResponse rsp = ResizeInstanceDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeInstanceDisksOutcome(rsp);
        else
            return ResizeInstanceDisksOutcome(o.GetError());
    }
    else
    {
        return ResizeInstanceDisksOutcome(outcome.GetError());
    }
}

void CvmClient::ResizeInstanceDisksAsync(const ResizeInstanceDisksRequest& request, const ResizeInstanceDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResizeInstanceDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::ResizeInstanceDisksOutcomeCallable CvmClient::ResizeInstanceDisksCallable(const ResizeInstanceDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResizeInstanceDisksOutcome()>>(
        [this, request]()
        {
            return this->ResizeInstanceDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::RunInstancesOutcome CvmClient::RunInstances(const RunInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RunInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunInstancesResponse rsp = RunInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunInstancesOutcome(rsp);
        else
            return RunInstancesOutcome(o.GetError());
    }
    else
    {
        return RunInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::RunInstancesAsync(const RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::RunInstancesOutcomeCallable CvmClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunInstancesOutcome()>>(
        [this, request]()
        {
            return this->RunInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::StartInstancesOutcome CvmClient::StartInstances(const StartInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StartInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartInstancesResponse rsp = StartInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartInstancesOutcome(rsp);
        else
            return StartInstancesOutcome(o.GetError());
    }
    else
    {
        return StartInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::StartInstancesAsync(const StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::StartInstancesOutcomeCallable CvmClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartInstancesOutcome()>>(
        [this, request]()
        {
            return this->StartInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::StopInstancesOutcome CvmClient::StopInstances(const StopInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "StopInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopInstancesResponse rsp = StopInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopInstancesOutcome(rsp);
        else
            return StopInstancesOutcome(o.GetError());
    }
    else
    {
        return StopInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::StopInstancesAsync(const StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::StopInstancesOutcomeCallable CvmClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopInstancesOutcome()>>(
        [this, request]()
        {
            return this->StopInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::SyncImagesOutcome CvmClient::SyncImages(const SyncImagesRequest &request)
{
    auto outcome = MakeRequest(request, "SyncImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncImagesResponse rsp = SyncImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncImagesOutcome(rsp);
        else
            return SyncImagesOutcome(o.GetError());
    }
    else
    {
        return SyncImagesOutcome(outcome.GetError());
    }
}

void CvmClient::SyncImagesAsync(const SyncImagesRequest& request, const SyncImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncImages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::SyncImagesOutcomeCallable CvmClient::SyncImagesCallable(const SyncImagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncImagesOutcome()>>(
        [this, request]()
        {
            return this->SyncImages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CvmClient::TerminateInstancesOutcome CvmClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void CvmClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CvmClient::TerminateInstancesOutcomeCallable CvmClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateInstancesOutcome()>>(
        [this, request]()
        {
            return this->TerminateInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}





