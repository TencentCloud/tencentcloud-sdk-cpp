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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBasicDDoSAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateBasicDDoSAlarmThresholdOutcomeCallable DayuClient::CreateBasicDDoSAlarmThresholdCallable(const CreateBasicDDoSAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBasicDDoSAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->CreateBasicDDoSAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBoundIP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateBoundIPOutcomeCallable DayuClient::CreateBoundIPCallable(const CreateBoundIPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBoundIPOutcome()>>(
        [this, request]()
        {
            return this->CreateBoundIP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCFrequencyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateCCFrequencyRulesOutcomeCallable DayuClient::CreateCCFrequencyRulesCallable(const CreateCCFrequencyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCFrequencyRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateCCFrequencyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCCSelfDefinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateCCSelfDefinePolicyOutcomeCallable DayuClient::CreateCCSelfDefinePolicyCallable(const CreateCCSelfDefinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCCSelfDefinePolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateCCSelfDefinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateDDoSPolicyOutcomeCallable DayuClient::CreateDDoSPolicyCallable(const CreateDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDDoSPolicyCase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateDDoSPolicyCaseOutcomeCallable DayuClient::CreateDDoSPolicyCaseCallable(const CreateDDoSPolicyCaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDDoSPolicyCaseOutcome()>>(
        [this, request]()
        {
            return this->CreateDDoSPolicyCase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstanceName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateInstanceNameOutcomeCallable DayuClient::CreateInstanceNameCallable(const CreateInstanceNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceNameOutcome()>>(
        [this, request]()
        {
            return this->CreateInstanceName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL4HealthConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL4HealthConfigOutcomeCallable DayuClient::CreateL4HealthConfigCallable(const CreateL4HealthConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL4HealthConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateL4HealthConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL4RulesOutcomeCallable DayuClient::CreateL4RulesCallable(const CreateL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL4RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7CCRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL7CCRuleOutcomeCallable DayuClient::CreateL7CCRuleCallable(const CreateL7CCRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7CCRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateL7CCRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7HealthConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL7HealthConfigOutcomeCallable DayuClient::CreateL7HealthConfigCallable(const CreateL7HealthConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7HealthConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateL7HealthConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7RuleCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL7RuleCertOutcomeCallable DayuClient::CreateL7RuleCertCallable(const CreateL7RuleCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7RuleCertOutcome()>>(
        [this, request]()
        {
            return this->CreateL7RuleCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL7RulesOutcomeCallable DayuClient::CreateL7RulesCallable(const CreateL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7RulesUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateL7RulesUploadOutcomeCallable DayuClient::CreateL7RulesUploadCallable(const CreateL7RulesUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7RulesUploadOutcome()>>(
        [this, request]()
        {
            return this->CreateL7RulesUpload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNetReturn(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateNetReturnOutcomeCallable DayuClient::CreateNetReturnCallable(const CreateNetReturnRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNetReturnOutcome()>>(
        [this, request]()
        {
            return this->CreateNetReturn(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNewL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateNewL4RulesOutcomeCallable DayuClient::CreateNewL4RulesCallable(const CreateNewL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNewL4RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateNewL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNewL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateNewL7RulesOutcomeCallable DayuClient::CreateNewL7RulesCallable(const CreateNewL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNewL7RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateNewL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNewL7RulesUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateNewL7RulesUploadOutcomeCallable DayuClient::CreateNewL7RulesUploadCallable(const CreateNewL7RulesUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNewL7RulesUploadOutcome()>>(
        [this, request]()
        {
            return this->CreateNewL7RulesUpload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUnblockIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::CreateUnblockIpOutcomeCallable DayuClient::CreateUnblockIpCallable(const CreateUnblockIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUnblockIpOutcome()>>(
        [this, request]()
        {
            return this->CreateUnblockIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCFrequencyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteCCFrequencyRulesOutcomeCallable DayuClient::DeleteCCFrequencyRulesCallable(const DeleteCCFrequencyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCFrequencyRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCFrequencyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCCSelfDefinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteCCSelfDefinePolicyOutcomeCallable DayuClient::DeleteCCSelfDefinePolicyCallable(const DeleteCCSelfDefinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCCSelfDefinePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteCCSelfDefinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteDDoSPolicyOutcomeCallable DayuClient::DeleteDDoSPolicyCallable(const DeleteDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDDoSPolicyCase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteDDoSPolicyCaseOutcomeCallable DayuClient::DeleteDDoSPolicyCaseCallable(const DeleteDDoSPolicyCaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDDoSPolicyCaseOutcome()>>(
        [this, request]()
        {
            return this->DeleteDDoSPolicyCase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteL4RulesOutcomeCallable DayuClient::DeleteL4RulesCallable(const DeleteL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL4RulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteL7RulesOutcomeCallable DayuClient::DeleteL7RulesCallable(const DeleteL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNewL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteNewL4RulesOutcomeCallable DayuClient::DeleteNewL4RulesCallable(const DeleteNewL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNewL4RulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteNewL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNewL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DeleteNewL7RulesOutcomeCallable DayuClient::DeleteNewL7RulesCallable(const DeleteNewL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNewL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteNewL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeActionLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeActionLogOutcomeCallable DayuClient::DescribeActionLogCallable(const DescribeActionLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeActionLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeActionLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBGPIPL7RuleMaxCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBGPIPL7RuleMaxCntOutcomeCallable DayuClient::DescribeBGPIPL7RuleMaxCntCallable(const DescribeBGPIPL7RuleMaxCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBGPIPL7RuleMaxCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeBGPIPL7RuleMaxCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBaradData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBaradDataOutcomeCallable DayuClient::DescribeBaradDataCallable(const DescribeBaradDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBaradDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBaradData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicCCThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBasicCCThresholdOutcomeCallable DayuClient::DescribeBasicCCThresholdCallable(const DescribeBasicCCThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicCCThresholdOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicCCThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBasicDeviceThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBasicDeviceThresholdOutcomeCallable DayuClient::DescribeBasicDeviceThresholdCallable(const DescribeBasicDeviceThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBasicDeviceThresholdOutcome()>>(
        [this, request]()
        {
            return this->DescribeBasicDeviceThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizHttpStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBizHttpStatusOutcomeCallable DayuClient::DescribeBizHttpStatusCallable(const DescribeBizHttpStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizHttpStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizHttpStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBizTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeBizTrendOutcomeCallable DayuClient::DescribeBizTrendCallable(const DescribeBizTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBizTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeBizTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCAlarmThresholdOutcomeCallable DayuClient::DescribeCCAlarmThresholdCallable(const DescribeCCAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCEvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCEvListOutcomeCallable DayuClient::DescribeCCEvListCallable(const DescribeCCEvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCEvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCEvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCFrequencyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCFrequencyRulesOutcomeCallable DayuClient::DescribeCCFrequencyRulesCallable(const DescribeCCFrequencyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCFrequencyRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCFrequencyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCIpAllowDeny(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCIpAllowDenyOutcomeCallable DayuClient::DescribeCCIpAllowDenyCallable(const DescribeCCIpAllowDenyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCIpAllowDenyOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCIpAllowDeny(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCSelfDefinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCSelfDefinePolicyOutcomeCallable DayuClient::DescribeCCSelfDefinePolicyCallable(const DescribeCCSelfDefinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCSelfDefinePolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCSelfDefinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCTrendOutcomeCallable DayuClient::DescribeCCTrendCallable(const DescribeCCTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCCUrlAllow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeCCUrlAllowOutcomeCallable DayuClient::DescribeCCUrlAllowCallable(const DescribeCCUrlAllowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCCUrlAllowOutcome()>>(
        [this, request]()
        {
            return this->DescribeCCUrlAllow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSAlarmThresholdOutcomeCallable DayuClient::DescribeDDoSAlarmThresholdCallable(const DescribeDDoSAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackIPRegionMap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSAttackIPRegionMapOutcomeCallable DayuClient::DescribeDDoSAttackIPRegionMapCallable(const DescribeDDoSAttackIPRegionMapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackIPRegionMapOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackIPRegionMap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackSource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSAttackSourceOutcomeCallable DayuClient::DescribeDDoSAttackSourceCallable(const DescribeDDoSAttackSourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackSourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackSource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSCountOutcomeCallable DayuClient::DescribeDDoSCountCallable(const DescribeDDoSCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSDefendStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSDefendStatusOutcomeCallable DayuClient::DescribeDDoSDefendStatusCallable(const DescribeDDoSDefendStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSDefendStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSDefendStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSEvInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSEvInfoOutcomeCallable DayuClient::DescribeDDoSEvInfoCallable(const DescribeDDoSEvInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSEvInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSEvInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSEvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSEvListOutcomeCallable DayuClient::DescribeDDoSEvListCallable(const DescribeDDoSEvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSEvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSEvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSIpLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSIpLogOutcomeCallable DayuClient::DescribeDDoSIpLogCallable(const DescribeDDoSIpLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSIpLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSIpLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSNetCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSNetCountOutcomeCallable DayuClient::DescribeDDoSNetCountCallable(const DescribeDDoSNetCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSNetCountOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSNetCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSNetEvInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSNetEvInfoOutcomeCallable DayuClient::DescribeDDoSNetEvInfoCallable(const DescribeDDoSNetEvInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSNetEvInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSNetEvInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSNetEvList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSNetEvListOutcomeCallable DayuClient::DescribeDDoSNetEvListCallable(const DescribeDDoSNetEvListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSNetEvListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSNetEvList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSNetIpLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSNetIpLogOutcomeCallable DayuClient::DescribeDDoSNetIpLogCallable(const DescribeDDoSNetIpLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSNetIpLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSNetIpLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSNetTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSNetTrendOutcomeCallable DayuClient::DescribeDDoSNetTrendCallable(const DescribeDDoSNetTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSNetTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSNetTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSPolicyOutcomeCallable DayuClient::DescribeDDoSPolicyCallable(const DescribeDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSTrend(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSTrendOutcomeCallable DayuClient::DescribeDDoSTrendCallable(const DescribeDDoSTrendRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSTrendOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSTrend(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSUsedStatis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeDDoSUsedStatisOutcomeCallable DayuClient::DescribeDDoSUsedStatisCallable(const DescribeDDoSUsedStatisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSUsedStatisOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSUsedStatis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPProductInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeIPProductInfoOutcomeCallable DayuClient::DescribeIPProductInfoCallable(const DescribeIPProductInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPProductInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPProductInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInsurePacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeInsurePacksOutcomeCallable DayuClient::DescribeInsurePacksCallable(const DescribeInsurePacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInsurePacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeInsurePacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeIpBlockListOutcomeCallable DayuClient::DescribeIpBlockListCallable(const DescribeIpBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpBlockListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpUnBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeIpUnBlockListOutcomeCallable DayuClient::DescribeIpUnBlockListCallable(const DescribeIpUnBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpUnBlockListOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpUnBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4HealthConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeL4HealthConfigOutcomeCallable DayuClient::DescribeL4HealthConfigCallable(const DescribeL4HealthConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4HealthConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4HealthConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4RulesErrHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeL4RulesErrHealthOutcomeCallable DayuClient::DescribeL4RulesErrHealthCallable(const DescribeL4RulesErrHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4RulesErrHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4RulesErrHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7HealthConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeL7HealthConfigOutcomeCallable DayuClient::DescribeL7HealthConfigCallable(const DescribeL7HealthConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7HealthConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7HealthConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeNewL4RulesOutcomeCallable DayuClient::DescribeNewL4RulesCallable(const DescribeNewL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewL4RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewL4RulesErrHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeNewL4RulesErrHealthOutcomeCallable DayuClient::DescribeNewL4RulesErrHealthCallable(const DescribeNewL4RulesErrHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewL4RulesErrHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewL4RulesErrHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewL7RulesErrHealth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeNewL7RulesErrHealthOutcomeCallable DayuClient::DescribeNewL7RulesErrHealthCallable(const DescribeNewL7RulesErrHealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewL7RulesErrHealthOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewL7RulesErrHealth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribePackIndexOutcomeCallable DayuClient::DescribePackIndexCallable(const DescribePackIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribePackIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePcap(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribePcapOutcomeCallable DayuClient::DescribePcapCallable(const DescribePcapRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePcapOutcome()>>(
        [this, request]()
        {
            return this->DescribePcap(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePolicyCase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribePolicyCaseOutcomeCallable DayuClient::DescribePolicyCaseCallable(const DescribePolicyCaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePolicyCaseOutcome()>>(
        [this, request]()
        {
            return this->DescribePolicyCase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeResIpListOutcomeCallable DayuClient::DescribeResIpListCallable(const DescribeResIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeResIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeResourceListOutcomeCallable DayuClient::DescribeResourceListCallable(const DescribeResourceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleSets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeRuleSetsOutcomeCallable DayuClient::DescribeRuleSetsCallable(const DescribeRuleSetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleSetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleSets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedulingDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeSchedulingDomainListOutcomeCallable DayuClient::DescribeSchedulingDomainListCallable(const DescribeSchedulingDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulingDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedulingDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeSecIndexOutcomeCallable DayuClient::DescribeSecIndexCallable(const DescribeSecIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecIndexOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSourceIpSegment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeSourceIpSegmentOutcomeCallable DayuClient::DescribeSourceIpSegmentCallable(const DescribeSourceIpSegmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSourceIpSegmentOutcome()>>(
        [this, request]()
        {
            return this->DescribeSourceIpSegment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTransmitStatis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeTransmitStatisOutcomeCallable DayuClient::DescribeTransmitStatisCallable(const DescribeTransmitStatisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTransmitStatisOutcome()>>(
        [this, request]()
        {
            return this->DescribeTransmitStatis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnBlockStatis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribeUnBlockStatisOutcomeCallable DayuClient::DescribeUnBlockStatisCallable(const DescribeUnBlockStatisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnBlockStatisOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnBlockStatis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribleL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribleL4RulesOutcomeCallable DayuClient::DescribleL4RulesCallable(const DescribleL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribleL4RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribleL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribleL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribleL7RulesOutcomeCallable DayuClient::DescribleL7RulesCallable(const DescribleL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribleL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribleL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribleNewL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribleNewL7RulesOutcomeCallable DayuClient::DescribleNewL7RulesCallable(const DescribleNewL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribleNewL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribleNewL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribleRegionCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::DescribleRegionCountOutcomeCallable DayuClient::DescribleRegionCountCallable(const DescribleRegionCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribleRegionCountOutcome()>>(
        [this, request]()
        {
            return this->DescribleRegionCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCAlarmThresholdOutcomeCallable DayuClient::ModifyCCAlarmThresholdCallable(const ModifyCCAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCFrequencyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCFrequencyRulesOutcomeCallable DayuClient::ModifyCCFrequencyRulesCallable(const ModifyCCFrequencyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCFrequencyRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCFrequencyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCFrequencyRulesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCFrequencyRulesStatusOutcomeCallable DayuClient::ModifyCCFrequencyRulesStatusCallable(const ModifyCCFrequencyRulesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCFrequencyRulesStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCFrequencyRulesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCHostProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCHostProtectionOutcomeCallable DayuClient::ModifyCCHostProtectionCallable(const ModifyCCHostProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCHostProtectionOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCHostProtection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCIpAllowDeny(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCIpAllowDenyOutcomeCallable DayuClient::ModifyCCIpAllowDenyCallable(const ModifyCCIpAllowDenyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCIpAllowDenyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCIpAllowDeny(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCLevelOutcomeCallable DayuClient::ModifyCCLevelCallable(const ModifyCCLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCPolicySwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCPolicySwitchOutcomeCallable DayuClient::ModifyCCPolicySwitchCallable(const ModifyCCPolicySwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCPolicySwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCPolicySwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCSelfDefinePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCSelfDefinePolicyOutcomeCallable DayuClient::ModifyCCSelfDefinePolicyCallable(const ModifyCCSelfDefinePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCSelfDefinePolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCSelfDefinePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCThresholdOutcomeCallable DayuClient::ModifyCCThresholdCallable(const ModifyCCThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCCUrlAllow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyCCUrlAllowOutcomeCallable DayuClient::ModifyCCUrlAllowCallable(const ModifyCCUrlAllowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCCUrlAllowOutcome()>>(
        [this, request]()
        {
            return this->ModifyCCUrlAllow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSAIStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSAIStatusOutcomeCallable DayuClient::ModifyDDoSAIStatusCallable(const ModifyDDoSAIStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSAIStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSAIStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSAlarmThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSAlarmThresholdOutcomeCallable DayuClient::ModifyDDoSAlarmThresholdCallable(const ModifyDDoSAlarmThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSAlarmThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSAlarmThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSDefendStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSDefendStatusOutcomeCallable DayuClient::ModifyDDoSDefendStatusCallable(const ModifyDDoSDefendStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSDefendStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSDefendStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSLevel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSLevelOutcomeCallable DayuClient::ModifyDDoSLevelCallable(const ModifyDDoSLevelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSLevelOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSLevel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSPolicyOutcomeCallable DayuClient::ModifyDDoSPolicyCallable(const ModifyDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSPolicyCase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSPolicyCaseOutcomeCallable DayuClient::ModifyDDoSPolicyCaseCallable(const ModifyDDoSPolicyCaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSPolicyCaseOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSPolicyCase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSPolicyName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSPolicyNameOutcomeCallable DayuClient::ModifyDDoSPolicyNameCallable(const ModifyDDoSPolicyNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSPolicyNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSPolicyName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSSwitchOutcomeCallable DayuClient::ModifyDDoSSwitchCallable(const ModifyDDoSSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSThresholdOutcomeCallable DayuClient::ModifyDDoSThresholdCallable(const ModifyDDoSThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSWaterKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyDDoSWaterKeyOutcomeCallable DayuClient::ModifyDDoSWaterKeyCallable(const ModifyDDoSWaterKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSWaterKeyOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSWaterKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyElasticLimit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyElasticLimitOutcomeCallable DayuClient::ModifyElasticLimitCallable(const ModifyElasticLimitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyElasticLimitOutcome()>>(
        [this, request]()
        {
            return this->ModifyElasticLimit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4Health(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyL4HealthOutcomeCallable DayuClient::ModifyL4HealthCallable(const ModifyL4HealthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4HealthOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4Health(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4KeepTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyL4KeepTimeOutcomeCallable DayuClient::ModifyL4KeepTimeCallable(const ModifyL4KeepTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4KeepTimeOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4KeepTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyL4RulesOutcomeCallable DayuClient::ModifyL4RulesCallable(const ModifyL4RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4RulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyL7RulesOutcomeCallable DayuClient::ModifyL7RulesCallable(const ModifyL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7RulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNetReturnSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyNetReturnSwitchOutcomeCallable DayuClient::ModifyNetReturnSwitchCallable(const ModifyNetReturnSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNetReturnSwitchOutcome()>>(
        [this, request]()
        {
            return this->ModifyNetReturnSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNewDomainRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyNewDomainRulesOutcomeCallable DayuClient::ModifyNewDomainRulesCallable(const ModifyNewDomainRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNewDomainRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyNewDomainRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNewL4Rule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyNewL4RuleOutcomeCallable DayuClient::ModifyNewL4RuleCallable(const ModifyNewL4RuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNewL4RuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyNewL4Rule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResBindDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyResBindDDoSPolicyOutcomeCallable DayuClient::ModifyResBindDDoSPolicyCallable(const ModifyResBindDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResBindDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyResBindDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DayuClient::ModifyResourceRenewFlagOutcomeCallable DayuClient::ModifyResourceRenewFlagCallable(const ModifyResourceRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

