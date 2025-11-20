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

#include <tencentcloud/vdb/v20230616/VdbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vdb::V20230616;
using namespace TencentCloud::Vdb::V20230616::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-06-16";
    const string ENDPOINT = "vdb.tencentcloudapi.com";
}

VdbClient::VdbClient(const Credential &credential, const string &region) :
    VdbClient(credential, region, ClientProfile())
{
}

VdbClient::VdbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VdbClient::AssociateSecurityGroupsOutcome VdbClient::AssociateSecurityGroups(const AssociateSecurityGroupsRequest &request)
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

void VdbClient::AssociateSecurityGroupsAsync(const AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::AssociateSecurityGroupsOutcomeCallable VdbClient::AssociateSecurityGroupsCallable(const AssociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateSecurityGroupsOutcome>>();
    AssociateSecurityGroupsAsync(
    request,
    [prom](
        const VdbClient*,
        const AssociateSecurityGroupsRequest&,
        AssociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::CreateInstanceOutcome VdbClient::CreateInstance(const CreateInstanceRequest &request)
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

void VdbClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::CreateInstanceOutcomeCallable VdbClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const VdbClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DescribeDBSecurityGroupsOutcome VdbClient::DescribeDBSecurityGroups(const DescribeDBSecurityGroupsRequest &request)
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

void VdbClient::DescribeDBSecurityGroupsAsync(const DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::DescribeDBSecurityGroupsOutcomeCallable VdbClient::DescribeDBSecurityGroupsCallable(const DescribeDBSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBSecurityGroupsOutcome>>();
    DescribeDBSecurityGroupsAsync(
    request,
    [prom](
        const VdbClient*,
        const DescribeDBSecurityGroupsRequest&,
        DescribeDBSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DescribeInstanceMaintenanceWindowOutcome VdbClient::DescribeInstanceMaintenanceWindow(const DescribeInstanceMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceMaintenanceWindowResponse rsp = DescribeInstanceMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceMaintenanceWindowOutcome(rsp);
        else
            return DescribeInstanceMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceMaintenanceWindowOutcome(outcome.GetError());
    }
}

void VdbClient::DescribeInstanceMaintenanceWindowAsync(const DescribeInstanceMaintenanceWindowRequest& request, const DescribeInstanceMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceMaintenanceWindowRequest&;
    using Resp = DescribeInstanceMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::DescribeInstanceMaintenanceWindowOutcomeCallable VdbClient::DescribeInstanceMaintenanceWindowCallable(const DescribeInstanceMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceMaintenanceWindowOutcome>>();
    DescribeInstanceMaintenanceWindowAsync(
    request,
    [prom](
        const VdbClient*,
        const DescribeInstanceMaintenanceWindowRequest&,
        DescribeInstanceMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DescribeInstanceNodesOutcome VdbClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void VdbClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodesRequest&;
    using Resp = DescribeInstanceNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::DescribeInstanceNodesOutcomeCallable VdbClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesOutcome>>();
    DescribeInstanceNodesAsync(
    request,
    [prom](
        const VdbClient*,
        const DescribeInstanceNodesRequest&,
        DescribeInstanceNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DescribeInstancesOutcome VdbClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void VdbClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::DescribeInstancesOutcomeCallable VdbClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const VdbClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DestroyInstancesOutcome VdbClient::DestroyInstances(const DestroyInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstancesResponse rsp = DestroyInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstancesOutcome(rsp);
        else
            return DestroyInstancesOutcome(o.GetError());
    }
    else
    {
        return DestroyInstancesOutcome(outcome.GetError());
    }
}

void VdbClient::DestroyInstancesAsync(const DestroyInstancesRequest& request, const DestroyInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyInstancesRequest&;
    using Resp = DestroyInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::DestroyInstancesOutcomeCallable VdbClient::DestroyInstancesCallable(const DestroyInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyInstancesOutcome>>();
    DestroyInstancesAsync(
    request,
    [prom](
        const VdbClient*,
        const DestroyInstancesRequest&,
        DestroyInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::DisassociateSecurityGroupsOutcome VdbClient::DisassociateSecurityGroups(const DisassociateSecurityGroupsRequest &request)
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

void VdbClient::DisassociateSecurityGroupsAsync(const DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::DisassociateSecurityGroupsOutcomeCallable VdbClient::DisassociateSecurityGroupsCallable(const DisassociateSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupsOutcome>>();
    DisassociateSecurityGroupsAsync(
    request,
    [prom](
        const VdbClient*,
        const DisassociateSecurityGroupsRequest&,
        DisassociateSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::IsolateInstanceOutcome VdbClient::IsolateInstance(const IsolateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateInstanceResponse rsp = IsolateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateInstanceOutcome(rsp);
        else
            return IsolateInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateInstanceOutcome(outcome.GetError());
    }
}

void VdbClient::IsolateInstanceAsync(const IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateInstanceRequest&;
    using Resp = IsolateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::IsolateInstanceOutcomeCallable VdbClient::IsolateInstanceCallable(const IsolateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateInstanceOutcome>>();
    IsolateInstanceAsync(
    request,
    [prom](
        const VdbClient*,
        const IsolateInstanceRequest&,
        IsolateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::ModifyDBInstanceSecurityGroupsOutcome VdbClient::ModifyDBInstanceSecurityGroups(const ModifyDBInstanceSecurityGroupsRequest &request)
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

void VdbClient::ModifyDBInstanceSecurityGroupsAsync(const ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::ModifyDBInstanceSecurityGroupsOutcomeCallable VdbClient::ModifyDBInstanceSecurityGroupsCallable(const ModifyDBInstanceSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupsOutcome>>();
    ModifyDBInstanceSecurityGroupsAsync(
    request,
    [prom](
        const VdbClient*,
        const ModifyDBInstanceSecurityGroupsRequest&,
        ModifyDBInstanceSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::ModifyInstanceMaintenanceWindowOutcome VdbClient::ModifyInstanceMaintenanceWindow(const ModifyInstanceMaintenanceWindowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceMaintenanceWindow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceMaintenanceWindowResponse rsp = ModifyInstanceMaintenanceWindowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceMaintenanceWindowOutcome(rsp);
        else
            return ModifyInstanceMaintenanceWindowOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceMaintenanceWindowOutcome(outcome.GetError());
    }
}

void VdbClient::ModifyInstanceMaintenanceWindowAsync(const ModifyInstanceMaintenanceWindowRequest& request, const ModifyInstanceMaintenanceWindowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceMaintenanceWindowRequest&;
    using Resp = ModifyInstanceMaintenanceWindowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceMaintenanceWindow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::ModifyInstanceMaintenanceWindowOutcomeCallable VdbClient::ModifyInstanceMaintenanceWindowCallable(const ModifyInstanceMaintenanceWindowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceMaintenanceWindowOutcome>>();
    ModifyInstanceMaintenanceWindowAsync(
    request,
    [prom](
        const VdbClient*,
        const ModifyInstanceMaintenanceWindowRequest&,
        ModifyInstanceMaintenanceWindowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::RecoverInstanceOutcome VdbClient::RecoverInstance(const RecoverInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverInstanceResponse rsp = RecoverInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverInstanceOutcome(rsp);
        else
            return RecoverInstanceOutcome(o.GetError());
    }
    else
    {
        return RecoverInstanceOutcome(outcome.GetError());
    }
}

void VdbClient::RecoverInstanceAsync(const RecoverInstanceRequest& request, const RecoverInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverInstanceRequest&;
    using Resp = RecoverInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::RecoverInstanceOutcomeCallable VdbClient::RecoverInstanceCallable(const RecoverInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverInstanceOutcome>>();
    RecoverInstanceAsync(
    request,
    [prom](
        const VdbClient*,
        const RecoverInstanceRequest&,
        RecoverInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::ScaleOutInstanceOutcome VdbClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
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

void VdbClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

VdbClient::ScaleOutInstanceOutcomeCallable VdbClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstanceOutcome>>();
    ScaleOutInstanceAsync(
    request,
    [prom](
        const VdbClient*,
        const ScaleOutInstanceRequest&,
        ScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VdbClient::ScaleUpInstanceOutcome VdbClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void VdbClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleUpInstanceRequest&;
    using Resp = ScaleUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VdbClient::ScaleUpInstanceOutcomeCallable VdbClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleUpInstanceOutcome>>();
    ScaleUpInstanceAsync(
    request,
    [prom](
        const VdbClient*,
        const ScaleUpInstanceRequest&,
        ScaleUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

