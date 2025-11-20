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

#include <tencentcloud/gwlb/v20240906/GwlbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gwlb::V20240906;
using namespace TencentCloud::Gwlb::V20240906::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-09-06";
    const string ENDPOINT = "gwlb.tencentcloudapi.com";
}

GwlbClient::GwlbClient(const Credential &credential, const string &region) :
    GwlbClient(credential, region, ClientProfile())
{
}

GwlbClient::GwlbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GwlbClient::AssociateTargetGroupsOutcome GwlbClient::AssociateTargetGroups(const AssociateTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateTargetGroupsResponse rsp = AssociateTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateTargetGroupsOutcome(rsp);
        else
            return AssociateTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::AssociateTargetGroupsAsync(const AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateTargetGroupsRequest&;
    using Resp = AssociateTargetGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateTargetGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::AssociateTargetGroupsOutcomeCallable GwlbClient::AssociateTargetGroupsCallable(const AssociateTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateTargetGroupsOutcome>>();
    AssociateTargetGroupsAsync(
    request,
    [prom](
        const GwlbClient*,
        const AssociateTargetGroupsRequest&,
        AssociateTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::CreateGatewayLoadBalancerOutcome GwlbClient::CreateGatewayLoadBalancer(const CreateGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatewayLoadBalancerResponse rsp = CreateGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatewayLoadBalancerOutcome(rsp);
        else
            return CreateGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::CreateGatewayLoadBalancerAsync(const CreateGatewayLoadBalancerRequest& request, const CreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGatewayLoadBalancerRequest&;
    using Resp = CreateGatewayLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGatewayLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::CreateGatewayLoadBalancerOutcomeCallable GwlbClient::CreateGatewayLoadBalancerCallable(const CreateGatewayLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGatewayLoadBalancerOutcome>>();
    CreateGatewayLoadBalancerAsync(
    request,
    [prom](
        const GwlbClient*,
        const CreateGatewayLoadBalancerRequest&,
        CreateGatewayLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::CreateTargetGroupOutcome GwlbClient::CreateTargetGroup(const CreateTargetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTargetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTargetGroupResponse rsp = CreateTargetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTargetGroupOutcome(rsp);
        else
            return CreateTargetGroupOutcome(o.GetError());
    }
    else
    {
        return CreateTargetGroupOutcome(outcome.GetError());
    }
}

void GwlbClient::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTargetGroupRequest&;
    using Resp = CreateTargetGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTargetGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::CreateTargetGroupOutcomeCallable GwlbClient::CreateTargetGroupCallable(const CreateTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTargetGroupOutcome>>();
    CreateTargetGroupAsync(
    request,
    [prom](
        const GwlbClient*,
        const CreateTargetGroupRequest&,
        CreateTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DeleteGatewayLoadBalancerOutcome GwlbClient::DeleteGatewayLoadBalancer(const DeleteGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayLoadBalancerResponse rsp = DeleteGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayLoadBalancerOutcome(rsp);
        else
            return DeleteGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::DeleteGatewayLoadBalancerAsync(const DeleteGatewayLoadBalancerRequest& request, const DeleteGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGatewayLoadBalancerRequest&;
    using Resp = DeleteGatewayLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGatewayLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DeleteGatewayLoadBalancerOutcomeCallable GwlbClient::DeleteGatewayLoadBalancerCallable(const DeleteGatewayLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGatewayLoadBalancerOutcome>>();
    DeleteGatewayLoadBalancerAsync(
    request,
    [prom](
        const GwlbClient*,
        const DeleteGatewayLoadBalancerRequest&,
        DeleteGatewayLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DeleteTargetGroupsOutcome GwlbClient::DeleteTargetGroups(const DeleteTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTargetGroupsResponse rsp = DeleteTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTargetGroupsOutcome(rsp);
        else
            return DeleteTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DeleteTargetGroupsAsync(const DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTargetGroupsRequest&;
    using Resp = DeleteTargetGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTargetGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DeleteTargetGroupsOutcomeCallable GwlbClient::DeleteTargetGroupsCallable(const DeleteTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTargetGroupsOutcome>>();
    DeleteTargetGroupsAsync(
    request,
    [prom](
        const GwlbClient*,
        const DeleteTargetGroupsRequest&,
        DeleteTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DeregisterTargetGroupInstancesOutcome GwlbClient::DeregisterTargetGroupInstances(const DeregisterTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetGroupInstancesResponse rsp = DeregisterTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetGroupInstancesOutcome(rsp);
        else
            return DeregisterTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::DeregisterTargetGroupInstancesAsync(const DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeregisterTargetGroupInstancesRequest&;
    using Resp = DeregisterTargetGroupInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DeregisterTargetGroupInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DeregisterTargetGroupInstancesOutcomeCallable GwlbClient::DeregisterTargetGroupInstancesCallable(const DeregisterTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterTargetGroupInstancesOutcome>>();
    DeregisterTargetGroupInstancesAsync(
    request,
    [prom](
        const GwlbClient*,
        const DeregisterTargetGroupInstancesRequest&,
        DeregisterTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeGatewayLoadBalancersOutcome GwlbClient::DescribeGatewayLoadBalancers(const DescribeGatewayLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayLoadBalancersResponse rsp = DescribeGatewayLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayLoadBalancersOutcome(rsp);
        else
            return DescribeGatewayLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayLoadBalancersOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeGatewayLoadBalancersAsync(const DescribeGatewayLoadBalancersRequest& request, const DescribeGatewayLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayLoadBalancersRequest&;
    using Resp = DescribeGatewayLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeGatewayLoadBalancersOutcomeCallable GwlbClient::DescribeGatewayLoadBalancersCallable(const DescribeGatewayLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayLoadBalancersOutcome>>();
    DescribeGatewayLoadBalancersAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeGatewayLoadBalancersRequest&,
        DescribeGatewayLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeGatewayLoadBalancersResourcesOutcome GwlbClient::DescribeGatewayLoadBalancersResources(const DescribeGatewayLoadBalancersResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayLoadBalancersResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayLoadBalancersResourcesResponse rsp = DescribeGatewayLoadBalancersResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayLoadBalancersResourcesOutcome(rsp);
        else
            return DescribeGatewayLoadBalancersResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayLoadBalancersResourcesOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeGatewayLoadBalancersResourcesAsync(const DescribeGatewayLoadBalancersResourcesRequest& request, const DescribeGatewayLoadBalancersResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayLoadBalancersResourcesRequest&;
    using Resp = DescribeGatewayLoadBalancersResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayLoadBalancersResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeGatewayLoadBalancersResourcesOutcomeCallable GwlbClient::DescribeGatewayLoadBalancersResourcesCallable(const DescribeGatewayLoadBalancersResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayLoadBalancersResourcesOutcome>>();
    DescribeGatewayLoadBalancersResourcesAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeGatewayLoadBalancersResourcesRequest&,
        DescribeGatewayLoadBalancersResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeTargetGroupInstanceStatusOutcome GwlbClient::DescribeTargetGroupInstanceStatus(const DescribeTargetGroupInstanceStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupInstanceStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupInstanceStatusResponse rsp = DescribeTargetGroupInstanceStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupInstanceStatusOutcome(rsp);
        else
            return DescribeTargetGroupInstanceStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupInstanceStatusOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupInstanceStatusAsync(const DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupInstanceStatusRequest&;
    using Resp = DescribeTargetGroupInstanceStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroupInstanceStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeTargetGroupInstanceStatusOutcomeCallable GwlbClient::DescribeTargetGroupInstanceStatusCallable(const DescribeTargetGroupInstanceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupInstanceStatusOutcome>>();
    DescribeTargetGroupInstanceStatusAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeTargetGroupInstanceStatusRequest&,
        DescribeTargetGroupInstanceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeTargetGroupInstancesOutcome GwlbClient::DescribeTargetGroupInstances(const DescribeTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupInstancesResponse rsp = DescribeTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupInstancesOutcome(rsp);
        else
            return DescribeTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupInstancesAsync(const DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupInstancesRequest&;
    using Resp = DescribeTargetGroupInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroupInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeTargetGroupInstancesOutcomeCallable GwlbClient::DescribeTargetGroupInstancesCallable(const DescribeTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupInstancesOutcome>>();
    DescribeTargetGroupInstancesAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeTargetGroupInstancesRequest&,
        DescribeTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeTargetGroupListOutcome GwlbClient::DescribeTargetGroupList(const DescribeTargetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupListResponse rsp = DescribeTargetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupListOutcome(rsp);
        else
            return DescribeTargetGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupListOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupListAsync(const DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupListRequest&;
    using Resp = DescribeTargetGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeTargetGroupListOutcomeCallable GwlbClient::DescribeTargetGroupListCallable(const DescribeTargetGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupListOutcome>>();
    DescribeTargetGroupListAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeTargetGroupListRequest&,
        DescribeTargetGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeTargetGroupsOutcome GwlbClient::DescribeTargetGroups(const DescribeTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupsResponse rsp = DescribeTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupsOutcome(rsp);
        else
            return DescribeTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupsRequest&;
    using Resp = DescribeTargetGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeTargetGroupsOutcomeCallable GwlbClient::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupsOutcome>>();
    DescribeTargetGroupsAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeTargetGroupsRequest&,
        DescribeTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DescribeTaskStatusOutcome GwlbClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void GwlbClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DescribeTaskStatusOutcomeCallable GwlbClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const GwlbClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::DisassociateTargetGroupsOutcome GwlbClient::DisassociateTargetGroups(const DisassociateTargetGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateTargetGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateTargetGroupsResponse rsp = DisassociateTargetGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateTargetGroupsOutcome(rsp);
        else
            return DisassociateTargetGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateTargetGroupsOutcome(outcome.GetError());
    }
}

void GwlbClient::DisassociateTargetGroupsAsync(const DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateTargetGroupsRequest&;
    using Resp = DisassociateTargetGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateTargetGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::DisassociateTargetGroupsOutcomeCallable GwlbClient::DisassociateTargetGroupsCallable(const DisassociateTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateTargetGroupsOutcome>>();
    DisassociateTargetGroupsAsync(
    request,
    [prom](
        const GwlbClient*,
        const DisassociateTargetGroupsRequest&,
        DisassociateTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::InquirePriceCreateGatewayLoadBalancerOutcome GwlbClient::InquirePriceCreateGatewayLoadBalancer(const InquirePriceCreateGatewayLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateGatewayLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateGatewayLoadBalancerResponse rsp = InquirePriceCreateGatewayLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateGatewayLoadBalancerOutcome(rsp);
        else
            return InquirePriceCreateGatewayLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateGatewayLoadBalancerOutcome(outcome.GetError());
    }
}

void GwlbClient::InquirePriceCreateGatewayLoadBalancerAsync(const InquirePriceCreateGatewayLoadBalancerRequest& request, const InquirePriceCreateGatewayLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateGatewayLoadBalancerRequest&;
    using Resp = InquirePriceCreateGatewayLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateGatewayLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::InquirePriceCreateGatewayLoadBalancerOutcomeCallable GwlbClient::InquirePriceCreateGatewayLoadBalancerCallable(const InquirePriceCreateGatewayLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateGatewayLoadBalancerOutcome>>();
    InquirePriceCreateGatewayLoadBalancerAsync(
    request,
    [prom](
        const GwlbClient*,
        const InquirePriceCreateGatewayLoadBalancerRequest&,
        InquirePriceCreateGatewayLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::ModifyGatewayLoadBalancerAttributeOutcome GwlbClient::ModifyGatewayLoadBalancerAttribute(const ModifyGatewayLoadBalancerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayLoadBalancerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayLoadBalancerAttributeResponse rsp = ModifyGatewayLoadBalancerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayLoadBalancerAttributeOutcome(rsp);
        else
            return ModifyGatewayLoadBalancerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayLoadBalancerAttributeOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyGatewayLoadBalancerAttributeAsync(const ModifyGatewayLoadBalancerAttributeRequest& request, const ModifyGatewayLoadBalancerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGatewayLoadBalancerAttributeRequest&;
    using Resp = ModifyGatewayLoadBalancerAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGatewayLoadBalancerAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::ModifyGatewayLoadBalancerAttributeOutcomeCallable GwlbClient::ModifyGatewayLoadBalancerAttributeCallable(const ModifyGatewayLoadBalancerAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGatewayLoadBalancerAttributeOutcome>>();
    ModifyGatewayLoadBalancerAttributeAsync(
    request,
    [prom](
        const GwlbClient*,
        const ModifyGatewayLoadBalancerAttributeRequest&,
        ModifyGatewayLoadBalancerAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::ModifyTargetGroupAttributeOutcome GwlbClient::ModifyTargetGroupAttribute(const ModifyTargetGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupAttributeResponse rsp = ModifyTargetGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupAttributeOutcome(rsp);
        else
            return ModifyTargetGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupAttributeOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyTargetGroupAttributeAsync(const ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetGroupAttributeRequest&;
    using Resp = ModifyTargetGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::ModifyTargetGroupAttributeOutcomeCallable GwlbClient::ModifyTargetGroupAttributeCallable(const ModifyTargetGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupAttributeOutcome>>();
    ModifyTargetGroupAttributeAsync(
    request,
    [prom](
        const GwlbClient*,
        const ModifyTargetGroupAttributeRequest&,
        ModifyTargetGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::ModifyTargetGroupInstancesWeightOutcome GwlbClient::ModifyTargetGroupInstancesWeight(const ModifyTargetGroupInstancesWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupInstancesWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupInstancesWeightResponse rsp = ModifyTargetGroupInstancesWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupInstancesWeightOutcome(rsp);
        else
            return ModifyTargetGroupInstancesWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupInstancesWeightOutcome(outcome.GetError());
    }
}

void GwlbClient::ModifyTargetGroupInstancesWeightAsync(const ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetGroupInstancesWeightRequest&;
    using Resp = ModifyTargetGroupInstancesWeightResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetGroupInstancesWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::ModifyTargetGroupInstancesWeightOutcomeCallable GwlbClient::ModifyTargetGroupInstancesWeightCallable(const ModifyTargetGroupInstancesWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupInstancesWeightOutcome>>();
    ModifyTargetGroupInstancesWeightAsync(
    request,
    [prom](
        const GwlbClient*,
        const ModifyTargetGroupInstancesWeightRequest&,
        ModifyTargetGroupInstancesWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

GwlbClient::RegisterTargetGroupInstancesOutcome GwlbClient::RegisterTargetGroupInstances(const RegisterTargetGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargetGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetGroupInstancesResponse rsp = RegisterTargetGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetGroupInstancesOutcome(rsp);
        else
            return RegisterTargetGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetGroupInstancesOutcome(outcome.GetError());
    }
}

void GwlbClient::RegisterTargetGroupInstancesAsync(const RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterTargetGroupInstancesRequest&;
    using Resp = RegisterTargetGroupInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterTargetGroupInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GwlbClient::RegisterTargetGroupInstancesOutcomeCallable GwlbClient::RegisterTargetGroupInstancesCallable(const RegisterTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterTargetGroupInstancesOutcome>>();
    RegisterTargetGroupInstancesAsync(
    request,
    [prom](
        const GwlbClient*,
        const RegisterTargetGroupInstancesRequest&,
        RegisterTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

