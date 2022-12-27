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

#include <tencentcloud/teo/v20220901/TeoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Teo::V20220901;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-01";
    const string ENDPOINT = "teo.tencentcloudapi.com";
}

TeoClient::TeoClient(const Credential &credential, const string &region) :
    TeoClient(credential, region, ClientProfile())
{
}

TeoClient::TeoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TeoClient::BindZoneToPlanOutcome TeoClient::BindZoneToPlan(const BindZoneToPlanRequest &request)
{
    auto outcome = MakeRequest(request, "BindZoneToPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindZoneToPlanResponse rsp = BindZoneToPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindZoneToPlanOutcome(rsp);
        else
            return BindZoneToPlanOutcome(o.GetError());
    }
    else
    {
        return BindZoneToPlanOutcome(outcome.GetError());
    }
}

void TeoClient::BindZoneToPlanAsync(const BindZoneToPlanRequest& request, const BindZoneToPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindZoneToPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::BindZoneToPlanOutcomeCallable TeoClient::BindZoneToPlanCallable(const BindZoneToPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindZoneToPlanOutcome()>>(
        [this, request]()
        {
            return this->BindZoneToPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CheckCertificateOutcome TeoClient::CheckCertificate(const CheckCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateResponse rsp = CheckCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateOutcome(rsp);
        else
            return CheckCertificateOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::CheckCertificateAsync(const CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CheckCertificateOutcomeCallable TeoClient::CheckCertificateCallable(const CheckCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateAliasDomainOutcome TeoClient::CreateAliasDomain(const CreateAliasDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAliasDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAliasDomainResponse rsp = CreateAliasDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAliasDomainOutcome(rsp);
        else
            return CreateAliasDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAliasDomainOutcome(outcome.GetError());
    }
}

void TeoClient::CreateAliasDomainAsync(const CreateAliasDomainRequest& request, const CreateAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAliasDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateAliasDomainOutcomeCallable TeoClient::CreateAliasDomainCallable(const CreateAliasDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAliasDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateAliasDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateApplicationProxyOutcome TeoClient::CreateApplicationProxy(const CreateApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyResponse rsp = CreateApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyOutcome(rsp);
        else
            return CreateApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyAsync(const CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateApplicationProxyOutcomeCallable TeoClient::CreateApplicationProxyCallable(const CreateApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateApplicationProxyRuleOutcome TeoClient::CreateApplicationProxyRule(const CreateApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyRuleResponse rsp = CreateApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyRuleOutcome(rsp);
        else
            return CreateApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyRuleAsync(const CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateApplicationProxyRuleOutcomeCallable TeoClient::CreateApplicationProxyRuleCallable(const CreateApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateCredentialOutcome TeoClient::CreateCredential(const CreateCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCredentialResponse rsp = CreateCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCredentialOutcome(rsp);
        else
            return CreateCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateCredentialOutcome(outcome.GetError());
    }
}

void TeoClient::CreateCredentialAsync(const CreateCredentialRequest& request, const CreateCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateCredentialOutcomeCallable TeoClient::CreateCredentialCallable(const CreateCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCredentialOutcome()>>(
        [this, request]()
        {
            return this->CreateCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateCustomErrorPageOutcome TeoClient::CreateCustomErrorPage(const CreateCustomErrorPageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomErrorPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomErrorPageResponse rsp = CreateCustomErrorPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomErrorPageOutcome(rsp);
        else
            return CreateCustomErrorPageOutcome(o.GetError());
    }
    else
    {
        return CreateCustomErrorPageOutcome(outcome.GetError());
    }
}

void TeoClient::CreateCustomErrorPageAsync(const CreateCustomErrorPageRequest& request, const CreateCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomErrorPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateCustomErrorPageOutcomeCallable TeoClient::CreateCustomErrorPageCallable(const CreateCustomErrorPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomErrorPageOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomErrorPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateIpTableListOutcome TeoClient::CreateIpTableList(const CreateIpTableListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIpTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIpTableListResponse rsp = CreateIpTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIpTableListOutcome(rsp);
        else
            return CreateIpTableListOutcome(o.GetError());
    }
    else
    {
        return CreateIpTableListOutcome(outcome.GetError());
    }
}

void TeoClient::CreateIpTableListAsync(const CreateIpTableListRequest& request, const CreateIpTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateIpTableList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateIpTableListOutcomeCallable TeoClient::CreateIpTableListCallable(const CreateIpTableListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateIpTableListOutcome()>>(
        [this, request]()
        {
            return this->CreateIpTableList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLogSetOutcome TeoClient::CreateLogSet(const CreateLogSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogSetResponse rsp = CreateLogSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogSetOutcome(rsp);
        else
            return CreateLogSetOutcome(o.GetError());
    }
    else
    {
        return CreateLogSetOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLogSetAsync(const CreateLogSetRequest& request, const CreateLogSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLogSetOutcomeCallable TeoClient::CreateLogSetCallable(const CreateLogSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogSetOutcome()>>(
        [this, request]()
        {
            return this->CreateLogSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLogTopicTaskOutcome TeoClient::CreateLogTopicTask(const CreateLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogTopicTaskResponse rsp = CreateLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogTopicTaskOutcome(rsp);
        else
            return CreateLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLogTopicTaskAsync(const CreateLogTopicTaskRequest& request, const CreateLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLogTopicTaskOutcomeCallable TeoClient::CreateLogTopicTaskCallable(const CreateLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateOriginGroupOutcome TeoClient::CreateOriginGroup(const CreateOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOriginGroupResponse rsp = CreateOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOriginGroupOutcome(rsp);
        else
            return CreateOriginGroupOutcome(o.GetError());
    }
    else
    {
        return CreateOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::CreateOriginGroupAsync(const CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOriginGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateOriginGroupOutcomeCallable TeoClient::CreateOriginGroupCallable(const CreateOriginGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOriginGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateOriginGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePlanForZoneOutcome TeoClient::CreatePlanForZone(const CreatePlanForZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlanForZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePlanForZoneResponse rsp = CreatePlanForZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePlanForZoneOutcome(rsp);
        else
            return CreatePlanForZoneOutcome(o.GetError());
    }
    else
    {
        return CreatePlanForZoneOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePlanForZoneAsync(const CreatePlanForZoneRequest& request, const CreatePlanForZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePlanForZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePlanForZoneOutcomeCallable TeoClient::CreatePlanForZoneCallable(const CreatePlanForZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePlanForZoneOutcome()>>(
        [this, request]()
        {
            return this->CreatePlanForZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePrefetchTaskOutcome TeoClient::CreatePrefetchTask(const CreatePrefetchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrefetchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrefetchTaskResponse rsp = CreatePrefetchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrefetchTaskOutcome(rsp);
        else
            return CreatePrefetchTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePrefetchTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePrefetchTaskAsync(const CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrefetchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrefetchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePrefetchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePurgeTaskOutcome TeoClient::CreatePurgeTask(const CreatePurgeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePurgeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePurgeTaskResponse rsp = CreatePurgeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePurgeTaskOutcome(rsp);
        else
            return CreatePurgeTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePurgeTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePurgeTaskAsync(const CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePurgeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePurgeTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePurgeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateReplayTaskOutcome TeoClient::CreateReplayTask(const CreateReplayTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReplayTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReplayTaskResponse rsp = CreateReplayTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReplayTaskOutcome(rsp);
        else
            return CreateReplayTaskOutcome(o.GetError());
    }
    else
    {
        return CreateReplayTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreateReplayTaskAsync(const CreateReplayTaskRequest& request, const CreateReplayTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReplayTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateReplayTaskOutcomeCallable TeoClient::CreateReplayTaskCallable(const CreateReplayTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReplayTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateReplayTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateRuleOutcome TeoClient::CreateRule(const CreateRuleRequest &request)
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

void TeoClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateRuleOutcomeCallable TeoClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateSecurityDropPageOutcome TeoClient::CreateSecurityDropPage(const CreateSecurityDropPageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityDropPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityDropPageResponse rsp = CreateSecurityDropPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityDropPageOutcome(rsp);
        else
            return CreateSecurityDropPageOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityDropPageOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityDropPageAsync(const CreateSecurityDropPageRequest& request, const CreateSecurityDropPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityDropPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateSecurityDropPageOutcomeCallable TeoClient::CreateSecurityDropPageCallable(const CreateSecurityDropPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityDropPageOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityDropPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateSpeedTestingOutcome TeoClient::CreateSpeedTesting(const CreateSpeedTestingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSpeedTesting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSpeedTestingResponse rsp = CreateSpeedTestingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSpeedTestingOutcome(rsp);
        else
            return CreateSpeedTestingOutcome(o.GetError());
    }
    else
    {
        return CreateSpeedTestingOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSpeedTestingAsync(const CreateSpeedTestingRequest& request, const CreateSpeedTestingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSpeedTesting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateSpeedTestingOutcomeCallable TeoClient::CreateSpeedTestingCallable(const CreateSpeedTestingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSpeedTestingOutcome()>>(
        [this, request]()
        {
            return this->CreateSpeedTesting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateZoneOutcome TeoClient::CreateZone(const CreateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateZoneResponse rsp = CreateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateZoneOutcome(rsp);
        else
            return CreateZoneOutcome(o.GetError());
    }
    else
    {
        return CreateZoneOutcome(outcome.GetError());
    }
}

void TeoClient::CreateZoneAsync(const CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateZoneOutcomeCallable TeoClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateZoneOutcome()>>(
        [this, request]()
        {
            return this->CreateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteAliasDomainOutcome TeoClient::DeleteAliasDomain(const DeleteAliasDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAliasDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAliasDomainResponse rsp = DeleteAliasDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAliasDomainOutcome(rsp);
        else
            return DeleteAliasDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteAliasDomainOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteAliasDomainAsync(const DeleteAliasDomainRequest& request, const DeleteAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAliasDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteAliasDomainOutcomeCallable TeoClient::DeleteAliasDomainCallable(const DeleteAliasDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAliasDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteAliasDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteApplicationProxyOutcome TeoClient::DeleteApplicationProxy(const DeleteApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyResponse rsp = DeleteApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyOutcome(rsp);
        else
            return DeleteApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyAsync(const DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteApplicationProxyOutcomeCallable TeoClient::DeleteApplicationProxyCallable(const DeleteApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteApplicationProxyRuleOutcome TeoClient::DeleteApplicationProxyRule(const DeleteApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyRuleResponse rsp = DeleteApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyRuleOutcome(rsp);
        else
            return DeleteApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyRuleAsync(const DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteApplicationProxyRuleOutcomeCallable TeoClient::DeleteApplicationProxyRuleCallable(const DeleteApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteLogTopicTaskOutcome TeoClient::DeleteLogTopicTask(const DeleteLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogTopicTaskResponse rsp = DeleteLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogTopicTaskOutcome(rsp);
        else
            return DeleteLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteLogTopicTaskAsync(const DeleteLogTopicTaskRequest& request, const DeleteLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteLogTopicTaskOutcomeCallable TeoClient::DeleteLogTopicTaskCallable(const DeleteLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteOriginGroupOutcome TeoClient::DeleteOriginGroup(const DeleteOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOriginGroupResponse rsp = DeleteOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOriginGroupOutcome(rsp);
        else
            return DeleteOriginGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteOriginGroupAsync(const DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOriginGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteOriginGroupOutcomeCallable TeoClient::DeleteOriginGroupCallable(const DeleteOriginGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOriginGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteOriginGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteRulesOutcome TeoClient::DeleteRules(const DeleteRulesRequest &request)
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

void TeoClient::DeleteRulesAsync(const DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteRulesOutcomeCallable TeoClient::DeleteRulesCallable(const DeleteRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteZoneOutcome TeoClient::DeleteZone(const DeleteZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteZoneResponse rsp = DeleteZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteZoneOutcome(rsp);
        else
            return DeleteZoneOutcome(o.GetError());
    }
    else
    {
        return DeleteZoneOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteZoneAsync(const DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteZoneOutcomeCallable TeoClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteZoneOutcome()>>(
        [this, request]()
        {
            return this->DeleteZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAddableEntityListOutcome TeoClient::DescribeAddableEntityList(const DescribeAddableEntityListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddableEntityList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddableEntityListResponse rsp = DescribeAddableEntityListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddableEntityListOutcome(rsp);
        else
            return DescribeAddableEntityListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddableEntityListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAddableEntityListAsync(const DescribeAddableEntityListRequest& request, const DescribeAddableEntityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddableEntityList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAddableEntityListOutcomeCallable TeoClient::DescribeAddableEntityListCallable(const DescribeAddableEntityListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddableEntityListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddableEntityList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAliasDomainsOutcome TeoClient::DescribeAliasDomains(const DescribeAliasDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAliasDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAliasDomainsResponse rsp = DescribeAliasDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAliasDomainsOutcome(rsp);
        else
            return DescribeAliasDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAliasDomainsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAliasDomainsAsync(const DescribeAliasDomainsRequest& request, const DescribeAliasDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAliasDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAliasDomainsOutcomeCallable TeoClient::DescribeAliasDomainsCallable(const DescribeAliasDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAliasDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAliasDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeApplicationProxiesOutcome TeoClient::DescribeApplicationProxies(const DescribeApplicationProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProxiesResponse rsp = DescribeApplicationProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProxiesOutcome(rsp);
        else
            return DescribeApplicationProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProxiesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeApplicationProxiesAsync(const DescribeApplicationProxiesRequest& request, const DescribeApplicationProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeApplicationProxiesOutcomeCallable TeoClient::DescribeApplicationProxiesCallable(const DescribeApplicationProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationProxiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAvailablePlansOutcome TeoClient::DescribeAvailablePlans(const DescribeAvailablePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailablePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailablePlansResponse rsp = DescribeAvailablePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailablePlansOutcome(rsp);
        else
            return DescribeAvailablePlansOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailablePlansOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAvailablePlansAsync(const DescribeAvailablePlansRequest& request, const DescribeAvailablePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAvailablePlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAvailablePlansOutcomeCallable TeoClient::DescribeAvailablePlansCallable(const DescribeAvailablePlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAvailablePlansOutcome()>>(
        [this, request]()
        {
            return this->DescribeAvailablePlans(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotClientIpListOutcome TeoClient::DescribeBotClientIpList(const DescribeBotClientIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotClientIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotClientIpListResponse rsp = DescribeBotClientIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotClientIpListOutcome(rsp);
        else
            return DescribeBotClientIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeBotClientIpListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotClientIpListAsync(const DescribeBotClientIpListRequest& request, const DescribeBotClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotClientIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotClientIpListOutcomeCallable TeoClient::DescribeBotClientIpListCallable(const DescribeBotClientIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotClientIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotClientIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotDataOutcome TeoClient::DescribeBotData(const DescribeBotDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotDataResponse rsp = DescribeBotDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotDataOutcome(rsp);
        else
            return DescribeBotDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBotDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotDataAsync(const DescribeBotDataRequest& request, const DescribeBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotDataOutcomeCallable TeoClient::DescribeBotDataCallable(const DescribeBotDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotHitRuleDetailOutcome TeoClient::DescribeBotHitRuleDetail(const DescribeBotHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotHitRuleDetailResponse rsp = DescribeBotHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotHitRuleDetailOutcome(rsp);
        else
            return DescribeBotHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBotHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotHitRuleDetailAsync(const DescribeBotHitRuleDetailRequest& request, const DescribeBotHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotHitRuleDetailOutcomeCallable TeoClient::DescribeBotHitRuleDetailCallable(const DescribeBotHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotLogOutcome TeoClient::DescribeBotLog(const DescribeBotLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotLogResponse rsp = DescribeBotLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotLogOutcome(rsp);
        else
            return DescribeBotLogOutcome(o.GetError());
    }
    else
    {
        return DescribeBotLogOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotLogAsync(const DescribeBotLogRequest& request, const DescribeBotLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotLogOutcomeCallable TeoClient::DescribeBotLogCallable(const DescribeBotLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotManagedRulesOutcome TeoClient::DescribeBotManagedRules(const DescribeBotManagedRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotManagedRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotManagedRulesResponse rsp = DescribeBotManagedRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotManagedRulesOutcome(rsp);
        else
            return DescribeBotManagedRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBotManagedRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotManagedRulesAsync(const DescribeBotManagedRulesRequest& request, const DescribeBotManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotManagedRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotManagedRulesOutcomeCallable TeoClient::DescribeBotManagedRulesCallable(const DescribeBotManagedRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotManagedRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotManagedRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeBotTopDataOutcome TeoClient::DescribeBotTopData(const DescribeBotTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBotTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBotTopDataResponse rsp = DescribeBotTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBotTopDataOutcome(rsp);
        else
            return DescribeBotTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBotTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBotTopDataAsync(const DescribeBotTopDataRequest& request, const DescribeBotTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBotTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBotTopDataOutcomeCallable TeoClient::DescribeBotTopDataCallable(const DescribeBotTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBotTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBotTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeClientRuleListOutcome TeoClient::DescribeClientRuleList(const DescribeClientRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientRuleListResponse rsp = DescribeClientRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientRuleListOutcome(rsp);
        else
            return DescribeClientRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeClientRuleListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeClientRuleListAsync(const DescribeClientRuleListRequest& request, const DescribeClientRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientRuleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeClientRuleListOutcomeCallable TeoClient::DescribeClientRuleListCallable(const DescribeClientRuleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientRuleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientRuleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeContentQuotaOutcome TeoClient::DescribeContentQuota(const DescribeContentQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContentQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContentQuotaResponse rsp = DescribeContentQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContentQuotaOutcome(rsp);
        else
            return DescribeContentQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeContentQuotaOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeContentQuotaAsync(const DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeContentQuotaOutcomeCallable TeoClient::DescribeContentQuotaCallable(const DescribeContentQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContentQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeContentQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackDataOutcome TeoClient::DescribeDDoSAttackData(const DescribeDDoSAttackDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackDataResponse rsp = DescribeDDoSAttackDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackDataOutcome(rsp);
        else
            return DescribeDDoSAttackDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackDataAsync(const DescribeDDoSAttackDataRequest& request, const DescribeDDoSAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackDataOutcomeCallable TeoClient::DescribeDDoSAttackDataCallable(const DescribeDDoSAttackDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackEventOutcome TeoClient::DescribeDDoSAttackEvent(const DescribeDDoSAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackEventResponse rsp = DescribeDDoSAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackEventOutcome(rsp);
        else
            return DescribeDDoSAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackEventAsync(const DescribeDDoSAttackEventRequest& request, const DescribeDDoSAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackEventOutcomeCallable TeoClient::DescribeDDoSAttackEventCallable(const DescribeDDoSAttackEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackEventDetailOutcome TeoClient::DescribeDDoSAttackEventDetail(const DescribeDDoSAttackEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackEventDetailResponse rsp = DescribeDDoSAttackEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackEventDetailOutcome(rsp);
        else
            return DescribeDDoSAttackEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackEventDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackEventDetailAsync(const DescribeDDoSAttackEventDetailRequest& request, const DescribeDDoSAttackEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackEventDetailOutcomeCallable TeoClient::DescribeDDoSAttackEventDetailCallable(const DescribeDDoSAttackEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackSourceEventOutcome TeoClient::DescribeDDoSAttackSourceEvent(const DescribeDDoSAttackSourceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackSourceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackSourceEventResponse rsp = DescribeDDoSAttackSourceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackSourceEventOutcome(rsp);
        else
            return DescribeDDoSAttackSourceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackSourceEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackSourceEventAsync(const DescribeDDoSAttackSourceEventRequest& request, const DescribeDDoSAttackSourceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackSourceEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackSourceEventOutcomeCallable TeoClient::DescribeDDoSAttackSourceEventCallable(const DescribeDDoSAttackSourceEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackSourceEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackSourceEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSAttackTopDataOutcome TeoClient::DescribeDDoSAttackTopData(const DescribeDDoSAttackTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSAttackTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSAttackTopDataResponse rsp = DescribeDDoSAttackTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSAttackTopDataOutcome(rsp);
        else
            return DescribeDDoSAttackTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSAttackTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSAttackTopDataAsync(const DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSAttackTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSAttackTopDataOutcomeCallable TeoClient::DescribeDDoSAttackTopDataCallable(const DescribeDDoSAttackTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSAttackTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSAttackTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSBlockListOutcome TeoClient::DescribeDDoSBlockList(const DescribeDDoSBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlockListResponse rsp = DescribeDDoSBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlockListOutcome(rsp);
        else
            return DescribeDDoSBlockListOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlockListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSBlockListAsync(const DescribeDDoSBlockListRequest& request, const DescribeDDoSBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSBlockList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSBlockListOutcomeCallable TeoClient::DescribeDDoSBlockListCallable(const DescribeDDoSBlockListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSBlockListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSBlockList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSMajorAttackEventOutcome TeoClient::DescribeDDoSMajorAttackEvent(const DescribeDDoSMajorAttackEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSMajorAttackEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSMajorAttackEventResponse rsp = DescribeDDoSMajorAttackEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSMajorAttackEventOutcome(rsp);
        else
            return DescribeDDoSMajorAttackEventOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSMajorAttackEventOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSMajorAttackEventAsync(const DescribeDDoSMajorAttackEventRequest& request, const DescribeDDoSMajorAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSMajorAttackEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSMajorAttackEventOutcomeCallable TeoClient::DescribeDDoSMajorAttackEventCallable(const DescribeDDoSMajorAttackEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSMajorAttackEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSMajorAttackEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDDoSPolicyOutcome TeoClient::DescribeDDoSPolicy(const DescribeDDoSPolicyRequest &request)
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

void TeoClient::DescribeDDoSPolicyAsync(const DescribeDDoSPolicyRequest& request, const DescribeDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDDoSPolicyOutcomeCallable TeoClient::DescribeDDoSPolicyCallable(const DescribeDDoSPolicyRequest &request)
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

TeoClient::DescribeDefaultCertificatesOutcome TeoClient::DescribeDefaultCertificates(const DescribeDefaultCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultCertificatesResponse rsp = DescribeDefaultCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultCertificatesOutcome(rsp);
        else
            return DescribeDefaultCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultCertificatesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDefaultCertificatesAsync(const DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDefaultCertificatesOutcomeCallable TeoClient::DescribeDefaultCertificatesCallable(const DescribeDefaultCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDistributionL4AccessDataOutcome TeoClient::DescribeDistributionL4AccessData(const DescribeDistributionL4AccessDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDistributionL4AccessData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDistributionL4AccessDataResponse rsp = DescribeDistributionL4AccessDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDistributionL4AccessDataOutcome(rsp);
        else
            return DescribeDistributionL4AccessDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDistributionL4AccessDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDistributionL4AccessDataAsync(const DescribeDistributionL4AccessDataRequest& request, const DescribeDistributionL4AccessDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDistributionL4AccessData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDistributionL4AccessDataOutcomeCallable TeoClient::DescribeDistributionL4AccessDataCallable(const DescribeDistributionL4AccessDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDistributionL4AccessDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDistributionL4AccessData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnsDataOutcome TeoClient::DescribeDnsData(const DescribeDnsDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsDataResponse rsp = DescribeDnsDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsDataOutcome(rsp);
        else
            return DescribeDnsDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsDataAsync(const DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsDataOutcomeCallable TeoClient::DescribeDnsDataCallable(const DescribeDnsDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnssecOutcome TeoClient::DescribeDnssec(const DescribeDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnssecResponse rsp = DescribeDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnssecOutcome(rsp);
        else
            return DescribeDnssecOutcome(o.GetError());
    }
    else
    {
        return DescribeDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnssecAsync(const DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnssecOutcomeCallable TeoClient::DescribeDnssecCallable(const DescribeDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnssecOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeHostsSettingOutcome TeoClient::DescribeHostsSetting(const DescribeHostsSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostsSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsSettingResponse rsp = DescribeHostsSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsSettingOutcome(rsp);
        else
            return DescribeHostsSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeHostsSettingAsync(const DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostsSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeHostsSettingOutcomeCallable TeoClient::DescribeHostsSettingCallable(const DescribeHostsSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostsSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeIdentificationsOutcome TeoClient::DescribeIdentifications(const DescribeIdentificationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentifications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentificationsResponse rsp = DescribeIdentificationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentificationsOutcome(rsp);
        else
            return DescribeIdentificationsOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentificationsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeIdentificationsAsync(const DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdentifications(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeIdentificationsOutcomeCallable TeoClient::DescribeIdentificationsCallable(const DescribeIdentificationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdentificationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdentifications(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogSetsOutcome TeoClient::DescribeLogSets(const DescribeLogSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogSetsResponse rsp = DescribeLogSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogSetsOutcome(rsp);
        else
            return DescribeLogSetsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogSetsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogSetsAsync(const DescribeLogSetsRequest& request, const DescribeLogSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogSets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogSetsOutcomeCallable TeoClient::DescribeLogSetsCallable(const DescribeLogSetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogSetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogSets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogTopicTaskDetailOutcome TeoClient::DescribeLogTopicTaskDetail(const DescribeLogTopicTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogTopicTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTopicTaskDetailResponse rsp = DescribeLogTopicTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTopicTaskDetailOutcome(rsp);
        else
            return DescribeLogTopicTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTopicTaskDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogTopicTaskDetailAsync(const DescribeLogTopicTaskDetailRequest& request, const DescribeLogTopicTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogTopicTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogTopicTaskDetailOutcomeCallable TeoClient::DescribeLogTopicTaskDetailCallable(const DescribeLogTopicTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogTopicTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogTopicTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLogTopicTasksOutcome TeoClient::DescribeLogTopicTasks(const DescribeLogTopicTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogTopicTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTopicTasksResponse rsp = DescribeLogTopicTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTopicTasksOutcome(rsp);
        else
            return DescribeLogTopicTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTopicTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLogTopicTasksAsync(const DescribeLogTopicTasksRequest& request, const DescribeLogTopicTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogTopicTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLogTopicTasksOutcomeCallable TeoClient::DescribeLogTopicTasksCallable(const DescribeLogTopicTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogTopicTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogTopicTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeOriginGroupOutcome TeoClient::DescribeOriginGroup(const DescribeOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginGroupResponse rsp = DescribeOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginGroupOutcome(rsp);
        else
            return DescribeOriginGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginGroupAsync(const DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOriginGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeOriginGroupOutcomeCallable TeoClient::DescribeOriginGroupCallable(const DescribeOriginGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOriginGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeOriginGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeOverviewL7DataOutcome TeoClient::DescribeOverviewL7Data(const DescribeOverviewL7DataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewL7Data");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewL7DataResponse rsp = DescribeOverviewL7DataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewL7DataOutcome(rsp);
        else
            return DescribeOverviewL7DataOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewL7DataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOverviewL7DataAsync(const DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOverviewL7Data(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeOverviewL7DataOutcomeCallable TeoClient::DescribeOverviewL7DataCallable(const DescribeOverviewL7DataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOverviewL7DataOutcome()>>(
        [this, request]()
        {
            return this->DescribeOverviewL7Data(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribePrefetchTasksOutcome TeoClient::DescribePrefetchTasks(const DescribePrefetchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrefetchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrefetchTasksResponse rsp = DescribePrefetchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrefetchTasksOutcome(rsp);
        else
            return DescribePrefetchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePrefetchTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePrefetchTasksAsync(const DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrefetchTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrefetchTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePrefetchTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribePurgeTasksOutcome TeoClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurgeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePurgeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeRateLimitIntelligenceRuleOutcome TeoClient::DescribeRateLimitIntelligenceRule(const DescribeRateLimitIntelligenceRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRateLimitIntelligenceRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRateLimitIntelligenceRuleResponse rsp = DescribeRateLimitIntelligenceRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRateLimitIntelligenceRuleOutcome(rsp);
        else
            return DescribeRateLimitIntelligenceRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRateLimitIntelligenceRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeRateLimitIntelligenceRuleAsync(const DescribeRateLimitIntelligenceRuleRequest& request, const DescribeRateLimitIntelligenceRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRateLimitIntelligenceRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRateLimitIntelligenceRuleOutcomeCallable TeoClient::DescribeRateLimitIntelligenceRuleCallable(const DescribeRateLimitIntelligenceRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRateLimitIntelligenceRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeRateLimitIntelligenceRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeRulesOutcome TeoClient::DescribeRules(const DescribeRulesRequest &request)
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

void TeoClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRulesOutcomeCallable TeoClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeRulesSettingOutcome TeoClient::DescribeRulesSetting(const DescribeRulesSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRulesSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesSettingResponse rsp = DescribeRulesSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesSettingOutcome(rsp);
        else
            return DescribeRulesSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeRulesSettingAsync(const DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRulesSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRulesSettingOutcomeCallable TeoClient::DescribeRulesSettingCallable(const DescribeRulesSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeRulesSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityGroupManagedRulesOutcome TeoClient::DescribeSecurityGroupManagedRules(const DescribeSecurityGroupManagedRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupManagedRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupManagedRulesResponse rsp = DescribeSecurityGroupManagedRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupManagedRulesOutcome(rsp);
        else
            return DescribeSecurityGroupManagedRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupManagedRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityGroupManagedRulesAsync(const DescribeSecurityGroupManagedRulesRequest& request, const DescribeSecurityGroupManagedRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupManagedRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityGroupManagedRulesOutcomeCallable TeoClient::DescribeSecurityGroupManagedRulesCallable(const DescribeSecurityGroupManagedRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupManagedRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupManagedRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityPolicyOutcome TeoClient::DescribeSecurityPolicy(const DescribeSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyResponse rsp = DescribeSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyOutcome(rsp);
        else
            return DescribeSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyAsync(const DescribeSecurityPolicyRequest& request, const DescribeSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityPolicyOutcomeCallable TeoClient::DescribeSecurityPolicyCallable(const DescribeSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityPolicyListOutcome TeoClient::DescribeSecurityPolicyList(const DescribeSecurityPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyListResponse rsp = DescribeSecurityPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyListOutcome(rsp);
        else
            return DescribeSecurityPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyListAsync(const DescribeSecurityPolicyListRequest& request, const DescribeSecurityPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPolicyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityPolicyListOutcomeCallable TeoClient::DescribeSecurityPolicyListCallable(const DescribeSecurityPolicyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPolicyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPolicyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityPolicyRegionsOutcome TeoClient::DescribeSecurityPolicyRegions(const DescribeSecurityPolicyRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyRegionsResponse rsp = DescribeSecurityPolicyRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyRegionsOutcome(rsp);
        else
            return DescribeSecurityPolicyRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyRegionsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPolicyRegionsAsync(const DescribeSecurityPolicyRegionsRequest& request, const DescribeSecurityPolicyRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPolicyRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityPolicyRegionsOutcomeCallable TeoClient::DescribeSecurityPolicyRegionsCallable(const DescribeSecurityPolicyRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPolicyRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPolicyRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityPortraitRulesOutcome TeoClient::DescribeSecurityPortraitRules(const DescribeSecurityPortraitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPortraitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPortraitRulesResponse rsp = DescribeSecurityPortraitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPortraitRulesOutcome(rsp);
        else
            return DescribeSecurityPortraitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPortraitRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityPortraitRulesAsync(const DescribeSecurityPortraitRulesRequest& request, const DescribeSecurityPortraitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPortraitRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityPortraitRulesOutcomeCallable TeoClient::DescribeSecurityPortraitRulesCallable(const DescribeSecurityPortraitRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPortraitRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPortraitRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityRuleIdOutcome TeoClient::DescribeSecurityRuleId(const DescribeSecurityRuleIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityRuleId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityRuleIdResponse rsp = DescribeSecurityRuleIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityRuleIdOutcome(rsp);
        else
            return DescribeSecurityRuleIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityRuleIdOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityRuleIdAsync(const DescribeSecurityRuleIdRequest& request, const DescribeSecurityRuleIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityRuleId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityRuleIdOutcomeCallable TeoClient::DescribeSecurityRuleIdCallable(const DescribeSecurityRuleIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityRuleIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityRuleId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSingleL7AnalysisDataOutcome TeoClient::DescribeSingleL7AnalysisData(const DescribeSingleL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSingleL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSingleL7AnalysisDataResponse rsp = DescribeSingleL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSingleL7AnalysisDataOutcome(rsp);
        else
            return DescribeSingleL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeSingleL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSingleL7AnalysisDataAsync(const DescribeSingleL7AnalysisDataRequest& request, const DescribeSingleL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSingleL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSingleL7AnalysisDataOutcomeCallable TeoClient::DescribeSingleL7AnalysisDataCallable(const DescribeSingleL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSingleL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeSingleL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSpeedTestingDetailsOutcome TeoClient::DescribeSpeedTestingDetails(const DescribeSpeedTestingDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpeedTestingDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpeedTestingDetailsResponse rsp = DescribeSpeedTestingDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpeedTestingDetailsOutcome(rsp);
        else
            return DescribeSpeedTestingDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeSpeedTestingDetailsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSpeedTestingDetailsAsync(const DescribeSpeedTestingDetailsRequest& request, const DescribeSpeedTestingDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpeedTestingDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSpeedTestingDetailsOutcomeCallable TeoClient::DescribeSpeedTestingDetailsCallable(const DescribeSpeedTestingDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpeedTestingDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpeedTestingDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSpeedTestingMetricDataOutcome TeoClient::DescribeSpeedTestingMetricData(const DescribeSpeedTestingMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpeedTestingMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpeedTestingMetricDataResponse rsp = DescribeSpeedTestingMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpeedTestingMetricDataOutcome(rsp);
        else
            return DescribeSpeedTestingMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeSpeedTestingMetricDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSpeedTestingMetricDataAsync(const DescribeSpeedTestingMetricDataRequest& request, const DescribeSpeedTestingMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpeedTestingMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSpeedTestingMetricDataOutcomeCallable TeoClient::DescribeSpeedTestingMetricDataCallable(const DescribeSpeedTestingMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpeedTestingMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpeedTestingMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSpeedTestingQuotaOutcome TeoClient::DescribeSpeedTestingQuota(const DescribeSpeedTestingQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpeedTestingQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpeedTestingQuotaResponse rsp = DescribeSpeedTestingQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpeedTestingQuotaOutcome(rsp);
        else
            return DescribeSpeedTestingQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeSpeedTestingQuotaOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSpeedTestingQuotaAsync(const DescribeSpeedTestingQuotaRequest& request, const DescribeSpeedTestingQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSpeedTestingQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSpeedTestingQuotaOutcomeCallable TeoClient::DescribeSpeedTestingQuotaCallable(const DescribeSpeedTestingQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSpeedTestingQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribeSpeedTestingQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTimingL4AccessDataOutcome TeoClient::DescribeTimingL4AccessData(const DescribeTimingL4AccessDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL4AccessData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL4AccessDataResponse rsp = DescribeTimingL4AccessDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL4AccessDataOutcome(rsp);
        else
            return DescribeTimingL4AccessDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL4AccessDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL4AccessDataAsync(const DescribeTimingL4AccessDataRequest& request, const DescribeTimingL4AccessDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL4AccessData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL4AccessDataOutcomeCallable TeoClient::DescribeTimingL4AccessDataCallable(const DescribeTimingL4AccessDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL4AccessDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL4AccessData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTimingL4DataOutcome TeoClient::DescribeTimingL4Data(const DescribeTimingL4DataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL4Data");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL4DataResponse rsp = DescribeTimingL4DataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL4DataOutcome(rsp);
        else
            return DescribeTimingL4DataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL4DataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL4DataAsync(const DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL4Data(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL4DataOutcomeCallable TeoClient::DescribeTimingL4DataCallable(const DescribeTimingL4DataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL4DataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL4Data(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTimingL7AnalysisDataOutcome TeoClient::DescribeTimingL7AnalysisData(const DescribeTimingL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL7AnalysisDataResponse rsp = DescribeTimingL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL7AnalysisDataOutcome(rsp);
        else
            return DescribeTimingL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL7AnalysisDataAsync(const DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL7AnalysisDataOutcomeCallable TeoClient::DescribeTimingL7AnalysisDataCallable(const DescribeTimingL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTimingL7CacheDataOutcome TeoClient::DescribeTimingL7CacheData(const DescribeTimingL7CacheDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL7CacheData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL7CacheDataResponse rsp = DescribeTimingL7CacheDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL7CacheDataOutcome(rsp);
        else
            return DescribeTimingL7CacheDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL7CacheDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL7CacheDataAsync(const DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTimingL7CacheData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTimingL7CacheDataOutcomeCallable TeoClient::DescribeTimingL7CacheDataCallable(const DescribeTimingL7CacheDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTimingL7CacheDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTimingL7CacheData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTopL7AnalysisDataOutcome TeoClient::DescribeTopL7AnalysisData(const DescribeTopL7AnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopL7AnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopL7AnalysisDataResponse rsp = DescribeTopL7AnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopL7AnalysisDataOutcome(rsp);
        else
            return DescribeTopL7AnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTopL7AnalysisDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTopL7AnalysisDataAsync(const DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopL7AnalysisData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTopL7AnalysisDataOutcomeCallable TeoClient::DescribeTopL7AnalysisDataCallable(const DescribeTopL7AnalysisDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopL7AnalysisDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopL7AnalysisData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeTopL7CacheDataOutcome TeoClient::DescribeTopL7CacheData(const DescribeTopL7CacheDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopL7CacheData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopL7CacheDataResponse rsp = DescribeTopL7CacheDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopL7CacheDataOutcome(rsp);
        else
            return DescribeTopL7CacheDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTopL7CacheDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTopL7CacheDataAsync(const DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopL7CacheData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeTopL7CacheDataOutcomeCallable TeoClient::DescribeTopL7CacheDataCallable(const DescribeTopL7CacheDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopL7CacheDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopL7CacheData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebManagedRulesDataOutcome TeoClient::DescribeWebManagedRulesData(const DescribeWebManagedRulesDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesDataResponse rsp = DescribeWebManagedRulesDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesDataOutcome(rsp);
        else
            return DescribeWebManagedRulesDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesDataAsync(const DescribeWebManagedRulesDataRequest& request, const DescribeWebManagedRulesDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesDataOutcomeCallable TeoClient::DescribeWebManagedRulesDataCallable(const DescribeWebManagedRulesDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebManagedRulesHitRuleDetailOutcome TeoClient::DescribeWebManagedRulesHitRuleDetail(const DescribeWebManagedRulesHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesHitRuleDetailResponse rsp = DescribeWebManagedRulesHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesHitRuleDetailOutcome(rsp);
        else
            return DescribeWebManagedRulesHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesHitRuleDetailAsync(const DescribeWebManagedRulesHitRuleDetailRequest& request, const DescribeWebManagedRulesHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesHitRuleDetailOutcomeCallable TeoClient::DescribeWebManagedRulesHitRuleDetailCallable(const DescribeWebManagedRulesHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebManagedRulesLogOutcome TeoClient::DescribeWebManagedRulesLog(const DescribeWebManagedRulesLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebManagedRulesLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebManagedRulesLogResponse rsp = DescribeWebManagedRulesLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebManagedRulesLogOutcome(rsp);
        else
            return DescribeWebManagedRulesLogOutcome(o.GetError());
    }
    else
    {
        return DescribeWebManagedRulesLogOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebManagedRulesLogAsync(const DescribeWebManagedRulesLogRequest& request, const DescribeWebManagedRulesLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebManagedRulesLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebManagedRulesLogOutcomeCallable TeoClient::DescribeWebManagedRulesLogCallable(const DescribeWebManagedRulesLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebManagedRulesLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebManagedRulesLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionAttackEventsOutcome TeoClient::DescribeWebProtectionAttackEvents(const DescribeWebProtectionAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionAttackEventsResponse rsp = DescribeWebProtectionAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionAttackEventsOutcome(rsp);
        else
            return DescribeWebProtectionAttackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionAttackEventsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionAttackEventsAsync(const DescribeWebProtectionAttackEventsRequest& request, const DescribeWebProtectionAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionAttackEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionAttackEventsOutcomeCallable TeoClient::DescribeWebProtectionAttackEventsCallable(const DescribeWebProtectionAttackEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionAttackEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionAttackEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionClientIpListOutcome TeoClient::DescribeWebProtectionClientIpList(const DescribeWebProtectionClientIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionClientIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionClientIpListResponse rsp = DescribeWebProtectionClientIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionClientIpListOutcome(rsp);
        else
            return DescribeWebProtectionClientIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionClientIpListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionClientIpListAsync(const DescribeWebProtectionClientIpListRequest& request, const DescribeWebProtectionClientIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionClientIpList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionClientIpListOutcomeCallable TeoClient::DescribeWebProtectionClientIpListCallable(const DescribeWebProtectionClientIpListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionClientIpListOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionClientIpList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionDataOutcome TeoClient::DescribeWebProtectionData(const DescribeWebProtectionDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionDataResponse rsp = DescribeWebProtectionDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionDataOutcome(rsp);
        else
            return DescribeWebProtectionDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionDataAsync(const DescribeWebProtectionDataRequest& request, const DescribeWebProtectionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionDataOutcomeCallable TeoClient::DescribeWebProtectionDataCallable(const DescribeWebProtectionDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionHitRuleDetailOutcome TeoClient::DescribeWebProtectionHitRuleDetail(const DescribeWebProtectionHitRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionHitRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionHitRuleDetailResponse rsp = DescribeWebProtectionHitRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionHitRuleDetailOutcome(rsp);
        else
            return DescribeWebProtectionHitRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionHitRuleDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionHitRuleDetailAsync(const DescribeWebProtectionHitRuleDetailRequest& request, const DescribeWebProtectionHitRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionHitRuleDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionHitRuleDetailOutcomeCallable TeoClient::DescribeWebProtectionHitRuleDetailCallable(const DescribeWebProtectionHitRuleDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionHitRuleDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionHitRuleDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeWebProtectionTopDataOutcome TeoClient::DescribeWebProtectionTopData(const DescribeWebProtectionTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebProtectionTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebProtectionTopDataResponse rsp = DescribeWebProtectionTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebProtectionTopDataOutcome(rsp);
        else
            return DescribeWebProtectionTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWebProtectionTopDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebProtectionTopDataAsync(const DescribeWebProtectionTopDataRequest& request, const DescribeWebProtectionTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebProtectionTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeWebProtectionTopDataOutcomeCallable TeoClient::DescribeWebProtectionTopDataCallable(const DescribeWebProtectionTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebProtectionTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebProtectionTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZoneDDoSPolicyOutcome TeoClient::DescribeZoneDDoSPolicy(const DescribeZoneDDoSPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneDDoSPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneDDoSPolicyResponse rsp = DescribeZoneDDoSPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneDDoSPolicyOutcome(rsp);
        else
            return DescribeZoneDDoSPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneDDoSPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneDDoSPolicyAsync(const DescribeZoneDDoSPolicyRequest& request, const DescribeZoneDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneDDoSPolicyOutcomeCallable TeoClient::DescribeZoneDDoSPolicyCallable(const DescribeZoneDDoSPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneDDoSPolicyOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneDDoSPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZoneSettingOutcome TeoClient::DescribeZoneSetting(const DescribeZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneSettingResponse rsp = DescribeZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneSettingOutcome(rsp);
        else
            return DescribeZoneSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneSettingAsync(const DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneSettingOutcomeCallable TeoClient::DescribeZoneSettingCallable(const DescribeZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZonesOutcome TeoClient::DescribeZones(const DescribeZonesRequest &request)
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

void TeoClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DownloadL4LogsOutcome TeoClient::DownloadL4Logs(const DownloadL4LogsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadL4Logs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadL4LogsResponse rsp = DownloadL4LogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadL4LogsOutcome(rsp);
        else
            return DownloadL4LogsOutcome(o.GetError());
    }
    else
    {
        return DownloadL4LogsOutcome(outcome.GetError());
    }
}

void TeoClient::DownloadL4LogsAsync(const DownloadL4LogsRequest& request, const DownloadL4LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadL4Logs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DownloadL4LogsOutcomeCallable TeoClient::DownloadL4LogsCallable(const DownloadL4LogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadL4LogsOutcome()>>(
        [this, request]()
        {
            return this->DownloadL4Logs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DownloadL7LogsOutcome TeoClient::DownloadL7Logs(const DownloadL7LogsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadL7Logs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadL7LogsResponse rsp = DownloadL7LogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadL7LogsOutcome(rsp);
        else
            return DownloadL7LogsOutcome(o.GetError());
    }
    else
    {
        return DownloadL7LogsOutcome(outcome.GetError());
    }
}

void TeoClient::DownloadL7LogsAsync(const DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadL7Logs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DownloadL7LogsOutcomeCallable TeoClient::DownloadL7LogsCallable(const DownloadL7LogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadL7LogsOutcome()>>(
        [this, request]()
        {
            return this->DownloadL7Logs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::IdentifyZoneOutcome TeoClient::IdentifyZone(const IdentifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "IdentifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IdentifyZoneResponse rsp = IdentifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IdentifyZoneOutcome(rsp);
        else
            return IdentifyZoneOutcome(o.GetError());
    }
    else
    {
        return IdentifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::IdentifyZoneAsync(const IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IdentifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::IdentifyZoneOutcomeCallable TeoClient::IdentifyZoneCallable(const IdentifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IdentifyZoneOutcome()>>(
        [this, request]()
        {
            return this->IdentifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAlarmConfigOutcome TeoClient::ModifyAlarmConfig(const ModifyAlarmConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmConfigResponse rsp = ModifyAlarmConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmConfigOutcome(rsp);
        else
            return ModifyAlarmConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmConfigOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAlarmConfigAsync(const ModifyAlarmConfigRequest& request, const ModifyAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAlarmConfigOutcomeCallable TeoClient::ModifyAlarmConfigCallable(const ModifyAlarmConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAlarmDefaultThresholdOutcome TeoClient::ModifyAlarmDefaultThreshold(const ModifyAlarmDefaultThresholdRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmDefaultThreshold");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmDefaultThresholdResponse rsp = ModifyAlarmDefaultThresholdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmDefaultThresholdOutcome(rsp);
        else
            return ModifyAlarmDefaultThresholdOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmDefaultThresholdOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAlarmDefaultThresholdAsync(const ModifyAlarmDefaultThresholdRequest& request, const ModifyAlarmDefaultThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAlarmDefaultThreshold(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAlarmDefaultThresholdOutcomeCallable TeoClient::ModifyAlarmDefaultThresholdCallable(const ModifyAlarmDefaultThresholdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAlarmDefaultThresholdOutcome()>>(
        [this, request]()
        {
            return this->ModifyAlarmDefaultThreshold(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAliasDomainOutcome TeoClient::ModifyAliasDomain(const ModifyAliasDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAliasDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAliasDomainResponse rsp = ModifyAliasDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAliasDomainOutcome(rsp);
        else
            return ModifyAliasDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyAliasDomainOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAliasDomainAsync(const ModifyAliasDomainRequest& request, const ModifyAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAliasDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAliasDomainOutcomeCallable TeoClient::ModifyAliasDomainCallable(const ModifyAliasDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAliasDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyAliasDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAliasDomainStatusOutcome TeoClient::ModifyAliasDomainStatus(const ModifyAliasDomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAliasDomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAliasDomainStatusResponse rsp = ModifyAliasDomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAliasDomainStatusOutcome(rsp);
        else
            return ModifyAliasDomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAliasDomainStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAliasDomainStatusAsync(const ModifyAliasDomainStatusRequest& request, const ModifyAliasDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAliasDomainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAliasDomainStatusOutcomeCallable TeoClient::ModifyAliasDomainStatusCallable(const ModifyAliasDomainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAliasDomainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyAliasDomainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyOutcome TeoClient::ModifyApplicationProxy(const ModifyApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyResponse rsp = ModifyApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyOutcome(rsp);
        else
            return ModifyApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyAsync(const ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyOutcomeCallable TeoClient::ModifyApplicationProxyCallable(const ModifyApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyRuleOutcome TeoClient::ModifyApplicationProxyRule(const ModifyApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleResponse rsp = ModifyApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleOutcome(rsp);
        else
            return ModifyApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleAsync(const ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyRuleOutcomeCallable TeoClient::ModifyApplicationProxyRuleCallable(const ModifyApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyRuleStatusOutcome TeoClient::ModifyApplicationProxyRuleStatus(const ModifyApplicationProxyRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleStatusResponse rsp = ModifyApplicationProxyRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleStatusOutcome(rsp);
        else
            return ModifyApplicationProxyRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleStatusAsync(const ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyRuleStatusOutcomeCallable TeoClient::ModifyApplicationProxyRuleStatusCallable(const ModifyApplicationProxyRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyStatusOutcome TeoClient::ModifyApplicationProxyStatus(const ModifyApplicationProxyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyStatusResponse rsp = ModifyApplicationProxyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyStatusOutcome(rsp);
        else
            return ModifyApplicationProxyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyStatusAsync(const ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyStatusOutcomeCallable TeoClient::ModifyApplicationProxyStatusCallable(const ModifyApplicationProxyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDDoSPolicyOutcome TeoClient::ModifyDDoSPolicy(const ModifyDDoSPolicyRequest &request)
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

void TeoClient::ModifyDDoSPolicyAsync(const ModifyDDoSPolicyRequest& request, const ModifyDDoSPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDDoSPolicyOutcomeCallable TeoClient::ModifyDDoSPolicyCallable(const ModifyDDoSPolicyRequest &request)
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

TeoClient::ModifyDDoSPolicyHostOutcome TeoClient::ModifyDDoSPolicyHost(const ModifyDDoSPolicyHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSPolicyHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSPolicyHostResponse rsp = ModifyDDoSPolicyHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSPolicyHostOutcome(rsp);
        else
            return ModifyDDoSPolicyHostOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSPolicyHostOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDDoSPolicyHostAsync(const ModifyDDoSPolicyHostRequest& request, const ModifyDDoSPolicyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDDoSPolicyHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDDoSPolicyHostOutcomeCallable TeoClient::ModifyDDoSPolicyHostCallable(const ModifyDDoSPolicyHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDDoSPolicyHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyDDoSPolicyHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDefaultCertificateOutcome TeoClient::ModifyDefaultCertificate(const ModifyDefaultCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultCertificateResponse rsp = ModifyDefaultCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultCertificateOutcome(rsp);
        else
            return ModifyDefaultCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDefaultCertificateAsync(const ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDefaultCertificateOutcomeCallable TeoClient::ModifyDefaultCertificateCallable(const ModifyDefaultCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDnssecOutcome TeoClient::ModifyDnssec(const ModifyDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnssecResponse rsp = ModifyDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnssecOutcome(rsp);
        else
            return ModifyDnssecOutcome(o.GetError());
    }
    else
    {
        return ModifyDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnssecAsync(const ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnssecOutcomeCallable TeoClient::ModifyDnssecCallable(const ModifyDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnssecOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyHostsCertificateOutcome TeoClient::ModifyHostsCertificate(const ModifyHostsCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostsCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostsCertificateResponse rsp = ModifyHostsCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostsCertificateOutcome(rsp);
        else
            return ModifyHostsCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyHostsCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyHostsCertificateAsync(const ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostsCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyHostsCertificateOutcomeCallable TeoClient::ModifyHostsCertificateCallable(const ModifyHostsCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostsCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostsCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyLogTopicTaskOutcome TeoClient::ModifyLogTopicTask(const ModifyLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogTopicTaskResponse rsp = ModifyLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogTopicTaskOutcome(rsp);
        else
            return ModifyLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLogTopicTaskAsync(const ModifyLogTopicTaskRequest& request, const ModifyLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyLogTopicTaskOutcomeCallable TeoClient::ModifyLogTopicTaskCallable(const ModifyLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyOriginGroupOutcome TeoClient::ModifyOriginGroup(const ModifyOriginGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOriginGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOriginGroupResponse rsp = ModifyOriginGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOriginGroupOutcome(rsp);
        else
            return ModifyOriginGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyOriginGroupOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyOriginGroupAsync(const ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOriginGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyOriginGroupOutcomeCallable TeoClient::ModifyOriginGroupCallable(const ModifyOriginGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOriginGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyOriginGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyRuleOutcome TeoClient::ModifyRule(const ModifyRuleRequest &request)
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

void TeoClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyRuleOutcomeCallable TeoClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyRulePriorityOutcome TeoClient::ModifyRulePriority(const ModifyRulePriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRulePriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRulePriorityResponse rsp = ModifyRulePriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRulePriorityOutcome(rsp);
        else
            return ModifyRulePriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyRulePriorityOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyRulePriorityAsync(const ModifyRulePriorityRequest& request, const ModifyRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRulePriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyRulePriorityOutcomeCallable TeoClient::ModifyRulePriorityCallable(const ModifyRulePriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRulePriorityOutcome()>>(
        [this, request]()
        {
            return this->ModifyRulePriority(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifySecurityPolicyOutcome TeoClient::ModifySecurityPolicy(const ModifySecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityPolicyResponse rsp = ModifySecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityPolicyOutcome(rsp);
        else
            return ModifySecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityPolicyAsync(const ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifySecurityPolicyOutcomeCallable TeoClient::ModifySecurityPolicyCallable(const ModifySecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifySecurityWafGroupPolicyOutcome TeoClient::ModifySecurityWafGroupPolicy(const ModifySecurityWafGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityWafGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityWafGroupPolicyResponse rsp = ModifySecurityWafGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityWafGroupPolicyOutcome(rsp);
        else
            return ModifySecurityWafGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityWafGroupPolicyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityWafGroupPolicyAsync(const ModifySecurityWafGroupPolicyRequest& request, const ModifySecurityWafGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityWafGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifySecurityWafGroupPolicyOutcomeCallable TeoClient::ModifySecurityWafGroupPolicyCallable(const ModifySecurityWafGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityWafGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityWafGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneOutcome TeoClient::ModifyZone(const ModifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneResponse rsp = ModifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneOutcome(rsp);
        else
            return ModifyZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneAsync(const ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneOutcomeCallable TeoClient::ModifyZoneCallable(const ModifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneOutcome()>>(
        [this, request]()
        {
            return this->ModifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneCnameSpeedUpOutcome TeoClient::ModifyZoneCnameSpeedUp(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneCnameSpeedUp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneCnameSpeedUpResponse rsp = ModifyZoneCnameSpeedUpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneCnameSpeedUpOutcome(rsp);
        else
            return ModifyZoneCnameSpeedUpOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneCnameSpeedUpOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneCnameSpeedUpAsync(const ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneCnameSpeedUp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneCnameSpeedUpOutcomeCallable TeoClient::ModifyZoneCnameSpeedUpCallable(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneCnameSpeedUpOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneCnameSpeedUp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneSettingOutcome TeoClient::ModifyZoneSetting(const ModifyZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneSettingResponse rsp = ModifyZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneSettingOutcome(rsp);
        else
            return ModifyZoneSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneSettingAsync(const ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneSettingOutcomeCallable TeoClient::ModifyZoneSettingCallable(const ModifyZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneStatusOutcome TeoClient::ModifyZoneStatus(const ModifyZoneStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneStatusResponse rsp = ModifyZoneStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneStatusOutcome(rsp);
        else
            return ModifyZoneStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneStatusAsync(const ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneStatusOutcomeCallable TeoClient::ModifyZoneStatusCallable(const ModifyZoneStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ReclaimAliasDomainOutcome TeoClient::ReclaimAliasDomain(const ReclaimAliasDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ReclaimAliasDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReclaimAliasDomainResponse rsp = ReclaimAliasDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReclaimAliasDomainOutcome(rsp);
        else
            return ReclaimAliasDomainOutcome(o.GetError());
    }
    else
    {
        return ReclaimAliasDomainOutcome(outcome.GetError());
    }
}

void TeoClient::ReclaimAliasDomainAsync(const ReclaimAliasDomainRequest& request, const ReclaimAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReclaimAliasDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ReclaimAliasDomainOutcomeCallable TeoClient::ReclaimAliasDomainCallable(const ReclaimAliasDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReclaimAliasDomainOutcome()>>(
        [this, request]()
        {
            return this->ReclaimAliasDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ReclaimZoneOutcome TeoClient::ReclaimZone(const ReclaimZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ReclaimZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReclaimZoneResponse rsp = ReclaimZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReclaimZoneOutcome(rsp);
        else
            return ReclaimZoneOutcome(o.GetError());
    }
    else
    {
        return ReclaimZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ReclaimZoneAsync(const ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReclaimZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ReclaimZoneOutcomeCallable TeoClient::ReclaimZoneCallable(const ReclaimZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReclaimZoneOutcome()>>(
        [this, request]()
        {
            return this->ReclaimZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::SwitchLogTopicTaskOutcome TeoClient::SwitchLogTopicTask(const SwitchLogTopicTaskRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchLogTopicTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchLogTopicTaskResponse rsp = SwitchLogTopicTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchLogTopicTaskOutcome(rsp);
        else
            return SwitchLogTopicTaskOutcome(o.GetError());
    }
    else
    {
        return SwitchLogTopicTaskOutcome(outcome.GetError());
    }
}

void TeoClient::SwitchLogTopicTaskAsync(const SwitchLogTopicTaskRequest& request, const SwitchLogTopicTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SwitchLogTopicTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::SwitchLogTopicTaskOutcomeCallable TeoClient::SwitchLogTopicTaskCallable(const SwitchLogTopicTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SwitchLogTopicTaskOutcome()>>(
        [this, request]()
        {
            return this->SwitchLogTopicTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

