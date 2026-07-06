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

#include <tencentcloud/fwm/v20250611/FwmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Fwm::V20250611;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-06-11";
    const string ENDPOINT = "fwm.tencentcloudapi.com";
}

FwmClient::FwmClient(const Credential &credential, const string &region) :
    FwmClient(credential, region, ClientProfile())
{
}

FwmClient::FwmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FwmClient::CancelIgnorePolicyRiskOutcome FwmClient::CancelIgnorePolicyRisk(const CancelIgnorePolicyRiskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelIgnorePolicyRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelIgnorePolicyRiskResponse rsp = CancelIgnorePolicyRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelIgnorePolicyRiskOutcome(rsp);
        else
            return CancelIgnorePolicyRiskOutcome(o.GetError());
    }
    else
    {
        return CancelIgnorePolicyRiskOutcome(outcome.GetError());
    }
}

void FwmClient::CancelIgnorePolicyRiskAsync(const CancelIgnorePolicyRiskRequest& request, const CancelIgnorePolicyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelIgnorePolicyRiskRequest&;
    using Resp = CancelIgnorePolicyRiskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelIgnorePolicyRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CancelIgnorePolicyRiskOutcomeCallable FwmClient::CancelIgnorePolicyRiskCallable(const CancelIgnorePolicyRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelIgnorePolicyRiskOutcome>>();
    CancelIgnorePolicyRiskAsync(
    request,
    [prom](
        const FwmClient*,
        const CancelIgnorePolicyRiskRequest&,
        CancelIgnorePolicyRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateAnalyzePolicyTaskOutcome FwmClient::CreateAnalyzePolicyTask(const CreateAnalyzePolicyTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnalyzePolicyTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnalyzePolicyTaskResponse rsp = CreateAnalyzePolicyTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnalyzePolicyTaskOutcome(rsp);
        else
            return CreateAnalyzePolicyTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAnalyzePolicyTaskOutcome(outcome.GetError());
    }
}

void FwmClient::CreateAnalyzePolicyTaskAsync(const CreateAnalyzePolicyTaskRequest& request, const CreateAnalyzePolicyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAnalyzePolicyTaskRequest&;
    using Resp = CreateAnalyzePolicyTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAnalyzePolicyTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateAnalyzePolicyTaskOutcomeCallable FwmClient::CreateAnalyzePolicyTaskCallable(const CreateAnalyzePolicyTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAnalyzePolicyTaskOutcome>>();
    CreateAnalyzePolicyTaskAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateAnalyzePolicyTaskRequest&,
        CreateAnalyzePolicyTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateEdgeAclRuleOutcome FwmClient::CreateEdgeAclRule(const CreateEdgeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeAclRuleResponse rsp = CreateEdgeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeAclRuleOutcome(rsp);
        else
            return CreateEdgeAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::CreateEdgeAclRuleAsync(const CreateEdgeAclRuleRequest& request, const CreateEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEdgeAclRuleRequest&;
    using Resp = CreateEdgeAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEdgeAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateEdgeAclRuleOutcomeCallable FwmClient::CreateEdgeAclRuleCallable(const CreateEdgeAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEdgeAclRuleOutcome>>();
    CreateEdgeAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateEdgeAclRuleRequest&,
        CreateEdgeAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateEdgeAclRuleGroupOutcome FwmClient::CreateEdgeAclRuleGroup(const CreateEdgeAclRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeAclRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeAclRuleGroupResponse rsp = CreateEdgeAclRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeAclRuleGroupOutcome(rsp);
        else
            return CreateEdgeAclRuleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeAclRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::CreateEdgeAclRuleGroupAsync(const CreateEdgeAclRuleGroupRequest& request, const CreateEdgeAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEdgeAclRuleGroupRequest&;
    using Resp = CreateEdgeAclRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEdgeAclRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateEdgeAclRuleGroupOutcomeCallable FwmClient::CreateEdgeAclRuleGroupCallable(const CreateEdgeAclRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEdgeAclRuleGroupOutcome>>();
    CreateEdgeAclRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateEdgeAclRuleGroupRequest&,
        CreateEdgeAclRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateNatAclRuleOutcome FwmClient::CreateNatAclRule(const CreateNatAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatAclRuleResponse rsp = CreateNatAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatAclRuleOutcome(rsp);
        else
            return CreateNatAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateNatAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::CreateNatAclRuleAsync(const CreateNatAclRuleRequest& request, const CreateNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatAclRuleRequest&;
    using Resp = CreateNatAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateNatAclRuleOutcomeCallable FwmClient::CreateNatAclRuleCallable(const CreateNatAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatAclRuleOutcome>>();
    CreateNatAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateNatAclRuleRequest&,
        CreateNatAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateNatAclRuleGroupOutcome FwmClient::CreateNatAclRuleGroup(const CreateNatAclRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNatAclRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNatAclRuleGroupResponse rsp = CreateNatAclRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNatAclRuleGroupOutcome(rsp);
        else
            return CreateNatAclRuleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateNatAclRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::CreateNatAclRuleGroupAsync(const CreateNatAclRuleGroupRequest& request, const CreateNatAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNatAclRuleGroupRequest&;
    using Resp = CreateNatAclRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNatAclRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateNatAclRuleGroupOutcomeCallable FwmClient::CreateNatAclRuleGroupCallable(const CreateNatAclRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNatAclRuleGroupOutcome>>();
    CreateNatAclRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateNatAclRuleGroupRequest&,
        CreateNatAclRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateSecurityGroupRuleOutcome FwmClient::CreateSecurityGroupRule(const CreateSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupRuleResponse rsp = CreateSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupRuleOutcome(rsp);
        else
            return CreateSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void FwmClient::CreateSecurityGroupRuleAsync(const CreateSecurityGroupRuleRequest& request, const CreateSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRuleRequest&;
    using Resp = CreateSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateSecurityGroupRuleOutcomeCallable FwmClient::CreateSecurityGroupRuleCallable(const CreateSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupRuleOutcome>>();
    CreateSecurityGroupRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateSecurityGroupRuleRequest&,
        CreateSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateSecurityGroupRuleGroupOutcome FwmClient::CreateSecurityGroupRuleGroup(const CreateSecurityGroupRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityGroupRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityGroupRuleGroupResponse rsp = CreateSecurityGroupRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityGroupRuleGroupOutcome(rsp);
        else
            return CreateSecurityGroupRuleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityGroupRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::CreateSecurityGroupRuleGroupAsync(const CreateSecurityGroupRuleGroupRequest& request, const CreateSecurityGroupRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityGroupRuleGroupRequest&;
    using Resp = CreateSecurityGroupRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityGroupRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateSecurityGroupRuleGroupOutcomeCallable FwmClient::CreateSecurityGroupRuleGroupCallable(const CreateSecurityGroupRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityGroupRuleGroupOutcome>>();
    CreateSecurityGroupRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateSecurityGroupRuleGroupRequest&,
        CreateSecurityGroupRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateStrategyOutcome FwmClient::CreateStrategy(const CreateStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStrategyResponse rsp = CreateStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStrategyOutcome(rsp);
        else
            return CreateStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateStrategyOutcome(outcome.GetError());
    }
}

void FwmClient::CreateStrategyAsync(const CreateStrategyRequest& request, const CreateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStrategyRequest&;
    using Resp = CreateStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateStrategyOutcomeCallable FwmClient::CreateStrategyCallable(const CreateStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStrategyOutcome>>();
    CreateStrategyAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateStrategyRequest&,
        CreateStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateVpcAclRuleOutcome FwmClient::CreateVpcAclRule(const CreateVpcAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcAclRuleResponse rsp = CreateVpcAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcAclRuleOutcome(rsp);
        else
            return CreateVpcAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateVpcAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::CreateVpcAclRuleAsync(const CreateVpcAclRuleRequest& request, const CreateVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcAclRuleRequest&;
    using Resp = CreateVpcAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateVpcAclRuleOutcomeCallable FwmClient::CreateVpcAclRuleCallable(const CreateVpcAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcAclRuleOutcome>>();
    CreateVpcAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateVpcAclRuleRequest&,
        CreateVpcAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::CreateVpcAclRuleGroupOutcome FwmClient::CreateVpcAclRuleGroup(const CreateVpcAclRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVpcAclRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVpcAclRuleGroupResponse rsp = CreateVpcAclRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVpcAclRuleGroupOutcome(rsp);
        else
            return CreateVpcAclRuleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateVpcAclRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::CreateVpcAclRuleGroupAsync(const CreateVpcAclRuleGroupRequest& request, const CreateVpcAclRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVpcAclRuleGroupRequest&;
    using Resp = CreateVpcAclRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVpcAclRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::CreateVpcAclRuleGroupOutcomeCallable FwmClient::CreateVpcAclRuleGroupCallable(const CreateVpcAclRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVpcAclRuleGroupOutcome>>();
    CreateVpcAclRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const CreateVpcAclRuleGroupRequest&,
        CreateVpcAclRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteEdgeAclRuleOutcome FwmClient::DeleteEdgeAclRule(const DeleteEdgeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEdgeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEdgeAclRuleResponse rsp = DeleteEdgeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEdgeAclRuleOutcome(rsp);
        else
            return DeleteEdgeAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteEdgeAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteEdgeAclRuleAsync(const DeleteEdgeAclRuleRequest& request, const DeleteEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEdgeAclRuleRequest&;
    using Resp = DeleteEdgeAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEdgeAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteEdgeAclRuleOutcomeCallable FwmClient::DeleteEdgeAclRuleCallable(const DeleteEdgeAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEdgeAclRuleOutcome>>();
    DeleteEdgeAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteEdgeAclRuleRequest&,
        DeleteEdgeAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteNatAclRuleOutcome FwmClient::DeleteNatAclRule(const DeleteNatAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNatAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNatAclRuleResponse rsp = DeleteNatAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNatAclRuleOutcome(rsp);
        else
            return DeleteNatAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteNatAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteNatAclRuleAsync(const DeleteNatAclRuleRequest& request, const DeleteNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNatAclRuleRequest&;
    using Resp = DeleteNatAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNatAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteNatAclRuleOutcomeCallable FwmClient::DeleteNatAclRuleCallable(const DeleteNatAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNatAclRuleOutcome>>();
    DeleteNatAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteNatAclRuleRequest&,
        DeleteNatAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteRuleGroupOutcome FwmClient::DeleteRuleGroup(const DeleteRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleGroupResponse rsp = DeleteRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleGroupOutcome(rsp);
        else
            return DeleteRuleGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleGroupRequest&;
    using Resp = DeleteRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteRuleGroupOutcomeCallable FwmClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleGroupOutcome>>();
    DeleteRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteRuleGroupRequest&,
        DeleteRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteSecurityGroupRuleOutcome FwmClient::DeleteSecurityGroupRule(const DeleteSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityGroupRuleResponse rsp = DeleteSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityGroupRuleOutcome(rsp);
        else
            return DeleteSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteSecurityGroupRuleAsync(const DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityGroupRuleRequest&;
    using Resp = DeleteSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteSecurityGroupRuleOutcomeCallable FwmClient::DeleteSecurityGroupRuleCallable(const DeleteSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityGroupRuleOutcome>>();
    DeleteSecurityGroupRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteSecurityGroupRuleRequest&,
        DeleteSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteStrategyOutcome FwmClient::DeleteStrategy(const DeleteStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStrategyResponse rsp = DeleteStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStrategyOutcome(rsp);
        else
            return DeleteStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteStrategyOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteStrategyRequest&;
    using Resp = DeleteStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteStrategyOutcomeCallable FwmClient::DeleteStrategyCallable(const DeleteStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStrategyOutcome>>();
    DeleteStrategyAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteStrategyRequest&,
        DeleteStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DeleteVpcAclRuleOutcome FwmClient::DeleteVpcAclRule(const DeleteVpcAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVpcAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVpcAclRuleResponse rsp = DeleteVpcAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVpcAclRuleOutcome(rsp);
        else
            return DeleteVpcAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteVpcAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::DeleteVpcAclRuleAsync(const DeleteVpcAclRuleRequest& request, const DeleteVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVpcAclRuleRequest&;
    using Resp = DeleteVpcAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVpcAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DeleteVpcAclRuleOutcomeCallable FwmClient::DeleteVpcAclRuleCallable(const DeleteVpcAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVpcAclRuleOutcome>>();
    DeleteVpcAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const DeleteVpcAclRuleRequest&,
        DeleteVpcAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeEdgeAclRulesOutcome FwmClient::DescribeEdgeAclRules(const DescribeEdgeAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeAclRulesResponse rsp = DescribeEdgeAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeAclRulesOutcome(rsp);
        else
            return DescribeEdgeAclRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeAclRulesOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeEdgeAclRulesAsync(const DescribeEdgeAclRulesRequest& request, const DescribeEdgeAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeAclRulesRequest&;
    using Resp = DescribeEdgeAclRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeAclRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeEdgeAclRulesOutcomeCallable FwmClient::DescribeEdgeAclRulesCallable(const DescribeEdgeAclRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeAclRulesOutcome>>();
    DescribeEdgeAclRulesAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeEdgeAclRulesRequest&,
        DescribeEdgeAclRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeNatAclRulesOutcome FwmClient::DescribeNatAclRules(const DescribeNatAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNatAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNatAclRulesResponse rsp = DescribeNatAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNatAclRulesOutcome(rsp);
        else
            return DescribeNatAclRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNatAclRulesOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeNatAclRulesAsync(const DescribeNatAclRulesRequest& request, const DescribeNatAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNatAclRulesRequest&;
    using Resp = DescribeNatAclRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNatAclRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeNatAclRulesOutcomeCallable FwmClient::DescribeNatAclRulesCallable(const DescribeNatAclRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNatAclRulesOutcome>>();
    DescribeNatAclRulesAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeNatAclRulesRequest&,
        DescribeNatAclRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeOrganMembersOutcome FwmClient::DescribeOrganMembers(const DescribeOrganMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganMembersResponse rsp = DescribeOrganMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganMembersOutcome(rsp);
        else
            return DescribeOrganMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganMembersOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeOrganMembersAsync(const DescribeOrganMembersRequest& request, const DescribeOrganMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganMembersRequest&;
    using Resp = DescribeOrganMembersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganMembers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeOrganMembersOutcomeCallable FwmClient::DescribeOrganMembersCallable(const DescribeOrganMembersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganMembersOutcome>>();
    DescribeOrganMembersAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeOrganMembersRequest&,
        DescribeOrganMembersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeOrganSummaryOutcome FwmClient::DescribeOrganSummary(const DescribeOrganSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganSummaryResponse rsp = DescribeOrganSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganSummaryOutcome(rsp);
        else
            return DescribeOrganSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganSummaryOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeOrganSummaryAsync(const DescribeOrganSummaryRequest& request, const DescribeOrganSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganSummaryRequest&;
    using Resp = DescribeOrganSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeOrganSummaryOutcomeCallable FwmClient::DescribeOrganSummaryCallable(const DescribeOrganSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganSummaryOutcome>>();
    DescribeOrganSummaryAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeOrganSummaryRequest&,
        DescribeOrganSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribePolicyRiskAccountProductStatsOutcome FwmClient::DescribePolicyRiskAccountProductStats(const DescribePolicyRiskAccountProductStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyRiskAccountProductStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyRiskAccountProductStatsResponse rsp = DescribePolicyRiskAccountProductStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyRiskAccountProductStatsOutcome(rsp);
        else
            return DescribePolicyRiskAccountProductStatsOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyRiskAccountProductStatsOutcome(outcome.GetError());
    }
}

void FwmClient::DescribePolicyRiskAccountProductStatsAsync(const DescribePolicyRiskAccountProductStatsRequest& request, const DescribePolicyRiskAccountProductStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyRiskAccountProductStatsRequest&;
    using Resp = DescribePolicyRiskAccountProductStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyRiskAccountProductStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribePolicyRiskAccountProductStatsOutcomeCallable FwmClient::DescribePolicyRiskAccountProductStatsCallable(const DescribePolicyRiskAccountProductStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyRiskAccountProductStatsOutcome>>();
    DescribePolicyRiskAccountProductStatsAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribePolicyRiskAccountProductStatsRequest&,
        DescribePolicyRiskAccountProductStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeRiskAnalysisDetailsOutcome FwmClient::DescribeRiskAnalysisDetails(const DescribeRiskAnalysisDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskAnalysisDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskAnalysisDetailsResponse rsp = DescribeRiskAnalysisDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskAnalysisDetailsOutcome(rsp);
        else
            return DescribeRiskAnalysisDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskAnalysisDetailsOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeRiskAnalysisDetailsAsync(const DescribeRiskAnalysisDetailsRequest& request, const DescribeRiskAnalysisDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskAnalysisDetailsRequest&;
    using Resp = DescribeRiskAnalysisDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskAnalysisDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeRiskAnalysisDetailsOutcomeCallable FwmClient::DescribeRiskAnalysisDetailsCallable(const DescribeRiskAnalysisDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskAnalysisDetailsOutcome>>();
    DescribeRiskAnalysisDetailsAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeRiskAnalysisDetailsRequest&,
        DescribeRiskAnalysisDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeRiskCategoryStatsOutcome FwmClient::DescribeRiskCategoryStats(const DescribeRiskCategoryStatsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCategoryStats");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCategoryStatsResponse rsp = DescribeRiskCategoryStatsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCategoryStatsOutcome(rsp);
        else
            return DescribeRiskCategoryStatsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCategoryStatsOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeRiskCategoryStatsAsync(const DescribeRiskCategoryStatsRequest& request, const DescribeRiskCategoryStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCategoryStatsRequest&;
    using Resp = DescribeRiskCategoryStatsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCategoryStats", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeRiskCategoryStatsOutcomeCallable FwmClient::DescribeRiskCategoryStatsCallable(const DescribeRiskCategoryStatsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCategoryStatsOutcome>>();
    DescribeRiskCategoryStatsAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeRiskCategoryStatsRequest&,
        DescribeRiskCategoryStatsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeRiskListOutcome FwmClient::DescribeRiskList(const DescribeRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskListResponse rsp = DescribeRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskListOutcome(rsp);
        else
            return DescribeRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskListOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeRiskListAsync(const DescribeRiskListRequest& request, const DescribeRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskListRequest&;
    using Resp = DescribeRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeRiskListOutcomeCallable FwmClient::DescribeRiskListCallable(const DescribeRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskListOutcome>>();
    DescribeRiskListAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeRiskListRequest&,
        DescribeRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeSecurityGroupRuleOutcome FwmClient::DescribeSecurityGroupRule(const DescribeSecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupRuleResponse rsp = DescribeSecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupRuleOutcome(rsp);
        else
            return DescribeSecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupRuleOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeSecurityGroupRuleAsync(const DescribeSecurityGroupRuleRequest& request, const DescribeSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupRuleRequest&;
    using Resp = DescribeSecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeSecurityGroupRuleOutcomeCallable FwmClient::DescribeSecurityGroupRuleCallable(const DescribeSecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupRuleOutcome>>();
    DescribeSecurityGroupRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeSecurityGroupRuleRequest&,
        DescribeSecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeSecurityGroupRulesOutcome FwmClient::DescribeSecurityGroupRules(const DescribeSecurityGroupRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupRulesResponse rsp = DescribeSecurityGroupRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupRulesOutcome(rsp);
        else
            return DescribeSecurityGroupRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupRulesOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeSecurityGroupRulesAsync(const DescribeSecurityGroupRulesRequest& request, const DescribeSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupRulesRequest&;
    using Resp = DescribeSecurityGroupRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeSecurityGroupRulesOutcomeCallable FwmClient::DescribeSecurityGroupRulesCallable(const DescribeSecurityGroupRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupRulesOutcome>>();
    DescribeSecurityGroupRulesAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeSecurityGroupRulesRequest&,
        DescribeSecurityGroupRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeStrategiesOutcome FwmClient::DescribeStrategies(const DescribeStrategiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategiesResponse rsp = DescribeStrategiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategiesOutcome(rsp);
        else
            return DescribeStrategiesOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategiesOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeStrategiesAsync(const DescribeStrategiesRequest& request, const DescribeStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategiesRequest&;
    using Resp = DescribeStrategiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeStrategiesOutcomeCallable FwmClient::DescribeStrategiesCallable(const DescribeStrategiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategiesOutcome>>();
    DescribeStrategiesAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeStrategiesRequest&,
        DescribeStrategiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeStrategyOutcome FwmClient::DescribeStrategy(const DescribeStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyResponse rsp = DescribeStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyOutcome(rsp);
        else
            return DescribeStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeStrategyAsync(const DescribeStrategyRequest& request, const DescribeStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyRequest&;
    using Resp = DescribeStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeStrategyOutcomeCallable FwmClient::DescribeStrategyCallable(const DescribeStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyOutcome>>();
    DescribeStrategyAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeStrategyRequest&,
        DescribeStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeStrategyAccountsOutcome FwmClient::DescribeStrategyAccounts(const DescribeStrategyAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyAccountsResponse rsp = DescribeStrategyAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyAccountsOutcome(rsp);
        else
            return DescribeStrategyAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyAccountsOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeStrategyAccountsAsync(const DescribeStrategyAccountsRequest& request, const DescribeStrategyAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyAccountsRequest&;
    using Resp = DescribeStrategyAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategyAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeStrategyAccountsOutcomeCallable FwmClient::DescribeStrategyAccountsCallable(const DescribeStrategyAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyAccountsOutcome>>();
    DescribeStrategyAccountsAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeStrategyAccountsRequest&,
        DescribeStrategyAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeStrategyDispatchStatusOutcome FwmClient::DescribeStrategyDispatchStatus(const DescribeStrategyDispatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyDispatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyDispatchStatusResponse rsp = DescribeStrategyDispatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyDispatchStatusOutcome(rsp);
        else
            return DescribeStrategyDispatchStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyDispatchStatusOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeStrategyDispatchStatusAsync(const DescribeStrategyDispatchStatusRequest& request, const DescribeStrategyDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyDispatchStatusRequest&;
    using Resp = DescribeStrategyDispatchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategyDispatchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeStrategyDispatchStatusOutcomeCallable FwmClient::DescribeStrategyDispatchStatusCallable(const DescribeStrategyDispatchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyDispatchStatusOutcome>>();
    DescribeStrategyDispatchStatusAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeStrategyDispatchStatusRequest&,
        DescribeStrategyDispatchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DescribeVpcAclRulesOutcome FwmClient::DescribeVpcAclRules(const DescribeVpcAclRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAclRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAclRulesResponse rsp = DescribeVpcAclRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAclRulesOutcome(rsp);
        else
            return DescribeVpcAclRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAclRulesOutcome(outcome.GetError());
    }
}

void FwmClient::DescribeVpcAclRulesAsync(const DescribeVpcAclRulesRequest& request, const DescribeVpcAclRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcAclRulesRequest&;
    using Resp = DescribeVpcAclRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcAclRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DescribeVpcAclRulesOutcomeCallable FwmClient::DescribeVpcAclRulesCallable(const DescribeVpcAclRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcAclRulesOutcome>>();
    DescribeVpcAclRulesAsync(
    request,
    [prom](
        const FwmClient*,
        const DescribeVpcAclRulesRequest&,
        DescribeVpcAclRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::DispatchStrategyOutcome FwmClient::DispatchStrategy(const DispatchStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DispatchStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DispatchStrategyResponse rsp = DispatchStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DispatchStrategyOutcome(rsp);
        else
            return DispatchStrategyOutcome(o.GetError());
    }
    else
    {
        return DispatchStrategyOutcome(outcome.GetError());
    }
}

void FwmClient::DispatchStrategyAsync(const DispatchStrategyRequest& request, const DispatchStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DispatchStrategyRequest&;
    using Resp = DispatchStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DispatchStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::DispatchStrategyOutcomeCallable FwmClient::DispatchStrategyCallable(const DispatchStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DispatchStrategyOutcome>>();
    DispatchStrategyAsync(
    request,
    [prom](
        const FwmClient*,
        const DispatchStrategyRequest&,
        DispatchStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::IgnorePolicyRiskOutcome FwmClient::IgnorePolicyRisk(const IgnorePolicyRiskRequest &request)
{
    auto outcome = MakeRequest(request, "IgnorePolicyRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnorePolicyRiskResponse rsp = IgnorePolicyRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnorePolicyRiskOutcome(rsp);
        else
            return IgnorePolicyRiskOutcome(o.GetError());
    }
    else
    {
        return IgnorePolicyRiskOutcome(outcome.GetError());
    }
}

void FwmClient::IgnorePolicyRiskAsync(const IgnorePolicyRiskRequest& request, const IgnorePolicyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IgnorePolicyRiskRequest&;
    using Resp = IgnorePolicyRiskResponse;

    DoRequestAsync<Req, Resp>(
        "IgnorePolicyRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::IgnorePolicyRiskOutcomeCallable FwmClient::IgnorePolicyRiskCallable(const IgnorePolicyRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<IgnorePolicyRiskOutcome>>();
    IgnorePolicyRiskAsync(
    request,
    [prom](
        const FwmClient*,
        const IgnorePolicyRiskRequest&,
        IgnorePolicyRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyEdgeAclRuleOutcome FwmClient::ModifyEdgeAclRule(const ModifyEdgeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeAclRuleResponse rsp = ModifyEdgeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeAclRuleOutcome(rsp);
        else
            return ModifyEdgeAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyEdgeAclRuleAsync(const ModifyEdgeAclRuleRequest& request, const ModifyEdgeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEdgeAclRuleRequest&;
    using Resp = ModifyEdgeAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEdgeAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyEdgeAclRuleOutcomeCallable FwmClient::ModifyEdgeAclRuleCallable(const ModifyEdgeAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEdgeAclRuleOutcome>>();
    ModifyEdgeAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyEdgeAclRuleRequest&,
        ModifyEdgeAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyEdgeAclRuleSequenceOutcome FwmClient::ModifyEdgeAclRuleSequence(const ModifyEdgeAclRuleSequenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdgeAclRuleSequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdgeAclRuleSequenceResponse rsp = ModifyEdgeAclRuleSequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdgeAclRuleSequenceOutcome(rsp);
        else
            return ModifyEdgeAclRuleSequenceOutcome(o.GetError());
    }
    else
    {
        return ModifyEdgeAclRuleSequenceOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyEdgeAclRuleSequenceAsync(const ModifyEdgeAclRuleSequenceRequest& request, const ModifyEdgeAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEdgeAclRuleSequenceRequest&;
    using Resp = ModifyEdgeAclRuleSequenceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEdgeAclRuleSequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyEdgeAclRuleSequenceOutcomeCallable FwmClient::ModifyEdgeAclRuleSequenceCallable(const ModifyEdgeAclRuleSequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEdgeAclRuleSequenceOutcome>>();
    ModifyEdgeAclRuleSequenceAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyEdgeAclRuleSequenceRequest&,
        ModifyEdgeAclRuleSequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyNatAclRuleOutcome FwmClient::ModifyNatAclRule(const ModifyNatAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatAclRuleResponse rsp = ModifyNatAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatAclRuleOutcome(rsp);
        else
            return ModifyNatAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNatAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyNatAclRuleAsync(const ModifyNatAclRuleRequest& request, const ModifyNatAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatAclRuleRequest&;
    using Resp = ModifyNatAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyNatAclRuleOutcomeCallable FwmClient::ModifyNatAclRuleCallable(const ModifyNatAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatAclRuleOutcome>>();
    ModifyNatAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyNatAclRuleRequest&,
        ModifyNatAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyNatAclRuleSequenceOutcome FwmClient::ModifyNatAclRuleSequence(const ModifyNatAclRuleSequenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNatAclRuleSequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNatAclRuleSequenceResponse rsp = ModifyNatAclRuleSequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNatAclRuleSequenceOutcome(rsp);
        else
            return ModifyNatAclRuleSequenceOutcome(o.GetError());
    }
    else
    {
        return ModifyNatAclRuleSequenceOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyNatAclRuleSequenceAsync(const ModifyNatAclRuleSequenceRequest& request, const ModifyNatAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNatAclRuleSequenceRequest&;
    using Resp = ModifyNatAclRuleSequenceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNatAclRuleSequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyNatAclRuleSequenceOutcomeCallable FwmClient::ModifyNatAclRuleSequenceCallable(const ModifyNatAclRuleSequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNatAclRuleSequenceOutcome>>();
    ModifyNatAclRuleSequenceAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyNatAclRuleSequenceRequest&,
        ModifyNatAclRuleSequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyRuleGroupOutcome FwmClient::ModifyRuleGroup(const ModifyRuleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleGroupResponse rsp = ModifyRuleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleGroupOutcome(rsp);
        else
            return ModifyRuleGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleGroupOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyRuleGroupAsync(const ModifyRuleGroupRequest& request, const ModifyRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleGroupRequest&;
    using Resp = ModifyRuleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRuleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyRuleGroupOutcomeCallable FwmClient::ModifyRuleGroupCallable(const ModifyRuleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleGroupOutcome>>();
    ModifyRuleGroupAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyRuleGroupRequest&,
        ModifyRuleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifySecurityGroupRuleOutcome FwmClient::ModifySecurityGroupRule(const ModifySecurityGroupRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroupRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupRuleResponse rsp = ModifySecurityGroupRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupRuleOutcome(rsp);
        else
            return ModifySecurityGroupRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupRuleOutcome(outcome.GetError());
    }
}

void FwmClient::ModifySecurityGroupRuleAsync(const ModifySecurityGroupRuleRequest& request, const ModifySecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupRuleRequest&;
    using Resp = ModifySecurityGroupRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroupRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifySecurityGroupRuleOutcomeCallable FwmClient::ModifySecurityGroupRuleCallable(const ModifySecurityGroupRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupRuleOutcome>>();
    ModifySecurityGroupRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifySecurityGroupRuleRequest&,
        ModifySecurityGroupRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyStrategyOutcome FwmClient::ModifyStrategy(const ModifyStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStrategyResponse rsp = ModifyStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStrategyOutcome(rsp);
        else
            return ModifyStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyStrategyOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStrategyRequest&;
    using Resp = ModifyStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyStrategyOutcomeCallable FwmClient::ModifyStrategyCallable(const ModifyStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStrategyOutcome>>();
    ModifyStrategyAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyStrategyRequest&,
        ModifyStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyStrategySequenceOutcome FwmClient::ModifyStrategySequence(const ModifyStrategySequenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStrategySequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStrategySequenceResponse rsp = ModifyStrategySequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStrategySequenceOutcome(rsp);
        else
            return ModifyStrategySequenceOutcome(o.GetError());
    }
    else
    {
        return ModifyStrategySequenceOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyStrategySequenceAsync(const ModifyStrategySequenceRequest& request, const ModifyStrategySequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyStrategySequenceRequest&;
    using Resp = ModifyStrategySequenceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStrategySequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyStrategySequenceOutcomeCallable FwmClient::ModifyStrategySequenceCallable(const ModifyStrategySequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStrategySequenceOutcome>>();
    ModifyStrategySequenceAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyStrategySequenceRequest&,
        ModifyStrategySequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyVpcAclRuleOutcome FwmClient::ModifyVpcAclRule(const ModifyVpcAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAclRuleResponse rsp = ModifyVpcAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAclRuleOutcome(rsp);
        else
            return ModifyVpcAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAclRuleOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyVpcAclRuleAsync(const ModifyVpcAclRuleRequest& request, const ModifyVpcAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcAclRuleRequest&;
    using Resp = ModifyVpcAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyVpcAclRuleOutcomeCallable FwmClient::ModifyVpcAclRuleCallable(const ModifyVpcAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAclRuleOutcome>>();
    ModifyVpcAclRuleAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyVpcAclRuleRequest&,
        ModifyVpcAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FwmClient::ModifyVpcAclRuleSequenceOutcome FwmClient::ModifyVpcAclRuleSequence(const ModifyVpcAclRuleSequenceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVpcAclRuleSequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVpcAclRuleSequenceResponse rsp = ModifyVpcAclRuleSequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVpcAclRuleSequenceOutcome(rsp);
        else
            return ModifyVpcAclRuleSequenceOutcome(o.GetError());
    }
    else
    {
        return ModifyVpcAclRuleSequenceOutcome(outcome.GetError());
    }
}

void FwmClient::ModifyVpcAclRuleSequenceAsync(const ModifyVpcAclRuleSequenceRequest& request, const ModifyVpcAclRuleSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVpcAclRuleSequenceRequest&;
    using Resp = ModifyVpcAclRuleSequenceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVpcAclRuleSequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FwmClient::ModifyVpcAclRuleSequenceOutcomeCallable FwmClient::ModifyVpcAclRuleSequenceCallable(const ModifyVpcAclRuleSequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVpcAclRuleSequenceOutcome>>();
    ModifyVpcAclRuleSequenceAsync(
    request,
    [prom](
        const FwmClient*,
        const ModifyVpcAclRuleSequenceRequest&,
        ModifyVpcAclRuleSequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

