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

#include <tencentcloud/alb/v20251030/AlbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Alb::V20251030;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-10-30";
    const string ENDPOINT = "alb.tencentcloudapi.com";
}

AlbClient::AlbClient(const Credential &credential, const string &region) :
    AlbClient(credential, region, ClientProfile())
{
}

AlbClient::AlbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AlbClient::AddTargetsToTargetGroupOutcome AlbClient::AddTargetsToTargetGroup(const AddTargetsToTargetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddTargetsToTargetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddTargetsToTargetGroupResponse rsp = AddTargetsToTargetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddTargetsToTargetGroupOutcome(rsp);
        else
            return AddTargetsToTargetGroupOutcome(o.GetError());
    }
    else
    {
        return AddTargetsToTargetGroupOutcome(outcome.GetError());
    }
}

void AlbClient::AddTargetsToTargetGroupAsync(const AddTargetsToTargetGroupRequest& request, const AddTargetsToTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddTargetsToTargetGroupRequest&;
    using Resp = AddTargetsToTargetGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AddTargetsToTargetGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::AddTargetsToTargetGroupOutcomeCallable AlbClient::AddTargetsToTargetGroupCallable(const AddTargetsToTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddTargetsToTargetGroupOutcome>>();
    AddTargetsToTargetGroupAsync(
    request,
    [prom](
        const AlbClient*,
        const AddTargetsToTargetGroupRequest&,
        AddTargetsToTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::AssociateBandwidthPackageWithLoadBalancerOutcome AlbClient::AssociateBandwidthPackageWithLoadBalancer(const AssociateBandwidthPackageWithLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateBandwidthPackageWithLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateBandwidthPackageWithLoadBalancerResponse rsp = AssociateBandwidthPackageWithLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateBandwidthPackageWithLoadBalancerOutcome(rsp);
        else
            return AssociateBandwidthPackageWithLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return AssociateBandwidthPackageWithLoadBalancerOutcome(outcome.GetError());
    }
}

void AlbClient::AssociateBandwidthPackageWithLoadBalancerAsync(const AssociateBandwidthPackageWithLoadBalancerRequest& request, const AssociateBandwidthPackageWithLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateBandwidthPackageWithLoadBalancerRequest&;
    using Resp = AssociateBandwidthPackageWithLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateBandwidthPackageWithLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::AssociateBandwidthPackageWithLoadBalancerOutcomeCallable AlbClient::AssociateBandwidthPackageWithLoadBalancerCallable(const AssociateBandwidthPackageWithLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateBandwidthPackageWithLoadBalancerOutcome>>();
    AssociateBandwidthPackageWithLoadBalancerAsync(
    request,
    [prom](
        const AlbClient*,
        const AssociateBandwidthPackageWithLoadBalancerRequest&,
        AssociateBandwidthPackageWithLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::AssociateListenerAdditionalCertificatesOutcome AlbClient::AssociateListenerAdditionalCertificates(const AssociateListenerAdditionalCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateListenerAdditionalCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateListenerAdditionalCertificatesResponse rsp = AssociateListenerAdditionalCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateListenerAdditionalCertificatesOutcome(rsp);
        else
            return AssociateListenerAdditionalCertificatesOutcome(o.GetError());
    }
    else
    {
        return AssociateListenerAdditionalCertificatesOutcome(outcome.GetError());
    }
}

void AlbClient::AssociateListenerAdditionalCertificatesAsync(const AssociateListenerAdditionalCertificatesRequest& request, const AssociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateListenerAdditionalCertificatesRequest&;
    using Resp = AssociateListenerAdditionalCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateListenerAdditionalCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::AssociateListenerAdditionalCertificatesOutcomeCallable AlbClient::AssociateListenerAdditionalCertificatesCallable(const AssociateListenerAdditionalCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateListenerAdditionalCertificatesOutcome>>();
    AssociateListenerAdditionalCertificatesAsync(
    request,
    [prom](
        const AlbClient*,
        const AssociateListenerAdditionalCertificatesRequest&,
        AssociateListenerAdditionalCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateHealthCheckTemplateOutcome AlbClient::CreateHealthCheckTemplate(const CreateHealthCheckTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHealthCheckTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHealthCheckTemplateResponse rsp = CreateHealthCheckTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHealthCheckTemplateOutcome(rsp);
        else
            return CreateHealthCheckTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateHealthCheckTemplateOutcome(outcome.GetError());
    }
}

void AlbClient::CreateHealthCheckTemplateAsync(const CreateHealthCheckTemplateRequest& request, const CreateHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHealthCheckTemplateRequest&;
    using Resp = CreateHealthCheckTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHealthCheckTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::CreateHealthCheckTemplateOutcomeCallable AlbClient::CreateHealthCheckTemplateCallable(const CreateHealthCheckTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHealthCheckTemplateOutcome>>();
    CreateHealthCheckTemplateAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateHealthCheckTemplateRequest&,
        CreateHealthCheckTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateListenerOutcome AlbClient::CreateListener(const CreateListenerRequest &request)
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

void AlbClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::CreateListenerOutcomeCallable AlbClient::CreateListenerCallable(const CreateListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateListenerOutcome>>();
    CreateListenerAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateListenerRequest&,
        CreateListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateLoadBalancerOutcome AlbClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerResponse rsp = CreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerOutcome(rsp);
        else
            return CreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerOutcome(outcome.GetError());
    }
}

void AlbClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadBalancerRequest&;
    using Resp = CreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::CreateLoadBalancerOutcomeCallable AlbClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerOutcome>>();
    CreateLoadBalancerAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateLoadBalancerRequest&,
        CreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateRulesOutcome AlbClient::CreateRules(const CreateRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRulesResponse rsp = CreateRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRulesOutcome(rsp);
        else
            return CreateRulesOutcome(o.GetError());
    }
    else
    {
        return CreateRulesOutcome(outcome.GetError());
    }
}

void AlbClient::CreateRulesAsync(const CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRulesRequest&;
    using Resp = CreateRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::CreateRulesOutcomeCallable AlbClient::CreateRulesCallable(const CreateRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRulesOutcome>>();
    CreateRulesAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateRulesRequest&,
        CreateRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateSecurityPolicyOutcome AlbClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityPolicyResponse rsp = CreateSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityPolicyOutcome(rsp);
        else
            return CreateSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityPolicyOutcome(outcome.GetError());
    }
}

void AlbClient::CreateSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityPolicyRequest&;
    using Resp = CreateSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::CreateSecurityPolicyOutcomeCallable AlbClient::CreateSecurityPolicyCallable(const CreateSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityPolicyOutcome>>();
    CreateSecurityPolicyAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateSecurityPolicyRequest&,
        CreateSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::CreateTargetGroupOutcome AlbClient::CreateTargetGroup(const CreateTargetGroupRequest &request)
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

void AlbClient::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::CreateTargetGroupOutcomeCallable AlbClient::CreateTargetGroupCallable(const CreateTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTargetGroupOutcome>>();
    CreateTargetGroupAsync(
    request,
    [prom](
        const AlbClient*,
        const CreateTargetGroupRequest&,
        CreateTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteHealthCheckTemplatesOutcome AlbClient::DeleteHealthCheckTemplates(const DeleteHealthCheckTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHealthCheckTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHealthCheckTemplatesResponse rsp = DeleteHealthCheckTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHealthCheckTemplatesOutcome(rsp);
        else
            return DeleteHealthCheckTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteHealthCheckTemplatesOutcome(outcome.GetError());
    }
}

void AlbClient::DeleteHealthCheckTemplatesAsync(const DeleteHealthCheckTemplatesRequest& request, const DeleteHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHealthCheckTemplatesRequest&;
    using Resp = DeleteHealthCheckTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHealthCheckTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DeleteHealthCheckTemplatesOutcomeCallable AlbClient::DeleteHealthCheckTemplatesCallable(const DeleteHealthCheckTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHealthCheckTemplatesOutcome>>();
    DeleteHealthCheckTemplatesAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteHealthCheckTemplatesRequest&,
        DeleteHealthCheckTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteListenerOutcome AlbClient::DeleteListener(const DeleteListenerRequest &request)
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

void AlbClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::DeleteListenerOutcomeCallable AlbClient::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenerOutcome>>();
    DeleteListenerAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteListenerRequest&,
        DeleteListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteLoadBalancersOutcome AlbClient::DeleteLoadBalancers(const DeleteLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancersResponse rsp = DeleteLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancersOutcome(rsp);
        else
            return DeleteLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancersOutcome(outcome.GetError());
    }
}

void AlbClient::DeleteLoadBalancersAsync(const DeleteLoadBalancersRequest& request, const DeleteLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancersRequest&;
    using Resp = DeleteLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DeleteLoadBalancersOutcomeCallable AlbClient::DeleteLoadBalancersCallable(const DeleteLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancersOutcome>>();
    DeleteLoadBalancersAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteLoadBalancersRequest&,
        DeleteLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteRulesOutcome AlbClient::DeleteRules(const DeleteRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRulesResponse rsp = DeleteRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRulesOutcome(rsp);
        else
            return DeleteRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRulesOutcome(outcome.GetError());
    }
}

void AlbClient::DeleteRulesAsync(const DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRulesRequest&;
    using Resp = DeleteRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DeleteRulesOutcomeCallable AlbClient::DeleteRulesCallable(const DeleteRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRulesOutcome>>();
    DeleteRulesAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteRulesRequest&,
        DeleteRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteSecurityPolicyOutcome AlbClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityPolicyResponse rsp = DeleteSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityPolicyOutcome(rsp);
        else
            return DeleteSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityPolicyOutcome(outcome.GetError());
    }
}

void AlbClient::DeleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityPolicyRequest&;
    using Resp = DeleteSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DeleteSecurityPolicyOutcomeCallable AlbClient::DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityPolicyOutcome>>();
    DeleteSecurityPolicyAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteSecurityPolicyRequest&,
        DeleteSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DeleteTargetGroupsOutcome AlbClient::DeleteTargetGroups(const DeleteTargetGroupsRequest &request)
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

void AlbClient::DeleteTargetGroupsAsync(const DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::DeleteTargetGroupsOutcomeCallable AlbClient::DeleteTargetGroupsCallable(const DeleteTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTargetGroupsOutcome>>();
    DeleteTargetGroupsAsync(
    request,
    [prom](
        const AlbClient*,
        const DeleteTargetGroupsRequest&,
        DeleteTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeAsyncJobsOutcome AlbClient::DescribeAsyncJobs(const DescribeAsyncJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncJobsResponse rsp = DescribeAsyncJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncJobsOutcome(rsp);
        else
            return DescribeAsyncJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncJobsOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeAsyncJobsAsync(const DescribeAsyncJobsRequest& request, const DescribeAsyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncJobsRequest&;
    using Resp = DescribeAsyncJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeAsyncJobsOutcomeCallable AlbClient::DescribeAsyncJobsCallable(const DescribeAsyncJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncJobsOutcome>>();
    DescribeAsyncJobsAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeAsyncJobsRequest&,
        DescribeAsyncJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeHealthCheckTemplatesOutcome AlbClient::DescribeHealthCheckTemplates(const DescribeHealthCheckTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHealthCheckTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHealthCheckTemplatesResponse rsp = DescribeHealthCheckTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHealthCheckTemplatesOutcome(rsp);
        else
            return DescribeHealthCheckTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeHealthCheckTemplatesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeHealthCheckTemplatesAsync(const DescribeHealthCheckTemplatesRequest& request, const DescribeHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHealthCheckTemplatesRequest&;
    using Resp = DescribeHealthCheckTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHealthCheckTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeHealthCheckTemplatesOutcomeCallable AlbClient::DescribeHealthCheckTemplatesCallable(const DescribeHealthCheckTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHealthCheckTemplatesOutcome>>();
    DescribeHealthCheckTemplatesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeHealthCheckTemplatesRequest&,
        DescribeHealthCheckTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeListenerCertificatesOutcome AlbClient::DescribeListenerCertificates(const DescribeListenerCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerCertificatesResponse rsp = DescribeListenerCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerCertificatesOutcome(rsp);
        else
            return DescribeListenerCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerCertificatesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeListenerCertificatesAsync(const DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenerCertificatesRequest&;
    using Resp = DescribeListenerCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeListenerCertificatesOutcomeCallable AlbClient::DescribeListenerCertificatesCallable(const DescribeListenerCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerCertificatesOutcome>>();
    DescribeListenerCertificatesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeListenerCertificatesRequest&,
        DescribeListenerCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeListenerDetailOutcome AlbClient::DescribeListenerDetail(const DescribeListenerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerDetailResponse rsp = DescribeListenerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerDetailOutcome(rsp);
        else
            return DescribeListenerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerDetailOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeListenerDetailAsync(const DescribeListenerDetailRequest& request, const DescribeListenerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenerDetailRequest&;
    using Resp = DescribeListenerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeListenerDetailOutcomeCallable AlbClient::DescribeListenerDetailCallable(const DescribeListenerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerDetailOutcome>>();
    DescribeListenerDetailAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeListenerDetailRequest&,
        DescribeListenerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeListenerHealthStatusOutcome AlbClient::DescribeListenerHealthStatus(const DescribeListenerHealthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerHealthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerHealthStatusResponse rsp = DescribeListenerHealthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerHealthStatusOutcome(rsp);
        else
            return DescribeListenerHealthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerHealthStatusOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeListenerHealthStatusAsync(const DescribeListenerHealthStatusRequest& request, const DescribeListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenerHealthStatusRequest&;
    using Resp = DescribeListenerHealthStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerHealthStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeListenerHealthStatusOutcomeCallable AlbClient::DescribeListenerHealthStatusCallable(const DescribeListenerHealthStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerHealthStatusOutcome>>();
    DescribeListenerHealthStatusAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeListenerHealthStatusRequest&,
        DescribeListenerHealthStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeListenersOutcome AlbClient::DescribeListeners(const DescribeListenersRequest &request)
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

void AlbClient::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::DescribeListenersOutcomeCallable AlbClient::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenersOutcome>>();
    DescribeListenersAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeListenersRequest&,
        DescribeListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeLoadBalancerDetailOutcome AlbClient::DescribeLoadBalancerDetail(const DescribeLoadBalancerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerDetailResponse rsp = DescribeLoadBalancerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerDetailOutcome(rsp);
        else
            return DescribeLoadBalancerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerDetailOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeLoadBalancerDetailAsync(const DescribeLoadBalancerDetailRequest& request, const DescribeLoadBalancerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancerDetailRequest&;
    using Resp = DescribeLoadBalancerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeLoadBalancerDetailOutcomeCallable AlbClient::DescribeLoadBalancerDetailCallable(const DescribeLoadBalancerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerDetailOutcome>>();
    DescribeLoadBalancerDetailAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeLoadBalancerDetailRequest&,
        DescribeLoadBalancerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeLoadBalancersOutcome AlbClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancersRequest&;
    using Resp = DescribeLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeLoadBalancersOutcomeCallable AlbClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersOutcome>>();
    DescribeLoadBalancersAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeLoadBalancersRequest&,
        DescribeLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeQuotaOutcome AlbClient::DescribeQuota(const DescribeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotaResponse rsp = DescribeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotaOutcome(rsp);
        else
            return DescribeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotaOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeQuotaAsync(const DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQuotaRequest&;
    using Resp = DescribeQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeQuotaOutcomeCallable AlbClient::DescribeQuotaCallable(const DescribeQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaOutcome>>();
    DescribeQuotaAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeQuotaRequest&,
        DescribeQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeRulesOutcome AlbClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeRulesOutcomeCallable AlbClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeSecurityPoliciesOutcome AlbClient::DescribeSecurityPolicies(const DescribeSecurityPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPoliciesResponse rsp = DescribeSecurityPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPoliciesOutcome(rsp);
        else
            return DescribeSecurityPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPoliciesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeSecurityPoliciesAsync(const DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPoliciesRequest&;
    using Resp = DescribeSecurityPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeSecurityPoliciesOutcomeCallable AlbClient::DescribeSecurityPoliciesCallable(const DescribeSecurityPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPoliciesOutcome>>();
    DescribeSecurityPoliciesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeSecurityPoliciesRequest&,
        DescribeSecurityPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeSecurityPolicyCapabilitiesOutcome AlbClient::DescribeSecurityPolicyCapabilities(const DescribeSecurityPolicyCapabilitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyCapabilities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyCapabilitiesResponse rsp = DescribeSecurityPolicyCapabilitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyCapabilitiesOutcome(rsp);
        else
            return DescribeSecurityPolicyCapabilitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyCapabilitiesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeSecurityPolicyCapabilitiesAsync(const DescribeSecurityPolicyCapabilitiesRequest& request, const DescribeSecurityPolicyCapabilitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyCapabilitiesRequest&;
    using Resp = DescribeSecurityPolicyCapabilitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyCapabilities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeSecurityPolicyCapabilitiesOutcomeCallable AlbClient::DescribeSecurityPolicyCapabilitiesCallable(const DescribeSecurityPolicyCapabilitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyCapabilitiesOutcome>>();
    DescribeSecurityPolicyCapabilitiesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeSecurityPolicyCapabilitiesRequest&,
        DescribeSecurityPolicyCapabilitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeSecurityPolicyRelationsOutcome AlbClient::DescribeSecurityPolicyRelations(const DescribeSecurityPolicyRelationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyRelations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyRelationsResponse rsp = DescribeSecurityPolicyRelationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyRelationsOutcome(rsp);
        else
            return DescribeSecurityPolicyRelationsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyRelationsOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeSecurityPolicyRelationsAsync(const DescribeSecurityPolicyRelationsRequest& request, const DescribeSecurityPolicyRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityPolicyRelationsRequest&;
    using Resp = DescribeSecurityPolicyRelationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyRelations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeSecurityPolicyRelationsOutcomeCallable AlbClient::DescribeSecurityPolicyRelationsCallable(const DescribeSecurityPolicyRelationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyRelationsOutcome>>();
    DescribeSecurityPolicyRelationsAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeSecurityPolicyRelationsRequest&,
        DescribeSecurityPolicyRelationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeSystemSecurityPoliciesOutcome AlbClient::DescribeSystemSecurityPolicies(const DescribeSystemSecurityPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemSecurityPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemSecurityPoliciesResponse rsp = DescribeSystemSecurityPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemSecurityPoliciesOutcome(rsp);
        else
            return DescribeSystemSecurityPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemSecurityPoliciesOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeSystemSecurityPoliciesAsync(const DescribeSystemSecurityPoliciesRequest& request, const DescribeSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemSecurityPoliciesRequest&;
    using Resp = DescribeSystemSecurityPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemSecurityPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeSystemSecurityPoliciesOutcomeCallable AlbClient::DescribeSystemSecurityPoliciesCallable(const DescribeSystemSecurityPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemSecurityPoliciesOutcome>>();
    DescribeSystemSecurityPoliciesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeSystemSecurityPoliciesRequest&,
        DescribeSystemSecurityPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeTargetGroupTargetsOutcome AlbClient::DescribeTargetGroupTargets(const DescribeTargetGroupTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupTargetsResponse rsp = DescribeTargetGroupTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupTargetsOutcome(rsp);
        else
            return DescribeTargetGroupTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupTargetsOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeTargetGroupTargetsAsync(const DescribeTargetGroupTargetsRequest& request, const DescribeTargetGroupTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupTargetsRequest&;
    using Resp = DescribeTargetGroupTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroupTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeTargetGroupTargetsOutcomeCallable AlbClient::DescribeTargetGroupTargetsCallable(const DescribeTargetGroupTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupTargetsOutcome>>();
    DescribeTargetGroupTargetsAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeTargetGroupTargetsRequest&,
        DescribeTargetGroupTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeTargetGroupsOutcome AlbClient::DescribeTargetGroups(const DescribeTargetGroupsRequest &request)
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

void AlbClient::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::DescribeTargetGroupsOutcomeCallable AlbClient::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupsOutcome>>();
    DescribeTargetGroupsAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeTargetGroupsRequest&,
        DescribeTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeTargetGroupsByTargetOutcome AlbClient::DescribeTargetGroupsByTarget(const DescribeTargetGroupsByTargetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetGroupsByTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetGroupsByTargetResponse rsp = DescribeTargetGroupsByTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetGroupsByTargetOutcome(rsp);
        else
            return DescribeTargetGroupsByTargetOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetGroupsByTargetOutcome(outcome.GetError());
    }
}

void AlbClient::DescribeTargetGroupsByTargetAsync(const DescribeTargetGroupsByTargetRequest& request, const DescribeTargetGroupsByTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetGroupsByTargetRequest&;
    using Resp = DescribeTargetGroupsByTargetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetGroupsByTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DescribeTargetGroupsByTargetOutcomeCallable AlbClient::DescribeTargetGroupsByTargetCallable(const DescribeTargetGroupsByTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupsByTargetOutcome>>();
    DescribeTargetGroupsByTargetAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeTargetGroupsByTargetRequest&,
        DescribeTargetGroupsByTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DescribeZonesOutcome AlbClient::DescribeZones(const DescribeZonesRequest &request)
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

void AlbClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AlbClient::DescribeZonesOutcomeCallable AlbClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const AlbClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DisassociateBandwidthPackageFromLoadBalancerOutcome AlbClient::DisassociateBandwidthPackageFromLoadBalancer(const DisassociateBandwidthPackageFromLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateBandwidthPackageFromLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateBandwidthPackageFromLoadBalancerResponse rsp = DisassociateBandwidthPackageFromLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateBandwidthPackageFromLoadBalancerOutcome(rsp);
        else
            return DisassociateBandwidthPackageFromLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DisassociateBandwidthPackageFromLoadBalancerOutcome(outcome.GetError());
    }
}

void AlbClient::DisassociateBandwidthPackageFromLoadBalancerAsync(const DisassociateBandwidthPackageFromLoadBalancerRequest& request, const DisassociateBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateBandwidthPackageFromLoadBalancerRequest&;
    using Resp = DisassociateBandwidthPackageFromLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateBandwidthPackageFromLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DisassociateBandwidthPackageFromLoadBalancerOutcomeCallable AlbClient::DisassociateBandwidthPackageFromLoadBalancerCallable(const DisassociateBandwidthPackageFromLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateBandwidthPackageFromLoadBalancerOutcome>>();
    DisassociateBandwidthPackageFromLoadBalancerAsync(
    request,
    [prom](
        const AlbClient*,
        const DisassociateBandwidthPackageFromLoadBalancerRequest&,
        DisassociateBandwidthPackageFromLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::DisassociateListenerAdditionalCertificatesOutcome AlbClient::DisassociateListenerAdditionalCertificates(const DisassociateListenerAdditionalCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateListenerAdditionalCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateListenerAdditionalCertificatesResponse rsp = DisassociateListenerAdditionalCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateListenerAdditionalCertificatesOutcome(rsp);
        else
            return DisassociateListenerAdditionalCertificatesOutcome(o.GetError());
    }
    else
    {
        return DisassociateListenerAdditionalCertificatesOutcome(outcome.GetError());
    }
}

void AlbClient::DisassociateListenerAdditionalCertificatesAsync(const DisassociateListenerAdditionalCertificatesRequest& request, const DisassociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateListenerAdditionalCertificatesRequest&;
    using Resp = DisassociateListenerAdditionalCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateListenerAdditionalCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::DisassociateListenerAdditionalCertificatesOutcomeCallable AlbClient::DisassociateListenerAdditionalCertificatesCallable(const DisassociateListenerAdditionalCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateListenerAdditionalCertificatesOutcome>>();
    DisassociateListenerAdditionalCertificatesAsync(
    request,
    [prom](
        const AlbClient*,
        const DisassociateListenerAdditionalCertificatesRequest&,
        DisassociateListenerAdditionalCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::InquirePriceCreateLoadBalancerOutcome AlbClient::InquirePriceCreateLoadBalancer(const InquirePriceCreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateLoadBalancerResponse rsp = InquirePriceCreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateLoadBalancerOutcome(rsp);
        else
            return InquirePriceCreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateLoadBalancerOutcome(outcome.GetError());
    }
}

void AlbClient::InquirePriceCreateLoadBalancerAsync(const InquirePriceCreateLoadBalancerRequest& request, const InquirePriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateLoadBalancerRequest&;
    using Resp = InquirePriceCreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::InquirePriceCreateLoadBalancerOutcomeCallable AlbClient::InquirePriceCreateLoadBalancerCallable(const InquirePriceCreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateLoadBalancerOutcome>>();
    InquirePriceCreateLoadBalancerAsync(
    request,
    [prom](
        const AlbClient*,
        const InquirePriceCreateLoadBalancerRequest&,
        InquirePriceCreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyHealthCheckTemplateOutcome AlbClient::ModifyHealthCheckTemplate(const ModifyHealthCheckTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHealthCheckTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHealthCheckTemplateResponse rsp = ModifyHealthCheckTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHealthCheckTemplateOutcome(rsp);
        else
            return ModifyHealthCheckTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyHealthCheckTemplateOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyHealthCheckTemplateAsync(const ModifyHealthCheckTemplateRequest& request, const ModifyHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyHealthCheckTemplateRequest&;
    using Resp = ModifyHealthCheckTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHealthCheckTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyHealthCheckTemplateOutcomeCallable AlbClient::ModifyHealthCheckTemplateCallable(const ModifyHealthCheckTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHealthCheckTemplateOutcome>>();
    ModifyHealthCheckTemplateAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyHealthCheckTemplateRequest&,
        ModifyHealthCheckTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyListenerAttributesOutcome AlbClient::ModifyListenerAttributes(const ModifyListenerAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyListenerAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyListenerAttributesResponse rsp = ModifyListenerAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyListenerAttributesOutcome(rsp);
        else
            return ModifyListenerAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyListenerAttributesOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyListenerAttributesAsync(const ModifyListenerAttributesRequest& request, const ModifyListenerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyListenerAttributesRequest&;
    using Resp = ModifyListenerAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyListenerAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyListenerAttributesOutcomeCallable AlbClient::ModifyListenerAttributesCallable(const ModifyListenerAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyListenerAttributesOutcome>>();
    ModifyListenerAttributesAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyListenerAttributesRequest&,
        ModifyListenerAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyLoadBalancerAddressTypeOutcome AlbClient::ModifyLoadBalancerAddressType(const ModifyLoadBalancerAddressTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerAddressType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerAddressTypeResponse rsp = ModifyLoadBalancerAddressTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerAddressTypeOutcome(rsp);
        else
            return ModifyLoadBalancerAddressTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerAddressTypeOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyLoadBalancerAddressTypeAsync(const ModifyLoadBalancerAddressTypeRequest& request, const ModifyLoadBalancerAddressTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerAddressTypeRequest&;
    using Resp = ModifyLoadBalancerAddressTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerAddressType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyLoadBalancerAddressTypeOutcomeCallable AlbClient::ModifyLoadBalancerAddressTypeCallable(const ModifyLoadBalancerAddressTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerAddressTypeOutcome>>();
    ModifyLoadBalancerAddressTypeAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyLoadBalancerAddressTypeRequest&,
        ModifyLoadBalancerAddressTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyLoadBalancerAttributesOutcome AlbClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerAttributesResponse rsp = ModifyLoadBalancerAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerAttributesOutcome(rsp);
        else
            return ModifyLoadBalancerAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerAttributesRequest&;
    using Resp = ModifyLoadBalancerAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyLoadBalancerAttributesOutcomeCallable AlbClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerAttributesOutcome>>();
    ModifyLoadBalancerAttributesAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyLoadBalancerAttributesRequest&,
        ModifyLoadBalancerAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyLoadBalancerModificationProtectionOutcome AlbClient::ModifyLoadBalancerModificationProtection(const ModifyLoadBalancerModificationProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerModificationProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerModificationProtectionResponse rsp = ModifyLoadBalancerModificationProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerModificationProtectionOutcome(rsp);
        else
            return ModifyLoadBalancerModificationProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerModificationProtectionOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyLoadBalancerModificationProtectionAsync(const ModifyLoadBalancerModificationProtectionRequest& request, const ModifyLoadBalancerModificationProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerModificationProtectionRequest&;
    using Resp = ModifyLoadBalancerModificationProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerModificationProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyLoadBalancerModificationProtectionOutcomeCallable AlbClient::ModifyLoadBalancerModificationProtectionCallable(const ModifyLoadBalancerModificationProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerModificationProtectionOutcome>>();
    ModifyLoadBalancerModificationProtectionAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyLoadBalancerModificationProtectionRequest&,
        ModifyLoadBalancerModificationProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyRulesAttributesOutcome AlbClient::ModifyRulesAttributes(const ModifyRulesAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRulesAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRulesAttributesResponse rsp = ModifyRulesAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRulesAttributesOutcome(rsp);
        else
            return ModifyRulesAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyRulesAttributesOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyRulesAttributesAsync(const ModifyRulesAttributesRequest& request, const ModifyRulesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRulesAttributesRequest&;
    using Resp = ModifyRulesAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRulesAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyRulesAttributesOutcomeCallable AlbClient::ModifyRulesAttributesCallable(const ModifyRulesAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRulesAttributesOutcome>>();
    ModifyRulesAttributesAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyRulesAttributesRequest&,
        ModifyRulesAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifySecurityPolicyAttributesOutcome AlbClient::ModifySecurityPolicyAttributes(const ModifySecurityPolicyAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityPolicyAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityPolicyAttributesResponse rsp = ModifySecurityPolicyAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityPolicyAttributesOutcome(rsp);
        else
            return ModifySecurityPolicyAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityPolicyAttributesOutcome(outcome.GetError());
    }
}

void AlbClient::ModifySecurityPolicyAttributesAsync(const ModifySecurityPolicyAttributesRequest& request, const ModifySecurityPolicyAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityPolicyAttributesRequest&;
    using Resp = ModifySecurityPolicyAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityPolicyAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifySecurityPolicyAttributesOutcomeCallable AlbClient::ModifySecurityPolicyAttributesCallable(const ModifySecurityPolicyAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityPolicyAttributesOutcome>>();
    ModifySecurityPolicyAttributesAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifySecurityPolicyAttributesRequest&,
        ModifySecurityPolicyAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyTargetGroupAttributesOutcome AlbClient::ModifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupAttributesResponse rsp = ModifyTargetGroupAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupAttributesOutcome(rsp);
        else
            return ModifyTargetGroupAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupAttributesOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyTargetGroupAttributesAsync(const ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetGroupAttributesRequest&;
    using Resp = ModifyTargetGroupAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetGroupAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyTargetGroupAttributesOutcomeCallable AlbClient::ModifyTargetGroupAttributesCallable(const ModifyTargetGroupAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupAttributesOutcome>>();
    ModifyTargetGroupAttributesAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyTargetGroupAttributesRequest&,
        ModifyTargetGroupAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::ModifyTargetsInTargetGroupOutcome AlbClient::ModifyTargetsInTargetGroup(const ModifyTargetsInTargetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetsInTargetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetsInTargetGroupResponse rsp = ModifyTargetsInTargetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetsInTargetGroupOutcome(rsp);
        else
            return ModifyTargetsInTargetGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetsInTargetGroupOutcome(outcome.GetError());
    }
}

void AlbClient::ModifyTargetsInTargetGroupAsync(const ModifyTargetsInTargetGroupRequest& request, const ModifyTargetsInTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetsInTargetGroupRequest&;
    using Resp = ModifyTargetsInTargetGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetsInTargetGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::ModifyTargetsInTargetGroupOutcomeCallable AlbClient::ModifyTargetsInTargetGroupCallable(const ModifyTargetsInTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetsInTargetGroupOutcome>>();
    ModifyTargetsInTargetGroupAsync(
    request,
    [prom](
        const AlbClient*,
        const ModifyTargetsInTargetGroupRequest&,
        ModifyTargetsInTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::NotifyUnbindTargetOutcome AlbClient::NotifyUnbindTarget(const NotifyUnbindTargetRequest &request)
{
    auto outcome = MakeRequest(request, "NotifyUnbindTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        NotifyUnbindTargetResponse rsp = NotifyUnbindTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return NotifyUnbindTargetOutcome(rsp);
        else
            return NotifyUnbindTargetOutcome(o.GetError());
    }
    else
    {
        return NotifyUnbindTargetOutcome(outcome.GetError());
    }
}

void AlbClient::NotifyUnbindTargetAsync(const NotifyUnbindTargetRequest& request, const NotifyUnbindTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const NotifyUnbindTargetRequest&;
    using Resp = NotifyUnbindTargetResponse;

    DoRequestAsync<Req, Resp>(
        "NotifyUnbindTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::NotifyUnbindTargetOutcomeCallable AlbClient::NotifyUnbindTargetCallable(const NotifyUnbindTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<NotifyUnbindTargetOutcome>>();
    NotifyUnbindTargetAsync(
    request,
    [prom](
        const AlbClient*,
        const NotifyUnbindTargetRequest&,
        NotifyUnbindTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::RemoveTargetsFromTargetGroupOutcome AlbClient::RemoveTargetsFromTargetGroup(const RemoveTargetsFromTargetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveTargetsFromTargetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveTargetsFromTargetGroupResponse rsp = RemoveTargetsFromTargetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveTargetsFromTargetGroupOutcome(rsp);
        else
            return RemoveTargetsFromTargetGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveTargetsFromTargetGroupOutcome(outcome.GetError());
    }
}

void AlbClient::RemoveTargetsFromTargetGroupAsync(const RemoveTargetsFromTargetGroupRequest& request, const RemoveTargetsFromTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveTargetsFromTargetGroupRequest&;
    using Resp = RemoveTargetsFromTargetGroupResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveTargetsFromTargetGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::RemoveTargetsFromTargetGroupOutcomeCallable AlbClient::RemoveTargetsFromTargetGroupCallable(const RemoveTargetsFromTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveTargetsFromTargetGroupOutcome>>();
    RemoveTargetsFromTargetGroupAsync(
    request,
    [prom](
        const AlbClient*,
        const RemoveTargetsFromTargetGroupRequest&,
        RemoveTargetsFromTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AlbClient::SetLoadBalancerSecurityGroupsOutcome AlbClient::SetLoadBalancerSecurityGroups(const SetLoadBalancerSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerSecurityGroupsResponse rsp = SetLoadBalancerSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerSecurityGroupsOutcome(rsp);
        else
            return SetLoadBalancerSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerSecurityGroupsOutcome(outcome.GetError());
    }
}

void AlbClient::SetLoadBalancerSecurityGroupsAsync(const SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLoadBalancerSecurityGroupsRequest&;
    using Resp = SetLoadBalancerSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "SetLoadBalancerSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AlbClient::SetLoadBalancerSecurityGroupsOutcomeCallable AlbClient::SetLoadBalancerSecurityGroupsCallable(const SetLoadBalancerSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLoadBalancerSecurityGroupsOutcome>>();
    SetLoadBalancerSecurityGroupsAsync(
    request,
    [prom](
        const AlbClient*,
        const SetLoadBalancerSecurityGroupsRequest&,
        SetLoadBalancerSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

