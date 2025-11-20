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

#include <tencentcloud/tcss/v20201101/TcssClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcss::V20201101;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-01";
    const string ENDPOINT = "tcss.tencentcloudapi.com";
}

TcssClient::TcssClient(const Credential &credential, const string &region) :
    TcssClient(credential, region, ClientProfile())
{
}

TcssClient::TcssClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcssClient::AddAndPublishNetworkFirewallPolicyDetailOutcome TcssClient::AddAndPublishNetworkFirewallPolicyDetail(const AddAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "AddAndPublishNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAndPublishNetworkFirewallPolicyDetailResponse rsp = AddAndPublishNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAndPublishNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return AddAndPublishNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return AddAndPublishNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::AddAndPublishNetworkFirewallPolicyDetailAsync(const AddAndPublishNetworkFirewallPolicyDetailRequest& request, const AddAndPublishNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAndPublishNetworkFirewallPolicyDetailRequest&;
    using Resp = AddAndPublishNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "AddAndPublishNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddAndPublishNetworkFirewallPolicyDetailOutcomeCallable TcssClient::AddAndPublishNetworkFirewallPolicyDetailCallable(const AddAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAndPublishNetworkFirewallPolicyDetailOutcome>>();
    AddAndPublishNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const AddAndPublishNetworkFirewallPolicyDetailRequest&,
        AddAndPublishNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailOutcome TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetail(const AddAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "AddAndPublishNetworkFirewallPolicyYamlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAndPublishNetworkFirewallPolicyYamlDetailResponse rsp = AddAndPublishNetworkFirewallPolicyYamlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAndPublishNetworkFirewallPolicyYamlDetailOutcome(rsp);
        else
            return AddAndPublishNetworkFirewallPolicyYamlDetailOutcome(o.GetError());
    }
    else
    {
        return AddAndPublishNetworkFirewallPolicyYamlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailAsync(const AddAndPublishNetworkFirewallPolicyYamlDetailRequest& request, const AddAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAndPublishNetworkFirewallPolicyYamlDetailRequest&;
    using Resp = AddAndPublishNetworkFirewallPolicyYamlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "AddAndPublishNetworkFirewallPolicyYamlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailCallable(const AddAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAndPublishNetworkFirewallPolicyYamlDetailOutcome>>();
    AddAndPublishNetworkFirewallPolicyYamlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const AddAndPublishNetworkFirewallPolicyYamlDetailRequest&,
        AddAndPublishNetworkFirewallPolicyYamlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddAssetImageRegistryRegistryDetailOutcome TcssClient::AddAssetImageRegistryRegistryDetail(const AddAssetImageRegistryRegistryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "AddAssetImageRegistryRegistryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAssetImageRegistryRegistryDetailResponse rsp = AddAssetImageRegistryRegistryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAssetImageRegistryRegistryDetailOutcome(rsp);
        else
            return AddAssetImageRegistryRegistryDetailOutcome(o.GetError());
    }
    else
    {
        return AddAssetImageRegistryRegistryDetailOutcome(outcome.GetError());
    }
}

void TcssClient::AddAssetImageRegistryRegistryDetailAsync(const AddAssetImageRegistryRegistryDetailRequest& request, const AddAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAssetImageRegistryRegistryDetailRequest&;
    using Resp = AddAssetImageRegistryRegistryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "AddAssetImageRegistryRegistryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::AddAssetImageRegistryRegistryDetailCallable(const AddAssetImageRegistryRegistryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAssetImageRegistryRegistryDetailOutcome>>();
    AddAssetImageRegistryRegistryDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const AddAssetImageRegistryRegistryDetailRequest&,
        AddAssetImageRegistryRegistryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddComplianceAssetPolicySetToWhitelistOutcome TcssClient::AddComplianceAssetPolicySetToWhitelist(const AddComplianceAssetPolicySetToWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "AddComplianceAssetPolicySetToWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddComplianceAssetPolicySetToWhitelistResponse rsp = AddComplianceAssetPolicySetToWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddComplianceAssetPolicySetToWhitelistOutcome(rsp);
        else
            return AddComplianceAssetPolicySetToWhitelistOutcome(o.GetError());
    }
    else
    {
        return AddComplianceAssetPolicySetToWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::AddComplianceAssetPolicySetToWhitelistAsync(const AddComplianceAssetPolicySetToWhitelistRequest& request, const AddComplianceAssetPolicySetToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddComplianceAssetPolicySetToWhitelistRequest&;
    using Resp = AddComplianceAssetPolicySetToWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "AddComplianceAssetPolicySetToWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddComplianceAssetPolicySetToWhitelistOutcomeCallable TcssClient::AddComplianceAssetPolicySetToWhitelistCallable(const AddComplianceAssetPolicySetToWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddComplianceAssetPolicySetToWhitelistOutcome>>();
    AddComplianceAssetPolicySetToWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const AddComplianceAssetPolicySetToWhitelistRequest&,
        AddComplianceAssetPolicySetToWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddCompliancePolicyAssetSetToWhitelistOutcome TcssClient::AddCompliancePolicyAssetSetToWhitelist(const AddCompliancePolicyAssetSetToWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "AddCompliancePolicyAssetSetToWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCompliancePolicyAssetSetToWhitelistResponse rsp = AddCompliancePolicyAssetSetToWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCompliancePolicyAssetSetToWhitelistOutcome(rsp);
        else
            return AddCompliancePolicyAssetSetToWhitelistOutcome(o.GetError());
    }
    else
    {
        return AddCompliancePolicyAssetSetToWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::AddCompliancePolicyAssetSetToWhitelistAsync(const AddCompliancePolicyAssetSetToWhitelistRequest& request, const AddCompliancePolicyAssetSetToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCompliancePolicyAssetSetToWhitelistRequest&;
    using Resp = AddCompliancePolicyAssetSetToWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "AddCompliancePolicyAssetSetToWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddCompliancePolicyAssetSetToWhitelistOutcomeCallable TcssClient::AddCompliancePolicyAssetSetToWhitelistCallable(const AddCompliancePolicyAssetSetToWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCompliancePolicyAssetSetToWhitelistOutcome>>();
    AddCompliancePolicyAssetSetToWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const AddCompliancePolicyAssetSetToWhitelistRequest&,
        AddCompliancePolicyAssetSetToWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddCompliancePolicyItemToWhitelistOutcome TcssClient::AddCompliancePolicyItemToWhitelist(const AddCompliancePolicyItemToWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "AddCompliancePolicyItemToWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCompliancePolicyItemToWhitelistResponse rsp = AddCompliancePolicyItemToWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCompliancePolicyItemToWhitelistOutcome(rsp);
        else
            return AddCompliancePolicyItemToWhitelistOutcome(o.GetError());
    }
    else
    {
        return AddCompliancePolicyItemToWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::AddCompliancePolicyItemToWhitelistAsync(const AddCompliancePolicyItemToWhitelistRequest& request, const AddCompliancePolicyItemToWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCompliancePolicyItemToWhitelistRequest&;
    using Resp = AddCompliancePolicyItemToWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "AddCompliancePolicyItemToWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddCompliancePolicyItemToWhitelistOutcomeCallable TcssClient::AddCompliancePolicyItemToWhitelistCallable(const AddCompliancePolicyItemToWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCompliancePolicyItemToWhitelistOutcome>>();
    AddCompliancePolicyItemToWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const AddCompliancePolicyItemToWhitelistRequest&,
        AddCompliancePolicyItemToWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditAbnormalProcessRuleOutcome TcssClient::AddEditAbnormalProcessRule(const AddEditAbnormalProcessRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditAbnormalProcessRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditAbnormalProcessRuleResponse rsp = AddEditAbnormalProcessRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditAbnormalProcessRuleOutcome(rsp);
        else
            return AddEditAbnormalProcessRuleOutcome(o.GetError());
    }
    else
    {
        return AddEditAbnormalProcessRuleOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditAbnormalProcessRuleAsync(const AddEditAbnormalProcessRuleRequest& request, const AddEditAbnormalProcessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditAbnormalProcessRuleRequest&;
    using Resp = AddEditAbnormalProcessRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditAbnormalProcessRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditAbnormalProcessRuleOutcomeCallable TcssClient::AddEditAbnormalProcessRuleCallable(const AddEditAbnormalProcessRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditAbnormalProcessRuleOutcome>>();
    AddEditAbnormalProcessRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditAbnormalProcessRuleRequest&,
        AddEditAbnormalProcessRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditAccessControlRuleOutcome TcssClient::AddEditAccessControlRule(const AddEditAccessControlRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditAccessControlRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditAccessControlRuleResponse rsp = AddEditAccessControlRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditAccessControlRuleOutcome(rsp);
        else
            return AddEditAccessControlRuleOutcome(o.GetError());
    }
    else
    {
        return AddEditAccessControlRuleOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditAccessControlRuleAsync(const AddEditAccessControlRuleRequest& request, const AddEditAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditAccessControlRuleRequest&;
    using Resp = AddEditAccessControlRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditAccessControlRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditAccessControlRuleOutcomeCallable TcssClient::AddEditAccessControlRuleCallable(const AddEditAccessControlRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditAccessControlRuleOutcome>>();
    AddEditAccessControlRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditAccessControlRuleRequest&,
        AddEditAccessControlRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditImageAutoAuthorizedRuleOutcome TcssClient::AddEditImageAutoAuthorizedRule(const AddEditImageAutoAuthorizedRuleRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditImageAutoAuthorizedRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditImageAutoAuthorizedRuleResponse rsp = AddEditImageAutoAuthorizedRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditImageAutoAuthorizedRuleOutcome(rsp);
        else
            return AddEditImageAutoAuthorizedRuleOutcome(o.GetError());
    }
    else
    {
        return AddEditImageAutoAuthorizedRuleOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditImageAutoAuthorizedRuleAsync(const AddEditImageAutoAuthorizedRuleRequest& request, const AddEditImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditImageAutoAuthorizedRuleRequest&;
    using Resp = AddEditImageAutoAuthorizedRuleResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditImageAutoAuthorizedRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditImageAutoAuthorizedRuleOutcomeCallable TcssClient::AddEditImageAutoAuthorizedRuleCallable(const AddEditImageAutoAuthorizedRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditImageAutoAuthorizedRuleOutcome>>();
    AddEditImageAutoAuthorizedRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditImageAutoAuthorizedRuleRequest&,
        AddEditImageAutoAuthorizedRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditReverseShellWhiteListOutcome TcssClient::AddEditReverseShellWhiteList(const AddEditReverseShellWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditReverseShellWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditReverseShellWhiteListResponse rsp = AddEditReverseShellWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditReverseShellWhiteListOutcome(rsp);
        else
            return AddEditReverseShellWhiteListOutcome(o.GetError());
    }
    else
    {
        return AddEditReverseShellWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditReverseShellWhiteListAsync(const AddEditReverseShellWhiteListRequest& request, const AddEditReverseShellWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditReverseShellWhiteListRequest&;
    using Resp = AddEditReverseShellWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditReverseShellWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditReverseShellWhiteListOutcomeCallable TcssClient::AddEditReverseShellWhiteListCallable(const AddEditReverseShellWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditReverseShellWhiteListOutcome>>();
    AddEditReverseShellWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditReverseShellWhiteListRequest&,
        AddEditReverseShellWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditRiskSyscallWhiteListOutcome TcssClient::AddEditRiskSyscallWhiteList(const AddEditRiskSyscallWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditRiskSyscallWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditRiskSyscallWhiteListResponse rsp = AddEditRiskSyscallWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditRiskSyscallWhiteListOutcome(rsp);
        else
            return AddEditRiskSyscallWhiteListOutcome(o.GetError());
    }
    else
    {
        return AddEditRiskSyscallWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditRiskSyscallWhiteListAsync(const AddEditRiskSyscallWhiteListRequest& request, const AddEditRiskSyscallWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditRiskSyscallWhiteListRequest&;
    using Resp = AddEditRiskSyscallWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditRiskSyscallWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditRiskSyscallWhiteListOutcomeCallable TcssClient::AddEditRiskSyscallWhiteListCallable(const AddEditRiskSyscallWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditRiskSyscallWhiteListOutcome>>();
    AddEditRiskSyscallWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditRiskSyscallWhiteListRequest&,
        AddEditRiskSyscallWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEditWarningRulesOutcome TcssClient::AddEditWarningRules(const AddEditWarningRulesRequest &request)
{
    auto outcome = MakeRequest(request, "AddEditWarningRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEditWarningRulesResponse rsp = AddEditWarningRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEditWarningRulesOutcome(rsp);
        else
            return AddEditWarningRulesOutcome(o.GetError());
    }
    else
    {
        return AddEditWarningRulesOutcome(outcome.GetError());
    }
}

void TcssClient::AddEditWarningRulesAsync(const AddEditWarningRulesRequest& request, const AddEditWarningRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEditWarningRulesRequest&;
    using Resp = AddEditWarningRulesResponse;

    DoRequestAsync<Req, Resp>(
        "AddEditWarningRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEditWarningRulesOutcomeCallable TcssClient::AddEditWarningRulesCallable(const AddEditWarningRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEditWarningRulesOutcome>>();
    AddEditWarningRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEditWarningRulesRequest&,
        AddEditWarningRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddEscapeWhiteListOutcome TcssClient::AddEscapeWhiteList(const AddEscapeWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "AddEscapeWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddEscapeWhiteListResponse rsp = AddEscapeWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddEscapeWhiteListOutcome(rsp);
        else
            return AddEscapeWhiteListOutcome(o.GetError());
    }
    else
    {
        return AddEscapeWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::AddEscapeWhiteListAsync(const AddEscapeWhiteListRequest& request, const AddEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddEscapeWhiteListRequest&;
    using Resp = AddEscapeWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "AddEscapeWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddEscapeWhiteListOutcomeCallable TcssClient::AddEscapeWhiteListCallable(const AddEscapeWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddEscapeWhiteListOutcome>>();
    AddEscapeWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const AddEscapeWhiteListRequest&,
        AddEscapeWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddIgnoreVulOutcome TcssClient::AddIgnoreVul(const AddIgnoreVulRequest &request)
{
    auto outcome = MakeRequest(request, "AddIgnoreVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddIgnoreVulResponse rsp = AddIgnoreVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddIgnoreVulOutcome(rsp);
        else
            return AddIgnoreVulOutcome(o.GetError());
    }
    else
    {
        return AddIgnoreVulOutcome(outcome.GetError());
    }
}

void TcssClient::AddIgnoreVulAsync(const AddIgnoreVulRequest& request, const AddIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddIgnoreVulRequest&;
    using Resp = AddIgnoreVulResponse;

    DoRequestAsync<Req, Resp>(
        "AddIgnoreVul", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddIgnoreVulOutcomeCallable TcssClient::AddIgnoreVulCallable(const AddIgnoreVulRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddIgnoreVulOutcome>>();
    AddIgnoreVulAsync(
    request,
    [prom](
        const TcssClient*,
        const AddIgnoreVulRequest&,
        AddIgnoreVulOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddNetworkFirewallPolicyDetailOutcome TcssClient::AddNetworkFirewallPolicyDetail(const AddNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "AddNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNetworkFirewallPolicyDetailResponse rsp = AddNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return AddNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return AddNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::AddNetworkFirewallPolicyDetailAsync(const AddNetworkFirewallPolicyDetailRequest& request, const AddNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNetworkFirewallPolicyDetailRequest&;
    using Resp = AddNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "AddNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddNetworkFirewallPolicyDetailOutcomeCallable TcssClient::AddNetworkFirewallPolicyDetailCallable(const AddNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNetworkFirewallPolicyDetailOutcome>>();
    AddNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const AddNetworkFirewallPolicyDetailRequest&,
        AddNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::AddNetworkFirewallPolicyYamlDetailOutcome TcssClient::AddNetworkFirewallPolicyYamlDetail(const AddNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "AddNetworkFirewallPolicyYamlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNetworkFirewallPolicyYamlDetailResponse rsp = AddNetworkFirewallPolicyYamlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNetworkFirewallPolicyYamlDetailOutcome(rsp);
        else
            return AddNetworkFirewallPolicyYamlDetailOutcome(o.GetError());
    }
    else
    {
        return AddNetworkFirewallPolicyYamlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::AddNetworkFirewallPolicyYamlDetailAsync(const AddNetworkFirewallPolicyYamlDetailRequest& request, const AddNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNetworkFirewallPolicyYamlDetailRequest&;
    using Resp = AddNetworkFirewallPolicyYamlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "AddNetworkFirewallPolicyYamlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::AddNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::AddNetworkFirewallPolicyYamlDetailCallable(const AddNetworkFirewallPolicyYamlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNetworkFirewallPolicyYamlDetailOutcome>>();
    AddNetworkFirewallPolicyYamlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const AddNetworkFirewallPolicyYamlDetailRequest&,
        AddNetworkFirewallPolicyYamlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CheckNetworkFirewallPolicyYamlOutcome TcssClient::CheckNetworkFirewallPolicyYaml(const CheckNetworkFirewallPolicyYamlRequest &request)
{
    auto outcome = MakeRequest(request, "CheckNetworkFirewallPolicyYaml");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckNetworkFirewallPolicyYamlResponse rsp = CheckNetworkFirewallPolicyYamlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckNetworkFirewallPolicyYamlOutcome(rsp);
        else
            return CheckNetworkFirewallPolicyYamlOutcome(o.GetError());
    }
    else
    {
        return CheckNetworkFirewallPolicyYamlOutcome(outcome.GetError());
    }
}

void TcssClient::CheckNetworkFirewallPolicyYamlAsync(const CheckNetworkFirewallPolicyYamlRequest& request, const CheckNetworkFirewallPolicyYamlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckNetworkFirewallPolicyYamlRequest&;
    using Resp = CheckNetworkFirewallPolicyYamlResponse;

    DoRequestAsync<Req, Resp>(
        "CheckNetworkFirewallPolicyYaml", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CheckNetworkFirewallPolicyYamlOutcomeCallable TcssClient::CheckNetworkFirewallPolicyYamlCallable(const CheckNetworkFirewallPolicyYamlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckNetworkFirewallPolicyYamlOutcome>>();
    CheckNetworkFirewallPolicyYamlAsync(
    request,
    [prom](
        const TcssClient*,
        const CheckNetworkFirewallPolicyYamlRequest&,
        CheckNetworkFirewallPolicyYamlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CheckRepeatAssetImageRegistryOutcome TcssClient::CheckRepeatAssetImageRegistry(const CheckRepeatAssetImageRegistryRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRepeatAssetImageRegistry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRepeatAssetImageRegistryResponse rsp = CheckRepeatAssetImageRegistryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRepeatAssetImageRegistryOutcome(rsp);
        else
            return CheckRepeatAssetImageRegistryOutcome(o.GetError());
    }
    else
    {
        return CheckRepeatAssetImageRegistryOutcome(outcome.GetError());
    }
}

void TcssClient::CheckRepeatAssetImageRegistryAsync(const CheckRepeatAssetImageRegistryRequest& request, const CheckRepeatAssetImageRegistryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckRepeatAssetImageRegistryRequest&;
    using Resp = CheckRepeatAssetImageRegistryResponse;

    DoRequestAsync<Req, Resp>(
        "CheckRepeatAssetImageRegistry", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CheckRepeatAssetImageRegistryOutcomeCallable TcssClient::CheckRepeatAssetImageRegistryCallable(const CheckRepeatAssetImageRegistryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckRepeatAssetImageRegistryOutcome>>();
    CheckRepeatAssetImageRegistryAsync(
    request,
    [prom](
        const TcssClient*,
        const CheckRepeatAssetImageRegistryRequest&,
        CheckRepeatAssetImageRegistryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ConfirmNetworkFirewallPolicyOutcome TcssClient::ConfirmNetworkFirewallPolicy(const ConfirmNetworkFirewallPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmNetworkFirewallPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmNetworkFirewallPolicyResponse rsp = ConfirmNetworkFirewallPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmNetworkFirewallPolicyOutcome(rsp);
        else
            return ConfirmNetworkFirewallPolicyOutcome(o.GetError());
    }
    else
    {
        return ConfirmNetworkFirewallPolicyOutcome(outcome.GetError());
    }
}

void TcssClient::ConfirmNetworkFirewallPolicyAsync(const ConfirmNetworkFirewallPolicyRequest& request, const ConfirmNetworkFirewallPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmNetworkFirewallPolicyRequest&;
    using Resp = ConfirmNetworkFirewallPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmNetworkFirewallPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ConfirmNetworkFirewallPolicyOutcomeCallable TcssClient::ConfirmNetworkFirewallPolicyCallable(const ConfirmNetworkFirewallPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmNetworkFirewallPolicyOutcome>>();
    ConfirmNetworkFirewallPolicyAsync(
    request,
    [prom](
        const TcssClient*,
        const ConfirmNetworkFirewallPolicyRequest&,
        ConfirmNetworkFirewallPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAbnormalProcessRulesExportJobOutcome TcssClient::CreateAbnormalProcessRulesExportJob(const CreateAbnormalProcessRulesExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAbnormalProcessRulesExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAbnormalProcessRulesExportJobResponse rsp = CreateAbnormalProcessRulesExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAbnormalProcessRulesExportJobOutcome(rsp);
        else
            return CreateAbnormalProcessRulesExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateAbnormalProcessRulesExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAbnormalProcessRulesExportJobAsync(const CreateAbnormalProcessRulesExportJobRequest& request, const CreateAbnormalProcessRulesExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAbnormalProcessRulesExportJobRequest&;
    using Resp = CreateAbnormalProcessRulesExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAbnormalProcessRulesExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAbnormalProcessRulesExportJobOutcomeCallable TcssClient::CreateAbnormalProcessRulesExportJobCallable(const CreateAbnormalProcessRulesExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAbnormalProcessRulesExportJobOutcome>>();
    CreateAbnormalProcessRulesExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAbnormalProcessRulesExportJobRequest&,
        CreateAbnormalProcessRulesExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAccessControlsRuleExportJobOutcome TcssClient::CreateAccessControlsRuleExportJob(const CreateAccessControlsRuleExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessControlsRuleExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessControlsRuleExportJobResponse rsp = CreateAccessControlsRuleExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessControlsRuleExportJobOutcome(rsp);
        else
            return CreateAccessControlsRuleExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateAccessControlsRuleExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAccessControlsRuleExportJobAsync(const CreateAccessControlsRuleExportJobRequest& request, const CreateAccessControlsRuleExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessControlsRuleExportJobRequest&;
    using Resp = CreateAccessControlsRuleExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessControlsRuleExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAccessControlsRuleExportJobOutcomeCallable TcssClient::CreateAccessControlsRuleExportJobCallable(const CreateAccessControlsRuleExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessControlsRuleExportJobOutcome>>();
    CreateAccessControlsRuleExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAccessControlsRuleExportJobRequest&,
        CreateAccessControlsRuleExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAssetImageRegistryScanTaskOutcome TcssClient::CreateAssetImageRegistryScanTask(const CreateAssetImageRegistryScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetImageRegistryScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetImageRegistryScanTaskResponse rsp = CreateAssetImageRegistryScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetImageRegistryScanTaskOutcome(rsp);
        else
            return CreateAssetImageRegistryScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAssetImageRegistryScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAssetImageRegistryScanTaskAsync(const CreateAssetImageRegistryScanTaskRequest& request, const CreateAssetImageRegistryScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetImageRegistryScanTaskRequest&;
    using Resp = CreateAssetImageRegistryScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetImageRegistryScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAssetImageRegistryScanTaskOutcomeCallable TcssClient::CreateAssetImageRegistryScanTaskCallable(const CreateAssetImageRegistryScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetImageRegistryScanTaskOutcome>>();
    CreateAssetImageRegistryScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAssetImageRegistryScanTaskRequest&,
        CreateAssetImageRegistryScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAssetImageRegistryScanTaskOneKeyOutcome TcssClient::CreateAssetImageRegistryScanTaskOneKey(const CreateAssetImageRegistryScanTaskOneKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetImageRegistryScanTaskOneKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetImageRegistryScanTaskOneKeyResponse rsp = CreateAssetImageRegistryScanTaskOneKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetImageRegistryScanTaskOneKeyOutcome(rsp);
        else
            return CreateAssetImageRegistryScanTaskOneKeyOutcome(o.GetError());
    }
    else
    {
        return CreateAssetImageRegistryScanTaskOneKeyOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAssetImageRegistryScanTaskOneKeyAsync(const CreateAssetImageRegistryScanTaskOneKeyRequest& request, const CreateAssetImageRegistryScanTaskOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetImageRegistryScanTaskOneKeyRequest&;
    using Resp = CreateAssetImageRegistryScanTaskOneKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetImageRegistryScanTaskOneKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAssetImageRegistryScanTaskOneKeyOutcomeCallable TcssClient::CreateAssetImageRegistryScanTaskOneKeyCallable(const CreateAssetImageRegistryScanTaskOneKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetImageRegistryScanTaskOneKeyOutcome>>();
    CreateAssetImageRegistryScanTaskOneKeyAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAssetImageRegistryScanTaskOneKeyRequest&,
        CreateAssetImageRegistryScanTaskOneKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAssetImageScanSettingOutcome TcssClient::CreateAssetImageScanSetting(const CreateAssetImageScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetImageScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetImageScanSettingResponse rsp = CreateAssetImageScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetImageScanSettingOutcome(rsp);
        else
            return CreateAssetImageScanSettingOutcome(o.GetError());
    }
    else
    {
        return CreateAssetImageScanSettingOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAssetImageScanSettingAsync(const CreateAssetImageScanSettingRequest& request, const CreateAssetImageScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetImageScanSettingRequest&;
    using Resp = CreateAssetImageScanSettingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetImageScanSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAssetImageScanSettingOutcomeCallable TcssClient::CreateAssetImageScanSettingCallable(const CreateAssetImageScanSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetImageScanSettingOutcome>>();
    CreateAssetImageScanSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAssetImageScanSettingRequest&,
        CreateAssetImageScanSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAssetImageScanTaskOutcome TcssClient::CreateAssetImageScanTask(const CreateAssetImageScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetImageScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetImageScanTaskResponse rsp = CreateAssetImageScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetImageScanTaskOutcome(rsp);
        else
            return CreateAssetImageScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAssetImageScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAssetImageScanTaskAsync(const CreateAssetImageScanTaskRequest& request, const CreateAssetImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetImageScanTaskRequest&;
    using Resp = CreateAssetImageScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetImageScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAssetImageScanTaskOutcomeCallable TcssClient::CreateAssetImageScanTaskCallable(const CreateAssetImageScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetImageScanTaskOutcome>>();
    CreateAssetImageScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAssetImageScanTaskRequest&,
        CreateAssetImageScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateAssetImageVirusExportJobOutcome TcssClient::CreateAssetImageVirusExportJob(const CreateAssetImageVirusExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetImageVirusExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetImageVirusExportJobResponse rsp = CreateAssetImageVirusExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetImageVirusExportJobOutcome(rsp);
        else
            return CreateAssetImageVirusExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateAssetImageVirusExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateAssetImageVirusExportJobAsync(const CreateAssetImageVirusExportJobRequest& request, const CreateAssetImageVirusExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetImageVirusExportJobRequest&;
    using Resp = CreateAssetImageVirusExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAssetImageVirusExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateAssetImageVirusExportJobOutcomeCallable TcssClient::CreateAssetImageVirusExportJobCallable(const CreateAssetImageVirusExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetImageVirusExportJobOutcome>>();
    CreateAssetImageVirusExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateAssetImageVirusExportJobRequest&,
        CreateAssetImageVirusExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateCheckComponentOutcome TcssClient::CreateCheckComponent(const CreateCheckComponentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCheckComponent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCheckComponentResponse rsp = CreateCheckComponentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCheckComponentOutcome(rsp);
        else
            return CreateCheckComponentOutcome(o.GetError());
    }
    else
    {
        return CreateCheckComponentOutcome(outcome.GetError());
    }
}

void TcssClient::CreateCheckComponentAsync(const CreateCheckComponentRequest& request, const CreateCheckComponentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCheckComponentRequest&;
    using Resp = CreateCheckComponentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCheckComponent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateCheckComponentOutcomeCallable TcssClient::CreateCheckComponentCallable(const CreateCheckComponentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCheckComponentOutcome>>();
    CreateCheckComponentAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateCheckComponentRequest&,
        CreateCheckComponentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateClusterAccessOutcome TcssClient::CreateClusterAccess(const CreateClusterAccessRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterAccessResponse rsp = CreateClusterAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterAccessOutcome(rsp);
        else
            return CreateClusterAccessOutcome(o.GetError());
    }
    else
    {
        return CreateClusterAccessOutcome(outcome.GetError());
    }
}

void TcssClient::CreateClusterAccessAsync(const CreateClusterAccessRequest& request, const CreateClusterAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterAccessRequest&;
    using Resp = CreateClusterAccessResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateClusterAccessOutcomeCallable TcssClient::CreateClusterAccessCallable(const CreateClusterAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterAccessOutcome>>();
    CreateClusterAccessAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateClusterAccessRequest&,
        CreateClusterAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateClusterCheckTaskOutcome TcssClient::CreateClusterCheckTask(const CreateClusterCheckTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClusterCheckTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterCheckTaskResponse rsp = CreateClusterCheckTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterCheckTaskOutcome(rsp);
        else
            return CreateClusterCheckTaskOutcome(o.GetError());
    }
    else
    {
        return CreateClusterCheckTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateClusterCheckTaskAsync(const CreateClusterCheckTaskRequest& request, const CreateClusterCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterCheckTaskRequest&;
    using Resp = CreateClusterCheckTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClusterCheckTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateClusterCheckTaskOutcomeCallable TcssClient::CreateClusterCheckTaskCallable(const CreateClusterCheckTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterCheckTaskOutcome>>();
    CreateClusterCheckTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateClusterCheckTaskRequest&,
        CreateClusterCheckTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateComplianceTaskOutcome TcssClient::CreateComplianceTask(const CreateComplianceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateComplianceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateComplianceTaskResponse rsp = CreateComplianceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateComplianceTaskOutcome(rsp);
        else
            return CreateComplianceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateComplianceTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateComplianceTaskAsync(const CreateComplianceTaskRequest& request, const CreateComplianceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateComplianceTaskRequest&;
    using Resp = CreateComplianceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateComplianceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateComplianceTaskOutcomeCallable TcssClient::CreateComplianceTaskCallable(const CreateComplianceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateComplianceTaskOutcome>>();
    CreateComplianceTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateComplianceTaskRequest&,
        CreateComplianceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateComponentExportJobOutcome TcssClient::CreateComponentExportJob(const CreateComponentExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateComponentExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateComponentExportJobResponse rsp = CreateComponentExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateComponentExportJobOutcome(rsp);
        else
            return CreateComponentExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateComponentExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateComponentExportJobAsync(const CreateComponentExportJobRequest& request, const CreateComponentExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateComponentExportJobRequest&;
    using Resp = CreateComponentExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateComponentExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateComponentExportJobOutcomeCallable TcssClient::CreateComponentExportJobCallable(const CreateComponentExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateComponentExportJobOutcome>>();
    CreateComponentExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateComponentExportJobRequest&,
        CreateComponentExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateDefenceVulExportJobOutcome TcssClient::CreateDefenceVulExportJob(const CreateDefenceVulExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDefenceVulExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDefenceVulExportJobResponse rsp = CreateDefenceVulExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDefenceVulExportJobOutcome(rsp);
        else
            return CreateDefenceVulExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDefenceVulExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateDefenceVulExportJobAsync(const CreateDefenceVulExportJobRequest& request, const CreateDefenceVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDefenceVulExportJobRequest&;
    using Resp = CreateDefenceVulExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDefenceVulExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateDefenceVulExportJobOutcomeCallable TcssClient::CreateDefenceVulExportJobCallable(const CreateDefenceVulExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDefenceVulExportJobOutcome>>();
    CreateDefenceVulExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateDefenceVulExportJobRequest&,
        CreateDefenceVulExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateEmergencyVulExportJobOutcome TcssClient::CreateEmergencyVulExportJob(const CreateEmergencyVulExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmergencyVulExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmergencyVulExportJobResponse rsp = CreateEmergencyVulExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmergencyVulExportJobOutcome(rsp);
        else
            return CreateEmergencyVulExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateEmergencyVulExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateEmergencyVulExportJobAsync(const CreateEmergencyVulExportJobRequest& request, const CreateEmergencyVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmergencyVulExportJobRequest&;
    using Resp = CreateEmergencyVulExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmergencyVulExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateEmergencyVulExportJobOutcomeCallable TcssClient::CreateEmergencyVulExportJobCallable(const CreateEmergencyVulExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmergencyVulExportJobOutcome>>();
    CreateEmergencyVulExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateEmergencyVulExportJobRequest&,
        CreateEmergencyVulExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateEscapeEventsExportJobOutcome TcssClient::CreateEscapeEventsExportJob(const CreateEscapeEventsExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEscapeEventsExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEscapeEventsExportJobResponse rsp = CreateEscapeEventsExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEscapeEventsExportJobOutcome(rsp);
        else
            return CreateEscapeEventsExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateEscapeEventsExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateEscapeEventsExportJobAsync(const CreateEscapeEventsExportJobRequest& request, const CreateEscapeEventsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEscapeEventsExportJobRequest&;
    using Resp = CreateEscapeEventsExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEscapeEventsExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateEscapeEventsExportJobOutcomeCallable TcssClient::CreateEscapeEventsExportJobCallable(const CreateEscapeEventsExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEscapeEventsExportJobOutcome>>();
    CreateEscapeEventsExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateEscapeEventsExportJobRequest&,
        CreateEscapeEventsExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateEscapeWhiteListExportJobOutcome TcssClient::CreateEscapeWhiteListExportJob(const CreateEscapeWhiteListExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEscapeWhiteListExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEscapeWhiteListExportJobResponse rsp = CreateEscapeWhiteListExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEscapeWhiteListExportJobOutcome(rsp);
        else
            return CreateEscapeWhiteListExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateEscapeWhiteListExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateEscapeWhiteListExportJobAsync(const CreateEscapeWhiteListExportJobRequest& request, const CreateEscapeWhiteListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEscapeWhiteListExportJobRequest&;
    using Resp = CreateEscapeWhiteListExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEscapeWhiteListExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateEscapeWhiteListExportJobOutcomeCallable TcssClient::CreateEscapeWhiteListExportJobCallable(const CreateEscapeWhiteListExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEscapeWhiteListExportJobOutcome>>();
    CreateEscapeWhiteListExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateEscapeWhiteListExportJobRequest&,
        CreateEscapeWhiteListExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateExportComplianceStatusListJobOutcome TcssClient::CreateExportComplianceStatusListJob(const CreateExportComplianceStatusListJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExportComplianceStatusListJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportComplianceStatusListJobResponse rsp = CreateExportComplianceStatusListJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportComplianceStatusListJobOutcome(rsp);
        else
            return CreateExportComplianceStatusListJobOutcome(o.GetError());
    }
    else
    {
        return CreateExportComplianceStatusListJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateExportComplianceStatusListJobAsync(const CreateExportComplianceStatusListJobRequest& request, const CreateExportComplianceStatusListJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExportComplianceStatusListJobRequest&;
    using Resp = CreateExportComplianceStatusListJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExportComplianceStatusListJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateExportComplianceStatusListJobOutcomeCallable TcssClient::CreateExportComplianceStatusListJobCallable(const CreateExportComplianceStatusListJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExportComplianceStatusListJobOutcome>>();
    CreateExportComplianceStatusListJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateExportComplianceStatusListJobRequest&,
        CreateExportComplianceStatusListJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateHostExportJobOutcome TcssClient::CreateHostExportJob(const CreateHostExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHostExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHostExportJobResponse rsp = CreateHostExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHostExportJobOutcome(rsp);
        else
            return CreateHostExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateHostExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateHostExportJobAsync(const CreateHostExportJobRequest& request, const CreateHostExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHostExportJobRequest&;
    using Resp = CreateHostExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHostExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateHostExportJobOutcomeCallable TcssClient::CreateHostExportJobCallable(const CreateHostExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHostExportJobOutcome>>();
    CreateHostExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateHostExportJobRequest&,
        CreateHostExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateImageExportJobOutcome TcssClient::CreateImageExportJob(const CreateImageExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageExportJobResponse rsp = CreateImageExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageExportJobOutcome(rsp);
        else
            return CreateImageExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateImageExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateImageExportJobAsync(const CreateImageExportJobRequest& request, const CreateImageExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateImageExportJobRequest&;
    using Resp = CreateImageExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateImageExportJobOutcomeCallable TcssClient::CreateImageExportJobCallable(const CreateImageExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageExportJobOutcome>>();
    CreateImageExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateImageExportJobRequest&,
        CreateImageExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateK8sApiAbnormalEventExportJobOutcome TcssClient::CreateK8sApiAbnormalEventExportJob(const CreateK8sApiAbnormalEventExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateK8sApiAbnormalEventExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateK8sApiAbnormalEventExportJobResponse rsp = CreateK8sApiAbnormalEventExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateK8sApiAbnormalEventExportJobOutcome(rsp);
        else
            return CreateK8sApiAbnormalEventExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateK8sApiAbnormalEventExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateK8sApiAbnormalEventExportJobAsync(const CreateK8sApiAbnormalEventExportJobRequest& request, const CreateK8sApiAbnormalEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateK8sApiAbnormalEventExportJobRequest&;
    using Resp = CreateK8sApiAbnormalEventExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateK8sApiAbnormalEventExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateK8sApiAbnormalEventExportJobOutcomeCallable TcssClient::CreateK8sApiAbnormalEventExportJobCallable(const CreateK8sApiAbnormalEventExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateK8sApiAbnormalEventExportJobOutcome>>();
    CreateK8sApiAbnormalEventExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateK8sApiAbnormalEventExportJobRequest&,
        CreateK8sApiAbnormalEventExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateK8sApiAbnormalRuleExportJobOutcome TcssClient::CreateK8sApiAbnormalRuleExportJob(const CreateK8sApiAbnormalRuleExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateK8sApiAbnormalRuleExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateK8sApiAbnormalRuleExportJobResponse rsp = CreateK8sApiAbnormalRuleExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateK8sApiAbnormalRuleExportJobOutcome(rsp);
        else
            return CreateK8sApiAbnormalRuleExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateK8sApiAbnormalRuleExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateK8sApiAbnormalRuleExportJobAsync(const CreateK8sApiAbnormalRuleExportJobRequest& request, const CreateK8sApiAbnormalRuleExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateK8sApiAbnormalRuleExportJobRequest&;
    using Resp = CreateK8sApiAbnormalRuleExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateK8sApiAbnormalRuleExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateK8sApiAbnormalRuleExportJobOutcomeCallable TcssClient::CreateK8sApiAbnormalRuleExportJobCallable(const CreateK8sApiAbnormalRuleExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateK8sApiAbnormalRuleExportJobOutcome>>();
    CreateK8sApiAbnormalRuleExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateK8sApiAbnormalRuleExportJobRequest&,
        CreateK8sApiAbnormalRuleExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateK8sApiAbnormalRuleInfoOutcome TcssClient::CreateK8sApiAbnormalRuleInfo(const CreateK8sApiAbnormalRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateK8sApiAbnormalRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateK8sApiAbnormalRuleInfoResponse rsp = CreateK8sApiAbnormalRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateK8sApiAbnormalRuleInfoOutcome(rsp);
        else
            return CreateK8sApiAbnormalRuleInfoOutcome(o.GetError());
    }
    else
    {
        return CreateK8sApiAbnormalRuleInfoOutcome(outcome.GetError());
    }
}

void TcssClient::CreateK8sApiAbnormalRuleInfoAsync(const CreateK8sApiAbnormalRuleInfoRequest& request, const CreateK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateK8sApiAbnormalRuleInfoRequest&;
    using Resp = CreateK8sApiAbnormalRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "CreateK8sApiAbnormalRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::CreateK8sApiAbnormalRuleInfoCallable(const CreateK8sApiAbnormalRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateK8sApiAbnormalRuleInfoOutcome>>();
    CreateK8sApiAbnormalRuleInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateK8sApiAbnormalRuleInfoRequest&,
        CreateK8sApiAbnormalRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateNetworkFirewallClusterRefreshOutcome TcssClient::CreateNetworkFirewallClusterRefresh(const CreateNetworkFirewallClusterRefreshRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkFirewallClusterRefresh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkFirewallClusterRefreshResponse rsp = CreateNetworkFirewallClusterRefreshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkFirewallClusterRefreshOutcome(rsp);
        else
            return CreateNetworkFirewallClusterRefreshOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkFirewallClusterRefreshOutcome(outcome.GetError());
    }
}

void TcssClient::CreateNetworkFirewallClusterRefreshAsync(const CreateNetworkFirewallClusterRefreshRequest& request, const CreateNetworkFirewallClusterRefreshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkFirewallClusterRefreshRequest&;
    using Resp = CreateNetworkFirewallClusterRefreshResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkFirewallClusterRefresh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateNetworkFirewallClusterRefreshOutcomeCallable TcssClient::CreateNetworkFirewallClusterRefreshCallable(const CreateNetworkFirewallClusterRefreshRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkFirewallClusterRefreshOutcome>>();
    CreateNetworkFirewallClusterRefreshAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateNetworkFirewallClusterRefreshRequest&,
        CreateNetworkFirewallClusterRefreshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateNetworkFirewallPolicyDiscoverOutcome TcssClient::CreateNetworkFirewallPolicyDiscover(const CreateNetworkFirewallPolicyDiscoverRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkFirewallPolicyDiscover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkFirewallPolicyDiscoverResponse rsp = CreateNetworkFirewallPolicyDiscoverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkFirewallPolicyDiscoverOutcome(rsp);
        else
            return CreateNetworkFirewallPolicyDiscoverOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkFirewallPolicyDiscoverOutcome(outcome.GetError());
    }
}

void TcssClient::CreateNetworkFirewallPolicyDiscoverAsync(const CreateNetworkFirewallPolicyDiscoverRequest& request, const CreateNetworkFirewallPolicyDiscoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkFirewallPolicyDiscoverRequest&;
    using Resp = CreateNetworkFirewallPolicyDiscoverResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkFirewallPolicyDiscover", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateNetworkFirewallPolicyDiscoverOutcomeCallable TcssClient::CreateNetworkFirewallPolicyDiscoverCallable(const CreateNetworkFirewallPolicyDiscoverRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkFirewallPolicyDiscoverOutcome>>();
    CreateNetworkFirewallPolicyDiscoverAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateNetworkFirewallPolicyDiscoverRequest&,
        CreateNetworkFirewallPolicyDiscoverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateNetworkFirewallPublishOutcome TcssClient::CreateNetworkFirewallPublish(const CreateNetworkFirewallPublishRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkFirewallPublish");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkFirewallPublishResponse rsp = CreateNetworkFirewallPublishResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkFirewallPublishOutcome(rsp);
        else
            return CreateNetworkFirewallPublishOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkFirewallPublishOutcome(outcome.GetError());
    }
}

void TcssClient::CreateNetworkFirewallPublishAsync(const CreateNetworkFirewallPublishRequest& request, const CreateNetworkFirewallPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkFirewallPublishRequest&;
    using Resp = CreateNetworkFirewallPublishResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkFirewallPublish", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateNetworkFirewallPublishOutcomeCallable TcssClient::CreateNetworkFirewallPublishCallable(const CreateNetworkFirewallPublishRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkFirewallPublishOutcome>>();
    CreateNetworkFirewallPublishAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateNetworkFirewallPublishRequest&,
        CreateNetworkFirewallPublishOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateNetworkFirewallUndoPublishOutcome TcssClient::CreateNetworkFirewallUndoPublish(const CreateNetworkFirewallUndoPublishRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetworkFirewallUndoPublish");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetworkFirewallUndoPublishResponse rsp = CreateNetworkFirewallUndoPublishResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetworkFirewallUndoPublishOutcome(rsp);
        else
            return CreateNetworkFirewallUndoPublishOutcome(o.GetError());
    }
    else
    {
        return CreateNetworkFirewallUndoPublishOutcome(outcome.GetError());
    }
}

void TcssClient::CreateNetworkFirewallUndoPublishAsync(const CreateNetworkFirewallUndoPublishRequest& request, const CreateNetworkFirewallUndoPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetworkFirewallUndoPublishRequest&;
    using Resp = CreateNetworkFirewallUndoPublishResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetworkFirewallUndoPublish", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateNetworkFirewallUndoPublishOutcomeCallable TcssClient::CreateNetworkFirewallUndoPublishCallable(const CreateNetworkFirewallUndoPublishRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetworkFirewallUndoPublishOutcome>>();
    CreateNetworkFirewallUndoPublishAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateNetworkFirewallUndoPublishRequest&,
        CreateNetworkFirewallUndoPublishOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateOrModifyPostPayCoresOutcome TcssClient::CreateOrModifyPostPayCores(const CreateOrModifyPostPayCoresRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrModifyPostPayCores");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrModifyPostPayCoresResponse rsp = CreateOrModifyPostPayCoresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrModifyPostPayCoresOutcome(rsp);
        else
            return CreateOrModifyPostPayCoresOutcome(o.GetError());
    }
    else
    {
        return CreateOrModifyPostPayCoresOutcome(outcome.GetError());
    }
}

void TcssClient::CreateOrModifyPostPayCoresAsync(const CreateOrModifyPostPayCoresRequest& request, const CreateOrModifyPostPayCoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrModifyPostPayCoresRequest&;
    using Resp = CreateOrModifyPostPayCoresResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrModifyPostPayCores", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateOrModifyPostPayCoresOutcomeCallable TcssClient::CreateOrModifyPostPayCoresCallable(const CreateOrModifyPostPayCoresRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrModifyPostPayCoresOutcome>>();
    CreateOrModifyPostPayCoresAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateOrModifyPostPayCoresRequest&,
        CreateOrModifyPostPayCoresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateProcessEventsExportJobOutcome TcssClient::CreateProcessEventsExportJob(const CreateProcessEventsExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProcessEventsExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProcessEventsExportJobResponse rsp = CreateProcessEventsExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProcessEventsExportJobOutcome(rsp);
        else
            return CreateProcessEventsExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateProcessEventsExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateProcessEventsExportJobAsync(const CreateProcessEventsExportJobRequest& request, const CreateProcessEventsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProcessEventsExportJobRequest&;
    using Resp = CreateProcessEventsExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProcessEventsExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateProcessEventsExportJobOutcomeCallable TcssClient::CreateProcessEventsExportJobCallable(const CreateProcessEventsExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProcessEventsExportJobOutcome>>();
    CreateProcessEventsExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateProcessEventsExportJobRequest&,
        CreateProcessEventsExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateRefreshTaskOutcome TcssClient::CreateRefreshTask(const CreateRefreshTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRefreshTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRefreshTaskResponse rsp = CreateRefreshTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRefreshTaskOutcome(rsp);
        else
            return CreateRefreshTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRefreshTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateRefreshTaskAsync(const CreateRefreshTaskRequest& request, const CreateRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRefreshTaskRequest&;
    using Resp = CreateRefreshTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRefreshTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateRefreshTaskOutcomeCallable TcssClient::CreateRefreshTaskCallable(const CreateRefreshTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRefreshTaskOutcome>>();
    CreateRefreshTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateRefreshTaskRequest&,
        CreateRefreshTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateRiskDnsEventExportJobOutcome TcssClient::CreateRiskDnsEventExportJob(const CreateRiskDnsEventExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRiskDnsEventExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRiskDnsEventExportJobResponse rsp = CreateRiskDnsEventExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRiskDnsEventExportJobOutcome(rsp);
        else
            return CreateRiskDnsEventExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateRiskDnsEventExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateRiskDnsEventExportJobAsync(const CreateRiskDnsEventExportJobRequest& request, const CreateRiskDnsEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRiskDnsEventExportJobRequest&;
    using Resp = CreateRiskDnsEventExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRiskDnsEventExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateRiskDnsEventExportJobOutcomeCallable TcssClient::CreateRiskDnsEventExportJobCallable(const CreateRiskDnsEventExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRiskDnsEventExportJobOutcome>>();
    CreateRiskDnsEventExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateRiskDnsEventExportJobRequest&,
        CreateRiskDnsEventExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateSearchTemplateOutcome TcssClient::CreateSearchTemplate(const CreateSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSearchTemplateResponse rsp = CreateSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSearchTemplateOutcome(rsp);
        else
            return CreateSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSearchTemplateOutcome(outcome.GetError());
    }
}

void TcssClient::CreateSearchTemplateAsync(const CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSearchTemplateRequest&;
    using Resp = CreateSearchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSearchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateSearchTemplateOutcomeCallable TcssClient::CreateSearchTemplateCallable(const CreateSearchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSearchTemplateOutcome>>();
    CreateSearchTemplateAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateSearchTemplateRequest&,
        CreateSearchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateSystemVulExportJobOutcome TcssClient::CreateSystemVulExportJob(const CreateSystemVulExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSystemVulExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSystemVulExportJobResponse rsp = CreateSystemVulExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSystemVulExportJobOutcome(rsp);
        else
            return CreateSystemVulExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateSystemVulExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateSystemVulExportJobAsync(const CreateSystemVulExportJobRequest& request, const CreateSystemVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSystemVulExportJobRequest&;
    using Resp = CreateSystemVulExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSystemVulExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateSystemVulExportJobOutcomeCallable TcssClient::CreateSystemVulExportJobCallable(const CreateSystemVulExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSystemVulExportJobOutcome>>();
    CreateSystemVulExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateSystemVulExportJobRequest&,
        CreateSystemVulExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVirusScanAgainOutcome TcssClient::CreateVirusScanAgain(const CreateVirusScanAgainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVirusScanAgain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVirusScanAgainResponse rsp = CreateVirusScanAgainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVirusScanAgainOutcome(rsp);
        else
            return CreateVirusScanAgainOutcome(o.GetError());
    }
    else
    {
        return CreateVirusScanAgainOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVirusScanAgainAsync(const CreateVirusScanAgainRequest& request, const CreateVirusScanAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVirusScanAgainRequest&;
    using Resp = CreateVirusScanAgainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVirusScanAgain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVirusScanAgainOutcomeCallable TcssClient::CreateVirusScanAgainCallable(const CreateVirusScanAgainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVirusScanAgainOutcome>>();
    CreateVirusScanAgainAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVirusScanAgainRequest&,
        CreateVirusScanAgainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVirusScanTaskOutcome TcssClient::CreateVirusScanTask(const CreateVirusScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVirusScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVirusScanTaskResponse rsp = CreateVirusScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVirusScanTaskOutcome(rsp);
        else
            return CreateVirusScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVirusScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVirusScanTaskAsync(const CreateVirusScanTaskRequest& request, const CreateVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVirusScanTaskRequest&;
    using Resp = CreateVirusScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVirusScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVirusScanTaskOutcomeCallable TcssClient::CreateVirusScanTaskCallable(const CreateVirusScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVirusScanTaskOutcome>>();
    CreateVirusScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVirusScanTaskRequest&,
        CreateVirusScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulContainerExportJobOutcome TcssClient::CreateVulContainerExportJob(const CreateVulContainerExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulContainerExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulContainerExportJobResponse rsp = CreateVulContainerExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulContainerExportJobOutcome(rsp);
        else
            return CreateVulContainerExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateVulContainerExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulContainerExportJobAsync(const CreateVulContainerExportJobRequest& request, const CreateVulContainerExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulContainerExportJobRequest&;
    using Resp = CreateVulContainerExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulContainerExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulContainerExportJobOutcomeCallable TcssClient::CreateVulContainerExportJobCallable(const CreateVulContainerExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulContainerExportJobOutcome>>();
    CreateVulContainerExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulContainerExportJobRequest&,
        CreateVulContainerExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulDefenceEventExportJobOutcome TcssClient::CreateVulDefenceEventExportJob(const CreateVulDefenceEventExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulDefenceEventExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulDefenceEventExportJobResponse rsp = CreateVulDefenceEventExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulDefenceEventExportJobOutcome(rsp);
        else
            return CreateVulDefenceEventExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateVulDefenceEventExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulDefenceEventExportJobAsync(const CreateVulDefenceEventExportJobRequest& request, const CreateVulDefenceEventExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulDefenceEventExportJobRequest&;
    using Resp = CreateVulDefenceEventExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulDefenceEventExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulDefenceEventExportJobOutcomeCallable TcssClient::CreateVulDefenceEventExportJobCallable(const CreateVulDefenceEventExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulDefenceEventExportJobOutcome>>();
    CreateVulDefenceEventExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulDefenceEventExportJobRequest&,
        CreateVulDefenceEventExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulDefenceHostExportJobOutcome TcssClient::CreateVulDefenceHostExportJob(const CreateVulDefenceHostExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulDefenceHostExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulDefenceHostExportJobResponse rsp = CreateVulDefenceHostExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulDefenceHostExportJobOutcome(rsp);
        else
            return CreateVulDefenceHostExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateVulDefenceHostExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulDefenceHostExportJobAsync(const CreateVulDefenceHostExportJobRequest& request, const CreateVulDefenceHostExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulDefenceHostExportJobRequest&;
    using Resp = CreateVulDefenceHostExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulDefenceHostExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulDefenceHostExportJobOutcomeCallable TcssClient::CreateVulDefenceHostExportJobCallable(const CreateVulDefenceHostExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulDefenceHostExportJobOutcome>>();
    CreateVulDefenceHostExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulDefenceHostExportJobRequest&,
        CreateVulDefenceHostExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulExportJobOutcome TcssClient::CreateVulExportJob(const CreateVulExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulExportJobResponse rsp = CreateVulExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulExportJobOutcome(rsp);
        else
            return CreateVulExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateVulExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulExportJobAsync(const CreateVulExportJobRequest& request, const CreateVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulExportJobRequest&;
    using Resp = CreateVulExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulExportJobOutcomeCallable TcssClient::CreateVulExportJobCallable(const CreateVulExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulExportJobOutcome>>();
    CreateVulExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulExportJobRequest&,
        CreateVulExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulImageExportJobOutcome TcssClient::CreateVulImageExportJob(const CreateVulImageExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulImageExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulImageExportJobResponse rsp = CreateVulImageExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulImageExportJobOutcome(rsp);
        else
            return CreateVulImageExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateVulImageExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulImageExportJobAsync(const CreateVulImageExportJobRequest& request, const CreateVulImageExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulImageExportJobRequest&;
    using Resp = CreateVulImageExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulImageExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulImageExportJobOutcomeCallable TcssClient::CreateVulImageExportJobCallable(const CreateVulImageExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulImageExportJobOutcome>>();
    CreateVulImageExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulImageExportJobRequest&,
        CreateVulImageExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateVulScanTaskOutcome TcssClient::CreateVulScanTask(const CreateVulScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulScanTaskResponse rsp = CreateVulScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulScanTaskOutcome(rsp);
        else
            return CreateVulScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVulScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::CreateVulScanTaskAsync(const CreateVulScanTaskRequest& request, const CreateVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulScanTaskRequest&;
    using Resp = CreateVulScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateVulScanTaskOutcomeCallable TcssClient::CreateVulScanTaskCallable(const CreateVulScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulScanTaskOutcome>>();
    CreateVulScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateVulScanTaskRequest&,
        CreateVulScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::CreateWebVulExportJobOutcome TcssClient::CreateWebVulExportJob(const CreateWebVulExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebVulExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebVulExportJobResponse rsp = CreateWebVulExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebVulExportJobOutcome(rsp);
        else
            return CreateWebVulExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateWebVulExportJobOutcome(outcome.GetError());
    }
}

void TcssClient::CreateWebVulExportJobAsync(const CreateWebVulExportJobRequest& request, const CreateWebVulExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebVulExportJobRequest&;
    using Resp = CreateWebVulExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebVulExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::CreateWebVulExportJobOutcomeCallable TcssClient::CreateWebVulExportJobCallable(const CreateWebVulExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebVulExportJobOutcome>>();
    CreateWebVulExportJobAsync(
    request,
    [prom](
        const TcssClient*,
        const CreateWebVulExportJobRequest&,
        CreateWebVulExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteAbnormalProcessRulesOutcome TcssClient::DeleteAbnormalProcessRules(const DeleteAbnormalProcessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAbnormalProcessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAbnormalProcessRulesResponse rsp = DeleteAbnormalProcessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAbnormalProcessRulesOutcome(rsp);
        else
            return DeleteAbnormalProcessRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAbnormalProcessRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteAbnormalProcessRulesAsync(const DeleteAbnormalProcessRulesRequest& request, const DeleteAbnormalProcessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAbnormalProcessRulesRequest&;
    using Resp = DeleteAbnormalProcessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAbnormalProcessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteAbnormalProcessRulesOutcomeCallable TcssClient::DeleteAbnormalProcessRulesCallable(const DeleteAbnormalProcessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAbnormalProcessRulesOutcome>>();
    DeleteAbnormalProcessRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteAbnormalProcessRulesRequest&,
        DeleteAbnormalProcessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteAccessControlRulesOutcome TcssClient::DeleteAccessControlRules(const DeleteAccessControlRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessControlRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessControlRulesResponse rsp = DeleteAccessControlRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessControlRulesOutcome(rsp);
        else
            return DeleteAccessControlRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessControlRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteAccessControlRulesAsync(const DeleteAccessControlRulesRequest& request, const DeleteAccessControlRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccessControlRulesRequest&;
    using Resp = DeleteAccessControlRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccessControlRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteAccessControlRulesOutcomeCallable TcssClient::DeleteAccessControlRulesCallable(const DeleteAccessControlRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccessControlRulesOutcome>>();
    DeleteAccessControlRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteAccessControlRulesRequest&,
        DeleteAccessControlRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteComplianceAssetPolicySetFromWhitelistOutcome TcssClient::DeleteComplianceAssetPolicySetFromWhitelist(const DeleteComplianceAssetPolicySetFromWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteComplianceAssetPolicySetFromWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteComplianceAssetPolicySetFromWhitelistResponse rsp = DeleteComplianceAssetPolicySetFromWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteComplianceAssetPolicySetFromWhitelistOutcome(rsp);
        else
            return DeleteComplianceAssetPolicySetFromWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteComplianceAssetPolicySetFromWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteComplianceAssetPolicySetFromWhitelistAsync(const DeleteComplianceAssetPolicySetFromWhitelistRequest& request, const DeleteComplianceAssetPolicySetFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteComplianceAssetPolicySetFromWhitelistRequest&;
    using Resp = DeleteComplianceAssetPolicySetFromWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteComplianceAssetPolicySetFromWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteComplianceAssetPolicySetFromWhitelistOutcomeCallable TcssClient::DeleteComplianceAssetPolicySetFromWhitelistCallable(const DeleteComplianceAssetPolicySetFromWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteComplianceAssetPolicySetFromWhitelistOutcome>>();
    DeleteComplianceAssetPolicySetFromWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteComplianceAssetPolicySetFromWhitelistRequest&,
        DeleteComplianceAssetPolicySetFromWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistOutcome TcssClient::DeleteCompliancePolicyAssetSetFromWhitelist(const DeleteCompliancePolicyAssetSetFromWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCompliancePolicyAssetSetFromWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCompliancePolicyAssetSetFromWhitelistResponse rsp = DeleteCompliancePolicyAssetSetFromWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCompliancePolicyAssetSetFromWhitelistOutcome(rsp);
        else
            return DeleteCompliancePolicyAssetSetFromWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteCompliancePolicyAssetSetFromWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistAsync(const DeleteCompliancePolicyAssetSetFromWhitelistRequest& request, const DeleteCompliancePolicyAssetSetFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCompliancePolicyAssetSetFromWhitelistRequest&;
    using Resp = DeleteCompliancePolicyAssetSetFromWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCompliancePolicyAssetSetFromWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistOutcomeCallable TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistCallable(const DeleteCompliancePolicyAssetSetFromWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCompliancePolicyAssetSetFromWhitelistOutcome>>();
    DeleteCompliancePolicyAssetSetFromWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteCompliancePolicyAssetSetFromWhitelistRequest&,
        DeleteCompliancePolicyAssetSetFromWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteCompliancePolicyItemFromWhitelistOutcome TcssClient::DeleteCompliancePolicyItemFromWhitelist(const DeleteCompliancePolicyItemFromWhitelistRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCompliancePolicyItemFromWhitelist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCompliancePolicyItemFromWhitelistResponse rsp = DeleteCompliancePolicyItemFromWhitelistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCompliancePolicyItemFromWhitelistOutcome(rsp);
        else
            return DeleteCompliancePolicyItemFromWhitelistOutcome(o.GetError());
    }
    else
    {
        return DeleteCompliancePolicyItemFromWhitelistOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteCompliancePolicyItemFromWhitelistAsync(const DeleteCompliancePolicyItemFromWhitelistRequest& request, const DeleteCompliancePolicyItemFromWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCompliancePolicyItemFromWhitelistRequest&;
    using Resp = DeleteCompliancePolicyItemFromWhitelistResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCompliancePolicyItemFromWhitelist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteCompliancePolicyItemFromWhitelistOutcomeCallable TcssClient::DeleteCompliancePolicyItemFromWhitelistCallable(const DeleteCompliancePolicyItemFromWhitelistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCompliancePolicyItemFromWhitelistOutcome>>();
    DeleteCompliancePolicyItemFromWhitelistAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteCompliancePolicyItemFromWhitelistRequest&,
        DeleteCompliancePolicyItemFromWhitelistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteEscapeWhiteListOutcome TcssClient::DeleteEscapeWhiteList(const DeleteEscapeWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEscapeWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEscapeWhiteListResponse rsp = DeleteEscapeWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEscapeWhiteListOutcome(rsp);
        else
            return DeleteEscapeWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteEscapeWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteEscapeWhiteListAsync(const DeleteEscapeWhiteListRequest& request, const DeleteEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEscapeWhiteListRequest&;
    using Resp = DeleteEscapeWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEscapeWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteEscapeWhiteListOutcomeCallable TcssClient::DeleteEscapeWhiteListCallable(const DeleteEscapeWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEscapeWhiteListOutcome>>();
    DeleteEscapeWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteEscapeWhiteListRequest&,
        DeleteEscapeWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteIgnoreVulOutcome TcssClient::DeleteIgnoreVul(const DeleteIgnoreVulRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIgnoreVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIgnoreVulResponse rsp = DeleteIgnoreVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIgnoreVulOutcome(rsp);
        else
            return DeleteIgnoreVulOutcome(o.GetError());
    }
    else
    {
        return DeleteIgnoreVulOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteIgnoreVulAsync(const DeleteIgnoreVulRequest& request, const DeleteIgnoreVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIgnoreVulRequest&;
    using Resp = DeleteIgnoreVulResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIgnoreVul", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteIgnoreVulOutcomeCallable TcssClient::DeleteIgnoreVulCallable(const DeleteIgnoreVulRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIgnoreVulOutcome>>();
    DeleteIgnoreVulAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteIgnoreVulRequest&,
        DeleteIgnoreVulOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteK8sApiAbnormalRuleOutcome TcssClient::DeleteK8sApiAbnormalRule(const DeleteK8sApiAbnormalRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteK8sApiAbnormalRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteK8sApiAbnormalRuleResponse rsp = DeleteK8sApiAbnormalRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteK8sApiAbnormalRuleOutcome(rsp);
        else
            return DeleteK8sApiAbnormalRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteK8sApiAbnormalRuleOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteK8sApiAbnormalRuleAsync(const DeleteK8sApiAbnormalRuleRequest& request, const DeleteK8sApiAbnormalRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteK8sApiAbnormalRuleRequest&;
    using Resp = DeleteK8sApiAbnormalRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteK8sApiAbnormalRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteK8sApiAbnormalRuleOutcomeCallable TcssClient::DeleteK8sApiAbnormalRuleCallable(const DeleteK8sApiAbnormalRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteK8sApiAbnormalRuleOutcome>>();
    DeleteK8sApiAbnormalRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteK8sApiAbnormalRuleRequest&,
        DeleteK8sApiAbnormalRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteMachineOutcome TcssClient::DeleteMachine(const DeleteMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineResponse rsp = DeleteMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineOutcome(rsp);
        else
            return DeleteMachineOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteMachineAsync(const DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineRequest&;
    using Resp = DeleteMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteMachineOutcomeCallable TcssClient::DeleteMachineCallable(const DeleteMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineOutcome>>();
    DeleteMachineAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteMachineRequest&,
        DeleteMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteNetworkFirewallPolicyDetailOutcome TcssClient::DeleteNetworkFirewallPolicyDetail(const DeleteNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetworkFirewallPolicyDetailResponse rsp = DeleteNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return DeleteNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return DeleteNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteNetworkFirewallPolicyDetailAsync(const DeleteNetworkFirewallPolicyDetailRequest& request, const DeleteNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetworkFirewallPolicyDetailRequest&;
    using Resp = DeleteNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteNetworkFirewallPolicyDetailOutcomeCallable TcssClient::DeleteNetworkFirewallPolicyDetailCallable(const DeleteNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetworkFirewallPolicyDetailOutcome>>();
    DeleteNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteNetworkFirewallPolicyDetailRequest&,
        DeleteNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteRaspRulesOutcome TcssClient::DeleteRaspRules(const DeleteRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRaspRulesResponse rsp = DeleteRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRaspRulesOutcome(rsp);
        else
            return DeleteRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRaspRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteRaspRulesAsync(const DeleteRaspRulesRequest& request, const DeleteRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRaspRulesRequest&;
    using Resp = DeleteRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteRaspRulesOutcomeCallable TcssClient::DeleteRaspRulesCallable(const DeleteRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRaspRulesOutcome>>();
    DeleteRaspRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteRaspRulesRequest&,
        DeleteRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteReverseShellEventsOutcome TcssClient::DeleteReverseShellEvents(const DeleteReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellEventsResponse rsp = DeleteReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellEventsOutcome(rsp);
        else
            return DeleteReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteReverseShellEventsAsync(const DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellEventsRequest&;
    using Resp = DeleteReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteReverseShellEventsOutcomeCallable TcssClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellEventsOutcome>>();
    DeleteReverseShellEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteReverseShellEventsRequest&,
        DeleteReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteReverseShellWhiteListsOutcome TcssClient::DeleteReverseShellWhiteLists(const DeleteReverseShellWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellWhiteListsResponse rsp = DeleteReverseShellWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellWhiteListsOutcome(rsp);
        else
            return DeleteReverseShellWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellWhiteListsOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteReverseShellWhiteListsAsync(const DeleteReverseShellWhiteListsRequest& request, const DeleteReverseShellWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellWhiteListsRequest&;
    using Resp = DeleteReverseShellWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteReverseShellWhiteListsOutcomeCallable TcssClient::DeleteReverseShellWhiteListsCallable(const DeleteReverseShellWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellWhiteListsOutcome>>();
    DeleteReverseShellWhiteListsAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteReverseShellWhiteListsRequest&,
        DeleteReverseShellWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteRiskSyscallEventsOutcome TcssClient::DeleteRiskSyscallEvents(const DeleteRiskSyscallEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskSyscallEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskSyscallEventsResponse rsp = DeleteRiskSyscallEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskSyscallEventsOutcome(rsp);
        else
            return DeleteRiskSyscallEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskSyscallEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteRiskSyscallEventsAsync(const DeleteRiskSyscallEventsRequest& request, const DeleteRiskSyscallEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRiskSyscallEventsRequest&;
    using Resp = DeleteRiskSyscallEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRiskSyscallEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteRiskSyscallEventsOutcomeCallable TcssClient::DeleteRiskSyscallEventsCallable(const DeleteRiskSyscallEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRiskSyscallEventsOutcome>>();
    DeleteRiskSyscallEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteRiskSyscallEventsRequest&,
        DeleteRiskSyscallEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteRiskSyscallWhiteListsOutcome TcssClient::DeleteRiskSyscallWhiteLists(const DeleteRiskSyscallWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskSyscallWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskSyscallWhiteListsResponse rsp = DeleteRiskSyscallWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskSyscallWhiteListsOutcome(rsp);
        else
            return DeleteRiskSyscallWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskSyscallWhiteListsOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteRiskSyscallWhiteListsAsync(const DeleteRiskSyscallWhiteListsRequest& request, const DeleteRiskSyscallWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRiskSyscallWhiteListsRequest&;
    using Resp = DeleteRiskSyscallWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRiskSyscallWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteRiskSyscallWhiteListsOutcomeCallable TcssClient::DeleteRiskSyscallWhiteListsCallable(const DeleteRiskSyscallWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRiskSyscallWhiteListsOutcome>>();
    DeleteRiskSyscallWhiteListsAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteRiskSyscallWhiteListsRequest&,
        DeleteRiskSyscallWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DeleteSearchTemplateOutcome TcssClient::DeleteSearchTemplate(const DeleteSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSearchTemplateResponse rsp = DeleteSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSearchTemplateOutcome(rsp);
        else
            return DeleteSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSearchTemplateOutcome(outcome.GetError());
    }
}

void TcssClient::DeleteSearchTemplateAsync(const DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSearchTemplateRequest&;
    using Resp = DeleteSearchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSearchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DeleteSearchTemplateOutcomeCallable TcssClient::DeleteSearchTemplateCallable(const DeleteSearchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSearchTemplateOutcome>>();
    DeleteSearchTemplateAsync(
    request,
    [prom](
        const TcssClient*,
        const DeleteSearchTemplateRequest&,
        DeleteSearchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeABTestConfigOutcome TcssClient::DescribeABTestConfig(const DescribeABTestConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeABTestConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeABTestConfigResponse rsp = DescribeABTestConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeABTestConfigOutcome(rsp);
        else
            return DescribeABTestConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeABTestConfigOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeABTestConfigAsync(const DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeABTestConfigRequest&;
    using Resp = DescribeABTestConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeABTestConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeABTestConfigOutcomeCallable TcssClient::DescribeABTestConfigCallable(const DescribeABTestConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeABTestConfigOutcome>>();
    DescribeABTestConfigAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeABTestConfigRequest&,
        DescribeABTestConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessDetailOutcome TcssClient::DescribeAbnormalProcessDetail(const DescribeAbnormalProcessDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessDetailResponse rsp = DescribeAbnormalProcessDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessDetailOutcome(rsp);
        else
            return DescribeAbnormalProcessDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessDetailAsync(const DescribeAbnormalProcessDetailRequest& request, const DescribeAbnormalProcessDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessDetailRequest&;
    using Resp = DescribeAbnormalProcessDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessDetailOutcomeCallable TcssClient::DescribeAbnormalProcessDetailCallable(const DescribeAbnormalProcessDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessDetailOutcome>>();
    DescribeAbnormalProcessDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessDetailRequest&,
        DescribeAbnormalProcessDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessEventTendencyOutcome TcssClient::DescribeAbnormalProcessEventTendency(const DescribeAbnormalProcessEventTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessEventTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessEventTendencyResponse rsp = DescribeAbnormalProcessEventTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessEventTendencyOutcome(rsp);
        else
            return DescribeAbnormalProcessEventTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessEventTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessEventTendencyAsync(const DescribeAbnormalProcessEventTendencyRequest& request, const DescribeAbnormalProcessEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessEventTendencyRequest&;
    using Resp = DescribeAbnormalProcessEventTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessEventTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessEventTendencyOutcomeCallable TcssClient::DescribeAbnormalProcessEventTendencyCallable(const DescribeAbnormalProcessEventTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessEventTendencyOutcome>>();
    DescribeAbnormalProcessEventTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessEventTendencyRequest&,
        DescribeAbnormalProcessEventTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessEventsOutcome TcssClient::DescribeAbnormalProcessEvents(const DescribeAbnormalProcessEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessEventsResponse rsp = DescribeAbnormalProcessEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessEventsOutcome(rsp);
        else
            return DescribeAbnormalProcessEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessEventsAsync(const DescribeAbnormalProcessEventsRequest& request, const DescribeAbnormalProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessEventsRequest&;
    using Resp = DescribeAbnormalProcessEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessEventsOutcomeCallable TcssClient::DescribeAbnormalProcessEventsCallable(const DescribeAbnormalProcessEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessEventsOutcome>>();
    DescribeAbnormalProcessEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessEventsRequest&,
        DescribeAbnormalProcessEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessLevelSummaryOutcome TcssClient::DescribeAbnormalProcessLevelSummary(const DescribeAbnormalProcessLevelSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessLevelSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessLevelSummaryResponse rsp = DescribeAbnormalProcessLevelSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessLevelSummaryOutcome(rsp);
        else
            return DescribeAbnormalProcessLevelSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessLevelSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessLevelSummaryAsync(const DescribeAbnormalProcessLevelSummaryRequest& request, const DescribeAbnormalProcessLevelSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessLevelSummaryRequest&;
    using Resp = DescribeAbnormalProcessLevelSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessLevelSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessLevelSummaryOutcomeCallable TcssClient::DescribeAbnormalProcessLevelSummaryCallable(const DescribeAbnormalProcessLevelSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessLevelSummaryOutcome>>();
    DescribeAbnormalProcessLevelSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessLevelSummaryRequest&,
        DescribeAbnormalProcessLevelSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessRuleDetailOutcome TcssClient::DescribeAbnormalProcessRuleDetail(const DescribeAbnormalProcessRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessRuleDetailResponse rsp = DescribeAbnormalProcessRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessRuleDetailOutcome(rsp);
        else
            return DescribeAbnormalProcessRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessRuleDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessRuleDetailAsync(const DescribeAbnormalProcessRuleDetailRequest& request, const DescribeAbnormalProcessRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessRuleDetailRequest&;
    using Resp = DescribeAbnormalProcessRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessRuleDetailOutcomeCallable TcssClient::DescribeAbnormalProcessRuleDetailCallable(const DescribeAbnormalProcessRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessRuleDetailOutcome>>();
    DescribeAbnormalProcessRuleDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessRuleDetailRequest&,
        DescribeAbnormalProcessRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAbnormalProcessRulesOutcome TcssClient::DescribeAbnormalProcessRules(const DescribeAbnormalProcessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalProcessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalProcessRulesResponse rsp = DescribeAbnormalProcessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalProcessRulesOutcome(rsp);
        else
            return DescribeAbnormalProcessRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalProcessRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAbnormalProcessRulesAsync(const DescribeAbnormalProcessRulesRequest& request, const DescribeAbnormalProcessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalProcessRulesRequest&;
    using Resp = DescribeAbnormalProcessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalProcessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAbnormalProcessRulesOutcomeCallable TcssClient::DescribeAbnormalProcessRulesCallable(const DescribeAbnormalProcessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalProcessRulesOutcome>>();
    DescribeAbnormalProcessRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAbnormalProcessRulesRequest&,
        DescribeAbnormalProcessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAccessControlDetailOutcome TcssClient::DescribeAccessControlDetail(const DescribeAccessControlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessControlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessControlDetailResponse rsp = DescribeAccessControlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessControlDetailOutcome(rsp);
        else
            return DescribeAccessControlDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessControlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAccessControlDetailAsync(const DescribeAccessControlDetailRequest& request, const DescribeAccessControlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessControlDetailRequest&;
    using Resp = DescribeAccessControlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessControlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAccessControlDetailOutcomeCallable TcssClient::DescribeAccessControlDetailCallable(const DescribeAccessControlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessControlDetailOutcome>>();
    DescribeAccessControlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAccessControlDetailRequest&,
        DescribeAccessControlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAccessControlEventsOutcome TcssClient::DescribeAccessControlEvents(const DescribeAccessControlEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessControlEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessControlEventsResponse rsp = DescribeAccessControlEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessControlEventsOutcome(rsp);
        else
            return DescribeAccessControlEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessControlEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAccessControlEventsAsync(const DescribeAccessControlEventsRequest& request, const DescribeAccessControlEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessControlEventsRequest&;
    using Resp = DescribeAccessControlEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessControlEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAccessControlEventsOutcomeCallable TcssClient::DescribeAccessControlEventsCallable(const DescribeAccessControlEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessControlEventsOutcome>>();
    DescribeAccessControlEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAccessControlEventsRequest&,
        DescribeAccessControlEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAccessControlEventsExportOutcome TcssClient::DescribeAccessControlEventsExport(const DescribeAccessControlEventsExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessControlEventsExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessControlEventsExportResponse rsp = DescribeAccessControlEventsExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessControlEventsExportOutcome(rsp);
        else
            return DescribeAccessControlEventsExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessControlEventsExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAccessControlEventsExportAsync(const DescribeAccessControlEventsExportRequest& request, const DescribeAccessControlEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessControlEventsExportRequest&;
    using Resp = DescribeAccessControlEventsExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessControlEventsExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAccessControlEventsExportOutcomeCallable TcssClient::DescribeAccessControlEventsExportCallable(const DescribeAccessControlEventsExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessControlEventsExportOutcome>>();
    DescribeAccessControlEventsExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAccessControlEventsExportRequest&,
        DescribeAccessControlEventsExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAccessControlRuleDetailOutcome TcssClient::DescribeAccessControlRuleDetail(const DescribeAccessControlRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessControlRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessControlRuleDetailResponse rsp = DescribeAccessControlRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessControlRuleDetailOutcome(rsp);
        else
            return DescribeAccessControlRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessControlRuleDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAccessControlRuleDetailAsync(const DescribeAccessControlRuleDetailRequest& request, const DescribeAccessControlRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessControlRuleDetailRequest&;
    using Resp = DescribeAccessControlRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessControlRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAccessControlRuleDetailOutcomeCallable TcssClient::DescribeAccessControlRuleDetailCallable(const DescribeAccessControlRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessControlRuleDetailOutcome>>();
    DescribeAccessControlRuleDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAccessControlRuleDetailRequest&,
        DescribeAccessControlRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAccessControlRulesOutcome TcssClient::DescribeAccessControlRules(const DescribeAccessControlRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessControlRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessControlRulesResponse rsp = DescribeAccessControlRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessControlRulesOutcome(rsp);
        else
            return DescribeAccessControlRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessControlRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAccessControlRulesAsync(const DescribeAccessControlRulesRequest& request, const DescribeAccessControlRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessControlRulesRequest&;
    using Resp = DescribeAccessControlRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessControlRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAccessControlRulesOutcomeCallable TcssClient::DescribeAccessControlRulesCallable(const DescribeAccessControlRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessControlRulesOutcome>>();
    DescribeAccessControlRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAccessControlRulesRequest&,
        DescribeAccessControlRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAffectedClusterCountOutcome TcssClient::DescribeAffectedClusterCount(const DescribeAffectedClusterCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAffectedClusterCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAffectedClusterCountResponse rsp = DescribeAffectedClusterCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAffectedClusterCountOutcome(rsp);
        else
            return DescribeAffectedClusterCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAffectedClusterCountOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAffectedClusterCountAsync(const DescribeAffectedClusterCountRequest& request, const DescribeAffectedClusterCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAffectedClusterCountRequest&;
    using Resp = DescribeAffectedClusterCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAffectedClusterCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAffectedClusterCountOutcomeCallable TcssClient::DescribeAffectedClusterCountCallable(const DescribeAffectedClusterCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAffectedClusterCountOutcome>>();
    DescribeAffectedClusterCountAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAffectedClusterCountRequest&,
        DescribeAffectedClusterCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAffectedNodeListOutcome TcssClient::DescribeAffectedNodeList(const DescribeAffectedNodeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAffectedNodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAffectedNodeListResponse rsp = DescribeAffectedNodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAffectedNodeListOutcome(rsp);
        else
            return DescribeAffectedNodeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAffectedNodeListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAffectedNodeListAsync(const DescribeAffectedNodeListRequest& request, const DescribeAffectedNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAffectedNodeListRequest&;
    using Resp = DescribeAffectedNodeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAffectedNodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAffectedNodeListOutcomeCallable TcssClient::DescribeAffectedNodeListCallable(const DescribeAffectedNodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAffectedNodeListOutcome>>();
    DescribeAffectedNodeListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAffectedNodeListRequest&,
        DescribeAffectedNodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAffectedWorkloadListOutcome TcssClient::DescribeAffectedWorkloadList(const DescribeAffectedWorkloadListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAffectedWorkloadList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAffectedWorkloadListResponse rsp = DescribeAffectedWorkloadListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAffectedWorkloadListOutcome(rsp);
        else
            return DescribeAffectedWorkloadListOutcome(o.GetError());
    }
    else
    {
        return DescribeAffectedWorkloadListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAffectedWorkloadListAsync(const DescribeAffectedWorkloadListRequest& request, const DescribeAffectedWorkloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAffectedWorkloadListRequest&;
    using Resp = DescribeAffectedWorkloadListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAffectedWorkloadList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAffectedWorkloadListOutcomeCallable TcssClient::DescribeAffectedWorkloadListCallable(const DescribeAffectedWorkloadListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAffectedWorkloadListOutcome>>();
    DescribeAffectedWorkloadListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAffectedWorkloadListRequest&,
        DescribeAffectedWorkloadListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAgentDaemonSetCmdOutcome TcssClient::DescribeAgentDaemonSetCmd(const DescribeAgentDaemonSetCmdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentDaemonSetCmd");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentDaemonSetCmdResponse rsp = DescribeAgentDaemonSetCmdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentDaemonSetCmdOutcome(rsp);
        else
            return DescribeAgentDaemonSetCmdOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentDaemonSetCmdOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAgentDaemonSetCmdAsync(const DescribeAgentDaemonSetCmdRequest& request, const DescribeAgentDaemonSetCmdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentDaemonSetCmdRequest&;
    using Resp = DescribeAgentDaemonSetCmdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentDaemonSetCmd", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAgentDaemonSetCmdOutcomeCallable TcssClient::DescribeAgentDaemonSetCmdCallable(const DescribeAgentDaemonSetCmdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentDaemonSetCmdOutcome>>();
    DescribeAgentDaemonSetCmdAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAgentDaemonSetCmdRequest&,
        DescribeAgentDaemonSetCmdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAgentInstallCommandOutcome TcssClient::DescribeAgentInstallCommand(const DescribeAgentInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstallCommandResponse rsp = DescribeAgentInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstallCommandOutcome(rsp);
        else
            return DescribeAgentInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstallCommandOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAgentInstallCommandAsync(const DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentInstallCommandRequest&;
    using Resp = DescribeAgentInstallCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentInstallCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAgentInstallCommandOutcomeCallable TcssClient::DescribeAgentInstallCommandCallable(const DescribeAgentInstallCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentInstallCommandOutcome>>();
    DescribeAgentInstallCommandAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAgentInstallCommandRequest&,
        DescribeAgentInstallCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetAppServiceListOutcome TcssClient::DescribeAssetAppServiceList(const DescribeAssetAppServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppServiceListResponse rsp = DescribeAssetAppServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppServiceListOutcome(rsp);
        else
            return DescribeAssetAppServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppServiceListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetAppServiceListAsync(const DescribeAssetAppServiceListRequest& request, const DescribeAssetAppServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetAppServiceListRequest&;
    using Resp = DescribeAssetAppServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetAppServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetAppServiceListOutcomeCallable TcssClient::DescribeAssetAppServiceListCallable(const DescribeAssetAppServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetAppServiceListOutcome>>();
    DescribeAssetAppServiceListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetAppServiceListRequest&,
        DescribeAssetAppServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetClusterListOutcome TcssClient::DescribeAssetClusterList(const DescribeAssetClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetClusterListResponse rsp = DescribeAssetClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetClusterListOutcome(rsp);
        else
            return DescribeAssetClusterListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetClusterListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetClusterListAsync(const DescribeAssetClusterListRequest& request, const DescribeAssetClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetClusterListRequest&;
    using Resp = DescribeAssetClusterListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetClusterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetClusterListOutcomeCallable TcssClient::DescribeAssetClusterListCallable(const DescribeAssetClusterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetClusterListOutcome>>();
    DescribeAssetClusterListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetClusterListRequest&,
        DescribeAssetClusterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetComponentListOutcome TcssClient::DescribeAssetComponentList(const DescribeAssetComponentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetComponentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetComponentListResponse rsp = DescribeAssetComponentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetComponentListOutcome(rsp);
        else
            return DescribeAssetComponentListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetComponentListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetComponentListAsync(const DescribeAssetComponentListRequest& request, const DescribeAssetComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetComponentListRequest&;
    using Resp = DescribeAssetComponentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetComponentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetComponentListOutcomeCallable TcssClient::DescribeAssetComponentListCallable(const DescribeAssetComponentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetComponentListOutcome>>();
    DescribeAssetComponentListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetComponentListRequest&,
        DescribeAssetComponentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetContainerDetailOutcome TcssClient::DescribeAssetContainerDetail(const DescribeAssetContainerDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetContainerDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetContainerDetailResponse rsp = DescribeAssetContainerDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetContainerDetailOutcome(rsp);
        else
            return DescribeAssetContainerDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetContainerDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetContainerDetailAsync(const DescribeAssetContainerDetailRequest& request, const DescribeAssetContainerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetContainerDetailRequest&;
    using Resp = DescribeAssetContainerDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetContainerDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetContainerDetailOutcomeCallable TcssClient::DescribeAssetContainerDetailCallable(const DescribeAssetContainerDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetContainerDetailOutcome>>();
    DescribeAssetContainerDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetContainerDetailRequest&,
        DescribeAssetContainerDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetContainerListOutcome TcssClient::DescribeAssetContainerList(const DescribeAssetContainerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetContainerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetContainerListResponse rsp = DescribeAssetContainerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetContainerListOutcome(rsp);
        else
            return DescribeAssetContainerListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetContainerListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetContainerListAsync(const DescribeAssetContainerListRequest& request, const DescribeAssetContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetContainerListRequest&;
    using Resp = DescribeAssetContainerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetContainerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetContainerListOutcomeCallable TcssClient::DescribeAssetContainerListCallable(const DescribeAssetContainerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetContainerListOutcome>>();
    DescribeAssetContainerListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetContainerListRequest&,
        DescribeAssetContainerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetDBServiceListOutcome TcssClient::DescribeAssetDBServiceList(const DescribeAssetDBServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDBServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDBServiceListResponse rsp = DescribeAssetDBServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDBServiceListOutcome(rsp);
        else
            return DescribeAssetDBServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDBServiceListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetDBServiceListAsync(const DescribeAssetDBServiceListRequest& request, const DescribeAssetDBServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDBServiceListRequest&;
    using Resp = DescribeAssetDBServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDBServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetDBServiceListOutcomeCallable TcssClient::DescribeAssetDBServiceListCallable(const DescribeAssetDBServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDBServiceListOutcome>>();
    DescribeAssetDBServiceListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetDBServiceListRequest&,
        DescribeAssetDBServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetHostDetailOutcome TcssClient::DescribeAssetHostDetail(const DescribeAssetHostDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetHostDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetHostDetailResponse rsp = DescribeAssetHostDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetHostDetailOutcome(rsp);
        else
            return DescribeAssetHostDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetHostDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetHostDetailAsync(const DescribeAssetHostDetailRequest& request, const DescribeAssetHostDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetHostDetailRequest&;
    using Resp = DescribeAssetHostDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetHostDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetHostDetailOutcomeCallable TcssClient::DescribeAssetHostDetailCallable(const DescribeAssetHostDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetHostDetailOutcome>>();
    DescribeAssetHostDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetHostDetailRequest&,
        DescribeAssetHostDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetHostListOutcome TcssClient::DescribeAssetHostList(const DescribeAssetHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetHostListResponse rsp = DescribeAssetHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetHostListOutcome(rsp);
        else
            return DescribeAssetHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetHostListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetHostListAsync(const DescribeAssetHostListRequest& request, const DescribeAssetHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetHostListRequest&;
    using Resp = DescribeAssetHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetHostListOutcomeCallable TcssClient::DescribeAssetHostListCallable(const DescribeAssetHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetHostListOutcome>>();
    DescribeAssetHostListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetHostListRequest&,
        DescribeAssetHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageBindRuleInfoOutcome TcssClient::DescribeAssetImageBindRuleInfo(const DescribeAssetImageBindRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageBindRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageBindRuleInfoResponse rsp = DescribeAssetImageBindRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageBindRuleInfoOutcome(rsp);
        else
            return DescribeAssetImageBindRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageBindRuleInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageBindRuleInfoAsync(const DescribeAssetImageBindRuleInfoRequest& request, const DescribeAssetImageBindRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageBindRuleInfoRequest&;
    using Resp = DescribeAssetImageBindRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageBindRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageBindRuleInfoOutcomeCallable TcssClient::DescribeAssetImageBindRuleInfoCallable(const DescribeAssetImageBindRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageBindRuleInfoOutcome>>();
    DescribeAssetImageBindRuleInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageBindRuleInfoRequest&,
        DescribeAssetImageBindRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageDetailOutcome TcssClient::DescribeAssetImageDetail(const DescribeAssetImageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageDetailResponse rsp = DescribeAssetImageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageDetailOutcome(rsp);
        else
            return DescribeAssetImageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageDetailAsync(const DescribeAssetImageDetailRequest& request, const DescribeAssetImageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageDetailRequest&;
    using Resp = DescribeAssetImageDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageDetailOutcomeCallable TcssClient::DescribeAssetImageDetailCallable(const DescribeAssetImageDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageDetailOutcome>>();
    DescribeAssetImageDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageDetailRequest&,
        DescribeAssetImageDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageHostListOutcome TcssClient::DescribeAssetImageHostList(const DescribeAssetImageHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageHostListResponse rsp = DescribeAssetImageHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageHostListOutcome(rsp);
        else
            return DescribeAssetImageHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageHostListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageHostListAsync(const DescribeAssetImageHostListRequest& request, const DescribeAssetImageHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageHostListRequest&;
    using Resp = DescribeAssetImageHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageHostListOutcomeCallable TcssClient::DescribeAssetImageHostListCallable(const DescribeAssetImageHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageHostListOutcome>>();
    DescribeAssetImageHostListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageHostListRequest&,
        DescribeAssetImageHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageListOutcome TcssClient::DescribeAssetImageList(const DescribeAssetImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageListResponse rsp = DescribeAssetImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageListOutcome(rsp);
        else
            return DescribeAssetImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageListAsync(const DescribeAssetImageListRequest& request, const DescribeAssetImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageListRequest&;
    using Resp = DescribeAssetImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageListOutcomeCallable TcssClient::DescribeAssetImageListCallable(const DescribeAssetImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageListOutcome>>();
    DescribeAssetImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageListRequest&,
        DescribeAssetImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryAssetStatusOutcome TcssClient::DescribeAssetImageRegistryAssetStatus(const DescribeAssetImageRegistryAssetStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryAssetStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryAssetStatusResponse rsp = DescribeAssetImageRegistryAssetStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryAssetStatusOutcome(rsp);
        else
            return DescribeAssetImageRegistryAssetStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryAssetStatusOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryAssetStatusAsync(const DescribeAssetImageRegistryAssetStatusRequest& request, const DescribeAssetImageRegistryAssetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryAssetStatusRequest&;
    using Resp = DescribeAssetImageRegistryAssetStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryAssetStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryAssetStatusOutcomeCallable TcssClient::DescribeAssetImageRegistryAssetStatusCallable(const DescribeAssetImageRegistryAssetStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryAssetStatusOutcome>>();
    DescribeAssetImageRegistryAssetStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryAssetStatusRequest&,
        DescribeAssetImageRegistryAssetStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryDetailOutcome TcssClient::DescribeAssetImageRegistryDetail(const DescribeAssetImageRegistryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryDetailResponse rsp = DescribeAssetImageRegistryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryDetailOutcome(rsp);
        else
            return DescribeAssetImageRegistryDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryDetailAsync(const DescribeAssetImageRegistryDetailRequest& request, const DescribeAssetImageRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryDetailRequest&;
    using Resp = DescribeAssetImageRegistryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryDetailOutcomeCallable TcssClient::DescribeAssetImageRegistryDetailCallable(const DescribeAssetImageRegistryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryDetailOutcome>>();
    DescribeAssetImageRegistryDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryDetailRequest&,
        DescribeAssetImageRegistryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryListOutcome TcssClient::DescribeAssetImageRegistryList(const DescribeAssetImageRegistryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryListResponse rsp = DescribeAssetImageRegistryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryListOutcome(rsp);
        else
            return DescribeAssetImageRegistryListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryListAsync(const DescribeAssetImageRegistryListRequest& request, const DescribeAssetImageRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryListRequest&;
    using Resp = DescribeAssetImageRegistryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryListOutcomeCallable TcssClient::DescribeAssetImageRegistryListCallable(const DescribeAssetImageRegistryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryListOutcome>>();
    DescribeAssetImageRegistryListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryListRequest&,
        DescribeAssetImageRegistryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryListExportOutcome TcssClient::DescribeAssetImageRegistryListExport(const DescribeAssetImageRegistryListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryListExportResponse rsp = DescribeAssetImageRegistryListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryListExportOutcome(rsp);
        else
            return DescribeAssetImageRegistryListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryListExportAsync(const DescribeAssetImageRegistryListExportRequest& request, const DescribeAssetImageRegistryListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryListExportRequest&;
    using Resp = DescribeAssetImageRegistryListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryListExportCallable(const DescribeAssetImageRegistryListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryListExportOutcome>>();
    DescribeAssetImageRegistryListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryListExportRequest&,
        DescribeAssetImageRegistryListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryRegistryDetailOutcome TcssClient::DescribeAssetImageRegistryRegistryDetail(const DescribeAssetImageRegistryRegistryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryRegistryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryRegistryDetailResponse rsp = DescribeAssetImageRegistryRegistryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryRegistryDetailOutcome(rsp);
        else
            return DescribeAssetImageRegistryRegistryDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryRegistryDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryRegistryDetailAsync(const DescribeAssetImageRegistryRegistryDetailRequest& request, const DescribeAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryRegistryDetailRequest&;
    using Resp = DescribeAssetImageRegistryRegistryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryRegistryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::DescribeAssetImageRegistryRegistryDetailCallable(const DescribeAssetImageRegistryRegistryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryRegistryDetailOutcome>>();
    DescribeAssetImageRegistryRegistryDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryRegistryDetailRequest&,
        DescribeAssetImageRegistryRegistryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryRegistryListOutcome TcssClient::DescribeAssetImageRegistryRegistryList(const DescribeAssetImageRegistryRegistryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryRegistryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryRegistryListResponse rsp = DescribeAssetImageRegistryRegistryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryRegistryListOutcome(rsp);
        else
            return DescribeAssetImageRegistryRegistryListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryRegistryListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryRegistryListAsync(const DescribeAssetImageRegistryRegistryListRequest& request, const DescribeAssetImageRegistryRegistryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryRegistryListRequest&;
    using Resp = DescribeAssetImageRegistryRegistryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryRegistryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryRegistryListOutcomeCallable TcssClient::DescribeAssetImageRegistryRegistryListCallable(const DescribeAssetImageRegistryRegistryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryRegistryListOutcome>>();
    DescribeAssetImageRegistryRegistryListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryRegistryListRequest&,
        DescribeAssetImageRegistryRegistryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryRiskInfoListOutcome TcssClient::DescribeAssetImageRegistryRiskInfoList(const DescribeAssetImageRegistryRiskInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryRiskInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryRiskInfoListResponse rsp = DescribeAssetImageRegistryRiskInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryRiskInfoListOutcome(rsp);
        else
            return DescribeAssetImageRegistryRiskInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryRiskInfoListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryRiskInfoListAsync(const DescribeAssetImageRegistryRiskInfoListRequest& request, const DescribeAssetImageRegistryRiskInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryRiskInfoListRequest&;
    using Resp = DescribeAssetImageRegistryRiskInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryRiskInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryRiskInfoListOutcomeCallable TcssClient::DescribeAssetImageRegistryRiskInfoListCallable(const DescribeAssetImageRegistryRiskInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryRiskInfoListOutcome>>();
    DescribeAssetImageRegistryRiskInfoListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryRiskInfoListRequest&,
        DescribeAssetImageRegistryRiskInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryRiskListExportOutcome TcssClient::DescribeAssetImageRegistryRiskListExport(const DescribeAssetImageRegistryRiskListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryRiskListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryRiskListExportResponse rsp = DescribeAssetImageRegistryRiskListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryRiskListExportOutcome(rsp);
        else
            return DescribeAssetImageRegistryRiskListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryRiskListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryRiskListExportAsync(const DescribeAssetImageRegistryRiskListExportRequest& request, const DescribeAssetImageRegistryRiskListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryRiskListExportRequest&;
    using Resp = DescribeAssetImageRegistryRiskListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryRiskListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryRiskListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryRiskListExportCallable(const DescribeAssetImageRegistryRiskListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryRiskListExportOutcome>>();
    DescribeAssetImageRegistryRiskListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryRiskListExportRequest&,
        DescribeAssetImageRegistryRiskListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryScanStatusOneKeyOutcome TcssClient::DescribeAssetImageRegistryScanStatusOneKey(const DescribeAssetImageRegistryScanStatusOneKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryScanStatusOneKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryScanStatusOneKeyResponse rsp = DescribeAssetImageRegistryScanStatusOneKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryScanStatusOneKeyOutcome(rsp);
        else
            return DescribeAssetImageRegistryScanStatusOneKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryScanStatusOneKeyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryScanStatusOneKeyAsync(const DescribeAssetImageRegistryScanStatusOneKeyRequest& request, const DescribeAssetImageRegistryScanStatusOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryScanStatusOneKeyRequest&;
    using Resp = DescribeAssetImageRegistryScanStatusOneKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryScanStatusOneKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryScanStatusOneKeyOutcomeCallable TcssClient::DescribeAssetImageRegistryScanStatusOneKeyCallable(const DescribeAssetImageRegistryScanStatusOneKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryScanStatusOneKeyOutcome>>();
    DescribeAssetImageRegistryScanStatusOneKeyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryScanStatusOneKeyRequest&,
        DescribeAssetImageRegistryScanStatusOneKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistrySummaryOutcome TcssClient::DescribeAssetImageRegistrySummary(const DescribeAssetImageRegistrySummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistrySummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistrySummaryResponse rsp = DescribeAssetImageRegistrySummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistrySummaryOutcome(rsp);
        else
            return DescribeAssetImageRegistrySummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistrySummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistrySummaryAsync(const DescribeAssetImageRegistrySummaryRequest& request, const DescribeAssetImageRegistrySummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistrySummaryRequest&;
    using Resp = DescribeAssetImageRegistrySummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistrySummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistrySummaryOutcomeCallable TcssClient::DescribeAssetImageRegistrySummaryCallable(const DescribeAssetImageRegistrySummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistrySummaryOutcome>>();
    DescribeAssetImageRegistrySummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistrySummaryRequest&,
        DescribeAssetImageRegistrySummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryVirusListOutcome TcssClient::DescribeAssetImageRegistryVirusList(const DescribeAssetImageRegistryVirusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryVirusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryVirusListResponse rsp = DescribeAssetImageRegistryVirusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryVirusListOutcome(rsp);
        else
            return DescribeAssetImageRegistryVirusListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryVirusListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryVirusListAsync(const DescribeAssetImageRegistryVirusListRequest& request, const DescribeAssetImageRegistryVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryVirusListRequest&;
    using Resp = DescribeAssetImageRegistryVirusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryVirusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryVirusListOutcomeCallable TcssClient::DescribeAssetImageRegistryVirusListCallable(const DescribeAssetImageRegistryVirusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryVirusListOutcome>>();
    DescribeAssetImageRegistryVirusListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryVirusListRequest&,
        DescribeAssetImageRegistryVirusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryVirusListExportOutcome TcssClient::DescribeAssetImageRegistryVirusListExport(const DescribeAssetImageRegistryVirusListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryVirusListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryVirusListExportResponse rsp = DescribeAssetImageRegistryVirusListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryVirusListExportOutcome(rsp);
        else
            return DescribeAssetImageRegistryVirusListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryVirusListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryVirusListExportAsync(const DescribeAssetImageRegistryVirusListExportRequest& request, const DescribeAssetImageRegistryVirusListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryVirusListExportRequest&;
    using Resp = DescribeAssetImageRegistryVirusListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryVirusListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryVirusListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryVirusListExportCallable(const DescribeAssetImageRegistryVirusListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryVirusListExportOutcome>>();
    DescribeAssetImageRegistryVirusListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryVirusListExportRequest&,
        DescribeAssetImageRegistryVirusListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryVulListOutcome TcssClient::DescribeAssetImageRegistryVulList(const DescribeAssetImageRegistryVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryVulListResponse rsp = DescribeAssetImageRegistryVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryVulListOutcome(rsp);
        else
            return DescribeAssetImageRegistryVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryVulListAsync(const DescribeAssetImageRegistryVulListRequest& request, const DescribeAssetImageRegistryVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryVulListRequest&;
    using Resp = DescribeAssetImageRegistryVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryVulListOutcomeCallable TcssClient::DescribeAssetImageRegistryVulListCallable(const DescribeAssetImageRegistryVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryVulListOutcome>>();
    DescribeAssetImageRegistryVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryVulListRequest&,
        DescribeAssetImageRegistryVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRegistryVulListExportOutcome TcssClient::DescribeAssetImageRegistryVulListExport(const DescribeAssetImageRegistryVulListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRegistryVulListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRegistryVulListExportResponse rsp = DescribeAssetImageRegistryVulListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRegistryVulListExportOutcome(rsp);
        else
            return DescribeAssetImageRegistryVulListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRegistryVulListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRegistryVulListExportAsync(const DescribeAssetImageRegistryVulListExportRequest& request, const DescribeAssetImageRegistryVulListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRegistryVulListExportRequest&;
    using Resp = DescribeAssetImageRegistryVulListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRegistryVulListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRegistryVulListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryVulListExportCallable(const DescribeAssetImageRegistryVulListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRegistryVulListExportOutcome>>();
    DescribeAssetImageRegistryVulListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRegistryVulListExportRequest&,
        DescribeAssetImageRegistryVulListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRiskListOutcome TcssClient::DescribeAssetImageRiskList(const DescribeAssetImageRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRiskListResponse rsp = DescribeAssetImageRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRiskListOutcome(rsp);
        else
            return DescribeAssetImageRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRiskListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRiskListAsync(const DescribeAssetImageRiskListRequest& request, const DescribeAssetImageRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRiskListRequest&;
    using Resp = DescribeAssetImageRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRiskListOutcomeCallable TcssClient::DescribeAssetImageRiskListCallable(const DescribeAssetImageRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRiskListOutcome>>();
    DescribeAssetImageRiskListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRiskListRequest&,
        DescribeAssetImageRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageRiskListExportOutcome TcssClient::DescribeAssetImageRiskListExport(const DescribeAssetImageRiskListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageRiskListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageRiskListExportResponse rsp = DescribeAssetImageRiskListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageRiskListExportOutcome(rsp);
        else
            return DescribeAssetImageRiskListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageRiskListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageRiskListExportAsync(const DescribeAssetImageRiskListExportRequest& request, const DescribeAssetImageRiskListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageRiskListExportRequest&;
    using Resp = DescribeAssetImageRiskListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageRiskListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageRiskListExportOutcomeCallable TcssClient::DescribeAssetImageRiskListExportCallable(const DescribeAssetImageRiskListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageRiskListExportOutcome>>();
    DescribeAssetImageRiskListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageRiskListExportRequest&,
        DescribeAssetImageRiskListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageScanSettingOutcome TcssClient::DescribeAssetImageScanSetting(const DescribeAssetImageScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageScanSettingResponse rsp = DescribeAssetImageScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageScanSettingOutcome(rsp);
        else
            return DescribeAssetImageScanSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageScanSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageScanSettingAsync(const DescribeAssetImageScanSettingRequest& request, const DescribeAssetImageScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageScanSettingRequest&;
    using Resp = DescribeAssetImageScanSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageScanSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageScanSettingOutcomeCallable TcssClient::DescribeAssetImageScanSettingCallable(const DescribeAssetImageScanSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageScanSettingOutcome>>();
    DescribeAssetImageScanSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageScanSettingRequest&,
        DescribeAssetImageScanSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageScanStatusOutcome TcssClient::DescribeAssetImageScanStatus(const DescribeAssetImageScanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageScanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageScanStatusResponse rsp = DescribeAssetImageScanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageScanStatusOutcome(rsp);
        else
            return DescribeAssetImageScanStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageScanStatusOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageScanStatusAsync(const DescribeAssetImageScanStatusRequest& request, const DescribeAssetImageScanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageScanStatusRequest&;
    using Resp = DescribeAssetImageScanStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageScanStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageScanStatusOutcomeCallable TcssClient::DescribeAssetImageScanStatusCallable(const DescribeAssetImageScanStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageScanStatusOutcome>>();
    DescribeAssetImageScanStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageScanStatusRequest&,
        DescribeAssetImageScanStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageScanTaskOutcome TcssClient::DescribeAssetImageScanTask(const DescribeAssetImageScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageScanTaskResponse rsp = DescribeAssetImageScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageScanTaskOutcome(rsp);
        else
            return DescribeAssetImageScanTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageScanTaskAsync(const DescribeAssetImageScanTaskRequest& request, const DescribeAssetImageScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageScanTaskRequest&;
    using Resp = DescribeAssetImageScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageScanTaskOutcomeCallable TcssClient::DescribeAssetImageScanTaskCallable(const DescribeAssetImageScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageScanTaskOutcome>>();
    DescribeAssetImageScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageScanTaskRequest&,
        DescribeAssetImageScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageSimpleListOutcome TcssClient::DescribeAssetImageSimpleList(const DescribeAssetImageSimpleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageSimpleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageSimpleListResponse rsp = DescribeAssetImageSimpleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageSimpleListOutcome(rsp);
        else
            return DescribeAssetImageSimpleListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageSimpleListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageSimpleListAsync(const DescribeAssetImageSimpleListRequest& request, const DescribeAssetImageSimpleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageSimpleListRequest&;
    using Resp = DescribeAssetImageSimpleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageSimpleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageSimpleListOutcomeCallable TcssClient::DescribeAssetImageSimpleListCallable(const DescribeAssetImageSimpleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageSimpleListOutcome>>();
    DescribeAssetImageSimpleListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageSimpleListRequest&,
        DescribeAssetImageSimpleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageVirusListOutcome TcssClient::DescribeAssetImageVirusList(const DescribeAssetImageVirusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageVirusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageVirusListResponse rsp = DescribeAssetImageVirusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageVirusListOutcome(rsp);
        else
            return DescribeAssetImageVirusListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageVirusListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageVirusListAsync(const DescribeAssetImageVirusListRequest& request, const DescribeAssetImageVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageVirusListRequest&;
    using Resp = DescribeAssetImageVirusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageVirusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageVirusListOutcomeCallable TcssClient::DescribeAssetImageVirusListCallable(const DescribeAssetImageVirusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageVirusListOutcome>>();
    DescribeAssetImageVirusListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageVirusListRequest&,
        DescribeAssetImageVirusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageVirusListExportOutcome TcssClient::DescribeAssetImageVirusListExport(const DescribeAssetImageVirusListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageVirusListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageVirusListExportResponse rsp = DescribeAssetImageVirusListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageVirusListExportOutcome(rsp);
        else
            return DescribeAssetImageVirusListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageVirusListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageVirusListExportAsync(const DescribeAssetImageVirusListExportRequest& request, const DescribeAssetImageVirusListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageVirusListExportRequest&;
    using Resp = DescribeAssetImageVirusListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageVirusListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageVirusListExportOutcomeCallable TcssClient::DescribeAssetImageVirusListExportCallable(const DescribeAssetImageVirusListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageVirusListExportOutcome>>();
    DescribeAssetImageVirusListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageVirusListExportRequest&,
        DescribeAssetImageVirusListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageVulListOutcome TcssClient::DescribeAssetImageVulList(const DescribeAssetImageVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageVulListResponse rsp = DescribeAssetImageVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageVulListOutcome(rsp);
        else
            return DescribeAssetImageVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageVulListAsync(const DescribeAssetImageVulListRequest& request, const DescribeAssetImageVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageVulListRequest&;
    using Resp = DescribeAssetImageVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageVulListOutcomeCallable TcssClient::DescribeAssetImageVulListCallable(const DescribeAssetImageVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageVulListOutcome>>();
    DescribeAssetImageVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageVulListRequest&,
        DescribeAssetImageVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetImageVulListExportOutcome TcssClient::DescribeAssetImageVulListExport(const DescribeAssetImageVulListExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetImageVulListExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetImageVulListExportResponse rsp = DescribeAssetImageVulListExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetImageVulListExportOutcome(rsp);
        else
            return DescribeAssetImageVulListExportOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetImageVulListExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetImageVulListExportAsync(const DescribeAssetImageVulListExportRequest& request, const DescribeAssetImageVulListExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetImageVulListExportRequest&;
    using Resp = DescribeAssetImageVulListExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetImageVulListExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetImageVulListExportOutcomeCallable TcssClient::DescribeAssetImageVulListExportCallable(const DescribeAssetImageVulListExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetImageVulListExportOutcome>>();
    DescribeAssetImageVulListExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetImageVulListExportRequest&,
        DescribeAssetImageVulListExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetPortListOutcome TcssClient::DescribeAssetPortList(const DescribeAssetPortListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPortList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPortListResponse rsp = DescribeAssetPortListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPortListOutcome(rsp);
        else
            return DescribeAssetPortListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPortListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetPortListAsync(const DescribeAssetPortListRequest& request, const DescribeAssetPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetPortListRequest&;
    using Resp = DescribeAssetPortListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetPortList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetPortListOutcomeCallable TcssClient::DescribeAssetPortListCallable(const DescribeAssetPortListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetPortListOutcome>>();
    DescribeAssetPortListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetPortListRequest&,
        DescribeAssetPortListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetProcessListOutcome TcssClient::DescribeAssetProcessList(const DescribeAssetProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessListResponse rsp = DescribeAssetProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessListOutcome(rsp);
        else
            return DescribeAssetProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetProcessListAsync(const DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetProcessListRequest&;
    using Resp = DescribeAssetProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetProcessListOutcomeCallable TcssClient::DescribeAssetProcessListCallable(const DescribeAssetProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetProcessListOutcome>>();
    DescribeAssetProcessListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetProcessListRequest&,
        DescribeAssetProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetSummaryOutcome TcssClient::DescribeAssetSummary(const DescribeAssetSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSummaryResponse rsp = DescribeAssetSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSummaryOutcome(rsp);
        else
            return DescribeAssetSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetSummaryAsync(const DescribeAssetSummaryRequest& request, const DescribeAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSummaryRequest&;
    using Resp = DescribeAssetSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetSummaryOutcomeCallable TcssClient::DescribeAssetSummaryCallable(const DescribeAssetSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSummaryOutcome>>();
    DescribeAssetSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetSummaryRequest&,
        DescribeAssetSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetSuperNodeListOutcome TcssClient::DescribeAssetSuperNodeList(const DescribeAssetSuperNodeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSuperNodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSuperNodeListResponse rsp = DescribeAssetSuperNodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSuperNodeListOutcome(rsp);
        else
            return DescribeAssetSuperNodeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSuperNodeListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetSuperNodeListAsync(const DescribeAssetSuperNodeListRequest& request, const DescribeAssetSuperNodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSuperNodeListRequest&;
    using Resp = DescribeAssetSuperNodeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSuperNodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetSuperNodeListOutcomeCallable TcssClient::DescribeAssetSuperNodeListCallable(const DescribeAssetSuperNodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSuperNodeListOutcome>>();
    DescribeAssetSuperNodeListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetSuperNodeListRequest&,
        DescribeAssetSuperNodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetSyncLastTimeOutcome TcssClient::DescribeAssetSyncLastTime(const DescribeAssetSyncLastTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSyncLastTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncLastTimeResponse rsp = DescribeAssetSyncLastTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncLastTimeOutcome(rsp);
        else
            return DescribeAssetSyncLastTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncLastTimeOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetSyncLastTimeAsync(const DescribeAssetSyncLastTimeRequest& request, const DescribeAssetSyncLastTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSyncLastTimeRequest&;
    using Resp = DescribeAssetSyncLastTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSyncLastTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetSyncLastTimeOutcomeCallable TcssClient::DescribeAssetSyncLastTimeCallable(const DescribeAssetSyncLastTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSyncLastTimeOutcome>>();
    DescribeAssetSyncLastTimeAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetSyncLastTimeRequest&,
        DescribeAssetSyncLastTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAssetWebServiceListOutcome TcssClient::DescribeAssetWebServiceList(const DescribeAssetWebServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceListResponse rsp = DescribeAssetWebServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceListOutcome(rsp);
        else
            return DescribeAssetWebServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAssetWebServiceListAsync(const DescribeAssetWebServiceListRequest& request, const DescribeAssetWebServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebServiceListRequest&;
    using Resp = DescribeAssetWebServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAssetWebServiceListOutcomeCallable TcssClient::DescribeAssetWebServiceListCallable(const DescribeAssetWebServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebServiceListOutcome>>();
    DescribeAssetWebServiceListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAssetWebServiceListRequest&,
        DescribeAssetWebServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeAutoAuthorizedRuleHostOutcome TcssClient::DescribeAutoAuthorizedRuleHost(const DescribeAutoAuthorizedRuleHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoAuthorizedRuleHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoAuthorizedRuleHostResponse rsp = DescribeAutoAuthorizedRuleHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoAuthorizedRuleHostOutcome(rsp);
        else
            return DescribeAutoAuthorizedRuleHostOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoAuthorizedRuleHostOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeAutoAuthorizedRuleHostAsync(const DescribeAutoAuthorizedRuleHostRequest& request, const DescribeAutoAuthorizedRuleHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoAuthorizedRuleHostRequest&;
    using Resp = DescribeAutoAuthorizedRuleHostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoAuthorizedRuleHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeAutoAuthorizedRuleHostOutcomeCallable TcssClient::DescribeAutoAuthorizedRuleHostCallable(const DescribeAutoAuthorizedRuleHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoAuthorizedRuleHostOutcome>>();
    DescribeAutoAuthorizedRuleHostAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeAutoAuthorizedRuleHostRequest&,
        DescribeAutoAuthorizedRuleHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeCheckItemListOutcome TcssClient::DescribeCheckItemList(const DescribeCheckItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckItemListResponse rsp = DescribeCheckItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckItemListOutcome(rsp);
        else
            return DescribeCheckItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckItemListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeCheckItemListAsync(const DescribeCheckItemListRequest& request, const DescribeCheckItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckItemListRequest&;
    using Resp = DescribeCheckItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeCheckItemListOutcomeCallable TcssClient::DescribeCheckItemListCallable(const DescribeCheckItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckItemListOutcome>>();
    DescribeCheckItemListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeCheckItemListRequest&,
        DescribeCheckItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeClusterDetailOutcome TcssClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterDetailRequest&;
    using Resp = DescribeClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeClusterDetailOutcomeCallable TcssClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterDetailOutcome>>();
    DescribeClusterDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeClusterDetailRequest&,
        DescribeClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeClusterNodesOutcome TcssClient::DescribeClusterNodes(const DescribeClusterNodesRequest &request)
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

void TcssClient::DescribeClusterNodesAsync(const DescribeClusterNodesRequest& request, const DescribeClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcssClient::DescribeClusterNodesOutcomeCallable TcssClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterNodesOutcome>>();
    DescribeClusterNodesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeClusterNodesRequest&,
        DescribeClusterNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeClusterSummaryOutcome TcssClient::DescribeClusterSummary(const DescribeClusterSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterSummaryResponse rsp = DescribeClusterSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterSummaryOutcome(rsp);
        else
            return DescribeClusterSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeClusterSummaryAsync(const DescribeClusterSummaryRequest& request, const DescribeClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterSummaryRequest&;
    using Resp = DescribeClusterSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeClusterSummaryOutcomeCallable TcssClient::DescribeClusterSummaryCallable(const DescribeClusterSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterSummaryOutcome>>();
    DescribeClusterSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeClusterSummaryRequest&,
        DescribeClusterSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceAssetDetailInfoOutcome TcssClient::DescribeComplianceAssetDetailInfo(const DescribeComplianceAssetDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceAssetDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceAssetDetailInfoResponse rsp = DescribeComplianceAssetDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceAssetDetailInfoOutcome(rsp);
        else
            return DescribeComplianceAssetDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceAssetDetailInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceAssetDetailInfoAsync(const DescribeComplianceAssetDetailInfoRequest& request, const DescribeComplianceAssetDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceAssetDetailInfoRequest&;
    using Resp = DescribeComplianceAssetDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceAssetDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceAssetDetailInfoOutcomeCallable TcssClient::DescribeComplianceAssetDetailInfoCallable(const DescribeComplianceAssetDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceAssetDetailInfoOutcome>>();
    DescribeComplianceAssetDetailInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceAssetDetailInfoRequest&,
        DescribeComplianceAssetDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceAssetListOutcome TcssClient::DescribeComplianceAssetList(const DescribeComplianceAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceAssetListResponse rsp = DescribeComplianceAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceAssetListOutcome(rsp);
        else
            return DescribeComplianceAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceAssetListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceAssetListAsync(const DescribeComplianceAssetListRequest& request, const DescribeComplianceAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceAssetListRequest&;
    using Resp = DescribeComplianceAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceAssetListOutcomeCallable TcssClient::DescribeComplianceAssetListCallable(const DescribeComplianceAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceAssetListOutcome>>();
    DescribeComplianceAssetListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceAssetListRequest&,
        DescribeComplianceAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceAssetPolicyItemListOutcome TcssClient::DescribeComplianceAssetPolicyItemList(const DescribeComplianceAssetPolicyItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceAssetPolicyItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceAssetPolicyItemListResponse rsp = DescribeComplianceAssetPolicyItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceAssetPolicyItemListOutcome(rsp);
        else
            return DescribeComplianceAssetPolicyItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceAssetPolicyItemListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceAssetPolicyItemListAsync(const DescribeComplianceAssetPolicyItemListRequest& request, const DescribeComplianceAssetPolicyItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceAssetPolicyItemListRequest&;
    using Resp = DescribeComplianceAssetPolicyItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceAssetPolicyItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceAssetPolicyItemListOutcomeCallable TcssClient::DescribeComplianceAssetPolicyItemListCallable(const DescribeComplianceAssetPolicyItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceAssetPolicyItemListOutcome>>();
    DescribeComplianceAssetPolicyItemListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceAssetPolicyItemListRequest&,
        DescribeComplianceAssetPolicyItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeCompliancePeriodTaskListOutcome TcssClient::DescribeCompliancePeriodTaskList(const DescribeCompliancePeriodTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompliancePeriodTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompliancePeriodTaskListResponse rsp = DescribeCompliancePeriodTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompliancePeriodTaskListOutcome(rsp);
        else
            return DescribeCompliancePeriodTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeCompliancePeriodTaskListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeCompliancePeriodTaskListAsync(const DescribeCompliancePeriodTaskListRequest& request, const DescribeCompliancePeriodTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompliancePeriodTaskListRequest&;
    using Resp = DescribeCompliancePeriodTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompliancePeriodTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeCompliancePeriodTaskListOutcomeCallable TcssClient::DescribeCompliancePeriodTaskListCallable(const DescribeCompliancePeriodTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompliancePeriodTaskListOutcome>>();
    DescribeCompliancePeriodTaskListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeCompliancePeriodTaskListRequest&,
        DescribeCompliancePeriodTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeCompliancePolicyItemAffectedAssetListOutcome TcssClient::DescribeCompliancePolicyItemAffectedAssetList(const DescribeCompliancePolicyItemAffectedAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompliancePolicyItemAffectedAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompliancePolicyItemAffectedAssetListResponse rsp = DescribeCompliancePolicyItemAffectedAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompliancePolicyItemAffectedAssetListOutcome(rsp);
        else
            return DescribeCompliancePolicyItemAffectedAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeCompliancePolicyItemAffectedAssetListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeCompliancePolicyItemAffectedAssetListAsync(const DescribeCompliancePolicyItemAffectedAssetListRequest& request, const DescribeCompliancePolicyItemAffectedAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompliancePolicyItemAffectedAssetListRequest&;
    using Resp = DescribeCompliancePolicyItemAffectedAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompliancePolicyItemAffectedAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeCompliancePolicyItemAffectedAssetListOutcomeCallable TcssClient::DescribeCompliancePolicyItemAffectedAssetListCallable(const DescribeCompliancePolicyItemAffectedAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompliancePolicyItemAffectedAssetListOutcome>>();
    DescribeCompliancePolicyItemAffectedAssetListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeCompliancePolicyItemAffectedAssetListRequest&,
        DescribeCompliancePolicyItemAffectedAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeCompliancePolicyItemAffectedSummaryOutcome TcssClient::DescribeCompliancePolicyItemAffectedSummary(const DescribeCompliancePolicyItemAffectedSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCompliancePolicyItemAffectedSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCompliancePolicyItemAffectedSummaryResponse rsp = DescribeCompliancePolicyItemAffectedSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCompliancePolicyItemAffectedSummaryOutcome(rsp);
        else
            return DescribeCompliancePolicyItemAffectedSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeCompliancePolicyItemAffectedSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeCompliancePolicyItemAffectedSummaryAsync(const DescribeCompliancePolicyItemAffectedSummaryRequest& request, const DescribeCompliancePolicyItemAffectedSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCompliancePolicyItemAffectedSummaryRequest&;
    using Resp = DescribeCompliancePolicyItemAffectedSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCompliancePolicyItemAffectedSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeCompliancePolicyItemAffectedSummaryOutcomeCallable TcssClient::DescribeCompliancePolicyItemAffectedSummaryCallable(const DescribeCompliancePolicyItemAffectedSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCompliancePolicyItemAffectedSummaryOutcome>>();
    DescribeCompliancePolicyItemAffectedSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeCompliancePolicyItemAffectedSummaryRequest&,
        DescribeCompliancePolicyItemAffectedSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceScanFailedAssetListOutcome TcssClient::DescribeComplianceScanFailedAssetList(const DescribeComplianceScanFailedAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceScanFailedAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceScanFailedAssetListResponse rsp = DescribeComplianceScanFailedAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceScanFailedAssetListOutcome(rsp);
        else
            return DescribeComplianceScanFailedAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceScanFailedAssetListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceScanFailedAssetListAsync(const DescribeComplianceScanFailedAssetListRequest& request, const DescribeComplianceScanFailedAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceScanFailedAssetListRequest&;
    using Resp = DescribeComplianceScanFailedAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceScanFailedAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceScanFailedAssetListOutcomeCallable TcssClient::DescribeComplianceScanFailedAssetListCallable(const DescribeComplianceScanFailedAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceScanFailedAssetListOutcome>>();
    DescribeComplianceScanFailedAssetListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceScanFailedAssetListRequest&,
        DescribeComplianceScanFailedAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceTaskAssetSummaryOutcome TcssClient::DescribeComplianceTaskAssetSummary(const DescribeComplianceTaskAssetSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceTaskAssetSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceTaskAssetSummaryResponse rsp = DescribeComplianceTaskAssetSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceTaskAssetSummaryOutcome(rsp);
        else
            return DescribeComplianceTaskAssetSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceTaskAssetSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceTaskAssetSummaryAsync(const DescribeComplianceTaskAssetSummaryRequest& request, const DescribeComplianceTaskAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceTaskAssetSummaryRequest&;
    using Resp = DescribeComplianceTaskAssetSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceTaskAssetSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceTaskAssetSummaryOutcomeCallable TcssClient::DescribeComplianceTaskAssetSummaryCallable(const DescribeComplianceTaskAssetSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceTaskAssetSummaryOutcome>>();
    DescribeComplianceTaskAssetSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceTaskAssetSummaryRequest&,
        DescribeComplianceTaskAssetSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceTaskPolicyItemSummaryListOutcome TcssClient::DescribeComplianceTaskPolicyItemSummaryList(const DescribeComplianceTaskPolicyItemSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceTaskPolicyItemSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceTaskPolicyItemSummaryListResponse rsp = DescribeComplianceTaskPolicyItemSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceTaskPolicyItemSummaryListOutcome(rsp);
        else
            return DescribeComplianceTaskPolicyItemSummaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceTaskPolicyItemSummaryListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceTaskPolicyItemSummaryListAsync(const DescribeComplianceTaskPolicyItemSummaryListRequest& request, const DescribeComplianceTaskPolicyItemSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceTaskPolicyItemSummaryListRequest&;
    using Resp = DescribeComplianceTaskPolicyItemSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceTaskPolicyItemSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceTaskPolicyItemSummaryListOutcomeCallable TcssClient::DescribeComplianceTaskPolicyItemSummaryListCallable(const DescribeComplianceTaskPolicyItemSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceTaskPolicyItemSummaryListOutcome>>();
    DescribeComplianceTaskPolicyItemSummaryListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceTaskPolicyItemSummaryListRequest&,
        DescribeComplianceTaskPolicyItemSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeComplianceWhitelistItemListOutcome TcssClient::DescribeComplianceWhitelistItemList(const DescribeComplianceWhitelistItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceWhitelistItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceWhitelistItemListResponse rsp = DescribeComplianceWhitelistItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceWhitelistItemListOutcome(rsp);
        else
            return DescribeComplianceWhitelistItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceWhitelistItemListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeComplianceWhitelistItemListAsync(const DescribeComplianceWhitelistItemListRequest& request, const DescribeComplianceWhitelistItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceWhitelistItemListRequest&;
    using Resp = DescribeComplianceWhitelistItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceWhitelistItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeComplianceWhitelistItemListOutcomeCallable TcssClient::DescribeComplianceWhitelistItemListCallable(const DescribeComplianceWhitelistItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceWhitelistItemListOutcome>>();
    DescribeComplianceWhitelistItemListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeComplianceWhitelistItemListRequest&,
        DescribeComplianceWhitelistItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeContainerAssetSummaryOutcome TcssClient::DescribeContainerAssetSummary(const DescribeContainerAssetSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerAssetSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerAssetSummaryResponse rsp = DescribeContainerAssetSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerAssetSummaryOutcome(rsp);
        else
            return DescribeContainerAssetSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerAssetSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeContainerAssetSummaryAsync(const DescribeContainerAssetSummaryRequest& request, const DescribeContainerAssetSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerAssetSummaryRequest&;
    using Resp = DescribeContainerAssetSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerAssetSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeContainerAssetSummaryOutcomeCallable TcssClient::DescribeContainerAssetSummaryCallable(const DescribeContainerAssetSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerAssetSummaryOutcome>>();
    DescribeContainerAssetSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeContainerAssetSummaryRequest&,
        DescribeContainerAssetSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeContainerSecEventSummaryOutcome TcssClient::DescribeContainerSecEventSummary(const DescribeContainerSecEventSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerSecEventSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerSecEventSummaryResponse rsp = DescribeContainerSecEventSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerSecEventSummaryOutcome(rsp);
        else
            return DescribeContainerSecEventSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerSecEventSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeContainerSecEventSummaryAsync(const DescribeContainerSecEventSummaryRequest& request, const DescribeContainerSecEventSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerSecEventSummaryRequest&;
    using Resp = DescribeContainerSecEventSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerSecEventSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeContainerSecEventSummaryOutcomeCallable TcssClient::DescribeContainerSecEventSummaryCallable(const DescribeContainerSecEventSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerSecEventSummaryOutcome>>();
    DescribeContainerSecEventSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeContainerSecEventSummaryRequest&,
        DescribeContainerSecEventSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeESAggregationsOutcome TcssClient::DescribeESAggregations(const DescribeESAggregationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESAggregations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESAggregationsResponse rsp = DescribeESAggregationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESAggregationsOutcome(rsp);
        else
            return DescribeESAggregationsOutcome(o.GetError());
    }
    else
    {
        return DescribeESAggregationsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeESAggregationsAsync(const DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeESAggregationsRequest&;
    using Resp = DescribeESAggregationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeESAggregations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeESAggregationsOutcomeCallable TcssClient::DescribeESAggregationsCallable(const DescribeESAggregationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeESAggregationsOutcome>>();
    DescribeESAggregationsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeESAggregationsRequest&,
        DescribeESAggregationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeESHitsOutcome TcssClient::DescribeESHits(const DescribeESHitsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESHits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESHitsResponse rsp = DescribeESHitsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESHitsOutcome(rsp);
        else
            return DescribeESHitsOutcome(o.GetError());
    }
    else
    {
        return DescribeESHitsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeESHitsAsync(const DescribeESHitsRequest& request, const DescribeESHitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeESHitsRequest&;
    using Resp = DescribeESHitsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeESHits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeESHitsOutcomeCallable TcssClient::DescribeESHitsCallable(const DescribeESHitsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeESHitsOutcome>>();
    DescribeESHitsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeESHitsRequest&,
        DescribeESHitsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEmergencyVulListOutcome TcssClient::DescribeEmergencyVulList(const DescribeEmergencyVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmergencyVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmergencyVulListResponse rsp = DescribeEmergencyVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmergencyVulListOutcome(rsp);
        else
            return DescribeEmergencyVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeEmergencyVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEmergencyVulListAsync(const DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEmergencyVulListRequest&;
    using Resp = DescribeEmergencyVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEmergencyVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEmergencyVulListOutcomeCallable TcssClient::DescribeEmergencyVulListCallable(const DescribeEmergencyVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEmergencyVulListOutcome>>();
    DescribeEmergencyVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEmergencyVulListRequest&,
        DescribeEmergencyVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeEventDetailOutcome TcssClient::DescribeEscapeEventDetail(const DescribeEscapeEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeEventDetailResponse rsp = DescribeEscapeEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeEventDetailOutcome(rsp);
        else
            return DescribeEscapeEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeEventDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeEventDetailAsync(const DescribeEscapeEventDetailRequest& request, const DescribeEscapeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeEventDetailRequest&;
    using Resp = DescribeEscapeEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeEventDetailOutcomeCallable TcssClient::DescribeEscapeEventDetailCallable(const DescribeEscapeEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeEventDetailOutcome>>();
    DescribeEscapeEventDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeEventDetailRequest&,
        DescribeEscapeEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeEventInfoOutcome TcssClient::DescribeEscapeEventInfo(const DescribeEscapeEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeEventInfoResponse rsp = DescribeEscapeEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeEventInfoOutcome(rsp);
        else
            return DescribeEscapeEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeEventInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeEventInfoAsync(const DescribeEscapeEventInfoRequest& request, const DescribeEscapeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeEventInfoRequest&;
    using Resp = DescribeEscapeEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeEventInfoOutcomeCallable TcssClient::DescribeEscapeEventInfoCallable(const DescribeEscapeEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeEventInfoOutcome>>();
    DescribeEscapeEventInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeEventInfoRequest&,
        DescribeEscapeEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeEventTendencyOutcome TcssClient::DescribeEscapeEventTendency(const DescribeEscapeEventTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeEventTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeEventTendencyResponse rsp = DescribeEscapeEventTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeEventTendencyOutcome(rsp);
        else
            return DescribeEscapeEventTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeEventTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeEventTendencyAsync(const DescribeEscapeEventTendencyRequest& request, const DescribeEscapeEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeEventTendencyRequest&;
    using Resp = DescribeEscapeEventTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeEventTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeEventTendencyOutcomeCallable TcssClient::DescribeEscapeEventTendencyCallable(const DescribeEscapeEventTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeEventTendencyOutcome>>();
    DescribeEscapeEventTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeEventTendencyRequest&,
        DescribeEscapeEventTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeEventTypeSummaryOutcome TcssClient::DescribeEscapeEventTypeSummary(const DescribeEscapeEventTypeSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeEventTypeSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeEventTypeSummaryResponse rsp = DescribeEscapeEventTypeSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeEventTypeSummaryOutcome(rsp);
        else
            return DescribeEscapeEventTypeSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeEventTypeSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeEventTypeSummaryAsync(const DescribeEscapeEventTypeSummaryRequest& request, const DescribeEscapeEventTypeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeEventTypeSummaryRequest&;
    using Resp = DescribeEscapeEventTypeSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeEventTypeSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeEventTypeSummaryOutcomeCallable TcssClient::DescribeEscapeEventTypeSummaryCallable(const DescribeEscapeEventTypeSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeEventTypeSummaryOutcome>>();
    DescribeEscapeEventTypeSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeEventTypeSummaryRequest&,
        DescribeEscapeEventTypeSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeRuleInfoOutcome TcssClient::DescribeEscapeRuleInfo(const DescribeEscapeRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeRuleInfoResponse rsp = DescribeEscapeRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeRuleInfoOutcome(rsp);
        else
            return DescribeEscapeRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeRuleInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeRuleInfoAsync(const DescribeEscapeRuleInfoRequest& request, const DescribeEscapeRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeRuleInfoRequest&;
    using Resp = DescribeEscapeRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeRuleInfoOutcomeCallable TcssClient::DescribeEscapeRuleInfoCallable(const DescribeEscapeRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeRuleInfoOutcome>>();
    DescribeEscapeRuleInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeRuleInfoRequest&,
        DescribeEscapeRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeSafeStateOutcome TcssClient::DescribeEscapeSafeState(const DescribeEscapeSafeStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeSafeState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeSafeStateResponse rsp = DescribeEscapeSafeStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeSafeStateOutcome(rsp);
        else
            return DescribeEscapeSafeStateOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeSafeStateOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeSafeStateAsync(const DescribeEscapeSafeStateRequest& request, const DescribeEscapeSafeStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeSafeStateRequest&;
    using Resp = DescribeEscapeSafeStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeSafeState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeSafeStateOutcomeCallable TcssClient::DescribeEscapeSafeStateCallable(const DescribeEscapeSafeStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeSafeStateOutcome>>();
    DescribeEscapeSafeStateAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeSafeStateRequest&,
        DescribeEscapeSafeStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEscapeWhiteListOutcome TcssClient::DescribeEscapeWhiteList(const DescribeEscapeWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEscapeWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEscapeWhiteListResponse rsp = DescribeEscapeWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEscapeWhiteListOutcome(rsp);
        else
            return DescribeEscapeWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeEscapeWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEscapeWhiteListAsync(const DescribeEscapeWhiteListRequest& request, const DescribeEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEscapeWhiteListRequest&;
    using Resp = DescribeEscapeWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEscapeWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEscapeWhiteListOutcomeCallable TcssClient::DescribeEscapeWhiteListCallable(const DescribeEscapeWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEscapeWhiteListOutcome>>();
    DescribeEscapeWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEscapeWhiteListRequest&,
        DescribeEscapeWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeEventEscapeImageListOutcome TcssClient::DescribeEventEscapeImageList(const DescribeEventEscapeImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventEscapeImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventEscapeImageListResponse rsp = DescribeEventEscapeImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventEscapeImageListOutcome(rsp);
        else
            return DescribeEventEscapeImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeEventEscapeImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeEventEscapeImageListAsync(const DescribeEventEscapeImageListRequest& request, const DescribeEventEscapeImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventEscapeImageListRequest&;
    using Resp = DescribeEventEscapeImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventEscapeImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeEventEscapeImageListOutcomeCallable TcssClient::DescribeEventEscapeImageListCallable(const DescribeEventEscapeImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventEscapeImageListOutcome>>();
    DescribeEventEscapeImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeEventEscapeImageListRequest&,
        DescribeEventEscapeImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeExportJobDownloadURLOutcome TcssClient::DescribeExportJobDownloadURL(const DescribeExportJobDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportJobDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportJobDownloadURLResponse rsp = DescribeExportJobDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportJobDownloadURLOutcome(rsp);
        else
            return DescribeExportJobDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeExportJobDownloadURLOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeExportJobDownloadURLAsync(const DescribeExportJobDownloadURLRequest& request, const DescribeExportJobDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportJobDownloadURLRequest&;
    using Resp = DescribeExportJobDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExportJobDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeExportJobDownloadURLOutcomeCallable TcssClient::DescribeExportJobDownloadURLCallable(const DescribeExportJobDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportJobDownloadURLOutcome>>();
    DescribeExportJobDownloadURLAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeExportJobDownloadURLRequest&,
        DescribeExportJobDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeExportJobManageListOutcome TcssClient::DescribeExportJobManageList(const DescribeExportJobManageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportJobManageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportJobManageListResponse rsp = DescribeExportJobManageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportJobManageListOutcome(rsp);
        else
            return DescribeExportJobManageListOutcome(o.GetError());
    }
    else
    {
        return DescribeExportJobManageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeExportJobManageListAsync(const DescribeExportJobManageListRequest& request, const DescribeExportJobManageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportJobManageListRequest&;
    using Resp = DescribeExportJobManageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExportJobManageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeExportJobManageListOutcomeCallable TcssClient::DescribeExportJobManageListCallable(const DescribeExportJobManageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportJobManageListOutcome>>();
    DescribeExportJobManageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeExportJobManageListRequest&,
        DescribeExportJobManageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeExportJobResultOutcome TcssClient::DescribeExportJobResult(const DescribeExportJobResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportJobResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportJobResultResponse rsp = DescribeExportJobResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportJobResultOutcome(rsp);
        else
            return DescribeExportJobResultOutcome(o.GetError());
    }
    else
    {
        return DescribeExportJobResultOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeExportJobResultAsync(const DescribeExportJobResultRequest& request, const DescribeExportJobResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportJobResultRequest&;
    using Resp = DescribeExportJobResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExportJobResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeExportJobResultOutcomeCallable TcssClient::DescribeExportJobResultCallable(const DescribeExportJobResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportJobResultOutcome>>();
    DescribeExportJobResultAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeExportJobResultRequest&,
        DescribeExportJobResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageAuthorizedInfoOutcome TcssClient::DescribeImageAuthorizedInfo(const DescribeImageAuthorizedInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAuthorizedInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAuthorizedInfoResponse rsp = DescribeImageAuthorizedInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAuthorizedInfoOutcome(rsp);
        else
            return DescribeImageAuthorizedInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAuthorizedInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageAuthorizedInfoAsync(const DescribeImageAuthorizedInfoRequest& request, const DescribeImageAuthorizedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAuthorizedInfoRequest&;
    using Resp = DescribeImageAuthorizedInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAuthorizedInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageAuthorizedInfoOutcomeCallable TcssClient::DescribeImageAuthorizedInfoCallable(const DescribeImageAuthorizedInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAuthorizedInfoOutcome>>();
    DescribeImageAuthorizedInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageAuthorizedInfoRequest&,
        DescribeImageAuthorizedInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageAutoAuthorizedLogListOutcome TcssClient::DescribeImageAutoAuthorizedLogList(const DescribeImageAutoAuthorizedLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAutoAuthorizedLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAutoAuthorizedLogListResponse rsp = DescribeImageAutoAuthorizedLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAutoAuthorizedLogListOutcome(rsp);
        else
            return DescribeImageAutoAuthorizedLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAutoAuthorizedLogListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageAutoAuthorizedLogListAsync(const DescribeImageAutoAuthorizedLogListRequest& request, const DescribeImageAutoAuthorizedLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAutoAuthorizedLogListRequest&;
    using Resp = DescribeImageAutoAuthorizedLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAutoAuthorizedLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageAutoAuthorizedLogListOutcomeCallable TcssClient::DescribeImageAutoAuthorizedLogListCallable(const DescribeImageAutoAuthorizedLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAutoAuthorizedLogListOutcome>>();
    DescribeImageAutoAuthorizedLogListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageAutoAuthorizedLogListRequest&,
        DescribeImageAutoAuthorizedLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageAutoAuthorizedRuleOutcome TcssClient::DescribeImageAutoAuthorizedRule(const DescribeImageAutoAuthorizedRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAutoAuthorizedRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAutoAuthorizedRuleResponse rsp = DescribeImageAutoAuthorizedRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAutoAuthorizedRuleOutcome(rsp);
        else
            return DescribeImageAutoAuthorizedRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAutoAuthorizedRuleOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageAutoAuthorizedRuleAsync(const DescribeImageAutoAuthorizedRuleRequest& request, const DescribeImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAutoAuthorizedRuleRequest&;
    using Resp = DescribeImageAutoAuthorizedRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAutoAuthorizedRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageAutoAuthorizedRuleOutcomeCallable TcssClient::DescribeImageAutoAuthorizedRuleCallable(const DescribeImageAutoAuthorizedRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAutoAuthorizedRuleOutcome>>();
    DescribeImageAutoAuthorizedRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageAutoAuthorizedRuleRequest&,
        DescribeImageAutoAuthorizedRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageAutoAuthorizedTaskListOutcome TcssClient::DescribeImageAutoAuthorizedTaskList(const DescribeImageAutoAuthorizedTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageAutoAuthorizedTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageAutoAuthorizedTaskListResponse rsp = DescribeImageAutoAuthorizedTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageAutoAuthorizedTaskListOutcome(rsp);
        else
            return DescribeImageAutoAuthorizedTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeImageAutoAuthorizedTaskListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageAutoAuthorizedTaskListAsync(const DescribeImageAutoAuthorizedTaskListRequest& request, const DescribeImageAutoAuthorizedTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageAutoAuthorizedTaskListRequest&;
    using Resp = DescribeImageAutoAuthorizedTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageAutoAuthorizedTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageAutoAuthorizedTaskListOutcomeCallable TcssClient::DescribeImageAutoAuthorizedTaskListCallable(const DescribeImageAutoAuthorizedTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageAutoAuthorizedTaskListOutcome>>();
    DescribeImageAutoAuthorizedTaskListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageAutoAuthorizedTaskListRequest&,
        DescribeImageAutoAuthorizedTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageComponentListOutcome TcssClient::DescribeImageComponentList(const DescribeImageComponentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageComponentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageComponentListResponse rsp = DescribeImageComponentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageComponentListOutcome(rsp);
        else
            return DescribeImageComponentListOutcome(o.GetError());
    }
    else
    {
        return DescribeImageComponentListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageComponentListAsync(const DescribeImageComponentListRequest& request, const DescribeImageComponentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageComponentListRequest&;
    using Resp = DescribeImageComponentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageComponentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageComponentListOutcomeCallable TcssClient::DescribeImageComponentListCallable(const DescribeImageComponentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageComponentListOutcome>>();
    DescribeImageComponentListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageComponentListRequest&,
        DescribeImageComponentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageRegistryNamespaceListOutcome TcssClient::DescribeImageRegistryNamespaceList(const DescribeImageRegistryNamespaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRegistryNamespaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRegistryNamespaceListResponse rsp = DescribeImageRegistryNamespaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRegistryNamespaceListOutcome(rsp);
        else
            return DescribeImageRegistryNamespaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRegistryNamespaceListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageRegistryNamespaceListAsync(const DescribeImageRegistryNamespaceListRequest& request, const DescribeImageRegistryNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRegistryNamespaceListRequest&;
    using Resp = DescribeImageRegistryNamespaceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageRegistryNamespaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageRegistryNamespaceListOutcomeCallable TcssClient::DescribeImageRegistryNamespaceListCallable(const DescribeImageRegistryNamespaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageRegistryNamespaceListOutcome>>();
    DescribeImageRegistryNamespaceListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageRegistryNamespaceListRequest&,
        DescribeImageRegistryNamespaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageRegistryTimingScanTaskOutcome TcssClient::DescribeImageRegistryTimingScanTask(const DescribeImageRegistryTimingScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRegistryTimingScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRegistryTimingScanTaskResponse rsp = DescribeImageRegistryTimingScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRegistryTimingScanTaskOutcome(rsp);
        else
            return DescribeImageRegistryTimingScanTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRegistryTimingScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageRegistryTimingScanTaskAsync(const DescribeImageRegistryTimingScanTaskRequest& request, const DescribeImageRegistryTimingScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRegistryTimingScanTaskRequest&;
    using Resp = DescribeImageRegistryTimingScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageRegistryTimingScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageRegistryTimingScanTaskOutcomeCallable TcssClient::DescribeImageRegistryTimingScanTaskCallable(const DescribeImageRegistryTimingScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageRegistryTimingScanTaskOutcome>>();
    DescribeImageRegistryTimingScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageRegistryTimingScanTaskRequest&,
        DescribeImageRegistryTimingScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageRiskSummaryOutcome TcssClient::DescribeImageRiskSummary(const DescribeImageRiskSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRiskSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRiskSummaryResponse rsp = DescribeImageRiskSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRiskSummaryOutcome(rsp);
        else
            return DescribeImageRiskSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRiskSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageRiskSummaryAsync(const DescribeImageRiskSummaryRequest& request, const DescribeImageRiskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRiskSummaryRequest&;
    using Resp = DescribeImageRiskSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageRiskSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageRiskSummaryOutcomeCallable TcssClient::DescribeImageRiskSummaryCallable(const DescribeImageRiskSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageRiskSummaryOutcome>>();
    DescribeImageRiskSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageRiskSummaryRequest&,
        DescribeImageRiskSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageRiskTendencyOutcome TcssClient::DescribeImageRiskTendency(const DescribeImageRiskTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRiskTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRiskTendencyResponse rsp = DescribeImageRiskTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRiskTendencyOutcome(rsp);
        else
            return DescribeImageRiskTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRiskTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageRiskTendencyAsync(const DescribeImageRiskTendencyRequest& request, const DescribeImageRiskTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRiskTendencyRequest&;
    using Resp = DescribeImageRiskTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageRiskTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageRiskTendencyOutcomeCallable TcssClient::DescribeImageRiskTendencyCallable(const DescribeImageRiskTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageRiskTendencyOutcome>>();
    DescribeImageRiskTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageRiskTendencyRequest&,
        DescribeImageRiskTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeImageSimpleListOutcome TcssClient::DescribeImageSimpleList(const DescribeImageSimpleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageSimpleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageSimpleListResponse rsp = DescribeImageSimpleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageSimpleListOutcome(rsp);
        else
            return DescribeImageSimpleListOutcome(o.GetError());
    }
    else
    {
        return DescribeImageSimpleListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeImageSimpleListAsync(const DescribeImageSimpleListRequest& request, const DescribeImageSimpleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageSimpleListRequest&;
    using Resp = DescribeImageSimpleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageSimpleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeImageSimpleListOutcomeCallable TcssClient::DescribeImageSimpleListCallable(const DescribeImageSimpleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageSimpleListOutcome>>();
    DescribeImageSimpleListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeImageSimpleListRequest&,
        DescribeImageSimpleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeIndexListOutcome TcssClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexListRequest&;
    using Resp = DescribeIndexListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeIndexListOutcomeCallable TcssClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexListOutcome>>();
    DescribeIndexListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeIndexListRequest&,
        DescribeIndexListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeInspectionReportOutcome TcssClient::DescribeInspectionReport(const DescribeInspectionReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInspectionReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInspectionReportResponse rsp = DescribeInspectionReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInspectionReportOutcome(rsp);
        else
            return DescribeInspectionReportOutcome(o.GetError());
    }
    else
    {
        return DescribeInspectionReportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeInspectionReportAsync(const DescribeInspectionReportRequest& request, const DescribeInspectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInspectionReportRequest&;
    using Resp = DescribeInspectionReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInspectionReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeInspectionReportOutcomeCallable TcssClient::DescribeInspectionReportCallable(const DescribeInspectionReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInspectionReportOutcome>>();
    DescribeInspectionReportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeInspectionReportRequest&,
        DescribeInspectionReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalEventInfoOutcome TcssClient::DescribeK8sApiAbnormalEventInfo(const DescribeK8sApiAbnormalEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalEventInfoResponse rsp = DescribeK8sApiAbnormalEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalEventInfoOutcome(rsp);
        else
            return DescribeK8sApiAbnormalEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalEventInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalEventInfoAsync(const DescribeK8sApiAbnormalEventInfoRequest& request, const DescribeK8sApiAbnormalEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalEventInfoRequest&;
    using Resp = DescribeK8sApiAbnormalEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalEventInfoOutcomeCallable TcssClient::DescribeK8sApiAbnormalEventInfoCallable(const DescribeK8sApiAbnormalEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalEventInfoOutcome>>();
    DescribeK8sApiAbnormalEventInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalEventInfoRequest&,
        DescribeK8sApiAbnormalEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalEventListOutcome TcssClient::DescribeK8sApiAbnormalEventList(const DescribeK8sApiAbnormalEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalEventListResponse rsp = DescribeK8sApiAbnormalEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalEventListOutcome(rsp);
        else
            return DescribeK8sApiAbnormalEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalEventListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalEventListAsync(const DescribeK8sApiAbnormalEventListRequest& request, const DescribeK8sApiAbnormalEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalEventListRequest&;
    using Resp = DescribeK8sApiAbnormalEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalEventListOutcomeCallable TcssClient::DescribeK8sApiAbnormalEventListCallable(const DescribeK8sApiAbnormalEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalEventListOutcome>>();
    DescribeK8sApiAbnormalEventListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalEventListRequest&,
        DescribeK8sApiAbnormalEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalRuleInfoOutcome TcssClient::DescribeK8sApiAbnormalRuleInfo(const DescribeK8sApiAbnormalRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalRuleInfoResponse rsp = DescribeK8sApiAbnormalRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalRuleInfoOutcome(rsp);
        else
            return DescribeK8sApiAbnormalRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalRuleInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalRuleInfoAsync(const DescribeK8sApiAbnormalRuleInfoRequest& request, const DescribeK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalRuleInfoRequest&;
    using Resp = DescribeK8sApiAbnormalRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleInfoCallable(const DescribeK8sApiAbnormalRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalRuleInfoOutcome>>();
    DescribeK8sApiAbnormalRuleInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalRuleInfoRequest&,
        DescribeK8sApiAbnormalRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalRuleListOutcome TcssClient::DescribeK8sApiAbnormalRuleList(const DescribeK8sApiAbnormalRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalRuleListResponse rsp = DescribeK8sApiAbnormalRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalRuleListOutcome(rsp);
        else
            return DescribeK8sApiAbnormalRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalRuleListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalRuleListAsync(const DescribeK8sApiAbnormalRuleListRequest& request, const DescribeK8sApiAbnormalRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalRuleListRequest&;
    using Resp = DescribeK8sApiAbnormalRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalRuleListOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleListCallable(const DescribeK8sApiAbnormalRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalRuleListOutcome>>();
    DescribeK8sApiAbnormalRuleListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalRuleListRequest&,
        DescribeK8sApiAbnormalRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalRuleScopeListOutcome TcssClient::DescribeK8sApiAbnormalRuleScopeList(const DescribeK8sApiAbnormalRuleScopeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalRuleScopeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalRuleScopeListResponse rsp = DescribeK8sApiAbnormalRuleScopeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalRuleScopeListOutcome(rsp);
        else
            return DescribeK8sApiAbnormalRuleScopeListOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalRuleScopeListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalRuleScopeListAsync(const DescribeK8sApiAbnormalRuleScopeListRequest& request, const DescribeK8sApiAbnormalRuleScopeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalRuleScopeListRequest&;
    using Resp = DescribeK8sApiAbnormalRuleScopeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalRuleScopeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalRuleScopeListOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleScopeListCallable(const DescribeK8sApiAbnormalRuleScopeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalRuleScopeListOutcome>>();
    DescribeK8sApiAbnormalRuleScopeListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalRuleScopeListRequest&,
        DescribeK8sApiAbnormalRuleScopeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalSummaryOutcome TcssClient::DescribeK8sApiAbnormalSummary(const DescribeK8sApiAbnormalSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalSummaryResponse rsp = DescribeK8sApiAbnormalSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalSummaryOutcome(rsp);
        else
            return DescribeK8sApiAbnormalSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalSummaryAsync(const DescribeK8sApiAbnormalSummaryRequest& request, const DescribeK8sApiAbnormalSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalSummaryRequest&;
    using Resp = DescribeK8sApiAbnormalSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalSummaryOutcomeCallable TcssClient::DescribeK8sApiAbnormalSummaryCallable(const DescribeK8sApiAbnormalSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalSummaryOutcome>>();
    DescribeK8sApiAbnormalSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalSummaryRequest&,
        DescribeK8sApiAbnormalSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeK8sApiAbnormalTendencyOutcome TcssClient::DescribeK8sApiAbnormalTendency(const DescribeK8sApiAbnormalTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeK8sApiAbnormalTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeK8sApiAbnormalTendencyResponse rsp = DescribeK8sApiAbnormalTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeK8sApiAbnormalTendencyOutcome(rsp);
        else
            return DescribeK8sApiAbnormalTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeK8sApiAbnormalTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeK8sApiAbnormalTendencyAsync(const DescribeK8sApiAbnormalTendencyRequest& request, const DescribeK8sApiAbnormalTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeK8sApiAbnormalTendencyRequest&;
    using Resp = DescribeK8sApiAbnormalTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeK8sApiAbnormalTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeK8sApiAbnormalTendencyOutcomeCallable TcssClient::DescribeK8sApiAbnormalTendencyCallable(const DescribeK8sApiAbnormalTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeK8sApiAbnormalTendencyOutcome>>();
    DescribeK8sApiAbnormalTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeK8sApiAbnormalTendencyRequest&,
        DescribeK8sApiAbnormalTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeLogStorageStatisticOutcome TcssClient::DescribeLogStorageStatistic(const DescribeLogStorageStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageStatisticResponse rsp = DescribeLogStorageStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageStatisticOutcome(rsp);
        else
            return DescribeLogStorageStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageStatisticOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeLogStorageStatisticAsync(const DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogStorageStatisticRequest&;
    using Resp = DescribeLogStorageStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogStorageStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeLogStorageStatisticOutcomeCallable TcssClient::DescribeLogStorageStatisticCallable(const DescribeLogStorageStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogStorageStatisticOutcome>>();
    DescribeLogStorageStatisticAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeLogStorageStatisticRequest&,
        DescribeLogStorageStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallAuditRecordOutcome TcssClient::DescribeNetworkFirewallAuditRecord(const DescribeNetworkFirewallAuditRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallAuditRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallAuditRecordResponse rsp = DescribeNetworkFirewallAuditRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallAuditRecordOutcome(rsp);
        else
            return DescribeNetworkFirewallAuditRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallAuditRecordOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallAuditRecordAsync(const DescribeNetworkFirewallAuditRecordRequest& request, const DescribeNetworkFirewallAuditRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallAuditRecordRequest&;
    using Resp = DescribeNetworkFirewallAuditRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallAuditRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallAuditRecordOutcomeCallable TcssClient::DescribeNetworkFirewallAuditRecordCallable(const DescribeNetworkFirewallAuditRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallAuditRecordOutcome>>();
    DescribeNetworkFirewallAuditRecordAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallAuditRecordRequest&,
        DescribeNetworkFirewallAuditRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallClusterListOutcome TcssClient::DescribeNetworkFirewallClusterList(const DescribeNetworkFirewallClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallClusterListResponse rsp = DescribeNetworkFirewallClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallClusterListOutcome(rsp);
        else
            return DescribeNetworkFirewallClusterListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallClusterListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallClusterListAsync(const DescribeNetworkFirewallClusterListRequest& request, const DescribeNetworkFirewallClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallClusterListRequest&;
    using Resp = DescribeNetworkFirewallClusterListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallClusterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallClusterListOutcomeCallable TcssClient::DescribeNetworkFirewallClusterListCallable(const DescribeNetworkFirewallClusterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallClusterListOutcome>>();
    DescribeNetworkFirewallClusterListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallClusterListRequest&,
        DescribeNetworkFirewallClusterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallClusterRefreshStatusOutcome TcssClient::DescribeNetworkFirewallClusterRefreshStatus(const DescribeNetworkFirewallClusterRefreshStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallClusterRefreshStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallClusterRefreshStatusResponse rsp = DescribeNetworkFirewallClusterRefreshStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallClusterRefreshStatusOutcome(rsp);
        else
            return DescribeNetworkFirewallClusterRefreshStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallClusterRefreshStatusOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallClusterRefreshStatusAsync(const DescribeNetworkFirewallClusterRefreshStatusRequest& request, const DescribeNetworkFirewallClusterRefreshStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallClusterRefreshStatusRequest&;
    using Resp = DescribeNetworkFirewallClusterRefreshStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallClusterRefreshStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallClusterRefreshStatusOutcomeCallable TcssClient::DescribeNetworkFirewallClusterRefreshStatusCallable(const DescribeNetworkFirewallClusterRefreshStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallClusterRefreshStatusOutcome>>();
    DescribeNetworkFirewallClusterRefreshStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallClusterRefreshStatusRequest&,
        DescribeNetworkFirewallClusterRefreshStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallNamespaceLabelListOutcome TcssClient::DescribeNetworkFirewallNamespaceLabelList(const DescribeNetworkFirewallNamespaceLabelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallNamespaceLabelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallNamespaceLabelListResponse rsp = DescribeNetworkFirewallNamespaceLabelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallNamespaceLabelListOutcome(rsp);
        else
            return DescribeNetworkFirewallNamespaceLabelListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallNamespaceLabelListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallNamespaceLabelListAsync(const DescribeNetworkFirewallNamespaceLabelListRequest& request, const DescribeNetworkFirewallNamespaceLabelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallNamespaceLabelListRequest&;
    using Resp = DescribeNetworkFirewallNamespaceLabelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallNamespaceLabelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallNamespaceLabelListOutcomeCallable TcssClient::DescribeNetworkFirewallNamespaceLabelListCallable(const DescribeNetworkFirewallNamespaceLabelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallNamespaceLabelListOutcome>>();
    DescribeNetworkFirewallNamespaceLabelListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallNamespaceLabelListRequest&,
        DescribeNetworkFirewallNamespaceLabelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallNamespaceListOutcome TcssClient::DescribeNetworkFirewallNamespaceList(const DescribeNetworkFirewallNamespaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallNamespaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallNamespaceListResponse rsp = DescribeNetworkFirewallNamespaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallNamespaceListOutcome(rsp);
        else
            return DescribeNetworkFirewallNamespaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallNamespaceListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallNamespaceListAsync(const DescribeNetworkFirewallNamespaceListRequest& request, const DescribeNetworkFirewallNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallNamespaceListRequest&;
    using Resp = DescribeNetworkFirewallNamespaceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallNamespaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallNamespaceListOutcomeCallable TcssClient::DescribeNetworkFirewallNamespaceListCallable(const DescribeNetworkFirewallNamespaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallNamespaceListOutcome>>();
    DescribeNetworkFirewallNamespaceListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallNamespaceListRequest&,
        DescribeNetworkFirewallNamespaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPodLabelsListOutcome TcssClient::DescribeNetworkFirewallPodLabelsList(const DescribeNetworkFirewallPodLabelsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPodLabelsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPodLabelsListResponse rsp = DescribeNetworkFirewallPodLabelsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPodLabelsListOutcome(rsp);
        else
            return DescribeNetworkFirewallPodLabelsListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPodLabelsListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPodLabelsListAsync(const DescribeNetworkFirewallPodLabelsListRequest& request, const DescribeNetworkFirewallPodLabelsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPodLabelsListRequest&;
    using Resp = DescribeNetworkFirewallPodLabelsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPodLabelsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPodLabelsListOutcomeCallable TcssClient::DescribeNetworkFirewallPodLabelsListCallable(const DescribeNetworkFirewallPodLabelsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPodLabelsListOutcome>>();
    DescribeNetworkFirewallPodLabelsListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPodLabelsListRequest&,
        DescribeNetworkFirewallPodLabelsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPolicyDetailOutcome TcssClient::DescribeNetworkFirewallPolicyDetail(const DescribeNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPolicyDetailResponse rsp = DescribeNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return DescribeNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPolicyDetailAsync(const DescribeNetworkFirewallPolicyDetailRequest& request, const DescribeNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPolicyDetailRequest&;
    using Resp = DescribeNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPolicyDetailOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyDetailCallable(const DescribeNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPolicyDetailOutcome>>();
    DescribeNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPolicyDetailRequest&,
        DescribeNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPolicyDiscoverOutcome TcssClient::DescribeNetworkFirewallPolicyDiscover(const DescribeNetworkFirewallPolicyDiscoverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPolicyDiscover");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPolicyDiscoverResponse rsp = DescribeNetworkFirewallPolicyDiscoverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPolicyDiscoverOutcome(rsp);
        else
            return DescribeNetworkFirewallPolicyDiscoverOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPolicyDiscoverOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPolicyDiscoverAsync(const DescribeNetworkFirewallPolicyDiscoverRequest& request, const DescribeNetworkFirewallPolicyDiscoverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPolicyDiscoverRequest&;
    using Resp = DescribeNetworkFirewallPolicyDiscoverResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPolicyDiscover", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPolicyDiscoverOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyDiscoverCallable(const DescribeNetworkFirewallPolicyDiscoverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPolicyDiscoverOutcome>>();
    DescribeNetworkFirewallPolicyDiscoverAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPolicyDiscoverRequest&,
        DescribeNetworkFirewallPolicyDiscoverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPolicyListOutcome TcssClient::DescribeNetworkFirewallPolicyList(const DescribeNetworkFirewallPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPolicyListResponse rsp = DescribeNetworkFirewallPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPolicyListOutcome(rsp);
        else
            return DescribeNetworkFirewallPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPolicyListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPolicyListAsync(const DescribeNetworkFirewallPolicyListRequest& request, const DescribeNetworkFirewallPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPolicyListRequest&;
    using Resp = DescribeNetworkFirewallPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPolicyListOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyListCallable(const DescribeNetworkFirewallPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPolicyListOutcome>>();
    DescribeNetworkFirewallPolicyListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPolicyListRequest&,
        DescribeNetworkFirewallPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPolicyStatusOutcome TcssClient::DescribeNetworkFirewallPolicyStatus(const DescribeNetworkFirewallPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPolicyStatusResponse rsp = DescribeNetworkFirewallPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPolicyStatusOutcome(rsp);
        else
            return DescribeNetworkFirewallPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPolicyStatusOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPolicyStatusAsync(const DescribeNetworkFirewallPolicyStatusRequest& request, const DescribeNetworkFirewallPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPolicyStatusRequest&;
    using Resp = DescribeNetworkFirewallPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPolicyStatusOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyStatusCallable(const DescribeNetworkFirewallPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPolicyStatusOutcome>>();
    DescribeNetworkFirewallPolicyStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPolicyStatusRequest&,
        DescribeNetworkFirewallPolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNetworkFirewallPolicyYamlDetailOutcome TcssClient::DescribeNetworkFirewallPolicyYamlDetail(const DescribeNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetworkFirewallPolicyYamlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetworkFirewallPolicyYamlDetailResponse rsp = DescribeNetworkFirewallPolicyYamlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetworkFirewallPolicyYamlDetailOutcome(rsp);
        else
            return DescribeNetworkFirewallPolicyYamlDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeNetworkFirewallPolicyYamlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNetworkFirewallPolicyYamlDetailAsync(const DescribeNetworkFirewallPolicyYamlDetailRequest& request, const DescribeNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetworkFirewallPolicyYamlDetailRequest&;
    using Resp = DescribeNetworkFirewallPolicyYamlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetworkFirewallPolicyYamlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyYamlDetailCallable(const DescribeNetworkFirewallPolicyYamlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetworkFirewallPolicyYamlDetailOutcome>>();
    DescribeNetworkFirewallPolicyYamlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNetworkFirewallPolicyYamlDetailRequest&,
        DescribeNetworkFirewallPolicyYamlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeNewestVulOutcome TcssClient::DescribeNewestVul(const DescribeNewestVulRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewestVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewestVulResponse rsp = DescribeNewestVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewestVulOutcome(rsp);
        else
            return DescribeNewestVulOutcome(o.GetError());
    }
    else
    {
        return DescribeNewestVulOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeNewestVulAsync(const DescribeNewestVulRequest& request, const DescribeNewestVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewestVulRequest&;
    using Resp = DescribeNewestVulResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewestVul", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeNewestVulOutcomeCallable TcssClient::DescribeNewestVulCallable(const DescribeNewestVulRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewestVulOutcome>>();
    DescribeNewestVulAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeNewestVulRequest&,
        DescribeNewestVulOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribePostPayDetailOutcome TcssClient::DescribePostPayDetail(const DescribePostPayDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePostPayDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePostPayDetailResponse rsp = DescribePostPayDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePostPayDetailOutcome(rsp);
        else
            return DescribePostPayDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePostPayDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribePostPayDetailAsync(const DescribePostPayDetailRequest& request, const DescribePostPayDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePostPayDetailRequest&;
    using Resp = DescribePostPayDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePostPayDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribePostPayDetailOutcomeCallable TcssClient::DescribePostPayDetailCallable(const DescribePostPayDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePostPayDetailOutcome>>();
    DescribePostPayDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribePostPayDetailRequest&,
        DescribePostPayDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeProVersionInfoOutcome TcssClient::DescribeProVersionInfo(const DescribeProVersionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionInfoResponse rsp = DescribeProVersionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionInfoOutcome(rsp);
        else
            return DescribeProVersionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeProVersionInfoAsync(const DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProVersionInfoRequest&;
    using Resp = DescribeProVersionInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProVersionInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeProVersionInfoOutcomeCallable TcssClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProVersionInfoOutcome>>();
    DescribeProVersionInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeProVersionInfoRequest&,
        DescribeProVersionInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribePromotionActivityOutcome TcssClient::DescribePromotionActivity(const DescribePromotionActivityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePromotionActivity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePromotionActivityResponse rsp = DescribePromotionActivityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePromotionActivityOutcome(rsp);
        else
            return DescribePromotionActivityOutcome(o.GetError());
    }
    else
    {
        return DescribePromotionActivityOutcome(outcome.GetError());
    }
}

void TcssClient::DescribePromotionActivityAsync(const DescribePromotionActivityRequest& request, const DescribePromotionActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePromotionActivityRequest&;
    using Resp = DescribePromotionActivityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePromotionActivity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribePromotionActivityOutcomeCallable TcssClient::DescribePromotionActivityCallable(const DescribePromotionActivityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePromotionActivityOutcome>>();
    DescribePromotionActivityAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribePromotionActivityRequest&,
        DescribePromotionActivityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribePublicKeyOutcome TcssClient::DescribePublicKey(const DescribePublicKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicKeyResponse rsp = DescribePublicKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicKeyOutcome(rsp);
        else
            return DescribePublicKeyOutcome(o.GetError());
    }
    else
    {
        return DescribePublicKeyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribePublicKeyAsync(const DescribePublicKeyRequest& request, const DescribePublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicKeyRequest&;
    using Resp = DescribePublicKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribePublicKeyOutcomeCallable TcssClient::DescribePublicKeyCallable(const DescribePublicKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicKeyOutcome>>();
    DescribePublicKeyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribePublicKeyRequest&,
        DescribePublicKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribePurchaseStateInfoOutcome TcssClient::DescribePurchaseStateInfo(const DescribePurchaseStateInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurchaseStateInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurchaseStateInfoResponse rsp = DescribePurchaseStateInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurchaseStateInfoOutcome(rsp);
        else
            return DescribePurchaseStateInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePurchaseStateInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribePurchaseStateInfoAsync(const DescribePurchaseStateInfoRequest& request, const DescribePurchaseStateInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePurchaseStateInfoRequest&;
    using Resp = DescribePurchaseStateInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurchaseStateInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribePurchaseStateInfoOutcomeCallable TcssClient::DescribePurchaseStateInfoCallable(const DescribePurchaseStateInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurchaseStateInfoOutcome>>();
    DescribePurchaseStateInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribePurchaseStateInfoRequest&,
        DescribePurchaseStateInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRaspRuleVulsOutcome TcssClient::DescribeRaspRuleVuls(const DescribeRaspRuleVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRuleVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRuleVulsResponse rsp = DescribeRaspRuleVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRuleVulsOutcome(rsp);
        else
            return DescribeRaspRuleVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRuleVulsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRaspRuleVulsAsync(const DescribeRaspRuleVulsRequest& request, const DescribeRaspRuleVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRaspRuleVulsRequest&;
    using Resp = DescribeRaspRuleVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRaspRuleVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRaspRuleVulsOutcomeCallable TcssClient::DescribeRaspRuleVulsCallable(const DescribeRaspRuleVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRaspRuleVulsOutcome>>();
    DescribeRaspRuleVulsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRaspRuleVulsRequest&,
        DescribeRaspRuleVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRaspRulesOutcome TcssClient::DescribeRaspRules(const DescribeRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRulesResponse rsp = DescribeRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRulesOutcome(rsp);
        else
            return DescribeRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRaspRulesAsync(const DescribeRaspRulesRequest& request, const DescribeRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRaspRulesRequest&;
    using Resp = DescribeRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRaspRulesOutcomeCallable TcssClient::DescribeRaspRulesCallable(const DescribeRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRaspRulesOutcome>>();
    DescribeRaspRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRaspRulesRequest&,
        DescribeRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRefreshTaskOutcome TcssClient::DescribeRefreshTask(const DescribeRefreshTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRefreshTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRefreshTaskResponse rsp = DescribeRefreshTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRefreshTaskOutcome(rsp);
        else
            return DescribeRefreshTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRefreshTaskOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRefreshTaskAsync(const DescribeRefreshTaskRequest& request, const DescribeRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRefreshTaskRequest&;
    using Resp = DescribeRefreshTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRefreshTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRefreshTaskOutcomeCallable TcssClient::DescribeRefreshTaskCallable(const DescribeRefreshTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRefreshTaskOutcome>>();
    DescribeRefreshTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRefreshTaskRequest&,
        DescribeRefreshTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeReverseShellDetailOutcome TcssClient::DescribeReverseShellDetail(const DescribeReverseShellDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellDetailResponse rsp = DescribeReverseShellDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellDetailOutcome(rsp);
        else
            return DescribeReverseShellDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeReverseShellDetailAsync(const DescribeReverseShellDetailRequest& request, const DescribeReverseShellDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellDetailRequest&;
    using Resp = DescribeReverseShellDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeReverseShellDetailOutcomeCallable TcssClient::DescribeReverseShellDetailCallable(const DescribeReverseShellDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellDetailOutcome>>();
    DescribeReverseShellDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeReverseShellDetailRequest&,
        DescribeReverseShellDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeReverseShellEventsOutcome TcssClient::DescribeReverseShellEvents(const DescribeReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventsResponse rsp = DescribeReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventsOutcome(rsp);
        else
            return DescribeReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeReverseShellEventsAsync(const DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellEventsRequest&;
    using Resp = DescribeReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeReverseShellEventsOutcomeCallable TcssClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellEventsOutcome>>();
    DescribeReverseShellEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeReverseShellEventsRequest&,
        DescribeReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeReverseShellEventsExportOutcome TcssClient::DescribeReverseShellEventsExport(const DescribeReverseShellEventsExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEventsExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventsExportResponse rsp = DescribeReverseShellEventsExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventsExportOutcome(rsp);
        else
            return DescribeReverseShellEventsExportOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventsExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeReverseShellEventsExportAsync(const DescribeReverseShellEventsExportRequest& request, const DescribeReverseShellEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellEventsExportRequest&;
    using Resp = DescribeReverseShellEventsExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellEventsExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeReverseShellEventsExportOutcomeCallable TcssClient::DescribeReverseShellEventsExportCallable(const DescribeReverseShellEventsExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellEventsExportOutcome>>();
    DescribeReverseShellEventsExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeReverseShellEventsExportRequest&,
        DescribeReverseShellEventsExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeReverseShellWhiteListDetailOutcome TcssClient::DescribeReverseShellWhiteListDetail(const DescribeReverseShellWhiteListDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellWhiteListDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellWhiteListDetailResponse rsp = DescribeReverseShellWhiteListDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellWhiteListDetailOutcome(rsp);
        else
            return DescribeReverseShellWhiteListDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellWhiteListDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeReverseShellWhiteListDetailAsync(const DescribeReverseShellWhiteListDetailRequest& request, const DescribeReverseShellWhiteListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellWhiteListDetailRequest&;
    using Resp = DescribeReverseShellWhiteListDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellWhiteListDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeReverseShellWhiteListDetailOutcomeCallable TcssClient::DescribeReverseShellWhiteListDetailCallable(const DescribeReverseShellWhiteListDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellWhiteListDetailOutcome>>();
    DescribeReverseShellWhiteListDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeReverseShellWhiteListDetailRequest&,
        DescribeReverseShellWhiteListDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeReverseShellWhiteListsOutcome TcssClient::DescribeReverseShellWhiteLists(const DescribeReverseShellWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellWhiteListsResponse rsp = DescribeReverseShellWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellWhiteListsOutcome(rsp);
        else
            return DescribeReverseShellWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellWhiteListsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeReverseShellWhiteListsAsync(const DescribeReverseShellWhiteListsRequest& request, const DescribeReverseShellWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellWhiteListsRequest&;
    using Resp = DescribeReverseShellWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeReverseShellWhiteListsOutcomeCallable TcssClient::DescribeReverseShellWhiteListsCallable(const DescribeReverseShellWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellWhiteListsOutcome>>();
    DescribeReverseShellWhiteListsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeReverseShellWhiteListsRequest&,
        DescribeReverseShellWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskDnsEventDetailOutcome TcssClient::DescribeRiskDnsEventDetail(const DescribeRiskDnsEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsEventDetailResponse rsp = DescribeRiskDnsEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsEventDetailOutcome(rsp);
        else
            return DescribeRiskDnsEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsEventDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskDnsEventDetailAsync(const DescribeRiskDnsEventDetailRequest& request, const DescribeRiskDnsEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsEventDetailRequest&;
    using Resp = DescribeRiskDnsEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskDnsEventDetailOutcomeCallable TcssClient::DescribeRiskDnsEventDetailCallable(const DescribeRiskDnsEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsEventDetailOutcome>>();
    DescribeRiskDnsEventDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskDnsEventDetailRequest&,
        DescribeRiskDnsEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskDnsListOutcome TcssClient::DescribeRiskDnsList(const DescribeRiskDnsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsListResponse rsp = DescribeRiskDnsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsListOutcome(rsp);
        else
            return DescribeRiskDnsListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskDnsListAsync(const DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsListRequest&;
    using Resp = DescribeRiskDnsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskDnsListOutcomeCallable TcssClient::DescribeRiskDnsListCallable(const DescribeRiskDnsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsListOutcome>>();
    DescribeRiskDnsListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskDnsListRequest&,
        DescribeRiskDnsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskListOutcome TcssClient::DescribeRiskList(const DescribeRiskListRequest &request)
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

void TcssClient::DescribeRiskListAsync(const DescribeRiskListRequest& request, const DescribeRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TcssClient::DescribeRiskListOutcomeCallable TcssClient::DescribeRiskListCallable(const DescribeRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskListOutcome>>();
    DescribeRiskListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskListRequest&,
        DescribeRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallDetailOutcome TcssClient::DescribeRiskSyscallDetail(const DescribeRiskSyscallDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallDetailResponse rsp = DescribeRiskSyscallDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallDetailOutcome(rsp);
        else
            return DescribeRiskSyscallDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallDetailAsync(const DescribeRiskSyscallDetailRequest& request, const DescribeRiskSyscallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallDetailRequest&;
    using Resp = DescribeRiskSyscallDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallDetailOutcomeCallable TcssClient::DescribeRiskSyscallDetailCallable(const DescribeRiskSyscallDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallDetailOutcome>>();
    DescribeRiskSyscallDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallDetailRequest&,
        DescribeRiskSyscallDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallEventsOutcome TcssClient::DescribeRiskSyscallEvents(const DescribeRiskSyscallEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallEventsResponse rsp = DescribeRiskSyscallEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallEventsOutcome(rsp);
        else
            return DescribeRiskSyscallEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallEventsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallEventsAsync(const DescribeRiskSyscallEventsRequest& request, const DescribeRiskSyscallEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallEventsRequest&;
    using Resp = DescribeRiskSyscallEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallEventsOutcomeCallable TcssClient::DescribeRiskSyscallEventsCallable(const DescribeRiskSyscallEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallEventsOutcome>>();
    DescribeRiskSyscallEventsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallEventsRequest&,
        DescribeRiskSyscallEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallEventsExportOutcome TcssClient::DescribeRiskSyscallEventsExport(const DescribeRiskSyscallEventsExportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallEventsExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallEventsExportResponse rsp = DescribeRiskSyscallEventsExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallEventsExportOutcome(rsp);
        else
            return DescribeRiskSyscallEventsExportOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallEventsExportOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallEventsExportAsync(const DescribeRiskSyscallEventsExportRequest& request, const DescribeRiskSyscallEventsExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallEventsExportRequest&;
    using Resp = DescribeRiskSyscallEventsExportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallEventsExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallEventsExportOutcomeCallable TcssClient::DescribeRiskSyscallEventsExportCallable(const DescribeRiskSyscallEventsExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallEventsExportOutcome>>();
    DescribeRiskSyscallEventsExportAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallEventsExportRequest&,
        DescribeRiskSyscallEventsExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallNamesOutcome TcssClient::DescribeRiskSyscallNames(const DescribeRiskSyscallNamesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallNames");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallNamesResponse rsp = DescribeRiskSyscallNamesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallNamesOutcome(rsp);
        else
            return DescribeRiskSyscallNamesOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallNamesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallNamesAsync(const DescribeRiskSyscallNamesRequest& request, const DescribeRiskSyscallNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallNamesRequest&;
    using Resp = DescribeRiskSyscallNamesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallNames", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallNamesOutcomeCallable TcssClient::DescribeRiskSyscallNamesCallable(const DescribeRiskSyscallNamesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallNamesOutcome>>();
    DescribeRiskSyscallNamesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallNamesRequest&,
        DescribeRiskSyscallNamesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallWhiteListDetailOutcome TcssClient::DescribeRiskSyscallWhiteListDetail(const DescribeRiskSyscallWhiteListDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallWhiteListDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallWhiteListDetailResponse rsp = DescribeRiskSyscallWhiteListDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallWhiteListDetailOutcome(rsp);
        else
            return DescribeRiskSyscallWhiteListDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallWhiteListDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallWhiteListDetailAsync(const DescribeRiskSyscallWhiteListDetailRequest& request, const DescribeRiskSyscallWhiteListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallWhiteListDetailRequest&;
    using Resp = DescribeRiskSyscallWhiteListDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallWhiteListDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallWhiteListDetailOutcomeCallable TcssClient::DescribeRiskSyscallWhiteListDetailCallable(const DescribeRiskSyscallWhiteListDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallWhiteListDetailOutcome>>();
    DescribeRiskSyscallWhiteListDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallWhiteListDetailRequest&,
        DescribeRiskSyscallWhiteListDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeRiskSyscallWhiteListsOutcome TcssClient::DescribeRiskSyscallWhiteLists(const DescribeRiskSyscallWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskSyscallWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskSyscallWhiteListsResponse rsp = DescribeRiskSyscallWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskSyscallWhiteListsOutcome(rsp);
        else
            return DescribeRiskSyscallWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskSyscallWhiteListsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeRiskSyscallWhiteListsAsync(const DescribeRiskSyscallWhiteListsRequest& request, const DescribeRiskSyscallWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskSyscallWhiteListsRequest&;
    using Resp = DescribeRiskSyscallWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskSyscallWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeRiskSyscallWhiteListsOutcomeCallable TcssClient::DescribeRiskSyscallWhiteListsCallable(const DescribeRiskSyscallWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskSyscallWhiteListsOutcome>>();
    DescribeRiskSyscallWhiteListsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeRiskSyscallWhiteListsRequest&,
        DescribeRiskSyscallWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeScanIgnoreVulListOutcome TcssClient::DescribeScanIgnoreVulList(const DescribeScanIgnoreVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanIgnoreVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanIgnoreVulListResponse rsp = DescribeScanIgnoreVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanIgnoreVulListOutcome(rsp);
        else
            return DescribeScanIgnoreVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanIgnoreVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeScanIgnoreVulListAsync(const DescribeScanIgnoreVulListRequest& request, const DescribeScanIgnoreVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanIgnoreVulListRequest&;
    using Resp = DescribeScanIgnoreVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanIgnoreVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeScanIgnoreVulListOutcomeCallable TcssClient::DescribeScanIgnoreVulListCallable(const DescribeScanIgnoreVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanIgnoreVulListOutcome>>();
    DescribeScanIgnoreVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeScanIgnoreVulListRequest&,
        DescribeScanIgnoreVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSearchExportListOutcome TcssClient::DescribeSearchExportList(const DescribeSearchExportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchExportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchExportListResponse rsp = DescribeSearchExportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchExportListOutcome(rsp);
        else
            return DescribeSearchExportListOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchExportListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSearchExportListAsync(const DescribeSearchExportListRequest& request, const DescribeSearchExportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchExportListRequest&;
    using Resp = DescribeSearchExportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchExportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSearchExportListOutcomeCallable TcssClient::DescribeSearchExportListCallable(const DescribeSearchExportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchExportListOutcome>>();
    DescribeSearchExportListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSearchExportListRequest&,
        DescribeSearchExportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSearchLogsOutcome TcssClient::DescribeSearchLogs(const DescribeSearchLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchLogsResponse rsp = DescribeSearchLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchLogsOutcome(rsp);
        else
            return DescribeSearchLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchLogsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSearchLogsAsync(const DescribeSearchLogsRequest& request, const DescribeSearchLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchLogsRequest&;
    using Resp = DescribeSearchLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSearchLogsOutcomeCallable TcssClient::DescribeSearchLogsCallable(const DescribeSearchLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchLogsOutcome>>();
    DescribeSearchLogsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSearchLogsRequest&,
        DescribeSearchLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSearchTemplatesOutcome TcssClient::DescribeSearchTemplates(const DescribeSearchTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchTemplatesResponse rsp = DescribeSearchTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchTemplatesOutcome(rsp);
        else
            return DescribeSearchTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchTemplatesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSearchTemplatesAsync(const DescribeSearchTemplatesRequest& request, const DescribeSearchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchTemplatesRequest&;
    using Resp = DescribeSearchTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSearchTemplatesOutcomeCallable TcssClient::DescribeSearchTemplatesCallable(const DescribeSearchTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchTemplatesOutcome>>();
    DescribeSearchTemplatesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSearchTemplatesRequest&,
        DescribeSearchTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecEventsTendencyOutcome TcssClient::DescribeSecEventsTendency(const DescribeSecEventsTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecEventsTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecEventsTendencyResponse rsp = DescribeSecEventsTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecEventsTendencyOutcome(rsp);
        else
            return DescribeSecEventsTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeSecEventsTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecEventsTendencyAsync(const DescribeSecEventsTendencyRequest& request, const DescribeSecEventsTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecEventsTendencyRequest&;
    using Resp = DescribeSecEventsTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecEventsTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecEventsTendencyOutcomeCallable TcssClient::DescribeSecEventsTendencyCallable(const DescribeSecEventsTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecEventsTendencyOutcome>>();
    DescribeSecEventsTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecEventsTendencyRequest&,
        DescribeSecEventsTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogAlertMsgOutcome TcssClient::DescribeSecLogAlertMsg(const DescribeSecLogAlertMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogAlertMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogAlertMsgResponse rsp = DescribeSecLogAlertMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogAlertMsgOutcome(rsp);
        else
            return DescribeSecLogAlertMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogAlertMsgOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogAlertMsgAsync(const DescribeSecLogAlertMsgRequest& request, const DescribeSecLogAlertMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogAlertMsgRequest&;
    using Resp = DescribeSecLogAlertMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogAlertMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogAlertMsgOutcomeCallable TcssClient::DescribeSecLogAlertMsgCallable(const DescribeSecLogAlertMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogAlertMsgOutcome>>();
    DescribeSecLogAlertMsgAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogAlertMsgRequest&,
        DescribeSecLogAlertMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogCleanSettingInfoOutcome TcssClient::DescribeSecLogCleanSettingInfo(const DescribeSecLogCleanSettingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogCleanSettingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogCleanSettingInfoResponse rsp = DescribeSecLogCleanSettingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogCleanSettingInfoOutcome(rsp);
        else
            return DescribeSecLogCleanSettingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogCleanSettingInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogCleanSettingInfoAsync(const DescribeSecLogCleanSettingInfoRequest& request, const DescribeSecLogCleanSettingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogCleanSettingInfoRequest&;
    using Resp = DescribeSecLogCleanSettingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogCleanSettingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogCleanSettingInfoOutcomeCallable TcssClient::DescribeSecLogCleanSettingInfoCallable(const DescribeSecLogCleanSettingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogCleanSettingInfoOutcome>>();
    DescribeSecLogCleanSettingInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogCleanSettingInfoRequest&,
        DescribeSecLogCleanSettingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogDeliveryClsOptionsOutcome TcssClient::DescribeSecLogDeliveryClsOptions(const DescribeSecLogDeliveryClsOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogDeliveryClsOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogDeliveryClsOptionsResponse rsp = DescribeSecLogDeliveryClsOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogDeliveryClsOptionsOutcome(rsp);
        else
            return DescribeSecLogDeliveryClsOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogDeliveryClsOptionsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogDeliveryClsOptionsAsync(const DescribeSecLogDeliveryClsOptionsRequest& request, const DescribeSecLogDeliveryClsOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogDeliveryClsOptionsRequest&;
    using Resp = DescribeSecLogDeliveryClsOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogDeliveryClsOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogDeliveryClsOptionsOutcomeCallable TcssClient::DescribeSecLogDeliveryClsOptionsCallable(const DescribeSecLogDeliveryClsOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogDeliveryClsOptionsOutcome>>();
    DescribeSecLogDeliveryClsOptionsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogDeliveryClsOptionsRequest&,
        DescribeSecLogDeliveryClsOptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogDeliveryClsSettingOutcome TcssClient::DescribeSecLogDeliveryClsSetting(const DescribeSecLogDeliveryClsSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogDeliveryClsSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogDeliveryClsSettingResponse rsp = DescribeSecLogDeliveryClsSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogDeliveryClsSettingOutcome(rsp);
        else
            return DescribeSecLogDeliveryClsSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogDeliveryClsSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogDeliveryClsSettingAsync(const DescribeSecLogDeliveryClsSettingRequest& request, const DescribeSecLogDeliveryClsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogDeliveryClsSettingRequest&;
    using Resp = DescribeSecLogDeliveryClsSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogDeliveryClsSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogDeliveryClsSettingOutcomeCallable TcssClient::DescribeSecLogDeliveryClsSettingCallable(const DescribeSecLogDeliveryClsSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogDeliveryClsSettingOutcome>>();
    DescribeSecLogDeliveryClsSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogDeliveryClsSettingRequest&,
        DescribeSecLogDeliveryClsSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogDeliveryKafkaOptionsOutcome TcssClient::DescribeSecLogDeliveryKafkaOptions(const DescribeSecLogDeliveryKafkaOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogDeliveryKafkaOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogDeliveryKafkaOptionsResponse rsp = DescribeSecLogDeliveryKafkaOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogDeliveryKafkaOptionsOutcome(rsp);
        else
            return DescribeSecLogDeliveryKafkaOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogDeliveryKafkaOptionsOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogDeliveryKafkaOptionsAsync(const DescribeSecLogDeliveryKafkaOptionsRequest& request, const DescribeSecLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogDeliveryKafkaOptionsRequest&;
    using Resp = DescribeSecLogDeliveryKafkaOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogDeliveryKafkaOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogDeliveryKafkaOptionsOutcomeCallable TcssClient::DescribeSecLogDeliveryKafkaOptionsCallable(const DescribeSecLogDeliveryKafkaOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogDeliveryKafkaOptionsOutcome>>();
    DescribeSecLogDeliveryKafkaOptionsAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogDeliveryKafkaOptionsRequest&,
        DescribeSecLogDeliveryKafkaOptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogDeliveryKafkaSettingOutcome TcssClient::DescribeSecLogDeliveryKafkaSetting(const DescribeSecLogDeliveryKafkaSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogDeliveryKafkaSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogDeliveryKafkaSettingResponse rsp = DescribeSecLogDeliveryKafkaSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogDeliveryKafkaSettingOutcome(rsp);
        else
            return DescribeSecLogDeliveryKafkaSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogDeliveryKafkaSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogDeliveryKafkaSettingAsync(const DescribeSecLogDeliveryKafkaSettingRequest& request, const DescribeSecLogDeliveryKafkaSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogDeliveryKafkaSettingRequest&;
    using Resp = DescribeSecLogDeliveryKafkaSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogDeliveryKafkaSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogDeliveryKafkaSettingOutcomeCallable TcssClient::DescribeSecLogDeliveryKafkaSettingCallable(const DescribeSecLogDeliveryKafkaSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogDeliveryKafkaSettingOutcome>>();
    DescribeSecLogDeliveryKafkaSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogDeliveryKafkaSettingRequest&,
        DescribeSecLogDeliveryKafkaSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogJoinObjectListOutcome TcssClient::DescribeSecLogJoinObjectList(const DescribeSecLogJoinObjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogJoinObjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogJoinObjectListResponse rsp = DescribeSecLogJoinObjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogJoinObjectListOutcome(rsp);
        else
            return DescribeSecLogJoinObjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogJoinObjectListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogJoinObjectListAsync(const DescribeSecLogJoinObjectListRequest& request, const DescribeSecLogJoinObjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogJoinObjectListRequest&;
    using Resp = DescribeSecLogJoinObjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogJoinObjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogJoinObjectListOutcomeCallable TcssClient::DescribeSecLogJoinObjectListCallable(const DescribeSecLogJoinObjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogJoinObjectListOutcome>>();
    DescribeSecLogJoinObjectListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogJoinObjectListRequest&,
        DescribeSecLogJoinObjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogJoinTypeListOutcome TcssClient::DescribeSecLogJoinTypeList(const DescribeSecLogJoinTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogJoinTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogJoinTypeListResponse rsp = DescribeSecLogJoinTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogJoinTypeListOutcome(rsp);
        else
            return DescribeSecLogJoinTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogJoinTypeListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogJoinTypeListAsync(const DescribeSecLogJoinTypeListRequest& request, const DescribeSecLogJoinTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogJoinTypeListRequest&;
    using Resp = DescribeSecLogJoinTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogJoinTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogJoinTypeListOutcomeCallable TcssClient::DescribeSecLogJoinTypeListCallable(const DescribeSecLogJoinTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogJoinTypeListOutcome>>();
    DescribeSecLogJoinTypeListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogJoinTypeListRequest&,
        DescribeSecLogJoinTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogKafkaUINOutcome TcssClient::DescribeSecLogKafkaUIN(const DescribeSecLogKafkaUINRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogKafkaUIN");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogKafkaUINResponse rsp = DescribeSecLogKafkaUINResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogKafkaUINOutcome(rsp);
        else
            return DescribeSecLogKafkaUINOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogKafkaUINOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogKafkaUINAsync(const DescribeSecLogKafkaUINRequest& request, const DescribeSecLogKafkaUINAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogKafkaUINRequest&;
    using Resp = DescribeSecLogKafkaUINResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogKafkaUIN", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogKafkaUINOutcomeCallable TcssClient::DescribeSecLogKafkaUINCallable(const DescribeSecLogKafkaUINRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogKafkaUINOutcome>>();
    DescribeSecLogKafkaUINAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogKafkaUINRequest&,
        DescribeSecLogKafkaUINOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSecLogVasInfoOutcome TcssClient::DescribeSecLogVasInfo(const DescribeSecLogVasInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecLogVasInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecLogVasInfoResponse rsp = DescribeSecLogVasInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecLogVasInfoOutcome(rsp);
        else
            return DescribeSecLogVasInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecLogVasInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSecLogVasInfoAsync(const DescribeSecLogVasInfoRequest& request, const DescribeSecLogVasInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecLogVasInfoRequest&;
    using Resp = DescribeSecLogVasInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecLogVasInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSecLogVasInfoOutcomeCallable TcssClient::DescribeSecLogVasInfoCallable(const DescribeSecLogVasInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecLogVasInfoOutcome>>();
    DescribeSecLogVasInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSecLogVasInfoRequest&,
        DescribeSecLogVasInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSuperNodePodListOutcome TcssClient::DescribeSuperNodePodList(const DescribeSuperNodePodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuperNodePodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuperNodePodListResponse rsp = DescribeSuperNodePodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuperNodePodListOutcome(rsp);
        else
            return DescribeSuperNodePodListOutcome(o.GetError());
    }
    else
    {
        return DescribeSuperNodePodListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSuperNodePodListAsync(const DescribeSuperNodePodListRequest& request, const DescribeSuperNodePodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSuperNodePodListRequest&;
    using Resp = DescribeSuperNodePodListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSuperNodePodList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSuperNodePodListOutcomeCallable TcssClient::DescribeSuperNodePodListCallable(const DescribeSuperNodePodListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSuperNodePodListOutcome>>();
    DescribeSuperNodePodListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSuperNodePodListRequest&,
        DescribeSuperNodePodListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSupportDefenceVulOutcome TcssClient::DescribeSupportDefenceVul(const DescribeSupportDefenceVulRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupportDefenceVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupportDefenceVulResponse rsp = DescribeSupportDefenceVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupportDefenceVulOutcome(rsp);
        else
            return DescribeSupportDefenceVulOutcome(o.GetError());
    }
    else
    {
        return DescribeSupportDefenceVulOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSupportDefenceVulAsync(const DescribeSupportDefenceVulRequest& request, const DescribeSupportDefenceVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSupportDefenceVulRequest&;
    using Resp = DescribeSupportDefenceVulResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSupportDefenceVul", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSupportDefenceVulOutcomeCallable TcssClient::DescribeSupportDefenceVulCallable(const DescribeSupportDefenceVulRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSupportDefenceVulOutcome>>();
    DescribeSupportDefenceVulAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSupportDefenceVulRequest&,
        DescribeSupportDefenceVulOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeSystemVulListOutcome TcssClient::DescribeSystemVulList(const DescribeSystemVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemVulListResponse rsp = DescribeSystemVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemVulListOutcome(rsp);
        else
            return DescribeSystemVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeSystemVulListAsync(const DescribeSystemVulListRequest& request, const DescribeSystemVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemVulListRequest&;
    using Resp = DescribeSystemVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeSystemVulListOutcomeCallable TcssClient::DescribeSystemVulListCallable(const DescribeSystemVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemVulListOutcome>>();
    DescribeSystemVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeSystemVulListRequest&,
        DescribeSystemVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeTaskResultSummaryOutcome TcssClient::DescribeTaskResultSummary(const DescribeTaskResultSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskResultSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskResultSummaryResponse rsp = DescribeTaskResultSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskResultSummaryOutcome(rsp);
        else
            return DescribeTaskResultSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskResultSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeTaskResultSummaryAsync(const DescribeTaskResultSummaryRequest& request, const DescribeTaskResultSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskResultSummaryRequest&;
    using Resp = DescribeTaskResultSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskResultSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeTaskResultSummaryOutcomeCallable TcssClient::DescribeTaskResultSummaryCallable(const DescribeTaskResultSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskResultSummaryOutcome>>();
    DescribeTaskResultSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeTaskResultSummaryRequest&,
        DescribeTaskResultSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeTcssSummaryOutcome TcssClient::DescribeTcssSummary(const DescribeTcssSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTcssSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTcssSummaryResponse rsp = DescribeTcssSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTcssSummaryOutcome(rsp);
        else
            return DescribeTcssSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeTcssSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeTcssSummaryAsync(const DescribeTcssSummaryRequest& request, const DescribeTcssSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTcssSummaryRequest&;
    using Resp = DescribeTcssSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTcssSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeTcssSummaryOutcomeCallable TcssClient::DescribeTcssSummaryCallable(const DescribeTcssSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTcssSummaryOutcome>>();
    DescribeTcssSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeTcssSummaryRequest&,
        DescribeTcssSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeUnauthorizedCoresTendencyOutcome TcssClient::DescribeUnauthorizedCoresTendency(const DescribeUnauthorizedCoresTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnauthorizedCoresTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnauthorizedCoresTendencyResponse rsp = DescribeUnauthorizedCoresTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnauthorizedCoresTendencyOutcome(rsp);
        else
            return DescribeUnauthorizedCoresTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeUnauthorizedCoresTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeUnauthorizedCoresTendencyAsync(const DescribeUnauthorizedCoresTendencyRequest& request, const DescribeUnauthorizedCoresTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnauthorizedCoresTendencyRequest&;
    using Resp = DescribeUnauthorizedCoresTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnauthorizedCoresTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeUnauthorizedCoresTendencyOutcomeCallable TcssClient::DescribeUnauthorizedCoresTendencyCallable(const DescribeUnauthorizedCoresTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnauthorizedCoresTendencyOutcome>>();
    DescribeUnauthorizedCoresTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeUnauthorizedCoresTendencyRequest&,
        DescribeUnauthorizedCoresTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeUnfinishRefreshTaskOutcome TcssClient::DescribeUnfinishRefreshTask(const DescribeUnfinishRefreshTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnfinishRefreshTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnfinishRefreshTaskResponse rsp = DescribeUnfinishRefreshTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnfinishRefreshTaskOutcome(rsp);
        else
            return DescribeUnfinishRefreshTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeUnfinishRefreshTaskOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeUnfinishRefreshTaskAsync(const DescribeUnfinishRefreshTaskRequest& request, const DescribeUnfinishRefreshTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnfinishRefreshTaskRequest&;
    using Resp = DescribeUnfinishRefreshTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnfinishRefreshTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeUnfinishRefreshTaskOutcomeCallable TcssClient::DescribeUnfinishRefreshTaskCallable(const DescribeUnfinishRefreshTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnfinishRefreshTaskOutcome>>();
    DescribeUnfinishRefreshTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeUnfinishRefreshTaskRequest&,
        DescribeUnfinishRefreshTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeUserClusterOutcome TcssClient::DescribeUserCluster(const DescribeUserClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserClusterResponse rsp = DescribeUserClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserClusterOutcome(rsp);
        else
            return DescribeUserClusterOutcome(o.GetError());
    }
    else
    {
        return DescribeUserClusterOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeUserClusterAsync(const DescribeUserClusterRequest& request, const DescribeUserClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserClusterRequest&;
    using Resp = DescribeUserClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeUserClusterOutcomeCallable TcssClient::DescribeUserClusterCallable(const DescribeUserClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserClusterOutcome>>();
    DescribeUserClusterAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeUserClusterRequest&,
        DescribeUserClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeUserPodListOutcome TcssClient::DescribeUserPodList(const DescribeUserPodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserPodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserPodListResponse rsp = DescribeUserPodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserPodListOutcome(rsp);
        else
            return DescribeUserPodListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserPodListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeUserPodListAsync(const DescribeUserPodListRequest& request, const DescribeUserPodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserPodListRequest&;
    using Resp = DescribeUserPodListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserPodList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeUserPodListOutcomeCallable TcssClient::DescribeUserPodListCallable(const DescribeUserPodListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserPodListOutcome>>();
    DescribeUserPodListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeUserPodListRequest&,
        DescribeUserPodListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeValueAddedSrvInfoOutcome TcssClient::DescribeValueAddedSrvInfo(const DescribeValueAddedSrvInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeValueAddedSrvInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeValueAddedSrvInfoResponse rsp = DescribeValueAddedSrvInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeValueAddedSrvInfoOutcome(rsp);
        else
            return DescribeValueAddedSrvInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeValueAddedSrvInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeValueAddedSrvInfoAsync(const DescribeValueAddedSrvInfoRequest& request, const DescribeValueAddedSrvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeValueAddedSrvInfoRequest&;
    using Resp = DescribeValueAddedSrvInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeValueAddedSrvInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeValueAddedSrvInfoOutcomeCallable TcssClient::DescribeValueAddedSrvInfoCallable(const DescribeValueAddedSrvInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeValueAddedSrvInfoOutcome>>();
    DescribeValueAddedSrvInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeValueAddedSrvInfoRequest&,
        DescribeValueAddedSrvInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusAutoIsolateSampleDetailOutcome TcssClient::DescribeVirusAutoIsolateSampleDetail(const DescribeVirusAutoIsolateSampleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusAutoIsolateSampleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusAutoIsolateSampleDetailResponse rsp = DescribeVirusAutoIsolateSampleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusAutoIsolateSampleDetailOutcome(rsp);
        else
            return DescribeVirusAutoIsolateSampleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusAutoIsolateSampleDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusAutoIsolateSampleDetailAsync(const DescribeVirusAutoIsolateSampleDetailRequest& request, const DescribeVirusAutoIsolateSampleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusAutoIsolateSampleDetailRequest&;
    using Resp = DescribeVirusAutoIsolateSampleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusAutoIsolateSampleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusAutoIsolateSampleDetailOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleDetailCallable(const DescribeVirusAutoIsolateSampleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusAutoIsolateSampleDetailOutcome>>();
    DescribeVirusAutoIsolateSampleDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusAutoIsolateSampleDetailRequest&,
        DescribeVirusAutoIsolateSampleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusAutoIsolateSampleDownloadURLOutcome TcssClient::DescribeVirusAutoIsolateSampleDownloadURL(const DescribeVirusAutoIsolateSampleDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusAutoIsolateSampleDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusAutoIsolateSampleDownloadURLResponse rsp = DescribeVirusAutoIsolateSampleDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusAutoIsolateSampleDownloadURLOutcome(rsp);
        else
            return DescribeVirusAutoIsolateSampleDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusAutoIsolateSampleDownloadURLOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusAutoIsolateSampleDownloadURLAsync(const DescribeVirusAutoIsolateSampleDownloadURLRequest& request, const DescribeVirusAutoIsolateSampleDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusAutoIsolateSampleDownloadURLRequest&;
    using Resp = DescribeVirusAutoIsolateSampleDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusAutoIsolateSampleDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusAutoIsolateSampleDownloadURLOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleDownloadURLCallable(const DescribeVirusAutoIsolateSampleDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusAutoIsolateSampleDownloadURLOutcome>>();
    DescribeVirusAutoIsolateSampleDownloadURLAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusAutoIsolateSampleDownloadURLRequest&,
        DescribeVirusAutoIsolateSampleDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusAutoIsolateSampleListOutcome TcssClient::DescribeVirusAutoIsolateSampleList(const DescribeVirusAutoIsolateSampleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusAutoIsolateSampleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusAutoIsolateSampleListResponse rsp = DescribeVirusAutoIsolateSampleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusAutoIsolateSampleListOutcome(rsp);
        else
            return DescribeVirusAutoIsolateSampleListOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusAutoIsolateSampleListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusAutoIsolateSampleListAsync(const DescribeVirusAutoIsolateSampleListRequest& request, const DescribeVirusAutoIsolateSampleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusAutoIsolateSampleListRequest&;
    using Resp = DescribeVirusAutoIsolateSampleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusAutoIsolateSampleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusAutoIsolateSampleListOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleListCallable(const DescribeVirusAutoIsolateSampleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusAutoIsolateSampleListOutcome>>();
    DescribeVirusAutoIsolateSampleListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusAutoIsolateSampleListRequest&,
        DescribeVirusAutoIsolateSampleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusAutoIsolateSettingOutcome TcssClient::DescribeVirusAutoIsolateSetting(const DescribeVirusAutoIsolateSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusAutoIsolateSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusAutoIsolateSettingResponse rsp = DescribeVirusAutoIsolateSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusAutoIsolateSettingOutcome(rsp);
        else
            return DescribeVirusAutoIsolateSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusAutoIsolateSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusAutoIsolateSettingAsync(const DescribeVirusAutoIsolateSettingRequest& request, const DescribeVirusAutoIsolateSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusAutoIsolateSettingRequest&;
    using Resp = DescribeVirusAutoIsolateSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusAutoIsolateSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusAutoIsolateSettingOutcomeCallable TcssClient::DescribeVirusAutoIsolateSettingCallable(const DescribeVirusAutoIsolateSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusAutoIsolateSettingOutcome>>();
    DescribeVirusAutoIsolateSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusAutoIsolateSettingRequest&,
        DescribeVirusAutoIsolateSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusDetailOutcome TcssClient::DescribeVirusDetail(const DescribeVirusDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusDetailResponse rsp = DescribeVirusDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusDetailOutcome(rsp);
        else
            return DescribeVirusDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusDetailAsync(const DescribeVirusDetailRequest& request, const DescribeVirusDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusDetailRequest&;
    using Resp = DescribeVirusDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusDetailOutcomeCallable TcssClient::DescribeVirusDetailCallable(const DescribeVirusDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusDetailOutcome>>();
    DescribeVirusDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusDetailRequest&,
        DescribeVirusDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusEventTendencyOutcome TcssClient::DescribeVirusEventTendency(const DescribeVirusEventTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusEventTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusEventTendencyResponse rsp = DescribeVirusEventTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusEventTendencyOutcome(rsp);
        else
            return DescribeVirusEventTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusEventTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusEventTendencyAsync(const DescribeVirusEventTendencyRequest& request, const DescribeVirusEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusEventTendencyRequest&;
    using Resp = DescribeVirusEventTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusEventTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusEventTendencyOutcomeCallable TcssClient::DescribeVirusEventTendencyCallable(const DescribeVirusEventTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusEventTendencyOutcome>>();
    DescribeVirusEventTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusEventTendencyRequest&,
        DescribeVirusEventTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusListOutcome TcssClient::DescribeVirusList(const DescribeVirusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusListResponse rsp = DescribeVirusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusListOutcome(rsp);
        else
            return DescribeVirusListOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusListAsync(const DescribeVirusListRequest& request, const DescribeVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusListRequest&;
    using Resp = DescribeVirusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusListOutcomeCallable TcssClient::DescribeVirusListCallable(const DescribeVirusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusListOutcome>>();
    DescribeVirusListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusListRequest&,
        DescribeVirusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusManualScanEstimateTimeoutOutcome TcssClient::DescribeVirusManualScanEstimateTimeout(const DescribeVirusManualScanEstimateTimeoutRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusManualScanEstimateTimeout");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusManualScanEstimateTimeoutResponse rsp = DescribeVirusManualScanEstimateTimeoutResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusManualScanEstimateTimeoutOutcome(rsp);
        else
            return DescribeVirusManualScanEstimateTimeoutOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusManualScanEstimateTimeoutOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusManualScanEstimateTimeoutAsync(const DescribeVirusManualScanEstimateTimeoutRequest& request, const DescribeVirusManualScanEstimateTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusManualScanEstimateTimeoutRequest&;
    using Resp = DescribeVirusManualScanEstimateTimeoutResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusManualScanEstimateTimeout", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusManualScanEstimateTimeoutOutcomeCallable TcssClient::DescribeVirusManualScanEstimateTimeoutCallable(const DescribeVirusManualScanEstimateTimeoutRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusManualScanEstimateTimeoutOutcome>>();
    DescribeVirusManualScanEstimateTimeoutAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusManualScanEstimateTimeoutRequest&,
        DescribeVirusManualScanEstimateTimeoutOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusMonitorSettingOutcome TcssClient::DescribeVirusMonitorSetting(const DescribeVirusMonitorSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusMonitorSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusMonitorSettingResponse rsp = DescribeVirusMonitorSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusMonitorSettingOutcome(rsp);
        else
            return DescribeVirusMonitorSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusMonitorSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusMonitorSettingAsync(const DescribeVirusMonitorSettingRequest& request, const DescribeVirusMonitorSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusMonitorSettingRequest&;
    using Resp = DescribeVirusMonitorSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusMonitorSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusMonitorSettingOutcomeCallable TcssClient::DescribeVirusMonitorSettingCallable(const DescribeVirusMonitorSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusMonitorSettingOutcome>>();
    DescribeVirusMonitorSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusMonitorSettingRequest&,
        DescribeVirusMonitorSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusSampleDownloadUrlOutcome TcssClient::DescribeVirusSampleDownloadUrl(const DescribeVirusSampleDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusSampleDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusSampleDownloadUrlResponse rsp = DescribeVirusSampleDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusSampleDownloadUrlOutcome(rsp);
        else
            return DescribeVirusSampleDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusSampleDownloadUrlOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusSampleDownloadUrlAsync(const DescribeVirusSampleDownloadUrlRequest& request, const DescribeVirusSampleDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusSampleDownloadUrlRequest&;
    using Resp = DescribeVirusSampleDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusSampleDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusSampleDownloadUrlOutcomeCallable TcssClient::DescribeVirusSampleDownloadUrlCallable(const DescribeVirusSampleDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusSampleDownloadUrlOutcome>>();
    DescribeVirusSampleDownloadUrlAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusSampleDownloadUrlRequest&,
        DescribeVirusSampleDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusScanSettingOutcome TcssClient::DescribeVirusScanSetting(const DescribeVirusScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusScanSettingResponse rsp = DescribeVirusScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusScanSettingOutcome(rsp);
        else
            return DescribeVirusScanSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusScanSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusScanSettingAsync(const DescribeVirusScanSettingRequest& request, const DescribeVirusScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusScanSettingRequest&;
    using Resp = DescribeVirusScanSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusScanSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusScanSettingOutcomeCallable TcssClient::DescribeVirusScanSettingCallable(const DescribeVirusScanSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusScanSettingOutcome>>();
    DescribeVirusScanSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusScanSettingRequest&,
        DescribeVirusScanSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusScanTaskStatusOutcome TcssClient::DescribeVirusScanTaskStatus(const DescribeVirusScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusScanTaskStatusResponse rsp = DescribeVirusScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusScanTaskStatusOutcome(rsp);
        else
            return DescribeVirusScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusScanTaskStatusOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusScanTaskStatusAsync(const DescribeVirusScanTaskStatusRequest& request, const DescribeVirusScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusScanTaskStatusRequest&;
    using Resp = DescribeVirusScanTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusScanTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusScanTaskStatusOutcomeCallable TcssClient::DescribeVirusScanTaskStatusCallable(const DescribeVirusScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusScanTaskStatusOutcome>>();
    DescribeVirusScanTaskStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusScanTaskStatusRequest&,
        DescribeVirusScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusScanTimeoutSettingOutcome TcssClient::DescribeVirusScanTimeoutSetting(const DescribeVirusScanTimeoutSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusScanTimeoutSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusScanTimeoutSettingResponse rsp = DescribeVirusScanTimeoutSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusScanTimeoutSettingOutcome(rsp);
        else
            return DescribeVirusScanTimeoutSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusScanTimeoutSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusScanTimeoutSettingAsync(const DescribeVirusScanTimeoutSettingRequest& request, const DescribeVirusScanTimeoutSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusScanTimeoutSettingRequest&;
    using Resp = DescribeVirusScanTimeoutSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusScanTimeoutSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusScanTimeoutSettingOutcomeCallable TcssClient::DescribeVirusScanTimeoutSettingCallable(const DescribeVirusScanTimeoutSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusScanTimeoutSettingOutcome>>();
    DescribeVirusScanTimeoutSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusScanTimeoutSettingRequest&,
        DescribeVirusScanTimeoutSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusSummaryOutcome TcssClient::DescribeVirusSummary(const DescribeVirusSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusSummaryResponse rsp = DescribeVirusSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusSummaryOutcome(rsp);
        else
            return DescribeVirusSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusSummaryAsync(const DescribeVirusSummaryRequest& request, const DescribeVirusSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusSummaryRequest&;
    using Resp = DescribeVirusSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusSummaryOutcomeCallable TcssClient::DescribeVirusSummaryCallable(const DescribeVirusSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusSummaryOutcome>>();
    DescribeVirusSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusSummaryRequest&,
        DescribeVirusSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVirusTaskListOutcome TcssClient::DescribeVirusTaskList(const DescribeVirusTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVirusTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVirusTaskListResponse rsp = DescribeVirusTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVirusTaskListOutcome(rsp);
        else
            return DescribeVirusTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeVirusTaskListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVirusTaskListAsync(const DescribeVirusTaskListRequest& request, const DescribeVirusTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVirusTaskListRequest&;
    using Resp = DescribeVirusTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVirusTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVirusTaskListOutcomeCallable TcssClient::DescribeVirusTaskListCallable(const DescribeVirusTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVirusTaskListOutcome>>();
    DescribeVirusTaskListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVirusTaskListRequest&,
        DescribeVirusTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulContainerListOutcome TcssClient::DescribeVulContainerList(const DescribeVulContainerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulContainerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulContainerListResponse rsp = DescribeVulContainerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulContainerListOutcome(rsp);
        else
            return DescribeVulContainerListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulContainerListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulContainerListAsync(const DescribeVulContainerListRequest& request, const DescribeVulContainerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulContainerListRequest&;
    using Resp = DescribeVulContainerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulContainerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulContainerListOutcomeCallable TcssClient::DescribeVulContainerListCallable(const DescribeVulContainerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulContainerListOutcome>>();
    DescribeVulContainerListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulContainerListRequest&,
        DescribeVulContainerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefenceEventOutcome TcssClient::DescribeVulDefenceEvent(const DescribeVulDefenceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceEventResponse rsp = DescribeVulDefenceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceEventOutcome(rsp);
        else
            return DescribeVulDefenceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceEventOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefenceEventAsync(const DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceEventRequest&;
    using Resp = DescribeVulDefenceEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefenceEventOutcomeCallable TcssClient::DescribeVulDefenceEventCallable(const DescribeVulDefenceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceEventOutcome>>();
    DescribeVulDefenceEventAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefenceEventRequest&,
        DescribeVulDefenceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefenceEventDetailOutcome TcssClient::DescribeVulDefenceEventDetail(const DescribeVulDefenceEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceEventDetailResponse rsp = DescribeVulDefenceEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceEventDetailOutcome(rsp);
        else
            return DescribeVulDefenceEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceEventDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefenceEventDetailAsync(const DescribeVulDefenceEventDetailRequest& request, const DescribeVulDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceEventDetailRequest&;
    using Resp = DescribeVulDefenceEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefenceEventDetailOutcomeCallable TcssClient::DescribeVulDefenceEventDetailCallable(const DescribeVulDefenceEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceEventDetailOutcome>>();
    DescribeVulDefenceEventDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefenceEventDetailRequest&,
        DescribeVulDefenceEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefenceEventTendencyOutcome TcssClient::DescribeVulDefenceEventTendency(const DescribeVulDefenceEventTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceEventTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceEventTendencyResponse rsp = DescribeVulDefenceEventTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceEventTendencyOutcome(rsp);
        else
            return DescribeVulDefenceEventTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceEventTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefenceEventTendencyAsync(const DescribeVulDefenceEventTendencyRequest& request, const DescribeVulDefenceEventTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceEventTendencyRequest&;
    using Resp = DescribeVulDefenceEventTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceEventTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefenceEventTendencyOutcomeCallable TcssClient::DescribeVulDefenceEventTendencyCallable(const DescribeVulDefenceEventTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceEventTendencyOutcome>>();
    DescribeVulDefenceEventTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefenceEventTendencyRequest&,
        DescribeVulDefenceEventTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefenceHostOutcome TcssClient::DescribeVulDefenceHost(const DescribeVulDefenceHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceHostResponse rsp = DescribeVulDefenceHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceHostOutcome(rsp);
        else
            return DescribeVulDefenceHostOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceHostOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefenceHostAsync(const DescribeVulDefenceHostRequest& request, const DescribeVulDefenceHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceHostRequest&;
    using Resp = DescribeVulDefenceHostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefenceHostOutcomeCallable TcssClient::DescribeVulDefenceHostCallable(const DescribeVulDefenceHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceHostOutcome>>();
    DescribeVulDefenceHostAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefenceHostRequest&,
        DescribeVulDefenceHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefencePluginOutcome TcssClient::DescribeVulDefencePlugin(const DescribeVulDefencePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginResponse rsp = DescribeVulDefencePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginOutcome(rsp);
        else
            return DescribeVulDefencePluginOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefencePluginAsync(const DescribeVulDefencePluginRequest& request, const DescribeVulDefencePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefencePluginRequest&;
    using Resp = DescribeVulDefencePluginResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefencePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefencePluginOutcomeCallable TcssClient::DescribeVulDefencePluginCallable(const DescribeVulDefencePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefencePluginOutcome>>();
    DescribeVulDefencePluginAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefencePluginRequest&,
        DescribeVulDefencePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDefenceSettingOutcome TcssClient::DescribeVulDefenceSetting(const DescribeVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceSettingResponse rsp = DescribeVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceSettingOutcome(rsp);
        else
            return DescribeVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceSettingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDefenceSettingAsync(const DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceSettingRequest&;
    using Resp = DescribeVulDefenceSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDefenceSettingOutcomeCallable TcssClient::DescribeVulDefenceSettingCallable(const DescribeVulDefenceSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceSettingOutcome>>();
    DescribeVulDefenceSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDefenceSettingRequest&,
        DescribeVulDefenceSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulDetailOutcome TcssClient::DescribeVulDetail(const DescribeVulDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDetailResponse rsp = DescribeVulDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDetailOutcome(rsp);
        else
            return DescribeVulDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDetailOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulDetailAsync(const DescribeVulDetailRequest& request, const DescribeVulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDetailRequest&;
    using Resp = DescribeVulDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulDetailOutcomeCallable TcssClient::DescribeVulDetailCallable(const DescribeVulDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDetailOutcome>>();
    DescribeVulDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulDetailRequest&,
        DescribeVulDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulIgnoreLocalImageListOutcome TcssClient::DescribeVulIgnoreLocalImageList(const DescribeVulIgnoreLocalImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulIgnoreLocalImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulIgnoreLocalImageListResponse rsp = DescribeVulIgnoreLocalImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulIgnoreLocalImageListOutcome(rsp);
        else
            return DescribeVulIgnoreLocalImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulIgnoreLocalImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulIgnoreLocalImageListAsync(const DescribeVulIgnoreLocalImageListRequest& request, const DescribeVulIgnoreLocalImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulIgnoreLocalImageListRequest&;
    using Resp = DescribeVulIgnoreLocalImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulIgnoreLocalImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulIgnoreLocalImageListOutcomeCallable TcssClient::DescribeVulIgnoreLocalImageListCallable(const DescribeVulIgnoreLocalImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulIgnoreLocalImageListOutcome>>();
    DescribeVulIgnoreLocalImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulIgnoreLocalImageListRequest&,
        DescribeVulIgnoreLocalImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulIgnoreRegistryImageListOutcome TcssClient::DescribeVulIgnoreRegistryImageList(const DescribeVulIgnoreRegistryImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulIgnoreRegistryImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulIgnoreRegistryImageListResponse rsp = DescribeVulIgnoreRegistryImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulIgnoreRegistryImageListOutcome(rsp);
        else
            return DescribeVulIgnoreRegistryImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulIgnoreRegistryImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulIgnoreRegistryImageListAsync(const DescribeVulIgnoreRegistryImageListRequest& request, const DescribeVulIgnoreRegistryImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulIgnoreRegistryImageListRequest&;
    using Resp = DescribeVulIgnoreRegistryImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulIgnoreRegistryImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulIgnoreRegistryImageListOutcomeCallable TcssClient::DescribeVulIgnoreRegistryImageListCallable(const DescribeVulIgnoreRegistryImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulIgnoreRegistryImageListOutcome>>();
    DescribeVulIgnoreRegistryImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulIgnoreRegistryImageListRequest&,
        DescribeVulIgnoreRegistryImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulImageListOutcome TcssClient::DescribeVulImageList(const DescribeVulImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulImageListResponse rsp = DescribeVulImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulImageListOutcome(rsp);
        else
            return DescribeVulImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulImageListAsync(const DescribeVulImageListRequest& request, const DescribeVulImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulImageListRequest&;
    using Resp = DescribeVulImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulImageListOutcomeCallable TcssClient::DescribeVulImageListCallable(const DescribeVulImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulImageListOutcome>>();
    DescribeVulImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulImageListRequest&,
        DescribeVulImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulImageSummaryOutcome TcssClient::DescribeVulImageSummary(const DescribeVulImageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulImageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulImageSummaryResponse rsp = DescribeVulImageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulImageSummaryOutcome(rsp);
        else
            return DescribeVulImageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVulImageSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulImageSummaryAsync(const DescribeVulImageSummaryRequest& request, const DescribeVulImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulImageSummaryRequest&;
    using Resp = DescribeVulImageSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulImageSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulImageSummaryOutcomeCallable TcssClient::DescribeVulImageSummaryCallable(const DescribeVulImageSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulImageSummaryOutcome>>();
    DescribeVulImageSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulImageSummaryRequest&,
        DescribeVulImageSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulLevelImageSummaryOutcome TcssClient::DescribeVulLevelImageSummary(const DescribeVulLevelImageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLevelImageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLevelImageSummaryResponse rsp = DescribeVulLevelImageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLevelImageSummaryOutcome(rsp);
        else
            return DescribeVulLevelImageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLevelImageSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulLevelImageSummaryAsync(const DescribeVulLevelImageSummaryRequest& request, const DescribeVulLevelImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulLevelImageSummaryRequest&;
    using Resp = DescribeVulLevelImageSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulLevelImageSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulLevelImageSummaryOutcomeCallable TcssClient::DescribeVulLevelImageSummaryCallable(const DescribeVulLevelImageSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulLevelImageSummaryOutcome>>();
    DescribeVulLevelImageSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulLevelImageSummaryRequest&,
        DescribeVulLevelImageSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulLevelSummaryOutcome TcssClient::DescribeVulLevelSummary(const DescribeVulLevelSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLevelSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLevelSummaryResponse rsp = DescribeVulLevelSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLevelSummaryOutcome(rsp);
        else
            return DescribeVulLevelSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLevelSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulLevelSummaryAsync(const DescribeVulLevelSummaryRequest& request, const DescribeVulLevelSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulLevelSummaryRequest&;
    using Resp = DescribeVulLevelSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulLevelSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulLevelSummaryOutcomeCallable TcssClient::DescribeVulLevelSummaryCallable(const DescribeVulLevelSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulLevelSummaryOutcome>>();
    DescribeVulLevelSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulLevelSummaryRequest&,
        DescribeVulLevelSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulRegistryImageListOutcome TcssClient::DescribeVulRegistryImageList(const DescribeVulRegistryImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulRegistryImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulRegistryImageListResponse rsp = DescribeVulRegistryImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulRegistryImageListOutcome(rsp);
        else
            return DescribeVulRegistryImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulRegistryImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulRegistryImageListAsync(const DescribeVulRegistryImageListRequest& request, const DescribeVulRegistryImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulRegistryImageListRequest&;
    using Resp = DescribeVulRegistryImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulRegistryImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulRegistryImageListOutcomeCallable TcssClient::DescribeVulRegistryImageListCallable(const DescribeVulRegistryImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulRegistryImageListOutcome>>();
    DescribeVulRegistryImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulRegistryImageListRequest&,
        DescribeVulRegistryImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulScanAuthorizedImageSummaryOutcome TcssClient::DescribeVulScanAuthorizedImageSummary(const DescribeVulScanAuthorizedImageSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulScanAuthorizedImageSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulScanAuthorizedImageSummaryResponse rsp = DescribeVulScanAuthorizedImageSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulScanAuthorizedImageSummaryOutcome(rsp);
        else
            return DescribeVulScanAuthorizedImageSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVulScanAuthorizedImageSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulScanAuthorizedImageSummaryAsync(const DescribeVulScanAuthorizedImageSummaryRequest& request, const DescribeVulScanAuthorizedImageSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulScanAuthorizedImageSummaryRequest&;
    using Resp = DescribeVulScanAuthorizedImageSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulScanAuthorizedImageSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulScanAuthorizedImageSummaryOutcomeCallable TcssClient::DescribeVulScanAuthorizedImageSummaryCallable(const DescribeVulScanAuthorizedImageSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulScanAuthorizedImageSummaryOutcome>>();
    DescribeVulScanAuthorizedImageSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulScanAuthorizedImageSummaryRequest&,
        DescribeVulScanAuthorizedImageSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulScanInfoOutcome TcssClient::DescribeVulScanInfo(const DescribeVulScanInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulScanInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulScanInfoResponse rsp = DescribeVulScanInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulScanInfoOutcome(rsp);
        else
            return DescribeVulScanInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVulScanInfoOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulScanInfoAsync(const DescribeVulScanInfoRequest& request, const DescribeVulScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulScanInfoRequest&;
    using Resp = DescribeVulScanInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulScanInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulScanInfoOutcomeCallable TcssClient::DescribeVulScanInfoCallable(const DescribeVulScanInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulScanInfoOutcome>>();
    DescribeVulScanInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulScanInfoRequest&,
        DescribeVulScanInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulScanLocalImageListOutcome TcssClient::DescribeVulScanLocalImageList(const DescribeVulScanLocalImageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulScanLocalImageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulScanLocalImageListResponse rsp = DescribeVulScanLocalImageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulScanLocalImageListOutcome(rsp);
        else
            return DescribeVulScanLocalImageListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulScanLocalImageListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulScanLocalImageListAsync(const DescribeVulScanLocalImageListRequest& request, const DescribeVulScanLocalImageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulScanLocalImageListRequest&;
    using Resp = DescribeVulScanLocalImageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulScanLocalImageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulScanLocalImageListOutcomeCallable TcssClient::DescribeVulScanLocalImageListCallable(const DescribeVulScanLocalImageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulScanLocalImageListOutcome>>();
    DescribeVulScanLocalImageListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulScanLocalImageListRequest&,
        DescribeVulScanLocalImageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulSummaryOutcome TcssClient::DescribeVulSummary(const DescribeVulSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulSummaryResponse rsp = DescribeVulSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulSummaryOutcome(rsp);
        else
            return DescribeVulSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeVulSummaryOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulSummaryAsync(const DescribeVulSummaryRequest& request, const DescribeVulSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulSummaryRequest&;
    using Resp = DescribeVulSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulSummaryOutcomeCallable TcssClient::DescribeVulSummaryCallable(const DescribeVulSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulSummaryOutcome>>();
    DescribeVulSummaryAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulSummaryRequest&,
        DescribeVulSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulTendencyOutcome TcssClient::DescribeVulTendency(const DescribeVulTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTendencyResponse rsp = DescribeVulTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTendencyOutcome(rsp);
        else
            return DescribeVulTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTendencyOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulTendencyAsync(const DescribeVulTendencyRequest& request, const DescribeVulTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulTendencyRequest&;
    using Resp = DescribeVulTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulTendencyOutcomeCallable TcssClient::DescribeVulTendencyCallable(const DescribeVulTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulTendencyOutcome>>();
    DescribeVulTendencyAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulTendencyRequest&,
        DescribeVulTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeVulTopRankingOutcome TcssClient::DescribeVulTopRanking(const DescribeVulTopRankingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTopRanking");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTopRankingResponse rsp = DescribeVulTopRankingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTopRankingOutcome(rsp);
        else
            return DescribeVulTopRankingOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTopRankingOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeVulTopRankingAsync(const DescribeVulTopRankingRequest& request, const DescribeVulTopRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulTopRankingRequest&;
    using Resp = DescribeVulTopRankingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulTopRanking", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeVulTopRankingOutcomeCallable TcssClient::DescribeVulTopRankingCallable(const DescribeVulTopRankingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulTopRankingOutcome>>();
    DescribeVulTopRankingAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeVulTopRankingRequest&,
        DescribeVulTopRankingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeWarningRulesOutcome TcssClient::DescribeWarningRules(const DescribeWarningRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningRulesResponse rsp = DescribeWarningRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningRulesOutcome(rsp);
        else
            return DescribeWarningRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningRulesOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeWarningRulesAsync(const DescribeWarningRulesRequest& request, const DescribeWarningRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarningRulesRequest&;
    using Resp = DescribeWarningRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarningRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeWarningRulesOutcomeCallable TcssClient::DescribeWarningRulesCallable(const DescribeWarningRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarningRulesOutcome>>();
    DescribeWarningRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeWarningRulesRequest&,
        DescribeWarningRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::DescribeWebVulListOutcome TcssClient::DescribeWebVulList(const DescribeWebVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebVulListResponse rsp = DescribeWebVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebVulListOutcome(rsp);
        else
            return DescribeWebVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeWebVulListOutcome(outcome.GetError());
    }
}

void TcssClient::DescribeWebVulListAsync(const DescribeWebVulListRequest& request, const DescribeWebVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebVulListRequest&;
    using Resp = DescribeWebVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::DescribeWebVulListOutcomeCallable TcssClient::DescribeWebVulListCallable(const DescribeWebVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebVulListOutcome>>();
    DescribeWebVulListAsync(
    request,
    [prom](
        const TcssClient*,
        const DescribeWebVulListRequest&,
        DescribeWebVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ExportVirusListOutcome TcssClient::ExportVirusList(const ExportVirusListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVirusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVirusListResponse rsp = ExportVirusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVirusListOutcome(rsp);
        else
            return ExportVirusListOutcome(o.GetError());
    }
    else
    {
        return ExportVirusListOutcome(outcome.GetError());
    }
}

void TcssClient::ExportVirusListAsync(const ExportVirusListRequest& request, const ExportVirusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVirusListRequest&;
    using Resp = ExportVirusListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVirusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ExportVirusListOutcomeCallable TcssClient::ExportVirusListCallable(const ExportVirusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVirusListOutcome>>();
    ExportVirusListAsync(
    request,
    [prom](
        const TcssClient*,
        const ExportVirusListRequest&,
        ExportVirusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::InitializeUserComplianceEnvironmentOutcome TcssClient::InitializeUserComplianceEnvironment(const InitializeUserComplianceEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "InitializeUserComplianceEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InitializeUserComplianceEnvironmentResponse rsp = InitializeUserComplianceEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InitializeUserComplianceEnvironmentOutcome(rsp);
        else
            return InitializeUserComplianceEnvironmentOutcome(o.GetError());
    }
    else
    {
        return InitializeUserComplianceEnvironmentOutcome(outcome.GetError());
    }
}

void TcssClient::InitializeUserComplianceEnvironmentAsync(const InitializeUserComplianceEnvironmentRequest& request, const InitializeUserComplianceEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InitializeUserComplianceEnvironmentRequest&;
    using Resp = InitializeUserComplianceEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "InitializeUserComplianceEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::InitializeUserComplianceEnvironmentOutcomeCallable TcssClient::InitializeUserComplianceEnvironmentCallable(const InitializeUserComplianceEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<InitializeUserComplianceEnvironmentOutcome>>();
    InitializeUserComplianceEnvironmentAsync(
    request,
    [prom](
        const TcssClient*,
        const InitializeUserComplianceEnvironmentRequest&,
        InitializeUserComplianceEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAbnormalProcessRuleStatusOutcome TcssClient::ModifyAbnormalProcessRuleStatus(const ModifyAbnormalProcessRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAbnormalProcessRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAbnormalProcessRuleStatusResponse rsp = ModifyAbnormalProcessRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAbnormalProcessRuleStatusOutcome(rsp);
        else
            return ModifyAbnormalProcessRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAbnormalProcessRuleStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAbnormalProcessRuleStatusAsync(const ModifyAbnormalProcessRuleStatusRequest& request, const ModifyAbnormalProcessRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAbnormalProcessRuleStatusRequest&;
    using Resp = ModifyAbnormalProcessRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAbnormalProcessRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAbnormalProcessRuleStatusOutcomeCallable TcssClient::ModifyAbnormalProcessRuleStatusCallable(const ModifyAbnormalProcessRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAbnormalProcessRuleStatusOutcome>>();
    ModifyAbnormalProcessRuleStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAbnormalProcessRuleStatusRequest&,
        ModifyAbnormalProcessRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAbnormalProcessStatusOutcome TcssClient::ModifyAbnormalProcessStatus(const ModifyAbnormalProcessStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAbnormalProcessStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAbnormalProcessStatusResponse rsp = ModifyAbnormalProcessStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAbnormalProcessStatusOutcome(rsp);
        else
            return ModifyAbnormalProcessStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAbnormalProcessStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAbnormalProcessStatusAsync(const ModifyAbnormalProcessStatusRequest& request, const ModifyAbnormalProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAbnormalProcessStatusRequest&;
    using Resp = ModifyAbnormalProcessStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAbnormalProcessStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAbnormalProcessStatusOutcomeCallable TcssClient::ModifyAbnormalProcessStatusCallable(const ModifyAbnormalProcessStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAbnormalProcessStatusOutcome>>();
    ModifyAbnormalProcessStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAbnormalProcessStatusRequest&,
        ModifyAbnormalProcessStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAccessControlRuleStatusOutcome TcssClient::ModifyAccessControlRuleStatus(const ModifyAccessControlRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessControlRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessControlRuleStatusResponse rsp = ModifyAccessControlRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessControlRuleStatusOutcome(rsp);
        else
            return ModifyAccessControlRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessControlRuleStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAccessControlRuleStatusAsync(const ModifyAccessControlRuleStatusRequest& request, const ModifyAccessControlRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessControlRuleStatusRequest&;
    using Resp = ModifyAccessControlRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessControlRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAccessControlRuleStatusOutcomeCallable TcssClient::ModifyAccessControlRuleStatusCallable(const ModifyAccessControlRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessControlRuleStatusOutcome>>();
    ModifyAccessControlRuleStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAccessControlRuleStatusRequest&,
        ModifyAccessControlRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAccessControlStatusOutcome TcssClient::ModifyAccessControlStatus(const ModifyAccessControlStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessControlStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessControlStatusResponse rsp = ModifyAccessControlStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessControlStatusOutcome(rsp);
        else
            return ModifyAccessControlStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessControlStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAccessControlStatusAsync(const ModifyAccessControlStatusRequest& request, const ModifyAccessControlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessControlStatusRequest&;
    using Resp = ModifyAccessControlStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessControlStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAccessControlStatusOutcomeCallable TcssClient::ModifyAccessControlStatusCallable(const ModifyAccessControlStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessControlStatusOutcome>>();
    ModifyAccessControlStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAccessControlStatusRequest&,
        ModifyAccessControlStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAssetOutcome TcssClient::ModifyAsset(const ModifyAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetResponse rsp = ModifyAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetOutcome(rsp);
        else
            return ModifyAssetOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAssetAsync(const ModifyAssetRequest& request, const ModifyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetRequest&;
    using Resp = ModifyAssetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAssetOutcomeCallable TcssClient::ModifyAssetCallable(const ModifyAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetOutcome>>();
    ModifyAssetAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAssetRequest&,
        ModifyAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAssetImageRegistryScanStopOutcome TcssClient::ModifyAssetImageRegistryScanStop(const ModifyAssetImageRegistryScanStopRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetImageRegistryScanStop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetImageRegistryScanStopResponse rsp = ModifyAssetImageRegistryScanStopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetImageRegistryScanStopOutcome(rsp);
        else
            return ModifyAssetImageRegistryScanStopOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetImageRegistryScanStopOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAssetImageRegistryScanStopAsync(const ModifyAssetImageRegistryScanStopRequest& request, const ModifyAssetImageRegistryScanStopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetImageRegistryScanStopRequest&;
    using Resp = ModifyAssetImageRegistryScanStopResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetImageRegistryScanStop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAssetImageRegistryScanStopOutcomeCallable TcssClient::ModifyAssetImageRegistryScanStopCallable(const ModifyAssetImageRegistryScanStopRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetImageRegistryScanStopOutcome>>();
    ModifyAssetImageRegistryScanStopAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAssetImageRegistryScanStopRequest&,
        ModifyAssetImageRegistryScanStopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAssetImageRegistryScanStopOneKeyOutcome TcssClient::ModifyAssetImageRegistryScanStopOneKey(const ModifyAssetImageRegistryScanStopOneKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetImageRegistryScanStopOneKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetImageRegistryScanStopOneKeyResponse rsp = ModifyAssetImageRegistryScanStopOneKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetImageRegistryScanStopOneKeyOutcome(rsp);
        else
            return ModifyAssetImageRegistryScanStopOneKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetImageRegistryScanStopOneKeyOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAssetImageRegistryScanStopOneKeyAsync(const ModifyAssetImageRegistryScanStopOneKeyRequest& request, const ModifyAssetImageRegistryScanStopOneKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetImageRegistryScanStopOneKeyRequest&;
    using Resp = ModifyAssetImageRegistryScanStopOneKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetImageRegistryScanStopOneKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAssetImageRegistryScanStopOneKeyOutcomeCallable TcssClient::ModifyAssetImageRegistryScanStopOneKeyCallable(const ModifyAssetImageRegistryScanStopOneKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetImageRegistryScanStopOneKeyOutcome>>();
    ModifyAssetImageRegistryScanStopOneKeyAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAssetImageRegistryScanStopOneKeyRequest&,
        ModifyAssetImageRegistryScanStopOneKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyAssetImageScanStopOutcome TcssClient::ModifyAssetImageScanStop(const ModifyAssetImageScanStopRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAssetImageScanStop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAssetImageScanStopResponse rsp = ModifyAssetImageScanStopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAssetImageScanStopOutcome(rsp);
        else
            return ModifyAssetImageScanStopOutcome(o.GetError());
    }
    else
    {
        return ModifyAssetImageScanStopOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyAssetImageScanStopAsync(const ModifyAssetImageScanStopRequest& request, const ModifyAssetImageScanStopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAssetImageScanStopRequest&;
    using Resp = ModifyAssetImageScanStopResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAssetImageScanStop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyAssetImageScanStopOutcomeCallable TcssClient::ModifyAssetImageScanStopCallable(const ModifyAssetImageScanStopRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAssetImageScanStopOutcome>>();
    ModifyAssetImageScanStopAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyAssetImageScanStopRequest&,
        ModifyAssetImageScanStopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyCompliancePeriodTaskOutcome TcssClient::ModifyCompliancePeriodTask(const ModifyCompliancePeriodTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCompliancePeriodTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCompliancePeriodTaskResponse rsp = ModifyCompliancePeriodTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCompliancePeriodTaskOutcome(rsp);
        else
            return ModifyCompliancePeriodTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyCompliancePeriodTaskOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyCompliancePeriodTaskAsync(const ModifyCompliancePeriodTaskRequest& request, const ModifyCompliancePeriodTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCompliancePeriodTaskRequest&;
    using Resp = ModifyCompliancePeriodTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCompliancePeriodTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyCompliancePeriodTaskOutcomeCallable TcssClient::ModifyCompliancePeriodTaskCallable(const ModifyCompliancePeriodTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCompliancePeriodTaskOutcome>>();
    ModifyCompliancePeriodTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyCompliancePeriodTaskRequest&,
        ModifyCompliancePeriodTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyContainerNetStatusOutcome TcssClient::ModifyContainerNetStatus(const ModifyContainerNetStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContainerNetStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContainerNetStatusResponse rsp = ModifyContainerNetStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContainerNetStatusOutcome(rsp);
        else
            return ModifyContainerNetStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyContainerNetStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyContainerNetStatusAsync(const ModifyContainerNetStatusRequest& request, const ModifyContainerNetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyContainerNetStatusRequest&;
    using Resp = ModifyContainerNetStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContainerNetStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyContainerNetStatusOutcomeCallable TcssClient::ModifyContainerNetStatusCallable(const ModifyContainerNetStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContainerNetStatusOutcome>>();
    ModifyContainerNetStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyContainerNetStatusRequest&,
        ModifyContainerNetStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyDefendStatusOutcome TcssClient::ModifyDefendStatus(const ModifyDefendStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefendStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefendStatusResponse rsp = ModifyDefendStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefendStatusOutcome(rsp);
        else
            return ModifyDefendStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDefendStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyDefendStatusAsync(const ModifyDefendStatusRequest& request, const ModifyDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDefendStatusRequest&;
    using Resp = ModifyDefendStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDefendStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyDefendStatusOutcomeCallable TcssClient::ModifyDefendStatusCallable(const ModifyDefendStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDefendStatusOutcome>>();
    ModifyDefendStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyDefendStatusRequest&,
        ModifyDefendStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyEscapeEventStatusOutcome TcssClient::ModifyEscapeEventStatus(const ModifyEscapeEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEscapeEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEscapeEventStatusResponse rsp = ModifyEscapeEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEscapeEventStatusOutcome(rsp);
        else
            return ModifyEscapeEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEscapeEventStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyEscapeEventStatusAsync(const ModifyEscapeEventStatusRequest& request, const ModifyEscapeEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEscapeEventStatusRequest&;
    using Resp = ModifyEscapeEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEscapeEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyEscapeEventStatusOutcomeCallable TcssClient::ModifyEscapeEventStatusCallable(const ModifyEscapeEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEscapeEventStatusOutcome>>();
    ModifyEscapeEventStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyEscapeEventStatusRequest&,
        ModifyEscapeEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyEscapeRuleOutcome TcssClient::ModifyEscapeRule(const ModifyEscapeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEscapeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEscapeRuleResponse rsp = ModifyEscapeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEscapeRuleOutcome(rsp);
        else
            return ModifyEscapeRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEscapeRuleOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyEscapeRuleAsync(const ModifyEscapeRuleRequest& request, const ModifyEscapeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEscapeRuleRequest&;
    using Resp = ModifyEscapeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEscapeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyEscapeRuleOutcomeCallable TcssClient::ModifyEscapeRuleCallable(const ModifyEscapeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEscapeRuleOutcome>>();
    ModifyEscapeRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyEscapeRuleRequest&,
        ModifyEscapeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyEscapeWhiteListOutcome TcssClient::ModifyEscapeWhiteList(const ModifyEscapeWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEscapeWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEscapeWhiteListResponse rsp = ModifyEscapeWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEscapeWhiteListOutcome(rsp);
        else
            return ModifyEscapeWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyEscapeWhiteListOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyEscapeWhiteListAsync(const ModifyEscapeWhiteListRequest& request, const ModifyEscapeWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEscapeWhiteListRequest&;
    using Resp = ModifyEscapeWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEscapeWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyEscapeWhiteListOutcomeCallable TcssClient::ModifyEscapeWhiteListCallable(const ModifyEscapeWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEscapeWhiteListOutcome>>();
    ModifyEscapeWhiteListAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyEscapeWhiteListRequest&,
        ModifyEscapeWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyImageAuthorizedOutcome TcssClient::ModifyImageAuthorized(const ModifyImageAuthorizedRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageAuthorized");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageAuthorizedResponse rsp = ModifyImageAuthorizedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageAuthorizedOutcome(rsp);
        else
            return ModifyImageAuthorizedOutcome(o.GetError());
    }
    else
    {
        return ModifyImageAuthorizedOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyImageAuthorizedAsync(const ModifyImageAuthorizedRequest& request, const ModifyImageAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyImageAuthorizedRequest&;
    using Resp = ModifyImageAuthorizedResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageAuthorized", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyImageAuthorizedOutcomeCallable TcssClient::ModifyImageAuthorizedCallable(const ModifyImageAuthorizedRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageAuthorizedOutcome>>();
    ModifyImageAuthorizedAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyImageAuthorizedRequest&,
        ModifyImageAuthorizedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyK8sApiAbnormalEventStatusOutcome TcssClient::ModifyK8sApiAbnormalEventStatus(const ModifyK8sApiAbnormalEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyK8sApiAbnormalEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyK8sApiAbnormalEventStatusResponse rsp = ModifyK8sApiAbnormalEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyK8sApiAbnormalEventStatusOutcome(rsp);
        else
            return ModifyK8sApiAbnormalEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyK8sApiAbnormalEventStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyK8sApiAbnormalEventStatusAsync(const ModifyK8sApiAbnormalEventStatusRequest& request, const ModifyK8sApiAbnormalEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyK8sApiAbnormalEventStatusRequest&;
    using Resp = ModifyK8sApiAbnormalEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyK8sApiAbnormalEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyK8sApiAbnormalEventStatusOutcomeCallable TcssClient::ModifyK8sApiAbnormalEventStatusCallable(const ModifyK8sApiAbnormalEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyK8sApiAbnormalEventStatusOutcome>>();
    ModifyK8sApiAbnormalEventStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyK8sApiAbnormalEventStatusRequest&,
        ModifyK8sApiAbnormalEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyK8sApiAbnormalRuleInfoOutcome TcssClient::ModifyK8sApiAbnormalRuleInfo(const ModifyK8sApiAbnormalRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyK8sApiAbnormalRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyK8sApiAbnormalRuleInfoResponse rsp = ModifyK8sApiAbnormalRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyK8sApiAbnormalRuleInfoOutcome(rsp);
        else
            return ModifyK8sApiAbnormalRuleInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyK8sApiAbnormalRuleInfoOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyK8sApiAbnormalRuleInfoAsync(const ModifyK8sApiAbnormalRuleInfoRequest& request, const ModifyK8sApiAbnormalRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyK8sApiAbnormalRuleInfoRequest&;
    using Resp = ModifyK8sApiAbnormalRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyK8sApiAbnormalRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::ModifyK8sApiAbnormalRuleInfoCallable(const ModifyK8sApiAbnormalRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyK8sApiAbnormalRuleInfoOutcome>>();
    ModifyK8sApiAbnormalRuleInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyK8sApiAbnormalRuleInfoRequest&,
        ModifyK8sApiAbnormalRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyK8sApiAbnormalRuleStatusOutcome TcssClient::ModifyK8sApiAbnormalRuleStatus(const ModifyK8sApiAbnormalRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyK8sApiAbnormalRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyK8sApiAbnormalRuleStatusResponse rsp = ModifyK8sApiAbnormalRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyK8sApiAbnormalRuleStatusOutcome(rsp);
        else
            return ModifyK8sApiAbnormalRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyK8sApiAbnormalRuleStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyK8sApiAbnormalRuleStatusAsync(const ModifyK8sApiAbnormalRuleStatusRequest& request, const ModifyK8sApiAbnormalRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyK8sApiAbnormalRuleStatusRequest&;
    using Resp = ModifyK8sApiAbnormalRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyK8sApiAbnormalRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyK8sApiAbnormalRuleStatusOutcomeCallable TcssClient::ModifyK8sApiAbnormalRuleStatusCallable(const ModifyK8sApiAbnormalRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyK8sApiAbnormalRuleStatusOutcome>>();
    ModifyK8sApiAbnormalRuleStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyK8sApiAbnormalRuleStatusRequest&,
        ModifyK8sApiAbnormalRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyRaspRulesOutcome TcssClient::ModifyRaspRules(const ModifyRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRaspRulesResponse rsp = ModifyRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRaspRulesOutcome(rsp);
        else
            return ModifyRaspRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyRaspRulesOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyRaspRulesAsync(const ModifyRaspRulesRequest& request, const ModifyRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRaspRulesRequest&;
    using Resp = ModifyRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyRaspRulesOutcomeCallable TcssClient::ModifyRaspRulesCallable(const ModifyRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRaspRulesOutcome>>();
    ModifyRaspRulesAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyRaspRulesRequest&,
        ModifyRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyReverseShellStatusOutcome TcssClient::ModifyReverseShellStatus(const ModifyReverseShellStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReverseShellStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReverseShellStatusResponse rsp = ModifyReverseShellStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReverseShellStatusOutcome(rsp);
        else
            return ModifyReverseShellStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyReverseShellStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyReverseShellStatusAsync(const ModifyReverseShellStatusRequest& request, const ModifyReverseShellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReverseShellStatusRequest&;
    using Resp = ModifyReverseShellStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReverseShellStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyReverseShellStatusOutcomeCallable TcssClient::ModifyReverseShellStatusCallable(const ModifyReverseShellStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReverseShellStatusOutcome>>();
    ModifyReverseShellStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyReverseShellStatusRequest&,
        ModifyReverseShellStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyRiskDnsEventStatusOutcome TcssClient::ModifyRiskDnsEventStatus(const ModifyRiskDnsEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskDnsEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskDnsEventStatusResponse rsp = ModifyRiskDnsEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskDnsEventStatusOutcome(rsp);
        else
            return ModifyRiskDnsEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskDnsEventStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyRiskDnsEventStatusAsync(const ModifyRiskDnsEventStatusRequest& request, const ModifyRiskDnsEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskDnsEventStatusRequest&;
    using Resp = ModifyRiskDnsEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskDnsEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyRiskDnsEventStatusOutcomeCallable TcssClient::ModifyRiskDnsEventStatusCallable(const ModifyRiskDnsEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskDnsEventStatusOutcome>>();
    ModifyRiskDnsEventStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyRiskDnsEventStatusRequest&,
        ModifyRiskDnsEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyRiskSyscallStatusOutcome TcssClient::ModifyRiskSyscallStatus(const ModifyRiskSyscallStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskSyscallStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskSyscallStatusResponse rsp = ModifyRiskSyscallStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskSyscallStatusOutcome(rsp);
        else
            return ModifyRiskSyscallStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskSyscallStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyRiskSyscallStatusAsync(const ModifyRiskSyscallStatusRequest& request, const ModifyRiskSyscallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskSyscallStatusRequest&;
    using Resp = ModifyRiskSyscallStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskSyscallStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyRiskSyscallStatusOutcomeCallable TcssClient::ModifyRiskSyscallStatusCallable(const ModifyRiskSyscallStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskSyscallStatusOutcome>>();
    ModifyRiskSyscallStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyRiskSyscallStatusRequest&,
        ModifyRiskSyscallStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogCleanSettingInfoOutcome TcssClient::ModifySecLogCleanSettingInfo(const ModifySecLogCleanSettingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogCleanSettingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogCleanSettingInfoResponse rsp = ModifySecLogCleanSettingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogCleanSettingInfoOutcome(rsp);
        else
            return ModifySecLogCleanSettingInfoOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogCleanSettingInfoOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogCleanSettingInfoAsync(const ModifySecLogCleanSettingInfoRequest& request, const ModifySecLogCleanSettingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogCleanSettingInfoRequest&;
    using Resp = ModifySecLogCleanSettingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogCleanSettingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogCleanSettingInfoOutcomeCallable TcssClient::ModifySecLogCleanSettingInfoCallable(const ModifySecLogCleanSettingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogCleanSettingInfoOutcome>>();
    ModifySecLogCleanSettingInfoAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogCleanSettingInfoRequest&,
        ModifySecLogCleanSettingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogDeliveryClsSettingOutcome TcssClient::ModifySecLogDeliveryClsSetting(const ModifySecLogDeliveryClsSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogDeliveryClsSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogDeliveryClsSettingResponse rsp = ModifySecLogDeliveryClsSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogDeliveryClsSettingOutcome(rsp);
        else
            return ModifySecLogDeliveryClsSettingOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogDeliveryClsSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogDeliveryClsSettingAsync(const ModifySecLogDeliveryClsSettingRequest& request, const ModifySecLogDeliveryClsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogDeliveryClsSettingRequest&;
    using Resp = ModifySecLogDeliveryClsSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogDeliveryClsSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogDeliveryClsSettingOutcomeCallable TcssClient::ModifySecLogDeliveryClsSettingCallable(const ModifySecLogDeliveryClsSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogDeliveryClsSettingOutcome>>();
    ModifySecLogDeliveryClsSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogDeliveryClsSettingRequest&,
        ModifySecLogDeliveryClsSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogDeliveryKafkaSettingOutcome TcssClient::ModifySecLogDeliveryKafkaSetting(const ModifySecLogDeliveryKafkaSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogDeliveryKafkaSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogDeliveryKafkaSettingResponse rsp = ModifySecLogDeliveryKafkaSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogDeliveryKafkaSettingOutcome(rsp);
        else
            return ModifySecLogDeliveryKafkaSettingOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogDeliveryKafkaSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogDeliveryKafkaSettingAsync(const ModifySecLogDeliveryKafkaSettingRequest& request, const ModifySecLogDeliveryKafkaSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogDeliveryKafkaSettingRequest&;
    using Resp = ModifySecLogDeliveryKafkaSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogDeliveryKafkaSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogDeliveryKafkaSettingOutcomeCallable TcssClient::ModifySecLogDeliveryKafkaSettingCallable(const ModifySecLogDeliveryKafkaSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogDeliveryKafkaSettingOutcome>>();
    ModifySecLogDeliveryKafkaSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogDeliveryKafkaSettingRequest&,
        ModifySecLogDeliveryKafkaSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogJoinObjectsOutcome TcssClient::ModifySecLogJoinObjects(const ModifySecLogJoinObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogJoinObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogJoinObjectsResponse rsp = ModifySecLogJoinObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogJoinObjectsOutcome(rsp);
        else
            return ModifySecLogJoinObjectsOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogJoinObjectsOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogJoinObjectsAsync(const ModifySecLogJoinObjectsRequest& request, const ModifySecLogJoinObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogJoinObjectsRequest&;
    using Resp = ModifySecLogJoinObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogJoinObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogJoinObjectsOutcomeCallable TcssClient::ModifySecLogJoinObjectsCallable(const ModifySecLogJoinObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogJoinObjectsOutcome>>();
    ModifySecLogJoinObjectsAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogJoinObjectsRequest&,
        ModifySecLogJoinObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogJoinStateOutcome TcssClient::ModifySecLogJoinState(const ModifySecLogJoinStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogJoinState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogJoinStateResponse rsp = ModifySecLogJoinStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogJoinStateOutcome(rsp);
        else
            return ModifySecLogJoinStateOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogJoinStateOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogJoinStateAsync(const ModifySecLogJoinStateRequest& request, const ModifySecLogJoinStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogJoinStateRequest&;
    using Resp = ModifySecLogJoinStateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogJoinState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogJoinStateOutcomeCallable TcssClient::ModifySecLogJoinStateCallable(const ModifySecLogJoinStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogJoinStateOutcome>>();
    ModifySecLogJoinStateAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogJoinStateRequest&,
        ModifySecLogJoinStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifySecLogKafkaUINOutcome TcssClient::ModifySecLogKafkaUIN(const ModifySecLogKafkaUINRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecLogKafkaUIN");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecLogKafkaUINResponse rsp = ModifySecLogKafkaUINResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecLogKafkaUINOutcome(rsp);
        else
            return ModifySecLogKafkaUINOutcome(o.GetError());
    }
    else
    {
        return ModifySecLogKafkaUINOutcome(outcome.GetError());
    }
}

void TcssClient::ModifySecLogKafkaUINAsync(const ModifySecLogKafkaUINRequest& request, const ModifySecLogKafkaUINAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecLogKafkaUINRequest&;
    using Resp = ModifySecLogKafkaUINResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecLogKafkaUIN", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifySecLogKafkaUINOutcomeCallable TcssClient::ModifySecLogKafkaUINCallable(const ModifySecLogKafkaUINRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecLogKafkaUINOutcome>>();
    ModifySecLogKafkaUINAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifySecLogKafkaUINRequest&,
        ModifySecLogKafkaUINOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusAutoIsolateExampleSwitchOutcome TcssClient::ModifyVirusAutoIsolateExampleSwitch(const ModifyVirusAutoIsolateExampleSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusAutoIsolateExampleSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusAutoIsolateExampleSwitchResponse rsp = ModifyVirusAutoIsolateExampleSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusAutoIsolateExampleSwitchOutcome(rsp);
        else
            return ModifyVirusAutoIsolateExampleSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusAutoIsolateExampleSwitchOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusAutoIsolateExampleSwitchAsync(const ModifyVirusAutoIsolateExampleSwitchRequest& request, const ModifyVirusAutoIsolateExampleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusAutoIsolateExampleSwitchRequest&;
    using Resp = ModifyVirusAutoIsolateExampleSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusAutoIsolateExampleSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusAutoIsolateExampleSwitchOutcomeCallable TcssClient::ModifyVirusAutoIsolateExampleSwitchCallable(const ModifyVirusAutoIsolateExampleSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusAutoIsolateExampleSwitchOutcome>>();
    ModifyVirusAutoIsolateExampleSwitchAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusAutoIsolateExampleSwitchRequest&,
        ModifyVirusAutoIsolateExampleSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusAutoIsolateSettingOutcome TcssClient::ModifyVirusAutoIsolateSetting(const ModifyVirusAutoIsolateSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusAutoIsolateSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusAutoIsolateSettingResponse rsp = ModifyVirusAutoIsolateSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusAutoIsolateSettingOutcome(rsp);
        else
            return ModifyVirusAutoIsolateSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusAutoIsolateSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusAutoIsolateSettingAsync(const ModifyVirusAutoIsolateSettingRequest& request, const ModifyVirusAutoIsolateSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusAutoIsolateSettingRequest&;
    using Resp = ModifyVirusAutoIsolateSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusAutoIsolateSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusAutoIsolateSettingOutcomeCallable TcssClient::ModifyVirusAutoIsolateSettingCallable(const ModifyVirusAutoIsolateSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusAutoIsolateSettingOutcome>>();
    ModifyVirusAutoIsolateSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusAutoIsolateSettingRequest&,
        ModifyVirusAutoIsolateSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusFileStatusOutcome TcssClient::ModifyVirusFileStatus(const ModifyVirusFileStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusFileStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusFileStatusResponse rsp = ModifyVirusFileStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusFileStatusOutcome(rsp);
        else
            return ModifyVirusFileStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusFileStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusFileStatusAsync(const ModifyVirusFileStatusRequest& request, const ModifyVirusFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusFileStatusRequest&;
    using Resp = ModifyVirusFileStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusFileStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusFileStatusOutcomeCallable TcssClient::ModifyVirusFileStatusCallable(const ModifyVirusFileStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusFileStatusOutcome>>();
    ModifyVirusFileStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusFileStatusRequest&,
        ModifyVirusFileStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusMonitorSettingOutcome TcssClient::ModifyVirusMonitorSetting(const ModifyVirusMonitorSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusMonitorSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusMonitorSettingResponse rsp = ModifyVirusMonitorSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusMonitorSettingOutcome(rsp);
        else
            return ModifyVirusMonitorSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusMonitorSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusMonitorSettingAsync(const ModifyVirusMonitorSettingRequest& request, const ModifyVirusMonitorSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusMonitorSettingRequest&;
    using Resp = ModifyVirusMonitorSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusMonitorSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusMonitorSettingOutcomeCallable TcssClient::ModifyVirusMonitorSettingCallable(const ModifyVirusMonitorSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusMonitorSettingOutcome>>();
    ModifyVirusMonitorSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusMonitorSettingRequest&,
        ModifyVirusMonitorSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusScanSettingOutcome TcssClient::ModifyVirusScanSetting(const ModifyVirusScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusScanSettingResponse rsp = ModifyVirusScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusScanSettingOutcome(rsp);
        else
            return ModifyVirusScanSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusScanSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusScanSettingAsync(const ModifyVirusScanSettingRequest& request, const ModifyVirusScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusScanSettingRequest&;
    using Resp = ModifyVirusScanSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusScanSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusScanSettingOutcomeCallable TcssClient::ModifyVirusScanSettingCallable(const ModifyVirusScanSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusScanSettingOutcome>>();
    ModifyVirusScanSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusScanSettingRequest&,
        ModifyVirusScanSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVirusScanTimeoutSettingOutcome TcssClient::ModifyVirusScanTimeoutSetting(const ModifyVirusScanTimeoutSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVirusScanTimeoutSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVirusScanTimeoutSettingResponse rsp = ModifyVirusScanTimeoutSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVirusScanTimeoutSettingOutcome(rsp);
        else
            return ModifyVirusScanTimeoutSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVirusScanTimeoutSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVirusScanTimeoutSettingAsync(const ModifyVirusScanTimeoutSettingRequest& request, const ModifyVirusScanTimeoutSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVirusScanTimeoutSettingRequest&;
    using Resp = ModifyVirusScanTimeoutSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVirusScanTimeoutSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVirusScanTimeoutSettingOutcomeCallable TcssClient::ModifyVirusScanTimeoutSettingCallable(const ModifyVirusScanTimeoutSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVirusScanTimeoutSettingOutcome>>();
    ModifyVirusScanTimeoutSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVirusScanTimeoutSettingRequest&,
        ModifyVirusScanTimeoutSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVulDefenceEventStatusOutcome TcssClient::ModifyVulDefenceEventStatus(const ModifyVulDefenceEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceEventStatusResponse rsp = ModifyVulDefenceEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceEventStatusOutcome(rsp);
        else
            return ModifyVulDefenceEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceEventStatusOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVulDefenceEventStatusAsync(const ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVulDefenceEventStatusRequest&;
    using Resp = ModifyVulDefenceEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVulDefenceEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVulDefenceEventStatusOutcomeCallable TcssClient::ModifyVulDefenceEventStatusCallable(const ModifyVulDefenceEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVulDefenceEventStatusOutcome>>();
    ModifyVulDefenceEventStatusAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVulDefenceEventStatusRequest&,
        ModifyVulDefenceEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ModifyVulDefenceSettingOutcome TcssClient::ModifyVulDefenceSetting(const ModifyVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceSettingResponse rsp = ModifyVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceSettingOutcome(rsp);
        else
            return ModifyVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceSettingOutcome(outcome.GetError());
    }
}

void TcssClient::ModifyVulDefenceSettingAsync(const ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVulDefenceSettingRequest&;
    using Resp = ModifyVulDefenceSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVulDefenceSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ModifyVulDefenceSettingOutcomeCallable TcssClient::ModifyVulDefenceSettingCallable(const ModifyVulDefenceSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVulDefenceSettingOutcome>>();
    ModifyVulDefenceSettingAsync(
    request,
    [prom](
        const TcssClient*,
        const ModifyVulDefenceSettingRequest&,
        ModifyVulDefenceSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::OpenTcssTrialOutcome TcssClient::OpenTcssTrial(const OpenTcssTrialRequest &request)
{
    auto outcome = MakeRequest(request, "OpenTcssTrial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenTcssTrialResponse rsp = OpenTcssTrialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenTcssTrialOutcome(rsp);
        else
            return OpenTcssTrialOutcome(o.GetError());
    }
    else
    {
        return OpenTcssTrialOutcome(outcome.GetError());
    }
}

void TcssClient::OpenTcssTrialAsync(const OpenTcssTrialRequest& request, const OpenTcssTrialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenTcssTrialRequest&;
    using Resp = OpenTcssTrialResponse;

    DoRequestAsync<Req, Resp>(
        "OpenTcssTrial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::OpenTcssTrialOutcomeCallable TcssClient::OpenTcssTrialCallable(const OpenTcssTrialRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenTcssTrialOutcome>>();
    OpenTcssTrialAsync(
    request,
    [prom](
        const TcssClient*,
        const OpenTcssTrialRequest&,
        OpenTcssTrialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::RemoveAssetImageRegistryRegistryDetailOutcome TcssClient::RemoveAssetImageRegistryRegistryDetail(const RemoveAssetImageRegistryRegistryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveAssetImageRegistryRegistryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveAssetImageRegistryRegistryDetailResponse rsp = RemoveAssetImageRegistryRegistryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveAssetImageRegistryRegistryDetailOutcome(rsp);
        else
            return RemoveAssetImageRegistryRegistryDetailOutcome(o.GetError());
    }
    else
    {
        return RemoveAssetImageRegistryRegistryDetailOutcome(outcome.GetError());
    }
}

void TcssClient::RemoveAssetImageRegistryRegistryDetailAsync(const RemoveAssetImageRegistryRegistryDetailRequest& request, const RemoveAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveAssetImageRegistryRegistryDetailRequest&;
    using Resp = RemoveAssetImageRegistryRegistryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveAssetImageRegistryRegistryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::RemoveAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::RemoveAssetImageRegistryRegistryDetailCallable(const RemoveAssetImageRegistryRegistryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveAssetImageRegistryRegistryDetailOutcome>>();
    RemoveAssetImageRegistryRegistryDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const RemoveAssetImageRegistryRegistryDetailRequest&,
        RemoveAssetImageRegistryRegistryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::RenewImageAuthorizeStateOutcome TcssClient::RenewImageAuthorizeState(const RenewImageAuthorizeStateRequest &request)
{
    auto outcome = MakeRequest(request, "RenewImageAuthorizeState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewImageAuthorizeStateResponse rsp = RenewImageAuthorizeStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewImageAuthorizeStateOutcome(rsp);
        else
            return RenewImageAuthorizeStateOutcome(o.GetError());
    }
    else
    {
        return RenewImageAuthorizeStateOutcome(outcome.GetError());
    }
}

void TcssClient::RenewImageAuthorizeStateAsync(const RenewImageAuthorizeStateRequest& request, const RenewImageAuthorizeStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewImageAuthorizeStateRequest&;
    using Resp = RenewImageAuthorizeStateResponse;

    DoRequestAsync<Req, Resp>(
        "RenewImageAuthorizeState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::RenewImageAuthorizeStateOutcomeCallable TcssClient::RenewImageAuthorizeStateCallable(const RenewImageAuthorizeStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewImageAuthorizeStateOutcome>>();
    RenewImageAuthorizeStateAsync(
    request,
    [prom](
        const TcssClient*,
        const RenewImageAuthorizeStateRequest&,
        RenewImageAuthorizeStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ResetSecLogTopicConfigOutcome TcssClient::ResetSecLogTopicConfig(const ResetSecLogTopicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSecLogTopicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSecLogTopicConfigResponse rsp = ResetSecLogTopicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSecLogTopicConfigOutcome(rsp);
        else
            return ResetSecLogTopicConfigOutcome(o.GetError());
    }
    else
    {
        return ResetSecLogTopicConfigOutcome(outcome.GetError());
    }
}

void TcssClient::ResetSecLogTopicConfigAsync(const ResetSecLogTopicConfigRequest& request, const ResetSecLogTopicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetSecLogTopicConfigRequest&;
    using Resp = ResetSecLogTopicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ResetSecLogTopicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ResetSecLogTopicConfigOutcomeCallable TcssClient::ResetSecLogTopicConfigCallable(const ResetSecLogTopicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetSecLogTopicConfigOutcome>>();
    ResetSecLogTopicConfigAsync(
    request,
    [prom](
        const TcssClient*,
        const ResetSecLogTopicConfigRequest&,
        ResetSecLogTopicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ScanComplianceAssetsOutcome TcssClient::ScanComplianceAssets(const ScanComplianceAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "ScanComplianceAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanComplianceAssetsResponse rsp = ScanComplianceAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanComplianceAssetsOutcome(rsp);
        else
            return ScanComplianceAssetsOutcome(o.GetError());
    }
    else
    {
        return ScanComplianceAssetsOutcome(outcome.GetError());
    }
}

void TcssClient::ScanComplianceAssetsAsync(const ScanComplianceAssetsRequest& request, const ScanComplianceAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanComplianceAssetsRequest&;
    using Resp = ScanComplianceAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "ScanComplianceAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ScanComplianceAssetsOutcomeCallable TcssClient::ScanComplianceAssetsCallable(const ScanComplianceAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanComplianceAssetsOutcome>>();
    ScanComplianceAssetsAsync(
    request,
    [prom](
        const TcssClient*,
        const ScanComplianceAssetsRequest&,
        ScanComplianceAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ScanComplianceAssetsByPolicyItemOutcome TcssClient::ScanComplianceAssetsByPolicyItem(const ScanComplianceAssetsByPolicyItemRequest &request)
{
    auto outcome = MakeRequest(request, "ScanComplianceAssetsByPolicyItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanComplianceAssetsByPolicyItemResponse rsp = ScanComplianceAssetsByPolicyItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanComplianceAssetsByPolicyItemOutcome(rsp);
        else
            return ScanComplianceAssetsByPolicyItemOutcome(o.GetError());
    }
    else
    {
        return ScanComplianceAssetsByPolicyItemOutcome(outcome.GetError());
    }
}

void TcssClient::ScanComplianceAssetsByPolicyItemAsync(const ScanComplianceAssetsByPolicyItemRequest& request, const ScanComplianceAssetsByPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanComplianceAssetsByPolicyItemRequest&;
    using Resp = ScanComplianceAssetsByPolicyItemResponse;

    DoRequestAsync<Req, Resp>(
        "ScanComplianceAssetsByPolicyItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ScanComplianceAssetsByPolicyItemOutcomeCallable TcssClient::ScanComplianceAssetsByPolicyItemCallable(const ScanComplianceAssetsByPolicyItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanComplianceAssetsByPolicyItemOutcome>>();
    ScanComplianceAssetsByPolicyItemAsync(
    request,
    [prom](
        const TcssClient*,
        const ScanComplianceAssetsByPolicyItemRequest&,
        ScanComplianceAssetsByPolicyItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ScanCompliancePolicyItemsOutcome TcssClient::ScanCompliancePolicyItems(const ScanCompliancePolicyItemsRequest &request)
{
    auto outcome = MakeRequest(request, "ScanCompliancePolicyItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanCompliancePolicyItemsResponse rsp = ScanCompliancePolicyItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanCompliancePolicyItemsOutcome(rsp);
        else
            return ScanCompliancePolicyItemsOutcome(o.GetError());
    }
    else
    {
        return ScanCompliancePolicyItemsOutcome(outcome.GetError());
    }
}

void TcssClient::ScanCompliancePolicyItemsAsync(const ScanCompliancePolicyItemsRequest& request, const ScanCompliancePolicyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanCompliancePolicyItemsRequest&;
    using Resp = ScanCompliancePolicyItemsResponse;

    DoRequestAsync<Req, Resp>(
        "ScanCompliancePolicyItems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ScanCompliancePolicyItemsOutcomeCallable TcssClient::ScanCompliancePolicyItemsCallable(const ScanCompliancePolicyItemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanCompliancePolicyItemsOutcome>>();
    ScanCompliancePolicyItemsAsync(
    request,
    [prom](
        const TcssClient*,
        const ScanCompliancePolicyItemsRequest&,
        ScanCompliancePolicyItemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::ScanComplianceScanFailedAssetsOutcome TcssClient::ScanComplianceScanFailedAssets(const ScanComplianceScanFailedAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "ScanComplianceScanFailedAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanComplianceScanFailedAssetsResponse rsp = ScanComplianceScanFailedAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanComplianceScanFailedAssetsOutcome(rsp);
        else
            return ScanComplianceScanFailedAssetsOutcome(o.GetError());
    }
    else
    {
        return ScanComplianceScanFailedAssetsOutcome(outcome.GetError());
    }
}

void TcssClient::ScanComplianceScanFailedAssetsAsync(const ScanComplianceScanFailedAssetsRequest& request, const ScanComplianceScanFailedAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanComplianceScanFailedAssetsRequest&;
    using Resp = ScanComplianceScanFailedAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "ScanComplianceScanFailedAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::ScanComplianceScanFailedAssetsOutcomeCallable TcssClient::ScanComplianceScanFailedAssetsCallable(const ScanComplianceScanFailedAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanComplianceScanFailedAssetsOutcome>>();
    ScanComplianceScanFailedAssetsAsync(
    request,
    [prom](
        const TcssClient*,
        const ScanComplianceScanFailedAssetsRequest&,
        ScanComplianceScanFailedAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::SetCheckModeOutcome TcssClient::SetCheckMode(const SetCheckModeRequest &request)
{
    auto outcome = MakeRequest(request, "SetCheckMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCheckModeResponse rsp = SetCheckModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCheckModeOutcome(rsp);
        else
            return SetCheckModeOutcome(o.GetError());
    }
    else
    {
        return SetCheckModeOutcome(outcome.GetError());
    }
}

void TcssClient::SetCheckModeAsync(const SetCheckModeRequest& request, const SetCheckModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetCheckModeRequest&;
    using Resp = SetCheckModeResponse;

    DoRequestAsync<Req, Resp>(
        "SetCheckMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::SetCheckModeOutcomeCallable TcssClient::SetCheckModeCallable(const SetCheckModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCheckModeOutcome>>();
    SetCheckModeAsync(
    request,
    [prom](
        const TcssClient*,
        const SetCheckModeRequest&,
        SetCheckModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::StopVirusScanTaskOutcome TcssClient::StopVirusScanTask(const StopVirusScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopVirusScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopVirusScanTaskResponse rsp = StopVirusScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopVirusScanTaskOutcome(rsp);
        else
            return StopVirusScanTaskOutcome(o.GetError());
    }
    else
    {
        return StopVirusScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::StopVirusScanTaskAsync(const StopVirusScanTaskRequest& request, const StopVirusScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopVirusScanTaskRequest&;
    using Resp = StopVirusScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopVirusScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::StopVirusScanTaskOutcomeCallable TcssClient::StopVirusScanTaskCallable(const StopVirusScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopVirusScanTaskOutcome>>();
    StopVirusScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const StopVirusScanTaskRequest&,
        StopVirusScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::StopVulScanTaskOutcome TcssClient::StopVulScanTask(const StopVulScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopVulScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopVulScanTaskResponse rsp = StopVulScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopVulScanTaskOutcome(rsp);
        else
            return StopVulScanTaskOutcome(o.GetError());
    }
    else
    {
        return StopVulScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::StopVulScanTaskAsync(const StopVulScanTaskRequest& request, const StopVulScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopVulScanTaskRequest&;
    using Resp = StopVulScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopVulScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::StopVulScanTaskOutcomeCallable TcssClient::StopVulScanTaskCallable(const StopVulScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopVulScanTaskOutcome>>();
    StopVulScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const StopVulScanTaskRequest&,
        StopVulScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::SwitchImageAutoAuthorizedRuleOutcome TcssClient::SwitchImageAutoAuthorizedRule(const SwitchImageAutoAuthorizedRuleRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchImageAutoAuthorizedRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchImageAutoAuthorizedRuleResponse rsp = SwitchImageAutoAuthorizedRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchImageAutoAuthorizedRuleOutcome(rsp);
        else
            return SwitchImageAutoAuthorizedRuleOutcome(o.GetError());
    }
    else
    {
        return SwitchImageAutoAuthorizedRuleOutcome(outcome.GetError());
    }
}

void TcssClient::SwitchImageAutoAuthorizedRuleAsync(const SwitchImageAutoAuthorizedRuleRequest& request, const SwitchImageAutoAuthorizedRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchImageAutoAuthorizedRuleRequest&;
    using Resp = SwitchImageAutoAuthorizedRuleResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchImageAutoAuthorizedRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::SwitchImageAutoAuthorizedRuleOutcomeCallable TcssClient::SwitchImageAutoAuthorizedRuleCallable(const SwitchImageAutoAuthorizedRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchImageAutoAuthorizedRuleOutcome>>();
    SwitchImageAutoAuthorizedRuleAsync(
    request,
    [prom](
        const TcssClient*,
        const SwitchImageAutoAuthorizedRuleRequest&,
        SwitchImageAutoAuthorizedRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::SyncAssetImageRegistryAssetOutcome TcssClient::SyncAssetImageRegistryAsset(const SyncAssetImageRegistryAssetRequest &request)
{
    auto outcome = MakeRequest(request, "SyncAssetImageRegistryAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncAssetImageRegistryAssetResponse rsp = SyncAssetImageRegistryAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncAssetImageRegistryAssetOutcome(rsp);
        else
            return SyncAssetImageRegistryAssetOutcome(o.GetError());
    }
    else
    {
        return SyncAssetImageRegistryAssetOutcome(outcome.GetError());
    }
}

void TcssClient::SyncAssetImageRegistryAssetAsync(const SyncAssetImageRegistryAssetRequest& request, const SyncAssetImageRegistryAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncAssetImageRegistryAssetRequest&;
    using Resp = SyncAssetImageRegistryAssetResponse;

    DoRequestAsync<Req, Resp>(
        "SyncAssetImageRegistryAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::SyncAssetImageRegistryAssetOutcomeCallable TcssClient::SyncAssetImageRegistryAssetCallable(const SyncAssetImageRegistryAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncAssetImageRegistryAssetOutcome>>();
    SyncAssetImageRegistryAssetAsync(
    request,
    [prom](
        const TcssClient*,
        const SyncAssetImageRegistryAssetRequest&,
        SyncAssetImageRegistryAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UninstallClusterContainerSecurityOutcome TcssClient::UninstallClusterContainerSecurity(const UninstallClusterContainerSecurityRequest &request)
{
    auto outcome = MakeRequest(request, "UninstallClusterContainerSecurity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UninstallClusterContainerSecurityResponse rsp = UninstallClusterContainerSecurityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UninstallClusterContainerSecurityOutcome(rsp);
        else
            return UninstallClusterContainerSecurityOutcome(o.GetError());
    }
    else
    {
        return UninstallClusterContainerSecurityOutcome(outcome.GetError());
    }
}

void TcssClient::UninstallClusterContainerSecurityAsync(const UninstallClusterContainerSecurityRequest& request, const UninstallClusterContainerSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UninstallClusterContainerSecurityRequest&;
    using Resp = UninstallClusterContainerSecurityResponse;

    DoRequestAsync<Req, Resp>(
        "UninstallClusterContainerSecurity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UninstallClusterContainerSecurityOutcomeCallable TcssClient::UninstallClusterContainerSecurityCallable(const UninstallClusterContainerSecurityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UninstallClusterContainerSecurityOutcome>>();
    UninstallClusterContainerSecurityAsync(
    request,
    [prom](
        const TcssClient*,
        const UninstallClusterContainerSecurityRequest&,
        UninstallClusterContainerSecurityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailOutcome TcssClient::UpdateAndPublishNetworkFirewallPolicyDetail(const UpdateAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAndPublishNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAndPublishNetworkFirewallPolicyDetailResponse rsp = UpdateAndPublishNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAndPublishNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return UpdateAndPublishNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return UpdateAndPublishNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailAsync(const UpdateAndPublishNetworkFirewallPolicyDetailRequest& request, const UpdateAndPublishNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAndPublishNetworkFirewallPolicyDetailRequest&;
    using Resp = UpdateAndPublishNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAndPublishNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailOutcomeCallable TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailCallable(const UpdateAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAndPublishNetworkFirewallPolicyDetailOutcome>>();
    UpdateAndPublishNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateAndPublishNetworkFirewallPolicyDetailRequest&,
        UpdateAndPublishNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetail(const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAndPublishNetworkFirewallPolicyYamlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAndPublishNetworkFirewallPolicyYamlDetailResponse rsp = UpdateAndPublishNetworkFirewallPolicyYamlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome(rsp);
        else
            return UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome(o.GetError());
    }
    else
    {
        return UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailAsync(const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest& request, const UpdateAndPublishNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest&;
    using Resp = UpdateAndPublishNetworkFirewallPolicyYamlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAndPublishNetworkFirewallPolicyYamlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailCallable(const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome>>();
    UpdateAndPublishNetworkFirewallPolicyYamlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest&,
        UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateAssetImageRegistryRegistryDetailOutcome TcssClient::UpdateAssetImageRegistryRegistryDetail(const UpdateAssetImageRegistryRegistryDetailRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAssetImageRegistryRegistryDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAssetImageRegistryRegistryDetailResponse rsp = UpdateAssetImageRegistryRegistryDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAssetImageRegistryRegistryDetailOutcome(rsp);
        else
            return UpdateAssetImageRegistryRegistryDetailOutcome(o.GetError());
    }
    else
    {
        return UpdateAssetImageRegistryRegistryDetailOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateAssetImageRegistryRegistryDetailAsync(const UpdateAssetImageRegistryRegistryDetailRequest& request, const UpdateAssetImageRegistryRegistryDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAssetImageRegistryRegistryDetailRequest&;
    using Resp = UpdateAssetImageRegistryRegistryDetailResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAssetImageRegistryRegistryDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::UpdateAssetImageRegistryRegistryDetailCallable(const UpdateAssetImageRegistryRegistryDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAssetImageRegistryRegistryDetailOutcome>>();
    UpdateAssetImageRegistryRegistryDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateAssetImageRegistryRegistryDetailRequest&,
        UpdateAssetImageRegistryRegistryDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateImageRegistryTimingScanTaskOutcome TcssClient::UpdateImageRegistryTimingScanTask(const UpdateImageRegistryTimingScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateImageRegistryTimingScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateImageRegistryTimingScanTaskResponse rsp = UpdateImageRegistryTimingScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateImageRegistryTimingScanTaskOutcome(rsp);
        else
            return UpdateImageRegistryTimingScanTaskOutcome(o.GetError());
    }
    else
    {
        return UpdateImageRegistryTimingScanTaskOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateImageRegistryTimingScanTaskAsync(const UpdateImageRegistryTimingScanTaskRequest& request, const UpdateImageRegistryTimingScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateImageRegistryTimingScanTaskRequest&;
    using Resp = UpdateImageRegistryTimingScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateImageRegistryTimingScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateImageRegistryTimingScanTaskOutcomeCallable TcssClient::UpdateImageRegistryTimingScanTaskCallable(const UpdateImageRegistryTimingScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateImageRegistryTimingScanTaskOutcome>>();
    UpdateImageRegistryTimingScanTaskAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateImageRegistryTimingScanTaskRequest&,
        UpdateImageRegistryTimingScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateNetworkFirewallPolicyDetailOutcome TcssClient::UpdateNetworkFirewallPolicyDetail(const UpdateNetworkFirewallPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNetworkFirewallPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNetworkFirewallPolicyDetailResponse rsp = UpdateNetworkFirewallPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNetworkFirewallPolicyDetailOutcome(rsp);
        else
            return UpdateNetworkFirewallPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return UpdateNetworkFirewallPolicyDetailOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateNetworkFirewallPolicyDetailAsync(const UpdateNetworkFirewallPolicyDetailRequest& request, const UpdateNetworkFirewallPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateNetworkFirewallPolicyDetailRequest&;
    using Resp = UpdateNetworkFirewallPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateNetworkFirewallPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateNetworkFirewallPolicyDetailOutcomeCallable TcssClient::UpdateNetworkFirewallPolicyDetailCallable(const UpdateNetworkFirewallPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateNetworkFirewallPolicyDetailOutcome>>();
    UpdateNetworkFirewallPolicyDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateNetworkFirewallPolicyDetailRequest&,
        UpdateNetworkFirewallPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcssClient::UpdateNetworkFirewallPolicyYamlDetailOutcome TcssClient::UpdateNetworkFirewallPolicyYamlDetail(const UpdateNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateNetworkFirewallPolicyYamlDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateNetworkFirewallPolicyYamlDetailResponse rsp = UpdateNetworkFirewallPolicyYamlDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateNetworkFirewallPolicyYamlDetailOutcome(rsp);
        else
            return UpdateNetworkFirewallPolicyYamlDetailOutcome(o.GetError());
    }
    else
    {
        return UpdateNetworkFirewallPolicyYamlDetailOutcome(outcome.GetError());
    }
}

void TcssClient::UpdateNetworkFirewallPolicyYamlDetailAsync(const UpdateNetworkFirewallPolicyYamlDetailRequest& request, const UpdateNetworkFirewallPolicyYamlDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateNetworkFirewallPolicyYamlDetailRequest&;
    using Resp = UpdateNetworkFirewallPolicyYamlDetailResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateNetworkFirewallPolicyYamlDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcssClient::UpdateNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::UpdateNetworkFirewallPolicyYamlDetailCallable(const UpdateNetworkFirewallPolicyYamlDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateNetworkFirewallPolicyYamlDetailOutcome>>();
    UpdateNetworkFirewallPolicyYamlDetailAsync(
    request,
    [prom](
        const TcssClient*,
        const UpdateNetworkFirewallPolicyYamlDetailRequest&,
        UpdateNetworkFirewallPolicyYamlDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

