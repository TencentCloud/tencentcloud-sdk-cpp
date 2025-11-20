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
    using Req = const AddMetricScaleStrategyRequest&;
    using Resp = AddMetricScaleStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "AddMetricScaleStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::AddMetricScaleStrategyOutcomeCallable EmrClient::AddMetricScaleStrategyCallable(const AddMetricScaleStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddMetricScaleStrategyOutcome>>();
    AddMetricScaleStrategyAsync(
    request,
    [prom](
        const EmrClient*,
        const AddMetricScaleStrategyRequest&,
        AddMetricScaleStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddNodeResourceConfigRequest&;
    using Resp = AddNodeResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "AddNodeResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::AddNodeResourceConfigOutcomeCallable EmrClient::AddNodeResourceConfigCallable(const AddNodeResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNodeResourceConfigOutcome>>();
    AddNodeResourceConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const AddNodeResourceConfigRequest&,
        AddNodeResourceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AddUsersForUserManagerRequest&;
    using Resp = AddUsersForUserManagerResponse;

    DoRequestAsync<Req, Resp>(
        "AddUsersForUserManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::AddUsersForUserManagerOutcomeCallable EmrClient::AddUsersForUserManagerCallable(const AddUsersForUserManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddUsersForUserManagerOutcome>>();
    AddUsersForUserManagerAsync(
    request,
    [prom](
        const EmrClient*,
        const AddUsersForUserManagerRequest&,
        AddUsersForUserManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachDisksRequest&;
    using Resp = AttachDisksResponse;

    DoRequestAsync<Req, Resp>(
        "AttachDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::AttachDisksOutcomeCallable EmrClient::AttachDisksCallable(const AttachDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachDisksOutcome>>();
    AttachDisksAsync(
    request,
    [prom](
        const EmrClient*,
        const AttachDisksRequest&,
        AttachDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EmrClient::ConvertPreToPostClusterOutcome EmrClient::ConvertPreToPostCluster(const ConvertPreToPostClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ConvertPreToPostCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConvertPreToPostClusterResponse rsp = ConvertPreToPostClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConvertPreToPostClusterOutcome(rsp);
        else
            return ConvertPreToPostClusterOutcome(o.GetError());
    }
    else
    {
        return ConvertPreToPostClusterOutcome(outcome.GetError());
    }
}

void EmrClient::ConvertPreToPostClusterAsync(const ConvertPreToPostClusterRequest& request, const ConvertPreToPostClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConvertPreToPostClusterRequest&;
    using Resp = ConvertPreToPostClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ConvertPreToPostCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ConvertPreToPostClusterOutcomeCallable EmrClient::ConvertPreToPostClusterCallable(const ConvertPreToPostClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConvertPreToPostClusterOutcome>>();
    ConvertPreToPostClusterAsync(
    request,
    [prom](
        const EmrClient*,
        const ConvertPreToPostClusterRequest&,
        ConvertPreToPostClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCloudInstanceRequest&;
    using Resp = CreateCloudInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::CreateCloudInstanceOutcomeCallable EmrClient::CreateCloudInstanceCallable(const CreateCloudInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudInstanceOutcome>>();
    CreateCloudInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const CreateCloudInstanceRequest&,
        CreateCloudInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::CreateClusterOutcomeCallable EmrClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const EmrClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateGroupsSTDRequest&;
    using Resp = CreateGroupsSTDResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroupsSTD", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::CreateGroupsSTDOutcomeCallable EmrClient::CreateGroupsSTDCallable(const CreateGroupsSTDRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupsSTDOutcome>>();
    CreateGroupsSTDAsync(
    request,
    [prom](
        const EmrClient*,
        const CreateGroupsSTDRequest&,
        CreateGroupsSTDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::CreateInstanceOutcomeCallable EmrClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSLInstanceRequest&;
    using Resp = CreateSLInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSLInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::CreateSLInstanceOutcomeCallable EmrClient::CreateSLInstanceCallable(const CreateSLInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSLInstanceOutcome>>();
    CreateSLInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const CreateSLInstanceRequest&,
        CreateSLInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAutoScaleStrategyRequest&;
    using Resp = DeleteAutoScaleStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAutoScaleStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DeleteAutoScaleStrategyOutcomeCallable EmrClient::DeleteAutoScaleStrategyCallable(const DeleteAutoScaleStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAutoScaleStrategyOutcome>>();
    DeleteAutoScaleStrategyAsync(
    request,
    [prom](
        const EmrClient*,
        const DeleteAutoScaleStrategyRequest&,
        DeleteAutoScaleStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGroupsSTDRequest&;
    using Resp = DeleteGroupsSTDResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroupsSTD", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DeleteGroupsSTDOutcomeCallable EmrClient::DeleteGroupsSTDCallable(const DeleteGroupsSTDRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupsSTDOutcome>>();
    DeleteGroupsSTDAsync(
    request,
    [prom](
        const EmrClient*,
        const DeleteGroupsSTDRequest&,
        DeleteGroupsSTDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteNodeResourceConfigRequest&;
    using Resp = DeleteNodeResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNodeResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DeleteNodeResourceConfigOutcomeCallable EmrClient::DeleteNodeResourceConfigCallable(const DeleteNodeResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNodeResourceConfigOutcome>>();
    DeleteNodeResourceConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const DeleteNodeResourceConfigRequest&,
        DeleteNodeResourceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserManagerUserListRequest&;
    using Resp = DeleteUserManagerUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserManagerUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DeleteUserManagerUserListOutcomeCallable EmrClient::DeleteUserManagerUserListCallable(const DeleteUserManagerUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserManagerUserListOutcome>>();
    DeleteUserManagerUserListAsync(
    request,
    [prom](
        const EmrClient*,
        const DeleteUserManagerUserListRequest&,
        DeleteUserManagerUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeployYarnConfRequest&;
    using Resp = DeployYarnConfResponse;

    DoRequestAsync<Req, Resp>(
        "DeployYarnConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DeployYarnConfOutcomeCallable EmrClient::DeployYarnConfCallable(const DeployYarnConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployYarnConfOutcome>>();
    DeployYarnConfAsync(
    request,
    [prom](
        const EmrClient*,
        const DeployYarnConfRequest&,
        DeployYarnConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScaleGroupGlobalConfRequest&;
    using Resp = DescribeAutoScaleGroupGlobalConfResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScaleGroupGlobalConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeAutoScaleGroupGlobalConfOutcomeCallable EmrClient::DescribeAutoScaleGroupGlobalConfCallable(const DescribeAutoScaleGroupGlobalConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScaleGroupGlobalConfOutcome>>();
    DescribeAutoScaleGroupGlobalConfAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeAutoScaleGroupGlobalConfRequest&,
        DescribeAutoScaleGroupGlobalConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScaleRecordsRequest&;
    using Resp = DescribeAutoScaleRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScaleRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeAutoScaleRecordsOutcomeCallable EmrClient::DescribeAutoScaleRecordsCallable(const DescribeAutoScaleRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScaleRecordsOutcome>>();
    DescribeAutoScaleRecordsAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeAutoScaleRecordsRequest&,
        DescribeAutoScaleRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAutoScaleStrategiesRequest&;
    using Resp = DescribeAutoScaleStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScaleStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeAutoScaleStrategiesOutcomeCallable EmrClient::DescribeAutoScaleStrategiesCallable(const DescribeAutoScaleStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScaleStrategiesOutcome>>();
    DescribeAutoScaleStrategiesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeAutoScaleStrategiesRequest&,
        DescribeAutoScaleStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClusterFlowStatusDetailRequest&;
    using Resp = DescribeClusterFlowStatusDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterFlowStatusDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeClusterFlowStatusDetailOutcomeCallable EmrClient::DescribeClusterFlowStatusDetailCallable(const DescribeClusterFlowStatusDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterFlowStatusDetailOutcome>>();
    DescribeClusterFlowStatusDetailAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeClusterFlowStatusDetailRequest&,
        DescribeClusterFlowStatusDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClusterNodesRequest&;
    using Resp = DescribeClusterNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeClusterNodesOutcomeCallable EmrClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterNodesOutcome>>();
    DescribeClusterNodesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeClusterNodesRequest&,
        DescribeClusterNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCvmQuotaRequest&;
    using Resp = DescribeCvmQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCvmQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeCvmQuotaOutcomeCallable EmrClient::DescribeCvmQuotaCallable(const DescribeCvmQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCvmQuotaOutcome>>();
    DescribeCvmQuotaAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeCvmQuotaRequest&,
        DescribeCvmQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDAGInfoRequest&;
    using Resp = DescribeDAGInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDAGInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeDAGInfoOutcomeCallable EmrClient::DescribeDAGInfoCallable(const DescribeDAGInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDAGInfoOutcome>>();
    DescribeDAGInfoAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeDAGInfoRequest&,
        DescribeDAGInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEmrApplicationStaticsRequest&;
    using Resp = DescribeEmrApplicationStaticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEmrApplicationStatics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeEmrApplicationStaticsOutcomeCallable EmrClient::DescribeEmrApplicationStaticsCallable(const DescribeEmrApplicationStaticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEmrApplicationStaticsOutcome>>();
    DescribeEmrApplicationStaticsAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeEmrApplicationStaticsRequest&,
        DescribeEmrApplicationStaticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEmrOverviewMetricsRequest&;
    using Resp = DescribeEmrOverviewMetricsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEmrOverviewMetrics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeEmrOverviewMetricsOutcomeCallable EmrClient::DescribeEmrOverviewMetricsCallable(const DescribeEmrOverviewMetricsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEmrOverviewMetricsOutcome>>();
    DescribeEmrOverviewMetricsAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeEmrOverviewMetricsRequest&,
        DescribeEmrOverviewMetricsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGlobalConfigRequest&;
    using Resp = DescribeGlobalConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeGlobalConfigOutcomeCallable EmrClient::DescribeGlobalConfigCallable(const DescribeGlobalConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalConfigOutcome>>();
    DescribeGlobalConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeGlobalConfigRequest&,
        DescribeGlobalConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGroupsSTDRequest&;
    using Resp = DescribeGroupsSTDResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupsSTD", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeGroupsSTDOutcomeCallable EmrClient::DescribeGroupsSTDCallable(const DescribeGroupsSTDRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupsSTDOutcome>>();
    DescribeGroupsSTDAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeGroupsSTDRequest&,
        DescribeGroupsSTDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHBaseTableOverviewRequest&;
    using Resp = DescribeHBaseTableOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHBaseTableOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeHBaseTableOverviewOutcomeCallable EmrClient::DescribeHBaseTableOverviewCallable(const DescribeHBaseTableOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHBaseTableOverviewOutcome>>();
    DescribeHBaseTableOverviewAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeHBaseTableOverviewRequest&,
        DescribeHBaseTableOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHDFSStorageInfoRequest&;
    using Resp = DescribeHDFSStorageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHDFSStorageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeHDFSStorageInfoOutcomeCallable EmrClient::DescribeHDFSStorageInfoCallable(const DescribeHDFSStorageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHDFSStorageInfoOutcome>>();
    DescribeHDFSStorageInfoAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeHDFSStorageInfoRequest&,
        DescribeHDFSStorageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHiveQueriesRequest&;
    using Resp = DescribeHiveQueriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHiveQueries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeHiveQueriesOutcomeCallable EmrClient::DescribeHiveQueriesCallable(const DescribeHiveQueriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHiveQueriesOutcome>>();
    DescribeHiveQueriesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeHiveQueriesRequest&,
        DescribeHiveQueriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImpalaQueriesRequest&;
    using Resp = DescribeImpalaQueriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImpalaQueries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeImpalaQueriesOutcomeCallable EmrClient::DescribeImpalaQueriesCallable(const DescribeImpalaQueriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImpalaQueriesOutcome>>();
    DescribeImpalaQueriesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeImpalaQueriesRequest&,
        DescribeImpalaQueriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInsightListRequest&;
    using Resp = DescribeInsightListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInsightList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeInsightListOutcomeCallable EmrClient::DescribeInsightListCallable(const DescribeInsightListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInsightListOutcome>>();
    DescribeInsightListAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeInsightListRequest&,
        DescribeInsightListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInspectionTaskResultRequest&;
    using Resp = DescribeInspectionTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInspectionTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeInspectionTaskResultOutcomeCallable EmrClient::DescribeInspectionTaskResultCallable(const DescribeInspectionTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInspectionTaskResultOutcome>>();
    DescribeInspectionTaskResultAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeInspectionTaskResultRequest&,
        DescribeInspectionTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceRenewNodesRequest&;
    using Resp = DescribeInstanceRenewNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceRenewNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeInstanceRenewNodesOutcomeCallable EmrClient::DescribeInstanceRenewNodesCallable(const DescribeInstanceRenewNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceRenewNodesOutcome>>();
    DescribeInstanceRenewNodesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeInstanceRenewNodesRequest&,
        DescribeInstanceRenewNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeInstancesOutcomeCallable EmrClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstancesListRequest&;
    using Resp = DescribeInstancesListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeInstancesListOutcomeCallable EmrClient::DescribeInstancesListCallable(const DescribeInstancesListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesListOutcome>>();
    DescribeInstancesListAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeInstancesListRequest&,
        DescribeInstancesListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeJobFlowRequest&;
    using Resp = DescribeJobFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeJobFlowOutcomeCallable EmrClient::DescribeJobFlowCallable(const DescribeJobFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobFlowOutcome>>();
    DescribeJobFlowAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeJobFlowRequest&,
        DescribeJobFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeKyuubiQueryInfoRequest&;
    using Resp = DescribeKyuubiQueryInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKyuubiQueryInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeKyuubiQueryInfoOutcomeCallable EmrClient::DescribeKyuubiQueryInfoCallable(const DescribeKyuubiQueryInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKyuubiQueryInfoOutcome>>();
    DescribeKyuubiQueryInfoAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeKyuubiQueryInfoRequest&,
        DescribeKyuubiQueryInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeNodeDataDisksRequest&;
    using Resp = DescribeNodeDataDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeDataDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeNodeDataDisksOutcomeCallable EmrClient::DescribeNodeDataDisksCallable(const DescribeNodeDataDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeDataDisksOutcome>>();
    DescribeNodeDataDisksAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeNodeDataDisksRequest&,
        DescribeNodeDataDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeNodeResourceConfigFastRequest&;
    using Resp = DescribeNodeResourceConfigFastResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeResourceConfigFast", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeNodeResourceConfigFastOutcomeCallable EmrClient::DescribeNodeResourceConfigFastCallable(const DescribeNodeResourceConfigFastRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeResourceConfigFastOutcome>>();
    DescribeNodeResourceConfigFastAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeNodeResourceConfigFastRequest&,
        DescribeNodeResourceConfigFastOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EmrClient::DescribeNodeSpecOutcome EmrClient::DescribeNodeSpec(const DescribeNodeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodeSpecResponse rsp = DescribeNodeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodeSpecOutcome(rsp);
        else
            return DescribeNodeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeNodeSpecOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeNodeSpecAsync(const DescribeNodeSpecRequest& request, const DescribeNodeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodeSpecRequest&;
    using Resp = DescribeNodeSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodeSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeNodeSpecOutcomeCallable EmrClient::DescribeNodeSpecCallable(const DescribeNodeSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodeSpecOutcome>>();
    DescribeNodeSpecAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeNodeSpecRequest&,
        DescribeNodeSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeResourceScheduleRequest&;
    using Resp = DescribeResourceScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeResourceScheduleOutcomeCallable EmrClient::DescribeResourceScheduleCallable(const DescribeResourceScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceScheduleOutcome>>();
    DescribeResourceScheduleAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeResourceScheduleRequest&,
        DescribeResourceScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeResourceScheduleDiffDetailRequest&;
    using Resp = DescribeResourceScheduleDiffDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceScheduleDiffDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeResourceScheduleDiffDetailOutcomeCallable EmrClient::DescribeResourceScheduleDiffDetailCallable(const DescribeResourceScheduleDiffDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceScheduleDiffDetailOutcome>>();
    DescribeResourceScheduleDiffDetailAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeResourceScheduleDiffDetailRequest&,
        DescribeResourceScheduleDiffDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSLInstanceRequest&;
    using Resp = DescribeSLInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSLInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeSLInstanceOutcomeCallable EmrClient::DescribeSLInstanceCallable(const DescribeSLInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSLInstanceOutcome>>();
    DescribeSLInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeSLInstanceRequest&,
        DescribeSLInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSLInstanceListRequest&;
    using Resp = DescribeSLInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSLInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeSLInstanceListOutcomeCallable EmrClient::DescribeSLInstanceListCallable(const DescribeSLInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSLInstanceListOutcome>>();
    DescribeSLInstanceListAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeSLInstanceListRequest&,
        DescribeSLInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EmrClient::DescribeServiceConfGroupInfosOutcome EmrClient::DescribeServiceConfGroupInfos(const DescribeServiceConfGroupInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceConfGroupInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceConfGroupInfosResponse rsp = DescribeServiceConfGroupInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceConfGroupInfosOutcome(rsp);
        else
            return DescribeServiceConfGroupInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceConfGroupInfosOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeServiceConfGroupInfosAsync(const DescribeServiceConfGroupInfosRequest& request, const DescribeServiceConfGroupInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceConfGroupInfosRequest&;
    using Resp = DescribeServiceConfGroupInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceConfGroupInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeServiceConfGroupInfosOutcomeCallable EmrClient::DescribeServiceConfGroupInfosCallable(const DescribeServiceConfGroupInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceConfGroupInfosOutcome>>();
    DescribeServiceConfGroupInfosAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeServiceConfGroupInfosRequest&,
        DescribeServiceConfGroupInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeServiceNodeInfosRequest&;
    using Resp = DescribeServiceNodeInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceNodeInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeServiceNodeInfosOutcomeCallable EmrClient::DescribeServiceNodeInfosCallable(const DescribeServiceNodeInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceNodeInfosOutcome>>();
    DescribeServiceNodeInfosAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeServiceNodeInfosRequest&,
        DescribeServiceNodeInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EmrClient::DescribeSparkApplicationsOutcome EmrClient::DescribeSparkApplications(const DescribeSparkApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSparkApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSparkApplicationsResponse rsp = DescribeSparkApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSparkApplicationsOutcome(rsp);
        else
            return DescribeSparkApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeSparkApplicationsOutcome(outcome.GetError());
    }
}

void EmrClient::DescribeSparkApplicationsAsync(const DescribeSparkApplicationsRequest& request, const DescribeSparkApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSparkApplicationsRequest&;
    using Resp = DescribeSparkApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeSparkApplicationsOutcomeCallable EmrClient::DescribeSparkApplicationsCallable(const DescribeSparkApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkApplicationsOutcome>>();
    DescribeSparkApplicationsAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeSparkApplicationsRequest&,
        DescribeSparkApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSparkQueriesRequest&;
    using Resp = DescribeSparkQueriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSparkQueries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeSparkQueriesOutcomeCallable EmrClient::DescribeSparkQueriesCallable(const DescribeSparkQueriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSparkQueriesOutcome>>();
    DescribeSparkQueriesAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeSparkQueriesRequest&,
        DescribeSparkQueriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStarRocksQueryInfoRequest&;
    using Resp = DescribeStarRocksQueryInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStarRocksQueryInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeStarRocksQueryInfoOutcomeCallable EmrClient::DescribeStarRocksQueryInfoCallable(const DescribeStarRocksQueryInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStarRocksQueryInfoOutcome>>();
    DescribeStarRocksQueryInfoAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeStarRocksQueryInfoRequest&,
        DescribeStarRocksQueryInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTrinoQueryInfoRequest&;
    using Resp = DescribeTrinoQueryInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrinoQueryInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeTrinoQueryInfoOutcomeCallable EmrClient::DescribeTrinoQueryInfoCallable(const DescribeTrinoQueryInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrinoQueryInfoOutcome>>();
    DescribeTrinoQueryInfoAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeTrinoQueryInfoRequest&,
        DescribeTrinoQueryInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUsersForUserManagerRequest&;
    using Resp = DescribeUsersForUserManagerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsersForUserManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeUsersForUserManagerOutcomeCallable EmrClient::DescribeUsersForUserManagerCallable(const DescribeUsersForUserManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersForUserManagerOutcome>>();
    DescribeUsersForUserManagerAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeUsersForUserManagerRequest&,
        DescribeUsersForUserManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeYarnApplicationsRequest&;
    using Resp = DescribeYarnApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeYarnApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeYarnApplicationsOutcomeCallable EmrClient::DescribeYarnApplicationsCallable(const DescribeYarnApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeYarnApplicationsOutcome>>();
    DescribeYarnApplicationsAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeYarnApplicationsRequest&,
        DescribeYarnApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeYarnQueueRequest&;
    using Resp = DescribeYarnQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeYarnQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeYarnQueueOutcomeCallable EmrClient::DescribeYarnQueueCallable(const DescribeYarnQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeYarnQueueOutcome>>();
    DescribeYarnQueueAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeYarnQueueRequest&,
        DescribeYarnQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeYarnScheduleHistoryRequest&;
    using Resp = DescribeYarnScheduleHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeYarnScheduleHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::DescribeYarnScheduleHistoryOutcomeCallable EmrClient::DescribeYarnScheduleHistoryCallable(const DescribeYarnScheduleHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeYarnScheduleHistoryOutcome>>();
    DescribeYarnScheduleHistoryAsync(
    request,
    [prom](
        const EmrClient*,
        const DescribeYarnScheduleHistoryRequest&,
        DescribeYarnScheduleHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquirePriceRenewEmrRequest&;
    using Resp = InquirePriceRenewEmrResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenewEmr", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::InquirePriceRenewEmrOutcomeCallable EmrClient::InquirePriceRenewEmrCallable(const InquirePriceRenewEmrRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewEmrOutcome>>();
    InquirePriceRenewEmrAsync(
    request,
    [prom](
        const EmrClient*,
        const InquirePriceRenewEmrRequest&,
        InquirePriceRenewEmrOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceCreateInstanceRequest&;
    using Resp = InquiryPriceCreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceCreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::InquiryPriceCreateInstanceOutcomeCallable EmrClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateInstanceOutcome>>();
    InquiryPriceCreateInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const InquiryPriceCreateInstanceRequest&,
        InquiryPriceCreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceRenewInstanceRequest&;
    using Resp = InquiryPriceRenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::InquiryPriceRenewInstanceOutcomeCallable EmrClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewInstanceOutcome>>();
    InquiryPriceRenewInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const InquiryPriceRenewInstanceRequest&,
        InquiryPriceRenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceScaleOutInstanceRequest&;
    using Resp = InquiryPriceScaleOutInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceScaleOutInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::InquiryPriceScaleOutInstanceOutcomeCallable EmrClient::InquiryPriceScaleOutInstanceCallable(const InquiryPriceScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceScaleOutInstanceOutcome>>();
    InquiryPriceScaleOutInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const InquiryPriceScaleOutInstanceRequest&,
        InquiryPriceScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceUpdateInstanceRequest&;
    using Resp = InquiryPriceUpdateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceUpdateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::InquiryPriceUpdateInstanceOutcomeCallable EmrClient::InquiryPriceUpdateInstanceCallable(const InquiryPriceUpdateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceUpdateInstanceOutcome>>();
    InquiryPriceUpdateInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const InquiryPriceUpdateInstanceRequest&,
        InquiryPriceUpdateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAutoRenewFlagRequest&;
    using Resp = ModifyAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyAutoRenewFlagOutcomeCallable EmrClient::ModifyAutoRenewFlagCallable(const ModifyAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoRenewFlagOutcome>>();
    ModifyAutoRenewFlagAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyAutoRenewFlagRequest&,
        ModifyAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAutoScaleStrategyRequest&;
    using Resp = ModifyAutoScaleStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoScaleStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyAutoScaleStrategyOutcomeCallable EmrClient::ModifyAutoScaleStrategyCallable(const ModifyAutoScaleStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoScaleStrategyOutcome>>();
    ModifyAutoScaleStrategyAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyAutoScaleStrategyRequest&,
        ModifyAutoScaleStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGlobalConfigRequest&;
    using Resp = ModifyGlobalConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyGlobalConfigOutcomeCallable EmrClient::ModifyGlobalConfigCallable(const ModifyGlobalConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalConfigOutcome>>();
    ModifyGlobalConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyGlobalConfigRequest&,
        ModifyGlobalConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInspectionSettingsRequest&;
    using Resp = ModifyInspectionSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInspectionSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyInspectionSettingsOutcomeCallable EmrClient::ModifyInspectionSettingsCallable(const ModifyInspectionSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInspectionSettingsOutcome>>();
    ModifyInspectionSettingsAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyInspectionSettingsRequest&,
        ModifyInspectionSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstanceBasicRequest&;
    using Resp = ModifyInstanceBasicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceBasic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyInstanceBasicOutcomeCallable EmrClient::ModifyInstanceBasicCallable(const ModifyInstanceBasicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceBasicOutcome>>();
    ModifyInstanceBasicAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyInstanceBasicRequest&,
        ModifyInstanceBasicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPodNumRequest&;
    using Resp = ModifyPodNumResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPodNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyPodNumOutcomeCallable EmrClient::ModifyPodNumCallable(const ModifyPodNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPodNumOutcome>>();
    ModifyPodNumAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyPodNumRequest&,
        ModifyPodNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyResourceRequest&;
    using Resp = ModifyResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyResourceOutcomeCallable EmrClient::ModifyResourceCallable(const ModifyResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceOutcome>>();
    ModifyResourceAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyResourceRequest&,
        ModifyResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyResourcePoolsRequest&;
    using Resp = ModifyResourcePoolsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcePools", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyResourcePoolsOutcomeCallable EmrClient::ModifyResourcePoolsCallable(const ModifyResourcePoolsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcePoolsOutcome>>();
    ModifyResourcePoolsAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyResourcePoolsRequest&,
        ModifyResourcePoolsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyResourceScheduleConfigRequest&;
    using Resp = ModifyResourceScheduleConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceScheduleConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyResourceScheduleConfigOutcomeCallable EmrClient::ModifyResourceScheduleConfigCallable(const ModifyResourceScheduleConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceScheduleConfigOutcome>>();
    ModifyResourceScheduleConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyResourceScheduleConfigRequest&,
        ModifyResourceScheduleConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyResourceSchedulerRequest&;
    using Resp = ModifyResourceSchedulerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceScheduler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyResourceSchedulerOutcomeCallable EmrClient::ModifyResourceSchedulerCallable(const ModifyResourceSchedulerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceSchedulerOutcome>>();
    ModifyResourceSchedulerAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyResourceSchedulerRequest&,
        ModifyResourceSchedulerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyResourcesTagsRequest&;
    using Resp = ModifyResourcesTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourcesTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyResourcesTagsOutcomeCallable EmrClient::ModifyResourcesTagsCallable(const ModifyResourcesTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourcesTagsOutcome>>();
    ModifyResourcesTagsAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyResourcesTagsRequest&,
        ModifyResourcesTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySLInstanceRequest&;
    using Resp = ModifySLInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySLInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifySLInstanceOutcomeCallable EmrClient::ModifySLInstanceCallable(const ModifySLInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySLInstanceOutcome>>();
    ModifySLInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifySLInstanceRequest&,
        ModifySLInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySLInstanceBasicRequest&;
    using Resp = ModifySLInstanceBasicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySLInstanceBasic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifySLInstanceBasicOutcomeCallable EmrClient::ModifySLInstanceBasicCallable(const ModifySLInstanceBasicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySLInstanceBasicOutcome>>();
    ModifySLInstanceBasicAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifySLInstanceBasicRequest&,
        ModifySLInstanceBasicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserGroupRequest&;
    using Resp = ModifyUserGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyUserGroupOutcomeCallable EmrClient::ModifyUserGroupCallable(const ModifyUserGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserGroupOutcome>>();
    ModifyUserGroupAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyUserGroupRequest&,
        ModifyUserGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserManagerPwdRequest&;
    using Resp = ModifyUserManagerPwdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserManagerPwd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyUserManagerPwdOutcomeCallable EmrClient::ModifyUserManagerPwdCallable(const ModifyUserManagerPwdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserManagerPwdOutcome>>();
    ModifyUserManagerPwdAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyUserManagerPwdRequest&,
        ModifyUserManagerPwdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUsersOfGroupSTDRequest&;
    using Resp = ModifyUsersOfGroupSTDResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUsersOfGroupSTD", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyUsersOfGroupSTDOutcomeCallable EmrClient::ModifyUsersOfGroupSTDCallable(const ModifyUsersOfGroupSTDRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUsersOfGroupSTDOutcome>>();
    ModifyUsersOfGroupSTDAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyUsersOfGroupSTDRequest&,
        ModifyUsersOfGroupSTDOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyYarnDeployRequest&;
    using Resp = ModifyYarnDeployResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyYarnDeploy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyYarnDeployOutcomeCallable EmrClient::ModifyYarnDeployCallable(const ModifyYarnDeployRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyYarnDeployOutcome>>();
    ModifyYarnDeployAsync(
    request,
    [prom](
        const EmrClient*,
        const ModifyYarnDeployRequest&,
        ModifyYarnDeployOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyYarnQueueV2Request&;
    using Resp = ModifyYarnQueueV2Response;

    DoRequestAsync<Req, Resp>(
        "ModifyYarnQueueV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ModifyYarnQueueV2OutcomeCallable EmrClient::ModifyYarnQueueV2Callable(const ModifyYarnQueueV2Request &request)
{
    const auto prom = std::make_shared<std::promise<ModifyYarnQueueV2Outcome>>();
    ModifyYarnQueueV2Async(
    request,
    [prom](
        const EmrClient*,
        const ModifyYarnQueueV2Request&,
        ModifyYarnQueueV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetYarnConfigRequest&;
    using Resp = ResetYarnConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ResetYarnConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ResetYarnConfigOutcomeCallable EmrClient::ResetYarnConfigCallable(const ResetYarnConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetYarnConfigOutcome>>();
    ResetYarnConfigAsync(
    request,
    [prom](
        const EmrClient*,
        const ResetYarnConfigRequest&,
        ResetYarnConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResizeDataDisksRequest&;
    using Resp = ResizeDataDisksResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeDataDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ResizeDataDisksOutcomeCallable EmrClient::ResizeDataDisksCallable(const ResizeDataDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeDataDisksOutcome>>();
    ResizeDataDisksAsync(
    request,
    [prom](
        const EmrClient*,
        const ResizeDataDisksRequest&,
        ResizeDataDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RunJobFlowRequest&;
    using Resp = RunJobFlowResponse;

    DoRequestAsync<Req, Resp>(
        "RunJobFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::RunJobFlowOutcomeCallable EmrClient::RunJobFlowCallable(const RunJobFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunJobFlowOutcome>>();
    RunJobFlowAsync(
    request,
    [prom](
        const EmrClient*,
        const RunJobFlowRequest&,
        RunJobFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ScaleOutClusterRequest&;
    using Resp = ScaleOutClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleOutCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ScaleOutClusterOutcomeCallable EmrClient::ScaleOutClusterCallable(const ScaleOutClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutClusterOutcome>>();
    ScaleOutClusterAsync(
    request,
    [prom](
        const EmrClient*,
        const ScaleOutClusterRequest&,
        ScaleOutClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ScaleOutInstanceRequest&;
    using Resp = ScaleOutInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleOutInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::ScaleOutInstanceOutcomeCallable EmrClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstanceOutcome>>();
    ScaleOutInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const ScaleOutInstanceRequest&,
        ScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetNodeResourceConfigDefaultRequest&;
    using Resp = SetNodeResourceConfigDefaultResponse;

    DoRequestAsync<Req, Resp>(
        "SetNodeResourceConfigDefault", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::SetNodeResourceConfigDefaultOutcomeCallable EmrClient::SetNodeResourceConfigDefaultCallable(const SetNodeResourceConfigDefaultRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetNodeResourceConfigDefaultOutcome>>();
    SetNodeResourceConfigDefaultAsync(
    request,
    [prom](
        const EmrClient*,
        const SetNodeResourceConfigDefaultRequest&,
        SetNodeResourceConfigDefaultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartStopServiceOrMonitorRequest&;
    using Resp = StartStopServiceOrMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "StartStopServiceOrMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::StartStopServiceOrMonitorOutcomeCallable EmrClient::StartStopServiceOrMonitorCallable(const StartStopServiceOrMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStopServiceOrMonitorOutcome>>();
    StartStopServiceOrMonitorAsync(
    request,
    [prom](
        const EmrClient*,
        const StartStopServiceOrMonitorRequest&,
        StartStopServiceOrMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SyncPodStateRequest&;
    using Resp = SyncPodStateResponse;

    DoRequestAsync<Req, Resp>(
        "SyncPodState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::SyncPodStateOutcomeCallable EmrClient::SyncPodStateCallable(const SyncPodStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncPodStateOutcome>>();
    SyncPodStateAsync(
    request,
    [prom](
        const EmrClient*,
        const SyncPodStateRequest&,
        SyncPodStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateClusterNodesRequest&;
    using Resp = TerminateClusterNodesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateClusterNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::TerminateClusterNodesOutcomeCallable EmrClient::TerminateClusterNodesCallable(const TerminateClusterNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateClusterNodesOutcome>>();
    TerminateClusterNodesAsync(
    request,
    [prom](
        const EmrClient*,
        const TerminateClusterNodesRequest&,
        TerminateClusterNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateInstanceRequest&;
    using Resp = TerminateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::TerminateInstanceOutcomeCallable EmrClient::TerminateInstanceCallable(const TerminateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstanceOutcome>>();
    TerminateInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const TerminateInstanceRequest&,
        TerminateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateSLInstanceRequest&;
    using Resp = TerminateSLInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateSLInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::TerminateSLInstanceOutcomeCallable EmrClient::TerminateSLInstanceCallable(const TerminateSLInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateSLInstanceOutcome>>();
    TerminateSLInstanceAsync(
    request,
    [prom](
        const EmrClient*,
        const TerminateSLInstanceRequest&,
        TerminateSLInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TerminateTasksRequest&;
    using Resp = TerminateTasksResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EmrClient::TerminateTasksOutcomeCallable EmrClient::TerminateTasksCallable(const TerminateTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateTasksOutcome>>();
    TerminateTasksAsync(
    request,
    [prom](
        const EmrClient*,
        const TerminateTasksRequest&,
        TerminateTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

