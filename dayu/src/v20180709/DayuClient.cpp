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

#include <tencentcloud/dayu/v20180709/DayuClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dayu::V20180709;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-09";
    const string ENDPOINT = "dayu.tencentcloudapi.com";
}

DayuClient::DayuClient(const Credential &credential, const string &region) :
    DayuClient(credential, region, ClientProfile())
{
}

DayuClient::DayuClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DayuClient::CreateBasicDDoSAlarmThresholdOutcome DayuClient::CreateBasicDDoSAlarmThreshold(const CreateBasicDDoSAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBasicDDoSAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBasicDDoSAlarmThresholdResponse rsp = CreateBasicDDoSAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBasicDDoSAlarmThresholdOutcome(rsp);
        else
            return CreateBasicDDoSAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return CreateBasicDDoSAlarmThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::CreateBasicDDoSAlarmThresholdAsync(const CreateBasicDDoSAlarmThresholdRequest& request, const CreateBasicDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBasicDDoSAlarmThresholdRequest&;
    using Resp = CreateBasicDDoSAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBasicDDoSAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateBasicDDoSAlarmThresholdOutcomeCallable DayuClient::CreateBasicDDoSAlarmThresholdCallable(const CreateBasicDDoSAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBasicDDoSAlarmThresholdOutcome>>();
    CreateBasicDDoSAlarmThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateBasicDDoSAlarmThresholdRequest&,
        CreateBasicDDoSAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateBoundIPOutcome DayuClient::CreateBoundIP(const CreateBoundIPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBoundIP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBoundIPResponse rsp = CreateBoundIPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBoundIPOutcome(rsp);
        else
            return CreateBoundIPOutcome(o.GetError());
    }
    else
    {
        return CreateBoundIPOutcome(outcome.GetError());
    }
}

void DayuClient::CreateBoundIPAsync(const CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBoundIPRequest&;
    using Resp = CreateBoundIPResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBoundIP", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateBoundIPOutcomeCallable DayuClient::CreateBoundIPCallable(const CreateBoundIPRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBoundIPOutcome>>();
    CreateBoundIPAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateBoundIPRequest&,
        CreateBoundIPOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateCCFrequencyRulesOutcome DayuClient::CreateCCFrequencyRules(const CreateCCFrequencyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCFrequencyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCFrequencyRulesResponse rsp = CreateCCFrequencyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCFrequencyRulesOutcome(rsp);
        else
            return CreateCCFrequencyRulesOutcome(o.GetError());
    }
    else
    {
        return CreateCCFrequencyRulesOutcome(outcome.GetError());
    }
}

void DayuClient::CreateCCFrequencyRulesAsync(const CreateCCFrequencyRulesRequest& request, const CreateCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCCFrequencyRulesRequest&;
    using Resp = CreateCCFrequencyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCCFrequencyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateCCFrequencyRulesOutcomeCallable DayuClient::CreateCCFrequencyRulesCallable(const CreateCCFrequencyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCCFrequencyRulesOutcome>>();
    CreateCCFrequencyRulesAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateCCFrequencyRulesRequest&,
        CreateCCFrequencyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateCCSelfDefinePolicyOutcome DayuClient::CreateCCSelfDefinePolicy(const CreateCCSelfDefinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCCSelfDefinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCCSelfDefinePolicyResponse rsp = CreateCCSelfDefinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCCSelfDefinePolicyOutcome(rsp);
        else
            return CreateCCSelfDefinePolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCCSelfDefinePolicyOutcome(outcome.GetError());
    }
}

void DayuClient::CreateCCSelfDefinePolicyAsync(const CreateCCSelfDefinePolicyRequest& request, const CreateCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCCSelfDefinePolicyRequest&;
    using Resp = CreateCCSelfDefinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCCSelfDefinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateCCSelfDefinePolicyOutcomeCallable DayuClient::CreateCCSelfDefinePolicyCallable(const CreateCCSelfDefinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCCSelfDefinePolicyOutcome>>();
    CreateCCSelfDefinePolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateCCSelfDefinePolicyRequest&,
        CreateCCSelfDefinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateDDoSPolicyOutcome DayuClient::CreateDDoSPolicy(const CreateDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSPolicyResponse rsp = CreateDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSPolicyOutcome(rsp);
        else
            return CreateDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSPolicyOutcome(outcome.GetError());
    }
}

void DayuClient::CreateDDoSPolicyAsync(const CreateDDoSPolicyRequest& request, const CreateDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSPolicyRequest&;
    using Resp = CreateDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateDDoSPolicyOutcomeCallable DayuClient::CreateDDoSPolicyCallable(const CreateDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSPolicyOutcome>>();
    CreateDDoSPolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateDDoSPolicyRequest&,
        CreateDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateDDoSPolicyCaseOutcome DayuClient::CreateDDoSPolicyCase(const CreateDDoSPolicyCaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDDoSPolicyCase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDDoSPolicyCaseResponse rsp = CreateDDoSPolicyCaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDDoSPolicyCaseOutcome(rsp);
        else
            return CreateDDoSPolicyCaseOutcome(o.GetError());
    }
    else
    {
        return CreateDDoSPolicyCaseOutcome(outcome.GetError());
    }
}

void DayuClient::CreateDDoSPolicyCaseAsync(const CreateDDoSPolicyCaseRequest& request, const CreateDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDDoSPolicyCaseRequest&;
    using Resp = CreateDDoSPolicyCaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDDoSPolicyCase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateDDoSPolicyCaseOutcomeCallable DayuClient::CreateDDoSPolicyCaseCallable(const CreateDDoSPolicyCaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDDoSPolicyCaseOutcome>>();
    CreateDDoSPolicyCaseAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateDDoSPolicyCaseRequest&,
        CreateDDoSPolicyCaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateInstanceNameOutcome DayuClient::CreateInstanceName(const CreateInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNameResponse rsp = CreateInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNameOutcome(rsp);
        else
            return CreateInstanceNameOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNameOutcome(outcome.GetError());
    }
}

void DayuClient::CreateInstanceNameAsync(const CreateInstanceNameRequest& request, const CreateInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceNameRequest&;
    using Resp = CreateInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateInstanceNameOutcomeCallable DayuClient::CreateInstanceNameCallable(const CreateInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceNameOutcome>>();
    CreateInstanceNameAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateInstanceNameRequest&,
        CreateInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL4HealthConfigOutcome DayuClient::CreateL4HealthConfig(const CreateL4HealthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL4HealthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL4HealthConfigResponse rsp = CreateL4HealthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL4HealthConfigOutcome(rsp);
        else
            return CreateL4HealthConfigOutcome(o.GetError());
    }
    else
    {
        return CreateL4HealthConfigOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL4HealthConfigAsync(const CreateL4HealthConfigRequest& request, const CreateL4HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL4HealthConfigRequest&;
    using Resp = CreateL4HealthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL4HealthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL4HealthConfigOutcomeCallable DayuClient::CreateL4HealthConfigCallable(const CreateL4HealthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL4HealthConfigOutcome>>();
    CreateL4HealthConfigAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL4HealthConfigRequest&,
        CreateL4HealthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL4RulesOutcome DayuClient::CreateL4Rules(const CreateL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL4RulesResponse rsp = CreateL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL4RulesOutcome(rsp);
        else
            return CreateL4RulesOutcome(o.GetError());
    }
    else
    {
        return CreateL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL4RulesAsync(const CreateL4RulesRequest& request, const CreateL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL4RulesRequest&;
    using Resp = CreateL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL4RulesOutcomeCallable DayuClient::CreateL4RulesCallable(const CreateL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL4RulesOutcome>>();
    CreateL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL4RulesRequest&,
        CreateL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL7CCRuleOutcome DayuClient::CreateL7CCRule(const CreateL7CCRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7CCRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7CCRuleResponse rsp = CreateL7CCRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7CCRuleOutcome(rsp);
        else
            return CreateL7CCRuleOutcome(o.GetError());
    }
    else
    {
        return CreateL7CCRuleOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL7CCRuleAsync(const CreateL7CCRuleRequest& request, const CreateL7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7CCRuleRequest&;
    using Resp = CreateL7CCRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7CCRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL7CCRuleOutcomeCallable DayuClient::CreateL7CCRuleCallable(const CreateL7CCRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7CCRuleOutcome>>();
    CreateL7CCRuleAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL7CCRuleRequest&,
        CreateL7CCRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL7HealthConfigOutcome DayuClient::CreateL7HealthConfig(const CreateL7HealthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7HealthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7HealthConfigResponse rsp = CreateL7HealthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7HealthConfigOutcome(rsp);
        else
            return CreateL7HealthConfigOutcome(o.GetError());
    }
    else
    {
        return CreateL7HealthConfigOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL7HealthConfigAsync(const CreateL7HealthConfigRequest& request, const CreateL7HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7HealthConfigRequest&;
    using Resp = CreateL7HealthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7HealthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL7HealthConfigOutcomeCallable DayuClient::CreateL7HealthConfigCallable(const CreateL7HealthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7HealthConfigOutcome>>();
    CreateL7HealthConfigAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL7HealthConfigRequest&,
        CreateL7HealthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL7RuleCertOutcome DayuClient::CreateL7RuleCert(const CreateL7RuleCertRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7RuleCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RuleCertResponse rsp = CreateL7RuleCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RuleCertOutcome(rsp);
        else
            return CreateL7RuleCertOutcome(o.GetError());
    }
    else
    {
        return CreateL7RuleCertOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL7RuleCertAsync(const CreateL7RuleCertRequest& request, const CreateL7RuleCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7RuleCertRequest&;
    using Resp = CreateL7RuleCertResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7RuleCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL7RuleCertOutcomeCallable DayuClient::CreateL7RuleCertCallable(const CreateL7RuleCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7RuleCertOutcome>>();
    CreateL7RuleCertAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL7RuleCertRequest&,
        CreateL7RuleCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL7RulesOutcome DayuClient::CreateL7Rules(const CreateL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RulesResponse rsp = CreateL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RulesOutcome(rsp);
        else
            return CreateL7RulesOutcome(o.GetError());
    }
    else
    {
        return CreateL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL7RulesAsync(const CreateL7RulesRequest& request, const CreateL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7RulesRequest&;
    using Resp = CreateL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL7RulesOutcomeCallable DayuClient::CreateL7RulesCallable(const CreateL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7RulesOutcome>>();
    CreateL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL7RulesRequest&,
        CreateL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateL7RulesUploadOutcome DayuClient::CreateL7RulesUpload(const CreateL7RulesUploadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7RulesUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RulesUploadResponse rsp = CreateL7RulesUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RulesUploadOutcome(rsp);
        else
            return CreateL7RulesUploadOutcome(o.GetError());
    }
    else
    {
        return CreateL7RulesUploadOutcome(outcome.GetError());
    }
}

void DayuClient::CreateL7RulesUploadAsync(const CreateL7RulesUploadRequest& request, const CreateL7RulesUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateL7RulesUploadRequest&;
    using Resp = CreateL7RulesUploadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7RulesUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateL7RulesUploadOutcomeCallable DayuClient::CreateL7RulesUploadCallable(const CreateL7RulesUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7RulesUploadOutcome>>();
    CreateL7RulesUploadAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateL7RulesUploadRequest&,
        CreateL7RulesUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateNetReturnOutcome DayuClient::CreateNetReturn(const CreateNetReturnRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetReturn");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetReturnResponse rsp = CreateNetReturnResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetReturnOutcome(rsp);
        else
            return CreateNetReturnOutcome(o.GetError());
    }
    else
    {
        return CreateNetReturnOutcome(outcome.GetError());
    }
}

void DayuClient::CreateNetReturnAsync(const CreateNetReturnRequest& request, const CreateNetReturnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetReturnRequest&;
    using Resp = CreateNetReturnResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetReturn", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateNetReturnOutcomeCallable DayuClient::CreateNetReturnCallable(const CreateNetReturnRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetReturnOutcome>>();
    CreateNetReturnAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateNetReturnRequest&,
        CreateNetReturnOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateNewL4RulesOutcome DayuClient::CreateNewL4Rules(const CreateNewL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNewL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNewL4RulesResponse rsp = CreateNewL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNewL4RulesOutcome(rsp);
        else
            return CreateNewL4RulesOutcome(o.GetError());
    }
    else
    {
        return CreateNewL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::CreateNewL4RulesAsync(const CreateNewL4RulesRequest& request, const CreateNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNewL4RulesRequest&;
    using Resp = CreateNewL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNewL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateNewL4RulesOutcomeCallable DayuClient::CreateNewL4RulesCallable(const CreateNewL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNewL4RulesOutcome>>();
    CreateNewL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateNewL4RulesRequest&,
        CreateNewL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateNewL7RulesOutcome DayuClient::CreateNewL7Rules(const CreateNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNewL7RulesResponse rsp = CreateNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNewL7RulesOutcome(rsp);
        else
            return CreateNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return CreateNewL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::CreateNewL7RulesAsync(const CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNewL7RulesRequest&;
    using Resp = CreateNewL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNewL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateNewL7RulesOutcomeCallable DayuClient::CreateNewL7RulesCallable(const CreateNewL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNewL7RulesOutcome>>();
    CreateNewL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateNewL7RulesRequest&,
        CreateNewL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateNewL7RulesUploadOutcome DayuClient::CreateNewL7RulesUpload(const CreateNewL7RulesUploadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNewL7RulesUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNewL7RulesUploadResponse rsp = CreateNewL7RulesUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNewL7RulesUploadOutcome(rsp);
        else
            return CreateNewL7RulesUploadOutcome(o.GetError());
    }
    else
    {
        return CreateNewL7RulesUploadOutcome(outcome.GetError());
    }
}

void DayuClient::CreateNewL7RulesUploadAsync(const CreateNewL7RulesUploadRequest& request, const CreateNewL7RulesUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNewL7RulesUploadRequest&;
    using Resp = CreateNewL7RulesUploadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNewL7RulesUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateNewL7RulesUploadOutcomeCallable DayuClient::CreateNewL7RulesUploadCallable(const CreateNewL7RulesUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNewL7RulesUploadOutcome>>();
    CreateNewL7RulesUploadAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateNewL7RulesUploadRequest&,
        CreateNewL7RulesUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::CreateUnblockIpOutcome DayuClient::CreateUnblockIp(const CreateUnblockIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnblockIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnblockIpResponse rsp = CreateUnblockIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnblockIpOutcome(rsp);
        else
            return CreateUnblockIpOutcome(o.GetError());
    }
    else
    {
        return CreateUnblockIpOutcome(outcome.GetError());
    }
}

void DayuClient::CreateUnblockIpAsync(const CreateUnblockIpRequest& request, const CreateUnblockIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUnblockIpRequest&;
    using Resp = CreateUnblockIpResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUnblockIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::CreateUnblockIpOutcomeCallable DayuClient::CreateUnblockIpCallable(const CreateUnblockIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUnblockIpOutcome>>();
    CreateUnblockIpAsync(
    request,
    [prom](
        const DayuClient*,
        const CreateUnblockIpRequest&,
        CreateUnblockIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteCCFrequencyRulesOutcome DayuClient::DeleteCCFrequencyRules(const DeleteCCFrequencyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCFrequencyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCFrequencyRulesResponse rsp = DeleteCCFrequencyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCFrequencyRulesOutcome(rsp);
        else
            return DeleteCCFrequencyRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteCCFrequencyRulesOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteCCFrequencyRulesAsync(const DeleteCCFrequencyRulesRequest& request, const DeleteCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCFrequencyRulesRequest&;
    using Resp = DeleteCCFrequencyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCFrequencyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteCCFrequencyRulesOutcomeCallable DayuClient::DeleteCCFrequencyRulesCallable(const DeleteCCFrequencyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCFrequencyRulesOutcome>>();
    DeleteCCFrequencyRulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteCCFrequencyRulesRequest&,
        DeleteCCFrequencyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteCCSelfDefinePolicyOutcome DayuClient::DeleteCCSelfDefinePolicy(const DeleteCCSelfDefinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCCSelfDefinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCCSelfDefinePolicyResponse rsp = DeleteCCSelfDefinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCCSelfDefinePolicyOutcome(rsp);
        else
            return DeleteCCSelfDefinePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCCSelfDefinePolicyOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteCCSelfDefinePolicyAsync(const DeleteCCSelfDefinePolicyRequest& request, const DeleteCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCCSelfDefinePolicyRequest&;
    using Resp = DeleteCCSelfDefinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCCSelfDefinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteCCSelfDefinePolicyOutcomeCallable DayuClient::DeleteCCSelfDefinePolicyCallable(const DeleteCCSelfDefinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCCSelfDefinePolicyOutcome>>();
    DeleteCCSelfDefinePolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteCCSelfDefinePolicyRequest&,
        DeleteCCSelfDefinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteDDoSPolicyOutcome DayuClient::DeleteDDoSPolicy(const DeleteDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSPolicyResponse rsp = DeleteDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSPolicyOutcome(rsp);
        else
            return DeleteDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSPolicyOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteDDoSPolicyAsync(const DeleteDDoSPolicyRequest& request, const DeleteDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDDoSPolicyRequest&;
    using Resp = DeleteDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteDDoSPolicyOutcomeCallable DayuClient::DeleteDDoSPolicyCallable(const DeleteDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDDoSPolicyOutcome>>();
    DeleteDDoSPolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteDDoSPolicyRequest&,
        DeleteDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteDDoSPolicyCaseOutcome DayuClient::DeleteDDoSPolicyCase(const DeleteDDoSPolicyCaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDDoSPolicyCase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDDoSPolicyCaseResponse rsp = DeleteDDoSPolicyCaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDDoSPolicyCaseOutcome(rsp);
        else
            return DeleteDDoSPolicyCaseOutcome(o.GetError());
    }
    else
    {
        return DeleteDDoSPolicyCaseOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteDDoSPolicyCaseAsync(const DeleteDDoSPolicyCaseRequest& request, const DeleteDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDDoSPolicyCaseRequest&;
    using Resp = DeleteDDoSPolicyCaseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDDoSPolicyCase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteDDoSPolicyCaseOutcomeCallable DayuClient::DeleteDDoSPolicyCaseCallable(const DeleteDDoSPolicyCaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDDoSPolicyCaseOutcome>>();
    DeleteDDoSPolicyCaseAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteDDoSPolicyCaseRequest&,
        DeleteDDoSPolicyCaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteL4RulesOutcome DayuClient::DeleteL4Rules(const DeleteL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL4RulesResponse rsp = DeleteL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL4RulesOutcome(rsp);
        else
            return DeleteL4RulesOutcome(o.GetError());
    }
    else
    {
        return DeleteL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteL4RulesAsync(const DeleteL4RulesRequest& request, const DeleteL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteL4RulesRequest&;
    using Resp = DeleteL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteL4RulesOutcomeCallable DayuClient::DeleteL4RulesCallable(const DeleteL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL4RulesOutcome>>();
    DeleteL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteL4RulesRequest&,
        DeleteL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteL7RulesOutcome DayuClient::DeleteL7Rules(const DeleteL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL7RulesResponse rsp = DeleteL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL7RulesOutcome(rsp);
        else
            return DeleteL7RulesOutcome(o.GetError());
    }
    else
    {
        return DeleteL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteL7RulesAsync(const DeleteL7RulesRequest& request, const DeleteL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteL7RulesRequest&;
    using Resp = DeleteL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteL7RulesOutcomeCallable DayuClient::DeleteL7RulesCallable(const DeleteL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL7RulesOutcome>>();
    DeleteL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteL7RulesRequest&,
        DeleteL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteNewL4RulesOutcome DayuClient::DeleteNewL4Rules(const DeleteNewL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNewL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNewL4RulesResponse rsp = DeleteNewL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNewL4RulesOutcome(rsp);
        else
            return DeleteNewL4RulesOutcome(o.GetError());
    }
    else
    {
        return DeleteNewL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteNewL4RulesAsync(const DeleteNewL4RulesRequest& request, const DeleteNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNewL4RulesRequest&;
    using Resp = DeleteNewL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNewL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteNewL4RulesOutcomeCallable DayuClient::DeleteNewL4RulesCallable(const DeleteNewL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNewL4RulesOutcome>>();
    DeleteNewL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteNewL4RulesRequest&,
        DeleteNewL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DeleteNewL7RulesOutcome DayuClient::DeleteNewL7Rules(const DeleteNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNewL7RulesResponse rsp = DeleteNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNewL7RulesOutcome(rsp);
        else
            return DeleteNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return DeleteNewL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DeleteNewL7RulesAsync(const DeleteNewL7RulesRequest& request, const DeleteNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNewL7RulesRequest&;
    using Resp = DeleteNewL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNewL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DeleteNewL7RulesOutcomeCallable DayuClient::DeleteNewL7RulesCallable(const DeleteNewL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNewL7RulesOutcome>>();
    DeleteNewL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DeleteNewL7RulesRequest&,
        DeleteNewL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeActionLogOutcome DayuClient::DescribeActionLog(const DescribeActionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActionLogResponse rsp = DescribeActionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActionLogOutcome(rsp);
        else
            return DescribeActionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeActionLogOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeActionLogAsync(const DescribeActionLogRequest& request, const DescribeActionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeActionLogRequest&;
    using Resp = DescribeActionLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActionLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeActionLogOutcomeCallable DayuClient::DescribeActionLogCallable(const DescribeActionLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActionLogOutcome>>();
    DescribeActionLogAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeActionLogRequest&,
        DescribeActionLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBGPIPL7RuleMaxCntOutcome DayuClient::DescribeBGPIPL7RuleMaxCnt(const DescribeBGPIPL7RuleMaxCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBGPIPL7RuleMaxCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBGPIPL7RuleMaxCntResponse rsp = DescribeBGPIPL7RuleMaxCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBGPIPL7RuleMaxCntOutcome(rsp);
        else
            return DescribeBGPIPL7RuleMaxCntOutcome(o.GetError());
    }
    else
    {
        return DescribeBGPIPL7RuleMaxCntOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBGPIPL7RuleMaxCntAsync(const DescribeBGPIPL7RuleMaxCntRequest& request, const DescribeBGPIPL7RuleMaxCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBGPIPL7RuleMaxCntRequest&;
    using Resp = DescribeBGPIPL7RuleMaxCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBGPIPL7RuleMaxCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBGPIPL7RuleMaxCntOutcomeCallable DayuClient::DescribeBGPIPL7RuleMaxCntCallable(const DescribeBGPIPL7RuleMaxCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBGPIPL7RuleMaxCntOutcome>>();
    DescribeBGPIPL7RuleMaxCntAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBGPIPL7RuleMaxCntRequest&,
        DescribeBGPIPL7RuleMaxCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBaradDataOutcome DayuClient::DescribeBaradData(const DescribeBaradDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaradData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaradDataResponse rsp = DescribeBaradDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaradDataOutcome(rsp);
        else
            return DescribeBaradDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBaradDataOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBaradDataAsync(const DescribeBaradDataRequest& request, const DescribeBaradDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaradDataRequest&;
    using Resp = DescribeBaradDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaradData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBaradDataOutcomeCallable DayuClient::DescribeBaradDataCallable(const DescribeBaradDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaradDataOutcome>>();
    DescribeBaradDataAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBaradDataRequest&,
        DescribeBaradDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBasicCCThresholdOutcome DayuClient::DescribeBasicCCThreshold(const DescribeBasicCCThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicCCThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicCCThresholdResponse rsp = DescribeBasicCCThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicCCThresholdOutcome(rsp);
        else
            return DescribeBasicCCThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicCCThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBasicCCThresholdAsync(const DescribeBasicCCThresholdRequest& request, const DescribeBasicCCThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicCCThresholdRequest&;
    using Resp = DescribeBasicCCThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicCCThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBasicCCThresholdOutcomeCallable DayuClient::DescribeBasicCCThresholdCallable(const DescribeBasicCCThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicCCThresholdOutcome>>();
    DescribeBasicCCThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBasicCCThresholdRequest&,
        DescribeBasicCCThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBasicDeviceThresholdOutcome DayuClient::DescribeBasicDeviceThreshold(const DescribeBasicDeviceThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicDeviceThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicDeviceThresholdResponse rsp = DescribeBasicDeviceThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicDeviceThresholdOutcome(rsp);
        else
            return DescribeBasicDeviceThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicDeviceThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBasicDeviceThresholdAsync(const DescribeBasicDeviceThresholdRequest& request, const DescribeBasicDeviceThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicDeviceThresholdRequest&;
    using Resp = DescribeBasicDeviceThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicDeviceThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBasicDeviceThresholdOutcomeCallable DayuClient::DescribeBasicDeviceThresholdCallable(const DescribeBasicDeviceThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicDeviceThresholdOutcome>>();
    DescribeBasicDeviceThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBasicDeviceThresholdRequest&,
        DescribeBasicDeviceThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBizHttpStatusOutcome DayuClient::DescribeBizHttpStatus(const DescribeBizHttpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizHttpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizHttpStatusResponse rsp = DescribeBizHttpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizHttpStatusOutcome(rsp);
        else
            return DescribeBizHttpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBizHttpStatusOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBizHttpStatusAsync(const DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizHttpStatusRequest&;
    using Resp = DescribeBizHttpStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizHttpStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBizHttpStatusOutcomeCallable DayuClient::DescribeBizHttpStatusCallable(const DescribeBizHttpStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizHttpStatusOutcome>>();
    DescribeBizHttpStatusAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBizHttpStatusRequest&,
        DescribeBizHttpStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeBizTrendOutcome DayuClient::DescribeBizTrend(const DescribeBizTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizTrendResponse rsp = DescribeBizTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizTrendOutcome(rsp);
        else
            return DescribeBizTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeBizTrendOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeBizTrendAsync(const DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizTrendRequest&;
    using Resp = DescribeBizTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeBizTrendOutcomeCallable DayuClient::DescribeBizTrendCallable(const DescribeBizTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizTrendOutcome>>();
    DescribeBizTrendAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeBizTrendRequest&,
        DescribeBizTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCAlarmThresholdOutcome DayuClient::DescribeCCAlarmThreshold(const DescribeCCAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCAlarmThresholdResponse rsp = DescribeCCAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCAlarmThresholdOutcome(rsp);
        else
            return DescribeCCAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeCCAlarmThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCAlarmThresholdAsync(const DescribeCCAlarmThresholdRequest& request, const DescribeCCAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCAlarmThresholdRequest&;
    using Resp = DescribeCCAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCAlarmThresholdOutcomeCallable DayuClient::DescribeCCAlarmThresholdCallable(const DescribeCCAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCAlarmThresholdOutcome>>();
    DescribeCCAlarmThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCAlarmThresholdRequest&,
        DescribeCCAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCEvListOutcome DayuClient::DescribeCCEvList(const DescribeCCEvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCEvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCEvListResponse rsp = DescribeCCEvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCEvListOutcome(rsp);
        else
            return DescribeCCEvListOutcome(o.GetError());
    }
    else
    {
        return DescribeCCEvListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCEvListAsync(const DescribeCCEvListRequest& request, const DescribeCCEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCEvListRequest&;
    using Resp = DescribeCCEvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCEvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCEvListOutcomeCallable DayuClient::DescribeCCEvListCallable(const DescribeCCEvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCEvListOutcome>>();
    DescribeCCEvListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCEvListRequest&,
        DescribeCCEvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCFrequencyRulesOutcome DayuClient::DescribeCCFrequencyRules(const DescribeCCFrequencyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCFrequencyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCFrequencyRulesResponse rsp = DescribeCCFrequencyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCFrequencyRulesOutcome(rsp);
        else
            return DescribeCCFrequencyRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeCCFrequencyRulesOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCFrequencyRulesAsync(const DescribeCCFrequencyRulesRequest& request, const DescribeCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCFrequencyRulesRequest&;
    using Resp = DescribeCCFrequencyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCFrequencyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCFrequencyRulesOutcomeCallable DayuClient::DescribeCCFrequencyRulesCallable(const DescribeCCFrequencyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCFrequencyRulesOutcome>>();
    DescribeCCFrequencyRulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCFrequencyRulesRequest&,
        DescribeCCFrequencyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCIpAllowDenyOutcome DayuClient::DescribeCCIpAllowDeny(const DescribeCCIpAllowDenyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCIpAllowDeny");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCIpAllowDenyResponse rsp = DescribeCCIpAllowDenyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCIpAllowDenyOutcome(rsp);
        else
            return DescribeCCIpAllowDenyOutcome(o.GetError());
    }
    else
    {
        return DescribeCCIpAllowDenyOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCIpAllowDenyAsync(const DescribeCCIpAllowDenyRequest& request, const DescribeCCIpAllowDenyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCIpAllowDenyRequest&;
    using Resp = DescribeCCIpAllowDenyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCIpAllowDeny", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCIpAllowDenyOutcomeCallable DayuClient::DescribeCCIpAllowDenyCallable(const DescribeCCIpAllowDenyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCIpAllowDenyOutcome>>();
    DescribeCCIpAllowDenyAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCIpAllowDenyRequest&,
        DescribeCCIpAllowDenyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCSelfDefinePolicyOutcome DayuClient::DescribeCCSelfDefinePolicy(const DescribeCCSelfDefinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCSelfDefinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCSelfDefinePolicyResponse rsp = DescribeCCSelfDefinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCSelfDefinePolicyOutcome(rsp);
        else
            return DescribeCCSelfDefinePolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeCCSelfDefinePolicyOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCSelfDefinePolicyAsync(const DescribeCCSelfDefinePolicyRequest& request, const DescribeCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCSelfDefinePolicyRequest&;
    using Resp = DescribeCCSelfDefinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCSelfDefinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCSelfDefinePolicyOutcomeCallable DayuClient::DescribeCCSelfDefinePolicyCallable(const DescribeCCSelfDefinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCSelfDefinePolicyOutcome>>();
    DescribeCCSelfDefinePolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCSelfDefinePolicyRequest&,
        DescribeCCSelfDefinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCTrendOutcome DayuClient::DescribeCCTrend(const DescribeCCTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCTrendResponse rsp = DescribeCCTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCTrendOutcome(rsp);
        else
            return DescribeCCTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeCCTrendOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCTrendAsync(const DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCTrendRequest&;
    using Resp = DescribeCCTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCTrendOutcomeCallable DayuClient::DescribeCCTrendCallable(const DescribeCCTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCTrendOutcome>>();
    DescribeCCTrendAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCTrendRequest&,
        DescribeCCTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeCCUrlAllowOutcome DayuClient::DescribeCCUrlAllow(const DescribeCCUrlAllowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCCUrlAllow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCCUrlAllowResponse rsp = DescribeCCUrlAllowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCCUrlAllowOutcome(rsp);
        else
            return DescribeCCUrlAllowOutcome(o.GetError());
    }
    else
    {
        return DescribeCCUrlAllowOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeCCUrlAllowAsync(const DescribeCCUrlAllowRequest& request, const DescribeCCUrlAllowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCCUrlAllowRequest&;
    using Resp = DescribeCCUrlAllowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCCUrlAllow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeCCUrlAllowOutcomeCallable DayuClient::DescribeCCUrlAllowCallable(const DescribeCCUrlAllowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCCUrlAllowOutcome>>();
    DescribeCCUrlAllowAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeCCUrlAllowRequest&,
        DescribeCCUrlAllowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSAlarmThresholdOutcome DayuClient::DescribeDDoSAlarmThreshold(const DescribeDDoSAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAlarmThresholdResponse rsp = DescribeDDoSAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAlarmThresholdOutcome(rsp);
        else
            return DescribeDDoSAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAlarmThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSAlarmThresholdAsync(const DescribeDDoSAlarmThresholdRequest& request, const DescribeDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSAlarmThresholdRequest&;
    using Resp = DescribeDDoSAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSAlarmThresholdOutcomeCallable DayuClient::DescribeDDoSAlarmThresholdCallable(const DescribeDDoSAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAlarmThresholdOutcome>>();
    DescribeDDoSAlarmThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSAlarmThresholdRequest&,
        DescribeDDoSAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSAttackIPRegionMapOutcome DayuClient::DescribeDDoSAttackIPRegionMap(const DescribeDDoSAttackIPRegionMapRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackIPRegionMap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackIPRegionMapResponse rsp = DescribeDDoSAttackIPRegionMapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackIPRegionMapOutcome(rsp);
        else
            return DescribeDDoSAttackIPRegionMapOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackIPRegionMapOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSAttackIPRegionMapAsync(const DescribeDDoSAttackIPRegionMapRequest& request, const DescribeDDoSAttackIPRegionMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSAttackIPRegionMapRequest&;
    using Resp = DescribeDDoSAttackIPRegionMapResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAttackIPRegionMap", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSAttackIPRegionMapOutcomeCallable DayuClient::DescribeDDoSAttackIPRegionMapCallable(const DescribeDDoSAttackIPRegionMapRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAttackIPRegionMapOutcome>>();
    DescribeDDoSAttackIPRegionMapAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSAttackIPRegionMapRequest&,
        DescribeDDoSAttackIPRegionMapOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSAttackSourceOutcome DayuClient::DescribeDDoSAttackSource(const DescribeDDoSAttackSourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackSource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackSourceResponse rsp = DescribeDDoSAttackSourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackSourceOutcome(rsp);
        else
            return DescribeDDoSAttackSourceOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackSourceOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSAttackSourceAsync(const DescribeDDoSAttackSourceRequest& request, const DescribeDDoSAttackSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSAttackSourceRequest&;
    using Resp = DescribeDDoSAttackSourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAttackSource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSAttackSourceOutcomeCallable DayuClient::DescribeDDoSAttackSourceCallable(const DescribeDDoSAttackSourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAttackSourceOutcome>>();
    DescribeDDoSAttackSourceAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSAttackSourceRequest&,
        DescribeDDoSAttackSourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSCountOutcome DayuClient::DescribeDDoSCount(const DescribeDDoSCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSCountResponse rsp = DescribeDDoSCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSCountOutcome(rsp);
        else
            return DescribeDDoSCountOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSCountOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSCountAsync(const DescribeDDoSCountRequest& request, const DescribeDDoSCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSCountRequest&;
    using Resp = DescribeDDoSCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSCountOutcomeCallable DayuClient::DescribeDDoSCountCallable(const DescribeDDoSCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSCountOutcome>>();
    DescribeDDoSCountAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSCountRequest&,
        DescribeDDoSCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSDefendStatusOutcome DayuClient::DescribeDDoSDefendStatus(const DescribeDDoSDefendStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSDefendStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSDefendStatusResponse rsp = DescribeDDoSDefendStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSDefendStatusOutcome(rsp);
        else
            return DescribeDDoSDefendStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSDefendStatusOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSDefendStatusAsync(const DescribeDDoSDefendStatusRequest& request, const DescribeDDoSDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSDefendStatusRequest&;
    using Resp = DescribeDDoSDefendStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSDefendStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSDefendStatusOutcomeCallable DayuClient::DescribeDDoSDefendStatusCallable(const DescribeDDoSDefendStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSDefendStatusOutcome>>();
    DescribeDDoSDefendStatusAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSDefendStatusRequest&,
        DescribeDDoSDefendStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSEvInfoOutcome DayuClient::DescribeDDoSEvInfo(const DescribeDDoSEvInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSEvInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSEvInfoResponse rsp = DescribeDDoSEvInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSEvInfoOutcome(rsp);
        else
            return DescribeDDoSEvInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSEvInfoOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSEvInfoAsync(const DescribeDDoSEvInfoRequest& request, const DescribeDDoSEvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSEvInfoRequest&;
    using Resp = DescribeDDoSEvInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSEvInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSEvInfoOutcomeCallable DayuClient::DescribeDDoSEvInfoCallable(const DescribeDDoSEvInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSEvInfoOutcome>>();
    DescribeDDoSEvInfoAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSEvInfoRequest&,
        DescribeDDoSEvInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSEvListOutcome DayuClient::DescribeDDoSEvList(const DescribeDDoSEvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSEvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSEvListResponse rsp = DescribeDDoSEvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSEvListOutcome(rsp);
        else
            return DescribeDDoSEvListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSEvListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSEvListAsync(const DescribeDDoSEvListRequest& request, const DescribeDDoSEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSEvListRequest&;
    using Resp = DescribeDDoSEvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSEvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSEvListOutcomeCallable DayuClient::DescribeDDoSEvListCallable(const DescribeDDoSEvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSEvListOutcome>>();
    DescribeDDoSEvListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSEvListRequest&,
        DescribeDDoSEvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSIpLogOutcome DayuClient::DescribeDDoSIpLog(const DescribeDDoSIpLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSIpLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSIpLogResponse rsp = DescribeDDoSIpLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSIpLogOutcome(rsp);
        else
            return DescribeDDoSIpLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSIpLogOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSIpLogAsync(const DescribeDDoSIpLogRequest& request, const DescribeDDoSIpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSIpLogRequest&;
    using Resp = DescribeDDoSIpLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSIpLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSIpLogOutcomeCallable DayuClient::DescribeDDoSIpLogCallable(const DescribeDDoSIpLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSIpLogOutcome>>();
    DescribeDDoSIpLogAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSIpLogRequest&,
        DescribeDDoSIpLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSNetCountOutcome DayuClient::DescribeDDoSNetCount(const DescribeDDoSNetCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSNetCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSNetCountResponse rsp = DescribeDDoSNetCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSNetCountOutcome(rsp);
        else
            return DescribeDDoSNetCountOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSNetCountOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSNetCountAsync(const DescribeDDoSNetCountRequest& request, const DescribeDDoSNetCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSNetCountRequest&;
    using Resp = DescribeDDoSNetCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSNetCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSNetCountOutcomeCallable DayuClient::DescribeDDoSNetCountCallable(const DescribeDDoSNetCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSNetCountOutcome>>();
    DescribeDDoSNetCountAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSNetCountRequest&,
        DescribeDDoSNetCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSNetEvInfoOutcome DayuClient::DescribeDDoSNetEvInfo(const DescribeDDoSNetEvInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSNetEvInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSNetEvInfoResponse rsp = DescribeDDoSNetEvInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSNetEvInfoOutcome(rsp);
        else
            return DescribeDDoSNetEvInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSNetEvInfoOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSNetEvInfoAsync(const DescribeDDoSNetEvInfoRequest& request, const DescribeDDoSNetEvInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSNetEvInfoRequest&;
    using Resp = DescribeDDoSNetEvInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSNetEvInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSNetEvInfoOutcomeCallable DayuClient::DescribeDDoSNetEvInfoCallable(const DescribeDDoSNetEvInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSNetEvInfoOutcome>>();
    DescribeDDoSNetEvInfoAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSNetEvInfoRequest&,
        DescribeDDoSNetEvInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSNetEvListOutcome DayuClient::DescribeDDoSNetEvList(const DescribeDDoSNetEvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSNetEvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSNetEvListResponse rsp = DescribeDDoSNetEvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSNetEvListOutcome(rsp);
        else
            return DescribeDDoSNetEvListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSNetEvListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSNetEvListAsync(const DescribeDDoSNetEvListRequest& request, const DescribeDDoSNetEvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSNetEvListRequest&;
    using Resp = DescribeDDoSNetEvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSNetEvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSNetEvListOutcomeCallable DayuClient::DescribeDDoSNetEvListCallable(const DescribeDDoSNetEvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSNetEvListOutcome>>();
    DescribeDDoSNetEvListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSNetEvListRequest&,
        DescribeDDoSNetEvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSNetIpLogOutcome DayuClient::DescribeDDoSNetIpLog(const DescribeDDoSNetIpLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSNetIpLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSNetIpLogResponse rsp = DescribeDDoSNetIpLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSNetIpLogOutcome(rsp);
        else
            return DescribeDDoSNetIpLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSNetIpLogOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSNetIpLogAsync(const DescribeDDoSNetIpLogRequest& request, const DescribeDDoSNetIpLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSNetIpLogRequest&;
    using Resp = DescribeDDoSNetIpLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSNetIpLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSNetIpLogOutcomeCallable DayuClient::DescribeDDoSNetIpLogCallable(const DescribeDDoSNetIpLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSNetIpLogOutcome>>();
    DescribeDDoSNetIpLogAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSNetIpLogRequest&,
        DescribeDDoSNetIpLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSNetTrendOutcome DayuClient::DescribeDDoSNetTrend(const DescribeDDoSNetTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSNetTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSNetTrendResponse rsp = DescribeDDoSNetTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSNetTrendOutcome(rsp);
        else
            return DescribeDDoSNetTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSNetTrendOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSNetTrendAsync(const DescribeDDoSNetTrendRequest& request, const DescribeDDoSNetTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSNetTrendRequest&;
    using Resp = DescribeDDoSNetTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSNetTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSNetTrendOutcomeCallable DayuClient::DescribeDDoSNetTrendCallable(const DescribeDDoSNetTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSNetTrendOutcome>>();
    DescribeDDoSNetTrendAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSNetTrendRequest&,
        DescribeDDoSNetTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSPolicyOutcome DayuClient::DescribeDDoSPolicy(const DescribeDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSPolicyResponse rsp = DescribeDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSPolicyOutcome(rsp);
        else
            return DescribeDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSPolicyOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSPolicyAsync(const DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSPolicyRequest&;
    using Resp = DescribeDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSPolicyOutcomeCallable DayuClient::DescribeDDoSPolicyCallable(const DescribeDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSPolicyOutcome>>();
    DescribeDDoSPolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSPolicyRequest&,
        DescribeDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSTrendOutcome DayuClient::DescribeDDoSTrend(const DescribeDDoSTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSTrendResponse rsp = DescribeDDoSTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSTrendOutcome(rsp);
        else
            return DescribeDDoSTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSTrendOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSTrendAsync(const DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSTrendRequest&;
    using Resp = DescribeDDoSTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSTrendOutcomeCallable DayuClient::DescribeDDoSTrendCallable(const DescribeDDoSTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSTrendOutcome>>();
    DescribeDDoSTrendAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSTrendRequest&,
        DescribeDDoSTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeDDoSUsedStatisOutcome DayuClient::DescribeDDoSUsedStatis(const DescribeDDoSUsedStatisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSUsedStatis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSUsedStatisResponse rsp = DescribeDDoSUsedStatisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSUsedStatisOutcome(rsp);
        else
            return DescribeDDoSUsedStatisOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSUsedStatisOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeDDoSUsedStatisAsync(const DescribeDDoSUsedStatisRequest& request, const DescribeDDoSUsedStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSUsedStatisRequest&;
    using Resp = DescribeDDoSUsedStatisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSUsedStatis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeDDoSUsedStatisOutcomeCallable DayuClient::DescribeDDoSUsedStatisCallable(const DescribeDDoSUsedStatisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSUsedStatisOutcome>>();
    DescribeDDoSUsedStatisAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeDDoSUsedStatisRequest&,
        DescribeDDoSUsedStatisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeIPProductInfoOutcome DayuClient::DescribeIPProductInfo(const DescribeIPProductInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPProductInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPProductInfoResponse rsp = DescribeIPProductInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPProductInfoOutcome(rsp);
        else
            return DescribeIPProductInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeIPProductInfoOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeIPProductInfoAsync(const DescribeIPProductInfoRequest& request, const DescribeIPProductInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPProductInfoRequest&;
    using Resp = DescribeIPProductInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPProductInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeIPProductInfoOutcomeCallable DayuClient::DescribeIPProductInfoCallable(const DescribeIPProductInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPProductInfoOutcome>>();
    DescribeIPProductInfoAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeIPProductInfoRequest&,
        DescribeIPProductInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeInsurePacksOutcome DayuClient::DescribeInsurePacks(const DescribeInsurePacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInsurePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInsurePacksResponse rsp = DescribeInsurePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInsurePacksOutcome(rsp);
        else
            return DescribeInsurePacksOutcome(o.GetError());
    }
    else
    {
        return DescribeInsurePacksOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeInsurePacksAsync(const DescribeInsurePacksRequest& request, const DescribeInsurePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInsurePacksRequest&;
    using Resp = DescribeInsurePacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInsurePacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeInsurePacksOutcomeCallable DayuClient::DescribeInsurePacksCallable(const DescribeInsurePacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInsurePacksOutcome>>();
    DescribeInsurePacksAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeInsurePacksRequest&,
        DescribeInsurePacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeIpBlockListOutcome DayuClient::DescribeIpBlockList(const DescribeIpBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpBlockListResponse rsp = DescribeIpBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpBlockListOutcome(rsp);
        else
            return DescribeIpBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeIpBlockListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeIpBlockListAsync(const DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpBlockListRequest&;
    using Resp = DescribeIpBlockListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpBlockList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeIpBlockListOutcomeCallable DayuClient::DescribeIpBlockListCallable(const DescribeIpBlockListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpBlockListOutcome>>();
    DescribeIpBlockListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeIpBlockListRequest&,
        DescribeIpBlockListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeIpUnBlockListOutcome DayuClient::DescribeIpUnBlockList(const DescribeIpUnBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpUnBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpUnBlockListResponse rsp = DescribeIpUnBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpUnBlockListOutcome(rsp);
        else
            return DescribeIpUnBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeIpUnBlockListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeIpUnBlockListAsync(const DescribeIpUnBlockListRequest& request, const DescribeIpUnBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpUnBlockListRequest&;
    using Resp = DescribeIpUnBlockListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpUnBlockList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeIpUnBlockListOutcomeCallable DayuClient::DescribeIpUnBlockListCallable(const DescribeIpUnBlockListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpUnBlockListOutcome>>();
    DescribeIpUnBlockListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeIpUnBlockListRequest&,
        DescribeIpUnBlockListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeL4HealthConfigOutcome DayuClient::DescribeL4HealthConfig(const DescribeL4HealthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4HealthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4HealthConfigResponse rsp = DescribeL4HealthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4HealthConfigOutcome(rsp);
        else
            return DescribeL4HealthConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeL4HealthConfigOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeL4HealthConfigAsync(const DescribeL4HealthConfigRequest& request, const DescribeL4HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeL4HealthConfigRequest&;
    using Resp = DescribeL4HealthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL4HealthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeL4HealthConfigOutcomeCallable DayuClient::DescribeL4HealthConfigCallable(const DescribeL4HealthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL4HealthConfigOutcome>>();
    DescribeL4HealthConfigAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeL4HealthConfigRequest&,
        DescribeL4HealthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeL4RulesErrHealthOutcome DayuClient::DescribeL4RulesErrHealth(const DescribeL4RulesErrHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4RulesErrHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4RulesErrHealthResponse rsp = DescribeL4RulesErrHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4RulesErrHealthOutcome(rsp);
        else
            return DescribeL4RulesErrHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeL4RulesErrHealthOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeL4RulesErrHealthAsync(const DescribeL4RulesErrHealthRequest& request, const DescribeL4RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeL4RulesErrHealthRequest&;
    using Resp = DescribeL4RulesErrHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL4RulesErrHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeL4RulesErrHealthOutcomeCallable DayuClient::DescribeL4RulesErrHealthCallable(const DescribeL4RulesErrHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL4RulesErrHealthOutcome>>();
    DescribeL4RulesErrHealthAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeL4RulesErrHealthRequest&,
        DescribeL4RulesErrHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeL7HealthConfigOutcome DayuClient::DescribeL7HealthConfig(const DescribeL7HealthConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7HealthConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7HealthConfigResponse rsp = DescribeL7HealthConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7HealthConfigOutcome(rsp);
        else
            return DescribeL7HealthConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeL7HealthConfigOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeL7HealthConfigAsync(const DescribeL7HealthConfigRequest& request, const DescribeL7HealthConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeL7HealthConfigRequest&;
    using Resp = DescribeL7HealthConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL7HealthConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeL7HealthConfigOutcomeCallable DayuClient::DescribeL7HealthConfigCallable(const DescribeL7HealthConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL7HealthConfigOutcome>>();
    DescribeL7HealthConfigAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeL7HealthConfigRequest&,
        DescribeL7HealthConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeNewL4RulesOutcome DayuClient::DescribeNewL4Rules(const DescribeNewL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL4RulesResponse rsp = DescribeNewL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL4RulesOutcome(rsp);
        else
            return DescribeNewL4RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeNewL4RulesAsync(const DescribeNewL4RulesRequest& request, const DescribeNewL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewL4RulesRequest&;
    using Resp = DescribeNewL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeNewL4RulesOutcomeCallable DayuClient::DescribeNewL4RulesCallable(const DescribeNewL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewL4RulesOutcome>>();
    DescribeNewL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeNewL4RulesRequest&,
        DescribeNewL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeNewL4RulesErrHealthOutcome DayuClient::DescribeNewL4RulesErrHealth(const DescribeNewL4RulesErrHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL4RulesErrHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL4RulesErrHealthResponse rsp = DescribeNewL4RulesErrHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL4RulesErrHealthOutcome(rsp);
        else
            return DescribeNewL4RulesErrHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL4RulesErrHealthOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeNewL4RulesErrHealthAsync(const DescribeNewL4RulesErrHealthRequest& request, const DescribeNewL4RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewL4RulesErrHealthRequest&;
    using Resp = DescribeNewL4RulesErrHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewL4RulesErrHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeNewL4RulesErrHealthOutcomeCallable DayuClient::DescribeNewL4RulesErrHealthCallable(const DescribeNewL4RulesErrHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewL4RulesErrHealthOutcome>>();
    DescribeNewL4RulesErrHealthAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeNewL4RulesErrHealthRequest&,
        DescribeNewL4RulesErrHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeNewL7RulesErrHealthOutcome DayuClient::DescribeNewL7RulesErrHealth(const DescribeNewL7RulesErrHealthRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewL7RulesErrHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewL7RulesErrHealthResponse rsp = DescribeNewL7RulesErrHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewL7RulesErrHealthOutcome(rsp);
        else
            return DescribeNewL7RulesErrHealthOutcome(o.GetError());
    }
    else
    {
        return DescribeNewL7RulesErrHealthOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeNewL7RulesErrHealthAsync(const DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNewL7RulesErrHealthRequest&;
    using Resp = DescribeNewL7RulesErrHealthResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNewL7RulesErrHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeNewL7RulesErrHealthOutcomeCallable DayuClient::DescribeNewL7RulesErrHealthCallable(const DescribeNewL7RulesErrHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNewL7RulesErrHealthOutcome>>();
    DescribeNewL7RulesErrHealthAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeNewL7RulesErrHealthRequest&,
        DescribeNewL7RulesErrHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribePackIndexOutcome DayuClient::DescribePackIndex(const DescribePackIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackIndexResponse rsp = DescribePackIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackIndexOutcome(rsp);
        else
            return DescribePackIndexOutcome(o.GetError());
    }
    else
    {
        return DescribePackIndexOutcome(outcome.GetError());
    }
}

void DayuClient::DescribePackIndexAsync(const DescribePackIndexRequest& request, const DescribePackIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePackIndexRequest&;
    using Resp = DescribePackIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePackIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribePackIndexOutcomeCallable DayuClient::DescribePackIndexCallable(const DescribePackIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePackIndexOutcome>>();
    DescribePackIndexAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribePackIndexRequest&,
        DescribePackIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribePcapOutcome DayuClient::DescribePcap(const DescribePcapRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePcap");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePcapResponse rsp = DescribePcapResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePcapOutcome(rsp);
        else
            return DescribePcapOutcome(o.GetError());
    }
    else
    {
        return DescribePcapOutcome(outcome.GetError());
    }
}

void DayuClient::DescribePcapAsync(const DescribePcapRequest& request, const DescribePcapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePcapRequest&;
    using Resp = DescribePcapResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePcap", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribePcapOutcomeCallable DayuClient::DescribePcapCallable(const DescribePcapRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePcapOutcome>>();
    DescribePcapAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribePcapRequest&,
        DescribePcapOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribePolicyCaseOutcome DayuClient::DescribePolicyCase(const DescribePolicyCaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyCase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyCaseResponse rsp = DescribePolicyCaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyCaseOutcome(rsp);
        else
            return DescribePolicyCaseOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyCaseOutcome(outcome.GetError());
    }
}

void DayuClient::DescribePolicyCaseAsync(const DescribePolicyCaseRequest& request, const DescribePolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyCaseRequest&;
    using Resp = DescribePolicyCaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyCase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribePolicyCaseOutcomeCallable DayuClient::DescribePolicyCaseCallable(const DescribePolicyCaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyCaseOutcome>>();
    DescribePolicyCaseAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribePolicyCaseRequest&,
        DescribePolicyCaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeResIpListOutcome DayuClient::DescribeResIpList(const DescribeResIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResIpListResponse rsp = DescribeResIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResIpListOutcome(rsp);
        else
            return DescribeResIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeResIpListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeResIpListAsync(const DescribeResIpListRequest& request, const DescribeResIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResIpListRequest&;
    using Resp = DescribeResIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeResIpListOutcomeCallable DayuClient::DescribeResIpListCallable(const DescribeResIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResIpListOutcome>>();
    DescribeResIpListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeResIpListRequest&,
        DescribeResIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeResourceListOutcome DayuClient::DescribeResourceList(const DescribeResourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceListResponse rsp = DescribeResourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceListOutcome(rsp);
        else
            return DescribeResourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeResourceListAsync(const DescribeResourceListRequest& request, const DescribeResourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceListRequest&;
    using Resp = DescribeResourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeResourceListOutcomeCallable DayuClient::DescribeResourceListCallable(const DescribeResourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceListOutcome>>();
    DescribeResourceListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeResourceListRequest&,
        DescribeResourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeRuleSetsOutcome DayuClient::DescribeRuleSets(const DescribeRuleSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleSetsResponse rsp = DescribeRuleSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleSetsOutcome(rsp);
        else
            return DescribeRuleSetsOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleSetsOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeRuleSetsAsync(const DescribeRuleSetsRequest& request, const DescribeRuleSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleSetsRequest&;
    using Resp = DescribeRuleSetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleSets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeRuleSetsOutcomeCallable DayuClient::DescribeRuleSetsCallable(const DescribeRuleSetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleSetsOutcome>>();
    DescribeRuleSetsAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeRuleSetsRequest&,
        DescribeRuleSetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeSchedulingDomainListOutcome DayuClient::DescribeSchedulingDomainList(const DescribeSchedulingDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedulingDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulingDomainListResponse rsp = DescribeSchedulingDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulingDomainListOutcome(rsp);
        else
            return DescribeSchedulingDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulingDomainListOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeSchedulingDomainListAsync(const DescribeSchedulingDomainListRequest& request, const DescribeSchedulingDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSchedulingDomainListRequest&;
    using Resp = DescribeSchedulingDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedulingDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeSchedulingDomainListOutcomeCallable DayuClient::DescribeSchedulingDomainListCallable(const DescribeSchedulingDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulingDomainListOutcome>>();
    DescribeSchedulingDomainListAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeSchedulingDomainListRequest&,
        DescribeSchedulingDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeSecIndexOutcome DayuClient::DescribeSecIndex(const DescribeSecIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecIndexResponse rsp = DescribeSecIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecIndexOutcome(rsp);
        else
            return DescribeSecIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeSecIndexOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeSecIndexAsync(const DescribeSecIndexRequest& request, const DescribeSecIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecIndexRequest&;
    using Resp = DescribeSecIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeSecIndexOutcomeCallable DayuClient::DescribeSecIndexCallable(const DescribeSecIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecIndexOutcome>>();
    DescribeSecIndexAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeSecIndexRequest&,
        DescribeSecIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeSourceIpSegmentOutcome DayuClient::DescribeSourceIpSegment(const DescribeSourceIpSegmentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceIpSegment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceIpSegmentResponse rsp = DescribeSourceIpSegmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceIpSegmentOutcome(rsp);
        else
            return DescribeSourceIpSegmentOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceIpSegmentOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeSourceIpSegmentAsync(const DescribeSourceIpSegmentRequest& request, const DescribeSourceIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceIpSegmentRequest&;
    using Resp = DescribeSourceIpSegmentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceIpSegment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeSourceIpSegmentOutcomeCallable DayuClient::DescribeSourceIpSegmentCallable(const DescribeSourceIpSegmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceIpSegmentOutcome>>();
    DescribeSourceIpSegmentAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeSourceIpSegmentRequest&,
        DescribeSourceIpSegmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeTransmitStatisOutcome DayuClient::DescribeTransmitStatis(const DescribeTransmitStatisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTransmitStatis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTransmitStatisResponse rsp = DescribeTransmitStatisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTransmitStatisOutcome(rsp);
        else
            return DescribeTransmitStatisOutcome(o.GetError());
    }
    else
    {
        return DescribeTransmitStatisOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeTransmitStatisAsync(const DescribeTransmitStatisRequest& request, const DescribeTransmitStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTransmitStatisRequest&;
    using Resp = DescribeTransmitStatisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTransmitStatis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeTransmitStatisOutcomeCallable DayuClient::DescribeTransmitStatisCallable(const DescribeTransmitStatisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTransmitStatisOutcome>>();
    DescribeTransmitStatisAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeTransmitStatisRequest&,
        DescribeTransmitStatisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribeUnBlockStatisOutcome DayuClient::DescribeUnBlockStatis(const DescribeUnBlockStatisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnBlockStatis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnBlockStatisResponse rsp = DescribeUnBlockStatisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnBlockStatisOutcome(rsp);
        else
            return DescribeUnBlockStatisOutcome(o.GetError());
    }
    else
    {
        return DescribeUnBlockStatisOutcome(outcome.GetError());
    }
}

void DayuClient::DescribeUnBlockStatisAsync(const DescribeUnBlockStatisRequest& request, const DescribeUnBlockStatisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnBlockStatisRequest&;
    using Resp = DescribeUnBlockStatisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnBlockStatis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribeUnBlockStatisOutcomeCallable DayuClient::DescribeUnBlockStatisCallable(const DescribeUnBlockStatisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnBlockStatisOutcome>>();
    DescribeUnBlockStatisAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribeUnBlockStatisRequest&,
        DescribeUnBlockStatisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribleL4RulesOutcome DayuClient::DescribleL4Rules(const DescribleL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribleL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribleL4RulesResponse rsp = DescribleL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribleL4RulesOutcome(rsp);
        else
            return DescribleL4RulesOutcome(o.GetError());
    }
    else
    {
        return DescribleL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DescribleL4RulesAsync(const DescribleL4RulesRequest& request, const DescribleL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribleL4RulesRequest&;
    using Resp = DescribleL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribleL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribleL4RulesOutcomeCallable DayuClient::DescribleL4RulesCallable(const DescribleL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribleL4RulesOutcome>>();
    DescribleL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribleL4RulesRequest&,
        DescribleL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribleL7RulesOutcome DayuClient::DescribleL7Rules(const DescribleL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribleL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribleL7RulesResponse rsp = DescribleL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribleL7RulesOutcome(rsp);
        else
            return DescribleL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribleL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DescribleL7RulesAsync(const DescribleL7RulesRequest& request, const DescribleL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribleL7RulesRequest&;
    using Resp = DescribleL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribleL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribleL7RulesOutcomeCallable DayuClient::DescribleL7RulesCallable(const DescribleL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribleL7RulesOutcome>>();
    DescribleL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribleL7RulesRequest&,
        DescribleL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribleNewL7RulesOutcome DayuClient::DescribleNewL7Rules(const DescribleNewL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribleNewL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribleNewL7RulesResponse rsp = DescribleNewL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribleNewL7RulesOutcome(rsp);
        else
            return DescribleNewL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribleNewL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::DescribleNewL7RulesAsync(const DescribleNewL7RulesRequest& request, const DescribleNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribleNewL7RulesRequest&;
    using Resp = DescribleNewL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribleNewL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribleNewL7RulesOutcomeCallable DayuClient::DescribleNewL7RulesCallable(const DescribleNewL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribleNewL7RulesOutcome>>();
    DescribleNewL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribleNewL7RulesRequest&,
        DescribleNewL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::DescribleRegionCountOutcome DayuClient::DescribleRegionCount(const DescribleRegionCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribleRegionCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribleRegionCountResponse rsp = DescribleRegionCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribleRegionCountOutcome(rsp);
        else
            return DescribleRegionCountOutcome(o.GetError());
    }
    else
    {
        return DescribleRegionCountOutcome(outcome.GetError());
    }
}

void DayuClient::DescribleRegionCountAsync(const DescribleRegionCountRequest& request, const DescribleRegionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribleRegionCountRequest&;
    using Resp = DescribleRegionCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribleRegionCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::DescribleRegionCountOutcomeCallable DayuClient::DescribleRegionCountCallable(const DescribleRegionCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribleRegionCountOutcome>>();
    DescribleRegionCountAsync(
    request,
    [prom](
        const DayuClient*,
        const DescribleRegionCountRequest&,
        DescribleRegionCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCAlarmThresholdOutcome DayuClient::ModifyCCAlarmThreshold(const ModifyCCAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCAlarmThresholdResponse rsp = ModifyCCAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCAlarmThresholdOutcome(rsp);
        else
            return ModifyCCAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyCCAlarmThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCAlarmThresholdAsync(const ModifyCCAlarmThresholdRequest& request, const ModifyCCAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCAlarmThresholdRequest&;
    using Resp = ModifyCCAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCAlarmThresholdOutcomeCallable DayuClient::ModifyCCAlarmThresholdCallable(const ModifyCCAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCAlarmThresholdOutcome>>();
    ModifyCCAlarmThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCAlarmThresholdRequest&,
        ModifyCCAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCFrequencyRulesOutcome DayuClient::ModifyCCFrequencyRules(const ModifyCCFrequencyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCFrequencyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCFrequencyRulesResponse rsp = ModifyCCFrequencyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCFrequencyRulesOutcome(rsp);
        else
            return ModifyCCFrequencyRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyCCFrequencyRulesOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCFrequencyRulesAsync(const ModifyCCFrequencyRulesRequest& request, const ModifyCCFrequencyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCFrequencyRulesRequest&;
    using Resp = ModifyCCFrequencyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCFrequencyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCFrequencyRulesOutcomeCallable DayuClient::ModifyCCFrequencyRulesCallable(const ModifyCCFrequencyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCFrequencyRulesOutcome>>();
    ModifyCCFrequencyRulesAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCFrequencyRulesRequest&,
        ModifyCCFrequencyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCFrequencyRulesStatusOutcome DayuClient::ModifyCCFrequencyRulesStatus(const ModifyCCFrequencyRulesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCFrequencyRulesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCFrequencyRulesStatusResponse rsp = ModifyCCFrequencyRulesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCFrequencyRulesStatusOutcome(rsp);
        else
            return ModifyCCFrequencyRulesStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCCFrequencyRulesStatusOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCFrequencyRulesStatusAsync(const ModifyCCFrequencyRulesStatusRequest& request, const ModifyCCFrequencyRulesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCFrequencyRulesStatusRequest&;
    using Resp = ModifyCCFrequencyRulesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCFrequencyRulesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCFrequencyRulesStatusOutcomeCallable DayuClient::ModifyCCFrequencyRulesStatusCallable(const ModifyCCFrequencyRulesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCFrequencyRulesStatusOutcome>>();
    ModifyCCFrequencyRulesStatusAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCFrequencyRulesStatusRequest&,
        ModifyCCFrequencyRulesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCHostProtectionOutcome DayuClient::ModifyCCHostProtection(const ModifyCCHostProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCHostProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCHostProtectionResponse rsp = ModifyCCHostProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCHostProtectionOutcome(rsp);
        else
            return ModifyCCHostProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyCCHostProtectionOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCHostProtectionAsync(const ModifyCCHostProtectionRequest& request, const ModifyCCHostProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCHostProtectionRequest&;
    using Resp = ModifyCCHostProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCHostProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCHostProtectionOutcomeCallable DayuClient::ModifyCCHostProtectionCallable(const ModifyCCHostProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCHostProtectionOutcome>>();
    ModifyCCHostProtectionAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCHostProtectionRequest&,
        ModifyCCHostProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCIpAllowDenyOutcome DayuClient::ModifyCCIpAllowDeny(const ModifyCCIpAllowDenyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCIpAllowDeny");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCIpAllowDenyResponse rsp = ModifyCCIpAllowDenyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCIpAllowDenyOutcome(rsp);
        else
            return ModifyCCIpAllowDenyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCIpAllowDenyOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCIpAllowDenyAsync(const ModifyCCIpAllowDenyRequest& request, const ModifyCCIpAllowDenyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCIpAllowDenyRequest&;
    using Resp = ModifyCCIpAllowDenyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCIpAllowDeny", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCIpAllowDenyOutcomeCallable DayuClient::ModifyCCIpAllowDenyCallable(const ModifyCCIpAllowDenyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCIpAllowDenyOutcome>>();
    ModifyCCIpAllowDenyAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCIpAllowDenyRequest&,
        ModifyCCIpAllowDenyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCLevelOutcome DayuClient::ModifyCCLevel(const ModifyCCLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCLevelResponse rsp = ModifyCCLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCLevelOutcome(rsp);
        else
            return ModifyCCLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyCCLevelOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCLevelAsync(const ModifyCCLevelRequest& request, const ModifyCCLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCLevelRequest&;
    using Resp = ModifyCCLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCLevelOutcomeCallable DayuClient::ModifyCCLevelCallable(const ModifyCCLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCLevelOutcome>>();
    ModifyCCLevelAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCLevelRequest&,
        ModifyCCLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCPolicySwitchOutcome DayuClient::ModifyCCPolicySwitch(const ModifyCCPolicySwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCPolicySwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCPolicySwitchResponse rsp = ModifyCCPolicySwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCPolicySwitchOutcome(rsp);
        else
            return ModifyCCPolicySwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyCCPolicySwitchOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCPolicySwitchAsync(const ModifyCCPolicySwitchRequest& request, const ModifyCCPolicySwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCPolicySwitchRequest&;
    using Resp = ModifyCCPolicySwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCPolicySwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCPolicySwitchOutcomeCallable DayuClient::ModifyCCPolicySwitchCallable(const ModifyCCPolicySwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCPolicySwitchOutcome>>();
    ModifyCCPolicySwitchAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCPolicySwitchRequest&,
        ModifyCCPolicySwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCSelfDefinePolicyOutcome DayuClient::ModifyCCSelfDefinePolicy(const ModifyCCSelfDefinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCSelfDefinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCSelfDefinePolicyResponse rsp = ModifyCCSelfDefinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCSelfDefinePolicyOutcome(rsp);
        else
            return ModifyCCSelfDefinePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCCSelfDefinePolicyOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCSelfDefinePolicyAsync(const ModifyCCSelfDefinePolicyRequest& request, const ModifyCCSelfDefinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCSelfDefinePolicyRequest&;
    using Resp = ModifyCCSelfDefinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCSelfDefinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCSelfDefinePolicyOutcomeCallable DayuClient::ModifyCCSelfDefinePolicyCallable(const ModifyCCSelfDefinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCSelfDefinePolicyOutcome>>();
    ModifyCCSelfDefinePolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCSelfDefinePolicyRequest&,
        ModifyCCSelfDefinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCThresholdOutcome DayuClient::ModifyCCThreshold(const ModifyCCThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCThresholdResponse rsp = ModifyCCThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCThresholdOutcome(rsp);
        else
            return ModifyCCThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyCCThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCThresholdAsync(const ModifyCCThresholdRequest& request, const ModifyCCThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCThresholdRequest&;
    using Resp = ModifyCCThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCThresholdOutcomeCallable DayuClient::ModifyCCThresholdCallable(const ModifyCCThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCThresholdOutcome>>();
    ModifyCCThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCThresholdRequest&,
        ModifyCCThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyCCUrlAllowOutcome DayuClient::ModifyCCUrlAllow(const ModifyCCUrlAllowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCCUrlAllow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCCUrlAllowResponse rsp = ModifyCCUrlAllowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCCUrlAllowOutcome(rsp);
        else
            return ModifyCCUrlAllowOutcome(o.GetError());
    }
    else
    {
        return ModifyCCUrlAllowOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyCCUrlAllowAsync(const ModifyCCUrlAllowRequest& request, const ModifyCCUrlAllowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCCUrlAllowRequest&;
    using Resp = ModifyCCUrlAllowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCCUrlAllow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyCCUrlAllowOutcomeCallable DayuClient::ModifyCCUrlAllowCallable(const ModifyCCUrlAllowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCCUrlAllowOutcome>>();
    ModifyCCUrlAllowAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyCCUrlAllowRequest&,
        ModifyCCUrlAllowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSAIStatusOutcome DayuClient::ModifyDDoSAIStatus(const ModifyDDoSAIStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSAIStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSAIStatusResponse rsp = ModifyDDoSAIStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSAIStatusOutcome(rsp);
        else
            return ModifyDDoSAIStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSAIStatusOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSAIStatusAsync(const ModifyDDoSAIStatusRequest& request, const ModifyDDoSAIStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSAIStatusRequest&;
    using Resp = ModifyDDoSAIStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSAIStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSAIStatusOutcomeCallable DayuClient::ModifyDDoSAIStatusCallable(const ModifyDDoSAIStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSAIStatusOutcome>>();
    ModifyDDoSAIStatusAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSAIStatusRequest&,
        ModifyDDoSAIStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSAlarmThresholdOutcome DayuClient::ModifyDDoSAlarmThreshold(const ModifyDDoSAlarmThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSAlarmThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSAlarmThresholdResponse rsp = ModifyDDoSAlarmThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSAlarmThresholdOutcome(rsp);
        else
            return ModifyDDoSAlarmThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSAlarmThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSAlarmThresholdAsync(const ModifyDDoSAlarmThresholdRequest& request, const ModifyDDoSAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSAlarmThresholdRequest&;
    using Resp = ModifyDDoSAlarmThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSAlarmThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSAlarmThresholdOutcomeCallable DayuClient::ModifyDDoSAlarmThresholdCallable(const ModifyDDoSAlarmThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSAlarmThresholdOutcome>>();
    ModifyDDoSAlarmThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSAlarmThresholdRequest&,
        ModifyDDoSAlarmThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSDefendStatusOutcome DayuClient::ModifyDDoSDefendStatus(const ModifyDDoSDefendStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSDefendStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSDefendStatusResponse rsp = ModifyDDoSDefendStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSDefendStatusOutcome(rsp);
        else
            return ModifyDDoSDefendStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSDefendStatusOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSDefendStatusAsync(const ModifyDDoSDefendStatusRequest& request, const ModifyDDoSDefendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSDefendStatusRequest&;
    using Resp = ModifyDDoSDefendStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSDefendStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSDefendStatusOutcomeCallable DayuClient::ModifyDDoSDefendStatusCallable(const ModifyDDoSDefendStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSDefendStatusOutcome>>();
    ModifyDDoSDefendStatusAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSDefendStatusRequest&,
        ModifyDDoSDefendStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSLevelOutcome DayuClient::ModifyDDoSLevel(const ModifyDDoSLevelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSLevel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSLevelResponse rsp = ModifyDDoSLevelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSLevelOutcome(rsp);
        else
            return ModifyDDoSLevelOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSLevelOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSLevelAsync(const ModifyDDoSLevelRequest& request, const ModifyDDoSLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSLevelRequest&;
    using Resp = ModifyDDoSLevelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSLevel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSLevelOutcomeCallable DayuClient::ModifyDDoSLevelCallable(const ModifyDDoSLevelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSLevelOutcome>>();
    ModifyDDoSLevelAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSLevelRequest&,
        ModifyDDoSLevelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSPolicyOutcome DayuClient::ModifyDDoSPolicy(const ModifyDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyResponse rsp = ModifyDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyOutcome(rsp);
        else
            return ModifyDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSPolicyAsync(const ModifyDDoSPolicyRequest& request, const ModifyDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSPolicyRequest&;
    using Resp = ModifyDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSPolicyOutcomeCallable DayuClient::ModifyDDoSPolicyCallable(const ModifyDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSPolicyOutcome>>();
    ModifyDDoSPolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSPolicyRequest&,
        ModifyDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSPolicyCaseOutcome DayuClient::ModifyDDoSPolicyCase(const ModifyDDoSPolicyCaseRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicyCase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyCaseResponse rsp = ModifyDDoSPolicyCaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyCaseOutcome(rsp);
        else
            return ModifyDDoSPolicyCaseOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyCaseOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSPolicyCaseAsync(const ModifyDDoSPolicyCaseRequest& request, const ModifyDDoSPolicyCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSPolicyCaseRequest&;
    using Resp = ModifyDDoSPolicyCaseResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSPolicyCase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSPolicyCaseOutcomeCallable DayuClient::ModifyDDoSPolicyCaseCallable(const ModifyDDoSPolicyCaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSPolicyCaseOutcome>>();
    ModifyDDoSPolicyCaseAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSPolicyCaseRequest&,
        ModifyDDoSPolicyCaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSPolicyNameOutcome DayuClient::ModifyDDoSPolicyName(const ModifyDDoSPolicyNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicyName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyNameResponse rsp = ModifyDDoSPolicyNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyNameOutcome(rsp);
        else
            return ModifyDDoSPolicyNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyNameOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSPolicyNameAsync(const ModifyDDoSPolicyNameRequest& request, const ModifyDDoSPolicyNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSPolicyNameRequest&;
    using Resp = ModifyDDoSPolicyNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSPolicyName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSPolicyNameOutcomeCallable DayuClient::ModifyDDoSPolicyNameCallable(const ModifyDDoSPolicyNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSPolicyNameOutcome>>();
    ModifyDDoSPolicyNameAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSPolicyNameRequest&,
        ModifyDDoSPolicyNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSSwitchOutcome DayuClient::ModifyDDoSSwitch(const ModifyDDoSSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSSwitchResponse rsp = ModifyDDoSSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSSwitchOutcome(rsp);
        else
            return ModifyDDoSSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSSwitchOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSSwitchAsync(const ModifyDDoSSwitchRequest& request, const ModifyDDoSSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSSwitchRequest&;
    using Resp = ModifyDDoSSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSSwitchOutcomeCallable DayuClient::ModifyDDoSSwitchCallable(const ModifyDDoSSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSSwitchOutcome>>();
    ModifyDDoSSwitchAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSSwitchRequest&,
        ModifyDDoSSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSThresholdOutcome DayuClient::ModifyDDoSThreshold(const ModifyDDoSThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSThresholdResponse rsp = ModifyDDoSThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSThresholdOutcome(rsp);
        else
            return ModifyDDoSThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSThresholdOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSThresholdAsync(const ModifyDDoSThresholdRequest& request, const ModifyDDoSThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSThresholdRequest&;
    using Resp = ModifyDDoSThresholdResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSThreshold", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSThresholdOutcomeCallable DayuClient::ModifyDDoSThresholdCallable(const ModifyDDoSThresholdRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSThresholdOutcome>>();
    ModifyDDoSThresholdAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSThresholdRequest&,
        ModifyDDoSThresholdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyDDoSWaterKeyOutcome DayuClient::ModifyDDoSWaterKey(const ModifyDDoSWaterKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSWaterKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSWaterKeyResponse rsp = ModifyDDoSWaterKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSWaterKeyOutcome(rsp);
        else
            return ModifyDDoSWaterKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSWaterKeyOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyDDoSWaterKeyAsync(const ModifyDDoSWaterKeyRequest& request, const ModifyDDoSWaterKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSWaterKeyRequest&;
    using Resp = ModifyDDoSWaterKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSWaterKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyDDoSWaterKeyOutcomeCallable DayuClient::ModifyDDoSWaterKeyCallable(const ModifyDDoSWaterKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSWaterKeyOutcome>>();
    ModifyDDoSWaterKeyAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyDDoSWaterKeyRequest&,
        ModifyDDoSWaterKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyElasticLimitOutcome DayuClient::ModifyElasticLimit(const ModifyElasticLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyElasticLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyElasticLimitResponse rsp = ModifyElasticLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyElasticLimitOutcome(rsp);
        else
            return ModifyElasticLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyElasticLimitOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyElasticLimitAsync(const ModifyElasticLimitRequest& request, const ModifyElasticLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyElasticLimitRequest&;
    using Resp = ModifyElasticLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyElasticLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyElasticLimitOutcomeCallable DayuClient::ModifyElasticLimitCallable(const ModifyElasticLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyElasticLimitOutcome>>();
    ModifyElasticLimitAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyElasticLimitRequest&,
        ModifyElasticLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyL4HealthOutcome DayuClient::ModifyL4Health(const ModifyL4HealthRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4Health");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4HealthResponse rsp = ModifyL4HealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4HealthOutcome(rsp);
        else
            return ModifyL4HealthOutcome(o.GetError());
    }
    else
    {
        return ModifyL4HealthOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyL4HealthAsync(const ModifyL4HealthRequest& request, const ModifyL4HealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyL4HealthRequest&;
    using Resp = ModifyL4HealthResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4Health", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyL4HealthOutcomeCallable DayuClient::ModifyL4HealthCallable(const ModifyL4HealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4HealthOutcome>>();
    ModifyL4HealthAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyL4HealthRequest&,
        ModifyL4HealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyL4KeepTimeOutcome DayuClient::ModifyL4KeepTime(const ModifyL4KeepTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4KeepTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4KeepTimeResponse rsp = ModifyL4KeepTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4KeepTimeOutcome(rsp);
        else
            return ModifyL4KeepTimeOutcome(o.GetError());
    }
    else
    {
        return ModifyL4KeepTimeOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyL4KeepTimeAsync(const ModifyL4KeepTimeRequest& request, const ModifyL4KeepTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyL4KeepTimeRequest&;
    using Resp = ModifyL4KeepTimeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4KeepTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyL4KeepTimeOutcomeCallable DayuClient::ModifyL4KeepTimeCallable(const ModifyL4KeepTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4KeepTimeOutcome>>();
    ModifyL4KeepTimeAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyL4KeepTimeRequest&,
        ModifyL4KeepTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyL4RulesOutcome DayuClient::ModifyL4Rules(const ModifyL4RulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4RulesResponse rsp = ModifyL4RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4RulesOutcome(rsp);
        else
            return ModifyL4RulesOutcome(o.GetError());
    }
    else
    {
        return ModifyL4RulesOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyL4RulesAsync(const ModifyL4RulesRequest& request, const ModifyL4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyL4RulesRequest&;
    using Resp = ModifyL4RulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyL4RulesOutcomeCallable DayuClient::ModifyL4RulesCallable(const ModifyL4RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4RulesOutcome>>();
    ModifyL4RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyL4RulesRequest&,
        ModifyL4RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyL7RulesOutcome DayuClient::ModifyL7Rules(const ModifyL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7RulesResponse rsp = ModifyL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7RulesOutcome(rsp);
        else
            return ModifyL7RulesOutcome(o.GetError());
    }
    else
    {
        return ModifyL7RulesOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyL7RulesAsync(const ModifyL7RulesRequest& request, const ModifyL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyL7RulesRequest&;
    using Resp = ModifyL7RulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL7Rules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyL7RulesOutcomeCallable DayuClient::ModifyL7RulesCallable(const ModifyL7RulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL7RulesOutcome>>();
    ModifyL7RulesAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyL7RulesRequest&,
        ModifyL7RulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyNetReturnSwitchOutcome DayuClient::ModifyNetReturnSwitch(const ModifyNetReturnSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetReturnSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetReturnSwitchResponse rsp = ModifyNetReturnSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetReturnSwitchOutcome(rsp);
        else
            return ModifyNetReturnSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyNetReturnSwitchOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyNetReturnSwitchAsync(const ModifyNetReturnSwitchRequest& request, const ModifyNetReturnSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetReturnSwitchRequest&;
    using Resp = ModifyNetReturnSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetReturnSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyNetReturnSwitchOutcomeCallable DayuClient::ModifyNetReturnSwitchCallable(const ModifyNetReturnSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetReturnSwitchOutcome>>();
    ModifyNetReturnSwitchAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyNetReturnSwitchRequest&,
        ModifyNetReturnSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyNewDomainRulesOutcome DayuClient::ModifyNewDomainRules(const ModifyNewDomainRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNewDomainRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNewDomainRulesResponse rsp = ModifyNewDomainRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNewDomainRulesOutcome(rsp);
        else
            return ModifyNewDomainRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyNewDomainRulesOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyNewDomainRulesAsync(const ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNewDomainRulesRequest&;
    using Resp = ModifyNewDomainRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNewDomainRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyNewDomainRulesOutcomeCallable DayuClient::ModifyNewDomainRulesCallable(const ModifyNewDomainRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNewDomainRulesOutcome>>();
    ModifyNewDomainRulesAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyNewDomainRulesRequest&,
        ModifyNewDomainRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyNewL4RuleOutcome DayuClient::ModifyNewL4Rule(const ModifyNewL4RuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNewL4Rule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNewL4RuleResponse rsp = ModifyNewL4RuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNewL4RuleOutcome(rsp);
        else
            return ModifyNewL4RuleOutcome(o.GetError());
    }
    else
    {
        return ModifyNewL4RuleOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyNewL4RuleAsync(const ModifyNewL4RuleRequest& request, const ModifyNewL4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNewL4RuleRequest&;
    using Resp = ModifyNewL4RuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNewL4Rule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyNewL4RuleOutcomeCallable DayuClient::ModifyNewL4RuleCallable(const ModifyNewL4RuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNewL4RuleOutcome>>();
    ModifyNewL4RuleAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyNewL4RuleRequest&,
        ModifyNewL4RuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyResBindDDoSPolicyOutcome DayuClient::ModifyResBindDDoSPolicy(const ModifyResBindDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResBindDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResBindDDoSPolicyResponse rsp = ModifyResBindDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResBindDDoSPolicyOutcome(rsp);
        else
            return ModifyResBindDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyResBindDDoSPolicyOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyResBindDDoSPolicyAsync(const ModifyResBindDDoSPolicyRequest& request, const ModifyResBindDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResBindDDoSPolicyRequest&;
    using Resp = ModifyResBindDDoSPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResBindDDoSPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyResBindDDoSPolicyOutcomeCallable DayuClient::ModifyResBindDDoSPolicyCallable(const ModifyResBindDDoSPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResBindDDoSPolicyOutcome>>();
    ModifyResBindDDoSPolicyAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyResBindDDoSPolicyRequest&,
        ModifyResBindDDoSPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DayuClient::ModifyResourceRenewFlagOutcome DayuClient::ModifyResourceRenewFlag(const ModifyResourceRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceRenewFlagResponse rsp = ModifyResourceRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceRenewFlagOutcome(rsp);
        else
            return ModifyResourceRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceRenewFlagOutcome(outcome.GetError());
    }
}

void DayuClient::ModifyResourceRenewFlagAsync(const ModifyResourceRenewFlagRequest& request, const ModifyResourceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceRenewFlagRequest&;
    using Resp = ModifyResourceRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DayuClient::ModifyResourceRenewFlagOutcomeCallable DayuClient::ModifyResourceRenewFlagCallable(const ModifyResourceRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceRenewFlagOutcome>>();
    ModifyResourceRenewFlagAsync(
    request,
    [prom](
        const DayuClient*,
        const ModifyResourceRenewFlagRequest&,
        ModifyResourceRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

