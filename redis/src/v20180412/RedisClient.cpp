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

#include <tencentcloud/redis/v20180412/RedisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Redis::V20180412;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-12";
    const string ENDPOINT = "redis.tencentcloudapi.com";
}

RedisClient::RedisClient(const Credential &credential, const string &region) :
    RedisClient(credential, region, ClientProfile())
{
}

RedisClient::RedisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RedisClient::AddReplicationInstanceOutcome RedisClient::AddReplicationInstance(const AddReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "AddReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddReplicationInstanceResponse rsp = AddReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddReplicationInstanceOutcome(rsp);
        else
            return AddReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return AddReplicationInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::AddReplicationInstanceAsync(const AddReplicationInstanceRequest& request, const AddReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddReplicationInstanceRequest&;
    using Resp = AddReplicationInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "AddReplicationInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::AddReplicationInstanceOutcomeCallable RedisClient::AddReplicationInstanceCallable(const AddReplicationInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddReplicationInstanceOutcome>>();
    AddReplicationInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const AddReplicationInstanceRequest&,
        AddReplicationInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::AllocateWanAddressOutcome RedisClient::AllocateWanAddress(const AllocateWanAddressRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateWanAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateWanAddressResponse rsp = AllocateWanAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateWanAddressOutcome(rsp);
        else
            return AllocateWanAddressOutcome(o.GetError());
    }
    else
    {
        return AllocateWanAddressOutcome(outcome.GetError());
    }
}

void RedisClient::AllocateWanAddressAsync(const AllocateWanAddressRequest& request, const AllocateWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AllocateWanAddressRequest&;
    using Resp = AllocateWanAddressResponse;

    DoRequestAsync<Req, Resp>(
        "AllocateWanAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::AllocateWanAddressOutcomeCallable RedisClient::AllocateWanAddressCallable(const AllocateWanAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<AllocateWanAddressOutcome>>();
    AllocateWanAddressAsync(
    request,
    [prom](
        const RedisClient*,
        const AllocateWanAddressRequest&,
        AllocateWanAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ApplyParamsTemplateOutcome RedisClient::ApplyParamsTemplate(const ApplyParamsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyParamsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyParamsTemplateResponse rsp = ApplyParamsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyParamsTemplateOutcome(rsp);
        else
            return ApplyParamsTemplateOutcome(o.GetError());
    }
    else
    {
        return ApplyParamsTemplateOutcome(outcome.GetError());
    }
}

void RedisClient::ApplyParamsTemplateAsync(const ApplyParamsTemplateRequest& request, const ApplyParamsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyParamsTemplateRequest&;
    using Resp = ApplyParamsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyParamsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ApplyParamsTemplateOutcomeCallable RedisClient::ApplyParamsTemplateCallable(const ApplyParamsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyParamsTemplateOutcome>>();
    ApplyParamsTemplateAsync(
    request,
    [prom](
        const RedisClient*,
        const ApplyParamsTemplateRequest&,
        ApplyParamsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::AssociateSecurityGroupsOutcome RedisClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void RedisClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::AssociateSecurityGroupsOutcomeCallable RedisClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const RedisClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ChangeInstanceRoleOutcome RedisClient::ChangeInstanceRole(const ChangeInstanceRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeInstanceRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeInstanceRoleResponse rsp = ChangeInstanceRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeInstanceRoleOutcome(rsp);
        else
            return ChangeInstanceRoleOutcome(o.GetError());
    }
    else
    {
        return ChangeInstanceRoleOutcome(outcome.GetError());
    }
}

void RedisClient::ChangeInstanceRoleAsync(const ChangeInstanceRoleRequest& request, const ChangeInstanceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeInstanceRoleRequest&;
    using Resp = ChangeInstanceRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeInstanceRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ChangeInstanceRoleOutcomeCallable RedisClient::ChangeInstanceRoleCallable(const ChangeInstanceRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeInstanceRoleOutcome>>();
    ChangeInstanceRoleAsync(
    request,
    [prom](
        const RedisClient*,
        const ChangeInstanceRoleRequest&,
        ChangeInstanceRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ChangeMasterInstanceOutcome RedisClient::ChangeMasterInstance(const ChangeMasterInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeMasterInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeMasterInstanceResponse rsp = ChangeMasterInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeMasterInstanceOutcome(rsp);
        else
            return ChangeMasterInstanceOutcome(o.GetError());
    }
    else
    {
        return ChangeMasterInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::ChangeMasterInstanceAsync(const ChangeMasterInstanceRequest& request, const ChangeMasterInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeMasterInstanceRequest&;
    using Resp = ChangeMasterInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeMasterInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ChangeMasterInstanceOutcomeCallable RedisClient::ChangeMasterInstanceCallable(const ChangeMasterInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeMasterInstanceOutcome>>();
    ChangeMasterInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const ChangeMasterInstanceRequest&,
        ChangeMasterInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ChangeReplicaToMasterOutcome RedisClient::ChangeReplicaToMaster(const ChangeReplicaToMasterRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeReplicaToMaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeReplicaToMasterResponse rsp = ChangeReplicaToMasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeReplicaToMasterOutcome(rsp);
        else
            return ChangeReplicaToMasterOutcome(o.GetError());
    }
    else
    {
        return ChangeReplicaToMasterOutcome(outcome.GetError());
    }
}

void RedisClient::ChangeReplicaToMasterAsync(const ChangeReplicaToMasterRequest& request, const ChangeReplicaToMasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeReplicaToMasterRequest&;
    using Resp = ChangeReplicaToMasterResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeReplicaToMaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ChangeReplicaToMasterOutcomeCallable RedisClient::ChangeReplicaToMasterCallable(const ChangeReplicaToMasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeReplicaToMasterOutcome>>();
    ChangeReplicaToMasterAsync(
    request,
    [prom](
        const RedisClient*,
        const ChangeReplicaToMasterRequest&,
        ChangeReplicaToMasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CleanUpInstanceOutcome RedisClient::CleanUpInstance(const CleanUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CleanUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CleanUpInstanceResponse rsp = CleanUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CleanUpInstanceOutcome(rsp);
        else
            return CleanUpInstanceOutcome(o.GetError());
    }
    else
    {
        return CleanUpInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::CleanUpInstanceAsync(const CleanUpInstanceRequest& request, const CleanUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CleanUpInstanceRequest&;
    using Resp = CleanUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CleanUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CleanUpInstanceOutcomeCallable RedisClient::CleanUpInstanceCallable(const CleanUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CleanUpInstanceOutcome>>();
    CleanUpInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const CleanUpInstanceRequest&,
        CleanUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ClearInstanceOutcome RedisClient::ClearInstance(const ClearInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ClearInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearInstanceResponse rsp = ClearInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearInstanceOutcome(rsp);
        else
            return ClearInstanceOutcome(o.GetError());
    }
    else
    {
        return ClearInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::ClearInstanceAsync(const ClearInstanceRequest& request, const ClearInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearInstanceRequest&;
    using Resp = ClearInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ClearInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ClearInstanceOutcomeCallable RedisClient::ClearInstanceCallable(const ClearInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearInstanceOutcome>>();
    ClearInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const ClearInstanceRequest&,
        ClearInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CloneInstancesOutcome RedisClient::CloneInstances(const CloneInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CloneInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneInstancesResponse rsp = CloneInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneInstancesOutcome(rsp);
        else
            return CloneInstancesOutcome(o.GetError());
    }
    else
    {
        return CloneInstancesOutcome(outcome.GetError());
    }
}

void RedisClient::CloneInstancesAsync(const CloneInstancesRequest& request, const CloneInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneInstancesRequest&;
    using Resp = CloneInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CloneInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CloneInstancesOutcomeCallable RedisClient::CloneInstancesCallable(const CloneInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneInstancesOutcome>>();
    CloneInstancesAsync(
    request,
    [prom](
        const RedisClient*,
        const CloneInstancesRequest&,
        CloneInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CloseSSLOutcome RedisClient::CloseSSL(const CloseSSLRequest &request)
{
    auto outcome = MakeRequest(request, "CloseSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseSSLResponse rsp = CloseSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseSSLOutcome(rsp);
        else
            return CloseSSLOutcome(o.GetError());
    }
    else
    {
        return CloseSSLOutcome(outcome.GetError());
    }
}

void RedisClient::CloseSSLAsync(const CloseSSLRequest& request, const CloseSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseSSLRequest&;
    using Resp = CloseSSLResponse;

    DoRequestAsync<Req, Resp>(
        "CloseSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CloseSSLOutcomeCallable RedisClient::CloseSSLCallable(const CloseSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseSSLOutcome>>();
    CloseSSLAsync(
    request,
    [prom](
        const RedisClient*,
        const CloseSSLRequest&,
        CloseSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CreateInstanceAccountOutcome RedisClient::CreateInstanceAccount(const CreateInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceAccountResponse rsp = CreateInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceAccountOutcome(rsp);
        else
            return CreateInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::CreateInstanceAccountAsync(const CreateInstanceAccountRequest& request, const CreateInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceAccountRequest&;
    using Resp = CreateInstanceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CreateInstanceAccountOutcomeCallable RedisClient::CreateInstanceAccountCallable(const CreateInstanceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceAccountOutcome>>();
    CreateInstanceAccountAsync(
    request,
    [prom](
        const RedisClient*,
        const CreateInstanceAccountRequest&,
        CreateInstanceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CreateInstancesOutcome RedisClient::CreateInstances(const CreateInstancesRequest &request)
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

void RedisClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancesRequest&;
    using Resp = CreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CreateInstancesOutcomeCallable RedisClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const RedisClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CreateParamTemplateOutcome RedisClient::CreateParamTemplate(const CreateParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateParamTemplateResponse rsp = CreateParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateParamTemplateOutcome(rsp);
        else
            return CreateParamTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateParamTemplateOutcome(outcome.GetError());
    }
}

void RedisClient::CreateParamTemplateAsync(const CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateParamTemplateRequest&;
    using Resp = CreateParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CreateParamTemplateOutcomeCallable RedisClient::CreateParamTemplateCallable(const CreateParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateParamTemplateOutcome>>();
    CreateParamTemplateAsync(
    request,
    [prom](
        const RedisClient*,
        const CreateParamTemplateRequest&,
        CreateParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::CreateReplicationGroupOutcome RedisClient::CreateReplicationGroup(const CreateReplicationGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReplicationGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReplicationGroupResponse rsp = CreateReplicationGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReplicationGroupOutcome(rsp);
        else
            return CreateReplicationGroupOutcome(o.GetError());
    }
    else
    {
        return CreateReplicationGroupOutcome(outcome.GetError());
    }
}

void RedisClient::CreateReplicationGroupAsync(const CreateReplicationGroupRequest& request, const CreateReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReplicationGroupRequest&;
    using Resp = CreateReplicationGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReplicationGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::CreateReplicationGroupOutcomeCallable RedisClient::CreateReplicationGroupCallable(const CreateReplicationGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReplicationGroupOutcome>>();
    CreateReplicationGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const CreateReplicationGroupRequest&,
        CreateReplicationGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DeleteInstanceAccountOutcome RedisClient::DeleteInstanceAccount(const DeleteInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceAccountResponse rsp = DeleteInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceAccountOutcome(rsp);
        else
            return DeleteInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::DeleteInstanceAccountAsync(const DeleteInstanceAccountRequest& request, const DeleteInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceAccountRequest&;
    using Resp = DeleteInstanceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstanceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DeleteInstanceAccountOutcomeCallable RedisClient::DeleteInstanceAccountCallable(const DeleteInstanceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceAccountOutcome>>();
    DeleteInstanceAccountAsync(
    request,
    [prom](
        const RedisClient*,
        const DeleteInstanceAccountRequest&,
        DeleteInstanceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DeleteParamTemplateOutcome RedisClient::DeleteParamTemplate(const DeleteParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteParamTemplateResponse rsp = DeleteParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteParamTemplateOutcome(rsp);
        else
            return DeleteParamTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteParamTemplateOutcome(outcome.GetError());
    }
}

void RedisClient::DeleteParamTemplateAsync(const DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteParamTemplateRequest&;
    using Resp = DeleteParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DeleteParamTemplateOutcomeCallable RedisClient::DeleteParamTemplateCallable(const DeleteParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteParamTemplateOutcome>>();
    DeleteParamTemplateAsync(
    request,
    [prom](
        const RedisClient*,
        const DeleteParamTemplateRequest&,
        DeleteParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DeleteReplicationInstanceOutcome RedisClient::DeleteReplicationInstance(const DeleteReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReplicationInstanceResponse rsp = DeleteReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReplicationInstanceOutcome(rsp);
        else
            return DeleteReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteReplicationInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DeleteReplicationInstanceAsync(const DeleteReplicationInstanceRequest& request, const DeleteReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReplicationInstanceRequest&;
    using Resp = DeleteReplicationInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReplicationInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DeleteReplicationInstanceOutcomeCallable RedisClient::DeleteReplicationInstanceCallable(const DeleteReplicationInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReplicationInstanceOutcome>>();
    DeleteReplicationInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const DeleteReplicationInstanceRequest&,
        DeleteReplicationInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeAutoBackupConfigOutcome RedisClient::DescribeAutoBackupConfig(const DescribeAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoBackupConfigResponse rsp = DescribeAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoBackupConfigOutcome(rsp);
        else
            return DescribeAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoBackupConfigOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeAutoBackupConfigAsync(const DescribeAutoBackupConfigRequest& request, const DescribeAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoBackupConfigRequest&;
    using Resp = DescribeAutoBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeAutoBackupConfigOutcomeCallable RedisClient::DescribeAutoBackupConfigCallable(const DescribeAutoBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoBackupConfigOutcome>>();
    DescribeAutoBackupConfigAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeAutoBackupConfigRequest&,
        DescribeAutoBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeBackupDetailOutcome RedisClient::DescribeBackupDetail(const DescribeBackupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDetailResponse rsp = DescribeBackupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDetailOutcome(rsp);
        else
            return DescribeBackupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDetailOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeBackupDetailAsync(const DescribeBackupDetailRequest& request, const DescribeBackupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDetailRequest&;
    using Resp = DescribeBackupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeBackupDetailOutcomeCallable RedisClient::DescribeBackupDetailCallable(const DescribeBackupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDetailOutcome>>();
    DescribeBackupDetailAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeBackupDetailRequest&,
        DescribeBackupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeBackupDownloadRestrictionOutcome RedisClient::DescribeBackupDownloadRestriction(const DescribeBackupDownloadRestrictionRequest &request)
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

void RedisClient::DescribeBackupDownloadRestrictionAsync(const DescribeBackupDownloadRestrictionRequest& request, const DescribeBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadRestrictionRequest&;
    using Resp = DescribeBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeBackupDownloadRestrictionOutcomeCallable RedisClient::DescribeBackupDownloadRestrictionCallable(const DescribeBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadRestrictionOutcome>>();
    DescribeBackupDownloadRestrictionAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeBackupDownloadRestrictionRequest&,
        DescribeBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeBackupUrlOutcome RedisClient::DescribeBackupUrl(const DescribeBackupUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupUrlResponse rsp = DescribeBackupUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupUrlOutcome(rsp);
        else
            return DescribeBackupUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupUrlOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeBackupUrlAsync(const DescribeBackupUrlRequest& request, const DescribeBackupUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupUrlRequest&;
    using Resp = DescribeBackupUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeBackupUrlOutcomeCallable RedisClient::DescribeBackupUrlCallable(const DescribeBackupUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupUrlOutcome>>();
    DescribeBackupUrlAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeBackupUrlRequest&,
        DescribeBackupUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeBandwidthRangeOutcome RedisClient::DescribeBandwidthRange(const DescribeBandwidthRangeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBandwidthRange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBandwidthRangeResponse rsp = DescribeBandwidthRangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBandwidthRangeOutcome(rsp);
        else
            return DescribeBandwidthRangeOutcome(o.GetError());
    }
    else
    {
        return DescribeBandwidthRangeOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeBandwidthRangeAsync(const DescribeBandwidthRangeRequest& request, const DescribeBandwidthRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBandwidthRangeRequest&;
    using Resp = DescribeBandwidthRangeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBandwidthRange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeBandwidthRangeOutcomeCallable RedisClient::DescribeBandwidthRangeCallable(const DescribeBandwidthRangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBandwidthRangeOutcome>>();
    DescribeBandwidthRangeAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeBandwidthRangeRequest&,
        DescribeBandwidthRangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeCommonDBInstancesOutcome RedisClient::DescribeCommonDBInstances(const DescribeCommonDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommonDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommonDBInstancesResponse rsp = DescribeCommonDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommonDBInstancesOutcome(rsp);
        else
            return DescribeCommonDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeCommonDBInstancesOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeCommonDBInstancesAsync(const DescribeCommonDBInstancesRequest& request, const DescribeCommonDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCommonDBInstancesRequest&;
    using Resp = DescribeCommonDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCommonDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeCommonDBInstancesOutcomeCallable RedisClient::DescribeCommonDBInstancesCallable(const DescribeCommonDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCommonDBInstancesOutcome>>();
    DescribeCommonDBInstancesAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeCommonDBInstancesRequest&,
        DescribeCommonDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeDBSecurityGroupsOutcome RedisClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void RedisClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBSecurityGroupsRequest&;
    using Resp = DescribeDBSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeDBSecurityGroupsOutcomeCallable RedisClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeGlobalReplicationAreaOutcome RedisClient::DescribeGlobalReplicationArea(const DescribeGlobalReplicationAreaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalReplicationArea");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalReplicationAreaResponse rsp = DescribeGlobalReplicationAreaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalReplicationAreaOutcome(rsp);
        else
            return DescribeGlobalReplicationAreaOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalReplicationAreaOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeGlobalReplicationAreaAsync(const DescribeGlobalReplicationAreaRequest& request, const DescribeGlobalReplicationAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalReplicationAreaRequest&;
    using Resp = DescribeGlobalReplicationAreaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalReplicationArea", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeGlobalReplicationAreaOutcomeCallable RedisClient::DescribeGlobalReplicationAreaCallable(const DescribeGlobalReplicationAreaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalReplicationAreaOutcome>>();
    DescribeGlobalReplicationAreaAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeGlobalReplicationAreaRequest&,
        DescribeGlobalReplicationAreaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceAccountOutcome RedisClient::DescribeInstanceAccount(const DescribeInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAccountResponse rsp = DescribeInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAccountOutcome(rsp);
        else
            return DescribeInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceAccountAsync(const DescribeInstanceAccountRequest& request, const DescribeInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceAccountRequest&;
    using Resp = DescribeInstanceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceAccountOutcomeCallable RedisClient::DescribeInstanceAccountCallable(const DescribeInstanceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceAccountOutcome>>();
    DescribeInstanceAccountAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceAccountRequest&,
        DescribeInstanceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceBackupsOutcome RedisClient::DescribeInstanceBackups(const DescribeInstanceBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceBackupsResponse rsp = DescribeInstanceBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceBackupsOutcome(rsp);
        else
            return DescribeInstanceBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceBackupsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceBackupsAsync(const DescribeInstanceBackupsRequest& request, const DescribeInstanceBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceBackupsRequest&;
    using Resp = DescribeInstanceBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceBackupsOutcomeCallable RedisClient::DescribeInstanceBackupsCallable(const DescribeInstanceBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceBackupsOutcome>>();
    DescribeInstanceBackupsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceBackupsRequest&,
        DescribeInstanceBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceDTSInfoOutcome RedisClient::DescribeInstanceDTSInfo(const DescribeInstanceDTSInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDTSInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDTSInfoResponse rsp = DescribeInstanceDTSInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDTSInfoOutcome(rsp);
        else
            return DescribeInstanceDTSInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDTSInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceDTSInfoAsync(const DescribeInstanceDTSInfoRequest& request, const DescribeInstanceDTSInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDTSInfoRequest&;
    using Resp = DescribeInstanceDTSInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDTSInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceDTSInfoOutcomeCallable RedisClient::DescribeInstanceDTSInfoCallable(const DescribeInstanceDTSInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDTSInfoOutcome>>();
    DescribeInstanceDTSInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceDTSInfoRequest&,
        DescribeInstanceDTSInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceDealDetailOutcome RedisClient::DescribeInstanceDealDetail(const DescribeInstanceDealDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDealDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDealDetailResponse rsp = DescribeInstanceDealDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDealDetailOutcome(rsp);
        else
            return DescribeInstanceDealDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDealDetailOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceDealDetailAsync(const DescribeInstanceDealDetailRequest& request, const DescribeInstanceDealDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDealDetailRequest&;
    using Resp = DescribeInstanceDealDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDealDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceDealDetailOutcomeCallable RedisClient::DescribeInstanceDealDetailCallable(const DescribeInstanceDealDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDealDetailOutcome>>();
    DescribeInstanceDealDetailAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceDealDetailRequest&,
        DescribeInstanceDealDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceEventsOutcome RedisClient::DescribeInstanceEvents(const DescribeInstanceEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceEventsResponse rsp = DescribeInstanceEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceEventsOutcome(rsp);
        else
            return DescribeInstanceEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceEventsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceEventsAsync(const DescribeInstanceEventsRequest& request, const DescribeInstanceEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceEventsRequest&;
    using Resp = DescribeInstanceEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceEventsOutcomeCallable RedisClient::DescribeInstanceEventsCallable(const DescribeInstanceEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceEventsOutcome>>();
    DescribeInstanceEventsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceEventsRequest&,
        DescribeInstanceEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceLogDeliveryOutcome RedisClient::DescribeInstanceLogDelivery(const DescribeInstanceLogDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogDeliveryResponse rsp = DescribeInstanceLogDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogDeliveryOutcome(rsp);
        else
            return DescribeInstanceLogDeliveryOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogDeliveryOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceLogDeliveryAsync(const DescribeInstanceLogDeliveryRequest& request, const DescribeInstanceLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogDeliveryRequest&;
    using Resp = DescribeInstanceLogDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceLogDeliveryOutcomeCallable RedisClient::DescribeInstanceLogDeliveryCallable(const DescribeInstanceLogDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogDeliveryOutcome>>();
    DescribeInstanceLogDeliveryAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceLogDeliveryRequest&,
        DescribeInstanceLogDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeyOutcome RedisClient::DescribeInstanceMonitorBigKey(const DescribeInstanceMonitorBigKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyResponse rsp = DescribeInstanceMonitorBigKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyAsync(const DescribeInstanceMonitorBigKeyRequest& request, const DescribeInstanceMonitorBigKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorBigKeyRequest&;
    using Resp = DescribeInstanceMonitorBigKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorBigKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorBigKeyOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyCallable(const DescribeInstanceMonitorBigKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorBigKeyOutcome>>();
    DescribeInstanceMonitorBigKeyAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorBigKeyRequest&,
        DescribeInstanceMonitorBigKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcome RedisClient::DescribeInstanceMonitorBigKeySizeDist(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeySizeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeySizeDistResponse rsp = DescribeInstanceMonitorBigKeySizeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeySizeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeySizeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeySizeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeySizeDistAsync(const DescribeInstanceMonitorBigKeySizeDistRequest& request, const DescribeInstanceMonitorBigKeySizeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorBigKeySizeDistRequest&;
    using Resp = DescribeInstanceMonitorBigKeySizeDistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorBigKeySizeDist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorBigKeySizeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeySizeDistCallable(const DescribeInstanceMonitorBigKeySizeDistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorBigKeySizeDistOutcome>>();
    DescribeInstanceMonitorBigKeySizeDistAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorBigKeySizeDistRequest&,
        DescribeInstanceMonitorBigKeySizeDistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcome RedisClient::DescribeInstanceMonitorBigKeyTypeDist(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorBigKeyTypeDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorBigKeyTypeDistResponse rsp = DescribeInstanceMonitorBigKeyTypeDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(rsp);
        else
            return DescribeInstanceMonitorBigKeyTypeDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorBigKeyTypeDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorBigKeyTypeDistAsync(const DescribeInstanceMonitorBigKeyTypeDistRequest& request, const DescribeInstanceMonitorBigKeyTypeDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorBigKeyTypeDistRequest&;
    using Resp = DescribeInstanceMonitorBigKeyTypeDistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorBigKeyTypeDist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorBigKeyTypeDistOutcomeCallable RedisClient::DescribeInstanceMonitorBigKeyTypeDistCallable(const DescribeInstanceMonitorBigKeyTypeDistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorBigKeyTypeDistOutcome>>();
    DescribeInstanceMonitorBigKeyTypeDistAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorBigKeyTypeDistRequest&,
        DescribeInstanceMonitorBigKeyTypeDistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorHotKeyOutcome RedisClient::DescribeInstanceMonitorHotKey(const DescribeInstanceMonitorHotKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorHotKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorHotKeyResponse rsp = DescribeInstanceMonitorHotKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorHotKeyOutcome(rsp);
        else
            return DescribeInstanceMonitorHotKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorHotKeyOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorHotKeyAsync(const DescribeInstanceMonitorHotKeyRequest& request, const DescribeInstanceMonitorHotKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorHotKeyRequest&;
    using Resp = DescribeInstanceMonitorHotKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorHotKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorHotKeyOutcomeCallable RedisClient::DescribeInstanceMonitorHotKeyCallable(const DescribeInstanceMonitorHotKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorHotKeyOutcome>>();
    DescribeInstanceMonitorHotKeyAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorHotKeyRequest&,
        DescribeInstanceMonitorHotKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorSIPOutcome RedisClient::DescribeInstanceMonitorSIP(const DescribeInstanceMonitorSIPRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorSIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorSIPResponse rsp = DescribeInstanceMonitorSIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorSIPOutcome(rsp);
        else
            return DescribeInstanceMonitorSIPOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorSIPOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorSIPAsync(const DescribeInstanceMonitorSIPRequest& request, const DescribeInstanceMonitorSIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorSIPRequest&;
    using Resp = DescribeInstanceMonitorSIPResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorSIP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorSIPOutcomeCallable RedisClient::DescribeInstanceMonitorSIPCallable(const DescribeInstanceMonitorSIPRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorSIPOutcome>>();
    DescribeInstanceMonitorSIPAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorSIPRequest&,
        DescribeInstanceMonitorSIPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorTookDistOutcome RedisClient::DescribeInstanceMonitorTookDist(const DescribeInstanceMonitorTookDistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTookDist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTookDistResponse rsp = DescribeInstanceMonitorTookDistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTookDistOutcome(rsp);
        else
            return DescribeInstanceMonitorTookDistOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTookDistOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTookDistAsync(const DescribeInstanceMonitorTookDistRequest& request, const DescribeInstanceMonitorTookDistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorTookDistRequest&;
    using Resp = DescribeInstanceMonitorTookDistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorTookDist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorTookDistOutcomeCallable RedisClient::DescribeInstanceMonitorTookDistCallable(const DescribeInstanceMonitorTookDistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorTookDistOutcome>>();
    DescribeInstanceMonitorTookDistAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorTookDistRequest&,
        DescribeInstanceMonitorTookDistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcome RedisClient::DescribeInstanceMonitorTopNCmd(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdResponse rsp = DescribeInstanceMonitorTopNCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdAsync(const DescribeInstanceMonitorTopNCmdRequest& request, const DescribeInstanceMonitorTopNCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorTopNCmdRequest&;
    using Resp = DescribeInstanceMonitorTopNCmdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorTopNCmd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorTopNCmdOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdCallable(const DescribeInstanceMonitorTopNCmdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorTopNCmdOutcome>>();
    DescribeInstanceMonitorTopNCmdAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorTopNCmdRequest&,
        DescribeInstanceMonitorTopNCmdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcome RedisClient::DescribeInstanceMonitorTopNCmdTook(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMonitorTopNCmdTook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMonitorTopNCmdTookResponse rsp = DescribeInstanceMonitorTopNCmdTookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMonitorTopNCmdTookOutcome(rsp);
        else
            return DescribeInstanceMonitorTopNCmdTookOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMonitorTopNCmdTookOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceMonitorTopNCmdTookAsync(const DescribeInstanceMonitorTopNCmdTookRequest& request, const DescribeInstanceMonitorTopNCmdTookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMonitorTopNCmdTookRequest&;
    using Resp = DescribeInstanceMonitorTopNCmdTookResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMonitorTopNCmdTook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceMonitorTopNCmdTookOutcomeCallable RedisClient::DescribeInstanceMonitorTopNCmdTookCallable(const DescribeInstanceMonitorTopNCmdTookRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMonitorTopNCmdTookOutcome>>();
    DescribeInstanceMonitorTopNCmdTookAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceMonitorTopNCmdTookRequest&,
        DescribeInstanceMonitorTopNCmdTookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceNodeInfoOutcome RedisClient::DescribeInstanceNodeInfo(const DescribeInstanceNodeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodeInfoResponse rsp = DescribeInstanceNodeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodeInfoOutcome(rsp);
        else
            return DescribeInstanceNodeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodeInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceNodeInfoAsync(const DescribeInstanceNodeInfoRequest& request, const DescribeInstanceNodeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodeInfoRequest&;
    using Resp = DescribeInstanceNodeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceNodeInfoOutcomeCallable RedisClient::DescribeInstanceNodeInfoCallable(const DescribeInstanceNodeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodeInfoOutcome>>();
    DescribeInstanceNodeInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceNodeInfoRequest&,
        DescribeInstanceNodeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceParamRecordsOutcome RedisClient::DescribeInstanceParamRecords(const DescribeInstanceParamRecordsRequest &request)
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

void RedisClient::DescribeInstanceParamRecordsAsync(const DescribeInstanceParamRecordsRequest& request, const DescribeInstanceParamRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamRecordsRequest&;
    using Resp = DescribeInstanceParamRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParamRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceParamRecordsOutcomeCallable RedisClient::DescribeInstanceParamRecordsCallable(const DescribeInstanceParamRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamRecordsOutcome>>();
    DescribeInstanceParamRecordsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceParamRecordsRequest&,
        DescribeInstanceParamRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceParamsOutcome RedisClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
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

void RedisClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamsRequest&;
    using Resp = DescribeInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceParamsOutcomeCallable RedisClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceSecurityGroupOutcome RedisClient::DescribeInstanceSecurityGroup(const DescribeInstanceSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSecurityGroupResponse rsp = DescribeInstanceSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSecurityGroupOutcome(rsp);
        else
            return DescribeInstanceSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSecurityGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceSecurityGroupAsync(const DescribeInstanceSecurityGroupRequest& request, const DescribeInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSecurityGroupRequest&;
    using Resp = DescribeInstanceSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceSecurityGroupOutcomeCallable RedisClient::DescribeInstanceSecurityGroupCallable(const DescribeInstanceSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSecurityGroupOutcome>>();
    DescribeInstanceSecurityGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceSecurityGroupRequest&,
        DescribeInstanceSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceShardsOutcome RedisClient::DescribeInstanceShards(const DescribeInstanceShardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceShards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceShardsResponse rsp = DescribeInstanceShardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceShardsOutcome(rsp);
        else
            return DescribeInstanceShardsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceShardsOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceShardsAsync(const DescribeInstanceShardsRequest& request, const DescribeInstanceShardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceShardsRequest&;
    using Resp = DescribeInstanceShardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceShards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceShardsOutcomeCallable RedisClient::DescribeInstanceShardsCallable(const DescribeInstanceShardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceShardsOutcome>>();
    DescribeInstanceShardsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceShardsRequest&,
        DescribeInstanceShardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceSpecBandwidthOutcome RedisClient::DescribeInstanceSpecBandwidth(const DescribeInstanceSpecBandwidthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSpecBandwidth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSpecBandwidthResponse rsp = DescribeInstanceSpecBandwidthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSpecBandwidthOutcome(rsp);
        else
            return DescribeInstanceSpecBandwidthOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSpecBandwidthOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceSpecBandwidthAsync(const DescribeInstanceSpecBandwidthRequest& request, const DescribeInstanceSpecBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSpecBandwidthRequest&;
    using Resp = DescribeInstanceSpecBandwidthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSpecBandwidth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceSpecBandwidthOutcomeCallable RedisClient::DescribeInstanceSpecBandwidthCallable(const DescribeInstanceSpecBandwidthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSpecBandwidthOutcome>>();
    DescribeInstanceSpecBandwidthAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceSpecBandwidthRequest&,
        DescribeInstanceSpecBandwidthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceSupportFeatureOutcome RedisClient::DescribeInstanceSupportFeature(const DescribeInstanceSupportFeatureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSupportFeature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSupportFeatureResponse rsp = DescribeInstanceSupportFeatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSupportFeatureOutcome(rsp);
        else
            return DescribeInstanceSupportFeatureOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSupportFeatureOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceSupportFeatureAsync(const DescribeInstanceSupportFeatureRequest& request, const DescribeInstanceSupportFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSupportFeatureRequest&;
    using Resp = DescribeInstanceSupportFeatureResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSupportFeature", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceSupportFeatureOutcomeCallable RedisClient::DescribeInstanceSupportFeatureCallable(const DescribeInstanceSupportFeatureRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSupportFeatureOutcome>>();
    DescribeInstanceSupportFeatureAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceSupportFeatureRequest&,
        DescribeInstanceSupportFeatureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstanceZoneInfoOutcome RedisClient::DescribeInstanceZoneInfo(const DescribeInstanceZoneInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceZoneInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceZoneInfoResponse rsp = DescribeInstanceZoneInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceZoneInfoOutcome(rsp);
        else
            return DescribeInstanceZoneInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceZoneInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeInstanceZoneInfoAsync(const DescribeInstanceZoneInfoRequest& request, const DescribeInstanceZoneInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceZoneInfoRequest&;
    using Resp = DescribeInstanceZoneInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceZoneInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeInstanceZoneInfoOutcomeCallable RedisClient::DescribeInstanceZoneInfoCallable(const DescribeInstanceZoneInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceZoneInfoOutcome>>();
    DescribeInstanceZoneInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstanceZoneInfoRequest&,
        DescribeInstanceZoneInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeInstancesOutcome RedisClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void RedisClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::DescribeInstancesOutcomeCallable RedisClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeMaintenanceWindowOutcome RedisClient::DescribeMaintenanceWindow(const DescribeMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaintenanceWindowResponse rsp = DescribeMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaintenanceWindowOutcome(rsp);
        else
            return DescribeMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeMaintenanceWindowOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeMaintenanceWindowAsync(const DescribeMaintenanceWindowRequest& request, const DescribeMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaintenanceWindowRequest&;
    using Resp = DescribeMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeMaintenanceWindowOutcomeCallable RedisClient::DescribeMaintenanceWindowCallable(const DescribeMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaintenanceWindowOutcome>>();
    DescribeMaintenanceWindowAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeMaintenanceWindowRequest&,
        DescribeMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeParamTemplateInfoOutcome RedisClient::DescribeParamTemplateInfo(const DescribeParamTemplateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplateInfoResponse rsp = DescribeParamTemplateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplateInfoOutcome(rsp);
        else
            return DescribeParamTemplateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplateInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeParamTemplateInfoAsync(const DescribeParamTemplateInfoRequest& request, const DescribeParamTemplateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamTemplateInfoRequest&;
    using Resp = DescribeParamTemplateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamTemplateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeParamTemplateInfoOutcomeCallable RedisClient::DescribeParamTemplateInfoCallable(const DescribeParamTemplateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplateInfoOutcome>>();
    DescribeParamTemplateInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeParamTemplateInfoRequest&,
        DescribeParamTemplateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeParamTemplatesOutcome RedisClient::DescribeParamTemplates(const DescribeParamTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeParamTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeParamTemplatesResponse rsp = DescribeParamTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeParamTemplatesOutcome(rsp);
        else
            return DescribeParamTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeParamTemplatesOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeParamTemplatesAsync(const DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeParamTemplatesRequest&;
    using Resp = DescribeParamTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeParamTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeParamTemplatesOutcomeCallable RedisClient::DescribeParamTemplatesCallable(const DescribeParamTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeParamTemplatesOutcome>>();
    DescribeParamTemplatesAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeParamTemplatesRequest&,
        DescribeParamTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeProductInfoOutcome RedisClient::DescribeProductInfo(const DescribeProductInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductInfoResponse rsp = DescribeProductInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductInfoOutcome(rsp);
        else
            return DescribeProductInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProductInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProductInfoAsync(const DescribeProductInfoRequest& request, const DescribeProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductInfoRequest&;
    using Resp = DescribeProductInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeProductInfoOutcomeCallable RedisClient::DescribeProductInfoCallable(const DescribeProductInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductInfoOutcome>>();
    DescribeProductInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeProductInfoRequest&,
        DescribeProductInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeProjectSecurityGroupOutcome RedisClient::DescribeProjectSecurityGroup(const DescribeProjectSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectSecurityGroupResponse rsp = DescribeProjectSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectSecurityGroupOutcome(rsp);
        else
            return DescribeProjectSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectSecurityGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProjectSecurityGroupAsync(const DescribeProjectSecurityGroupRequest& request, const DescribeProjectSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectSecurityGroupRequest&;
    using Resp = DescribeProjectSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeProjectSecurityGroupOutcomeCallable RedisClient::DescribeProjectSecurityGroupCallable(const DescribeProjectSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupOutcome>>();
    DescribeProjectSecurityGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeProjectSecurityGroupRequest&,
        DescribeProjectSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeProjectSecurityGroupsOutcome RedisClient::DescribeProjectSecurityGroups(const DescribeProjectSecurityGroupsRequest &request)
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

void RedisClient::DescribeProjectSecurityGroupsAsync(const DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectSecurityGroupsRequest&;
    using Resp = DescribeProjectSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeProjectSecurityGroupsOutcomeCallable RedisClient::DescribeProjectSecurityGroupsCallable(const DescribeProjectSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectSecurityGroupsOutcome>>();
    DescribeProjectSecurityGroupsAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeProjectSecurityGroupsRequest&,
        DescribeProjectSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeProxySlowLogOutcome RedisClient::DescribeProxySlowLog(const DescribeProxySlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxySlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxySlowLogResponse rsp = DescribeProxySlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxySlowLogOutcome(rsp);
        else
            return DescribeProxySlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeProxySlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeProxySlowLogAsync(const DescribeProxySlowLogRequest& request, const DescribeProxySlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProxySlowLogRequest&;
    using Resp = DescribeProxySlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxySlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeProxySlowLogOutcomeCallable RedisClient::DescribeProxySlowLogCallable(const DescribeProxySlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxySlowLogOutcome>>();
    DescribeProxySlowLogAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeProxySlowLogRequest&,
        DescribeProxySlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeRedisClusterOverviewOutcome RedisClient::DescribeRedisClusterOverview(const DescribeRedisClusterOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisClusterOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisClusterOverviewResponse rsp = DescribeRedisClusterOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisClusterOverviewOutcome(rsp);
        else
            return DescribeRedisClusterOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisClusterOverviewOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeRedisClusterOverviewAsync(const DescribeRedisClusterOverviewRequest& request, const DescribeRedisClusterOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRedisClusterOverviewRequest&;
    using Resp = DescribeRedisClusterOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisClusterOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeRedisClusterOverviewOutcomeCallable RedisClient::DescribeRedisClusterOverviewCallable(const DescribeRedisClusterOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisClusterOverviewOutcome>>();
    DescribeRedisClusterOverviewAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeRedisClusterOverviewRequest&,
        DescribeRedisClusterOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeRedisClustersOutcome RedisClient::DescribeRedisClusters(const DescribeRedisClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRedisClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRedisClustersResponse rsp = DescribeRedisClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRedisClustersOutcome(rsp);
        else
            return DescribeRedisClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeRedisClustersOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeRedisClustersAsync(const DescribeRedisClustersRequest& request, const DescribeRedisClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRedisClustersRequest&;
    using Resp = DescribeRedisClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRedisClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeRedisClustersOutcomeCallable RedisClient::DescribeRedisClustersCallable(const DescribeRedisClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRedisClustersOutcome>>();
    DescribeRedisClustersAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeRedisClustersRequest&,
        DescribeRedisClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeReplicationGroupOutcome RedisClient::DescribeReplicationGroup(const DescribeReplicationGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationGroupResponse rsp = DescribeReplicationGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationGroupOutcome(rsp);
        else
            return DescribeReplicationGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationGroupOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeReplicationGroupAsync(const DescribeReplicationGroupRequest& request, const DescribeReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReplicationGroupRequest&;
    using Resp = DescribeReplicationGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplicationGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeReplicationGroupOutcomeCallable RedisClient::DescribeReplicationGroupCallable(const DescribeReplicationGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplicationGroupOutcome>>();
    DescribeReplicationGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeReplicationGroupRequest&,
        DescribeReplicationGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeReplicationGroupInstanceOutcome RedisClient::DescribeReplicationGroupInstance(const DescribeReplicationGroupInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReplicationGroupInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReplicationGroupInstanceResponse rsp = DescribeReplicationGroupInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReplicationGroupInstanceOutcome(rsp);
        else
            return DescribeReplicationGroupInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeReplicationGroupInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeReplicationGroupInstanceAsync(const DescribeReplicationGroupInstanceRequest& request, const DescribeReplicationGroupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReplicationGroupInstanceRequest&;
    using Resp = DescribeReplicationGroupInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReplicationGroupInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeReplicationGroupInstanceOutcomeCallable RedisClient::DescribeReplicationGroupInstanceCallable(const DescribeReplicationGroupInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReplicationGroupInstanceOutcome>>();
    DescribeReplicationGroupInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeReplicationGroupInstanceRequest&,
        DescribeReplicationGroupInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeSSLStatusOutcome RedisClient::DescribeSSLStatus(const DescribeSSLStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSSLStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSSLStatusResponse rsp = DescribeSSLStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSSLStatusOutcome(rsp);
        else
            return DescribeSSLStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSSLStatusOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeSSLStatusAsync(const DescribeSSLStatusRequest& request, const DescribeSSLStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSSLStatusRequest&;
    using Resp = DescribeSSLStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSSLStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeSSLStatusOutcomeCallable RedisClient::DescribeSSLStatusCallable(const DescribeSSLStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSSLStatusOutcome>>();
    DescribeSSLStatusAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeSSLStatusRequest&,
        DescribeSSLStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeSecondLevelBackupInfoOutcome RedisClient::DescribeSecondLevelBackupInfo(const DescribeSecondLevelBackupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecondLevelBackupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecondLevelBackupInfoResponse rsp = DescribeSecondLevelBackupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecondLevelBackupInfoOutcome(rsp);
        else
            return DescribeSecondLevelBackupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecondLevelBackupInfoOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeSecondLevelBackupInfoAsync(const DescribeSecondLevelBackupInfoRequest& request, const DescribeSecondLevelBackupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecondLevelBackupInfoRequest&;
    using Resp = DescribeSecondLevelBackupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecondLevelBackupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeSecondLevelBackupInfoOutcomeCallable RedisClient::DescribeSecondLevelBackupInfoCallable(const DescribeSecondLevelBackupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecondLevelBackupInfoOutcome>>();
    DescribeSecondLevelBackupInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeSecondLevelBackupInfoRequest&,
        DescribeSecondLevelBackupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeSlowLogOutcome RedisClient::DescribeSlowLog(const DescribeSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogResponse rsp = DescribeSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogOutcome(rsp);
        else
            return DescribeSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeSlowLogAsync(const DescribeSlowLogRequest& request, const DescribeSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogRequest&;
    using Resp = DescribeSlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeSlowLogOutcomeCallable RedisClient::DescribeSlowLogCallable(const DescribeSlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogOutcome>>();
    DescribeSlowLogAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeSlowLogRequest&,
        DescribeSlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeTaskInfoOutcome RedisClient::DescribeTaskInfo(const DescribeTaskInfoRequest &request)
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

void RedisClient::DescribeTaskInfoAsync(const DescribeTaskInfoRequest& request, const DescribeTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::DescribeTaskInfoOutcomeCallable RedisClient::DescribeTaskInfoCallable(const DescribeTaskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskInfoOutcome>>();
    DescribeTaskInfoAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeTaskInfoRequest&,
        DescribeTaskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeTaskListOutcome RedisClient::DescribeTaskList(const DescribeTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskListResponse rsp = DescribeTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskListOutcome(rsp);
        else
            return DescribeTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskListOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeTaskListAsync(const DescribeTaskListRequest& request, const DescribeTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskListRequest&;
    using Resp = DescribeTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeTaskListOutcomeCallable RedisClient::DescribeTaskListCallable(const DescribeTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskListOutcome>>();
    DescribeTaskListAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeTaskListRequest&,
        DescribeTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DescribeTendisSlowLogOutcome RedisClient::DescribeTendisSlowLog(const DescribeTendisSlowLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTendisSlowLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTendisSlowLogResponse rsp = DescribeTendisSlowLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTendisSlowLogOutcome(rsp);
        else
            return DescribeTendisSlowLogOutcome(o.GetError());
    }
    else
    {
        return DescribeTendisSlowLogOutcome(outcome.GetError());
    }
}

void RedisClient::DescribeTendisSlowLogAsync(const DescribeTendisSlowLogRequest& request, const DescribeTendisSlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTendisSlowLogRequest&;
    using Resp = DescribeTendisSlowLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTendisSlowLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DescribeTendisSlowLogOutcomeCallable RedisClient::DescribeTendisSlowLogCallable(const DescribeTendisSlowLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTendisSlowLogOutcome>>();
    DescribeTendisSlowLogAsync(
    request,
    [prom](
        const RedisClient*,
        const DescribeTendisSlowLogRequest&,
        DescribeTendisSlowLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DestroyPostpaidInstanceOutcome RedisClient::DestroyPostpaidInstance(const DestroyPostpaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPostpaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPostpaidInstanceResponse rsp = DestroyPostpaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPostpaidInstanceOutcome(rsp);
        else
            return DestroyPostpaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPostpaidInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DestroyPostpaidInstanceAsync(const DestroyPostpaidInstanceRequest& request, const DestroyPostpaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyPostpaidInstanceRequest&;
    using Resp = DestroyPostpaidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPostpaidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DestroyPostpaidInstanceOutcomeCallable RedisClient::DestroyPostpaidInstanceCallable(const DestroyPostpaidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPostpaidInstanceOutcome>>();
    DestroyPostpaidInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const DestroyPostpaidInstanceRequest&,
        DestroyPostpaidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DestroyPrepaidInstanceOutcome RedisClient::DestroyPrepaidInstance(const DestroyPrepaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPrepaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPrepaidInstanceResponse rsp = DestroyPrepaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPrepaidInstanceOutcome(rsp);
        else
            return DestroyPrepaidInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyPrepaidInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::DestroyPrepaidInstanceAsync(const DestroyPrepaidInstanceRequest& request, const DestroyPrepaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyPrepaidInstanceRequest&;
    using Resp = DestroyPrepaidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPrepaidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DestroyPrepaidInstanceOutcomeCallable RedisClient::DestroyPrepaidInstanceCallable(const DestroyPrepaidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPrepaidInstanceOutcome>>();
    DestroyPrepaidInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const DestroyPrepaidInstanceRequest&,
        DestroyPrepaidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DisableReplicaReadonlyOutcome RedisClient::DisableReplicaReadonly(const DisableReplicaReadonlyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableReplicaReadonly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableReplicaReadonlyResponse rsp = DisableReplicaReadonlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableReplicaReadonlyOutcome(rsp);
        else
            return DisableReplicaReadonlyOutcome(o.GetError());
    }
    else
    {
        return DisableReplicaReadonlyOutcome(outcome.GetError());
    }
}

void RedisClient::DisableReplicaReadonlyAsync(const DisableReplicaReadonlyRequest& request, const DisableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableReplicaReadonlyRequest&;
    using Resp = DisableReplicaReadonlyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableReplicaReadonly", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::DisableReplicaReadonlyOutcomeCallable RedisClient::DisableReplicaReadonlyCallable(const DisableReplicaReadonlyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableReplicaReadonlyOutcome>>();
    DisableReplicaReadonlyAsync(
    request,
    [prom](
        const RedisClient*,
        const DisableReplicaReadonlyRequest&,
        DisableReplicaReadonlyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::DisassociateSecurityGroupsOutcome RedisClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void RedisClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::DisassociateSecurityGroupsOutcomeCallable RedisClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const RedisClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::EnableReplicaReadonlyOutcome RedisClient::EnableReplicaReadonly(const EnableReplicaReadonlyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableReplicaReadonly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableReplicaReadonlyResponse rsp = EnableReplicaReadonlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableReplicaReadonlyOutcome(rsp);
        else
            return EnableReplicaReadonlyOutcome(o.GetError());
    }
    else
    {
        return EnableReplicaReadonlyOutcome(outcome.GetError());
    }
}

void RedisClient::EnableReplicaReadonlyAsync(const EnableReplicaReadonlyRequest& request, const EnableReplicaReadonlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableReplicaReadonlyRequest&;
    using Resp = EnableReplicaReadonlyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableReplicaReadonly", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::EnableReplicaReadonlyOutcomeCallable RedisClient::EnableReplicaReadonlyCallable(const EnableReplicaReadonlyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableReplicaReadonlyOutcome>>();
    EnableReplicaReadonlyAsync(
    request,
    [prom](
        const RedisClient*,
        const EnableReplicaReadonlyRequest&,
        EnableReplicaReadonlyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::InquiryPriceCreateInstanceOutcome RedisClient::InquiryPriceCreateInstance(const InquiryPriceCreateInstanceRequest &request)
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

void RedisClient::InquiryPriceCreateInstanceAsync(const InquiryPriceCreateInstanceRequest& request, const InquiryPriceCreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::InquiryPriceCreateInstanceOutcomeCallable RedisClient::InquiryPriceCreateInstanceCallable(const InquiryPriceCreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateInstanceOutcome>>();
    InquiryPriceCreateInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const InquiryPriceCreateInstanceRequest&,
        InquiryPriceCreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::InquiryPriceRenewInstanceOutcome RedisClient::InquiryPriceRenewInstance(const InquiryPriceRenewInstanceRequest &request)
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

void RedisClient::InquiryPriceRenewInstanceAsync(const InquiryPriceRenewInstanceRequest& request, const InquiryPriceRenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

RedisClient::InquiryPriceRenewInstanceOutcomeCallable RedisClient::InquiryPriceRenewInstanceCallable(const InquiryPriceRenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewInstanceOutcome>>();
    InquiryPriceRenewInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const InquiryPriceRenewInstanceRequest&,
        InquiryPriceRenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::InquiryPriceUpgradeInstanceOutcome RedisClient::InquiryPriceUpgradeInstance(const InquiryPriceUpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceUpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceUpgradeInstanceResponse rsp = InquiryPriceUpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceUpgradeInstanceOutcome(rsp);
        else
            return InquiryPriceUpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceUpgradeInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::InquiryPriceUpgradeInstanceAsync(const InquiryPriceUpgradeInstanceRequest& request, const InquiryPriceUpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceUpgradeInstanceRequest&;
    using Resp = InquiryPriceUpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceUpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::InquiryPriceUpgradeInstanceOutcomeCallable RedisClient::InquiryPriceUpgradeInstanceCallable(const InquiryPriceUpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceUpgradeInstanceOutcome>>();
    InquiryPriceUpgradeInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const InquiryPriceUpgradeInstanceRequest&,
        InquiryPriceUpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::KillMasterGroupOutcome RedisClient::KillMasterGroup(const KillMasterGroupRequest &request)
{
    auto outcome = MakeRequest(request, "KillMasterGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillMasterGroupResponse rsp = KillMasterGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillMasterGroupOutcome(rsp);
        else
            return KillMasterGroupOutcome(o.GetError());
    }
    else
    {
        return KillMasterGroupOutcome(outcome.GetError());
    }
}

void RedisClient::KillMasterGroupAsync(const KillMasterGroupRequest& request, const KillMasterGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillMasterGroupRequest&;
    using Resp = KillMasterGroupResponse;

    DoRequestAsync<Req, Resp>(
        "KillMasterGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::KillMasterGroupOutcomeCallable RedisClient::KillMasterGroupCallable(const KillMasterGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillMasterGroupOutcome>>();
    KillMasterGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const KillMasterGroupRequest&,
        KillMasterGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ManualBackupInstanceOutcome RedisClient::ManualBackupInstance(const ManualBackupInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ManualBackupInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManualBackupInstanceResponse rsp = ManualBackupInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManualBackupInstanceOutcome(rsp);
        else
            return ManualBackupInstanceOutcome(o.GetError());
    }
    else
    {
        return ManualBackupInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::ManualBackupInstanceAsync(const ManualBackupInstanceRequest& request, const ManualBackupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManualBackupInstanceRequest&;
    using Resp = ManualBackupInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ManualBackupInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ManualBackupInstanceOutcomeCallable RedisClient::ManualBackupInstanceCallable(const ManualBackupInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManualBackupInstanceOutcome>>();
    ManualBackupInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const ManualBackupInstanceRequest&,
        ManualBackupInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModfiyInstancePasswordOutcome RedisClient::ModfiyInstancePassword(const ModfiyInstancePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModfiyInstancePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModfiyInstancePasswordResponse rsp = ModfiyInstancePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModfiyInstancePasswordOutcome(rsp);
        else
            return ModfiyInstancePasswordOutcome(o.GetError());
    }
    else
    {
        return ModfiyInstancePasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ModfiyInstancePasswordAsync(const ModfiyInstancePasswordRequest& request, const ModfiyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModfiyInstancePasswordRequest&;
    using Resp = ModfiyInstancePasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModfiyInstancePassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModfiyInstancePasswordOutcomeCallable RedisClient::ModfiyInstancePasswordCallable(const ModfiyInstancePasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModfiyInstancePasswordOutcome>>();
    ModfiyInstancePasswordAsync(
    request,
    [prom](
        const RedisClient*,
        const ModfiyInstancePasswordRequest&,
        ModfiyInstancePasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyAutoBackupConfigOutcome RedisClient::ModifyAutoBackupConfig(const ModifyAutoBackupConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoBackupConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoBackupConfigResponse rsp = ModifyAutoBackupConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoBackupConfigOutcome(rsp);
        else
            return ModifyAutoBackupConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoBackupConfigOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyAutoBackupConfigAsync(const ModifyAutoBackupConfigRequest& request, const ModifyAutoBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoBackupConfigRequest&;
    using Resp = ModifyAutoBackupConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoBackupConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyAutoBackupConfigOutcomeCallable RedisClient::ModifyAutoBackupConfigCallable(const ModifyAutoBackupConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoBackupConfigOutcome>>();
    ModifyAutoBackupConfigAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyAutoBackupConfigRequest&,
        ModifyAutoBackupConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyBackupDownloadRestrictionOutcome RedisClient::ModifyBackupDownloadRestriction(const ModifyBackupDownloadRestrictionRequest &request)
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

void RedisClient::ModifyBackupDownloadRestrictionAsync(const ModifyBackupDownloadRestrictionRequest& request, const ModifyBackupDownloadRestrictionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupDownloadRestrictionRequest&;
    using Resp = ModifyBackupDownloadRestrictionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupDownloadRestriction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyBackupDownloadRestrictionOutcomeCallable RedisClient::ModifyBackupDownloadRestrictionCallable(const ModifyBackupDownloadRestrictionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupDownloadRestrictionOutcome>>();
    ModifyBackupDownloadRestrictionAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyBackupDownloadRestrictionRequest&,
        ModifyBackupDownloadRestrictionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyConnectionConfigOutcome RedisClient::ModifyConnectionConfig(const ModifyConnectionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConnectionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConnectionConfigResponse rsp = ModifyConnectionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConnectionConfigOutcome(rsp);
        else
            return ModifyConnectionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyConnectionConfigOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyConnectionConfigAsync(const ModifyConnectionConfigRequest& request, const ModifyConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConnectionConfigRequest&;
    using Resp = ModifyConnectionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConnectionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyConnectionConfigOutcomeCallable RedisClient::ModifyConnectionConfigCallable(const ModifyConnectionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConnectionConfigOutcome>>();
    ModifyConnectionConfigAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyConnectionConfigRequest&,
        ModifyConnectionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyDBInstanceSecurityGroupsOutcome RedisClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void RedisClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSecurityGroupsRequest&;
    using Resp = ModifyDBInstanceSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyDBInstanceSecurityGroupsOutcomeCallable RedisClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceOutcome RedisClient::ModifyInstance(const ModifyInstanceRequest &request)
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

void RedisClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceOutcomeCallable RedisClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceAccountOutcome RedisClient::ModifyInstanceAccount(const ModifyInstanceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAccountResponse rsp = ModifyInstanceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAccountOutcome(rsp);
        else
            return ModifyInstanceAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAccountOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceAccountAsync(const ModifyInstanceAccountRequest& request, const ModifyInstanceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceAccountRequest&;
    using Resp = ModifyInstanceAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceAccountOutcomeCallable RedisClient::ModifyInstanceAccountCallable(const ModifyInstanceAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceAccountOutcome>>();
    ModifyInstanceAccountAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceAccountRequest&,
        ModifyInstanceAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceAvailabilityZonesOutcome RedisClient::ModifyInstanceAvailabilityZones(const ModifyInstanceAvailabilityZonesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAvailabilityZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAvailabilityZonesResponse rsp = ModifyInstanceAvailabilityZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAvailabilityZonesOutcome(rsp);
        else
            return ModifyInstanceAvailabilityZonesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAvailabilityZonesOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceAvailabilityZonesAsync(const ModifyInstanceAvailabilityZonesRequest& request, const ModifyInstanceAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceAvailabilityZonesRequest&;
    using Resp = ModifyInstanceAvailabilityZonesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceAvailabilityZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceAvailabilityZonesOutcomeCallable RedisClient::ModifyInstanceAvailabilityZonesCallable(const ModifyInstanceAvailabilityZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceAvailabilityZonesOutcome>>();
    ModifyInstanceAvailabilityZonesAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceAvailabilityZonesRequest&,
        ModifyInstanceAvailabilityZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceBackupModeOutcome RedisClient::ModifyInstanceBackupMode(const ModifyInstanceBackupModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceBackupMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceBackupModeResponse rsp = ModifyInstanceBackupModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceBackupModeOutcome(rsp);
        else
            return ModifyInstanceBackupModeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceBackupModeOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceBackupModeAsync(const ModifyInstanceBackupModeRequest& request, const ModifyInstanceBackupModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceBackupModeRequest&;
    using Resp = ModifyInstanceBackupModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceBackupMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceBackupModeOutcomeCallable RedisClient::ModifyInstanceBackupModeCallable(const ModifyInstanceBackupModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceBackupModeOutcome>>();
    ModifyInstanceBackupModeAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceBackupModeRequest&,
        ModifyInstanceBackupModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceEventOutcome RedisClient::ModifyInstanceEvent(const ModifyInstanceEventRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceEventResponse rsp = ModifyInstanceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceEventOutcome(rsp);
        else
            return ModifyInstanceEventOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceEventOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceEventAsync(const ModifyInstanceEventRequest& request, const ModifyInstanceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceEventRequest&;
    using Resp = ModifyInstanceEventResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceEventOutcomeCallable RedisClient::ModifyInstanceEventCallable(const ModifyInstanceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceEventOutcome>>();
    ModifyInstanceEventAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceEventRequest&,
        ModifyInstanceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceLogDeliveryOutcome RedisClient::ModifyInstanceLogDelivery(const ModifyInstanceLogDeliveryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceLogDelivery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceLogDeliveryResponse rsp = ModifyInstanceLogDeliveryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceLogDeliveryOutcome(rsp);
        else
            return ModifyInstanceLogDeliveryOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceLogDeliveryOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceLogDeliveryAsync(const ModifyInstanceLogDeliveryRequest& request, const ModifyInstanceLogDeliveryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceLogDeliveryRequest&;
    using Resp = ModifyInstanceLogDeliveryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceLogDelivery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceLogDeliveryOutcomeCallable RedisClient::ModifyInstanceLogDeliveryCallable(const ModifyInstanceLogDeliveryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceLogDeliveryOutcome>>();
    ModifyInstanceLogDeliveryAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceLogDeliveryRequest&,
        ModifyInstanceLogDeliveryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceParamsOutcome RedisClient::ModifyInstanceParams(const ModifyInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceParamsResponse rsp = ModifyInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceParamsOutcome(rsp);
        else
            return ModifyInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceParamsOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceParamsAsync(const ModifyInstanceParamsRequest& request, const ModifyInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceParamsRequest&;
    using Resp = ModifyInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceParamsOutcomeCallable RedisClient::ModifyInstanceParamsCallable(const ModifyInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceParamsOutcome>>();
    ModifyInstanceParamsAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceParamsRequest&,
        ModifyInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstancePasswordOutcome RedisClient::ModifyInstancePassword(const ModifyInstancePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancePasswordResponse rsp = ModifyInstancePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancePasswordOutcome(rsp);
        else
            return ModifyInstancePasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancePasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstancePasswordAsync(const ModifyInstancePasswordRequest& request, const ModifyInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancePasswordRequest&;
    using Resp = ModifyInstancePasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancePassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstancePasswordOutcomeCallable RedisClient::ModifyInstancePasswordCallable(const ModifyInstancePasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancePasswordOutcome>>();
    ModifyInstancePasswordAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstancePasswordRequest&,
        ModifyInstancePasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyInstanceReadOnlyOutcome RedisClient::ModifyInstanceReadOnly(const ModifyInstanceReadOnlyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceReadOnly");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceReadOnlyResponse rsp = ModifyInstanceReadOnlyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceReadOnlyOutcome(rsp);
        else
            return ModifyInstanceReadOnlyOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceReadOnlyOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyInstanceReadOnlyAsync(const ModifyInstanceReadOnlyRequest& request, const ModifyInstanceReadOnlyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceReadOnlyRequest&;
    using Resp = ModifyInstanceReadOnlyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceReadOnly", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyInstanceReadOnlyOutcomeCallable RedisClient::ModifyInstanceReadOnlyCallable(const ModifyInstanceReadOnlyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceReadOnlyOutcome>>();
    ModifyInstanceReadOnlyAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyInstanceReadOnlyRequest&,
        ModifyInstanceReadOnlyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyMaintenanceWindowOutcome RedisClient::ModifyMaintenanceWindow(const ModifyMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaintenanceWindowResponse rsp = ModifyMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaintenanceWindowOutcome(rsp);
        else
            return ModifyMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyMaintenanceWindowOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyMaintenanceWindowAsync(const ModifyMaintenanceWindowRequest& request, const ModifyMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaintenanceWindowRequest&;
    using Resp = ModifyMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyMaintenanceWindowOutcomeCallable RedisClient::ModifyMaintenanceWindowCallable(const ModifyMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaintenanceWindowOutcome>>();
    ModifyMaintenanceWindowAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyMaintenanceWindowRequest&,
        ModifyMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyNetworkConfigOutcome RedisClient::ModifyNetworkConfig(const ModifyNetworkConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetworkConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetworkConfigResponse rsp = ModifyNetworkConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetworkConfigOutcome(rsp);
        else
            return ModifyNetworkConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyNetworkConfigOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyNetworkConfigAsync(const ModifyNetworkConfigRequest& request, const ModifyNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetworkConfigRequest&;
    using Resp = ModifyNetworkConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetworkConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyNetworkConfigOutcomeCallable RedisClient::ModifyNetworkConfigCallable(const ModifyNetworkConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetworkConfigOutcome>>();
    ModifyNetworkConfigAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyNetworkConfigRequest&,
        ModifyNetworkConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyParamTemplateOutcome RedisClient::ModifyParamTemplate(const ModifyParamTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyParamTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyParamTemplateResponse rsp = ModifyParamTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyParamTemplateOutcome(rsp);
        else
            return ModifyParamTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyParamTemplateOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyParamTemplateAsync(const ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyParamTemplateRequest&;
    using Resp = ModifyParamTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyParamTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyParamTemplateOutcomeCallable RedisClient::ModifyParamTemplateCallable(const ModifyParamTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyParamTemplateOutcome>>();
    ModifyParamTemplateAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyParamTemplateRequest&,
        ModifyParamTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ModifyReplicationGroupOutcome RedisClient::ModifyReplicationGroup(const ModifyReplicationGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReplicationGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReplicationGroupResponse rsp = ModifyReplicationGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReplicationGroupOutcome(rsp);
        else
            return ModifyReplicationGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyReplicationGroupOutcome(outcome.GetError());
    }
}

void RedisClient::ModifyReplicationGroupAsync(const ModifyReplicationGroupRequest& request, const ModifyReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReplicationGroupRequest&;
    using Resp = ModifyReplicationGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReplicationGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ModifyReplicationGroupOutcomeCallable RedisClient::ModifyReplicationGroupCallable(const ModifyReplicationGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReplicationGroupOutcome>>();
    ModifyReplicationGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const ModifyReplicationGroupRequest&,
        ModifyReplicationGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::OpenSSLOutcome RedisClient::OpenSSL(const OpenSSLRequest &request)
{
    auto outcome = MakeRequest(request, "OpenSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenSSLResponse rsp = OpenSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenSSLOutcome(rsp);
        else
            return OpenSSLOutcome(o.GetError());
    }
    else
    {
        return OpenSSLOutcome(outcome.GetError());
    }
}

void RedisClient::OpenSSLAsync(const OpenSSLRequest& request, const OpenSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenSSLRequest&;
    using Resp = OpenSSLResponse;

    DoRequestAsync<Req, Resp>(
        "OpenSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::OpenSSLOutcomeCallable RedisClient::OpenSSLCallable(const OpenSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenSSLOutcome>>();
    OpenSSLAsync(
    request,
    [prom](
        const RedisClient*,
        const OpenSSLRequest&,
        OpenSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ReleaseWanAddressOutcome RedisClient::ReleaseWanAddress(const ReleaseWanAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseWanAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseWanAddressResponse rsp = ReleaseWanAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseWanAddressOutcome(rsp);
        else
            return ReleaseWanAddressOutcome(o.GetError());
    }
    else
    {
        return ReleaseWanAddressOutcome(outcome.GetError());
    }
}

void RedisClient::ReleaseWanAddressAsync(const ReleaseWanAddressRequest& request, const ReleaseWanAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseWanAddressRequest&;
    using Resp = ReleaseWanAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseWanAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ReleaseWanAddressOutcomeCallable RedisClient::ReleaseWanAddressCallable(const ReleaseWanAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseWanAddressOutcome>>();
    ReleaseWanAddressAsync(
    request,
    [prom](
        const RedisClient*,
        const ReleaseWanAddressRequest&,
        ReleaseWanAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::RemoveReplicationGroupOutcome RedisClient::RemoveReplicationGroup(const RemoveReplicationGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveReplicationGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveReplicationGroupResponse rsp = RemoveReplicationGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveReplicationGroupOutcome(rsp);
        else
            return RemoveReplicationGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveReplicationGroupOutcome(outcome.GetError());
    }
}

void RedisClient::RemoveReplicationGroupAsync(const RemoveReplicationGroupRequest& request, const RemoveReplicationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveReplicationGroupRequest&;
    using Resp = RemoveReplicationGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveReplicationGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::RemoveReplicationGroupOutcomeCallable RedisClient::RemoveReplicationGroupCallable(const RemoveReplicationGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveReplicationGroupOutcome>>();
    RemoveReplicationGroupAsync(
    request,
    [prom](
        const RedisClient*,
        const RemoveReplicationGroupRequest&,
        RemoveReplicationGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::RemoveReplicationInstanceOutcome RedisClient::RemoveReplicationInstance(const RemoveReplicationInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveReplicationInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveReplicationInstanceResponse rsp = RemoveReplicationInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveReplicationInstanceOutcome(rsp);
        else
            return RemoveReplicationInstanceOutcome(o.GetError());
    }
    else
    {
        return RemoveReplicationInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::RemoveReplicationInstanceAsync(const RemoveReplicationInstanceRequest& request, const RemoveReplicationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveReplicationInstanceRequest&;
    using Resp = RemoveReplicationInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveReplicationInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::RemoveReplicationInstanceOutcomeCallable RedisClient::RemoveReplicationInstanceCallable(const RemoveReplicationInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveReplicationInstanceOutcome>>();
    RemoveReplicationInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const RemoveReplicationInstanceRequest&,
        RemoveReplicationInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::RenewInstanceOutcome RedisClient::RenewInstance(const RenewInstanceRequest &request)
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

void RedisClient::RenewInstanceAsync(const RenewInstanceRequest& request, const RenewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewInstanceRequest&;
    using Resp = RenewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::RenewInstanceOutcomeCallable RedisClient::RenewInstanceCallable(const RenewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewInstanceOutcome>>();
    RenewInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const RenewInstanceRequest&,
        RenewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::ResetPasswordOutcome RedisClient::ResetPassword(const ResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetPasswordResponse rsp = ResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetPasswordOutcome(rsp);
        else
            return ResetPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetPasswordOutcome(outcome.GetError());
    }
}

void RedisClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetPasswordRequest&;
    using Resp = ResetPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::ResetPasswordOutcomeCallable RedisClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetPasswordOutcome>>();
    ResetPasswordAsync(
    request,
    [prom](
        const RedisClient*,
        const ResetPasswordRequest&,
        ResetPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::RestoreInstanceOutcome RedisClient::RestoreInstance(const RestoreInstanceRequest &request)
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

void RedisClient::RestoreInstanceAsync(const RestoreInstanceRequest& request, const RestoreInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestoreInstanceRequest&;
    using Resp = RestoreInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::RestoreInstanceOutcomeCallable RedisClient::RestoreInstanceCallable(const RestoreInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreInstanceOutcome>>();
    RestoreInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const RestoreInstanceRequest&,
        RestoreInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::StartupInstanceOutcome RedisClient::StartupInstance(const StartupInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "StartupInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartupInstanceResponse rsp = StartupInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartupInstanceOutcome(rsp);
        else
            return StartupInstanceOutcome(o.GetError());
    }
    else
    {
        return StartupInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::StartupInstanceAsync(const StartupInstanceRequest& request, const StartupInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartupInstanceRequest&;
    using Resp = StartupInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "StartupInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::StartupInstanceOutcomeCallable RedisClient::StartupInstanceCallable(const StartupInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartupInstanceOutcome>>();
    StartupInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const StartupInstanceRequest&,
        StartupInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::SwitchAccessNewInstanceOutcome RedisClient::SwitchAccessNewInstance(const SwitchAccessNewInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchAccessNewInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchAccessNewInstanceResponse rsp = SwitchAccessNewInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchAccessNewInstanceOutcome(rsp);
        else
            return SwitchAccessNewInstanceOutcome(o.GetError());
    }
    else
    {
        return SwitchAccessNewInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::SwitchAccessNewInstanceAsync(const SwitchAccessNewInstanceRequest& request, const SwitchAccessNewInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchAccessNewInstanceRequest&;
    using Resp = SwitchAccessNewInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchAccessNewInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::SwitchAccessNewInstanceOutcomeCallable RedisClient::SwitchAccessNewInstanceCallable(const SwitchAccessNewInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchAccessNewInstanceOutcome>>();
    SwitchAccessNewInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const SwitchAccessNewInstanceRequest&,
        SwitchAccessNewInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::SwitchInstanceVipOutcome RedisClient::SwitchInstanceVip(const SwitchInstanceVipRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchInstanceVip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchInstanceVipResponse rsp = SwitchInstanceVipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchInstanceVipOutcome(rsp);
        else
            return SwitchInstanceVipOutcome(o.GetError());
    }
    else
    {
        return SwitchInstanceVipOutcome(outcome.GetError());
    }
}

void RedisClient::SwitchInstanceVipAsync(const SwitchInstanceVipRequest& request, const SwitchInstanceVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchInstanceVipRequest&;
    using Resp = SwitchInstanceVipResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchInstanceVip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::SwitchInstanceVipOutcomeCallable RedisClient::SwitchInstanceVipCallable(const SwitchInstanceVipRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchInstanceVipOutcome>>();
    SwitchInstanceVipAsync(
    request,
    [prom](
        const RedisClient*,
        const SwitchInstanceVipRequest&,
        SwitchInstanceVipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::SwitchProxyOutcome RedisClient::SwitchProxy(const SwitchProxyRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchProxyResponse rsp = SwitchProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchProxyOutcome(rsp);
        else
            return SwitchProxyOutcome(o.GetError());
    }
    else
    {
        return SwitchProxyOutcome(outcome.GetError());
    }
}

void RedisClient::SwitchProxyAsync(const SwitchProxyRequest& request, const SwitchProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchProxyRequest&;
    using Resp = SwitchProxyResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::SwitchProxyOutcomeCallable RedisClient::SwitchProxyCallable(const SwitchProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchProxyOutcome>>();
    SwitchProxyAsync(
    request,
    [prom](
        const RedisClient*,
        const SwitchProxyRequest&,
        SwitchProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::UpgradeInstanceOutcome RedisClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceRequest&;
    using Resp = UpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::UpgradeInstanceOutcomeCallable RedisClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const RedisClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::UpgradeInstanceVersionOutcome RedisClient::UpgradeInstanceVersion(const UpgradeInstanceVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstanceVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceVersionResponse rsp = UpgradeInstanceVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceVersionOutcome(rsp);
        else
            return UpgradeInstanceVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceVersionOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeInstanceVersionAsync(const UpgradeInstanceVersionRequest& request, const UpgradeInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceVersionRequest&;
    using Resp = UpgradeInstanceVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstanceVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::UpgradeInstanceVersionOutcomeCallable RedisClient::UpgradeInstanceVersionCallable(const UpgradeInstanceVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceVersionOutcome>>();
    UpgradeInstanceVersionAsync(
    request,
    [prom](
        const RedisClient*,
        const UpgradeInstanceVersionRequest&,
        UpgradeInstanceVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::UpgradeProxyVersionOutcome RedisClient::UpgradeProxyVersion(const UpgradeProxyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeProxyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeProxyVersionResponse rsp = UpgradeProxyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeProxyVersionOutcome(rsp);
        else
            return UpgradeProxyVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeProxyVersionOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeProxyVersionAsync(const UpgradeProxyVersionRequest& request, const UpgradeProxyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeProxyVersionRequest&;
    using Resp = UpgradeProxyVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeProxyVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::UpgradeProxyVersionOutcomeCallable RedisClient::UpgradeProxyVersionCallable(const UpgradeProxyVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeProxyVersionOutcome>>();
    UpgradeProxyVersionAsync(
    request,
    [prom](
        const RedisClient*,
        const UpgradeProxyVersionRequest&,
        UpgradeProxyVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::UpgradeSmallVersionOutcome RedisClient::UpgradeSmallVersion(const UpgradeSmallVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeSmallVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeSmallVersionResponse rsp = UpgradeSmallVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeSmallVersionOutcome(rsp);
        else
            return UpgradeSmallVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeSmallVersionOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeSmallVersionAsync(const UpgradeSmallVersionRequest& request, const UpgradeSmallVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeSmallVersionRequest&;
    using Resp = UpgradeSmallVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeSmallVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::UpgradeSmallVersionOutcomeCallable RedisClient::UpgradeSmallVersionCallable(const UpgradeSmallVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeSmallVersionOutcome>>();
    UpgradeSmallVersionAsync(
    request,
    [prom](
        const RedisClient*,
        const UpgradeSmallVersionRequest&,
        UpgradeSmallVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

RedisClient::UpgradeVersionToMultiAvailabilityZonesOutcome RedisClient::UpgradeVersionToMultiAvailabilityZones(const UpgradeVersionToMultiAvailabilityZonesRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeVersionToMultiAvailabilityZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeVersionToMultiAvailabilityZonesResponse rsp = UpgradeVersionToMultiAvailabilityZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeVersionToMultiAvailabilityZonesOutcome(rsp);
        else
            return UpgradeVersionToMultiAvailabilityZonesOutcome(o.GetError());
    }
    else
    {
        return UpgradeVersionToMultiAvailabilityZonesOutcome(outcome.GetError());
    }
}

void RedisClient::UpgradeVersionToMultiAvailabilityZonesAsync(const UpgradeVersionToMultiAvailabilityZonesRequest& request, const UpgradeVersionToMultiAvailabilityZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeVersionToMultiAvailabilityZonesRequest&;
    using Resp = UpgradeVersionToMultiAvailabilityZonesResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeVersionToMultiAvailabilityZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

RedisClient::UpgradeVersionToMultiAvailabilityZonesOutcomeCallable RedisClient::UpgradeVersionToMultiAvailabilityZonesCallable(const UpgradeVersionToMultiAvailabilityZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeVersionToMultiAvailabilityZonesOutcome>>();
    UpgradeVersionToMultiAvailabilityZonesAsync(
    request,
    [prom](
        const RedisClient*,
        const UpgradeVersionToMultiAvailabilityZonesRequest&,
        UpgradeVersionToMultiAvailabilityZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

