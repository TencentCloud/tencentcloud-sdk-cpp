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

Ga2Client::CreateForwardingPolicyOutcome Ga2Client::CreateForwardingPolicy(const CreateForwardingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateForwardingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateForwardingPolicyResponse rsp = CreateForwardingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateForwardingPolicyOutcome(rsp);
        else
            return CreateForwardingPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateForwardingPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateForwardingPolicyAsync(const CreateForwardingPolicyRequest& request, const CreateForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateForwardingPolicyRequest&;
    using Resp = CreateForwardingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateForwardingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateForwardingPolicyOutcomeCallable Ga2Client::CreateForwardingPolicyCallable(const CreateForwardingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateForwardingPolicyOutcome>>();
    CreateForwardingPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateForwardingPolicyRequest&,
        CreateForwardingPolicyOutcome resp,
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

Ga2Client::CreateGlobalAcceleratorAccessLogOutcome Ga2Client::CreateGlobalAcceleratorAccessLog(const CreateGlobalAcceleratorAccessLogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalAcceleratorAccessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalAcceleratorAccessLogResponse rsp = CreateGlobalAcceleratorAccessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalAcceleratorAccessLogOutcome(rsp);
        else
            return CreateGlobalAcceleratorAccessLogOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalAcceleratorAccessLogOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateGlobalAcceleratorAccessLogAsync(const CreateGlobalAcceleratorAccessLogRequest& request, const CreateGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlobalAcceleratorAccessLogRequest&;
    using Resp = CreateGlobalAcceleratorAccessLogResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalAcceleratorAccessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateGlobalAcceleratorAccessLogOutcomeCallable Ga2Client::CreateGlobalAcceleratorAccessLogCallable(const CreateGlobalAcceleratorAccessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalAcceleratorAccessLogOutcome>>();
    CreateGlobalAcceleratorAccessLogAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateGlobalAcceleratorAccessLogRequest&,
        CreateGlobalAcceleratorAccessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateGlobalAcceleratorAclPolicyOutcome Ga2Client::CreateGlobalAcceleratorAclPolicy(const CreateGlobalAcceleratorAclPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalAcceleratorAclPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalAcceleratorAclPolicyResponse rsp = CreateGlobalAcceleratorAclPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalAcceleratorAclPolicyOutcome(rsp);
        else
            return CreateGlobalAcceleratorAclPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalAcceleratorAclPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateGlobalAcceleratorAclPolicyAsync(const CreateGlobalAcceleratorAclPolicyRequest& request, const CreateGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlobalAcceleratorAclPolicyRequest&;
    using Resp = CreateGlobalAcceleratorAclPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalAcceleratorAclPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateGlobalAcceleratorAclPolicyOutcomeCallable Ga2Client::CreateGlobalAcceleratorAclPolicyCallable(const CreateGlobalAcceleratorAclPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalAcceleratorAclPolicyOutcome>>();
    CreateGlobalAcceleratorAclPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateGlobalAcceleratorAclPolicyRequest&,
        CreateGlobalAcceleratorAclPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::CreateGlobalAcceleratorAclRuleOutcome Ga2Client::CreateGlobalAcceleratorAclRule(const CreateGlobalAcceleratorAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalAcceleratorAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalAcceleratorAclRuleResponse rsp = CreateGlobalAcceleratorAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalAcceleratorAclRuleOutcome(rsp);
        else
            return CreateGlobalAcceleratorAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalAcceleratorAclRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateGlobalAcceleratorAclRuleAsync(const CreateGlobalAcceleratorAclRuleRequest& request, const CreateGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGlobalAcceleratorAclRuleRequest&;
    using Resp = CreateGlobalAcceleratorAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalAcceleratorAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateGlobalAcceleratorAclRuleOutcomeCallable Ga2Client::CreateGlobalAcceleratorAclRuleCallable(const CreateGlobalAcceleratorAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalAcceleratorAclRuleOutcome>>();
    CreateGlobalAcceleratorAclRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateGlobalAcceleratorAclRuleRequest&,
        CreateGlobalAcceleratorAclRuleOutcome resp,
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

Ga2Client::CreateListenerAdditionalCertOutcome Ga2Client::CreateListenerAdditionalCert(const CreateListenerAdditionalCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateListenerAdditionalCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateListenerAdditionalCertResponse rsp = CreateListenerAdditionalCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateListenerAdditionalCertOutcome(rsp);
        else
            return CreateListenerAdditionalCertOutcome(o.GetError());
    }
    else
    {
        return CreateListenerAdditionalCertOutcome(outcome.GetError());
    }
}

void Ga2Client::CreateListenerAdditionalCertAsync(const CreateListenerAdditionalCertRequest& request, const CreateListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateListenerAdditionalCertRequest&;
    using Resp = CreateListenerAdditionalCertResponse;

    DoRequestAsync<Req, Resp>(
        "CreateListenerAdditionalCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::CreateListenerAdditionalCertOutcomeCallable Ga2Client::CreateListenerAdditionalCertCallable(const CreateListenerAdditionalCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateListenerAdditionalCertOutcome>>();
    CreateListenerAdditionalCertAsync(
    request,
    [prom](
        const Ga2Client*,
        const CreateListenerAdditionalCertRequest&,
        CreateListenerAdditionalCertOutcome resp,
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

Ga2Client::DeleteForwardingPolicyOutcome Ga2Client::DeleteForwardingPolicy(const DeleteForwardingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteForwardingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteForwardingPolicyResponse rsp = DeleteForwardingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteForwardingPolicyOutcome(rsp);
        else
            return DeleteForwardingPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteForwardingPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteForwardingPolicyAsync(const DeleteForwardingPolicyRequest& request, const DeleteForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteForwardingPolicyRequest&;
    using Resp = DeleteForwardingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteForwardingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteForwardingPolicyOutcomeCallable Ga2Client::DeleteForwardingPolicyCallable(const DeleteForwardingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteForwardingPolicyOutcome>>();
    DeleteForwardingPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteForwardingPolicyRequest&,
        DeleteForwardingPolicyOutcome resp,
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

Ga2Client::DeleteGlobalAcceleratorAccessLogOutcome Ga2Client::DeleteGlobalAcceleratorAccessLog(const DeleteGlobalAcceleratorAccessLogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalAcceleratorAccessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalAcceleratorAccessLogResponse rsp = DeleteGlobalAcceleratorAccessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalAcceleratorAccessLogOutcome(rsp);
        else
            return DeleteGlobalAcceleratorAccessLogOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalAcceleratorAccessLogOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteGlobalAcceleratorAccessLogAsync(const DeleteGlobalAcceleratorAccessLogRequest& request, const DeleteGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlobalAcceleratorAccessLogRequest&;
    using Resp = DeleteGlobalAcceleratorAccessLogResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalAcceleratorAccessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteGlobalAcceleratorAccessLogOutcomeCallable Ga2Client::DeleteGlobalAcceleratorAccessLogCallable(const DeleteGlobalAcceleratorAccessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalAcceleratorAccessLogOutcome>>();
    DeleteGlobalAcceleratorAccessLogAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteGlobalAcceleratorAccessLogRequest&,
        DeleteGlobalAcceleratorAccessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteGlobalAcceleratorAclPolicyOutcome Ga2Client::DeleteGlobalAcceleratorAclPolicy(const DeleteGlobalAcceleratorAclPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalAcceleratorAclPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalAcceleratorAclPolicyResponse rsp = DeleteGlobalAcceleratorAclPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalAcceleratorAclPolicyOutcome(rsp);
        else
            return DeleteGlobalAcceleratorAclPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalAcceleratorAclPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteGlobalAcceleratorAclPolicyAsync(const DeleteGlobalAcceleratorAclPolicyRequest& request, const DeleteGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlobalAcceleratorAclPolicyRequest&;
    using Resp = DeleteGlobalAcceleratorAclPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalAcceleratorAclPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteGlobalAcceleratorAclPolicyOutcomeCallable Ga2Client::DeleteGlobalAcceleratorAclPolicyCallable(const DeleteGlobalAcceleratorAclPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalAcceleratorAclPolicyOutcome>>();
    DeleteGlobalAcceleratorAclPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteGlobalAcceleratorAclPolicyRequest&,
        DeleteGlobalAcceleratorAclPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DeleteGlobalAcceleratorAclRuleOutcome Ga2Client::DeleteGlobalAcceleratorAclRule(const DeleteGlobalAcceleratorAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalAcceleratorAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalAcceleratorAclRuleResponse rsp = DeleteGlobalAcceleratorAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalAcceleratorAclRuleOutcome(rsp);
        else
            return DeleteGlobalAcceleratorAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalAcceleratorAclRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteGlobalAcceleratorAclRuleAsync(const DeleteGlobalAcceleratorAclRuleRequest& request, const DeleteGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGlobalAcceleratorAclRuleRequest&;
    using Resp = DeleteGlobalAcceleratorAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalAcceleratorAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteGlobalAcceleratorAclRuleOutcomeCallable Ga2Client::DeleteGlobalAcceleratorAclRuleCallable(const DeleteGlobalAcceleratorAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalAcceleratorAclRuleOutcome>>();
    DeleteGlobalAcceleratorAclRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteGlobalAcceleratorAclRuleRequest&,
        DeleteGlobalAcceleratorAclRuleOutcome resp,
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

Ga2Client::DeleteListenerAdditionalCertOutcome Ga2Client::DeleteListenerAdditionalCert(const DeleteListenerAdditionalCertRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListenerAdditionalCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenerAdditionalCertResponse rsp = DeleteListenerAdditionalCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenerAdditionalCertOutcome(rsp);
        else
            return DeleteListenerAdditionalCertOutcome(o.GetError());
    }
    else
    {
        return DeleteListenerAdditionalCertOutcome(outcome.GetError());
    }
}

void Ga2Client::DeleteListenerAdditionalCertAsync(const DeleteListenerAdditionalCertRequest& request, const DeleteListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteListenerAdditionalCertRequest&;
    using Resp = DeleteListenerAdditionalCertResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteListenerAdditionalCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DeleteListenerAdditionalCertOutcomeCallable Ga2Client::DeleteListenerAdditionalCertCallable(const DeleteListenerAdditionalCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenerAdditionalCertOutcome>>();
    DeleteListenerAdditionalCertAsync(
    request,
    [prom](
        const Ga2Client*,
        const DeleteListenerAdditionalCertRequest&,
        DeleteListenerAdditionalCertOutcome resp,
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

Ga2Client::DescribeAccessLogParamOutcome Ga2Client::DescribeAccessLogParam(const DescribeAccessLogParamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessLogParam");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessLogParamResponse rsp = DescribeAccessLogParamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessLogParamOutcome(rsp);
        else
            return DescribeAccessLogParamOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessLogParamOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeAccessLogParamAsync(const DescribeAccessLogParamRequest& request, const DescribeAccessLogParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessLogParamRequest&;
    using Resp = DescribeAccessLogParamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessLogParam", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeAccessLogParamOutcomeCallable Ga2Client::DescribeAccessLogParamCallable(const DescribeAccessLogParamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessLogParamOutcome>>();
    DescribeAccessLogParamAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeAccessLogParamRequest&,
        DescribeAccessLogParamOutcome resp,
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

Ga2Client::DescribeForwardingPolicyOutcome Ga2Client::DescribeForwardingPolicy(const DescribeForwardingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeForwardingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeForwardingPolicyResponse rsp = DescribeForwardingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeForwardingPolicyOutcome(rsp);
        else
            return DescribeForwardingPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeForwardingPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeForwardingPolicyAsync(const DescribeForwardingPolicyRequest& request, const DescribeForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeForwardingPolicyRequest&;
    using Resp = DescribeForwardingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeForwardingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeForwardingPolicyOutcomeCallable Ga2Client::DescribeForwardingPolicyCallable(const DescribeForwardingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeForwardingPolicyOutcome>>();
    DescribeForwardingPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeForwardingPolicyRequest&,
        DescribeForwardingPolicyOutcome resp,
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

Ga2Client::DescribeGlobalAcceleratorAccessLogOutcome Ga2Client::DescribeGlobalAcceleratorAccessLog(const DescribeGlobalAcceleratorAccessLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalAcceleratorAccessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalAcceleratorAccessLogResponse rsp = DescribeGlobalAcceleratorAccessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalAcceleratorAccessLogOutcome(rsp);
        else
            return DescribeGlobalAcceleratorAccessLogOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalAcceleratorAccessLogOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeGlobalAcceleratorAccessLogAsync(const DescribeGlobalAcceleratorAccessLogRequest& request, const DescribeGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalAcceleratorAccessLogRequest&;
    using Resp = DescribeGlobalAcceleratorAccessLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalAcceleratorAccessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeGlobalAcceleratorAccessLogOutcomeCallable Ga2Client::DescribeGlobalAcceleratorAccessLogCallable(const DescribeGlobalAcceleratorAccessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalAcceleratorAccessLogOutcome>>();
    DescribeGlobalAcceleratorAccessLogAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeGlobalAcceleratorAccessLogRequest&,
        DescribeGlobalAcceleratorAccessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeGlobalAcceleratorAclPoliciesOutcome Ga2Client::DescribeGlobalAcceleratorAclPolicies(const DescribeGlobalAcceleratorAclPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalAcceleratorAclPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalAcceleratorAclPoliciesResponse rsp = DescribeGlobalAcceleratorAclPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalAcceleratorAclPoliciesOutcome(rsp);
        else
            return DescribeGlobalAcceleratorAclPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalAcceleratorAclPoliciesOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeGlobalAcceleratorAclPoliciesAsync(const DescribeGlobalAcceleratorAclPoliciesRequest& request, const DescribeGlobalAcceleratorAclPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalAcceleratorAclPoliciesRequest&;
    using Resp = DescribeGlobalAcceleratorAclPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalAcceleratorAclPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeGlobalAcceleratorAclPoliciesOutcomeCallable Ga2Client::DescribeGlobalAcceleratorAclPoliciesCallable(const DescribeGlobalAcceleratorAclPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalAcceleratorAclPoliciesOutcome>>();
    DescribeGlobalAcceleratorAclPoliciesAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeGlobalAcceleratorAclPoliciesRequest&,
        DescribeGlobalAcceleratorAclPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::DescribeGlobalAcceleratorAclRulesOutcome Ga2Client::DescribeGlobalAcceleratorAclRules(const DescribeGlobalAcceleratorAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalAcceleratorAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalAcceleratorAclRulesResponse rsp = DescribeGlobalAcceleratorAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalAcceleratorAclRulesOutcome(rsp);
        else
            return DescribeGlobalAcceleratorAclRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalAcceleratorAclRulesOutcome(outcome.GetError());
    }
}

void Ga2Client::DescribeGlobalAcceleratorAclRulesAsync(const DescribeGlobalAcceleratorAclRulesRequest& request, const DescribeGlobalAcceleratorAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGlobalAcceleratorAclRulesRequest&;
    using Resp = DescribeGlobalAcceleratorAclRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalAcceleratorAclRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeGlobalAcceleratorAclRulesOutcomeCallable Ga2Client::DescribeGlobalAcceleratorAclRulesCallable(const DescribeGlobalAcceleratorAclRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalAcceleratorAclRulesOutcome>>();
    DescribeGlobalAcceleratorAclRulesAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeGlobalAcceleratorAclRulesRequest&,
        DescribeGlobalAcceleratorAclRulesOutcome resp,
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

Ga2Client::DescribeTaskResultOutcome Ga2Client::DescribeTaskResult(const DescribeTaskResultRequest &request)
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

void Ga2Client::DescribeTaskResultAsync(const DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultRequest&;
    using Resp = DescribeTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::DescribeTaskResultOutcomeCallable Ga2Client::DescribeTaskResultCallable(const DescribeTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultOutcome>>();
    DescribeTaskResultAsync(
    request,
    [prom](
        const Ga2Client*,
        const DescribeTaskResultRequest&,
        DescribeTaskResultOutcome resp,
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

Ga2Client::ModifyAccessLogStatusOutcome Ga2Client::ModifyAccessLogStatus(const ModifyAccessLogStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessLogStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessLogStatusResponse rsp = ModifyAccessLogStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessLogStatusOutcome(rsp);
        else
            return ModifyAccessLogStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessLogStatusOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyAccessLogStatusAsync(const ModifyAccessLogStatusRequest& request, const ModifyAccessLogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessLogStatusRequest&;
    using Resp = ModifyAccessLogStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessLogStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyAccessLogStatusOutcomeCallable Ga2Client::ModifyAccessLogStatusCallable(const ModifyAccessLogStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessLogStatusOutcome>>();
    ModifyAccessLogStatusAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyAccessLogStatusRequest&,
        ModifyAccessLogStatusOutcome resp,
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

Ga2Client::ModifyForwardingPolicyOutcome Ga2Client::ModifyForwardingPolicy(const ModifyForwardingPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyForwardingPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyForwardingPolicyResponse rsp = ModifyForwardingPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyForwardingPolicyOutcome(rsp);
        else
            return ModifyForwardingPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyForwardingPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyForwardingPolicyAsync(const ModifyForwardingPolicyRequest& request, const ModifyForwardingPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyForwardingPolicyRequest&;
    using Resp = ModifyForwardingPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyForwardingPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyForwardingPolicyOutcomeCallable Ga2Client::ModifyForwardingPolicyCallable(const ModifyForwardingPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyForwardingPolicyOutcome>>();
    ModifyForwardingPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyForwardingPolicyRequest&,
        ModifyForwardingPolicyOutcome resp,
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

Ga2Client::ModifyGlobalAcceleratorAccessLogOutcome Ga2Client::ModifyGlobalAcceleratorAccessLog(const ModifyGlobalAcceleratorAccessLogRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalAcceleratorAccessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalAcceleratorAccessLogResponse rsp = ModifyGlobalAcceleratorAccessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalAcceleratorAccessLogOutcome(rsp);
        else
            return ModifyGlobalAcceleratorAccessLogOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalAcceleratorAccessLogOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyGlobalAcceleratorAccessLogAsync(const ModifyGlobalAcceleratorAccessLogRequest& request, const ModifyGlobalAcceleratorAccessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGlobalAcceleratorAccessLogRequest&;
    using Resp = ModifyGlobalAcceleratorAccessLogResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalAcceleratorAccessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyGlobalAcceleratorAccessLogOutcomeCallable Ga2Client::ModifyGlobalAcceleratorAccessLogCallable(const ModifyGlobalAcceleratorAccessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalAcceleratorAccessLogOutcome>>();
    ModifyGlobalAcceleratorAccessLogAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyGlobalAcceleratorAccessLogRequest&,
        ModifyGlobalAcceleratorAccessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyGlobalAcceleratorAclPolicyOutcome Ga2Client::ModifyGlobalAcceleratorAclPolicy(const ModifyGlobalAcceleratorAclPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalAcceleratorAclPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalAcceleratorAclPolicyResponse rsp = ModifyGlobalAcceleratorAclPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalAcceleratorAclPolicyOutcome(rsp);
        else
            return ModifyGlobalAcceleratorAclPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalAcceleratorAclPolicyOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyGlobalAcceleratorAclPolicyAsync(const ModifyGlobalAcceleratorAclPolicyRequest& request, const ModifyGlobalAcceleratorAclPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGlobalAcceleratorAclPolicyRequest&;
    using Resp = ModifyGlobalAcceleratorAclPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalAcceleratorAclPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyGlobalAcceleratorAclPolicyOutcomeCallable Ga2Client::ModifyGlobalAcceleratorAclPolicyCallable(const ModifyGlobalAcceleratorAclPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalAcceleratorAclPolicyOutcome>>();
    ModifyGlobalAcceleratorAclPolicyAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyGlobalAcceleratorAclPolicyRequest&,
        ModifyGlobalAcceleratorAclPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

Ga2Client::ModifyGlobalAcceleratorAclRuleOutcome Ga2Client::ModifyGlobalAcceleratorAclRule(const ModifyGlobalAcceleratorAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalAcceleratorAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalAcceleratorAclRuleResponse rsp = ModifyGlobalAcceleratorAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalAcceleratorAclRuleOutcome(rsp);
        else
            return ModifyGlobalAcceleratorAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalAcceleratorAclRuleOutcome(outcome.GetError());
    }
}

void Ga2Client::ModifyGlobalAcceleratorAclRuleAsync(const ModifyGlobalAcceleratorAclRuleRequest& request, const ModifyGlobalAcceleratorAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGlobalAcceleratorAclRuleRequest&;
    using Resp = ModifyGlobalAcceleratorAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalAcceleratorAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ModifyGlobalAcceleratorAclRuleOutcomeCallable Ga2Client::ModifyGlobalAcceleratorAclRuleCallable(const ModifyGlobalAcceleratorAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalAcceleratorAclRuleOutcome>>();
    ModifyGlobalAcceleratorAclRuleAsync(
    request,
    [prom](
        const Ga2Client*,
        const ModifyGlobalAcceleratorAclRuleRequest&,
        ModifyGlobalAcceleratorAclRuleOutcome resp,
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

Ga2Client::ReplaceListenerAdditionalCertOutcome Ga2Client::ReplaceListenerAdditionalCert(const ReplaceListenerAdditionalCertRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceListenerAdditionalCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceListenerAdditionalCertResponse rsp = ReplaceListenerAdditionalCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceListenerAdditionalCertOutcome(rsp);
        else
            return ReplaceListenerAdditionalCertOutcome(o.GetError());
    }
    else
    {
        return ReplaceListenerAdditionalCertOutcome(outcome.GetError());
    }
}

void Ga2Client::ReplaceListenerAdditionalCertAsync(const ReplaceListenerAdditionalCertRequest& request, const ReplaceListenerAdditionalCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceListenerAdditionalCertRequest&;
    using Resp = ReplaceListenerAdditionalCertResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceListenerAdditionalCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

Ga2Client::ReplaceListenerAdditionalCertOutcomeCallable Ga2Client::ReplaceListenerAdditionalCertCallable(const ReplaceListenerAdditionalCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceListenerAdditionalCertOutcome>>();
    ReplaceListenerAdditionalCertAsync(
    request,
    [prom](
        const Ga2Client*,
        const ReplaceListenerAdditionalCertRequest&,
        ReplaceListenerAdditionalCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

