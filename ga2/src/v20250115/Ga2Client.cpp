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

#include <tencentcloud/ga2/v20250115/Ga2Client.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ga2::V20250115;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-15";
    const string ENDPOINT = "ga2.tencentcloudapi.com";
}

Ga2Client::Ga2Client(const Credential &credential, const string &region) :
    Ga2Client(credential, region, ClientProfile())
{
}

Ga2Client::Ga2Client(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


Ga2Client::CreateAccelerateAreasOutcome Ga2Client::CreateAccelerateAreas(const CreateAccelerateAreasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccelerateAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccelerateAreasResponse rsp = CreateAccelerateAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccelerateAreasOutcome(rsp);
        else
            return CreateAccelerateAreasOutcome(o.GetError());
    }
    else
    {
        return CreateAccelerateAreasOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateAccelerateAreasAsync(const CreateAccelerateAreasRequest& request, const CreateAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccelerateAreasRequest&;
    using Resp = CreateAccelerateAreasResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccelerateAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateAccelerateAreasOutcomeCallable Ga2Client::CreateAccelerateAreasCallable(const CreateAccelerateAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccelerateAreasOutcome>>();
    CreateAccelerateAreasAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateAccelerateAreasRequest&,
        CreateAccelerateAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateEndpointGroupOutcome Ga2Client::CreateEndpointGroup(const CreateEndpointGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEndpointGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEndpointGroupResponse rsp = CreateEndpointGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEndpointGroupOutcome(rsp);
        else
            return CreateEndpointGroupOutcome(o.GetError());
    }
    else
    {
        return CreateEndpointGroupOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateEndpointGroupAsync(const CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEndpointGroupRequest&;
    using Resp = CreateEndpointGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEndpointGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateEndpointGroupOutcomeCallable Ga2Client::CreateEndpointGroupCallable(const CreateEndpointGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEndpointGroupOutcome>>();
    CreateEndpointGroupAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateEndpointGroupRequest&,
        CreateEndpointGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateForwardingRuleOutcome Ga2Client::CreateForwardingRule(const CreateForwardingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateForwardingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateForwardingRuleResponse rsp = CreateForwardingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateForwardingRuleOutcome(rsp);
        else
            return CreateForwardingRuleOutcome(o.GetError());
    }
    else
    {
        return CreateForwardingRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateForwardingRuleAsync(const CreateForwardingRuleRequest& request, const CreateForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateForwardingRuleRequest&;
    using Resp = CreateForwardingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateForwardingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateForwardingRuleOutcomeCallable Ga2Client::CreateForwardingRuleCallable(const CreateForwardingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateForwardingRuleOutcome>>();
    CreateForwardingRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateForwardingRuleRequest&,
        CreateForwardingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateGlobalAcceleratorOutcome Ga2Client::CreateGlobalAccelerator(const CreateGlobalAcceleratorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalAccelerator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalAcceleratorResponse rsp = CreateGlobalAcceleratorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalAcceleratorOutcome(rsp);
        else
            return CreateGlobalAcceleratorOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalAcceleratorOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateGlobalAcceleratorAsync(const CreateGlobalAcceleratorRequest& request, const CreateGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlobalAcceleratorRequest&;
    using Resp = CreateGlobalAcceleratorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalAccelerator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateGlobalAcceleratorOutcomeCallable Ga2Client::CreateGlobalAcceleratorCallable(const CreateGlobalAcceleratorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalAcceleratorOutcome>>();
    CreateGlobalAcceleratorAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateGlobalAcceleratorRequest&,
        CreateGlobalAcceleratorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateListenerOutcome Ga2Client::CreateListener(const CreateListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateListenerResponse rsp = CreateListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateListenerOutcome(rsp);
        else
            return CreateListenerOutcome(o.GetError());
    }
    else
    {
        return CreateListenerOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateListenerRequest&;
    using Resp = CreateListenerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateListenerOutcomeCallable Ga2Client::CreateListenerCallable(const CreateListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateListenerOutcome>>();
    CreateListenerAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateListenerRequest&,
        CreateListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteAccelerateAreasOutcome Ga2Client::DeleteAccelerateAreas(const DeleteAccelerateAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccelerateAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccelerateAreasResponse rsp = DeleteAccelerateAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccelerateAreasOutcome(rsp);
        else
            return DeleteAccelerateAreasOutcome(o.GetError());
    }
    else
    {
        return DeleteAccelerateAreasOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteAccelerateAreasAsync(const DeleteAccelerateAreasRequest& request, const DeleteAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccelerateAreasRequest&;
    using Resp = DeleteAccelerateAreasResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccelerateAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteAccelerateAreasOutcomeCallable Ga2Client::DeleteAccelerateAreasCallable(const DeleteAccelerateAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccelerateAreasOutcome>>();
    DeleteAccelerateAreasAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteAccelerateAreasRequest&,
        DeleteAccelerateAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteEndpointGroupsOutcome Ga2Client::DeleteEndpointGroups(const DeleteEndpointGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEndpointGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEndpointGroupsResponse rsp = DeleteEndpointGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEndpointGroupsOutcome(rsp);
        else
            return DeleteEndpointGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteEndpointGroupsOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteEndpointGroupsAsync(const DeleteEndpointGroupsRequest& request, const DeleteEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEndpointGroupsRequest&;
    using Resp = DeleteEndpointGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEndpointGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteEndpointGroupsOutcomeCallable Ga2Client::DeleteEndpointGroupsCallable(const DeleteEndpointGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEndpointGroupsOutcome>>();
    DeleteEndpointGroupsAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteEndpointGroupsRequest&,
        DeleteEndpointGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteForwardingRuleOutcome Ga2Client::DeleteForwardingRule(const DeleteForwardingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteForwardingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteForwardingRuleResponse rsp = DeleteForwardingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteForwardingRuleOutcome(rsp);
        else
            return DeleteForwardingRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteForwardingRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteForwardingRuleAsync(const DeleteForwardingRuleRequest& request, const DeleteForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteForwardingRuleRequest&;
    using Resp = DeleteForwardingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteForwardingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteForwardingRuleOutcomeCallable Ga2Client::DeleteForwardingRuleCallable(const DeleteForwardingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteForwardingRuleOutcome>>();
    DeleteForwardingRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteForwardingRuleRequest&,
        DeleteForwardingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteGlobalAcceleratorOutcome Ga2Client::DeleteGlobalAccelerator(const DeleteGlobalAcceleratorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalAccelerator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalAcceleratorResponse rsp = DeleteGlobalAcceleratorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalAcceleratorOutcome(rsp);
        else
            return DeleteGlobalAcceleratorOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalAcceleratorOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteGlobalAcceleratorAsync(const DeleteGlobalAcceleratorRequest& request, const DeleteGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlobalAcceleratorRequest&;
    using Resp = DeleteGlobalAcceleratorResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalAccelerator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteGlobalAcceleratorOutcomeCallable Ga2Client::DeleteGlobalAcceleratorCallable(const DeleteGlobalAcceleratorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalAcceleratorOutcome>>();
    DeleteGlobalAcceleratorAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteGlobalAcceleratorRequest&,
        DeleteGlobalAcceleratorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteListenerOutcome Ga2Client::DeleteListener(const DeleteListenerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenerResponse rsp = DeleteListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenerOutcome(rsp);
        else
            return DeleteListenerOutcome(o.GetError());
    }
    else
    {
        return DeleteListenerOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteListenerRequest&;
    using Resp = DeleteListenerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteListenerOutcomeCallable Ga2Client::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenerOutcome>>();
    DeleteListenerAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteListenerRequest&,
        DeleteListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeAccelerateAreasOutcome Ga2Client::DescribeAccelerateAreas(const DescribeAccelerateAreasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccelerateAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccelerateAreasResponse rsp = DescribeAccelerateAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccelerateAreasOutcome(rsp);
        else
            return DescribeAccelerateAreasOutcome(o.GetError());
    }
    else
    {
        return DescribeAccelerateAreasOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeAccelerateAreasAsync(const DescribeAccelerateAreasRequest& request, const DescribeAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccelerateAreasRequest&;
    using Resp = DescribeAccelerateAreasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccelerateAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeAccelerateAreasOutcomeCallable Ga2Client::DescribeAccelerateAreasCallable(const DescribeAccelerateAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccelerateAreasOutcome>>();
    DescribeAccelerateAreasAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeAccelerateAreasRequest&,
        DescribeAccelerateAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeAccelerateRegionsOutcome Ga2Client::DescribeAccelerateRegions(const DescribeAccelerateRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccelerateRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccelerateRegionsResponse rsp = DescribeAccelerateRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccelerateRegionsOutcome(rsp);
        else
            return DescribeAccelerateRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccelerateRegionsOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeAccelerateRegionsAsync(const DescribeAccelerateRegionsRequest& request, const DescribeAccelerateRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccelerateRegionsRequest&;
    using Resp = DescribeAccelerateRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccelerateRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeAccelerateRegionsOutcomeCallable Ga2Client::DescribeAccelerateRegionsCallable(const DescribeAccelerateRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccelerateRegionsOutcome>>();
    DescribeAccelerateRegionsAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeAccelerateRegionsRequest&,
        DescribeAccelerateRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeCrossBorderSettlementOutcome Ga2Client::DescribeCrossBorderSettlement(const DescribeCrossBorderSettlementRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBorderSettlement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBorderSettlementResponse rsp = DescribeCrossBorderSettlementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBorderSettlementOutcome(rsp);
        else
            return DescribeCrossBorderSettlementOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBorderSettlementOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeCrossBorderSettlementAsync(const DescribeCrossBorderSettlementRequest& request, const DescribeCrossBorderSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossBorderSettlementRequest&;
    using Resp = DescribeCrossBorderSettlementResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossBorderSettlement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeCrossBorderSettlementOutcomeCallable Ga2Client::DescribeCrossBorderSettlementCallable(const DescribeCrossBorderSettlementRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossBorderSettlementOutcome>>();
    DescribeCrossBorderSettlementAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeCrossBorderSettlementRequest&,
        DescribeCrossBorderSettlementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeEndpointGroupsOutcome Ga2Client::DescribeEndpointGroups(const DescribeEndpointGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEndpointGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEndpointGroupsResponse rsp = DescribeEndpointGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEndpointGroupsOutcome(rsp);
        else
            return DescribeEndpointGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeEndpointGroupsOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeEndpointGroupsAsync(const DescribeEndpointGroupsRequest& request, const DescribeEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEndpointGroupsRequest&;
    using Resp = DescribeEndpointGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEndpointGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeEndpointGroupsOutcomeCallable Ga2Client::DescribeEndpointGroupsCallable(const DescribeEndpointGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEndpointGroupsOutcome>>();
    DescribeEndpointGroupsAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeEndpointGroupsRequest&,
        DescribeEndpointGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeForwardingRuleOutcome Ga2Client::DescribeForwardingRule(const DescribeForwardingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardingRuleResponse rsp = DescribeForwardingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardingRuleOutcome(rsp);
        else
            return DescribeForwardingRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardingRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeForwardingRuleAsync(const DescribeForwardingRuleRequest& request, const DescribeForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForwardingRuleRequest&;
    using Resp = DescribeForwardingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeForwardingRuleOutcomeCallable Ga2Client::DescribeForwardingRuleCallable(const DescribeForwardingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardingRuleOutcome>>();
    DescribeForwardingRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeForwardingRuleRequest&,
        DescribeForwardingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeGlobalAcceleratorsOutcome Ga2Client::DescribeGlobalAccelerators(const DescribeGlobalAcceleratorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalAccelerators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalAcceleratorsResponse rsp = DescribeGlobalAcceleratorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalAcceleratorsOutcome(rsp);
        else
            return DescribeGlobalAcceleratorsOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalAcceleratorsOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeGlobalAcceleratorsAsync(const DescribeGlobalAcceleratorsRequest& request, const DescribeGlobalAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalAcceleratorsRequest&;
    using Resp = DescribeGlobalAcceleratorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalAccelerators", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeGlobalAcceleratorsOutcomeCallable Ga2Client::DescribeGlobalAcceleratorsCallable(const DescribeGlobalAcceleratorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalAcceleratorsOutcome>>();
    DescribeGlobalAcceleratorsAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeGlobalAcceleratorsRequest&,
        DescribeGlobalAcceleratorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeListenersOutcome Ga2Client::DescribeListeners(const DescribeListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenersResponse rsp = DescribeListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenersOutcome(rsp);
        else
            return DescribeListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeListenersOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenersRequest&;
    using Resp = DescribeListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeListenersOutcomeCallable Ga2Client::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenersOutcome>>();
    DescribeListenersAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeListenersRequest&,
        DescribeListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyAccelerateAreasOutcome Ga2Client::ModifyAccelerateAreas(const ModifyAccelerateAreasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccelerateAreas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccelerateAreasResponse rsp = ModifyAccelerateAreasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccelerateAreasOutcome(rsp);
        else
            return ModifyAccelerateAreasOutcome(o.GetError());
    }
    else
    {
        return ModifyAccelerateAreasOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyAccelerateAreasAsync(const ModifyAccelerateAreasRequest& request, const ModifyAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccelerateAreasRequest&;
    using Resp = ModifyAccelerateAreasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccelerateAreas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyAccelerateAreasOutcomeCallable Ga2Client::ModifyAccelerateAreasCallable(const ModifyAccelerateAreasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccelerateAreasOutcome>>();
    ModifyAccelerateAreasAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyAccelerateAreasRequest&,
        ModifyAccelerateAreasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyEndpointGroupOutcome Ga2Client::ModifyEndpointGroup(const ModifyEndpointGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEndpointGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEndpointGroupResponse rsp = ModifyEndpointGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEndpointGroupOutcome(rsp);
        else
            return ModifyEndpointGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyEndpointGroupOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyEndpointGroupAsync(const ModifyEndpointGroupRequest& request, const ModifyEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEndpointGroupRequest&;
    using Resp = ModifyEndpointGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEndpointGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyEndpointGroupOutcomeCallable Ga2Client::ModifyEndpointGroupCallable(const ModifyEndpointGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEndpointGroupOutcome>>();
    ModifyEndpointGroupAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyEndpointGroupRequest&,
        ModifyEndpointGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyForwardingRuleOutcome Ga2Client::ModifyForwardingRule(const ModifyForwardingRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyForwardingRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyForwardingRuleResponse rsp = ModifyForwardingRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyForwardingRuleOutcome(rsp);
        else
            return ModifyForwardingRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyForwardingRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyForwardingRuleAsync(const ModifyForwardingRuleRequest& request, const ModifyForwardingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyForwardingRuleRequest&;
    using Resp = ModifyForwardingRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyForwardingRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyForwardingRuleOutcomeCallable Ga2Client::ModifyForwardingRuleCallable(const ModifyForwardingRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyForwardingRuleOutcome>>();
    ModifyForwardingRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyForwardingRuleRequest&,
        ModifyForwardingRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyGlobalAcceleratorOutcome Ga2Client::ModifyGlobalAccelerator(const ModifyGlobalAcceleratorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalAccelerator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalAcceleratorResponse rsp = ModifyGlobalAcceleratorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalAcceleratorOutcome(rsp);
        else
            return ModifyGlobalAcceleratorOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalAcceleratorOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyGlobalAcceleratorAsync(const ModifyGlobalAcceleratorRequest& request, const ModifyGlobalAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGlobalAcceleratorRequest&;
    using Resp = ModifyGlobalAcceleratorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalAccelerator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyGlobalAcceleratorOutcomeCallable Ga2Client::ModifyGlobalAcceleratorCallable(const ModifyGlobalAcceleratorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalAcceleratorOutcome>>();
    ModifyGlobalAcceleratorAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyGlobalAcceleratorRequest&,
        ModifyGlobalAcceleratorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyListenerOutcome Ga2Client::ModifyListener(const ModifyListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyListenerResponse rsp = ModifyListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyListenerOutcome(rsp);
        else
            return ModifyListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyListenerOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyListenerRequest&;
    using Resp = ModifyListenerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyListenerOutcomeCallable Ga2Client::ModifyListenerCallable(const ModifyListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyListenerOutcome>>();
    ModifyListenerAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyListenerRequest&,
        ModifyListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

