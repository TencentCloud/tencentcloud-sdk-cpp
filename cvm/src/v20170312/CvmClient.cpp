/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const AllocateHostsRequest&;
    using Resp = AllocateHostsResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::AllocateHostsOutcomeCallable CvmClient::AllocateHostsCallable(const AllocateHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateHostsOutcome>>();
    AllocateHostsAsync(
    request,
    [prom](
        const CvmClient*,
        const AllocateHostsRequest&,
        AllocateHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AssociateInstancesKeyPairsRequest&;
    using Resp = AssociateInstancesKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateInstancesKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::AssociateInstancesKeyPairsOutcomeCallable CvmClient::AssociateInstancesKeyPairsCallable(const AssociateInstancesKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateInstancesKeyPairsOutcome>>();
    AssociateInstancesKeyPairsAsync(
    request,
    [prom](
        const CvmClient*,
        const AssociateInstancesKeyPairsRequest&,
        AssociateInstancesKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AssociateSecurityGroupsRequest&;
    using Resp = AssociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::AssociateSecurityGroupsOutcomeCallable CvmClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const CvmClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ConfigureChcAssistVpcRequest&;
    using Resp = ConfigureChcAssistVpcResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureChcAssistVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ConfigureChcAssistVpcOutcomeCallable CvmClient::ConfigureChcAssistVpcCallable(const ConfigureChcAssistVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureChcAssistVpcOutcome>>();
    ConfigureChcAssistVpcAsync(
    request,
    [prom](
        const CvmClient*,
        const ConfigureChcAssistVpcRequest&,
        ConfigureChcAssistVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ConfigureChcDeployVpcRequest&;
    using Resp = ConfigureChcDeployVpcResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureChcDeployVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ConfigureChcDeployVpcOutcomeCallable CvmClient::ConfigureChcDeployVpcCallable(const ConfigureChcDeployVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureChcDeployVpcOutcome>>();
    ConfigureChcDeployVpcAsync(
    request,
    [prom](
        const CvmClient*,
        const ConfigureChcDeployVpcRequest&,
        ConfigureChcDeployVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ConvertOperatingSystemsRequest&;
    using Resp = ConvertOperatingSystemsResponse;

    DoRequestAsync<Req, Resp>(
        "ConvertOperatingSystems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ConvertOperatingSystemsOutcomeCallable CvmClient::ConvertOperatingSystemsCallable(const ConvertOperatingSystemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConvertOperatingSystemsOutcome>>();
    ConvertOperatingSystemsAsync(
    request,
    [prom](
        const CvmClient*,
        const ConvertOperatingSystemsRequest&,
        ConvertOperatingSystemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDisasterRecoverGroupRequest&;
    using Resp = CreateDisasterRecoverGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisasterRecoverGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateDisasterRecoverGroupOutcomeCallable CvmClient::CreateDisasterRecoverGroupCallable(const CreateDisasterRecoverGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisasterRecoverGroupOutcome>>();
    CreateDisasterRecoverGroupAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateDisasterRecoverGroupRequest&,
        CreateDisasterRecoverGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateHpcClusterRequest&;
    using Resp = CreateHpcClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHpcCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateHpcClusterOutcomeCallable CvmClient::CreateHpcClusterCallable(const CreateHpcClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHpcClusterOutcome>>();
    CreateHpcClusterAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateHpcClusterRequest&,
        CreateHpcClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateImageRequest&;
    using Resp = CreateImageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateImageOutcomeCallable CvmClient::CreateImageCallable(const CreateImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageOutcome>>();
    CreateImageAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateImageRequest&,
        CreateImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateKeyPairRequest&;
    using Resp = CreateKeyPairResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKeyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateKeyPairOutcomeCallable CvmClient::CreateKeyPairCallable(const CreateKeyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKeyPairOutcome>>();
    CreateKeyPairAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateKeyPairRequest&,
        CreateKeyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLaunchTemplateRequest&;
    using Resp = CreateLaunchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLaunchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateLaunchTemplateOutcomeCallable CvmClient::CreateLaunchTemplateCallable(const CreateLaunchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLaunchTemplateOutcome>>();
    CreateLaunchTemplateAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateLaunchTemplateRequest&,
        CreateLaunchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLaunchTemplateVersionRequest&;
    using Resp = CreateLaunchTemplateVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLaunchTemplateVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::CreateLaunchTemplateVersionOutcomeCallable CvmClient::CreateLaunchTemplateVersionCallable(const CreateLaunchTemplateVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLaunchTemplateVersionOutcome>>();
    CreateLaunchTemplateVersionAsync(
    request,
    [prom](
        const CvmClient*,
        const CreateLaunchTemplateVersionRequest&,
        CreateLaunchTemplateVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDisasterRecoverGroupsRequest&;
    using Resp = DeleteDisasterRecoverGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDisasterRecoverGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteDisasterRecoverGroupsOutcomeCallable CvmClient::DeleteDisasterRecoverGroupsCallable(const DeleteDisasterRecoverGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDisasterRecoverGroupsOutcome>>();
    DeleteDisasterRecoverGroupsAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteDisasterRecoverGroupsRequest&,
        DeleteDisasterRecoverGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteHpcClustersRequest&;
    using Resp = DeleteHpcClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHpcClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteHpcClustersOutcomeCallable CvmClient::DeleteHpcClustersCallable(const DeleteHpcClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHpcClustersOutcome>>();
    DeleteHpcClustersAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteHpcClustersRequest&,
        DeleteHpcClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteImagesRequest&;
    using Resp = DeleteImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteImagesOutcomeCallable CvmClient::DeleteImagesCallable(const DeleteImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImagesOutcome>>();
    DeleteImagesAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteImagesRequest&,
        DeleteImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteInstancesActionTimerRequest&;
    using Resp = DeleteInstancesActionTimerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstancesActionTimer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteInstancesActionTimerOutcomeCallable CvmClient::DeleteInstancesActionTimerCallable(const DeleteInstancesActionTimerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstancesActionTimerOutcome>>();
    DeleteInstancesActionTimerAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteInstancesActionTimerRequest&,
        DeleteInstancesActionTimerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteKeyPairsRequest&;
    using Resp = DeleteKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteKeyPairsOutcomeCallable CvmClient::DeleteKeyPairsCallable(const DeleteKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKeyPairsOutcome>>();
    DeleteKeyPairsAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteKeyPairsRequest&,
        DeleteKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLaunchTemplateRequest&;
    using Resp = DeleteLaunchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLaunchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteLaunchTemplateOutcomeCallable CvmClient::DeleteLaunchTemplateCallable(const DeleteLaunchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLaunchTemplateOutcome>>();
    DeleteLaunchTemplateAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteLaunchTemplateRequest&,
        DeleteLaunchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLaunchTemplateVersionsRequest&;
    using Resp = DeleteLaunchTemplateVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLaunchTemplateVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DeleteLaunchTemplateVersionsOutcomeCallable CvmClient::DeleteLaunchTemplateVersionsCallable(const DeleteLaunchTemplateVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLaunchTemplateVersionsOutcome>>();
    DeleteLaunchTemplateVersionsAsync(
    request,
    [prom](
        const CvmClient*,
        const DeleteLaunchTemplateVersionsRequest&,
        DeleteLaunchTemplateVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccountQuotaRequest&;
    using Resp = DescribeAccountQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeAccountQuotaOutcomeCallable CvmClient::DescribeAccountQuotaCallable(const DescribeAccountQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountQuotaOutcome>>();
    DescribeAccountQuotaAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeAccountQuotaRequest&,
        DescribeAccountQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeChcDeniedActionsRequest&;
    using Resp = DescribeChcDeniedActionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChcDeniedActions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeChcDeniedActionsOutcomeCallable CvmClient::DescribeChcDeniedActionsCallable(const DescribeChcDeniedActionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChcDeniedActionsOutcome>>();
    DescribeChcDeniedActionsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeChcDeniedActionsRequest&,
        DescribeChcDeniedActionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeChcHostsRequest&;
    using Resp = DescribeChcHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChcHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeChcHostsOutcomeCallable CvmClient::DescribeChcHostsCallable(const DescribeChcHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChcHostsOutcome>>();
    DescribeChcHostsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeChcHostsRequest&,
        DescribeChcHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDisasterRecoverGroupQuotaRequest&;
    using Resp = DescribeDisasterRecoverGroupQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoverGroupQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeDisasterRecoverGroupQuotaOutcomeCallable CvmClient::DescribeDisasterRecoverGroupQuotaCallable(const DescribeDisasterRecoverGroupQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoverGroupQuotaOutcome>>();
    DescribeDisasterRecoverGroupQuotaAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeDisasterRecoverGroupQuotaRequest&,
        DescribeDisasterRecoverGroupQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDisasterRecoverGroupsRequest&;
    using Resp = DescribeDisasterRecoverGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDisasterRecoverGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeDisasterRecoverGroupsOutcomeCallable CvmClient::DescribeDisasterRecoverGroupsCallable(const DescribeDisasterRecoverGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDisasterRecoverGroupsOutcome>>();
    DescribeDisasterRecoverGroupsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeDisasterRecoverGroupsRequest&,
        DescribeDisasterRecoverGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHostsRequest&;
    using Resp = DescribeHostsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeHostsOutcomeCallable CvmClient::DescribeHostsCallable(const DescribeHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostsOutcome>>();
    DescribeHostsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeHostsRequest&,
        DescribeHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHpcClustersRequest&;
    using Resp = DescribeHpcClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHpcClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeHpcClustersOutcomeCallable CvmClient::DescribeHpcClustersCallable(const DescribeHpcClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHpcClustersOutcome>>();
    DescribeHpcClustersAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeHpcClustersRequest&,
        DescribeHpcClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageFromFamilyRequest&;
    using Resp = DescribeImageFromFamilyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageFromFamily", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeImageFromFamilyOutcomeCallable CvmClient::DescribeImageFromFamilyCallable(const DescribeImageFromFamilyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageFromFamilyOutcome>>();
    DescribeImageFromFamilyAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeImageFromFamilyRequest&,
        DescribeImageFromFamilyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageQuotaRequest&;
    using Resp = DescribeImageQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeImageQuotaOutcomeCallable CvmClient::DescribeImageQuotaCallable(const DescribeImageQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageQuotaOutcome>>();
    DescribeImageQuotaAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeImageQuotaRequest&,
        DescribeImageQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageSharePermissionRequest&;
    using Resp = DescribeImageSharePermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageSharePermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeImageSharePermissionOutcomeCallable CvmClient::DescribeImageSharePermissionCallable(const DescribeImageSharePermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageSharePermissionOutcome>>();
    DescribeImageSharePermissionAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeImageSharePermissionRequest&,
        DescribeImageSharePermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImagesRequest&;
    using Resp = DescribeImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeImagesOutcomeCallable CvmClient::DescribeImagesCallable(const DescribeImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImagesOutcome>>();
    DescribeImagesAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeImagesRequest&,
        DescribeImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImportImageOsRequest&;
    using Resp = DescribeImportImageOsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImportImageOs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeImportImageOsOutcomeCallable CvmClient::DescribeImportImageOsCallable(const DescribeImportImageOsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImportImageOsOutcome>>();
    DescribeImportImageOsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeImportImageOsRequest&,
        DescribeImportImageOsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceFamilyConfigsRequest&;
    using Resp = DescribeInstanceFamilyConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceFamilyConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstanceFamilyConfigsOutcomeCallable CvmClient::DescribeInstanceFamilyConfigsCallable(const DescribeInstanceFamilyConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceFamilyConfigsOutcome>>();
    DescribeInstanceFamilyConfigsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstanceFamilyConfigsRequest&,
        DescribeInstanceFamilyConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceInternetBandwidthConfigsRequest&;
    using Resp = DescribeInstanceInternetBandwidthConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceInternetBandwidthConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstanceInternetBandwidthConfigsOutcomeCallable CvmClient::DescribeInstanceInternetBandwidthConfigsCallable(const DescribeInstanceInternetBandwidthConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceInternetBandwidthConfigsOutcome>>();
    DescribeInstanceInternetBandwidthConfigsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstanceInternetBandwidthConfigsRequest&,
        DescribeInstanceInternetBandwidthConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceTypeConfigsRequest&;
    using Resp = DescribeInstanceTypeConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTypeConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstanceTypeConfigsOutcomeCallable CvmClient::DescribeInstanceTypeConfigsCallable(const DescribeInstanceTypeConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTypeConfigsOutcome>>();
    DescribeInstanceTypeConfigsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstanceTypeConfigsRequest&,
        DescribeInstanceTypeConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceVncUrlRequest&;
    using Resp = DescribeInstanceVncUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceVncUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstanceVncUrlOutcomeCallable CvmClient::DescribeInstanceVncUrlCallable(const DescribeInstanceVncUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceVncUrlOutcome>>();
    DescribeInstanceVncUrlAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstanceVncUrlRequest&,
        DescribeInstanceVncUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

void CvmClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesOutcomeCallable CvmClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesActionTimerRequest&;
    using Resp = DescribeInstancesActionTimerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesActionTimer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesActionTimerOutcomeCallable CvmClient::DescribeInstancesActionTimerCallable(const DescribeInstancesActionTimerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesActionTimerOutcome>>();
    DescribeInstancesActionTimerAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesActionTimerRequest&,
        DescribeInstancesActionTimerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesAttributesRequest&;
    using Resp = DescribeInstancesAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesAttributesOutcomeCallable CvmClient::DescribeInstancesAttributesCallable(const DescribeInstancesAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesAttributesOutcome>>();
    DescribeInstancesAttributesAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesAttributesRequest&,
        DescribeInstancesAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesModificationRequest&;
    using Resp = DescribeInstancesModificationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesModification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesModificationOutcomeCallable CvmClient::DescribeInstancesModificationCallable(const DescribeInstancesModificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesModificationOutcome>>();
    DescribeInstancesModificationAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesModificationRequest&,
        DescribeInstancesModificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesOperationLimitRequest&;
    using Resp = DescribeInstancesOperationLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesOperationLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesOperationLimitOutcomeCallable CvmClient::DescribeInstancesOperationLimitCallable(const DescribeInstancesOperationLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOperationLimitOutcome>>();
    DescribeInstancesOperationLimitAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesOperationLimitRequest&,
        DescribeInstancesOperationLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesStatusRequest&;
    using Resp = DescribeInstancesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInstancesStatusOutcomeCallable CvmClient::DescribeInstancesStatusCallable(const DescribeInstancesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesStatusOutcome>>();
    DescribeInstancesStatusAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInstancesStatusRequest&,
        DescribeInstancesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInternetChargeTypeConfigsRequest&;
    using Resp = DescribeInternetChargeTypeConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInternetChargeTypeConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeInternetChargeTypeConfigsOutcomeCallable CvmClient::DescribeInternetChargeTypeConfigsCallable(const DescribeInternetChargeTypeConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInternetChargeTypeConfigsOutcome>>();
    DescribeInternetChargeTypeConfigsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeInternetChargeTypeConfigsRequest&,
        DescribeInternetChargeTypeConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKeyPairsRequest&;
    using Resp = DescribeKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeKeyPairsOutcomeCallable CvmClient::DescribeKeyPairsCallable(const DescribeKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeyPairsOutcome>>();
    DescribeKeyPairsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeKeyPairsRequest&,
        DescribeKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLaunchTemplateVersionsRequest&;
    using Resp = DescribeLaunchTemplateVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLaunchTemplateVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeLaunchTemplateVersionsOutcomeCallable CvmClient::DescribeLaunchTemplateVersionsCallable(const DescribeLaunchTemplateVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLaunchTemplateVersionsOutcome>>();
    DescribeLaunchTemplateVersionsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeLaunchTemplateVersionsRequest&,
        DescribeLaunchTemplateVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLaunchTemplatesRequest&;
    using Resp = DescribeLaunchTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLaunchTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeLaunchTemplatesOutcomeCallable CvmClient::DescribeLaunchTemplatesCallable(const DescribeLaunchTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLaunchTemplatesOutcome>>();
    DescribeLaunchTemplatesAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeLaunchTemplatesRequest&,
        DescribeLaunchTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegionsRequest&;
    using Resp = DescribeRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeRegionsOutcomeCallable CvmClient::DescribeRegionsCallable(const DescribeRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionsOutcome>>();
    DescribeRegionsAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeRegionsRequest&,
        DescribeRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskInfoRequest&;
    using Resp = DescribeTaskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeTaskInfoOutcomeCallable CvmClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskInfoOutcome>>();
    DescribeTaskInfoAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeTaskInfoRequest&,
        DescribeTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeZoneInstanceConfigInfosRequest&;
    using Resp = DescribeZoneInstanceConfigInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneInstanceConfigInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeZoneInstanceConfigInfosOutcomeCallable CvmClient::DescribeZoneInstanceConfigInfosCallable(const DescribeZoneInstanceConfigInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneInstanceConfigInfosOutcome>>();
    DescribeZoneInstanceConfigInfosAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeZoneInstanceConfigInfosRequest&,
        DescribeZoneInstanceConfigInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DescribeZonesOutcomeCallable CvmClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const CvmClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisassociateInstancesKeyPairsRequest&;
    using Resp = DisassociateInstancesKeyPairsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateInstancesKeyPairs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DisassociateInstancesKeyPairsOutcomeCallable CvmClient::DisassociateInstancesKeyPairsCallable(const DisassociateInstancesKeyPairsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateInstancesKeyPairsOutcome>>();
    DisassociateInstancesKeyPairsAsync(
    request,
    [prom](
        const CvmClient*,
        const DisassociateInstancesKeyPairsRequest&,
        DisassociateInstancesKeyPairsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisassociateSecurityGroupsRequest&;
    using Resp = DisassociateSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::DisassociateSecurityGroupsOutcomeCallable CvmClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const CvmClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnterRescueModeRequest&;
    using Resp = EnterRescueModeResponse;

    DoRequestAsync<Req, Resp>(
        "EnterRescueMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::EnterRescueModeOutcomeCallable CvmClient::EnterRescueModeCallable(const EnterRescueModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnterRescueModeOutcome>>();
    EnterRescueModeAsync(
    request,
    [prom](
        const CvmClient*,
        const EnterRescueModeRequest&,
        EnterRescueModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExitRescueModeRequest&;
    using Resp = ExitRescueModeResponse;

    DoRequestAsync<Req, Resp>(
        "ExitRescueMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ExitRescueModeOutcomeCallable CvmClient::ExitRescueModeCallable(const ExitRescueModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExitRescueModeOutcome>>();
    ExitRescueModeAsync(
    request,
    [prom](
        const CvmClient*,
        const ExitRescueModeRequest&,
        ExitRescueModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExportImagesRequest&;
    using Resp = ExportImagesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ExportImagesOutcomeCallable CvmClient::ExportImagesCallable(const ExportImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportImagesOutcome>>();
    ExportImagesAsync(
    request,
    [prom](
        const CvmClient*,
        const ExportImagesRequest&,
        ExportImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImportImageRequest&;
    using Resp = ImportImageResponse;

    DoRequestAsync<Req, Resp>(
        "ImportImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ImportImageOutcomeCallable CvmClient::ImportImageCallable(const ImportImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportImageOutcome>>();
    ImportImageAsync(
    request,
    [prom](
        const CvmClient*,
        const ImportImageRequest&,
        ImportImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImportInstancesActionTimerRequest&;
    using Resp = ImportInstancesActionTimerResponse;

    DoRequestAsync<Req, Resp>(
        "ImportInstancesActionTimer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ImportInstancesActionTimerOutcomeCallable CvmClient::ImportInstancesActionTimerCallable(const ImportInstancesActionTimerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportInstancesActionTimerOutcome>>();
    ImportInstancesActionTimerAsync(
    request,
    [prom](
        const CvmClient*,
        const ImportInstancesActionTimerRequest&,
        ImportInstancesActionTimerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImportKeyPairRequest&;
    using Resp = ImportKeyPairResponse;

    DoRequestAsync<Req, Resp>(
        "ImportKeyPair", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ImportKeyPairOutcomeCallable CvmClient::ImportKeyPairCallable(const ImportKeyPairRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportKeyPairOutcome>>();
    ImportKeyPairAsync(
    request,
    [prom](
        const CvmClient*,
        const ImportKeyPairRequest&,
        ImportKeyPairOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceModifyInstancesChargeTypeRequest&;
    using Resp = InquiryPriceModifyInstancesChargeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceModifyInstancesChargeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceModifyInstancesChargeTypeOutcomeCallable CvmClient::InquiryPriceModifyInstancesChargeTypeCallable(const InquiryPriceModifyInstancesChargeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceModifyInstancesChargeTypeOutcome>>();
    InquiryPriceModifyInstancesChargeTypeAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceModifyInstancesChargeTypeRequest&,
        InquiryPriceModifyInstancesChargeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceRenewHostsRequest&;
    using Resp = InquiryPriceRenewHostsResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceRenewHostsOutcomeCallable CvmClient::InquiryPriceRenewHostsCallable(const InquiryPriceRenewHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewHostsOutcome>>();
    InquiryPriceRenewHostsAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceRenewHostsRequest&,
        InquiryPriceRenewHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceRenewInstancesRequest&;
    using Resp = InquiryPriceRenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceRenewInstancesOutcomeCallable CvmClient::InquiryPriceRenewInstancesCallable(const InquiryPriceRenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewInstancesOutcome>>();
    InquiryPriceRenewInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceRenewInstancesRequest&,
        InquiryPriceRenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceResetInstanceRequest&;
    using Resp = InquiryPriceResetInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResetInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceResetInstanceOutcomeCallable CvmClient::InquiryPriceResetInstanceCallable(const InquiryPriceResetInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResetInstanceOutcome>>();
    InquiryPriceResetInstanceAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceResetInstanceRequest&,
        InquiryPriceResetInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceResetInstancesInternetMaxBandwidthRequest&;
    using Resp = InquiryPriceResetInstancesInternetMaxBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResetInstancesInternetMaxBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthOutcomeCallable CvmClient::InquiryPriceResetInstancesInternetMaxBandwidthCallable(const InquiryPriceResetInstancesInternetMaxBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResetInstancesInternetMaxBandwidthOutcome>>();
    InquiryPriceResetInstancesInternetMaxBandwidthAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceResetInstancesInternetMaxBandwidthRequest&,
        InquiryPriceResetInstancesInternetMaxBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceResetInstancesTypeRequest&;
    using Resp = InquiryPriceResetInstancesTypeResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResetInstancesType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceResetInstancesTypeOutcomeCallable CvmClient::InquiryPriceResetInstancesTypeCallable(const InquiryPriceResetInstancesTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResetInstancesTypeOutcome>>();
    InquiryPriceResetInstancesTypeAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceResetInstancesTypeRequest&,
        InquiryPriceResetInstancesTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceResizeInstanceDisksRequest&;
    using Resp = InquiryPriceResizeInstanceDisksResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceResizeInstanceDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceResizeInstanceDisksOutcomeCallable CvmClient::InquiryPriceResizeInstanceDisksCallable(const InquiryPriceResizeInstanceDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceResizeInstanceDisksOutcome>>();
    InquiryPriceResizeInstanceDisksAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceResizeInstanceDisksRequest&,
        InquiryPriceResizeInstanceDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceRunInstancesRequest&;
    using Resp = InquiryPriceRunInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRunInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceRunInstancesOutcomeCallable CvmClient::InquiryPriceRunInstancesCallable(const InquiryPriceRunInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRunInstancesOutcome>>();
    InquiryPriceRunInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceRunInstancesRequest&,
        InquiryPriceRunInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceTerminateInstancesRequest&;
    using Resp = InquiryPriceTerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceTerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::InquiryPriceTerminateInstancesOutcomeCallable CvmClient::InquiryPriceTerminateInstancesCallable(const InquiryPriceTerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceTerminateInstancesOutcome>>();
    InquiryPriceTerminateInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const InquiryPriceTerminateInstancesRequest&,
        InquiryPriceTerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyChcAttributeRequest&;
    using Resp = ModifyChcAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyChcAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyChcAttributeOutcomeCallable CvmClient::ModifyChcAttributeCallable(const ModifyChcAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyChcAttributeOutcome>>();
    ModifyChcAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyChcAttributeRequest&,
        ModifyChcAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDisasterRecoverGroupAttributeRequest&;
    using Resp = ModifyDisasterRecoverGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDisasterRecoverGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyDisasterRecoverGroupAttributeOutcomeCallable CvmClient::ModifyDisasterRecoverGroupAttributeCallable(const ModifyDisasterRecoverGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDisasterRecoverGroupAttributeOutcome>>();
    ModifyDisasterRecoverGroupAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyDisasterRecoverGroupAttributeRequest&,
        ModifyDisasterRecoverGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHostsAttributeRequest&;
    using Resp = ModifyHostsAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostsAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyHostsAttributeOutcomeCallable CvmClient::ModifyHostsAttributeCallable(const ModifyHostsAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostsAttributeOutcome>>();
    ModifyHostsAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyHostsAttributeRequest&,
        ModifyHostsAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHpcClusterAttributeRequest&;
    using Resp = ModifyHpcClusterAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHpcClusterAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyHpcClusterAttributeOutcomeCallable CvmClient::ModifyHpcClusterAttributeCallable(const ModifyHpcClusterAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHpcClusterAttributeOutcome>>();
    ModifyHpcClusterAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyHpcClusterAttributeRequest&,
        ModifyHpcClusterAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyImageAttributeRequest&;
    using Resp = ModifyImageAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyImageAttributeOutcomeCallable CvmClient::ModifyImageAttributeCallable(const ModifyImageAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageAttributeOutcome>>();
    ModifyImageAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyImageAttributeRequest&,
        ModifyImageAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyImageSharePermissionRequest&;
    using Resp = ModifyImageSharePermissionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageSharePermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyImageSharePermissionOutcomeCallable CvmClient::ModifyImageSharePermissionCallable(const ModifyImageSharePermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageSharePermissionOutcome>>();
    ModifyImageSharePermissionAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyImageSharePermissionRequest&,
        ModifyImageSharePermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstanceDiskTypeRequest&;
    using Resp = ModifyInstanceDiskTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceDiskType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstanceDiskTypeOutcomeCallable CvmClient::ModifyInstanceDiskTypeCallable(const ModifyInstanceDiskTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceDiskTypeOutcome>>();
    ModifyInstanceDiskTypeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstanceDiskTypeRequest&,
        ModifyInstanceDiskTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesAttributeRequest&;
    using Resp = ModifyInstancesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesAttributeOutcomeCallable CvmClient::ModifyInstancesAttributeCallable(const ModifyInstancesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesAttributeOutcome>>();
    ModifyInstancesAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesAttributeRequest&,
        ModifyInstancesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesChargeTypeRequest&;
    using Resp = ModifyInstancesChargeTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesChargeType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesChargeTypeOutcomeCallable CvmClient::ModifyInstancesChargeTypeCallable(const ModifyInstancesChargeTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesChargeTypeOutcome>>();
    ModifyInstancesChargeTypeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesChargeTypeRequest&,
        ModifyInstancesChargeTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesDisasterRecoverGroupRequest&;
    using Resp = ModifyInstancesDisasterRecoverGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesDisasterRecoverGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesDisasterRecoverGroupOutcomeCallable CvmClient::ModifyInstancesDisasterRecoverGroupCallable(const ModifyInstancesDisasterRecoverGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesDisasterRecoverGroupOutcome>>();
    ModifyInstancesDisasterRecoverGroupAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesDisasterRecoverGroupRequest&,
        ModifyInstancesDisasterRecoverGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesProjectRequest&;
    using Resp = ModifyInstancesProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesProjectOutcomeCallable CvmClient::ModifyInstancesProjectCallable(const ModifyInstancesProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesProjectOutcome>>();
    ModifyInstancesProjectAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesProjectRequest&,
        ModifyInstancesProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesRenewFlagRequest&;
    using Resp = ModifyInstancesRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesRenewFlagOutcomeCallable CvmClient::ModifyInstancesRenewFlagCallable(const ModifyInstancesRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesRenewFlagOutcome>>();
    ModifyInstancesRenewFlagAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesRenewFlagRequest&,
        ModifyInstancesRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstancesVpcAttributeRequest&;
    using Resp = ModifyInstancesVpcAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancesVpcAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyInstancesVpcAttributeOutcomeCallable CvmClient::ModifyInstancesVpcAttributeCallable(const ModifyInstancesVpcAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancesVpcAttributeOutcome>>();
    ModifyInstancesVpcAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyInstancesVpcAttributeRequest&,
        ModifyInstancesVpcAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyKeyPairAttributeRequest&;
    using Resp = ModifyKeyPairAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKeyPairAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyKeyPairAttributeOutcomeCallable CvmClient::ModifyKeyPairAttributeCallable(const ModifyKeyPairAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKeyPairAttributeOutcome>>();
    ModifyKeyPairAttributeAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyKeyPairAttributeRequest&,
        ModifyKeyPairAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLaunchTemplateDefaultVersionRequest&;
    using Resp = ModifyLaunchTemplateDefaultVersionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLaunchTemplateDefaultVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ModifyLaunchTemplateDefaultVersionOutcomeCallable CvmClient::ModifyLaunchTemplateDefaultVersionCallable(const ModifyLaunchTemplateDefaultVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLaunchTemplateDefaultVersionOutcome>>();
    ModifyLaunchTemplateDefaultVersionAsync(
    request,
    [prom](
        const CvmClient*,
        const ModifyLaunchTemplateDefaultVersionRequest&,
        ModifyLaunchTemplateDefaultVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProgramFpgaImageRequest&;
    using Resp = ProgramFpgaImageResponse;

    DoRequestAsync<Req, Resp>(
        "ProgramFpgaImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ProgramFpgaImageOutcomeCallable CvmClient::ProgramFpgaImageCallable(const ProgramFpgaImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProgramFpgaImageOutcome>>();
    ProgramFpgaImageAsync(
    request,
    [prom](
        const CvmClient*,
        const ProgramFpgaImageRequest&,
        ProgramFpgaImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RebootInstancesRequest&;
    using Resp = RebootInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RebootInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RebootInstancesOutcomeCallable CvmClient::RebootInstancesCallable(const RebootInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebootInstancesOutcome>>();
    RebootInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const RebootInstancesRequest&,
        RebootInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveChcAssistVpcRequest&;
    using Resp = RemoveChcAssistVpcResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveChcAssistVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RemoveChcAssistVpcOutcomeCallable CvmClient::RemoveChcAssistVpcCallable(const RemoveChcAssistVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveChcAssistVpcOutcome>>();
    RemoveChcAssistVpcAsync(
    request,
    [prom](
        const CvmClient*,
        const RemoveChcAssistVpcRequest&,
        RemoveChcAssistVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveChcDeployVpcRequest&;
    using Resp = RemoveChcDeployVpcResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveChcDeployVpc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RemoveChcDeployVpcOutcomeCallable CvmClient::RemoveChcDeployVpcCallable(const RemoveChcDeployVpcRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveChcDeployVpcOutcome>>();
    RemoveChcDeployVpcAsync(
    request,
    [prom](
        const CvmClient*,
        const RemoveChcDeployVpcRequest&,
        RemoveChcDeployVpcOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RenewHostsRequest&;
    using Resp = RenewHostsResponse;

    DoRequestAsync<Req, Resp>(
        "RenewHosts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RenewHostsOutcomeCallable CvmClient::RenewHostsCallable(const RenewHostsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewHostsOutcome>>();
    RenewHostsAsync(
    request,
    [prom](
        const CvmClient*,
        const RenewHostsRequest&,
        RenewHostsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RenewInstancesRequest&;
    using Resp = RenewInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RenewInstancesOutcomeCallable CvmClient::RenewInstancesCallable(const RenewInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstancesOutcome>>();
    RenewInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const RenewInstancesRequest&,
        RenewInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RepairTaskControlRequest&;
    using Resp = RepairTaskControlResponse;

    DoRequestAsync<Req, Resp>(
        "RepairTaskControl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RepairTaskControlOutcomeCallable CvmClient::RepairTaskControlCallable(const RepairTaskControlRequest &request)
{
    const auto prom = std::make_shared<std::promise<RepairTaskControlOutcome>>();
    RepairTaskControlAsync(
    request,
    [prom](
        const CvmClient*,
        const RepairTaskControlRequest&,
        RepairTaskControlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetInstanceRequest&;
    using Resp = ResetInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ResetInstanceOutcomeCallable CvmClient::ResetInstanceCallable(const ResetInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstanceOutcome>>();
    ResetInstanceAsync(
    request,
    [prom](
        const CvmClient*,
        const ResetInstanceRequest&,
        ResetInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetInstancesInternetMaxBandwidthRequest&;
    using Resp = ResetInstancesInternetMaxBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesInternetMaxBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ResetInstancesInternetMaxBandwidthOutcomeCallable CvmClient::ResetInstancesInternetMaxBandwidthCallable(const ResetInstancesInternetMaxBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesInternetMaxBandwidthOutcome>>();
    ResetInstancesInternetMaxBandwidthAsync(
    request,
    [prom](
        const CvmClient*,
        const ResetInstancesInternetMaxBandwidthRequest&,
        ResetInstancesInternetMaxBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetInstancesPasswordRequest&;
    using Resp = ResetInstancesPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ResetInstancesPasswordOutcomeCallable CvmClient::ResetInstancesPasswordCallable(const ResetInstancesPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesPasswordOutcome>>();
    ResetInstancesPasswordAsync(
    request,
    [prom](
        const CvmClient*,
        const ResetInstancesPasswordRequest&,
        ResetInstancesPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetInstancesTypeRequest&;
    using Resp = ResetInstancesTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ResetInstancesType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ResetInstancesTypeOutcomeCallable CvmClient::ResetInstancesTypeCallable(const ResetInstancesTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetInstancesTypeOutcome>>();
    ResetInstancesTypeAsync(
    request,
    [prom](
        const CvmClient*,
        const ResetInstancesTypeRequest&,
        ResetInstancesTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResizeInstanceDisksRequest&;
    using Resp = ResizeInstanceDisksResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeInstanceDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::ResizeInstanceDisksOutcomeCallable CvmClient::ResizeInstanceDisksCallable(const ResizeInstanceDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeInstanceDisksOutcome>>();
    ResizeInstanceDisksAsync(
    request,
    [prom](
        const CvmClient*,
        const ResizeInstanceDisksRequest&,
        ResizeInstanceDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RunInstancesRequest&;
    using Resp = RunInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RunInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::RunInstancesOutcomeCallable CvmClient::RunInstancesCallable(const RunInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunInstancesOutcome>>();
    RunInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const RunInstancesRequest&,
        RunInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartInstancesRequest&;
    using Resp = StartInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StartInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::StartInstancesOutcomeCallable CvmClient::StartInstancesCallable(const StartInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartInstancesOutcome>>();
    StartInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const StartInstancesRequest&,
        StartInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopInstancesRequest&;
    using Resp = StopInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "StopInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::StopInstancesOutcomeCallable CvmClient::StopInstancesCallable(const StopInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopInstancesOutcome>>();
    StopInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const StopInstancesRequest&,
        StopInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SyncImagesRequest&;
    using Resp = SyncImagesResponse;

    DoRequestAsync<Req, Resp>(
        "SyncImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::SyncImagesOutcomeCallable CvmClient::SyncImagesCallable(const SyncImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncImagesOutcome>>();
    SyncImagesAsync(
    request,
    [prom](
        const CvmClient*,
        const SyncImagesRequest&,
        SyncImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CvmClient::TerminateInstancesOutcomeCallable CvmClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const CvmClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

