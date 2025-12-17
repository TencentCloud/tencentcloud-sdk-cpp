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

#include <tencentcloud/clb/v20180317/ClbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Clb::V20180317;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-17";
    const string ENDPOINT = "clb.tencentcloudapi.com";
}

ClbClient::ClbClient(const Credential &credential, const string &region) :
    ClbClient(credential, region, ClientProfile())
{
}

ClbClient::ClbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClbClient::AssociateTargetGroupsOutcome ClbClient::AssociateTargetGroups(const AssociateTargetGroupsRequest &request)
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

void ClbClient::AssociateTargetGroupsAsync(const AssociateTargetGroupsRequest& request, const AssociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::AssociateTargetGroupsOutcomeCallable ClbClient::AssociateTargetGroupsCallable(const AssociateTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateTargetGroupsOutcome>>();
    AssociateTargetGroupsAsync(
    request,
    [prom](
        const ClbClient*,
        const AssociateTargetGroupsRequest&,
        AssociateTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::AutoRewriteOutcome ClbClient::AutoRewrite(const AutoRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "AutoRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AutoRewriteResponse rsp = AutoRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AutoRewriteOutcome(rsp);
        else
            return AutoRewriteOutcome(o.GetError());
    }
    else
    {
        return AutoRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::AutoRewriteAsync(const AutoRewriteRequest& request, const AutoRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AutoRewriteRequest&;
    using Resp = AutoRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "AutoRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::AutoRewriteOutcomeCallable ClbClient::AutoRewriteCallable(const AutoRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<AutoRewriteOutcome>>();
    AutoRewriteAsync(
    request,
    [prom](
        const ClbClient*,
        const AutoRewriteRequest&,
        AutoRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::BatchDeregisterTargetsOutcome ClbClient::BatchDeregisterTargets(const BatchDeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeregisterTargetsResponse rsp = BatchDeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeregisterTargetsOutcome(rsp);
        else
            return BatchDeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchDeregisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::BatchDeregisterTargetsAsync(const BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeregisterTargetsRequest&;
    using Resp = BatchDeregisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeregisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::BatchDeregisterTargetsOutcomeCallable ClbClient::BatchDeregisterTargetsCallable(const BatchDeregisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeregisterTargetsOutcome>>();
    BatchDeregisterTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const BatchDeregisterTargetsRequest&,
        BatchDeregisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::BatchModifyTargetTagOutcome ClbClient::BatchModifyTargetTag(const BatchModifyTargetTagRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetTagResponse rsp = BatchModifyTargetTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetTagOutcome(rsp);
        else
            return BatchModifyTargetTagOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetTagOutcome(outcome.GetError());
    }
}

void ClbClient::BatchModifyTargetTagAsync(const BatchModifyTargetTagRequest& request, const BatchModifyTargetTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyTargetTagRequest&;
    using Resp = BatchModifyTargetTagResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyTargetTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::BatchModifyTargetTagOutcomeCallable ClbClient::BatchModifyTargetTagCallable(const BatchModifyTargetTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyTargetTagOutcome>>();
    BatchModifyTargetTagAsync(
    request,
    [prom](
        const ClbClient*,
        const BatchModifyTargetTagRequest&,
        BatchModifyTargetTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::BatchModifyTargetWeightOutcome ClbClient::BatchModifyTargetWeight(const BatchModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTargetWeightResponse rsp = BatchModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTargetWeightOutcome(rsp);
        else
            return BatchModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTargetWeightOutcome(outcome.GetError());
    }
}

void ClbClient::BatchModifyTargetWeightAsync(const BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyTargetWeightRequest&;
    using Resp = BatchModifyTargetWeightResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyTargetWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::BatchModifyTargetWeightOutcomeCallable ClbClient::BatchModifyTargetWeightCallable(const BatchModifyTargetWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyTargetWeightOutcome>>();
    BatchModifyTargetWeightAsync(
    request,
    [prom](
        const ClbClient*,
        const BatchModifyTargetWeightRequest&,
        BatchModifyTargetWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::BatchRegisterTargetsOutcome ClbClient::BatchRegisterTargets(const BatchRegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterTargetsResponse rsp = BatchRegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterTargetsOutcome(rsp);
        else
            return BatchRegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::BatchRegisterTargetsAsync(const BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchRegisterTargetsRequest&;
    using Resp = BatchRegisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchRegisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::BatchRegisterTargetsOutcomeCallable ClbClient::BatchRegisterTargetsCallable(const BatchRegisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchRegisterTargetsOutcome>>();
    BatchRegisterTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const BatchRegisterTargetsRequest&,
        BatchRegisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CloneLoadBalancerOutcome ClbClient::CloneLoadBalancer(const CloneLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "CloneLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloneLoadBalancerResponse rsp = CloneLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloneLoadBalancerOutcome(rsp);
        else
            return CloneLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return CloneLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::CloneLoadBalancerAsync(const CloneLoadBalancerRequest& request, const CloneLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloneLoadBalancerRequest&;
    using Resp = CloneLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CloneLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CloneLoadBalancerOutcomeCallable ClbClient::CloneLoadBalancerCallable(const CloneLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloneLoadBalancerOutcome>>();
    CloneLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const CloneLoadBalancerRequest&,
        CloneLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateClsLogSetOutcome ClbClient::CreateClsLogSet(const CreateClsLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClsLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClsLogSetResponse rsp = CreateClsLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClsLogSetOutcome(rsp);
        else
            return CreateClsLogSetOutcome(o.GetError());
    }
    else
    {
        return CreateClsLogSetOutcome(outcome.GetError());
    }
}

void ClbClient::CreateClsLogSetAsync(const CreateClsLogSetRequest& request, const CreateClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClsLogSetRequest&;
    using Resp = CreateClsLogSetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClsLogSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CreateClsLogSetOutcomeCallable ClbClient::CreateClsLogSetCallable(const CreateClsLogSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClsLogSetOutcome>>();
    CreateClsLogSetAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateClsLogSetRequest&,
        CreateClsLogSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateListenerOutcome ClbClient::CreateListener(const CreateListenerRequest &request)
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

void ClbClient::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::CreateListenerOutcomeCallable ClbClient::CreateListenerCallable(const CreateListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateListenerOutcome>>();
    CreateListenerAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateListenerRequest&,
        CreateListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateLoadBalancerOutcome ClbClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
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

void ClbClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::CreateLoadBalancerOutcomeCallable ClbClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerOutcome>>();
    CreateLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateLoadBalancerRequest&,
        CreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateLoadBalancerSnatIpsOutcome ClbClient::CreateLoadBalancerSnatIps(const CreateLoadBalancerSnatIpsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancerSnatIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancerSnatIpsResponse rsp = CreateLoadBalancerSnatIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancerSnatIpsOutcome(rsp);
        else
            return CreateLoadBalancerSnatIpsOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancerSnatIpsOutcome(outcome.GetError());
    }
}

void ClbClient::CreateLoadBalancerSnatIpsAsync(const CreateLoadBalancerSnatIpsRequest& request, const CreateLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLoadBalancerSnatIpsRequest&;
    using Resp = CreateLoadBalancerSnatIpsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancerSnatIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CreateLoadBalancerSnatIpsOutcomeCallable ClbClient::CreateLoadBalancerSnatIpsCallable(const CreateLoadBalancerSnatIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerSnatIpsOutcome>>();
    CreateLoadBalancerSnatIpsAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateLoadBalancerSnatIpsRequest&,
        CreateLoadBalancerSnatIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateRuleOutcome ClbClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void ClbClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CreateRuleOutcomeCallable ClbClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateTargetGroupOutcome ClbClient::CreateTargetGroup(const CreateTargetGroupRequest &request)
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

void ClbClient::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::CreateTargetGroupOutcomeCallable ClbClient::CreateTargetGroupCallable(const CreateTargetGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTargetGroupOutcome>>();
    CreateTargetGroupAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateTargetGroupRequest&,
        CreateTargetGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::CreateTopicOutcome ClbClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void ClbClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRequest&;
    using Resp = CreateTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::CreateTopicOutcomeCallable ClbClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const ClbClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteListenerOutcome ClbClient::DeleteListener(const DeleteListenerRequest &request)
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

void ClbClient::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DeleteListenerOutcomeCallable ClbClient::DeleteListenerCallable(const DeleteListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenerOutcome>>();
    DeleteListenerAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteListenerRequest&,
        DeleteListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteLoadBalancerOutcome ClbClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerResponse rsp = DeleteLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerOutcome(rsp);
        else
            return DeleteLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancerRequest&;
    using Resp = DeleteLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeleteLoadBalancerOutcomeCallable ClbClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerOutcome>>();
    DeleteLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteLoadBalancerRequest&,
        DeleteLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteLoadBalancerListenersOutcome ClbClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerListenersResponse rsp = DeleteLoadBalancerListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerListenersOutcome(rsp);
        else
            return DeleteLoadBalancerListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancerListenersRequest&;
    using Resp = DeleteLoadBalancerListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancerListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeleteLoadBalancerListenersOutcomeCallable ClbClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerListenersOutcome>>();
    DeleteLoadBalancerListenersAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteLoadBalancerListenersRequest&,
        DeleteLoadBalancerListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteLoadBalancerSnatIpsOutcome ClbClient::DeleteLoadBalancerSnatIps(const DeleteLoadBalancerSnatIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancerSnatIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerSnatIpsResponse rsp = DeleteLoadBalancerSnatIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerSnatIpsOutcome(rsp);
        else
            return DeleteLoadBalancerSnatIpsOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerSnatIpsOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteLoadBalancerSnatIpsAsync(const DeleteLoadBalancerSnatIpsRequest& request, const DeleteLoadBalancerSnatIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoadBalancerSnatIpsRequest&;
    using Resp = DeleteLoadBalancerSnatIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancerSnatIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeleteLoadBalancerSnatIpsOutcomeCallable ClbClient::DeleteLoadBalancerSnatIpsCallable(const DeleteLoadBalancerSnatIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerSnatIpsOutcome>>();
    DeleteLoadBalancerSnatIpsAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteLoadBalancerSnatIpsRequest&,
        DeleteLoadBalancerSnatIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteRewriteOutcome ClbClient::DeleteRewrite(const DeleteRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRewriteResponse rsp = DeleteRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRewriteOutcome(rsp);
        else
            return DeleteRewriteOutcome(o.GetError());
    }
    else
    {
        return DeleteRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteRewriteAsync(const DeleteRewriteRequest& request, const DeleteRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRewriteRequest&;
    using Resp = DeleteRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeleteRewriteOutcomeCallable ClbClient::DeleteRewriteCallable(const DeleteRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRewriteOutcome>>();
    DeleteRewriteAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteRewriteRequest&,
        DeleteRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteRuleOutcome ClbClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void ClbClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeleteRuleOutcomeCallable ClbClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeleteTargetGroupsOutcome ClbClient::DeleteTargetGroups(const DeleteTargetGroupsRequest &request)
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

void ClbClient::DeleteTargetGroupsAsync(const DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DeleteTargetGroupsOutcomeCallable ClbClient::DeleteTargetGroupsCallable(const DeleteTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTargetGroupsOutcome>>();
    DeleteTargetGroupsAsync(
    request,
    [prom](
        const ClbClient*,
        const DeleteTargetGroupsRequest&,
        DeleteTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeregisterFunctionTargetsOutcome ClbClient::DeregisterFunctionTargets(const DeregisterFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterFunctionTargetsResponse rsp = DeregisterFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterFunctionTargetsOutcome(rsp);
        else
            return DeregisterFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return DeregisterFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterFunctionTargetsAsync(const DeregisterFunctionTargetsRequest& request, const DeregisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeregisterFunctionTargetsRequest&;
    using Resp = DeregisterFunctionTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DeregisterFunctionTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeregisterFunctionTargetsOutcomeCallable ClbClient::DeregisterFunctionTargetsCallable(const DeregisterFunctionTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterFunctionTargetsOutcome>>();
    DeregisterFunctionTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const DeregisterFunctionTargetsRequest&,
        DeregisterFunctionTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeregisterTargetGroupInstancesOutcome ClbClient::DeregisterTargetGroupInstances(const DeregisterTargetGroupInstancesRequest &request)
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

void ClbClient::DeregisterTargetGroupInstancesAsync(const DeregisterTargetGroupInstancesRequest& request, const DeregisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DeregisterTargetGroupInstancesOutcomeCallable ClbClient::DeregisterTargetGroupInstancesCallable(const DeregisterTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterTargetGroupInstancesOutcome>>();
    DeregisterTargetGroupInstancesAsync(
    request,
    [prom](
        const ClbClient*,
        const DeregisterTargetGroupInstancesRequest&,
        DeregisterTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeregisterTargetsOutcome ClbClient::DeregisterTargets(const DeregisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetsResponse rsp = DeregisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetsOutcome(rsp);
        else
            return DeregisterTargetsOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterTargetsAsync(const DeregisterTargetsRequest& request, const DeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeregisterTargetsRequest&;
    using Resp = DeregisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DeregisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeregisterTargetsOutcomeCallable ClbClient::DeregisterTargetsCallable(const DeregisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterTargetsOutcome>>();
    DeregisterTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const DeregisterTargetsRequest&,
        DeregisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DeregisterTargetsFromClassicalLBOutcome ClbClient::DeregisterTargetsFromClassicalLB(const DeregisterTargetsFromClassicalLBRequest &request)
{
    auto outcome = MakeRequest(request, "DeregisterTargetsFromClassicalLB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeregisterTargetsFromClassicalLBResponse rsp = DeregisterTargetsFromClassicalLBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeregisterTargetsFromClassicalLBOutcome(rsp);
        else
            return DeregisterTargetsFromClassicalLBOutcome(o.GetError());
    }
    else
    {
        return DeregisterTargetsFromClassicalLBOutcome(outcome.GetError());
    }
}

void ClbClient::DeregisterTargetsFromClassicalLBAsync(const DeregisterTargetsFromClassicalLBRequest& request, const DeregisterTargetsFromClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeregisterTargetsFromClassicalLBRequest&;
    using Resp = DeregisterTargetsFromClassicalLBResponse;

    DoRequestAsync<Req, Resp>(
        "DeregisterTargetsFromClassicalLB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DeregisterTargetsFromClassicalLBOutcomeCallable ClbClient::DeregisterTargetsFromClassicalLBCallable(const DeregisterTargetsFromClassicalLBRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeregisterTargetsFromClassicalLBOutcome>>();
    DeregisterTargetsFromClassicalLBAsync(
    request,
    [prom](
        const ClbClient*,
        const DeregisterTargetsFromClassicalLBRequest&,
        DeregisterTargetsFromClassicalLBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeBlockIPListOutcome ClbClient::DescribeBlockIPList(const DescribeBlockIPListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIPListResponse rsp = DescribeBlockIPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIPListOutcome(rsp);
        else
            return DescribeBlockIPListOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIPListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeBlockIPListAsync(const DescribeBlockIPListRequest& request, const DescribeBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockIPListRequest&;
    using Resp = DescribeBlockIPListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockIPList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeBlockIPListOutcomeCallable ClbClient::DescribeBlockIPListCallable(const DescribeBlockIPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockIPListOutcome>>();
    DescribeBlockIPListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeBlockIPListRequest&,
        DescribeBlockIPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeBlockIPTaskOutcome ClbClient::DescribeBlockIPTask(const DescribeBlockIPTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlockIPTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlockIPTaskResponse rsp = DescribeBlockIPTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlockIPTaskOutcome(rsp);
        else
            return DescribeBlockIPTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBlockIPTaskOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeBlockIPTaskAsync(const DescribeBlockIPTaskRequest& request, const DescribeBlockIPTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBlockIPTaskRequest&;
    using Resp = DescribeBlockIPTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlockIPTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeBlockIPTaskOutcomeCallable ClbClient::DescribeBlockIPTaskCallable(const DescribeBlockIPTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlockIPTaskOutcome>>();
    DescribeBlockIPTaskAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeBlockIPTaskRequest&,
        DescribeBlockIPTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClassicalLBByInstanceIdOutcome ClbClient::DescribeClassicalLBByInstanceId(const DescribeClassicalLBByInstanceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBByInstanceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBByInstanceIdResponse rsp = DescribeClassicalLBByInstanceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBByInstanceIdOutcome(rsp);
        else
            return DescribeClassicalLBByInstanceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBByInstanceIdOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBByInstanceIdAsync(const DescribeClassicalLBByInstanceIdRequest& request, const DescribeClassicalLBByInstanceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicalLBByInstanceIdRequest&;
    using Resp = DescribeClassicalLBByInstanceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicalLBByInstanceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClassicalLBByInstanceIdOutcomeCallable ClbClient::DescribeClassicalLBByInstanceIdCallable(const DescribeClassicalLBByInstanceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicalLBByInstanceIdOutcome>>();
    DescribeClassicalLBByInstanceIdAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClassicalLBByInstanceIdRequest&,
        DescribeClassicalLBByInstanceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClassicalLBHealthStatusOutcome ClbClient::DescribeClassicalLBHealthStatus(const DescribeClassicalLBHealthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBHealthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBHealthStatusResponse rsp = DescribeClassicalLBHealthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBHealthStatusOutcome(rsp);
        else
            return DescribeClassicalLBHealthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBHealthStatusOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBHealthStatusAsync(const DescribeClassicalLBHealthStatusRequest& request, const DescribeClassicalLBHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicalLBHealthStatusRequest&;
    using Resp = DescribeClassicalLBHealthStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicalLBHealthStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClassicalLBHealthStatusOutcomeCallable ClbClient::DescribeClassicalLBHealthStatusCallable(const DescribeClassicalLBHealthStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicalLBHealthStatusOutcome>>();
    DescribeClassicalLBHealthStatusAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClassicalLBHealthStatusRequest&,
        DescribeClassicalLBHealthStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClassicalLBListenersOutcome ClbClient::DescribeClassicalLBListeners(const DescribeClassicalLBListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBListenersResponse rsp = DescribeClassicalLBListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBListenersOutcome(rsp);
        else
            return DescribeClassicalLBListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBListenersAsync(const DescribeClassicalLBListenersRequest& request, const DescribeClassicalLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicalLBListenersRequest&;
    using Resp = DescribeClassicalLBListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicalLBListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClassicalLBListenersOutcomeCallable ClbClient::DescribeClassicalLBListenersCallable(const DescribeClassicalLBListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicalLBListenersOutcome>>();
    DescribeClassicalLBListenersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClassicalLBListenersRequest&,
        DescribeClassicalLBListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClassicalLBTargetsOutcome ClbClient::DescribeClassicalLBTargets(const DescribeClassicalLBTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClassicalLBTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClassicalLBTargetsResponse rsp = DescribeClassicalLBTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClassicalLBTargetsOutcome(rsp);
        else
            return DescribeClassicalLBTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClassicalLBTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClassicalLBTargetsAsync(const DescribeClassicalLBTargetsRequest& request, const DescribeClassicalLBTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClassicalLBTargetsRequest&;
    using Resp = DescribeClassicalLBTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClassicalLBTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClassicalLBTargetsOutcomeCallable ClbClient::DescribeClassicalLBTargetsCallable(const DescribeClassicalLBTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClassicalLBTargetsOutcome>>();
    DescribeClassicalLBTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClassicalLBTargetsRequest&,
        DescribeClassicalLBTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClsLogSetOutcome ClbClient::DescribeClsLogSet(const DescribeClsLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClsLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClsLogSetResponse rsp = DescribeClsLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClsLogSetOutcome(rsp);
        else
            return DescribeClsLogSetOutcome(o.GetError());
    }
    else
    {
        return DescribeClsLogSetOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClsLogSetAsync(const DescribeClsLogSetRequest& request, const DescribeClsLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClsLogSetRequest&;
    using Resp = DescribeClsLogSetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClsLogSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClsLogSetOutcomeCallable ClbClient::DescribeClsLogSetCallable(const DescribeClsLogSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClsLogSetOutcome>>();
    DescribeClsLogSetAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClsLogSetRequest&,
        DescribeClsLogSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeClusterResourcesOutcome ClbClient::DescribeClusterResources(const DescribeClusterResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterResourcesResponse rsp = DescribeClusterResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterResourcesOutcome(rsp);
        else
            return DescribeClusterResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterResourcesOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeClusterResourcesAsync(const DescribeClusterResourcesRequest& request, const DescribeClusterResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterResourcesRequest&;
    using Resp = DescribeClusterResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeClusterResourcesOutcomeCallable ClbClient::DescribeClusterResourcesCallable(const DescribeClusterResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterResourcesOutcome>>();
    DescribeClusterResourcesAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeClusterResourcesRequest&,
        DescribeClusterResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeCrossTargetsOutcome ClbClient::DescribeCrossTargets(const DescribeCrossTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossTargetsResponse rsp = DescribeCrossTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossTargetsOutcome(rsp);
        else
            return DescribeCrossTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCrossTargetsAsync(const DescribeCrossTargetsRequest& request, const DescribeCrossTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCrossTargetsRequest&;
    using Resp = DescribeCrossTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeCrossTargetsOutcomeCallable ClbClient::DescribeCrossTargetsCallable(const DescribeCrossTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossTargetsOutcome>>();
    DescribeCrossTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeCrossTargetsRequest&,
        DescribeCrossTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeCustomizedConfigAssociateListOutcome ClbClient::DescribeCustomizedConfigAssociateList(const DescribeCustomizedConfigAssociateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigAssociateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigAssociateListResponse rsp = DescribeCustomizedConfigAssociateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigAssociateListOutcome(rsp);
        else
            return DescribeCustomizedConfigAssociateListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigAssociateListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigAssociateListAsync(const DescribeCustomizedConfigAssociateListRequest& request, const DescribeCustomizedConfigAssociateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomizedConfigAssociateListRequest&;
    using Resp = DescribeCustomizedConfigAssociateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomizedConfigAssociateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeCustomizedConfigAssociateListOutcomeCallable ClbClient::DescribeCustomizedConfigAssociateListCallable(const DescribeCustomizedConfigAssociateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomizedConfigAssociateListOutcome>>();
    DescribeCustomizedConfigAssociateListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeCustomizedConfigAssociateListRequest&,
        DescribeCustomizedConfigAssociateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeCustomizedConfigListOutcome ClbClient::DescribeCustomizedConfigList(const DescribeCustomizedConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomizedConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomizedConfigListResponse rsp = DescribeCustomizedConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomizedConfigListOutcome(rsp);
        else
            return DescribeCustomizedConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomizedConfigListOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeCustomizedConfigListAsync(const DescribeCustomizedConfigListRequest& request, const DescribeCustomizedConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomizedConfigListRequest&;
    using Resp = DescribeCustomizedConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomizedConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeCustomizedConfigListOutcomeCallable ClbClient::DescribeCustomizedConfigListCallable(const DescribeCustomizedConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomizedConfigListOutcome>>();
    DescribeCustomizedConfigListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeCustomizedConfigListRequest&,
        DescribeCustomizedConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeExclusiveClustersOutcome ClbClient::DescribeExclusiveClusters(const DescribeExclusiveClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveClustersResponse rsp = DescribeExclusiveClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveClustersOutcome(rsp);
        else
            return DescribeExclusiveClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveClustersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeExclusiveClustersAsync(const DescribeExclusiveClustersRequest& request, const DescribeExclusiveClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExclusiveClustersRequest&;
    using Resp = DescribeExclusiveClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExclusiveClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeExclusiveClustersOutcomeCallable ClbClient::DescribeExclusiveClustersCallable(const DescribeExclusiveClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExclusiveClustersOutcome>>();
    DescribeExclusiveClustersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeExclusiveClustersRequest&,
        DescribeExclusiveClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeIdleLoadBalancersOutcome ClbClient::DescribeIdleLoadBalancers(const DescribeIdleLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdleLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdleLoadBalancersResponse rsp = DescribeIdleLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdleLoadBalancersOutcome(rsp);
        else
            return DescribeIdleLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeIdleLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeIdleLoadBalancersAsync(const DescribeIdleLoadBalancersRequest& request, const DescribeIdleLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdleLoadBalancersRequest&;
    using Resp = DescribeIdleLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdleLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeIdleLoadBalancersOutcomeCallable ClbClient::DescribeIdleLoadBalancersCallable(const DescribeIdleLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdleLoadBalancersOutcome>>();
    DescribeIdleLoadBalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeIdleLoadBalancersRequest&,
        DescribeIdleLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLBListenersOutcome ClbClient::DescribeLBListeners(const DescribeLBListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLBListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLBListenersResponse rsp = DescribeLBListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLBListenersOutcome(rsp);
        else
            return DescribeLBListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeLBListenersOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLBListenersAsync(const DescribeLBListenersRequest& request, const DescribeLBListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLBListenersRequest&;
    using Resp = DescribeLBListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLBListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLBListenersOutcomeCallable ClbClient::DescribeLBListenersCallable(const DescribeLBListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLBListenersOutcome>>();
    DescribeLBListenersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLBListenersRequest&,
        DescribeLBListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLBOperateProtectOutcome ClbClient::DescribeLBOperateProtect(const DescribeLBOperateProtectRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLBOperateProtect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLBOperateProtectResponse rsp = DescribeLBOperateProtectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLBOperateProtectOutcome(rsp);
        else
            return DescribeLBOperateProtectOutcome(o.GetError());
    }
    else
    {
        return DescribeLBOperateProtectOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLBOperateProtectAsync(const DescribeLBOperateProtectRequest& request, const DescribeLBOperateProtectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLBOperateProtectRequest&;
    using Resp = DescribeLBOperateProtectResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLBOperateProtect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLBOperateProtectOutcomeCallable ClbClient::DescribeLBOperateProtectCallable(const DescribeLBOperateProtectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLBOperateProtectOutcome>>();
    DescribeLBOperateProtectAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLBOperateProtectRequest&,
        DescribeLBOperateProtectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeListenersOutcome ClbClient::DescribeListeners(const DescribeListenersRequest &request)
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

void ClbClient::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeListenersOutcomeCallable ClbClient::DescribeListenersCallable(const DescribeListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenersOutcome>>();
    DescribeListenersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeListenersRequest&,
        DescribeListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancerListByCertIdOutcome ClbClient::DescribeLoadBalancerListByCertId(const DescribeLoadBalancerListByCertIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerListByCertId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerListByCertIdResponse rsp = DescribeLoadBalancerListByCertIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerListByCertIdOutcome(rsp);
        else
            return DescribeLoadBalancerListByCertIdOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerListByCertIdOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerListByCertIdAsync(const DescribeLoadBalancerListByCertIdRequest& request, const DescribeLoadBalancerListByCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancerListByCertIdRequest&;
    using Resp = DescribeLoadBalancerListByCertIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerListByCertId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancerListByCertIdOutcomeCallable ClbClient::DescribeLoadBalancerListByCertIdCallable(const DescribeLoadBalancerListByCertIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerListByCertIdOutcome>>();
    DescribeLoadBalancerListByCertIdAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancerListByCertIdRequest&,
        DescribeLoadBalancerListByCertIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancerOverviewOutcome ClbClient::DescribeLoadBalancerOverview(const DescribeLoadBalancerOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerOverviewResponse rsp = DescribeLoadBalancerOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerOverviewOutcome(rsp);
        else
            return DescribeLoadBalancerOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerOverviewOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerOverviewAsync(const DescribeLoadBalancerOverviewRequest& request, const DescribeLoadBalancerOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancerOverviewRequest&;
    using Resp = DescribeLoadBalancerOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancerOverviewOutcomeCallable ClbClient::DescribeLoadBalancerOverviewCallable(const DescribeLoadBalancerOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerOverviewOutcome>>();
    DescribeLoadBalancerOverviewAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancerOverviewRequest&,
        DescribeLoadBalancerOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancerTrafficOutcome ClbClient::DescribeLoadBalancerTraffic(const DescribeLoadBalancerTrafficRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerTraffic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerTrafficResponse rsp = DescribeLoadBalancerTrafficResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerTrafficOutcome(rsp);
        else
            return DescribeLoadBalancerTrafficOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerTrafficOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancerTrafficAsync(const DescribeLoadBalancerTrafficRequest& request, const DescribeLoadBalancerTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancerTrafficRequest&;
    using Resp = DescribeLoadBalancerTrafficResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerTraffic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancerTrafficOutcomeCallable ClbClient::DescribeLoadBalancerTrafficCallable(const DescribeLoadBalancerTrafficRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerTrafficOutcome>>();
    DescribeLoadBalancerTrafficAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancerTrafficRequest&,
        DescribeLoadBalancerTrafficOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancersOutcome ClbClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
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

void ClbClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeLoadBalancersOutcomeCallable ClbClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersOutcome>>();
    DescribeLoadBalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancersRequest&,
        DescribeLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeLoadBalancersDetailOutcome ClbClient::DescribeLoadBalancersDetail(const DescribeLoadBalancersDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancersDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersDetailResponse rsp = DescribeLoadBalancersDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersDetailOutcome(rsp);
        else
            return DescribeLoadBalancersDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersDetailOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeLoadBalancersDetailAsync(const DescribeLoadBalancersDetailRequest& request, const DescribeLoadBalancersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoadBalancersDetailRequest&;
    using Resp = DescribeLoadBalancersDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancersDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeLoadBalancersDetailOutcomeCallable ClbClient::DescribeLoadBalancersDetailCallable(const DescribeLoadBalancersDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancersDetailOutcome>>();
    DescribeLoadBalancersDetailAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeLoadBalancersDetailRequest&,
        DescribeLoadBalancersDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeQuotaOutcome ClbClient::DescribeQuota(const DescribeQuotaRequest &request)
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

void ClbClient::DescribeQuotaAsync(const DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeQuotaOutcomeCallable ClbClient::DescribeQuotaCallable(const DescribeQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQuotaOutcome>>();
    DescribeQuotaAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeQuotaRequest&,
        DescribeQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeResourcesOutcome ClbClient::DescribeResources(const DescribeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesResponse rsp = DescribeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesOutcome(rsp);
        else
            return DescribeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesRequest&;
    using Resp = DescribeResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeResourcesOutcomeCallable ClbClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesOutcome>>();
    DescribeResourcesAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeResourcesRequest&,
        DescribeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeRewriteOutcome ClbClient::DescribeRewrite(const DescribeRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRewriteResponse rsp = DescribeRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRewriteOutcome(rsp);
        else
            return DescribeRewriteOutcome(o.GetError());
    }
    else
    {
        return DescribeRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeRewriteAsync(const DescribeRewriteRequest& request, const DescribeRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRewriteRequest&;
    using Resp = DescribeRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeRewriteOutcomeCallable ClbClient::DescribeRewriteCallable(const DescribeRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRewriteOutcome>>();
    DescribeRewriteAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeRewriteRequest&,
        DescribeRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetGroupInstanceStatusOutcome ClbClient::DescribeTargetGroupInstanceStatus(const DescribeTargetGroupInstanceStatusRequest &request)
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

void ClbClient::DescribeTargetGroupInstanceStatusAsync(const DescribeTargetGroupInstanceStatusRequest& request, const DescribeTargetGroupInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeTargetGroupInstanceStatusOutcomeCallable ClbClient::DescribeTargetGroupInstanceStatusCallable(const DescribeTargetGroupInstanceStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupInstanceStatusOutcome>>();
    DescribeTargetGroupInstanceStatusAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetGroupInstanceStatusRequest&,
        DescribeTargetGroupInstanceStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetGroupInstancesOutcome ClbClient::DescribeTargetGroupInstances(const DescribeTargetGroupInstancesRequest &request)
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

void ClbClient::DescribeTargetGroupInstancesAsync(const DescribeTargetGroupInstancesRequest& request, const DescribeTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeTargetGroupInstancesOutcomeCallable ClbClient::DescribeTargetGroupInstancesCallable(const DescribeTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupInstancesOutcome>>();
    DescribeTargetGroupInstancesAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetGroupInstancesRequest&,
        DescribeTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetGroupListOutcome ClbClient::DescribeTargetGroupList(const DescribeTargetGroupListRequest &request)
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

void ClbClient::DescribeTargetGroupListAsync(const DescribeTargetGroupListRequest& request, const DescribeTargetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeTargetGroupListOutcomeCallable ClbClient::DescribeTargetGroupListCallable(const DescribeTargetGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupListOutcome>>();
    DescribeTargetGroupListAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetGroupListRequest&,
        DescribeTargetGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetGroupsOutcome ClbClient::DescribeTargetGroups(const DescribeTargetGroupsRequest &request)
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

void ClbClient::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeTargetGroupsOutcomeCallable ClbClient::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetGroupsOutcome>>();
    DescribeTargetGroupsAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetGroupsRequest&,
        DescribeTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetHealthOutcome ClbClient::DescribeTargetHealth(const DescribeTargetHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargetHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetHealthResponse rsp = DescribeTargetHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetHealthOutcome(rsp);
        else
            return DescribeTargetHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetHealthOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetHealthRequest&;
    using Resp = DescribeTargetHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargetHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeTargetHealthOutcomeCallable ClbClient::DescribeTargetHealthCallable(const DescribeTargetHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetHealthOutcome>>();
    DescribeTargetHealthAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetHealthRequest&,
        DescribeTargetHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTargetsOutcome ClbClient::DescribeTargets(const DescribeTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTargetsResponse rsp = DescribeTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTargetsOutcome(rsp);
        else
            return DescribeTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::DescribeTargetsAsync(const DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTargetsRequest&;
    using Resp = DescribeTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::DescribeTargetsOutcomeCallable ClbClient::DescribeTargetsCallable(const DescribeTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTargetsOutcome>>();
    DescribeTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTargetsRequest&,
        DescribeTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DescribeTaskStatusOutcome ClbClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
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

void ClbClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DescribeTaskStatusOutcomeCallable ClbClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const ClbClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::DisassociateTargetGroupsOutcome ClbClient::DisassociateTargetGroups(const DisassociateTargetGroupsRequest &request)
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

void ClbClient::DisassociateTargetGroupsAsync(const DisassociateTargetGroupsRequest& request, const DisassociateTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::DisassociateTargetGroupsOutcomeCallable ClbClient::DisassociateTargetGroupsCallable(const DisassociateTargetGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateTargetGroupsOutcome>>();
    DisassociateTargetGroupsAsync(
    request,
    [prom](
        const ClbClient*,
        const DisassociateTargetGroupsRequest&,
        DisassociateTargetGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::InquiryPriceCreateLoadBalancerOutcome ClbClient::InquiryPriceCreateLoadBalancer(const InquiryPriceCreateLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateLoadBalancerResponse rsp = InquiryPriceCreateLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateLoadBalancerOutcome(rsp);
        else
            return InquiryPriceCreateLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceCreateLoadBalancerAsync(const InquiryPriceCreateLoadBalancerRequest& request, const InquiryPriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceCreateLoadBalancerRequest&;
    using Resp = InquiryPriceCreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceCreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::InquiryPriceCreateLoadBalancerOutcomeCallable ClbClient::InquiryPriceCreateLoadBalancerCallable(const InquiryPriceCreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateLoadBalancerOutcome>>();
    InquiryPriceCreateLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const InquiryPriceCreateLoadBalancerRequest&,
        InquiryPriceCreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::InquiryPriceModifyLoadBalancerOutcome ClbClient::InquiryPriceModifyLoadBalancer(const InquiryPriceModifyLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceModifyLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceModifyLoadBalancerResponse rsp = InquiryPriceModifyLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceModifyLoadBalancerOutcome(rsp);
        else
            return InquiryPriceModifyLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceModifyLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceModifyLoadBalancerAsync(const InquiryPriceModifyLoadBalancerRequest& request, const InquiryPriceModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceModifyLoadBalancerRequest&;
    using Resp = InquiryPriceModifyLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceModifyLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::InquiryPriceModifyLoadBalancerOutcomeCallable ClbClient::InquiryPriceModifyLoadBalancerCallable(const InquiryPriceModifyLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceModifyLoadBalancerOutcome>>();
    InquiryPriceModifyLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const InquiryPriceModifyLoadBalancerRequest&,
        InquiryPriceModifyLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::InquiryPriceRefundLoadBalancerOutcome ClbClient::InquiryPriceRefundLoadBalancer(const InquiryPriceRefundLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRefundLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRefundLoadBalancerResponse rsp = InquiryPriceRefundLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRefundLoadBalancerOutcome(rsp);
        else
            return InquiryPriceRefundLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRefundLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceRefundLoadBalancerAsync(const InquiryPriceRefundLoadBalancerRequest& request, const InquiryPriceRefundLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRefundLoadBalancerRequest&;
    using Resp = InquiryPriceRefundLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRefundLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::InquiryPriceRefundLoadBalancerOutcomeCallable ClbClient::InquiryPriceRefundLoadBalancerCallable(const InquiryPriceRefundLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRefundLoadBalancerOutcome>>();
    InquiryPriceRefundLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const InquiryPriceRefundLoadBalancerRequest&,
        InquiryPriceRefundLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::InquiryPriceRenewLoadBalancerOutcome ClbClient::InquiryPriceRenewLoadBalancer(const InquiryPriceRenewLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceRenewLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceRenewLoadBalancerResponse rsp = InquiryPriceRenewLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceRenewLoadBalancerOutcome(rsp);
        else
            return InquiryPriceRenewLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceRenewLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::InquiryPriceRenewLoadBalancerAsync(const InquiryPriceRenewLoadBalancerRequest& request, const InquiryPriceRenewLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquiryPriceRenewLoadBalancerRequest&;
    using Resp = InquiryPriceRenewLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceRenewLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::InquiryPriceRenewLoadBalancerOutcomeCallable ClbClient::InquiryPriceRenewLoadBalancerCallable(const InquiryPriceRenewLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceRenewLoadBalancerOutcome>>();
    InquiryPriceRenewLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const InquiryPriceRenewLoadBalancerRequest&,
        InquiryPriceRenewLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ManualRewriteOutcome ClbClient::ManualRewrite(const ManualRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "ManualRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManualRewriteResponse rsp = ManualRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManualRewriteOutcome(rsp);
        else
            return ManualRewriteOutcome(o.GetError());
    }
    else
    {
        return ManualRewriteOutcome(outcome.GetError());
    }
}

void ClbClient::ManualRewriteAsync(const ManualRewriteRequest& request, const ManualRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ManualRewriteRequest&;
    using Resp = ManualRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "ManualRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ManualRewriteOutcomeCallable ClbClient::ManualRewriteCallable(const ManualRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManualRewriteOutcome>>();
    ManualRewriteAsync(
    request,
    [prom](
        const ClbClient*,
        const ManualRewriteRequest&,
        ManualRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::MigrateClassicalLoadBalancersOutcome ClbClient::MigrateClassicalLoadBalancers(const MigrateClassicalLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateClassicalLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateClassicalLoadBalancersResponse rsp = MigrateClassicalLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateClassicalLoadBalancersOutcome(rsp);
        else
            return MigrateClassicalLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return MigrateClassicalLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::MigrateClassicalLoadBalancersAsync(const MigrateClassicalLoadBalancersRequest& request, const MigrateClassicalLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateClassicalLoadBalancersRequest&;
    using Resp = MigrateClassicalLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateClassicalLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::MigrateClassicalLoadBalancersOutcomeCallable ClbClient::MigrateClassicalLoadBalancersCallable(const MigrateClassicalLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateClassicalLoadBalancersOutcome>>();
    MigrateClassicalLoadBalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const MigrateClassicalLoadBalancersRequest&,
        MigrateClassicalLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyBlockIPListOutcome ClbClient::ModifyBlockIPList(const ModifyBlockIPListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBlockIPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBlockIPListResponse rsp = ModifyBlockIPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBlockIPListOutcome(rsp);
        else
            return ModifyBlockIPListOutcome(o.GetError());
    }
    else
    {
        return ModifyBlockIPListOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyBlockIPListAsync(const ModifyBlockIPListRequest& request, const ModifyBlockIPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBlockIPListRequest&;
    using Resp = ModifyBlockIPListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBlockIPList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyBlockIPListOutcomeCallable ClbClient::ModifyBlockIPListCallable(const ModifyBlockIPListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBlockIPListOutcome>>();
    ModifyBlockIPListAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyBlockIPListRequest&,
        ModifyBlockIPListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyDomainOutcome ClbClient::ModifyDomain(const ModifyDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainResponse rsp = ModifyDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOutcome(rsp);
        else
            return ModifyDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyDomainAsync(const ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainRequest&;
    using Resp = ModifyDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyDomainOutcomeCallable ClbClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOutcome>>();
    ModifyDomainAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyDomainRequest&,
        ModifyDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyDomainAttributesOutcome ClbClient::ModifyDomainAttributes(const ModifyDomainAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainAttributesResponse rsp = ModifyDomainAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainAttributesOutcome(rsp);
        else
            return ModifyDomainAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainAttributesOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyDomainAttributesAsync(const ModifyDomainAttributesRequest& request, const ModifyDomainAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainAttributesRequest&;
    using Resp = ModifyDomainAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyDomainAttributesOutcomeCallable ClbClient::ModifyDomainAttributesCallable(const ModifyDomainAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainAttributesOutcome>>();
    ModifyDomainAttributesAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyDomainAttributesRequest&,
        ModifyDomainAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyFunctionTargetsOutcome ClbClient::ModifyFunctionTargets(const ModifyFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFunctionTargetsResponse rsp = ModifyFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFunctionTargetsOutcome(rsp);
        else
            return ModifyFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return ModifyFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyFunctionTargetsAsync(const ModifyFunctionTargetsRequest& request, const ModifyFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFunctionTargetsRequest&;
    using Resp = ModifyFunctionTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFunctionTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyFunctionTargetsOutcomeCallable ClbClient::ModifyFunctionTargetsCallable(const ModifyFunctionTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFunctionTargetsOutcome>>();
    ModifyFunctionTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyFunctionTargetsRequest&,
        ModifyFunctionTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyListenerOutcome ClbClient::ModifyListener(const ModifyListenerRequest &request)
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

void ClbClient::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::ModifyListenerOutcomeCallable ClbClient::ModifyListenerCallable(const ModifyListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyListenerOutcome>>();
    ModifyListenerAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyListenerRequest&,
        ModifyListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyLoadBalancerAttributesOutcome ClbClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
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

void ClbClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::ModifyLoadBalancerAttributesOutcomeCallable ClbClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerAttributesOutcome>>();
    ModifyLoadBalancerAttributesAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyLoadBalancerAttributesRequest&,
        ModifyLoadBalancerAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyLoadBalancerMixIpTargetOutcome ClbClient::ModifyLoadBalancerMixIpTarget(const ModifyLoadBalancerMixIpTargetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerMixIpTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerMixIpTargetResponse rsp = ModifyLoadBalancerMixIpTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerMixIpTargetOutcome(rsp);
        else
            return ModifyLoadBalancerMixIpTargetOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerMixIpTargetOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancerMixIpTargetAsync(const ModifyLoadBalancerMixIpTargetRequest& request, const ModifyLoadBalancerMixIpTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerMixIpTargetRequest&;
    using Resp = ModifyLoadBalancerMixIpTargetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerMixIpTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyLoadBalancerMixIpTargetOutcomeCallable ClbClient::ModifyLoadBalancerMixIpTargetCallable(const ModifyLoadBalancerMixIpTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerMixIpTargetOutcome>>();
    ModifyLoadBalancerMixIpTargetAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyLoadBalancerMixIpTargetRequest&,
        ModifyLoadBalancerMixIpTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyLoadBalancerSlaOutcome ClbClient::ModifyLoadBalancerSla(const ModifyLoadBalancerSlaRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerSla");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerSlaResponse rsp = ModifyLoadBalancerSlaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerSlaOutcome(rsp);
        else
            return ModifyLoadBalancerSlaOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerSlaOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancerSlaAsync(const ModifyLoadBalancerSlaRequest& request, const ModifyLoadBalancerSlaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancerSlaRequest&;
    using Resp = ModifyLoadBalancerSlaResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancerSla", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyLoadBalancerSlaOutcomeCallable ClbClient::ModifyLoadBalancerSlaCallable(const ModifyLoadBalancerSlaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerSlaOutcome>>();
    ModifyLoadBalancerSlaAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyLoadBalancerSlaRequest&,
        ModifyLoadBalancerSlaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyLoadBalancersProjectOutcome ClbClient::ModifyLoadBalancersProject(const ModifyLoadBalancersProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancersProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancersProjectResponse rsp = ModifyLoadBalancersProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancersProjectOutcome(rsp);
        else
            return ModifyLoadBalancersProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancersProjectOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyLoadBalancersProjectAsync(const ModifyLoadBalancersProjectRequest& request, const ModifyLoadBalancersProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoadBalancersProjectRequest&;
    using Resp = ModifyLoadBalancersProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancersProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyLoadBalancersProjectOutcomeCallable ClbClient::ModifyLoadBalancersProjectCallable(const ModifyLoadBalancersProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancersProjectOutcome>>();
    ModifyLoadBalancersProjectAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyLoadBalancersProjectRequest&,
        ModifyLoadBalancersProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyRuleOutcome ClbClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleRequest&;
    using Resp = ModifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyRuleOutcomeCallable ClbClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleOutcome>>();
    ModifyRuleAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyRuleRequest&,
        ModifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyTargetGroupAttributeOutcome ClbClient::ModifyTargetGroupAttribute(const ModifyTargetGroupAttributeRequest &request)
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

void ClbClient::ModifyTargetGroupAttributeAsync(const ModifyTargetGroupAttributeRequest& request, const ModifyTargetGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::ModifyTargetGroupAttributeOutcomeCallable ClbClient::ModifyTargetGroupAttributeCallable(const ModifyTargetGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupAttributeOutcome>>();
    ModifyTargetGroupAttributeAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyTargetGroupAttributeRequest&,
        ModifyTargetGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyTargetGroupInstancesPortOutcome ClbClient::ModifyTargetGroupInstancesPort(const ModifyTargetGroupInstancesPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetGroupInstancesPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetGroupInstancesPortResponse rsp = ModifyTargetGroupInstancesPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetGroupInstancesPortOutcome(rsp);
        else
            return ModifyTargetGroupInstancesPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetGroupInstancesPortOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetGroupInstancesPortAsync(const ModifyTargetGroupInstancesPortRequest& request, const ModifyTargetGroupInstancesPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetGroupInstancesPortRequest&;
    using Resp = ModifyTargetGroupInstancesPortResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetGroupInstancesPort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyTargetGroupInstancesPortOutcomeCallable ClbClient::ModifyTargetGroupInstancesPortCallable(const ModifyTargetGroupInstancesPortRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupInstancesPortOutcome>>();
    ModifyTargetGroupInstancesPortAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyTargetGroupInstancesPortRequest&,
        ModifyTargetGroupInstancesPortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyTargetGroupInstancesWeightOutcome ClbClient::ModifyTargetGroupInstancesWeight(const ModifyTargetGroupInstancesWeightRequest &request)
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

void ClbClient::ModifyTargetGroupInstancesWeightAsync(const ModifyTargetGroupInstancesWeightRequest& request, const ModifyTargetGroupInstancesWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::ModifyTargetGroupInstancesWeightOutcomeCallable ClbClient::ModifyTargetGroupInstancesWeightCallable(const ModifyTargetGroupInstancesWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetGroupInstancesWeightOutcome>>();
    ModifyTargetGroupInstancesWeightAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyTargetGroupInstancesWeightRequest&,
        ModifyTargetGroupInstancesWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyTargetPortOutcome ClbClient::ModifyTargetPort(const ModifyTargetPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetPortResponse rsp = ModifyTargetPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetPortOutcome(rsp);
        else
            return ModifyTargetPortOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetPortOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetPortAsync(const ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetPortRequest&;
    using Resp = ModifyTargetPortResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetPort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyTargetPortOutcomeCallable ClbClient::ModifyTargetPortCallable(const ModifyTargetPortRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetPortOutcome>>();
    ModifyTargetPortAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyTargetPortRequest&,
        ModifyTargetPortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ModifyTargetWeightOutcome ClbClient::ModifyTargetWeight(const ModifyTargetWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTargetWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTargetWeightResponse rsp = ModifyTargetWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTargetWeightOutcome(rsp);
        else
            return ModifyTargetWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyTargetWeightOutcome(outcome.GetError());
    }
}

void ClbClient::ModifyTargetWeightAsync(const ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTargetWeightRequest&;
    using Resp = ModifyTargetWeightResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTargetWeight", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ModifyTargetWeightOutcomeCallable ClbClient::ModifyTargetWeightCallable(const ModifyTargetWeightRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTargetWeightOutcome>>();
    ModifyTargetWeightAsync(
    request,
    [prom](
        const ClbClient*,
        const ModifyTargetWeightRequest&,
        ModifyTargetWeightOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::RegisterFunctionTargetsOutcome ClbClient::RegisterFunctionTargets(const RegisterFunctionTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterFunctionTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterFunctionTargetsResponse rsp = RegisterFunctionTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterFunctionTargetsOutcome(rsp);
        else
            return RegisterFunctionTargetsOutcome(o.GetError());
    }
    else
    {
        return RegisterFunctionTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterFunctionTargetsAsync(const RegisterFunctionTargetsRequest& request, const RegisterFunctionTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterFunctionTargetsRequest&;
    using Resp = RegisterFunctionTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterFunctionTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::RegisterFunctionTargetsOutcomeCallable ClbClient::RegisterFunctionTargetsCallable(const RegisterFunctionTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterFunctionTargetsOutcome>>();
    RegisterFunctionTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const RegisterFunctionTargetsRequest&,
        RegisterFunctionTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::RegisterTargetGroupInstancesOutcome ClbClient::RegisterTargetGroupInstances(const RegisterTargetGroupInstancesRequest &request)
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

void ClbClient::RegisterTargetGroupInstancesAsync(const RegisterTargetGroupInstancesRequest& request, const RegisterTargetGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::RegisterTargetGroupInstancesOutcomeCallable ClbClient::RegisterTargetGroupInstancesCallable(const RegisterTargetGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterTargetGroupInstancesOutcome>>();
    RegisterTargetGroupInstancesAsync(
    request,
    [prom](
        const ClbClient*,
        const RegisterTargetGroupInstancesRequest&,
        RegisterTargetGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::RegisterTargetsOutcome ClbClient::RegisterTargets(const RegisterTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetsResponse rsp = RegisterTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetsOutcome(rsp);
        else
            return RegisterTargetsOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetsOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterTargetsAsync(const RegisterTargetsRequest& request, const RegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterTargetsRequest&;
    using Resp = RegisterTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::RegisterTargetsOutcomeCallable ClbClient::RegisterTargetsCallable(const RegisterTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterTargetsOutcome>>();
    RegisterTargetsAsync(
    request,
    [prom](
        const ClbClient*,
        const RegisterTargetsRequest&,
        RegisterTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::RegisterTargetsWithClassicalLBOutcome ClbClient::RegisterTargetsWithClassicalLB(const RegisterTargetsWithClassicalLBRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterTargetsWithClassicalLB");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterTargetsWithClassicalLBResponse rsp = RegisterTargetsWithClassicalLBResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterTargetsWithClassicalLBOutcome(rsp);
        else
            return RegisterTargetsWithClassicalLBOutcome(o.GetError());
    }
    else
    {
        return RegisterTargetsWithClassicalLBOutcome(outcome.GetError());
    }
}

void ClbClient::RegisterTargetsWithClassicalLBAsync(const RegisterTargetsWithClassicalLBRequest& request, const RegisterTargetsWithClassicalLBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterTargetsWithClassicalLBRequest&;
    using Resp = RegisterTargetsWithClassicalLBResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterTargetsWithClassicalLB", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::RegisterTargetsWithClassicalLBOutcomeCallable ClbClient::RegisterTargetsWithClassicalLBCallable(const RegisterTargetsWithClassicalLBRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterTargetsWithClassicalLBOutcome>>();
    RegisterTargetsWithClassicalLBAsync(
    request,
    [prom](
        const ClbClient*,
        const RegisterTargetsWithClassicalLBRequest&,
        RegisterTargetsWithClassicalLBOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::ReplaceCertForLoadBalancersOutcome ClbClient::ReplaceCertForLoadBalancers(const ReplaceCertForLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCertForLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertForLoadBalancersResponse rsp = ReplaceCertForLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertForLoadBalancersOutcome(rsp);
        else
            return ReplaceCertForLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertForLoadBalancersOutcome(outcome.GetError());
    }
}

void ClbClient::ReplaceCertForLoadBalancersAsync(const ReplaceCertForLoadBalancersRequest& request, const ReplaceCertForLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReplaceCertForLoadBalancersRequest&;
    using Resp = ReplaceCertForLoadBalancersResponse;

    DoRequestAsync<Req, Resp>(
        "ReplaceCertForLoadBalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::ReplaceCertForLoadBalancersOutcomeCallable ClbClient::ReplaceCertForLoadBalancersCallable(const ReplaceCertForLoadBalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReplaceCertForLoadBalancersOutcome>>();
    ReplaceCertForLoadBalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const ReplaceCertForLoadBalancersRequest&,
        ReplaceCertForLoadBalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcome ClbClient::SetCustomizedConfigForLoadBalancer(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "SetCustomizedConfigForLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCustomizedConfigForLoadBalancerResponse rsp = SetCustomizedConfigForLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCustomizedConfigForLoadBalancerOutcome(rsp);
        else
            return SetCustomizedConfigForLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return SetCustomizedConfigForLoadBalancerOutcome(outcome.GetError());
    }
}

void ClbClient::SetCustomizedConfigForLoadBalancerAsync(const SetCustomizedConfigForLoadBalancerRequest& request, const SetCustomizedConfigForLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetCustomizedConfigForLoadBalancerRequest&;
    using Resp = SetCustomizedConfigForLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "SetCustomizedConfigForLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::SetCustomizedConfigForLoadBalancerOutcomeCallable ClbClient::SetCustomizedConfigForLoadBalancerCallable(const SetCustomizedConfigForLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCustomizedConfigForLoadBalancerOutcome>>();
    SetCustomizedConfigForLoadBalancerAsync(
    request,
    [prom](
        const ClbClient*,
        const SetCustomizedConfigForLoadBalancerRequest&,
        SetCustomizedConfigForLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetLoadBalancerClsLogOutcome ClbClient::SetLoadBalancerClsLog(const SetLoadBalancerClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerClsLogResponse rsp = SetLoadBalancerClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerClsLogOutcome(rsp);
        else
            return SetLoadBalancerClsLogOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerClsLogOutcome(outcome.GetError());
    }
}

void ClbClient::SetLoadBalancerClsLogAsync(const SetLoadBalancerClsLogRequest& request, const SetLoadBalancerClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLoadBalancerClsLogRequest&;
    using Resp = SetLoadBalancerClsLogResponse;

    DoRequestAsync<Req, Resp>(
        "SetLoadBalancerClsLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::SetLoadBalancerClsLogOutcomeCallable ClbClient::SetLoadBalancerClsLogCallable(const SetLoadBalancerClsLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLoadBalancerClsLogOutcome>>();
    SetLoadBalancerClsLogAsync(
    request,
    [prom](
        const ClbClient*,
        const SetLoadBalancerClsLogRequest&,
        SetLoadBalancerClsLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetLoadBalancerSecurityGroupsOutcome ClbClient::SetLoadBalancerSecurityGroups(const SetLoadBalancerSecurityGroupsRequest &request)
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

void ClbClient::SetLoadBalancerSecurityGroupsAsync(const SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

ClbClient::SetLoadBalancerSecurityGroupsOutcomeCallable ClbClient::SetLoadBalancerSecurityGroupsCallable(const SetLoadBalancerSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLoadBalancerSecurityGroupsOutcome>>();
    SetLoadBalancerSecurityGroupsAsync(
    request,
    [prom](
        const ClbClient*,
        const SetLoadBalancerSecurityGroupsRequest&,
        SetLoadBalancerSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetLoadBalancerStartStatusOutcome ClbClient::SetLoadBalancerStartStatus(const SetLoadBalancerStartStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetLoadBalancerStartStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLoadBalancerStartStatusResponse rsp = SetLoadBalancerStartStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLoadBalancerStartStatusOutcome(rsp);
        else
            return SetLoadBalancerStartStatusOutcome(o.GetError());
    }
    else
    {
        return SetLoadBalancerStartStatusOutcome(outcome.GetError());
    }
}

void ClbClient::SetLoadBalancerStartStatusAsync(const SetLoadBalancerStartStatusRequest& request, const SetLoadBalancerStartStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLoadBalancerStartStatusRequest&;
    using Resp = SetLoadBalancerStartStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetLoadBalancerStartStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::SetLoadBalancerStartStatusOutcomeCallable ClbClient::SetLoadBalancerStartStatusCallable(const SetLoadBalancerStartStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLoadBalancerStartStatusOutcome>>();
    SetLoadBalancerStartStatusAsync(
    request,
    [prom](
        const ClbClient*,
        const SetLoadBalancerStartStatusRequest&,
        SetLoadBalancerStartStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClbClient::SetSecurityGroupForLoadbalancersOutcome ClbClient::SetSecurityGroupForLoadbalancers(const SetSecurityGroupForLoadbalancersRequest &request)
{
    auto outcome = MakeRequest(request, "SetSecurityGroupForLoadbalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetSecurityGroupForLoadbalancersResponse rsp = SetSecurityGroupForLoadbalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetSecurityGroupForLoadbalancersOutcome(rsp);
        else
            return SetSecurityGroupForLoadbalancersOutcome(o.GetError());
    }
    else
    {
        return SetSecurityGroupForLoadbalancersOutcome(outcome.GetError());
    }
}

void ClbClient::SetSecurityGroupForLoadbalancersAsync(const SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetSecurityGroupForLoadbalancersRequest&;
    using Resp = SetSecurityGroupForLoadbalancersResponse;

    DoRequestAsync<Req, Resp>(
        "SetSecurityGroupForLoadbalancers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClbClient::SetSecurityGroupForLoadbalancersOutcomeCallable ClbClient::SetSecurityGroupForLoadbalancersCallable(const SetSecurityGroupForLoadbalancersRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetSecurityGroupForLoadbalancersOutcome>>();
    SetSecurityGroupForLoadbalancersAsync(
    request,
    [prom](
        const ClbClient*,
        const SetSecurityGroupForLoadbalancersRequest&,
        SetSecurityGroupForLoadbalancersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

