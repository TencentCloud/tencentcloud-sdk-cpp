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


TeoClient::BindSecurityTemplateToEntityOutcome TeoClient::BindSecurityTemplateToEntity(const BindSecurityTemplateToEntityRequest &request)
{
    auto outcome = MakeRequest(request, "BindSecurityTemplateToEntity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSecurityTemplateToEntityResponse rsp = BindSecurityTemplateToEntityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSecurityTemplateToEntityOutcome(rsp);
        else
            return BindSecurityTemplateToEntityOutcome(o.GetError());
    }
    else
    {
        return BindSecurityTemplateToEntityOutcome(outcome.GetError());
    }
}

void TeoClient::BindSecurityTemplateToEntityAsync(const BindSecurityTemplateToEntityRequest& request, const BindSecurityTemplateToEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindSecurityTemplateToEntity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::BindSecurityTemplateToEntityOutcomeCallable TeoClient::BindSecurityTemplateToEntityCallable(const BindSecurityTemplateToEntityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindSecurityTemplateToEntityOutcome()>>(
        [this, request]()
        {
            return this->BindSecurityTemplateToEntity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::BindSharedCNAMEOutcome TeoClient::BindSharedCNAME(const BindSharedCNAMERequest &request)
{
    auto outcome = MakeRequest(request, "BindSharedCNAME");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSharedCNAMEResponse rsp = BindSharedCNAMEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSharedCNAMEOutcome(rsp);
        else
            return BindSharedCNAMEOutcome(o.GetError());
    }
    else
    {
        return BindSharedCNAMEOutcome(outcome.GetError());
    }
}

void TeoClient::BindSharedCNAMEAsync(const BindSharedCNAMERequest& request, const BindSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindSharedCNAME(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::BindSharedCNAMEOutcomeCallable TeoClient::BindSharedCNAMECallable(const BindSharedCNAMERequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindSharedCNAMEOutcome()>>(
        [this, request]()
        {
            return this->BindSharedCNAME(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

TeoClient::CheckCnameStatusOutcome TeoClient::CheckCnameStatus(const CheckCnameStatusRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCnameStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCnameStatusResponse rsp = CheckCnameStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCnameStatusOutcome(rsp);
        else
            return CheckCnameStatusOutcome(o.GetError());
    }
    else
    {
        return CheckCnameStatusOutcome(outcome.GetError());
    }
}

void TeoClient::CheckCnameStatusAsync(const CheckCnameStatusRequest& request, const CheckCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCnameStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CheckCnameStatusOutcomeCallable TeoClient::CheckCnameStatusCallable(const CheckCnameStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCnameStatusOutcome()>>(
        [this, request]()
        {
            return this->CheckCnameStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateAccelerationDomainOutcome TeoClient::CreateAccelerationDomain(const CreateAccelerationDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccelerationDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccelerationDomainResponse rsp = CreateAccelerationDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccelerationDomainOutcome(rsp);
        else
            return CreateAccelerationDomainOutcome(o.GetError());
    }
    else
    {
        return CreateAccelerationDomainOutcome(outcome.GetError());
    }
}

void TeoClient::CreateAccelerationDomainAsync(const CreateAccelerationDomainRequest& request, const CreateAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccelerationDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateAccelerationDomainOutcomeCallable TeoClient::CreateAccelerationDomainCallable(const CreateAccelerationDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccelerationDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateAccelerationDomain(request);
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

TeoClient::CreateCLSIndexOutcome TeoClient::CreateCLSIndex(const CreateCLSIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSIndexResponse rsp = CreateCLSIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSIndexOutcome(rsp);
        else
            return CreateCLSIndexOutcome(o.GetError());
    }
    else
    {
        return CreateCLSIndexOutcome(outcome.GetError());
    }
}

void TeoClient::CreateCLSIndexAsync(const CreateCLSIndexRequest& request, const CreateCLSIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCLSIndex(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateCLSIndexOutcomeCallable TeoClient::CreateCLSIndexCallable(const CreateCLSIndexRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCLSIndexOutcome()>>(
        [this, request]()
        {
            return this->CreateCLSIndex(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateConfigGroupVersionOutcome TeoClient::CreateConfigGroupVersion(const CreateConfigGroupVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigGroupVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigGroupVersionResponse rsp = CreateConfigGroupVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigGroupVersionOutcome(rsp);
        else
            return CreateConfigGroupVersionOutcome(o.GetError());
    }
    else
    {
        return CreateConfigGroupVersionOutcome(outcome.GetError());
    }
}

void TeoClient::CreateConfigGroupVersionAsync(const CreateConfigGroupVersionRequest& request, const CreateConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConfigGroupVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateConfigGroupVersionOutcomeCallable TeoClient::CreateConfigGroupVersionCallable(const CreateConfigGroupVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConfigGroupVersionOutcome()>>(
        [this, request]()
        {
            return this->CreateConfigGroupVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateContentIdentifierOutcome TeoClient::CreateContentIdentifier(const CreateContentIdentifierRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContentIdentifier");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContentIdentifierResponse rsp = CreateContentIdentifierResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContentIdentifierOutcome(rsp);
        else
            return CreateContentIdentifierOutcome(o.GetError());
    }
    else
    {
        return CreateContentIdentifierOutcome(outcome.GetError());
    }
}

void TeoClient::CreateContentIdentifierAsync(const CreateContentIdentifierRequest& request, const CreateContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContentIdentifier(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateContentIdentifierOutcomeCallable TeoClient::CreateContentIdentifierCallable(const CreateContentIdentifierRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContentIdentifierOutcome()>>(
        [this, request]()
        {
            return this->CreateContentIdentifier(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateCustomizeErrorPageOutcome TeoClient::CreateCustomizeErrorPage(const CreateCustomizeErrorPageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomizeErrorPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomizeErrorPageResponse rsp = CreateCustomizeErrorPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomizeErrorPageOutcome(rsp);
        else
            return CreateCustomizeErrorPageOutcome(o.GetError());
    }
    else
    {
        return CreateCustomizeErrorPageOutcome(outcome.GetError());
    }
}

void TeoClient::CreateCustomizeErrorPageAsync(const CreateCustomizeErrorPageRequest& request, const CreateCustomizeErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomizeErrorPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateCustomizeErrorPageOutcomeCallable TeoClient::CreateCustomizeErrorPageCallable(const CreateCustomizeErrorPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomizeErrorPageOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomizeErrorPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateDnsRecordOutcome TeoClient::CreateDnsRecord(const CreateDnsRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDnsRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDnsRecordResponse rsp = CreateDnsRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDnsRecordOutcome(rsp);
        else
            return CreateDnsRecordOutcome(o.GetError());
    }
    else
    {
        return CreateDnsRecordOutcome(outcome.GetError());
    }
}

void TeoClient::CreateDnsRecordAsync(const CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDnsRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateDnsRecordOutcomeCallable TeoClient::CreateDnsRecordCallable(const CreateDnsRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDnsRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateDnsRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateFunctionOutcome TeoClient::CreateFunction(const CreateFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFunctionResponse rsp = CreateFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFunctionOutcome(rsp);
        else
            return CreateFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateFunctionOutcome(outcome.GetError());
    }
}

void TeoClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateFunctionOutcomeCallable TeoClient::CreateFunctionCallable(const CreateFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFunctionOutcome()>>(
        [this, request]()
        {
            return this->CreateFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateFunctionRuleOutcome TeoClient::CreateFunctionRule(const CreateFunctionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFunctionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFunctionRuleResponse rsp = CreateFunctionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFunctionRuleOutcome(rsp);
        else
            return CreateFunctionRuleOutcome(o.GetError());
    }
    else
    {
        return CreateFunctionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateFunctionRuleAsync(const CreateFunctionRuleRequest& request, const CreateFunctionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFunctionRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateFunctionRuleOutcomeCallable TeoClient::CreateFunctionRuleCallable(const CreateFunctionRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFunctionRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateFunctionRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateL4ProxyOutcome TeoClient::CreateL4Proxy(const CreateL4ProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL4Proxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL4ProxyResponse rsp = CreateL4ProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL4ProxyOutcome(rsp);
        else
            return CreateL4ProxyOutcome(o.GetError());
    }
    else
    {
        return CreateL4ProxyOutcome(outcome.GetError());
    }
}

void TeoClient::CreateL4ProxyAsync(const CreateL4ProxyRequest& request, const CreateL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL4Proxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateL4ProxyOutcomeCallable TeoClient::CreateL4ProxyCallable(const CreateL4ProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL4ProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateL4Proxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateL4ProxyRulesOutcome TeoClient::CreateL4ProxyRules(const CreateL4ProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL4ProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL4ProxyRulesResponse rsp = CreateL4ProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL4ProxyRulesOutcome(rsp);
        else
            return CreateL4ProxyRulesOutcome(o.GetError());
    }
    else
    {
        return CreateL4ProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::CreateL4ProxyRulesAsync(const CreateL4ProxyRulesRequest& request, const CreateL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL4ProxyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateL4ProxyRulesOutcomeCallable TeoClient::CreateL4ProxyRulesCallable(const CreateL4ProxyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL4ProxyRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateL4ProxyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateL7AccRulesOutcome TeoClient::CreateL7AccRules(const CreateL7AccRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7AccRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7AccRulesResponse rsp = CreateL7AccRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7AccRulesOutcome(rsp);
        else
            return CreateL7AccRulesOutcome(o.GetError());
    }
    else
    {
        return CreateL7AccRulesOutcome(outcome.GetError());
    }
}

void TeoClient::CreateL7AccRulesAsync(const CreateL7AccRulesRequest& request, const CreateL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7AccRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateL7AccRulesOutcomeCallable TeoClient::CreateL7AccRulesCallable(const CreateL7AccRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7AccRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateL7AccRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLoadBalancerOutcome TeoClient::CreateLoadBalancer(const CreateLoadBalancerRequest &request)
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

void TeoClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLoadBalancerOutcomeCallable TeoClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancer(request);
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

TeoClient::CreatePlanOutcome TeoClient::CreatePlan(const CreatePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePlanResponse rsp = CreatePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePlanOutcome(rsp);
        else
            return CreatePlanOutcome(o.GetError());
    }
    else
    {
        return CreatePlanOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePlanAsync(const CreatePlanRequest& request, const CreatePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePlanOutcomeCallable TeoClient::CreatePlanCallable(const CreatePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePlanOutcome()>>(
        [this, request]()
        {
            return this->CreatePlan(request);
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

TeoClient::CreateRealtimeLogDeliveryTaskOutcome TeoClient::CreateRealtimeLogDeliveryTask(const CreateRealtimeLogDeliveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRealtimeLogDeliveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRealtimeLogDeliveryTaskResponse rsp = CreateRealtimeLogDeliveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRealtimeLogDeliveryTaskOutcome(rsp);
        else
            return CreateRealtimeLogDeliveryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRealtimeLogDeliveryTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreateRealtimeLogDeliveryTaskAsync(const CreateRealtimeLogDeliveryTaskRequest& request, const CreateRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRealtimeLogDeliveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateRealtimeLogDeliveryTaskOutcomeCallable TeoClient::CreateRealtimeLogDeliveryTaskCallable(const CreateRealtimeLogDeliveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRealtimeLogDeliveryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateRealtimeLogDeliveryTask(request);
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

TeoClient::CreateSecurityIPGroupOutcome TeoClient::CreateSecurityIPGroup(const CreateSecurityIPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityIPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityIPGroupResponse rsp = CreateSecurityIPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityIPGroupOutcome(rsp);
        else
            return CreateSecurityIPGroupOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityIPGroupOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityIPGroupAsync(const CreateSecurityIPGroupRequest& request, const CreateSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityIPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateSecurityIPGroupOutcomeCallable TeoClient::CreateSecurityIPGroupCallable(const CreateSecurityIPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityIPGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityIPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateSharedCNAMEOutcome TeoClient::CreateSharedCNAME(const CreateSharedCNAMERequest &request)
{
    auto outcome = MakeRequest(request, "CreateSharedCNAME");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSharedCNAMEResponse rsp = CreateSharedCNAMEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSharedCNAMEOutcome(rsp);
        else
            return CreateSharedCNAMEOutcome(o.GetError());
    }
    else
    {
        return CreateSharedCNAMEOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSharedCNAMEAsync(const CreateSharedCNAMERequest& request, const CreateSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSharedCNAME(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateSharedCNAMEOutcomeCallable TeoClient::CreateSharedCNAMECallable(const CreateSharedCNAMERequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSharedCNAMEOutcome()>>(
        [this, request]()
        {
            return this->CreateSharedCNAME(request);
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

TeoClient::DeleteAccelerationDomainsOutcome TeoClient::DeleteAccelerationDomains(const DeleteAccelerationDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccelerationDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccelerationDomainsResponse rsp = DeleteAccelerationDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccelerationDomainsOutcome(rsp);
        else
            return DeleteAccelerationDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteAccelerationDomainsOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteAccelerationDomainsAsync(const DeleteAccelerationDomainsRequest& request, const DeleteAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccelerationDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteAccelerationDomainsOutcomeCallable TeoClient::DeleteAccelerationDomainsCallable(const DeleteAccelerationDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccelerationDomainsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccelerationDomains(request);
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

TeoClient::DeleteContentIdentifierOutcome TeoClient::DeleteContentIdentifier(const DeleteContentIdentifierRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContentIdentifier");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContentIdentifierResponse rsp = DeleteContentIdentifierResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContentIdentifierOutcome(rsp);
        else
            return DeleteContentIdentifierOutcome(o.GetError());
    }
    else
    {
        return DeleteContentIdentifierOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteContentIdentifierAsync(const DeleteContentIdentifierRequest& request, const DeleteContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContentIdentifier(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteContentIdentifierOutcomeCallable TeoClient::DeleteContentIdentifierCallable(const DeleteContentIdentifierRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteContentIdentifierOutcome()>>(
        [this, request]()
        {
            return this->DeleteContentIdentifier(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteCustomErrorPageOutcome TeoClient::DeleteCustomErrorPage(const DeleteCustomErrorPageRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomErrorPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomErrorPageResponse rsp = DeleteCustomErrorPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomErrorPageOutcome(rsp);
        else
            return DeleteCustomErrorPageOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomErrorPageOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteCustomErrorPageAsync(const DeleteCustomErrorPageRequest& request, const DeleteCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomErrorPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteCustomErrorPageOutcomeCallable TeoClient::DeleteCustomErrorPageCallable(const DeleteCustomErrorPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomErrorPageOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomErrorPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteDnsRecordsOutcome TeoClient::DeleteDnsRecords(const DeleteDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDnsRecordsResponse rsp = DeleteDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDnsRecordsOutcome(rsp);
        else
            return DeleteDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DeleteDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteDnsRecordsAsync(const DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteDnsRecordsOutcomeCallable TeoClient::DeleteDnsRecordsCallable(const DeleteDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteFunctionOutcome TeoClient::DeleteFunction(const DeleteFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionResponse rsp = DeleteFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionOutcome(rsp);
        else
            return DeleteFunctionOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteFunctionOutcomeCallable TeoClient::DeleteFunctionCallable(const DeleteFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFunctionOutcome()>>(
        [this, request]()
        {
            return this->DeleteFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteFunctionRulesOutcome TeoClient::DeleteFunctionRules(const DeleteFunctionRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFunctionRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFunctionRulesResponse rsp = DeleteFunctionRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFunctionRulesOutcome(rsp);
        else
            return DeleteFunctionRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteFunctionRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteFunctionRulesAsync(const DeleteFunctionRulesRequest& request, const DeleteFunctionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFunctionRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteFunctionRulesOutcomeCallable TeoClient::DeleteFunctionRulesCallable(const DeleteFunctionRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFunctionRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteFunctionRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteL4ProxyOutcome TeoClient::DeleteL4Proxy(const DeleteL4ProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL4Proxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL4ProxyResponse rsp = DeleteL4ProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL4ProxyOutcome(rsp);
        else
            return DeleteL4ProxyOutcome(o.GetError());
    }
    else
    {
        return DeleteL4ProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteL4ProxyAsync(const DeleteL4ProxyRequest& request, const DeleteL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL4Proxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteL4ProxyOutcomeCallable TeoClient::DeleteL4ProxyCallable(const DeleteL4ProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL4ProxyOutcome()>>(
        [this, request]()
        {
            return this->DeleteL4Proxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteL4ProxyRulesOutcome TeoClient::DeleteL4ProxyRules(const DeleteL4ProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL4ProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL4ProxyRulesResponse rsp = DeleteL4ProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL4ProxyRulesOutcome(rsp);
        else
            return DeleteL4ProxyRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteL4ProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteL4ProxyRulesAsync(const DeleteL4ProxyRulesRequest& request, const DeleteL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL4ProxyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteL4ProxyRulesOutcomeCallable TeoClient::DeleteL4ProxyRulesCallable(const DeleteL4ProxyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL4ProxyRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteL4ProxyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteL7AccRulesOutcome TeoClient::DeleteL7AccRules(const DeleteL7AccRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL7AccRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL7AccRulesResponse rsp = DeleteL7AccRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL7AccRulesOutcome(rsp);
        else
            return DeleteL7AccRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteL7AccRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteL7AccRulesAsync(const DeleteL7AccRulesRequest& request, const DeleteL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL7AccRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteL7AccRulesOutcomeCallable TeoClient::DeleteL7AccRulesCallable(const DeleteL7AccRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL7AccRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteL7AccRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteLoadBalancerOutcome TeoClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
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

void TeoClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteLoadBalancerOutcomeCallable TeoClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancer(request);
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

TeoClient::DeleteRealtimeLogDeliveryTaskOutcome TeoClient::DeleteRealtimeLogDeliveryTask(const DeleteRealtimeLogDeliveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRealtimeLogDeliveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRealtimeLogDeliveryTaskResponse rsp = DeleteRealtimeLogDeliveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRealtimeLogDeliveryTaskOutcome(rsp);
        else
            return DeleteRealtimeLogDeliveryTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRealtimeLogDeliveryTaskOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteRealtimeLogDeliveryTaskAsync(const DeleteRealtimeLogDeliveryTaskRequest& request, const DeleteRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRealtimeLogDeliveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteRealtimeLogDeliveryTaskOutcomeCallable TeoClient::DeleteRealtimeLogDeliveryTaskCallable(const DeleteRealtimeLogDeliveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRealtimeLogDeliveryTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteRealtimeLogDeliveryTask(request);
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

TeoClient::DeleteSecurityIPGroupOutcome TeoClient::DeleteSecurityIPGroup(const DeleteSecurityIPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityIPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityIPGroupResponse rsp = DeleteSecurityIPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityIPGroupOutcome(rsp);
        else
            return DeleteSecurityIPGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityIPGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSecurityIPGroupAsync(const DeleteSecurityIPGroupRequest& request, const DeleteSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityIPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteSecurityIPGroupOutcomeCallable TeoClient::DeleteSecurityIPGroupCallable(const DeleteSecurityIPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityIPGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityIPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteSharedCNAMEOutcome TeoClient::DeleteSharedCNAME(const DeleteSharedCNAMERequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSharedCNAME");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSharedCNAMEResponse rsp = DeleteSharedCNAMEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSharedCNAMEOutcome(rsp);
        else
            return DeleteSharedCNAMEOutcome(o.GetError());
    }
    else
    {
        return DeleteSharedCNAMEOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSharedCNAMEAsync(const DeleteSharedCNAMERequest& request, const DeleteSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSharedCNAME(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteSharedCNAMEOutcomeCallable TeoClient::DeleteSharedCNAMECallable(const DeleteSharedCNAMERequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSharedCNAMEOutcome()>>(
        [this, request]()
        {
            return this->DeleteSharedCNAME(request);
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

TeoClient::DeployConfigGroupVersionOutcome TeoClient::DeployConfigGroupVersion(const DeployConfigGroupVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeployConfigGroupVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployConfigGroupVersionResponse rsp = DeployConfigGroupVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployConfigGroupVersionOutcome(rsp);
        else
            return DeployConfigGroupVersionOutcome(o.GetError());
    }
    else
    {
        return DeployConfigGroupVersionOutcome(outcome.GetError());
    }
}

void TeoClient::DeployConfigGroupVersionAsync(const DeployConfigGroupVersionRequest& request, const DeployConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployConfigGroupVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeployConfigGroupVersionOutcomeCallable TeoClient::DeployConfigGroupVersionCallable(const DeployConfigGroupVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployConfigGroupVersionOutcome()>>(
        [this, request]()
        {
            return this->DeployConfigGroupVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeAccelerationDomainsOutcome TeoClient::DescribeAccelerationDomains(const DescribeAccelerationDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccelerationDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccelerationDomainsResponse rsp = DescribeAccelerationDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccelerationDomainsOutcome(rsp);
        else
            return DescribeAccelerationDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccelerationDomainsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeAccelerationDomainsAsync(const DescribeAccelerationDomainsRequest& request, const DescribeAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccelerationDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeAccelerationDomainsOutcomeCallable TeoClient::DescribeAccelerationDomainsCallable(const DescribeAccelerationDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccelerationDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccelerationDomains(request);
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

TeoClient::DescribeBillingDataOutcome TeoClient::DescribeBillingData(const DescribeBillingDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingDataResponse rsp = DescribeBillingDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingDataOutcome(rsp);
        else
            return DescribeBillingDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeBillingDataAsync(const DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeBillingDataOutcomeCallable TeoClient::DescribeBillingDataCallable(const DescribeBillingDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeConfigGroupVersionDetailOutcome TeoClient::DescribeConfigGroupVersionDetail(const DescribeConfigGroupVersionDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigGroupVersionDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigGroupVersionDetailResponse rsp = DescribeConfigGroupVersionDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigGroupVersionDetailOutcome(rsp);
        else
            return DescribeConfigGroupVersionDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigGroupVersionDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeConfigGroupVersionDetailAsync(const DescribeConfigGroupVersionDetailRequest& request, const DescribeConfigGroupVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigGroupVersionDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeConfigGroupVersionDetailOutcomeCallable TeoClient::DescribeConfigGroupVersionDetailCallable(const DescribeConfigGroupVersionDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigGroupVersionDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigGroupVersionDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeConfigGroupVersionsOutcome TeoClient::DescribeConfigGroupVersions(const DescribeConfigGroupVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigGroupVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigGroupVersionsResponse rsp = DescribeConfigGroupVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigGroupVersionsOutcome(rsp);
        else
            return DescribeConfigGroupVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigGroupVersionsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeConfigGroupVersionsAsync(const DescribeConfigGroupVersionsRequest& request, const DescribeConfigGroupVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigGroupVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeConfigGroupVersionsOutcomeCallable TeoClient::DescribeConfigGroupVersionsCallable(const DescribeConfigGroupVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigGroupVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigGroupVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeContentIdentifiersOutcome TeoClient::DescribeContentIdentifiers(const DescribeContentIdentifiersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContentIdentifiers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContentIdentifiersResponse rsp = DescribeContentIdentifiersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContentIdentifiersOutcome(rsp);
        else
            return DescribeContentIdentifiersOutcome(o.GetError());
    }
    else
    {
        return DescribeContentIdentifiersOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeContentIdentifiersAsync(const DescribeContentIdentifiersRequest& request, const DescribeContentIdentifiersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentIdentifiers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeContentIdentifiersOutcomeCallable TeoClient::DescribeContentIdentifiersCallable(const DescribeContentIdentifiersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContentIdentifiersOutcome()>>(
        [this, request]()
        {
            return this->DescribeContentIdentifiers(request);
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

TeoClient::DescribeCustomErrorPagesOutcome TeoClient::DescribeCustomErrorPages(const DescribeCustomErrorPagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomErrorPages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomErrorPagesResponse rsp = DescribeCustomErrorPagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomErrorPagesOutcome(rsp);
        else
            return DescribeCustomErrorPagesOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomErrorPagesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeCustomErrorPagesAsync(const DescribeCustomErrorPagesRequest& request, const DescribeCustomErrorPagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomErrorPages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeCustomErrorPagesOutcomeCallable TeoClient::DescribeCustomErrorPagesCallable(const DescribeCustomErrorPagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomErrorPagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomErrorPages(request);
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

TeoClient::DescribeDeployHistoryOutcome TeoClient::DescribeDeployHistory(const DescribeDeployHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployHistoryResponse rsp = DescribeDeployHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployHistoryOutcome(rsp);
        else
            return DescribeDeployHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployHistoryOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDeployHistoryAsync(const DescribeDeployHistoryRequest& request, const DescribeDeployHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeployHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDeployHistoryOutcomeCallable TeoClient::DescribeDeployHistoryCallable(const DescribeDeployHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeployHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeployHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnsRecordsOutcome TeoClient::DescribeDnsRecords(const DescribeDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsRecordsResponse rsp = DescribeDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsRecordsOutcome(rsp);
        else
            return DescribeDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsRecordsAsync(const DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsRecordsOutcomeCallable TeoClient::DescribeDnsRecordsCallable(const DescribeDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeEnvironmentsOutcome TeoClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeEnvironmentsOutcomeCallable TeoClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeFunctionRulesOutcome TeoClient::DescribeFunctionRules(const DescribeFunctionRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionRulesResponse rsp = DescribeFunctionRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionRulesOutcome(rsp);
        else
            return DescribeFunctionRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeFunctionRulesAsync(const DescribeFunctionRulesRequest& request, const DescribeFunctionRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFunctionRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeFunctionRulesOutcomeCallable TeoClient::DescribeFunctionRulesCallable(const DescribeFunctionRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFunctionRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFunctionRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeFunctionRuntimeEnvironmentOutcome TeoClient::DescribeFunctionRuntimeEnvironment(const DescribeFunctionRuntimeEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctionRuntimeEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionRuntimeEnvironmentResponse rsp = DescribeFunctionRuntimeEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionRuntimeEnvironmentOutcome(rsp);
        else
            return DescribeFunctionRuntimeEnvironmentOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionRuntimeEnvironmentOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeFunctionRuntimeEnvironmentAsync(const DescribeFunctionRuntimeEnvironmentRequest& request, const DescribeFunctionRuntimeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFunctionRuntimeEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeFunctionRuntimeEnvironmentOutcomeCallable TeoClient::DescribeFunctionRuntimeEnvironmentCallable(const DescribeFunctionRuntimeEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFunctionRuntimeEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->DescribeFunctionRuntimeEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeFunctionsOutcome TeoClient::DescribeFunctions(const DescribeFunctionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFunctions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFunctionsResponse rsp = DescribeFunctionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFunctionsOutcome(rsp);
        else
            return DescribeFunctionsOutcome(o.GetError());
    }
    else
    {
        return DescribeFunctionsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeFunctionsAsync(const DescribeFunctionsRequest& request, const DescribeFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFunctions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeFunctionsOutcomeCallable TeoClient::DescribeFunctionsCallable(const DescribeFunctionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFunctionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFunctions(request);
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

TeoClient::DescribeIPRegionOutcome TeoClient::DescribeIPRegion(const DescribeIPRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPRegionResponse rsp = DescribeIPRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPRegionOutcome(rsp);
        else
            return DescribeIPRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeIPRegionOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeIPRegionAsync(const DescribeIPRegionRequest& request, const DescribeIPRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIPRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeIPRegionOutcomeCallable TeoClient::DescribeIPRegionCallable(const DescribeIPRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIPRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeIPRegion(request);
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

TeoClient::DescribeL4ProxyOutcome TeoClient::DescribeL4Proxy(const DescribeL4ProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4Proxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4ProxyResponse rsp = DescribeL4ProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4ProxyOutcome(rsp);
        else
            return DescribeL4ProxyOutcome(o.GetError());
    }
    else
    {
        return DescribeL4ProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeL4ProxyAsync(const DescribeL4ProxyRequest& request, const DescribeL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4Proxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeL4ProxyOutcomeCallable TeoClient::DescribeL4ProxyCallable(const DescribeL4ProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4ProxyOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4Proxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeL4ProxyRulesOutcome TeoClient::DescribeL4ProxyRules(const DescribeL4ProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4ProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4ProxyRulesResponse rsp = DescribeL4ProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4ProxyRulesOutcome(rsp);
        else
            return DescribeL4ProxyRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeL4ProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeL4ProxyRulesAsync(const DescribeL4ProxyRulesRequest& request, const DescribeL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4ProxyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeL4ProxyRulesOutcomeCallable TeoClient::DescribeL4ProxyRulesCallable(const DescribeL4ProxyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4ProxyRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4ProxyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeL7AccRulesOutcome TeoClient::DescribeL7AccRules(const DescribeL7AccRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7AccRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7AccRulesResponse rsp = DescribeL7AccRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7AccRulesOutcome(rsp);
        else
            return DescribeL7AccRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeL7AccRulesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeL7AccRulesAsync(const DescribeL7AccRulesRequest& request, const DescribeL7AccRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7AccRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeL7AccRulesOutcomeCallable TeoClient::DescribeL7AccRulesCallable(const DescribeL7AccRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7AccRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7AccRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeL7AccSettingOutcome TeoClient::DescribeL7AccSetting(const DescribeL7AccSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7AccSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7AccSettingResponse rsp = DescribeL7AccSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7AccSettingOutcome(rsp);
        else
            return DescribeL7AccSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeL7AccSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeL7AccSettingAsync(const DescribeL7AccSettingRequest& request, const DescribeL7AccSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7AccSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeL7AccSettingOutcomeCallable TeoClient::DescribeL7AccSettingCallable(const DescribeL7AccSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7AccSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7AccSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLoadBalancerListOutcome TeoClient::DescribeLoadBalancerList(const DescribeLoadBalancerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerListResponse rsp = DescribeLoadBalancerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerListOutcome(rsp);
        else
            return DescribeLoadBalancerListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerListOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLoadBalancerListAsync(const DescribeLoadBalancerListRequest& request, const DescribeLoadBalancerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLoadBalancerListOutcomeCallable TeoClient::DescribeLoadBalancerListCallable(const DescribeLoadBalancerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerList(request);
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

TeoClient::DescribeOriginGroupHealthStatusOutcome TeoClient::DescribeOriginGroupHealthStatus(const DescribeOriginGroupHealthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginGroupHealthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginGroupHealthStatusResponse rsp = DescribeOriginGroupHealthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginGroupHealthStatusOutcome(rsp);
        else
            return DescribeOriginGroupHealthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginGroupHealthStatusOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginGroupHealthStatusAsync(const DescribeOriginGroupHealthStatusRequest& request, const DescribeOriginGroupHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOriginGroupHealthStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeOriginGroupHealthStatusOutcomeCallable TeoClient::DescribeOriginGroupHealthStatusCallable(const DescribeOriginGroupHealthStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOriginGroupHealthStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeOriginGroupHealthStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeOriginProtectionOutcome TeoClient::DescribeOriginProtection(const DescribeOriginProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginProtectionResponse rsp = DescribeOriginProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginProtectionOutcome(rsp);
        else
            return DescribeOriginProtectionOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginProtectionOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginProtectionAsync(const DescribeOriginProtectionRequest& request, const DescribeOriginProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOriginProtection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeOriginProtectionOutcomeCallable TeoClient::DescribeOriginProtectionCallable(const DescribeOriginProtectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOriginProtectionOutcome()>>(
        [this, request]()
        {
            return this->DescribeOriginProtection(request);
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

TeoClient::DescribePlansOutcome TeoClient::DescribePlans(const DescribePlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlansResponse rsp = DescribePlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlansOutcome(rsp);
        else
            return DescribePlansOutcome(o.GetError());
    }
    else
    {
        return DescribePlansOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePlansAsync(const DescribePlansRequest& request, const DescribePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePlans(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePlansOutcomeCallable TeoClient::DescribePlansCallable(const DescribePlansRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePlansOutcome()>>(
        [this, request]()
        {
            return this->DescribePlans(request);
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

TeoClient::DescribeRealtimeLogDeliveryTasksOutcome TeoClient::DescribeRealtimeLogDeliveryTasks(const DescribeRealtimeLogDeliveryTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealtimeLogDeliveryTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealtimeLogDeliveryTasksResponse rsp = DescribeRealtimeLogDeliveryTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealtimeLogDeliveryTasksOutcome(rsp);
        else
            return DescribeRealtimeLogDeliveryTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeRealtimeLogDeliveryTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeRealtimeLogDeliveryTasksAsync(const DescribeRealtimeLogDeliveryTasksRequest& request, const DescribeRealtimeLogDeliveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealtimeLogDeliveryTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeRealtimeLogDeliveryTasksOutcomeCallable TeoClient::DescribeRealtimeLogDeliveryTasksCallable(const DescribeRealtimeLogDeliveryTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealtimeLogDeliveryTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealtimeLogDeliveryTasks(request);
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

TeoClient::DescribeSecurityIPGroupOutcome TeoClient::DescribeSecurityIPGroup(const DescribeSecurityIPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityIPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityIPGroupResponse rsp = DescribeSecurityIPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityIPGroupOutcome(rsp);
        else
            return DescribeSecurityIPGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityIPGroupOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityIPGroupAsync(const DescribeSecurityIPGroupRequest& request, const DescribeSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityIPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityIPGroupOutcomeCallable TeoClient::DescribeSecurityIPGroupCallable(const DescribeSecurityIPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityIPGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityIPGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeSecurityIPGroupInfoOutcome TeoClient::DescribeSecurityIPGroupInfo(const DescribeSecurityIPGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityIPGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityIPGroupInfoResponse rsp = DescribeSecurityIPGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityIPGroupInfoOutcome(rsp);
        else
            return DescribeSecurityIPGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityIPGroupInfoOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityIPGroupInfoAsync(const DescribeSecurityIPGroupInfoRequest& request, const DescribeSecurityIPGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityIPGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityIPGroupInfoOutcomeCallable TeoClient::DescribeSecurityIPGroupInfoCallable(const DescribeSecurityIPGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityIPGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityIPGroupInfo(request);
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

TeoClient::DescribeSecurityTemplateBindingsOutcome TeoClient::DescribeSecurityTemplateBindings(const DescribeSecurityTemplateBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityTemplateBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityTemplateBindingsResponse rsp = DescribeSecurityTemplateBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityTemplateBindingsOutcome(rsp);
        else
            return DescribeSecurityTemplateBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityTemplateBindingsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityTemplateBindingsAsync(const DescribeSecurityTemplateBindingsRequest& request, const DescribeSecurityTemplateBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityTemplateBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeSecurityTemplateBindingsOutcomeCallable TeoClient::DescribeSecurityTemplateBindingsCallable(const DescribeSecurityTemplateBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityTemplateBindingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityTemplateBindings(request);
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

TeoClient::DescribeZoneConfigImportResultOutcome TeoClient::DescribeZoneConfigImportResult(const DescribeZoneConfigImportResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneConfigImportResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneConfigImportResultResponse rsp = DescribeZoneConfigImportResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneConfigImportResultOutcome(rsp);
        else
            return DescribeZoneConfigImportResultOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneConfigImportResultOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneConfigImportResultAsync(const DescribeZoneConfigImportResultRequest& request, const DescribeZoneConfigImportResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneConfigImportResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneConfigImportResultOutcomeCallable TeoClient::DescribeZoneConfigImportResultCallable(const DescribeZoneConfigImportResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneConfigImportResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneConfigImportResult(request);
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

TeoClient::DestroyPlanOutcome TeoClient::DestroyPlan(const DestroyPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyPlanResponse rsp = DestroyPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyPlanOutcome(rsp);
        else
            return DestroyPlanOutcome(o.GetError());
    }
    else
    {
        return DestroyPlanOutcome(outcome.GetError());
    }
}

void TeoClient::DestroyPlanAsync(const DestroyPlanRequest& request, const DestroyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DestroyPlanOutcomeCallable TeoClient::DestroyPlanCallable(const DestroyPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyPlanOutcome()>>(
        [this, request]()
        {
            return this->DestroyPlan(request);
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

TeoClient::ExportZoneConfigOutcome TeoClient::ExportZoneConfig(const ExportZoneConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ExportZoneConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportZoneConfigResponse rsp = ExportZoneConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportZoneConfigOutcome(rsp);
        else
            return ExportZoneConfigOutcome(o.GetError());
    }
    else
    {
        return ExportZoneConfigOutcome(outcome.GetError());
    }
}

void TeoClient::ExportZoneConfigAsync(const ExportZoneConfigRequest& request, const ExportZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExportZoneConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ExportZoneConfigOutcomeCallable TeoClient::ExportZoneConfigCallable(const ExportZoneConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExportZoneConfigOutcome()>>(
        [this, request]()
        {
            return this->ExportZoneConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::HandleFunctionRuntimeEnvironmentOutcome TeoClient::HandleFunctionRuntimeEnvironment(const HandleFunctionRuntimeEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "HandleFunctionRuntimeEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HandleFunctionRuntimeEnvironmentResponse rsp = HandleFunctionRuntimeEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HandleFunctionRuntimeEnvironmentOutcome(rsp);
        else
            return HandleFunctionRuntimeEnvironmentOutcome(o.GetError());
    }
    else
    {
        return HandleFunctionRuntimeEnvironmentOutcome(outcome.GetError());
    }
}

void TeoClient::HandleFunctionRuntimeEnvironmentAsync(const HandleFunctionRuntimeEnvironmentRequest& request, const HandleFunctionRuntimeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HandleFunctionRuntimeEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::HandleFunctionRuntimeEnvironmentOutcomeCallable TeoClient::HandleFunctionRuntimeEnvironmentCallable(const HandleFunctionRuntimeEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HandleFunctionRuntimeEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->HandleFunctionRuntimeEnvironment(request);
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

TeoClient::ImportZoneConfigOutcome TeoClient::ImportZoneConfig(const ImportZoneConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ImportZoneConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportZoneConfigResponse rsp = ImportZoneConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportZoneConfigOutcome(rsp);
        else
            return ImportZoneConfigOutcome(o.GetError());
    }
    else
    {
        return ImportZoneConfigOutcome(outcome.GetError());
    }
}

void TeoClient::ImportZoneConfigAsync(const ImportZoneConfigRequest& request, const ImportZoneConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportZoneConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ImportZoneConfigOutcomeCallable TeoClient::ImportZoneConfigCallable(const ImportZoneConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportZoneConfigOutcome()>>(
        [this, request]()
        {
            return this->ImportZoneConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::IncreasePlanQuotaOutcome TeoClient::IncreasePlanQuota(const IncreasePlanQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "IncreasePlanQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IncreasePlanQuotaResponse rsp = IncreasePlanQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IncreasePlanQuotaOutcome(rsp);
        else
            return IncreasePlanQuotaOutcome(o.GetError());
    }
    else
    {
        return IncreasePlanQuotaOutcome(outcome.GetError());
    }
}

void TeoClient::IncreasePlanQuotaAsync(const IncreasePlanQuotaRequest& request, const IncreasePlanQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IncreasePlanQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::IncreasePlanQuotaOutcomeCallable TeoClient::IncreasePlanQuotaCallable(const IncreasePlanQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IncreasePlanQuotaOutcome()>>(
        [this, request]()
        {
            return this->IncreasePlanQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAccelerationDomainOutcome TeoClient::ModifyAccelerationDomain(const ModifyAccelerationDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccelerationDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccelerationDomainResponse rsp = ModifyAccelerationDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccelerationDomainOutcome(rsp);
        else
            return ModifyAccelerationDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyAccelerationDomainOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAccelerationDomainAsync(const ModifyAccelerationDomainRequest& request, const ModifyAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccelerationDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAccelerationDomainOutcomeCallable TeoClient::ModifyAccelerationDomainCallable(const ModifyAccelerationDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccelerationDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccelerationDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyAccelerationDomainStatusesOutcome TeoClient::ModifyAccelerationDomainStatuses(const ModifyAccelerationDomainStatusesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccelerationDomainStatuses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccelerationDomainStatusesResponse rsp = ModifyAccelerationDomainStatusesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccelerationDomainStatusesOutcome(rsp);
        else
            return ModifyAccelerationDomainStatusesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccelerationDomainStatusesOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyAccelerationDomainStatusesAsync(const ModifyAccelerationDomainStatusesRequest& request, const ModifyAccelerationDomainStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccelerationDomainStatuses(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyAccelerationDomainStatusesOutcomeCallable TeoClient::ModifyAccelerationDomainStatusesCallable(const ModifyAccelerationDomainStatusesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccelerationDomainStatusesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccelerationDomainStatuses(request);
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

TeoClient::ModifyContentIdentifierOutcome TeoClient::ModifyContentIdentifier(const ModifyContentIdentifierRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContentIdentifier");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContentIdentifierResponse rsp = ModifyContentIdentifierResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContentIdentifierOutcome(rsp);
        else
            return ModifyContentIdentifierOutcome(o.GetError());
    }
    else
    {
        return ModifyContentIdentifierOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyContentIdentifierAsync(const ModifyContentIdentifierRequest& request, const ModifyContentIdentifierAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContentIdentifier(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyContentIdentifierOutcomeCallable TeoClient::ModifyContentIdentifierCallable(const ModifyContentIdentifierRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContentIdentifierOutcome()>>(
        [this, request]()
        {
            return this->ModifyContentIdentifier(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyCustomErrorPageOutcome TeoClient::ModifyCustomErrorPage(const ModifyCustomErrorPageRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomErrorPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomErrorPageResponse rsp = ModifyCustomErrorPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomErrorPageOutcome(rsp);
        else
            return ModifyCustomErrorPageOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomErrorPageOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyCustomErrorPageAsync(const ModifyCustomErrorPageRequest& request, const ModifyCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomErrorPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyCustomErrorPageOutcomeCallable TeoClient::ModifyCustomErrorPageCallable(const ModifyCustomErrorPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomErrorPageOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomErrorPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDnsRecordsOutcome TeoClient::ModifyDnsRecords(const ModifyDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnsRecordsResponse rsp = ModifyDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnsRecordsOutcome(rsp);
        else
            return ModifyDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return ModifyDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnsRecordsAsync(const ModifyDnsRecordsRequest& request, const ModifyDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnsRecordsOutcomeCallable TeoClient::ModifyDnsRecordsCallable(const ModifyDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDnsRecordsStatusOutcome TeoClient::ModifyDnsRecordsStatus(const ModifyDnsRecordsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnsRecordsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnsRecordsStatusResponse rsp = ModifyDnsRecordsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnsRecordsStatusOutcome(rsp);
        else
            return ModifyDnsRecordsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDnsRecordsStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnsRecordsStatusAsync(const ModifyDnsRecordsStatusRequest& request, const ModifyDnsRecordsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnsRecordsStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnsRecordsStatusOutcomeCallable TeoClient::ModifyDnsRecordsStatusCallable(const ModifyDnsRecordsStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnsRecordsStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnsRecordsStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyFunctionOutcome TeoClient::ModifyFunction(const ModifyFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFunctionResponse rsp = ModifyFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFunctionOutcome(rsp);
        else
            return ModifyFunctionOutcome(o.GetError());
    }
    else
    {
        return ModifyFunctionOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyFunctionAsync(const ModifyFunctionRequest& request, const ModifyFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyFunctionOutcomeCallable TeoClient::ModifyFunctionCallable(const ModifyFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFunctionOutcome()>>(
        [this, request]()
        {
            return this->ModifyFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyFunctionRuleOutcome TeoClient::ModifyFunctionRule(const ModifyFunctionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFunctionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFunctionRuleResponse rsp = ModifyFunctionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFunctionRuleOutcome(rsp);
        else
            return ModifyFunctionRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFunctionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyFunctionRuleAsync(const ModifyFunctionRuleRequest& request, const ModifyFunctionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFunctionRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyFunctionRuleOutcomeCallable TeoClient::ModifyFunctionRuleCallable(const ModifyFunctionRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFunctionRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyFunctionRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyFunctionRulePriorityOutcome TeoClient::ModifyFunctionRulePriority(const ModifyFunctionRulePriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFunctionRulePriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFunctionRulePriorityResponse rsp = ModifyFunctionRulePriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFunctionRulePriorityOutcome(rsp);
        else
            return ModifyFunctionRulePriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyFunctionRulePriorityOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyFunctionRulePriorityAsync(const ModifyFunctionRulePriorityRequest& request, const ModifyFunctionRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFunctionRulePriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyFunctionRulePriorityOutcomeCallable TeoClient::ModifyFunctionRulePriorityCallable(const ModifyFunctionRulePriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFunctionRulePriorityOutcome()>>(
        [this, request]()
        {
            return this->ModifyFunctionRulePriority(request);
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

TeoClient::ModifyL4ProxyOutcome TeoClient::ModifyL4Proxy(const ModifyL4ProxyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4Proxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4ProxyResponse rsp = ModifyL4ProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4ProxyOutcome(rsp);
        else
            return ModifyL4ProxyOutcome(o.GetError());
    }
    else
    {
        return ModifyL4ProxyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL4ProxyAsync(const ModifyL4ProxyRequest& request, const ModifyL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4Proxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL4ProxyOutcomeCallable TeoClient::ModifyL4ProxyCallable(const ModifyL4ProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4ProxyOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4Proxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL4ProxyRulesOutcome TeoClient::ModifyL4ProxyRules(const ModifyL4ProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4ProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4ProxyRulesResponse rsp = ModifyL4ProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4ProxyRulesOutcome(rsp);
        else
            return ModifyL4ProxyRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyL4ProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL4ProxyRulesAsync(const ModifyL4ProxyRulesRequest& request, const ModifyL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4ProxyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL4ProxyRulesOutcomeCallable TeoClient::ModifyL4ProxyRulesCallable(const ModifyL4ProxyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4ProxyRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4ProxyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL4ProxyRulesStatusOutcome TeoClient::ModifyL4ProxyRulesStatus(const ModifyL4ProxyRulesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4ProxyRulesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4ProxyRulesStatusResponse rsp = ModifyL4ProxyRulesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4ProxyRulesStatusOutcome(rsp);
        else
            return ModifyL4ProxyRulesStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyL4ProxyRulesStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL4ProxyRulesStatusAsync(const ModifyL4ProxyRulesStatusRequest& request, const ModifyL4ProxyRulesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4ProxyRulesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL4ProxyRulesStatusOutcomeCallable TeoClient::ModifyL4ProxyRulesStatusCallable(const ModifyL4ProxyRulesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4ProxyRulesStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4ProxyRulesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL4ProxyStatusOutcome TeoClient::ModifyL4ProxyStatus(const ModifyL4ProxyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4ProxyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4ProxyStatusResponse rsp = ModifyL4ProxyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4ProxyStatusOutcome(rsp);
        else
            return ModifyL4ProxyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyL4ProxyStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL4ProxyStatusAsync(const ModifyL4ProxyStatusRequest& request, const ModifyL4ProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4ProxyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL4ProxyStatusOutcomeCallable TeoClient::ModifyL4ProxyStatusCallable(const ModifyL4ProxyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4ProxyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4ProxyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL7AccRuleOutcome TeoClient::ModifyL7AccRule(const ModifyL7AccRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7AccRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7AccRuleResponse rsp = ModifyL7AccRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7AccRuleOutcome(rsp);
        else
            return ModifyL7AccRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyL7AccRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL7AccRuleAsync(const ModifyL7AccRuleRequest& request, const ModifyL7AccRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7AccRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL7AccRuleOutcomeCallable TeoClient::ModifyL7AccRuleCallable(const ModifyL7AccRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7AccRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7AccRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL7AccRulePriorityOutcome TeoClient::ModifyL7AccRulePriority(const ModifyL7AccRulePriorityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7AccRulePriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7AccRulePriorityResponse rsp = ModifyL7AccRulePriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7AccRulePriorityOutcome(rsp);
        else
            return ModifyL7AccRulePriorityOutcome(o.GetError());
    }
    else
    {
        return ModifyL7AccRulePriorityOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL7AccRulePriorityAsync(const ModifyL7AccRulePriorityRequest& request, const ModifyL7AccRulePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7AccRulePriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL7AccRulePriorityOutcomeCallable TeoClient::ModifyL7AccRulePriorityCallable(const ModifyL7AccRulePriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7AccRulePriorityOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7AccRulePriority(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyL7AccSettingOutcome TeoClient::ModifyL7AccSetting(const ModifyL7AccSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7AccSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7AccSettingResponse rsp = ModifyL7AccSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7AccSettingOutcome(rsp);
        else
            return ModifyL7AccSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyL7AccSettingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyL7AccSettingAsync(const ModifyL7AccSettingRequest& request, const ModifyL7AccSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7AccSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyL7AccSettingOutcomeCallable TeoClient::ModifyL7AccSettingCallable(const ModifyL7AccSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7AccSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7AccSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyLoadBalancerOutcome TeoClient::ModifyLoadBalancer(const ModifyLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerResponse rsp = ModifyLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerOutcome(rsp);
        else
            return ModifyLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLoadBalancerAsync(const ModifyLoadBalancerRequest& request, const ModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyLoadBalancerOutcomeCallable TeoClient::ModifyLoadBalancerCallable(const ModifyLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancer(request);
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

TeoClient::ModifyPlanOutcome TeoClient::ModifyPlan(const ModifyPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPlanResponse rsp = ModifyPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPlanOutcome(rsp);
        else
            return ModifyPlanOutcome(o.GetError());
    }
    else
    {
        return ModifyPlanOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyPlanAsync(const ModifyPlanRequest& request, const ModifyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyPlanOutcomeCallable TeoClient::ModifyPlanCallable(const ModifyPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPlanOutcome()>>(
        [this, request]()
        {
            return this->ModifyPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyRealtimeLogDeliveryTaskOutcome TeoClient::ModifyRealtimeLogDeliveryTask(const ModifyRealtimeLogDeliveryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRealtimeLogDeliveryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRealtimeLogDeliveryTaskResponse rsp = ModifyRealtimeLogDeliveryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRealtimeLogDeliveryTaskOutcome(rsp);
        else
            return ModifyRealtimeLogDeliveryTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyRealtimeLogDeliveryTaskOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyRealtimeLogDeliveryTaskAsync(const ModifyRealtimeLogDeliveryTaskRequest& request, const ModifyRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRealtimeLogDeliveryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyRealtimeLogDeliveryTaskOutcomeCallable TeoClient::ModifyRealtimeLogDeliveryTaskCallable(const ModifyRealtimeLogDeliveryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRealtimeLogDeliveryTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyRealtimeLogDeliveryTask(request);
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

TeoClient::ModifySecurityIPGroupOutcome TeoClient::ModifySecurityIPGroup(const ModifySecurityIPGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityIPGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityIPGroupResponse rsp = ModifySecurityIPGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityIPGroupOutcome(rsp);
        else
            return ModifySecurityIPGroupOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityIPGroupOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityIPGroupAsync(const ModifySecurityIPGroupRequest& request, const ModifySecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityIPGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifySecurityIPGroupOutcomeCallable TeoClient::ModifySecurityIPGroupCallable(const ModifySecurityIPGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityIPGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityIPGroup(request);
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

TeoClient::RenewPlanOutcome TeoClient::RenewPlan(const RenewPlanRequest &request)
{
    auto outcome = MakeRequest(request, "RenewPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewPlanResponse rsp = RenewPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewPlanOutcome(rsp);
        else
            return RenewPlanOutcome(o.GetError());
    }
    else
    {
        return RenewPlanOutcome(outcome.GetError());
    }
}

void TeoClient::RenewPlanAsync(const RenewPlanRequest& request, const RenewPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewPlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::RenewPlanOutcomeCallable TeoClient::RenewPlanCallable(const RenewPlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewPlanOutcome()>>(
        [this, request]()
        {
            return this->RenewPlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::UpgradePlanOutcome TeoClient::UpgradePlan(const UpgradePlanRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradePlanResponse rsp = UpgradePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradePlanOutcome(rsp);
        else
            return UpgradePlanOutcome(o.GetError());
    }
    else
    {
        return UpgradePlanOutcome(outcome.GetError());
    }
}

void TeoClient::UpgradePlanAsync(const UpgradePlanRequest& request, const UpgradePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpgradePlan(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::UpgradePlanOutcomeCallable TeoClient::UpgradePlanCallable(const UpgradePlanRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpgradePlanOutcome()>>(
        [this, request]()
        {
            return this->UpgradePlan(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::VerifyOwnershipOutcome TeoClient::VerifyOwnership(const VerifyOwnershipRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyOwnership");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyOwnershipResponse rsp = VerifyOwnershipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyOwnershipOutcome(rsp);
        else
            return VerifyOwnershipOutcome(o.GetError());
    }
    else
    {
        return VerifyOwnershipOutcome(outcome.GetError());
    }
}

void TeoClient::VerifyOwnershipAsync(const VerifyOwnershipRequest& request, const VerifyOwnershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyOwnership(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::VerifyOwnershipOutcomeCallable TeoClient::VerifyOwnershipCallable(const VerifyOwnershipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyOwnershipOutcome()>>(
        [this, request]()
        {
            return this->VerifyOwnership(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

