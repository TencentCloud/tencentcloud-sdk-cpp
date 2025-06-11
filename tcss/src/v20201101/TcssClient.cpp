/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAndPublishNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddAndPublishNetworkFirewallPolicyDetailOutcomeCallable TcssClient::AddAndPublishNetworkFirewallPolicyDetailCallable(const AddAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAndPublishNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->AddAndPublishNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAndPublishNetworkFirewallPolicyYamlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::AddAndPublishNetworkFirewallPolicyYamlDetailCallable(const AddAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAndPublishNetworkFirewallPolicyYamlDetailOutcome()>>(
        [this, request]()
        {
            return this->AddAndPublishNetworkFirewallPolicyYamlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddAssetImageRegistryRegistryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::AddAssetImageRegistryRegistryDetailCallable(const AddAssetImageRegistryRegistryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddAssetImageRegistryRegistryDetailOutcome()>>(
        [this, request]()
        {
            return this->AddAssetImageRegistryRegistryDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddComplianceAssetPolicySetToWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddComplianceAssetPolicySetToWhitelistOutcomeCallable TcssClient::AddComplianceAssetPolicySetToWhitelistCallable(const AddComplianceAssetPolicySetToWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddComplianceAssetPolicySetToWhitelistOutcome()>>(
        [this, request]()
        {
            return this->AddComplianceAssetPolicySetToWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCompliancePolicyAssetSetToWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddCompliancePolicyAssetSetToWhitelistOutcomeCallable TcssClient::AddCompliancePolicyAssetSetToWhitelistCallable(const AddCompliancePolicyAssetSetToWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCompliancePolicyAssetSetToWhitelistOutcome()>>(
        [this, request]()
        {
            return this->AddCompliancePolicyAssetSetToWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCompliancePolicyItemToWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddCompliancePolicyItemToWhitelistOutcomeCallable TcssClient::AddCompliancePolicyItemToWhitelistCallable(const AddCompliancePolicyItemToWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCompliancePolicyItemToWhitelistOutcome()>>(
        [this, request]()
        {
            return this->AddCompliancePolicyItemToWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditAbnormalProcessRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditAbnormalProcessRuleOutcomeCallable TcssClient::AddEditAbnormalProcessRuleCallable(const AddEditAbnormalProcessRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditAbnormalProcessRuleOutcome()>>(
        [this, request]()
        {
            return this->AddEditAbnormalProcessRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditAccessControlRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditAccessControlRuleOutcomeCallable TcssClient::AddEditAccessControlRuleCallable(const AddEditAccessControlRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditAccessControlRuleOutcome()>>(
        [this, request]()
        {
            return this->AddEditAccessControlRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditImageAutoAuthorizedRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditImageAutoAuthorizedRuleOutcomeCallable TcssClient::AddEditImageAutoAuthorizedRuleCallable(const AddEditImageAutoAuthorizedRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditImageAutoAuthorizedRuleOutcome()>>(
        [this, request]()
        {
            return this->AddEditImageAutoAuthorizedRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditReverseShellWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditReverseShellWhiteListOutcomeCallable TcssClient::AddEditReverseShellWhiteListCallable(const AddEditReverseShellWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditReverseShellWhiteListOutcome()>>(
        [this, request]()
        {
            return this->AddEditReverseShellWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditRiskSyscallWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditRiskSyscallWhiteListOutcomeCallable TcssClient::AddEditRiskSyscallWhiteListCallable(const AddEditRiskSyscallWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditRiskSyscallWhiteListOutcome()>>(
        [this, request]()
        {
            return this->AddEditRiskSyscallWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEditWarningRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEditWarningRulesOutcomeCallable TcssClient::AddEditWarningRulesCallable(const AddEditWarningRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEditWarningRulesOutcome()>>(
        [this, request]()
        {
            return this->AddEditWarningRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddEscapeWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddEscapeWhiteListOutcomeCallable TcssClient::AddEscapeWhiteListCallable(const AddEscapeWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddEscapeWhiteListOutcome()>>(
        [this, request]()
        {
            return this->AddEscapeWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddIgnoreVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddIgnoreVulOutcomeCallable TcssClient::AddIgnoreVulCallable(const AddIgnoreVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddIgnoreVulOutcome()>>(
        [this, request]()
        {
            return this->AddIgnoreVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddNetworkFirewallPolicyDetailOutcomeCallable TcssClient::AddNetworkFirewallPolicyDetailCallable(const AddNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->AddNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNetworkFirewallPolicyYamlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::AddNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::AddNetworkFirewallPolicyYamlDetailCallable(const AddNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNetworkFirewallPolicyYamlDetailOutcome()>>(
        [this, request]()
        {
            return this->AddNetworkFirewallPolicyYamlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckNetworkFirewallPolicyYaml(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CheckNetworkFirewallPolicyYamlOutcomeCallable TcssClient::CheckNetworkFirewallPolicyYamlCallable(const CheckNetworkFirewallPolicyYamlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckNetworkFirewallPolicyYamlOutcome()>>(
        [this, request]()
        {
            return this->CheckNetworkFirewallPolicyYaml(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckRepeatAssetImageRegistry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CheckRepeatAssetImageRegistryOutcomeCallable TcssClient::CheckRepeatAssetImageRegistryCallable(const CheckRepeatAssetImageRegistryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckRepeatAssetImageRegistryOutcome()>>(
        [this, request]()
        {
            return this->CheckRepeatAssetImageRegistry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfirmNetworkFirewallPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ConfirmNetworkFirewallPolicyOutcomeCallable TcssClient::ConfirmNetworkFirewallPolicyCallable(const ConfirmNetworkFirewallPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfirmNetworkFirewallPolicyOutcome()>>(
        [this, request]()
        {
            return this->ConfirmNetworkFirewallPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAbnormalProcessRulesExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAbnormalProcessRulesExportJobOutcomeCallable TcssClient::CreateAbnormalProcessRulesExportJobCallable(const CreateAbnormalProcessRulesExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAbnormalProcessRulesExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateAbnormalProcessRulesExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessControlsRuleExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAccessControlsRuleExportJobOutcomeCallable TcssClient::CreateAccessControlsRuleExportJobCallable(const CreateAccessControlsRuleExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessControlsRuleExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessControlsRuleExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetImageRegistryScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAssetImageRegistryScanTaskOutcomeCallable TcssClient::CreateAssetImageRegistryScanTaskCallable(const CreateAssetImageRegistryScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetImageRegistryScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetImageRegistryScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetImageRegistryScanTaskOneKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAssetImageRegistryScanTaskOneKeyOutcomeCallable TcssClient::CreateAssetImageRegistryScanTaskOneKeyCallable(const CreateAssetImageRegistryScanTaskOneKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetImageRegistryScanTaskOneKeyOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetImageRegistryScanTaskOneKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetImageScanSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAssetImageScanSettingOutcomeCallable TcssClient::CreateAssetImageScanSettingCallable(const CreateAssetImageScanSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetImageScanSettingOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetImageScanSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetImageScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAssetImageScanTaskOutcomeCallable TcssClient::CreateAssetImageScanTaskCallable(const CreateAssetImageScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetImageScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetImageScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetImageVirusExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateAssetImageVirusExportJobOutcomeCallable TcssClient::CreateAssetImageVirusExportJobCallable(const CreateAssetImageVirusExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetImageVirusExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetImageVirusExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCheckComponent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateCheckComponentOutcomeCallable TcssClient::CreateCheckComponentCallable(const CreateCheckComponentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCheckComponentOutcome()>>(
        [this, request]()
        {
            return this->CreateCheckComponent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClusterCheckTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateClusterCheckTaskOutcomeCallable TcssClient::CreateClusterCheckTaskCallable(const CreateClusterCheckTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterCheckTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateClusterCheckTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateComplianceTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateComplianceTaskOutcomeCallable TcssClient::CreateComplianceTaskCallable(const CreateComplianceTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateComplianceTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateComplianceTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateComponentExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateComponentExportJobOutcomeCallable TcssClient::CreateComponentExportJobCallable(const CreateComponentExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateComponentExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateComponentExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDefenceVulExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateDefenceVulExportJobOutcomeCallable TcssClient::CreateDefenceVulExportJobCallable(const CreateDefenceVulExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDefenceVulExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateDefenceVulExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEmergencyVulExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateEmergencyVulExportJobOutcomeCallable TcssClient::CreateEmergencyVulExportJobCallable(const CreateEmergencyVulExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEmergencyVulExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateEmergencyVulExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEscapeEventsExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateEscapeEventsExportJobOutcomeCallable TcssClient::CreateEscapeEventsExportJobCallable(const CreateEscapeEventsExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEscapeEventsExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateEscapeEventsExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEscapeWhiteListExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateEscapeWhiteListExportJobOutcomeCallable TcssClient::CreateEscapeWhiteListExportJobCallable(const CreateEscapeWhiteListExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEscapeWhiteListExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateEscapeWhiteListExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExportComplianceStatusListJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateExportComplianceStatusListJobOutcomeCallable TcssClient::CreateExportComplianceStatusListJobCallable(const CreateExportComplianceStatusListJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExportComplianceStatusListJobOutcome()>>(
        [this, request]()
        {
            return this->CreateExportComplianceStatusListJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHostExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateHostExportJobOutcomeCallable TcssClient::CreateHostExportJobCallable(const CreateHostExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHostExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateHostExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateImageExportJobOutcomeCallable TcssClient::CreateImageExportJobCallable(const CreateImageExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateImageExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateK8sApiAbnormalEventExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateK8sApiAbnormalEventExportJobOutcomeCallable TcssClient::CreateK8sApiAbnormalEventExportJobCallable(const CreateK8sApiAbnormalEventExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateK8sApiAbnormalEventExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateK8sApiAbnormalEventExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateK8sApiAbnormalRuleExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateK8sApiAbnormalRuleExportJobOutcomeCallable TcssClient::CreateK8sApiAbnormalRuleExportJobCallable(const CreateK8sApiAbnormalRuleExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateK8sApiAbnormalRuleExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateK8sApiAbnormalRuleExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateK8sApiAbnormalRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::CreateK8sApiAbnormalRuleInfoCallable(const CreateK8sApiAbnormalRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateK8sApiAbnormalRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->CreateK8sApiAbnormalRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkFirewallClusterRefresh(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateNetworkFirewallClusterRefreshOutcomeCallable TcssClient::CreateNetworkFirewallClusterRefreshCallable(const CreateNetworkFirewallClusterRefreshRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkFirewallClusterRefreshOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkFirewallClusterRefresh(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkFirewallPolicyDiscover(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateNetworkFirewallPolicyDiscoverOutcomeCallable TcssClient::CreateNetworkFirewallPolicyDiscoverCallable(const CreateNetworkFirewallPolicyDiscoverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkFirewallPolicyDiscoverOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkFirewallPolicyDiscover(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkFirewallPublish(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateNetworkFirewallPublishOutcomeCallable TcssClient::CreateNetworkFirewallPublishCallable(const CreateNetworkFirewallPublishRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkFirewallPublishOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkFirewallPublish(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetworkFirewallUndoPublish(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateNetworkFirewallUndoPublishOutcomeCallable TcssClient::CreateNetworkFirewallUndoPublishCallable(const CreateNetworkFirewallUndoPublishRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetworkFirewallUndoPublishOutcome()>>(
        [this, request]()
        {
            return this->CreateNetworkFirewallUndoPublish(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrModifyPostPayCores(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateOrModifyPostPayCoresOutcomeCallable TcssClient::CreateOrModifyPostPayCoresCallable(const CreateOrModifyPostPayCoresRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrModifyPostPayCoresOutcome()>>(
        [this, request]()
        {
            return this->CreateOrModifyPostPayCores(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProcessEventsExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateProcessEventsExportJobOutcomeCallable TcssClient::CreateProcessEventsExportJobCallable(const CreateProcessEventsExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProcessEventsExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateProcessEventsExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRefreshTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateRefreshTaskOutcomeCallable TcssClient::CreateRefreshTaskCallable(const CreateRefreshTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRefreshTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRefreshTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRiskDnsEventExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateRiskDnsEventExportJobOutcomeCallable TcssClient::CreateRiskDnsEventExportJobCallable(const CreateRiskDnsEventExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRiskDnsEventExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateRiskDnsEventExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSearchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateSearchTemplateOutcomeCallable TcssClient::CreateSearchTemplateCallable(const CreateSearchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSearchTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSearchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSystemVulExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateSystemVulExportJobOutcomeCallable TcssClient::CreateSystemVulExportJobCallable(const CreateSystemVulExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSystemVulExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateSystemVulExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVirusScanAgain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVirusScanAgainOutcomeCallable TcssClient::CreateVirusScanAgainCallable(const CreateVirusScanAgainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVirusScanAgainOutcome()>>(
        [this, request]()
        {
            return this->CreateVirusScanAgain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVirusScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVirusScanTaskOutcomeCallable TcssClient::CreateVirusScanTaskCallable(const CreateVirusScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVirusScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVirusScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulContainerExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulContainerExportJobOutcomeCallable TcssClient::CreateVulContainerExportJobCallable(const CreateVulContainerExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulContainerExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateVulContainerExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulDefenceEventExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulDefenceEventExportJobOutcomeCallable TcssClient::CreateVulDefenceEventExportJobCallable(const CreateVulDefenceEventExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulDefenceEventExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateVulDefenceEventExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulDefenceHostExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulDefenceHostExportJobOutcomeCallable TcssClient::CreateVulDefenceHostExportJobCallable(const CreateVulDefenceHostExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulDefenceHostExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateVulDefenceHostExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulExportJobOutcomeCallable TcssClient::CreateVulExportJobCallable(const CreateVulExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateVulExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulImageExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulImageExportJobOutcomeCallable TcssClient::CreateVulImageExportJobCallable(const CreateVulImageExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulImageExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateVulImageExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVulScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateVulScanTaskOutcomeCallable TcssClient::CreateVulScanTaskCallable(const CreateVulScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVulScanTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVulScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWebVulExportJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::CreateWebVulExportJobOutcomeCallable TcssClient::CreateWebVulExportJobCallable(const CreateWebVulExportJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWebVulExportJobOutcome()>>(
        [this, request]()
        {
            return this->CreateWebVulExportJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAbnormalProcessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteAbnormalProcessRulesOutcomeCallable TcssClient::DeleteAbnormalProcessRulesCallable(const DeleteAbnormalProcessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAbnormalProcessRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAbnormalProcessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccessControlRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteAccessControlRulesOutcomeCallable TcssClient::DeleteAccessControlRulesCallable(const DeleteAccessControlRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccessControlRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccessControlRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteComplianceAssetPolicySetFromWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteComplianceAssetPolicySetFromWhitelistOutcomeCallable TcssClient::DeleteComplianceAssetPolicySetFromWhitelistCallable(const DeleteComplianceAssetPolicySetFromWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteComplianceAssetPolicySetFromWhitelistOutcome()>>(
        [this, request]()
        {
            return this->DeleteComplianceAssetPolicySetFromWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCompliancePolicyAssetSetFromWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistOutcomeCallable TcssClient::DeleteCompliancePolicyAssetSetFromWhitelistCallable(const DeleteCompliancePolicyAssetSetFromWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCompliancePolicyAssetSetFromWhitelistOutcome()>>(
        [this, request]()
        {
            return this->DeleteCompliancePolicyAssetSetFromWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCompliancePolicyItemFromWhitelist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteCompliancePolicyItemFromWhitelistOutcomeCallable TcssClient::DeleteCompliancePolicyItemFromWhitelistCallable(const DeleteCompliancePolicyItemFromWhitelistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCompliancePolicyItemFromWhitelistOutcome()>>(
        [this, request]()
        {
            return this->DeleteCompliancePolicyItemFromWhitelist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEscapeWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteEscapeWhiteListOutcomeCallable TcssClient::DeleteEscapeWhiteListCallable(const DeleteEscapeWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEscapeWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteEscapeWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteIgnoreVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteIgnoreVulOutcomeCallable TcssClient::DeleteIgnoreVulCallable(const DeleteIgnoreVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteIgnoreVulOutcome()>>(
        [this, request]()
        {
            return this->DeleteIgnoreVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteK8sApiAbnormalRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteK8sApiAbnormalRuleOutcomeCallable TcssClient::DeleteK8sApiAbnormalRuleCallable(const DeleteK8sApiAbnormalRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteK8sApiAbnormalRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteK8sApiAbnormalRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMachine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteMachineOutcomeCallable TcssClient::DeleteMachineCallable(const DeleteMachineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMachineOutcome()>>(
        [this, request]()
        {
            return this->DeleteMachine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteNetworkFirewallPolicyDetailOutcomeCallable TcssClient::DeleteNetworkFirewallPolicyDetailCallable(const DeleteNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->DeleteNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteRaspRulesOutcomeCallable TcssClient::DeleteRaspRulesCallable(const DeleteRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteReverseShellEventsOutcomeCallable TcssClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReverseShellEventsOutcome()>>(
        [this, request]()
        {
            return this->DeleteReverseShellEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReverseShellWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteReverseShellWhiteListsOutcomeCallable TcssClient::DeleteReverseShellWhiteListsCallable(const DeleteReverseShellWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReverseShellWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->DeleteReverseShellWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskSyscallEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteRiskSyscallEventsOutcomeCallable TcssClient::DeleteRiskSyscallEventsCallable(const DeleteRiskSyscallEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskSyscallEventsOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskSyscallEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRiskSyscallWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteRiskSyscallWhiteListsOutcomeCallable TcssClient::DeleteRiskSyscallWhiteListsCallable(const DeleteRiskSyscallWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRiskSyscallWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->DeleteRiskSyscallWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSearchTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DeleteSearchTemplateOutcomeCallable TcssClient::DeleteSearchTemplateCallable(const DeleteSearchTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSearchTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSearchTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeABTestConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeABTestConfigOutcomeCallable TcssClient::DescribeABTestConfigCallable(const DescribeABTestConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeABTestConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeABTestConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessDetailOutcomeCallable TcssClient::DescribeAbnormalProcessDetailCallable(const DescribeAbnormalProcessDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessEventTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessEventTendencyOutcomeCallable TcssClient::DescribeAbnormalProcessEventTendencyCallable(const DescribeAbnormalProcessEventTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessEventTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessEventTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessEventsOutcomeCallable TcssClient::DescribeAbnormalProcessEventsCallable(const DescribeAbnormalProcessEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessLevelSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessLevelSummaryOutcomeCallable TcssClient::DescribeAbnormalProcessLevelSummaryCallable(const DescribeAbnormalProcessLevelSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessLevelSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessLevelSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessRuleDetailOutcomeCallable TcssClient::DescribeAbnormalProcessRuleDetailCallable(const DescribeAbnormalProcessRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAbnormalProcessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAbnormalProcessRulesOutcomeCallable TcssClient::DescribeAbnormalProcessRulesCallable(const DescribeAbnormalProcessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAbnormalProcessRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAbnormalProcessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessControlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAccessControlDetailOutcomeCallable TcssClient::DescribeAccessControlDetailCallable(const DescribeAccessControlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessControlDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessControlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessControlEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAccessControlEventsOutcomeCallable TcssClient::DescribeAccessControlEventsCallable(const DescribeAccessControlEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessControlEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessControlEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessControlEventsExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAccessControlEventsExportOutcomeCallable TcssClient::DescribeAccessControlEventsExportCallable(const DescribeAccessControlEventsExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessControlEventsExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessControlEventsExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessControlRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAccessControlRuleDetailOutcomeCallable TcssClient::DescribeAccessControlRuleDetailCallable(const DescribeAccessControlRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessControlRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessControlRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessControlRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAccessControlRulesOutcomeCallable TcssClient::DescribeAccessControlRulesCallable(const DescribeAccessControlRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessControlRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessControlRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAffectedClusterCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAffectedClusterCountOutcomeCallable TcssClient::DescribeAffectedClusterCountCallable(const DescribeAffectedClusterCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAffectedClusterCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeAffectedClusterCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAffectedNodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAffectedNodeListOutcomeCallable TcssClient::DescribeAffectedNodeListCallable(const DescribeAffectedNodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAffectedNodeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAffectedNodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAffectedWorkloadList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAffectedWorkloadListOutcomeCallable TcssClient::DescribeAffectedWorkloadListCallable(const DescribeAffectedWorkloadListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAffectedWorkloadListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAffectedWorkloadList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentDaemonSetCmd(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAgentDaemonSetCmdOutcomeCallable TcssClient::DescribeAgentDaemonSetCmdCallable(const DescribeAgentDaemonSetCmdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentDaemonSetCmdOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentDaemonSetCmd(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAgentInstallCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAgentInstallCommandOutcomeCallable TcssClient::DescribeAgentInstallCommandCallable(const DescribeAgentInstallCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAgentInstallCommandOutcome()>>(
        [this, request]()
        {
            return this->DescribeAgentInstallCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetAppServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetAppServiceListOutcomeCallable TcssClient::DescribeAssetAppServiceListCallable(const DescribeAssetAppServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetAppServiceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetAppServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetClusterListOutcomeCallable TcssClient::DescribeAssetClusterListCallable(const DescribeAssetClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetClusterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetComponentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetComponentListOutcomeCallable TcssClient::DescribeAssetComponentListCallable(const DescribeAssetComponentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetComponentListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetComponentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetContainerDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetContainerDetailOutcomeCallable TcssClient::DescribeAssetContainerDetailCallable(const DescribeAssetContainerDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetContainerDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetContainerDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetContainerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetContainerListOutcomeCallable TcssClient::DescribeAssetContainerListCallable(const DescribeAssetContainerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetContainerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetContainerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDBServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetDBServiceListOutcomeCallable TcssClient::DescribeAssetDBServiceListCallable(const DescribeAssetDBServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDBServiceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDBServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetHostDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetHostDetailOutcomeCallable TcssClient::DescribeAssetHostDetailCallable(const DescribeAssetHostDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetHostDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetHostDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetHostListOutcomeCallable TcssClient::DescribeAssetHostListCallable(const DescribeAssetHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageBindRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageBindRuleInfoOutcomeCallable TcssClient::DescribeAssetImageBindRuleInfoCallable(const DescribeAssetImageBindRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageBindRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageBindRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageDetailOutcomeCallable TcssClient::DescribeAssetImageDetailCallable(const DescribeAssetImageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageHostList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageHostListOutcomeCallable TcssClient::DescribeAssetImageHostListCallable(const DescribeAssetImageHostListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageHostListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageHostList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageListOutcomeCallable TcssClient::DescribeAssetImageListCallable(const DescribeAssetImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryAssetStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryAssetStatusOutcomeCallable TcssClient::DescribeAssetImageRegistryAssetStatusCallable(const DescribeAssetImageRegistryAssetStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryAssetStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryAssetStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryDetailOutcomeCallable TcssClient::DescribeAssetImageRegistryDetailCallable(const DescribeAssetImageRegistryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryListOutcomeCallable TcssClient::DescribeAssetImageRegistryListCallable(const DescribeAssetImageRegistryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryListExportCallable(const DescribeAssetImageRegistryListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryRegistryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::DescribeAssetImageRegistryRegistryDetailCallable(const DescribeAssetImageRegistryRegistryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryRegistryDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryRegistryDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryRegistryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryRegistryListOutcomeCallable TcssClient::DescribeAssetImageRegistryRegistryListCallable(const DescribeAssetImageRegistryRegistryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryRegistryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryRegistryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryRiskInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryRiskInfoListOutcomeCallable TcssClient::DescribeAssetImageRegistryRiskInfoListCallable(const DescribeAssetImageRegistryRiskInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryRiskInfoListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryRiskInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryRiskListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryRiskListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryRiskListExportCallable(const DescribeAssetImageRegistryRiskListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryRiskListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryRiskListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryScanStatusOneKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryScanStatusOneKeyOutcomeCallable TcssClient::DescribeAssetImageRegistryScanStatusOneKeyCallable(const DescribeAssetImageRegistryScanStatusOneKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryScanStatusOneKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryScanStatusOneKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistrySummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistrySummaryOutcomeCallable TcssClient::DescribeAssetImageRegistrySummaryCallable(const DescribeAssetImageRegistrySummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistrySummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistrySummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryVirusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryVirusListOutcomeCallable TcssClient::DescribeAssetImageRegistryVirusListCallable(const DescribeAssetImageRegistryVirusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryVirusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryVirusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryVirusListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryVirusListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryVirusListExportCallable(const DescribeAssetImageRegistryVirusListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryVirusListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryVirusListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryVulListOutcomeCallable TcssClient::DescribeAssetImageRegistryVulListCallable(const DescribeAssetImageRegistryVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRegistryVulListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRegistryVulListExportOutcomeCallable TcssClient::DescribeAssetImageRegistryVulListExportCallable(const DescribeAssetImageRegistryVulListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRegistryVulListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRegistryVulListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRiskListOutcomeCallable TcssClient::DescribeAssetImageRiskListCallable(const DescribeAssetImageRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageRiskListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageRiskListExportOutcomeCallable TcssClient::DescribeAssetImageRiskListExportCallable(const DescribeAssetImageRiskListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageRiskListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageRiskListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageScanSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageScanSettingOutcomeCallable TcssClient::DescribeAssetImageScanSettingCallable(const DescribeAssetImageScanSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageScanSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageScanSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageScanStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageScanStatusOutcomeCallable TcssClient::DescribeAssetImageScanStatusCallable(const DescribeAssetImageScanStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageScanStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageScanStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageScanTaskOutcomeCallable TcssClient::DescribeAssetImageScanTaskCallable(const DescribeAssetImageScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageSimpleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageSimpleListOutcomeCallable TcssClient::DescribeAssetImageSimpleListCallable(const DescribeAssetImageSimpleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageSimpleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageSimpleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageVirusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageVirusListOutcomeCallable TcssClient::DescribeAssetImageVirusListCallable(const DescribeAssetImageVirusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageVirusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageVirusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageVirusListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageVirusListExportOutcomeCallable TcssClient::DescribeAssetImageVirusListExportCallable(const DescribeAssetImageVirusListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageVirusListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageVirusListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageVulListOutcomeCallable TcssClient::DescribeAssetImageVulListCallable(const DescribeAssetImageVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetImageVulListExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetImageVulListExportOutcomeCallable TcssClient::DescribeAssetImageVulListExportCallable(const DescribeAssetImageVulListExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetImageVulListExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetImageVulListExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetPortList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetPortListOutcomeCallable TcssClient::DescribeAssetPortListCallable(const DescribeAssetPortListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetPortListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetPortList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetProcessList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetProcessListOutcomeCallable TcssClient::DescribeAssetProcessListCallable(const DescribeAssetProcessListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetProcessListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetProcessList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetSummaryOutcomeCallable TcssClient::DescribeAssetSummaryCallable(const DescribeAssetSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSuperNodeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetSuperNodeListOutcomeCallable TcssClient::DescribeAssetSuperNodeListCallable(const DescribeAssetSuperNodeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSuperNodeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSuperNodeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSyncLastTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetSyncLastTimeOutcomeCallable TcssClient::DescribeAssetSyncLastTimeCallable(const DescribeAssetSyncLastTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSyncLastTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSyncLastTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetWebServiceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAssetWebServiceListOutcomeCallable TcssClient::DescribeAssetWebServiceListCallable(const DescribeAssetWebServiceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetWebServiceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetWebServiceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoAuthorizedRuleHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeAutoAuthorizedRuleHostOutcomeCallable TcssClient::DescribeAutoAuthorizedRuleHostCallable(const DescribeAutoAuthorizedRuleHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoAuthorizedRuleHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoAuthorizedRuleHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeCheckItemListOutcomeCallable TcssClient::DescribeCheckItemListCallable(const DescribeCheckItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckItemListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeClusterDetailOutcomeCallable TcssClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeClusterNodesOutcomeCallable TcssClient::DescribeClusterNodesCallable(const DescribeClusterNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeClusterSummaryOutcomeCallable TcssClient::DescribeClusterSummaryCallable(const DescribeClusterSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceAssetDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceAssetDetailInfoOutcomeCallable TcssClient::DescribeComplianceAssetDetailInfoCallable(const DescribeComplianceAssetDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceAssetDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceAssetDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceAssetListOutcomeCallable TcssClient::DescribeComplianceAssetListCallable(const DescribeComplianceAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceAssetPolicyItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceAssetPolicyItemListOutcomeCallable TcssClient::DescribeComplianceAssetPolicyItemListCallable(const DescribeComplianceAssetPolicyItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceAssetPolicyItemListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceAssetPolicyItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompliancePeriodTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeCompliancePeriodTaskListOutcomeCallable TcssClient::DescribeCompliancePeriodTaskListCallable(const DescribeCompliancePeriodTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompliancePeriodTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompliancePeriodTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompliancePolicyItemAffectedAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeCompliancePolicyItemAffectedAssetListOutcomeCallable TcssClient::DescribeCompliancePolicyItemAffectedAssetListCallable(const DescribeCompliancePolicyItemAffectedAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompliancePolicyItemAffectedAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompliancePolicyItemAffectedAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCompliancePolicyItemAffectedSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeCompliancePolicyItemAffectedSummaryOutcomeCallable TcssClient::DescribeCompliancePolicyItemAffectedSummaryCallable(const DescribeCompliancePolicyItemAffectedSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCompliancePolicyItemAffectedSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeCompliancePolicyItemAffectedSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceScanFailedAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceScanFailedAssetListOutcomeCallable TcssClient::DescribeComplianceScanFailedAssetListCallable(const DescribeComplianceScanFailedAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceScanFailedAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceScanFailedAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceTaskAssetSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceTaskAssetSummaryOutcomeCallable TcssClient::DescribeComplianceTaskAssetSummaryCallable(const DescribeComplianceTaskAssetSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceTaskAssetSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceTaskAssetSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceTaskPolicyItemSummaryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceTaskPolicyItemSummaryListOutcomeCallable TcssClient::DescribeComplianceTaskPolicyItemSummaryListCallable(const DescribeComplianceTaskPolicyItemSummaryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceTaskPolicyItemSummaryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceTaskPolicyItemSummaryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceWhitelistItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeComplianceWhitelistItemListOutcomeCallable TcssClient::DescribeComplianceWhitelistItemListCallable(const DescribeComplianceWhitelistItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceWhitelistItemListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceWhitelistItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerAssetSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeContainerAssetSummaryOutcomeCallable TcssClient::DescribeContainerAssetSummaryCallable(const DescribeContainerAssetSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerAssetSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerAssetSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerSecEventSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeContainerSecEventSummaryOutcomeCallable TcssClient::DescribeContainerSecEventSummaryCallable(const DescribeContainerSecEventSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerSecEventSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerSecEventSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeESAggregations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeESAggregationsOutcomeCallable TcssClient::DescribeESAggregationsCallable(const DescribeESAggregationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeESAggregationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeESAggregations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeESHits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeESHitsOutcomeCallable TcssClient::DescribeESHitsCallable(const DescribeESHitsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeESHitsOutcome()>>(
        [this, request]()
        {
            return this->DescribeESHits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEmergencyVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEmergencyVulListOutcomeCallable TcssClient::DescribeEmergencyVulListCallable(const DescribeEmergencyVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEmergencyVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEmergencyVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeEventDetailOutcomeCallable TcssClient::DescribeEscapeEventDetailCallable(const DescribeEscapeEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeEventInfoOutcomeCallable TcssClient::DescribeEscapeEventInfoCallable(const DescribeEscapeEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeEventTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeEventTendencyOutcomeCallable TcssClient::DescribeEscapeEventTendencyCallable(const DescribeEscapeEventTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeEventTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeEventTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeEventTypeSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeEventTypeSummaryOutcomeCallable TcssClient::DescribeEscapeEventTypeSummaryCallable(const DescribeEscapeEventTypeSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeEventTypeSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeEventTypeSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeRuleInfoOutcomeCallable TcssClient::DescribeEscapeRuleInfoCallable(const DescribeEscapeRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeSafeState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeSafeStateOutcomeCallable TcssClient::DescribeEscapeSafeStateCallable(const DescribeEscapeSafeStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeSafeStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeSafeState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEscapeWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEscapeWhiteListOutcomeCallable TcssClient::DescribeEscapeWhiteListCallable(const DescribeEscapeWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEscapeWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEscapeWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventEscapeImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeEventEscapeImageListOutcomeCallable TcssClient::DescribeEventEscapeImageListCallable(const DescribeEventEscapeImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventEscapeImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventEscapeImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExportJobDownloadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeExportJobDownloadURLOutcomeCallable TcssClient::DescribeExportJobDownloadURLCallable(const DescribeExportJobDownloadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportJobDownloadURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeExportJobDownloadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExportJobManageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeExportJobManageListOutcomeCallable TcssClient::DescribeExportJobManageListCallable(const DescribeExportJobManageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportJobManageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeExportJobManageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeExportJobResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeExportJobResultOutcomeCallable TcssClient::DescribeExportJobResultCallable(const DescribeExportJobResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeExportJobResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeExportJobResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAuthorizedInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageAuthorizedInfoOutcomeCallable TcssClient::DescribeImageAuthorizedInfoCallable(const DescribeImageAuthorizedInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAuthorizedInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAuthorizedInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAutoAuthorizedLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageAutoAuthorizedLogListOutcomeCallable TcssClient::DescribeImageAutoAuthorizedLogListCallable(const DescribeImageAutoAuthorizedLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAutoAuthorizedLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAutoAuthorizedLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAutoAuthorizedRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageAutoAuthorizedRuleOutcomeCallable TcssClient::DescribeImageAutoAuthorizedRuleCallable(const DescribeImageAutoAuthorizedRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAutoAuthorizedRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAutoAuthorizedRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageAutoAuthorizedTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageAutoAuthorizedTaskListOutcomeCallable TcssClient::DescribeImageAutoAuthorizedTaskListCallable(const DescribeImageAutoAuthorizedTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageAutoAuthorizedTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageAutoAuthorizedTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageComponentList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageComponentListOutcomeCallable TcssClient::DescribeImageComponentListCallable(const DescribeImageComponentListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageComponentListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageComponentList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageRegistryNamespaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageRegistryNamespaceListOutcomeCallable TcssClient::DescribeImageRegistryNamespaceListCallable(const DescribeImageRegistryNamespaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageRegistryNamespaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageRegistryNamespaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageRegistryTimingScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageRegistryTimingScanTaskOutcomeCallable TcssClient::DescribeImageRegistryTimingScanTaskCallable(const DescribeImageRegistryTimingScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageRegistryTimingScanTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageRegistryTimingScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageRiskSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageRiskSummaryOutcomeCallable TcssClient::DescribeImageRiskSummaryCallable(const DescribeImageRiskSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageRiskSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageRiskSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageRiskTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageRiskTendencyOutcomeCallable TcssClient::DescribeImageRiskTendencyCallable(const DescribeImageRiskTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageRiskTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageRiskTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageSimpleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeImageSimpleListOutcomeCallable TcssClient::DescribeImageSimpleListCallable(const DescribeImageSimpleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageSimpleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageSimpleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIndexList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeIndexListOutcomeCallable TcssClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIndexListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIndexList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInspectionReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeInspectionReportOutcomeCallable TcssClient::DescribeInspectionReportCallable(const DescribeInspectionReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInspectionReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeInspectionReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalEventInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalEventInfoOutcomeCallable TcssClient::DescribeK8sApiAbnormalEventInfoCallable(const DescribeK8sApiAbnormalEventInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalEventInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalEventInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalEventListOutcomeCallable TcssClient::DescribeK8sApiAbnormalEventListCallable(const DescribeK8sApiAbnormalEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleInfoCallable(const DescribeK8sApiAbnormalRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalRuleListOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleListCallable(const DescribeK8sApiAbnormalRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalRuleScopeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalRuleScopeListOutcomeCallable TcssClient::DescribeK8sApiAbnormalRuleScopeListCallable(const DescribeK8sApiAbnormalRuleScopeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalRuleScopeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalRuleScopeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalSummaryOutcomeCallable TcssClient::DescribeK8sApiAbnormalSummaryCallable(const DescribeK8sApiAbnormalSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeK8sApiAbnormalTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeK8sApiAbnormalTendencyOutcomeCallable TcssClient::DescribeK8sApiAbnormalTendencyCallable(const DescribeK8sApiAbnormalTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeK8sApiAbnormalTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeK8sApiAbnormalTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogStorageStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeLogStorageStatisticOutcomeCallable TcssClient::DescribeLogStorageStatisticCallable(const DescribeLogStorageStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogStorageStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogStorageStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallAuditRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallAuditRecordOutcomeCallable TcssClient::DescribeNetworkFirewallAuditRecordCallable(const DescribeNetworkFirewallAuditRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallAuditRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallAuditRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallClusterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallClusterListOutcomeCallable TcssClient::DescribeNetworkFirewallClusterListCallable(const DescribeNetworkFirewallClusterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallClusterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallClusterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallClusterRefreshStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallClusterRefreshStatusOutcomeCallable TcssClient::DescribeNetworkFirewallClusterRefreshStatusCallable(const DescribeNetworkFirewallClusterRefreshStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallClusterRefreshStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallClusterRefreshStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallNamespaceLabelList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallNamespaceLabelListOutcomeCallable TcssClient::DescribeNetworkFirewallNamespaceLabelListCallable(const DescribeNetworkFirewallNamespaceLabelListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallNamespaceLabelListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallNamespaceLabelList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallNamespaceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallNamespaceListOutcomeCallable TcssClient::DescribeNetworkFirewallNamespaceListCallable(const DescribeNetworkFirewallNamespaceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallNamespaceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallNamespaceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPodLabelsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPodLabelsListOutcomeCallable TcssClient::DescribeNetworkFirewallPodLabelsListCallable(const DescribeNetworkFirewallPodLabelsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPodLabelsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPodLabelsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPolicyDetailOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyDetailCallable(const DescribeNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPolicyDiscover(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPolicyDiscoverOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyDiscoverCallable(const DescribeNetworkFirewallPolicyDiscoverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPolicyDiscoverOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPolicyDiscover(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPolicyListOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyListCallable(const DescribeNetworkFirewallPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPolicyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPolicyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPolicyStatusOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyStatusCallable(const DescribeNetworkFirewallPolicyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPolicyStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPolicyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetworkFirewallPolicyYamlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::DescribeNetworkFirewallPolicyYamlDetailCallable(const DescribeNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetworkFirewallPolicyYamlDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetworkFirewallPolicyYamlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewestVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeNewestVulOutcomeCallable TcssClient::DescribeNewestVulCallable(const DescribeNewestVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewestVulOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewestVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePostPayDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribePostPayDetailOutcomeCallable TcssClient::DescribePostPayDetailCallable(const DescribePostPayDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePostPayDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePostPayDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProVersionInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeProVersionInfoOutcomeCallable TcssClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProVersionInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeProVersionInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePromotionActivity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribePromotionActivityOutcomeCallable TcssClient::DescribePromotionActivityCallable(const DescribePromotionActivityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePromotionActivityOutcome()>>(
        [this, request]()
        {
            return this->DescribePromotionActivity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePublicKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribePublicKeyOutcomeCallable TcssClient::DescribePublicKeyCallable(const DescribePublicKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePublicKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribePublicKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurchaseStateInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribePurchaseStateInfoOutcomeCallable TcssClient::DescribePurchaseStateInfoCallable(const DescribePurchaseStateInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurchaseStateInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribePurchaseStateInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRaspRuleVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRaspRuleVulsOutcomeCallable TcssClient::DescribeRaspRuleVulsCallable(const DescribeRaspRuleVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRaspRuleVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRaspRuleVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRaspRulesOutcomeCallable TcssClient::DescribeRaspRulesCallable(const DescribeRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRefreshTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRefreshTaskOutcomeCallable TcssClient::DescribeRefreshTaskCallable(const DescribeRefreshTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRefreshTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRefreshTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeReverseShellDetailOutcomeCallable TcssClient::DescribeReverseShellDetailCallable(const DescribeReverseShellDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeReverseShellEventsOutcomeCallable TcssClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellEventsExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeReverseShellEventsExportOutcomeCallable TcssClient::DescribeReverseShellEventsExportCallable(const DescribeReverseShellEventsExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellEventsExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellEventsExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellWhiteListDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeReverseShellWhiteListDetailOutcomeCallable TcssClient::DescribeReverseShellWhiteListDetailCallable(const DescribeReverseShellWhiteListDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellWhiteListDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellWhiteListDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReverseShellWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeReverseShellWhiteListsOutcomeCallable TcssClient::DescribeReverseShellWhiteListsCallable(const DescribeReverseShellWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReverseShellWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReverseShellWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskDnsEventDetailOutcomeCallable TcssClient::DescribeRiskDnsEventDetailCallable(const DescribeRiskDnsEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskDnsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskDnsListOutcomeCallable TcssClient::DescribeRiskDnsListCallable(const DescribeRiskDnsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskDnsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskDnsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskListOutcomeCallable TcssClient::DescribeRiskListCallable(const DescribeRiskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallDetailOutcomeCallable TcssClient::DescribeRiskSyscallDetailCallable(const DescribeRiskSyscallDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallEventsOutcomeCallable TcssClient::DescribeRiskSyscallEventsCallable(const DescribeRiskSyscallEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallEventsExport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallEventsExportOutcomeCallable TcssClient::DescribeRiskSyscallEventsExportCallable(const DescribeRiskSyscallEventsExportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallEventsExportOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallEventsExport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallNames(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallNamesOutcomeCallable TcssClient::DescribeRiskSyscallNamesCallable(const DescribeRiskSyscallNamesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallNamesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallNames(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallWhiteListDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallWhiteListDetailOutcomeCallable TcssClient::DescribeRiskSyscallWhiteListDetailCallable(const DescribeRiskSyscallWhiteListDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallWhiteListDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallWhiteListDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRiskSyscallWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeRiskSyscallWhiteListsOutcomeCallable TcssClient::DescribeRiskSyscallWhiteListsCallable(const DescribeRiskSyscallWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRiskSyscallWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRiskSyscallWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScanIgnoreVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeScanIgnoreVulListOutcomeCallable TcssClient::DescribeScanIgnoreVulListCallable(const DescribeScanIgnoreVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScanIgnoreVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScanIgnoreVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchExportList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSearchExportListOutcomeCallable TcssClient::DescribeSearchExportListCallable(const DescribeSearchExportListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchExportListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchExportList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSearchLogsOutcomeCallable TcssClient::DescribeSearchLogsCallable(const DescribeSearchLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSearchTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSearchTemplatesOutcomeCallable TcssClient::DescribeSearchTemplatesCallable(const DescribeSearchTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSearchTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSearchTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecEventsTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecEventsTendencyOutcomeCallable TcssClient::DescribeSecEventsTendencyCallable(const DescribeSecEventsTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecEventsTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecEventsTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogAlertMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogAlertMsgOutcomeCallable TcssClient::DescribeSecLogAlertMsgCallable(const DescribeSecLogAlertMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogAlertMsgOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogAlertMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogCleanSettingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogCleanSettingInfoOutcomeCallable TcssClient::DescribeSecLogCleanSettingInfoCallable(const DescribeSecLogCleanSettingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogCleanSettingInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogCleanSettingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogDeliveryClsOptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogDeliveryClsOptionsOutcomeCallable TcssClient::DescribeSecLogDeliveryClsOptionsCallable(const DescribeSecLogDeliveryClsOptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogDeliveryClsOptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogDeliveryClsOptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogDeliveryClsSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogDeliveryClsSettingOutcomeCallable TcssClient::DescribeSecLogDeliveryClsSettingCallable(const DescribeSecLogDeliveryClsSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogDeliveryClsSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogDeliveryClsSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogDeliveryKafkaOptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogDeliveryKafkaOptionsOutcomeCallable TcssClient::DescribeSecLogDeliveryKafkaOptionsCallable(const DescribeSecLogDeliveryKafkaOptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogDeliveryKafkaOptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogDeliveryKafkaOptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogDeliveryKafkaSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogDeliveryKafkaSettingOutcomeCallable TcssClient::DescribeSecLogDeliveryKafkaSettingCallable(const DescribeSecLogDeliveryKafkaSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogDeliveryKafkaSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogDeliveryKafkaSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogJoinObjectList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogJoinObjectListOutcomeCallable TcssClient::DescribeSecLogJoinObjectListCallable(const DescribeSecLogJoinObjectListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogJoinObjectListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogJoinObjectList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogJoinTypeList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogJoinTypeListOutcomeCallable TcssClient::DescribeSecLogJoinTypeListCallable(const DescribeSecLogJoinTypeListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogJoinTypeListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogJoinTypeList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogKafkaUIN(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogKafkaUINOutcomeCallable TcssClient::DescribeSecLogKafkaUINCallable(const DescribeSecLogKafkaUINRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogKafkaUINOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogKafkaUIN(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecLogVasInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSecLogVasInfoOutcomeCallable TcssClient::DescribeSecLogVasInfoCallable(const DescribeSecLogVasInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecLogVasInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecLogVasInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSuperNodePodList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSuperNodePodListOutcomeCallable TcssClient::DescribeSuperNodePodListCallable(const DescribeSuperNodePodListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSuperNodePodListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSuperNodePodList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSupportDefenceVul(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSupportDefenceVulOutcomeCallable TcssClient::DescribeSupportDefenceVulCallable(const DescribeSupportDefenceVulRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSupportDefenceVulOutcome()>>(
        [this, request]()
        {
            return this->DescribeSupportDefenceVul(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSystemVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeSystemVulListOutcomeCallable TcssClient::DescribeSystemVulListCallable(const DescribeSystemVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSystemVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSystemVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskResultSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeTaskResultSummaryOutcomeCallable TcssClient::DescribeTaskResultSummaryCallable(const DescribeTaskResultSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskResultSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskResultSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTcssSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeTcssSummaryOutcomeCallable TcssClient::DescribeTcssSummaryCallable(const DescribeTcssSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTcssSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeTcssSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnauthorizedCoresTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeUnauthorizedCoresTendencyOutcomeCallable TcssClient::DescribeUnauthorizedCoresTendencyCallable(const DescribeUnauthorizedCoresTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnauthorizedCoresTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnauthorizedCoresTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnfinishRefreshTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeUnfinishRefreshTaskOutcomeCallable TcssClient::DescribeUnfinishRefreshTaskCallable(const DescribeUnfinishRefreshTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnfinishRefreshTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnfinishRefreshTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeUserClusterOutcomeCallable TcssClient::DescribeUserClusterCallable(const DescribeUserClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserClusterOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserPodList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeUserPodListOutcomeCallable TcssClient::DescribeUserPodListCallable(const DescribeUserPodListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserPodListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserPodList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeValueAddedSrvInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeValueAddedSrvInfoOutcomeCallable TcssClient::DescribeValueAddedSrvInfoCallable(const DescribeValueAddedSrvInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeValueAddedSrvInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeValueAddedSrvInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusAutoIsolateSampleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusAutoIsolateSampleDetailOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleDetailCallable(const DescribeVirusAutoIsolateSampleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusAutoIsolateSampleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusAutoIsolateSampleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusAutoIsolateSampleDownloadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusAutoIsolateSampleDownloadURLOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleDownloadURLCallable(const DescribeVirusAutoIsolateSampleDownloadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusAutoIsolateSampleDownloadURLOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusAutoIsolateSampleDownloadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusAutoIsolateSampleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusAutoIsolateSampleListOutcomeCallable TcssClient::DescribeVirusAutoIsolateSampleListCallable(const DescribeVirusAutoIsolateSampleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusAutoIsolateSampleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusAutoIsolateSampleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusAutoIsolateSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusAutoIsolateSettingOutcomeCallable TcssClient::DescribeVirusAutoIsolateSettingCallable(const DescribeVirusAutoIsolateSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusAutoIsolateSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusAutoIsolateSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusDetailOutcomeCallable TcssClient::DescribeVirusDetailCallable(const DescribeVirusDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusEventTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusEventTendencyOutcomeCallable TcssClient::DescribeVirusEventTendencyCallable(const DescribeVirusEventTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusEventTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusEventTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusListOutcomeCallable TcssClient::DescribeVirusListCallable(const DescribeVirusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusManualScanEstimateTimeout(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusManualScanEstimateTimeoutOutcomeCallable TcssClient::DescribeVirusManualScanEstimateTimeoutCallable(const DescribeVirusManualScanEstimateTimeoutRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusManualScanEstimateTimeoutOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusManualScanEstimateTimeout(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusMonitorSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusMonitorSettingOutcomeCallable TcssClient::DescribeVirusMonitorSettingCallable(const DescribeVirusMonitorSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusMonitorSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusMonitorSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusSampleDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusSampleDownloadUrlOutcomeCallable TcssClient::DescribeVirusSampleDownloadUrlCallable(const DescribeVirusSampleDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusSampleDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusSampleDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusScanSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusScanSettingOutcomeCallable TcssClient::DescribeVirusScanSettingCallable(const DescribeVirusScanSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusScanSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusScanSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusScanTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusScanTaskStatusOutcomeCallable TcssClient::DescribeVirusScanTaskStatusCallable(const DescribeVirusScanTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusScanTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusScanTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusScanTimeoutSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusScanTimeoutSettingOutcomeCallable TcssClient::DescribeVirusScanTimeoutSettingCallable(const DescribeVirusScanTimeoutSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusScanTimeoutSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusScanTimeoutSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusSummaryOutcomeCallable TcssClient::DescribeVirusSummaryCallable(const DescribeVirusSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVirusTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVirusTaskListOutcomeCallable TcssClient::DescribeVirusTaskListCallable(const DescribeVirusTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVirusTaskListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVirusTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulContainerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulContainerListOutcomeCallable TcssClient::DescribeVulContainerListCallable(const DescribeVulContainerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulContainerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulContainerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefenceEventOutcomeCallable TcssClient::DescribeVulDefenceEventCallable(const DescribeVulDefenceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefenceEventDetailOutcomeCallable TcssClient::DescribeVulDefenceEventDetailCallable(const DescribeVulDefenceEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceEventTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefenceEventTendencyOutcomeCallable TcssClient::DescribeVulDefenceEventTendencyCallable(const DescribeVulDefenceEventTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceEventTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceEventTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefenceHostOutcomeCallable TcssClient::DescribeVulDefenceHostCallable(const DescribeVulDefenceHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefencePlugin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefencePluginOutcomeCallable TcssClient::DescribeVulDefencePluginCallable(const DescribeVulDefencePluginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefencePluginOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefencePlugin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDefenceSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDefenceSettingOutcomeCallable TcssClient::DescribeVulDefenceSettingCallable(const DescribeVulDefenceSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDefenceSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDefenceSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulDetailOutcomeCallable TcssClient::DescribeVulDetailCallable(const DescribeVulDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulIgnoreLocalImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulIgnoreLocalImageListOutcomeCallable TcssClient::DescribeVulIgnoreLocalImageListCallable(const DescribeVulIgnoreLocalImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulIgnoreLocalImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulIgnoreLocalImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulIgnoreRegistryImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulIgnoreRegistryImageListOutcomeCallable TcssClient::DescribeVulIgnoreRegistryImageListCallable(const DescribeVulIgnoreRegistryImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulIgnoreRegistryImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulIgnoreRegistryImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulImageListOutcomeCallable TcssClient::DescribeVulImageListCallable(const DescribeVulImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulImageSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulImageSummaryOutcomeCallable TcssClient::DescribeVulImageSummaryCallable(const DescribeVulImageSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulImageSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulImageSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulLevelImageSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulLevelImageSummaryOutcomeCallable TcssClient::DescribeVulLevelImageSummaryCallable(const DescribeVulLevelImageSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulLevelImageSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulLevelImageSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulLevelSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulLevelSummaryOutcomeCallable TcssClient::DescribeVulLevelSummaryCallable(const DescribeVulLevelSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulLevelSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulLevelSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulRegistryImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulRegistryImageListOutcomeCallable TcssClient::DescribeVulRegistryImageListCallable(const DescribeVulRegistryImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulRegistryImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulRegistryImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulScanAuthorizedImageSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulScanAuthorizedImageSummaryOutcomeCallable TcssClient::DescribeVulScanAuthorizedImageSummaryCallable(const DescribeVulScanAuthorizedImageSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulScanAuthorizedImageSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulScanAuthorizedImageSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulScanInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulScanInfoOutcomeCallable TcssClient::DescribeVulScanInfoCallable(const DescribeVulScanInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulScanInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulScanInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulScanLocalImageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulScanLocalImageListOutcomeCallable TcssClient::DescribeVulScanLocalImageListCallable(const DescribeVulScanLocalImageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulScanLocalImageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulScanLocalImageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulSummary(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulSummaryOutcomeCallable TcssClient::DescribeVulSummaryCallable(const DescribeVulSummaryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulSummaryOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulSummary(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulTendency(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulTendencyOutcomeCallable TcssClient::DescribeVulTendencyCallable(const DescribeVulTendencyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulTendencyOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulTendency(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulTopRanking(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeVulTopRankingOutcomeCallable TcssClient::DescribeVulTopRankingCallable(const DescribeVulTopRankingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulTopRankingOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulTopRanking(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWarningRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeWarningRulesOutcomeCallable TcssClient::DescribeWarningRulesCallable(const DescribeWarningRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWarningRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWarningRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::DescribeWebVulListOutcomeCallable TcssClient::DescribeWebVulListCallable(const DescribeWebVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportVirusList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ExportVirusListOutcomeCallable TcssClient::ExportVirusListCallable(const ExportVirusListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportVirusListOutcome()>>(
        [this, request]()
        {
            return this->ExportVirusList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InitializeUserComplianceEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::InitializeUserComplianceEnvironmentOutcomeCallable TcssClient::InitializeUserComplianceEnvironmentCallable(const InitializeUserComplianceEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InitializeUserComplianceEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->InitializeUserComplianceEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAbnormalProcessRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAbnormalProcessRuleStatusOutcomeCallable TcssClient::ModifyAbnormalProcessRuleStatusCallable(const ModifyAbnormalProcessRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAbnormalProcessRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAbnormalProcessRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAbnormalProcessStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAbnormalProcessStatusOutcomeCallable TcssClient::ModifyAbnormalProcessStatusCallable(const ModifyAbnormalProcessStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAbnormalProcessStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAbnormalProcessStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessControlRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAccessControlRuleStatusOutcomeCallable TcssClient::ModifyAccessControlRuleStatusCallable(const ModifyAccessControlRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessControlRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessControlRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessControlStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAccessControlStatusOutcomeCallable TcssClient::ModifyAccessControlStatusCallable(const ModifyAccessControlStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessControlStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessControlStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAssetOutcomeCallable TcssClient::ModifyAssetCallable(const ModifyAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetOutcome()>>(
        [this, request]()
        {
            return this->ModifyAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetImageRegistryScanStop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAssetImageRegistryScanStopOutcomeCallable TcssClient::ModifyAssetImageRegistryScanStopCallable(const ModifyAssetImageRegistryScanStopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetImageRegistryScanStopOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetImageRegistryScanStop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetImageRegistryScanStopOneKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAssetImageRegistryScanStopOneKeyOutcomeCallable TcssClient::ModifyAssetImageRegistryScanStopOneKeyCallable(const ModifyAssetImageRegistryScanStopOneKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetImageRegistryScanStopOneKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetImageRegistryScanStopOneKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAssetImageScanStop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyAssetImageScanStopOutcomeCallable TcssClient::ModifyAssetImageScanStopCallable(const ModifyAssetImageScanStopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAssetImageScanStopOutcome()>>(
        [this, request]()
        {
            return this->ModifyAssetImageScanStop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCompliancePeriodTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyCompliancePeriodTaskOutcomeCallable TcssClient::ModifyCompliancePeriodTaskCallable(const ModifyCompliancePeriodTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCompliancePeriodTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyCompliancePeriodTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContainerNetStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyContainerNetStatusOutcomeCallable TcssClient::ModifyContainerNetStatusCallable(const ModifyContainerNetStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContainerNetStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyContainerNetStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEscapeEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyEscapeEventStatusOutcomeCallable TcssClient::ModifyEscapeEventStatusCallable(const ModifyEscapeEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEscapeEventStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyEscapeEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEscapeRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyEscapeRuleOutcomeCallable TcssClient::ModifyEscapeRuleCallable(const ModifyEscapeRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEscapeRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyEscapeRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEscapeWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyEscapeWhiteListOutcomeCallable TcssClient::ModifyEscapeWhiteListCallable(const ModifyEscapeWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEscapeWhiteListOutcome()>>(
        [this, request]()
        {
            return this->ModifyEscapeWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageAuthorized(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyImageAuthorizedOutcomeCallable TcssClient::ModifyImageAuthorizedCallable(const ModifyImageAuthorizedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageAuthorizedOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageAuthorized(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyK8sApiAbnormalEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyK8sApiAbnormalEventStatusOutcomeCallable TcssClient::ModifyK8sApiAbnormalEventStatusCallable(const ModifyK8sApiAbnormalEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyK8sApiAbnormalEventStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyK8sApiAbnormalEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyK8sApiAbnormalRuleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyK8sApiAbnormalRuleInfoOutcomeCallable TcssClient::ModifyK8sApiAbnormalRuleInfoCallable(const ModifyK8sApiAbnormalRuleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyK8sApiAbnormalRuleInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyK8sApiAbnormalRuleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyK8sApiAbnormalRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyK8sApiAbnormalRuleStatusOutcomeCallable TcssClient::ModifyK8sApiAbnormalRuleStatusCallable(const ModifyK8sApiAbnormalRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyK8sApiAbnormalRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyK8sApiAbnormalRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRaspRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyRaspRulesOutcomeCallable TcssClient::ModifyRaspRulesCallable(const ModifyRaspRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRaspRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyRaspRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReverseShellStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyReverseShellStatusOutcomeCallable TcssClient::ModifyReverseShellStatusCallable(const ModifyReverseShellStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReverseShellStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyReverseShellStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskDnsEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyRiskDnsEventStatusOutcomeCallable TcssClient::ModifyRiskDnsEventStatusCallable(const ModifyRiskDnsEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskDnsEventStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskDnsEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRiskSyscallStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyRiskSyscallStatusOutcomeCallable TcssClient::ModifyRiskSyscallStatusCallable(const ModifyRiskSyscallStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRiskSyscallStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRiskSyscallStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogCleanSettingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogCleanSettingInfoOutcomeCallable TcssClient::ModifySecLogCleanSettingInfoCallable(const ModifySecLogCleanSettingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogCleanSettingInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogCleanSettingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogDeliveryClsSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogDeliveryClsSettingOutcomeCallable TcssClient::ModifySecLogDeliveryClsSettingCallable(const ModifySecLogDeliveryClsSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogDeliveryClsSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogDeliveryClsSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogDeliveryKafkaSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogDeliveryKafkaSettingOutcomeCallable TcssClient::ModifySecLogDeliveryKafkaSettingCallable(const ModifySecLogDeliveryKafkaSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogDeliveryKafkaSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogDeliveryKafkaSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogJoinObjects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogJoinObjectsOutcomeCallable TcssClient::ModifySecLogJoinObjectsCallable(const ModifySecLogJoinObjectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogJoinObjectsOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogJoinObjects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogJoinState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogJoinStateOutcomeCallable TcssClient::ModifySecLogJoinStateCallable(const ModifySecLogJoinStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogJoinStateOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogJoinState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecLogKafkaUIN(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifySecLogKafkaUINOutcomeCallable TcssClient::ModifySecLogKafkaUINCallable(const ModifySecLogKafkaUINRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecLogKafkaUINOutcome()>>(
        [this, request]()
        {
            return this->ModifySecLogKafkaUIN(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusAutoIsolateExampleSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusAutoIsolateExampleSwitchOutcomeCallable TcssClient::ModifyVirusAutoIsolateExampleSwitchCallable(const ModifyVirusAutoIsolateExampleSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusAutoIsolateExampleSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusAutoIsolateExampleSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusAutoIsolateSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusAutoIsolateSettingOutcomeCallable TcssClient::ModifyVirusAutoIsolateSettingCallable(const ModifyVirusAutoIsolateSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusAutoIsolateSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusAutoIsolateSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusFileStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusFileStatusOutcomeCallable TcssClient::ModifyVirusFileStatusCallable(const ModifyVirusFileStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusFileStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusFileStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusMonitorSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusMonitorSettingOutcomeCallable TcssClient::ModifyVirusMonitorSettingCallable(const ModifyVirusMonitorSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusMonitorSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusMonitorSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusScanSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusScanSettingOutcomeCallable TcssClient::ModifyVirusScanSettingCallable(const ModifyVirusScanSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusScanSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusScanSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVirusScanTimeoutSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVirusScanTimeoutSettingOutcomeCallable TcssClient::ModifyVirusScanTimeoutSettingCallable(const ModifyVirusScanTimeoutSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVirusScanTimeoutSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVirusScanTimeoutSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVulDefenceEventStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVulDefenceEventStatusOutcomeCallable TcssClient::ModifyVulDefenceEventStatusCallable(const ModifyVulDefenceEventStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVulDefenceEventStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyVulDefenceEventStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVulDefenceSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ModifyVulDefenceSettingOutcomeCallable TcssClient::ModifyVulDefenceSettingCallable(const ModifyVulDefenceSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVulDefenceSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyVulDefenceSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenTcssTrial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::OpenTcssTrialOutcomeCallable TcssClient::OpenTcssTrialCallable(const OpenTcssTrialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenTcssTrialOutcome()>>(
        [this, request]()
        {
            return this->OpenTcssTrial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveAssetImageRegistryRegistryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::RemoveAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::RemoveAssetImageRegistryRegistryDetailCallable(const RemoveAssetImageRegistryRegistryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveAssetImageRegistryRegistryDetailOutcome()>>(
        [this, request]()
        {
            return this->RemoveAssetImageRegistryRegistryDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewImageAuthorizeState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::RenewImageAuthorizeStateOutcomeCallable TcssClient::RenewImageAuthorizeStateCallable(const RenewImageAuthorizeStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewImageAuthorizeStateOutcome()>>(
        [this, request]()
        {
            return this->RenewImageAuthorizeState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetSecLogTopicConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ResetSecLogTopicConfigOutcomeCallable TcssClient::ResetSecLogTopicConfigCallable(const ResetSecLogTopicConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetSecLogTopicConfigOutcome()>>(
        [this, request]()
        {
            return this->ResetSecLogTopicConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanComplianceAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ScanComplianceAssetsOutcomeCallable TcssClient::ScanComplianceAssetsCallable(const ScanComplianceAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanComplianceAssetsOutcome()>>(
        [this, request]()
        {
            return this->ScanComplianceAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanComplianceAssetsByPolicyItem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ScanComplianceAssetsByPolicyItemOutcomeCallable TcssClient::ScanComplianceAssetsByPolicyItemCallable(const ScanComplianceAssetsByPolicyItemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanComplianceAssetsByPolicyItemOutcome()>>(
        [this, request]()
        {
            return this->ScanComplianceAssetsByPolicyItem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanCompliancePolicyItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ScanCompliancePolicyItemsOutcomeCallable TcssClient::ScanCompliancePolicyItemsCallable(const ScanCompliancePolicyItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanCompliancePolicyItemsOutcome()>>(
        [this, request]()
        {
            return this->ScanCompliancePolicyItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanComplianceScanFailedAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::ScanComplianceScanFailedAssetsOutcomeCallable TcssClient::ScanComplianceScanFailedAssetsCallable(const ScanComplianceScanFailedAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanComplianceScanFailedAssetsOutcome()>>(
        [this, request]()
        {
            return this->ScanComplianceScanFailedAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetCheckMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::SetCheckModeOutcomeCallable TcssClient::SetCheckModeCallable(const SetCheckModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetCheckModeOutcome()>>(
        [this, request]()
        {
            return this->SetCheckMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopVirusScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::StopVirusScanTaskOutcomeCallable TcssClient::StopVirusScanTaskCallable(const StopVirusScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopVirusScanTaskOutcome()>>(
        [this, request]()
        {
            return this->StopVirusScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopVulScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::StopVulScanTaskOutcomeCallable TcssClient::StopVulScanTaskCallable(const StopVulScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopVulScanTaskOutcome()>>(
        [this, request]()
        {
            return this->StopVulScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchImageAutoAuthorizedRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::SwitchImageAutoAuthorizedRuleOutcomeCallable TcssClient::SwitchImageAutoAuthorizedRuleCallable(const SwitchImageAutoAuthorizedRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchImageAutoAuthorizedRuleOutcome()>>(
        [this, request]()
        {
            return this->SwitchImageAutoAuthorizedRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncAssetImageRegistryAsset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::SyncAssetImageRegistryAssetOutcomeCallable TcssClient::SyncAssetImageRegistryAssetCallable(const SyncAssetImageRegistryAssetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncAssetImageRegistryAssetOutcome()>>(
        [this, request]()
        {
            return this->SyncAssetImageRegistryAsset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAndPublishNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailOutcomeCallable TcssClient::UpdateAndPublishNetworkFirewallPolicyDetailCallable(const UpdateAndPublishNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAndPublishNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->UpdateAndPublishNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAndPublishNetworkFirewallPolicyYamlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::UpdateAndPublishNetworkFirewallPolicyYamlDetailCallable(const UpdateAndPublishNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAndPublishNetworkFirewallPolicyYamlDetailOutcome()>>(
        [this, request]()
        {
            return this->UpdateAndPublishNetworkFirewallPolicyYamlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAssetImageRegistryRegistryDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateAssetImageRegistryRegistryDetailOutcomeCallable TcssClient::UpdateAssetImageRegistryRegistryDetailCallable(const UpdateAssetImageRegistryRegistryDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAssetImageRegistryRegistryDetailOutcome()>>(
        [this, request]()
        {
            return this->UpdateAssetImageRegistryRegistryDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateImageRegistryTimingScanTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateImageRegistryTimingScanTaskOutcomeCallable TcssClient::UpdateImageRegistryTimingScanTaskCallable(const UpdateImageRegistryTimingScanTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateImageRegistryTimingScanTaskOutcome()>>(
        [this, request]()
        {
            return this->UpdateImageRegistryTimingScanTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateNetworkFirewallPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateNetworkFirewallPolicyDetailOutcomeCallable TcssClient::UpdateNetworkFirewallPolicyDetailCallable(const UpdateNetworkFirewallPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateNetworkFirewallPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->UpdateNetworkFirewallPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateNetworkFirewallPolicyYamlDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TcssClient::UpdateNetworkFirewallPolicyYamlDetailOutcomeCallable TcssClient::UpdateNetworkFirewallPolicyYamlDetailCallable(const UpdateNetworkFirewallPolicyYamlDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateNetworkFirewallPolicyYamlDetailOutcome()>>(
        [this, request]()
        {
            return this->UpdateNetworkFirewallPolicyYamlDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

