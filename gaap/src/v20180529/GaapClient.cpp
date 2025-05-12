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

#include <tencentcloud/gaap/v20180529/GaapClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gaap::V20180529;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-29";
    const string ENDPOINT = "gaap.tencentcloudapi.com";
}

GaapClient::GaapClient(const Credential &credential, const string &region) :
    GaapClient(credential, region, ClientProfile())
{
}

GaapClient::GaapClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GaapClient::AddRealServersOutcome GaapClient::AddRealServers(const AddRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "AddRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddRealServersResponse rsp = AddRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddRealServersOutcome(rsp);
        else
            return AddRealServersOutcome(o.GetError());
    }
    else
    {
        return AddRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::AddRealServersAsync(const AddRealServersRequest& request, const AddRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::AddRealServersOutcomeCallable GaapClient::AddRealServersCallable(const AddRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddRealServersOutcome()>>(
        [this, request]()
        {
            return this->AddRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::BanAndRecoverProxyOutcome GaapClient::BanAndRecoverProxy(const BanAndRecoverProxyRequest &request)
{
    auto outcome = MakeRequest(request, "BanAndRecoverProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BanAndRecoverProxyResponse rsp = BanAndRecoverProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BanAndRecoverProxyOutcome(rsp);
        else
            return BanAndRecoverProxyOutcome(o.GetError());
    }
    else
    {
        return BanAndRecoverProxyOutcome(outcome.GetError());
    }
}

void GaapClient::BanAndRecoverProxyAsync(const BanAndRecoverProxyRequest& request, const BanAndRecoverProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BanAndRecoverProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::BanAndRecoverProxyOutcomeCallable GaapClient::BanAndRecoverProxyCallable(const BanAndRecoverProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BanAndRecoverProxyOutcome()>>(
        [this, request]()
        {
            return this->BanAndRecoverProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::BindListenerRealServersOutcome GaapClient::BindListenerRealServers(const BindListenerRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "BindListenerRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindListenerRealServersResponse rsp = BindListenerRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindListenerRealServersOutcome(rsp);
        else
            return BindListenerRealServersOutcome(o.GetError());
    }
    else
    {
        return BindListenerRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::BindListenerRealServersAsync(const BindListenerRealServersRequest& request, const BindListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindListenerRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::BindListenerRealServersOutcomeCallable GaapClient::BindListenerRealServersCallable(const BindListenerRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindListenerRealServersOutcome()>>(
        [this, request]()
        {
            return this->BindListenerRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::BindRuleRealServersOutcome GaapClient::BindRuleRealServers(const BindRuleRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "BindRuleRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRuleRealServersResponse rsp = BindRuleRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRuleRealServersOutcome(rsp);
        else
            return BindRuleRealServersOutcome(o.GetError());
    }
    else
    {
        return BindRuleRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::BindRuleRealServersAsync(const BindRuleRealServersRequest& request, const BindRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindRuleRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::BindRuleRealServersOutcomeCallable GaapClient::BindRuleRealServersCallable(const BindRuleRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindRuleRealServersOutcome()>>(
        [this, request]()
        {
            return this->BindRuleRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CheckProxyCreateOutcome GaapClient::CheckProxyCreate(const CheckProxyCreateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckProxyCreate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckProxyCreateResponse rsp = CheckProxyCreateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckProxyCreateOutcome(rsp);
        else
            return CheckProxyCreateOutcome(o.GetError());
    }
    else
    {
        return CheckProxyCreateOutcome(outcome.GetError());
    }
}

void GaapClient::CheckProxyCreateAsync(const CheckProxyCreateRequest& request, const CheckProxyCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckProxyCreate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CheckProxyCreateOutcomeCallable GaapClient::CheckProxyCreateCallable(const CheckProxyCreateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckProxyCreateOutcome()>>(
        [this, request]()
        {
            return this->CheckProxyCreate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CloseProxiesOutcome GaapClient::CloseProxies(const CloseProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxiesResponse rsp = CloseProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxiesOutcome(rsp);
        else
            return CloseProxiesOutcome(o.GetError());
    }
    else
    {
        return CloseProxiesOutcome(outcome.GetError());
    }
}

void GaapClient::CloseProxiesAsync(const CloseProxiesRequest& request, const CloseProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CloseProxiesOutcomeCallable GaapClient::CloseProxiesCallable(const CloseProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseProxiesOutcome()>>(
        [this, request]()
        {
            return this->CloseProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CloseProxyGroupOutcome GaapClient::CloseProxyGroup(const CloseProxyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CloseProxyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseProxyGroupResponse rsp = CloseProxyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseProxyGroupOutcome(rsp);
        else
            return CloseProxyGroupOutcome(o.GetError());
    }
    else
    {
        return CloseProxyGroupOutcome(outcome.GetError());
    }
}

void GaapClient::CloseProxyGroupAsync(const CloseProxyGroupRequest& request, const CloseProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseProxyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CloseProxyGroupOutcomeCallable GaapClient::CloseProxyGroupCallable(const CloseProxyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseProxyGroupOutcome()>>(
        [this, request]()
        {
            return this->CloseProxyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CloseSecurityPolicyOutcome GaapClient::CloseSecurityPolicy(const CloseSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CloseSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseSecurityPolicyResponse rsp = CloseSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseSecurityPolicyOutcome(rsp);
        else
            return CloseSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return CloseSecurityPolicyOutcome(outcome.GetError());
    }
}

void GaapClient::CloseSecurityPolicyAsync(const CloseSecurityPolicyRequest& request, const CloseSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CloseSecurityPolicyOutcomeCallable GaapClient::CloseSecurityPolicyCallable(const CloseSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->CloseSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateCertificateOutcome GaapClient::CreateCertificate(const CreateCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCertificateResponse rsp = CreateCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCertificateOutcome(rsp);
        else
            return CreateCertificateOutcome(o.GetError());
    }
    else
    {
        return CreateCertificateOutcome(outcome.GetError());
    }
}

void GaapClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateCertificateOutcomeCallable GaapClient::CreateCertificateCallable(const CreateCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCertificateOutcome()>>(
        [this, request]()
        {
            return this->CreateCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateCustomHeaderOutcome GaapClient::CreateCustomHeader(const CreateCustomHeaderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomHeader");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomHeaderResponse rsp = CreateCustomHeaderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomHeaderOutcome(rsp);
        else
            return CreateCustomHeaderOutcome(o.GetError());
    }
    else
    {
        return CreateCustomHeaderOutcome(outcome.GetError());
    }
}

void GaapClient::CreateCustomHeaderAsync(const CreateCustomHeaderRequest& request, const CreateCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomHeader(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateCustomHeaderOutcomeCallable GaapClient::CreateCustomHeaderCallable(const CreateCustomHeaderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomHeaderOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomHeader(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateDomainOutcome GaapClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void GaapClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateDomainOutcomeCallable GaapClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateDomainErrorPageInfoOutcome GaapClient::CreateDomainErrorPageInfo(const CreateDomainErrorPageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainErrorPageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainErrorPageInfoResponse rsp = CreateDomainErrorPageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainErrorPageInfoOutcome(rsp);
        else
            return CreateDomainErrorPageInfoOutcome(o.GetError());
    }
    else
    {
        return CreateDomainErrorPageInfoOutcome(outcome.GetError());
    }
}

void GaapClient::CreateDomainErrorPageInfoAsync(const CreateDomainErrorPageInfoRequest& request, const CreateDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainErrorPageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateDomainErrorPageInfoOutcomeCallable GaapClient::CreateDomainErrorPageInfoCallable(const CreateDomainErrorPageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainErrorPageInfoOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainErrorPageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateGlobalDomainOutcome GaapClient::CreateGlobalDomain(const CreateGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalDomainResponse rsp = CreateGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalDomainOutcome(rsp);
        else
            return CreateGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalDomainOutcome(outcome.GetError());
    }
}

void GaapClient::CreateGlobalDomainAsync(const CreateGlobalDomainRequest& request, const CreateGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateGlobalDomainOutcomeCallable GaapClient::CreateGlobalDomainCallable(const CreateGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateGlobalDomainDnsOutcome GaapClient::CreateGlobalDomainDns(const CreateGlobalDomainDnsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGlobalDomainDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGlobalDomainDnsResponse rsp = CreateGlobalDomainDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGlobalDomainDnsOutcome(rsp);
        else
            return CreateGlobalDomainDnsOutcome(o.GetError());
    }
    else
    {
        return CreateGlobalDomainDnsOutcome(outcome.GetError());
    }
}

void GaapClient::CreateGlobalDomainDnsAsync(const CreateGlobalDomainDnsRequest& request, const CreateGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGlobalDomainDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateGlobalDomainDnsOutcomeCallable GaapClient::CreateGlobalDomainDnsCallable(const CreateGlobalDomainDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGlobalDomainDnsOutcome()>>(
        [this, request]()
        {
            return this->CreateGlobalDomainDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateHTTPListenerOutcome GaapClient::CreateHTTPListener(const CreateHTTPListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHTTPListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHTTPListenerResponse rsp = CreateHTTPListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHTTPListenerOutcome(rsp);
        else
            return CreateHTTPListenerOutcome(o.GetError());
    }
    else
    {
        return CreateHTTPListenerOutcome(outcome.GetError());
    }
}

void GaapClient::CreateHTTPListenerAsync(const CreateHTTPListenerRequest& request, const CreateHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHTTPListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateHTTPListenerOutcomeCallable GaapClient::CreateHTTPListenerCallable(const CreateHTTPListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHTTPListenerOutcome()>>(
        [this, request]()
        {
            return this->CreateHTTPListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateHTTPSListenerOutcome GaapClient::CreateHTTPSListener(const CreateHTTPSListenerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHTTPSListener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHTTPSListenerResponse rsp = CreateHTTPSListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHTTPSListenerOutcome(rsp);
        else
            return CreateHTTPSListenerOutcome(o.GetError());
    }
    else
    {
        return CreateHTTPSListenerOutcome(outcome.GetError());
    }
}

void GaapClient::CreateHTTPSListenerAsync(const CreateHTTPSListenerRequest& request, const CreateHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHTTPSListener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateHTTPSListenerOutcomeCallable GaapClient::CreateHTTPSListenerCallable(const CreateHTTPSListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHTTPSListenerOutcome()>>(
        [this, request]()
        {
            return this->CreateHTTPSListener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateProxyOutcome GaapClient::CreateProxy(const CreateProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyResponse rsp = CreateProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyOutcome(rsp);
        else
            return CreateProxyOutcome(o.GetError());
    }
    else
    {
        return CreateProxyOutcome(outcome.GetError());
    }
}

void GaapClient::CreateProxyAsync(const CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateProxyOutcomeCallable GaapClient::CreateProxyCallable(const CreateProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateProxyGroupOutcome GaapClient::CreateProxyGroup(const CreateProxyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyGroupResponse rsp = CreateProxyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyGroupOutcome(rsp);
        else
            return CreateProxyGroupOutcome(o.GetError());
    }
    else
    {
        return CreateProxyGroupOutcome(outcome.GetError());
    }
}

void GaapClient::CreateProxyGroupAsync(const CreateProxyGroupRequest& request, const CreateProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateProxyGroupOutcomeCallable GaapClient::CreateProxyGroupCallable(const CreateProxyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxyGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateProxyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateProxyGroupDomainOutcome GaapClient::CreateProxyGroupDomain(const CreateProxyGroupDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProxyGroupDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProxyGroupDomainResponse rsp = CreateProxyGroupDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProxyGroupDomainOutcome(rsp);
        else
            return CreateProxyGroupDomainOutcome(o.GetError());
    }
    else
    {
        return CreateProxyGroupDomainOutcome(outcome.GetError());
    }
}

void GaapClient::CreateProxyGroupDomainAsync(const CreateProxyGroupDomainRequest& request, const CreateProxyGroupDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProxyGroupDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateProxyGroupDomainOutcomeCallable GaapClient::CreateProxyGroupDomainCallable(const CreateProxyGroupDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProxyGroupDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateProxyGroupDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateRuleOutcome GaapClient::CreateRule(const CreateRuleRequest &request)
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

void GaapClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateRuleOutcomeCallable GaapClient::CreateRuleCallable(const CreateRuleRequest &request)
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

GaapClient::CreateSecurityPolicyOutcome GaapClient::CreateSecurityPolicy(const CreateSecurityPolicyRequest &request)
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

void GaapClient::CreateSecurityPolicyAsync(const CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateSecurityPolicyOutcomeCallable GaapClient::CreateSecurityPolicyCallable(const CreateSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateSecurityRulesOutcome GaapClient::CreateSecurityRules(const CreateSecurityRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityRulesResponse rsp = CreateSecurityRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityRulesOutcome(rsp);
        else
            return CreateSecurityRulesOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityRulesOutcome(outcome.GetError());
    }
}

void GaapClient::CreateSecurityRulesAsync(const CreateSecurityRulesRequest& request, const CreateSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSecurityRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateSecurityRulesOutcomeCallable GaapClient::CreateSecurityRulesCallable(const CreateSecurityRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSecurityRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateSecurityRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateTCPListenersOutcome GaapClient::CreateTCPListeners(const CreateTCPListenersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTCPListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTCPListenersResponse rsp = CreateTCPListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTCPListenersOutcome(rsp);
        else
            return CreateTCPListenersOutcome(o.GetError());
    }
    else
    {
        return CreateTCPListenersOutcome(outcome.GetError());
    }
}

void GaapClient::CreateTCPListenersAsync(const CreateTCPListenersRequest& request, const CreateTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTCPListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateTCPListenersOutcomeCallable GaapClient::CreateTCPListenersCallable(const CreateTCPListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTCPListenersOutcome()>>(
        [this, request]()
        {
            return this->CreateTCPListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::CreateUDPListenersOutcome GaapClient::CreateUDPListeners(const CreateUDPListenersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUDPListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUDPListenersResponse rsp = CreateUDPListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUDPListenersOutcome(rsp);
        else
            return CreateUDPListenersOutcome(o.GetError());
    }
    else
    {
        return CreateUDPListenersOutcome(outcome.GetError());
    }
}

void GaapClient::CreateUDPListenersAsync(const CreateUDPListenersRequest& request, const CreateUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUDPListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::CreateUDPListenersOutcomeCallable GaapClient::CreateUDPListenersCallable(const CreateUDPListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUDPListenersOutcome()>>(
        [this, request]()
        {
            return this->CreateUDPListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteCertificateOutcome GaapClient::DeleteCertificate(const DeleteCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCertificateResponse rsp = DeleteCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCertificateOutcome(rsp);
        else
            return DeleteCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCertificateOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteCertificateOutcomeCallable GaapClient::DeleteCertificateCallable(const DeleteCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeleteCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteDomainOutcome GaapClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteDomainOutcomeCallable GaapClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteDomainErrorPageInfoOutcome GaapClient::DeleteDomainErrorPageInfo(const DeleteDomainErrorPageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainErrorPageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainErrorPageInfoResponse rsp = DeleteDomainErrorPageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainErrorPageInfoOutcome(rsp);
        else
            return DeleteDomainErrorPageInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainErrorPageInfoOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteDomainErrorPageInfoAsync(const DeleteDomainErrorPageInfoRequest& request, const DeleteDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainErrorPageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteDomainErrorPageInfoOutcomeCallable GaapClient::DeleteDomainErrorPageInfoCallable(const DeleteDomainErrorPageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainErrorPageInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainErrorPageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteGlobalDomainOutcome GaapClient::DeleteGlobalDomain(const DeleteGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalDomainResponse rsp = DeleteGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalDomainOutcome(rsp);
        else
            return DeleteGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalDomainOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteGlobalDomainAsync(const DeleteGlobalDomainRequest& request, const DeleteGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteGlobalDomainOutcomeCallable GaapClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteGlobalDomainDnsOutcome GaapClient::DeleteGlobalDomainDns(const DeleteGlobalDomainDnsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGlobalDomainDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGlobalDomainDnsResponse rsp = DeleteGlobalDomainDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGlobalDomainDnsOutcome(rsp);
        else
            return DeleteGlobalDomainDnsOutcome(o.GetError());
    }
    else
    {
        return DeleteGlobalDomainDnsOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteGlobalDomainDnsAsync(const DeleteGlobalDomainDnsRequest& request, const DeleteGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGlobalDomainDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteGlobalDomainDnsOutcomeCallable GaapClient::DeleteGlobalDomainDnsCallable(const DeleteGlobalDomainDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGlobalDomainDnsOutcome()>>(
        [this, request]()
        {
            return this->DeleteGlobalDomainDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteListenersOutcome GaapClient::DeleteListeners(const DeleteListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenersResponse rsp = DeleteListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenersOutcome(rsp);
        else
            return DeleteListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteListenersAsync(const DeleteListenersRequest& request, const DeleteListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteListenersOutcomeCallable GaapClient::DeleteListenersCallable(const DeleteListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteListenersOutcome()>>(
        [this, request]()
        {
            return this->DeleteListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteProxyGroupOutcome GaapClient::DeleteProxyGroup(const DeleteProxyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProxyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProxyGroupResponse rsp = DeleteProxyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProxyGroupOutcome(rsp);
        else
            return DeleteProxyGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteProxyGroupOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteProxyGroupAsync(const DeleteProxyGroupRequest& request, const DeleteProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProxyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteProxyGroupOutcomeCallable GaapClient::DeleteProxyGroupCallable(const DeleteProxyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProxyGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteProxyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteRuleOutcome GaapClient::DeleteRule(const DeleteRuleRequest &request)
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

void GaapClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteRuleOutcomeCallable GaapClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteSecurityPolicyOutcome GaapClient::DeleteSecurityPolicy(const DeleteSecurityPolicyRequest &request)
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

void GaapClient::DeleteSecurityPolicyAsync(const DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteSecurityPolicyOutcomeCallable GaapClient::DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DeleteSecurityRulesOutcome GaapClient::DeleteSecurityRules(const DeleteSecurityRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityRulesResponse rsp = DeleteSecurityRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityRulesOutcome(rsp);
        else
            return DeleteSecurityRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityRulesOutcome(outcome.GetError());
    }
}

void GaapClient::DeleteSecurityRulesAsync(const DeleteSecurityRulesRequest& request, const DeleteSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSecurityRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DeleteSecurityRulesOutcomeCallable GaapClient::DeleteSecurityRulesCallable(const DeleteSecurityRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSecurityRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteSecurityRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeAccessRegionsOutcome GaapClient::DescribeAccessRegions(const DescribeAccessRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessRegionsResponse rsp = DescribeAccessRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessRegionsOutcome(rsp);
        else
            return DescribeAccessRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessRegionsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeAccessRegionsAsync(const DescribeAccessRegionsRequest& request, const DescribeAccessRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeAccessRegionsOutcomeCallable GaapClient::DescribeAccessRegionsCallable(const DescribeAccessRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeAccessRegionsByDestRegionOutcome GaapClient::DescribeAccessRegionsByDestRegion(const DescribeAccessRegionsByDestRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessRegionsByDestRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessRegionsByDestRegionResponse rsp = DescribeAccessRegionsByDestRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessRegionsByDestRegionOutcome(rsp);
        else
            return DescribeAccessRegionsByDestRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessRegionsByDestRegionOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeAccessRegionsByDestRegionAsync(const DescribeAccessRegionsByDestRegionRequest& request, const DescribeAccessRegionsByDestRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessRegionsByDestRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeAccessRegionsByDestRegionOutcomeCallable GaapClient::DescribeAccessRegionsByDestRegionCallable(const DescribeAccessRegionsByDestRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessRegionsByDestRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessRegionsByDestRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeAuthSignatureOutcome GaapClient::DescribeAuthSignature(const DescribeAuthSignatureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthSignature");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthSignatureResponse rsp = DescribeAuthSignatureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthSignatureOutcome(rsp);
        else
            return DescribeAuthSignatureOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthSignatureOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeAuthSignatureAsync(const DescribeAuthSignatureRequest& request, const DescribeAuthSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthSignature(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeAuthSignatureOutcomeCallable GaapClient::DescribeAuthSignatureCallable(const DescribeAuthSignatureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthSignatureOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthSignature(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeBlackHeaderOutcome GaapClient::DescribeBlackHeader(const DescribeBlackHeaderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBlackHeader");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBlackHeaderResponse rsp = DescribeBlackHeaderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBlackHeaderOutcome(rsp);
        else
            return DescribeBlackHeaderOutcome(o.GetError());
    }
    else
    {
        return DescribeBlackHeaderOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeBlackHeaderAsync(const DescribeBlackHeaderRequest& request, const DescribeBlackHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBlackHeader(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeBlackHeaderOutcomeCallable GaapClient::DescribeBlackHeaderCallable(const DescribeBlackHeaderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBlackHeaderOutcome()>>(
        [this, request]()
        {
            return this->DescribeBlackHeader(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeCertificateDetailOutcome GaapClient::DescribeCertificateDetail(const DescribeCertificateDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificateDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificateDetailResponse rsp = DescribeCertificateDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificateDetailOutcome(rsp);
        else
            return DescribeCertificateDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificateDetailOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeCertificateDetailAsync(const DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificateDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeCertificateDetailOutcomeCallable GaapClient::DescribeCertificateDetailCallable(const DescribeCertificateDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificateDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificateDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeCertificatesOutcome GaapClient::DescribeCertificates(const DescribeCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertificatesResponse rsp = DescribeCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertificatesOutcome(rsp);
        else
            return DescribeCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCertificatesOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeCertificatesAsync(const DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeCertificatesOutcomeCallable GaapClient::DescribeCertificatesCallable(const DescribeCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeCountryAreaMappingOutcome GaapClient::DescribeCountryAreaMapping(const DescribeCountryAreaMappingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCountryAreaMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCountryAreaMappingResponse rsp = DescribeCountryAreaMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCountryAreaMappingOutcome(rsp);
        else
            return DescribeCountryAreaMappingOutcome(o.GetError());
    }
    else
    {
        return DescribeCountryAreaMappingOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeCountryAreaMappingAsync(const DescribeCountryAreaMappingRequest& request, const DescribeCountryAreaMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCountryAreaMapping(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeCountryAreaMappingOutcomeCallable GaapClient::DescribeCountryAreaMappingCallable(const DescribeCountryAreaMappingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCountryAreaMappingOutcome()>>(
        [this, request]()
        {
            return this->DescribeCountryAreaMapping(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeCrossBorderProxiesOutcome GaapClient::DescribeCrossBorderProxies(const DescribeCrossBorderProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCrossBorderProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCrossBorderProxiesResponse rsp = DescribeCrossBorderProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCrossBorderProxiesOutcome(rsp);
        else
            return DescribeCrossBorderProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeCrossBorderProxiesOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeCrossBorderProxiesAsync(const DescribeCrossBorderProxiesRequest& request, const DescribeCrossBorderProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCrossBorderProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeCrossBorderProxiesOutcomeCallable GaapClient::DescribeCrossBorderProxiesCallable(const DescribeCrossBorderProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCrossBorderProxiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCrossBorderProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeCustomHeaderOutcome GaapClient::DescribeCustomHeader(const DescribeCustomHeaderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomHeader");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomHeaderResponse rsp = DescribeCustomHeaderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomHeaderOutcome(rsp);
        else
            return DescribeCustomHeaderOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomHeaderOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeCustomHeaderAsync(const DescribeCustomHeaderRequest& request, const DescribeCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomHeader(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeCustomHeaderOutcomeCallable GaapClient::DescribeCustomHeaderCallable(const DescribeCustomHeaderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomHeaderOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomHeader(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeDestRegionsOutcome GaapClient::DescribeDestRegions(const DescribeDestRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDestRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDestRegionsResponse rsp = DescribeDestRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDestRegionsOutcome(rsp);
        else
            return DescribeDestRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDestRegionsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeDestRegionsAsync(const DescribeDestRegionsRequest& request, const DescribeDestRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDestRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeDestRegionsOutcomeCallable GaapClient::DescribeDestRegionsCallable(const DescribeDestRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDestRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDestRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeDomainErrorPageInfoOutcome GaapClient::DescribeDomainErrorPageInfo(const DescribeDomainErrorPageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainErrorPageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainErrorPageInfoResponse rsp = DescribeDomainErrorPageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainErrorPageInfoOutcome(rsp);
        else
            return DescribeDomainErrorPageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainErrorPageInfoOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeDomainErrorPageInfoAsync(const DescribeDomainErrorPageInfoRequest& request, const DescribeDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainErrorPageInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeDomainErrorPageInfoOutcomeCallable GaapClient::DescribeDomainErrorPageInfoCallable(const DescribeDomainErrorPageInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainErrorPageInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainErrorPageInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeDomainErrorPageInfoByIdsOutcome GaapClient::DescribeDomainErrorPageInfoByIds(const DescribeDomainErrorPageInfoByIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainErrorPageInfoByIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainErrorPageInfoByIdsResponse rsp = DescribeDomainErrorPageInfoByIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainErrorPageInfoByIdsOutcome(rsp);
        else
            return DescribeDomainErrorPageInfoByIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainErrorPageInfoByIdsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeDomainErrorPageInfoByIdsAsync(const DescribeDomainErrorPageInfoByIdsRequest& request, const DescribeDomainErrorPageInfoByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainErrorPageInfoByIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeDomainErrorPageInfoByIdsOutcomeCallable GaapClient::DescribeDomainErrorPageInfoByIdsCallable(const DescribeDomainErrorPageInfoByIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainErrorPageInfoByIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainErrorPageInfoByIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeGlobalDomainDnsOutcome GaapClient::DescribeGlobalDomainDns(const DescribeGlobalDomainDnsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalDomainDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalDomainDnsResponse rsp = DescribeGlobalDomainDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalDomainDnsOutcome(rsp);
        else
            return DescribeGlobalDomainDnsOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalDomainDnsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeGlobalDomainDnsAsync(const DescribeGlobalDomainDnsRequest& request, const DescribeGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGlobalDomainDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeGlobalDomainDnsOutcomeCallable GaapClient::DescribeGlobalDomainDnsCallable(const DescribeGlobalDomainDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGlobalDomainDnsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGlobalDomainDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeGlobalDomainsOutcome GaapClient::DescribeGlobalDomains(const DescribeGlobalDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGlobalDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGlobalDomainsResponse rsp = DescribeGlobalDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGlobalDomainsOutcome(rsp);
        else
            return DescribeGlobalDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeGlobalDomainsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeGlobalDomainsAsync(const DescribeGlobalDomainsRequest& request, const DescribeGlobalDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGlobalDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeGlobalDomainsOutcomeCallable GaapClient::DescribeGlobalDomainsCallable(const DescribeGlobalDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGlobalDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGlobalDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeGroupAndStatisticsProxyOutcome GaapClient::DescribeGroupAndStatisticsProxy(const DescribeGroupAndStatisticsProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupAndStatisticsProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupAndStatisticsProxyResponse rsp = DescribeGroupAndStatisticsProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupAndStatisticsProxyOutcome(rsp);
        else
            return DescribeGroupAndStatisticsProxyOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupAndStatisticsProxyOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeGroupAndStatisticsProxyAsync(const DescribeGroupAndStatisticsProxyRequest& request, const DescribeGroupAndStatisticsProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupAndStatisticsProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeGroupAndStatisticsProxyOutcomeCallable GaapClient::DescribeGroupAndStatisticsProxyCallable(const DescribeGroupAndStatisticsProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupAndStatisticsProxyOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupAndStatisticsProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeGroupDomainConfigOutcome GaapClient::DescribeGroupDomainConfig(const DescribeGroupDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupDomainConfigResponse rsp = DescribeGroupDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupDomainConfigOutcome(rsp);
        else
            return DescribeGroupDomainConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupDomainConfigOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeGroupDomainConfigAsync(const DescribeGroupDomainConfigRequest& request, const DescribeGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeGroupDomainConfigOutcomeCallable GaapClient::DescribeGroupDomainConfigCallable(const DescribeGroupDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupDomainConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeHTTPListenersOutcome GaapClient::DescribeHTTPListeners(const DescribeHTTPListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHTTPListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHTTPListenersResponse rsp = DescribeHTTPListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHTTPListenersOutcome(rsp);
        else
            return DescribeHTTPListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeHTTPListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeHTTPListenersAsync(const DescribeHTTPListenersRequest& request, const DescribeHTTPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHTTPListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeHTTPListenersOutcomeCallable GaapClient::DescribeHTTPListenersCallable(const DescribeHTTPListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHTTPListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeHTTPListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeHTTPSListenersOutcome GaapClient::DescribeHTTPSListeners(const DescribeHTTPSListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHTTPSListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHTTPSListenersResponse rsp = DescribeHTTPSListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHTTPSListenersOutcome(rsp);
        else
            return DescribeHTTPSListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeHTTPSListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeHTTPSListenersAsync(const DescribeHTTPSListenersRequest& request, const DescribeHTTPSListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHTTPSListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeHTTPSListenersOutcomeCallable GaapClient::DescribeHTTPSListenersCallable(const DescribeHTTPSListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHTTPSListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeHTTPSListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeListenerRealServersOutcome GaapClient::DescribeListenerRealServers(const DescribeListenerRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerRealServersResponse rsp = DescribeListenerRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerRealServersOutcome(rsp);
        else
            return DescribeListenerRealServersOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeListenerRealServersAsync(const DescribeListenerRealServersRequest& request, const DescribeListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListenerRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeListenerRealServersOutcomeCallable GaapClient::DescribeListenerRealServersCallable(const DescribeListenerRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenerRealServersOutcome()>>(
        [this, request]()
        {
            return this->DescribeListenerRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeListenerStatisticsOutcome GaapClient::DescribeListenerStatistics(const DescribeListenerStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerStatisticsResponse rsp = DescribeListenerStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerStatisticsOutcome(rsp);
        else
            return DescribeListenerStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerStatisticsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeListenerStatisticsAsync(const DescribeListenerStatisticsRequest& request, const DescribeListenerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeListenerStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeListenerStatisticsOutcomeCallable GaapClient::DescribeListenerStatisticsCallable(const DescribeListenerStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeListenerStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeListenerStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxiesOutcome GaapClient::DescribeProxies(const DescribeProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxiesResponse rsp = DescribeProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxiesOutcome(rsp);
        else
            return DescribeProxiesOutcome(o.GetError());
    }
    else
    {
        return DescribeProxiesOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxiesAsync(const DescribeProxiesRequest& request, const DescribeProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxiesOutcomeCallable GaapClient::DescribeProxiesCallable(const DescribeProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxiesStatusOutcome GaapClient::DescribeProxiesStatus(const DescribeProxiesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxiesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxiesStatusResponse rsp = DescribeProxiesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxiesStatusOutcome(rsp);
        else
            return DescribeProxiesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProxiesStatusOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxiesStatusAsync(const DescribeProxiesStatusRequest& request, const DescribeProxiesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxiesStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxiesStatusOutcomeCallable GaapClient::DescribeProxiesStatusCallable(const DescribeProxiesStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxiesStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxiesStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyAndStatisticsListenersOutcome GaapClient::DescribeProxyAndStatisticsListeners(const DescribeProxyAndStatisticsListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyAndStatisticsListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyAndStatisticsListenersResponse rsp = DescribeProxyAndStatisticsListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyAndStatisticsListenersOutcome(rsp);
        else
            return DescribeProxyAndStatisticsListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyAndStatisticsListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyAndStatisticsListenersAsync(const DescribeProxyAndStatisticsListenersRequest& request, const DescribeProxyAndStatisticsListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyAndStatisticsListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyAndStatisticsListenersOutcomeCallable GaapClient::DescribeProxyAndStatisticsListenersCallable(const DescribeProxyAndStatisticsListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyAndStatisticsListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyAndStatisticsListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyDetailOutcome GaapClient::DescribeProxyDetail(const DescribeProxyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyDetailResponse rsp = DescribeProxyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyDetailOutcome(rsp);
        else
            return DescribeProxyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyDetailOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyDetailAsync(const DescribeProxyDetailRequest& request, const DescribeProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyDetailOutcomeCallable GaapClient::DescribeProxyDetailCallable(const DescribeProxyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyGroupDetailsOutcome GaapClient::DescribeProxyGroupDetails(const DescribeProxyGroupDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyGroupDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyGroupDetailsResponse rsp = DescribeProxyGroupDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyGroupDetailsOutcome(rsp);
        else
            return DescribeProxyGroupDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyGroupDetailsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyGroupDetailsAsync(const DescribeProxyGroupDetailsRequest& request, const DescribeProxyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyGroupDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyGroupDetailsOutcomeCallable GaapClient::DescribeProxyGroupDetailsCallable(const DescribeProxyGroupDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyGroupDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyGroupDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyGroupListOutcome GaapClient::DescribeProxyGroupList(const DescribeProxyGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyGroupListResponse rsp = DescribeProxyGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyGroupListOutcome(rsp);
        else
            return DescribeProxyGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyGroupListOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyGroupListAsync(const DescribeProxyGroupListRequest& request, const DescribeProxyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyGroupListOutcomeCallable GaapClient::DescribeProxyGroupListCallable(const DescribeProxyGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyGroupStatisticsOutcome GaapClient::DescribeProxyGroupStatistics(const DescribeProxyGroupStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyGroupStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyGroupStatisticsResponse rsp = DescribeProxyGroupStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyGroupStatisticsOutcome(rsp);
        else
            return DescribeProxyGroupStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyGroupStatisticsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyGroupStatisticsAsync(const DescribeProxyGroupStatisticsRequest& request, const DescribeProxyGroupStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyGroupStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyGroupStatisticsOutcomeCallable GaapClient::DescribeProxyGroupStatisticsCallable(const DescribeProxyGroupStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyGroupStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyGroupStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeProxyStatisticsOutcome GaapClient::DescribeProxyStatistics(const DescribeProxyStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProxyStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProxyStatisticsResponse rsp = DescribeProxyStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProxyStatisticsOutcome(rsp);
        else
            return DescribeProxyStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProxyStatisticsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeProxyStatisticsAsync(const DescribeProxyStatisticsRequest& request, const DescribeProxyStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProxyStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeProxyStatisticsOutcomeCallable GaapClient::DescribeProxyStatisticsCallable(const DescribeProxyStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProxyStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProxyStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRealServerStatisticsOutcome GaapClient::DescribeRealServerStatistics(const DescribeRealServerStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealServerStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealServerStatisticsResponse rsp = DescribeRealServerStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealServerStatisticsOutcome(rsp);
        else
            return DescribeRealServerStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeRealServerStatisticsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRealServerStatisticsAsync(const DescribeRealServerStatisticsRequest& request, const DescribeRealServerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealServerStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRealServerStatisticsOutcomeCallable GaapClient::DescribeRealServerStatisticsCallable(const DescribeRealServerStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealServerStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealServerStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRealServersOutcome GaapClient::DescribeRealServers(const DescribeRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealServersResponse rsp = DescribeRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealServersOutcome(rsp);
        else
            return DescribeRealServersOutcome(o.GetError());
    }
    else
    {
        return DescribeRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRealServersAsync(const DescribeRealServersRequest& request, const DescribeRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRealServersOutcomeCallable GaapClient::DescribeRealServersCallable(const DescribeRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealServersOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRealServersStatusOutcome GaapClient::DescribeRealServersStatus(const DescribeRealServersStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRealServersStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRealServersStatusResponse rsp = DescribeRealServersStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRealServersStatusOutcome(rsp);
        else
            return DescribeRealServersStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeRealServersStatusOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRealServersStatusAsync(const DescribeRealServersStatusRequest& request, const DescribeRealServersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRealServersStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRealServersStatusOutcomeCallable GaapClient::DescribeRealServersStatusCallable(const DescribeRealServersStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRealServersStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeRealServersStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRegionAndPriceOutcome GaapClient::DescribeRegionAndPrice(const DescribeRegionAndPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegionAndPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionAndPriceResponse rsp = DescribeRegionAndPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionAndPriceOutcome(rsp);
        else
            return DescribeRegionAndPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionAndPriceOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRegionAndPriceAsync(const DescribeRegionAndPriceRequest& request, const DescribeRegionAndPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegionAndPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRegionAndPriceOutcomeCallable GaapClient::DescribeRegionAndPriceCallable(const DescribeRegionAndPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionAndPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegionAndPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeResourcesByTagOutcome GaapClient::DescribeResourcesByTag(const DescribeResourcesByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourcesByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesByTagResponse rsp = DescribeResourcesByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesByTagOutcome(rsp);
        else
            return DescribeResourcesByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesByTagOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeResourcesByTagAsync(const DescribeResourcesByTagRequest& request, const DescribeResourcesByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourcesByTag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeResourcesByTagOutcomeCallable GaapClient::DescribeResourcesByTagCallable(const DescribeResourcesByTagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesByTagOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourcesByTag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRuleRealServersOutcome GaapClient::DescribeRuleRealServers(const DescribeRuleRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleRealServersResponse rsp = DescribeRuleRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleRealServersOutcome(rsp);
        else
            return DescribeRuleRealServersOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRuleRealServersAsync(const DescribeRuleRealServersRequest& request, const DescribeRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRuleRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRuleRealServersOutcomeCallable GaapClient::DescribeRuleRealServersCallable(const DescribeRuleRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRuleRealServersOutcome()>>(
        [this, request]()
        {
            return this->DescribeRuleRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeRulesOutcome GaapClient::DescribeRules(const DescribeRulesRequest &request)
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

void GaapClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRulesOutcomeCallable GaapClient::DescribeRulesCallable(const DescribeRulesRequest &request)
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

GaapClient::DescribeRulesByRuleIdsOutcome GaapClient::DescribeRulesByRuleIds(const DescribeRulesByRuleIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRulesByRuleIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesByRuleIdsResponse rsp = DescribeRulesByRuleIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesByRuleIdsOutcome(rsp);
        else
            return DescribeRulesByRuleIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesByRuleIdsOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeRulesByRuleIdsAsync(const DescribeRulesByRuleIdsRequest& request, const DescribeRulesByRuleIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRulesByRuleIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeRulesByRuleIdsOutcomeCallable GaapClient::DescribeRulesByRuleIdsCallable(const DescribeRulesByRuleIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRulesByRuleIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRulesByRuleIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeSecurityPolicyDetailOutcome GaapClient::DescribeSecurityPolicyDetail(const DescribeSecurityPolicyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityPolicyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityPolicyDetailResponse rsp = DescribeSecurityPolicyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityPolicyDetailOutcome(rsp);
        else
            return DescribeSecurityPolicyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityPolicyDetailOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeSecurityPolicyDetailAsync(const DescribeSecurityPolicyDetailRequest& request, const DescribeSecurityPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityPolicyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeSecurityPolicyDetailOutcomeCallable GaapClient::DescribeSecurityPolicyDetailCallable(const DescribeSecurityPolicyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityPolicyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityPolicyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeSecurityRulesOutcome GaapClient::DescribeSecurityRules(const DescribeSecurityRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityRulesResponse rsp = DescribeSecurityRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityRulesOutcome(rsp);
        else
            return DescribeSecurityRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityRulesOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeSecurityRulesAsync(const DescribeSecurityRulesRequest& request, const DescribeSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeSecurityRulesOutcomeCallable GaapClient::DescribeSecurityRulesCallable(const DescribeSecurityRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeTCPListenersOutcome GaapClient::DescribeTCPListeners(const DescribeTCPListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTCPListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTCPListenersResponse rsp = DescribeTCPListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTCPListenersOutcome(rsp);
        else
            return DescribeTCPListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeTCPListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeTCPListenersAsync(const DescribeTCPListenersRequest& request, const DescribeTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTCPListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeTCPListenersOutcomeCallable GaapClient::DescribeTCPListenersCallable(const DescribeTCPListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTCPListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeTCPListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeTaskStatusOutcome GaapClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
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

void GaapClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeTaskStatusOutcomeCallable GaapClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DescribeUDPListenersOutcome GaapClient::DescribeUDPListeners(const DescribeUDPListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUDPListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUDPListenersResponse rsp = DescribeUDPListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUDPListenersOutcome(rsp);
        else
            return DescribeUDPListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeUDPListenersOutcome(outcome.GetError());
    }
}

void GaapClient::DescribeUDPListenersAsync(const DescribeUDPListenersRequest& request, const DescribeUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUDPListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DescribeUDPListenersOutcomeCallable GaapClient::DescribeUDPListenersCallable(const DescribeUDPListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUDPListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUDPListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DestroyProxiesOutcome GaapClient::DestroyProxies(const DestroyProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyProxiesResponse rsp = DestroyProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyProxiesOutcome(rsp);
        else
            return DestroyProxiesOutcome(o.GetError());
    }
    else
    {
        return DestroyProxiesOutcome(outcome.GetError());
    }
}

void GaapClient::DestroyProxiesAsync(const DestroyProxiesRequest& request, const DestroyProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DestroyProxiesOutcomeCallable GaapClient::DestroyProxiesCallable(const DestroyProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyProxiesOutcome()>>(
        [this, request]()
        {
            return this->DestroyProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::DisableGlobalDomainOutcome GaapClient::DisableGlobalDomain(const DisableGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DisableGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableGlobalDomainResponse rsp = DisableGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableGlobalDomainOutcome(rsp);
        else
            return DisableGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return DisableGlobalDomainOutcome(outcome.GetError());
    }
}

void GaapClient::DisableGlobalDomainAsync(const DisableGlobalDomainRequest& request, const DisableGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::DisableGlobalDomainOutcomeCallable GaapClient::DisableGlobalDomainCallable(const DisableGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->DisableGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::EnableGlobalDomainOutcome GaapClient::EnableGlobalDomain(const EnableGlobalDomainRequest &request)
{
    auto outcome = MakeRequest(request, "EnableGlobalDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableGlobalDomainResponse rsp = EnableGlobalDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableGlobalDomainOutcome(rsp);
        else
            return EnableGlobalDomainOutcome(o.GetError());
    }
    else
    {
        return EnableGlobalDomainOutcome(outcome.GetError());
    }
}

void GaapClient::EnableGlobalDomainAsync(const EnableGlobalDomainRequest& request, const EnableGlobalDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableGlobalDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::EnableGlobalDomainOutcomeCallable GaapClient::EnableGlobalDomainCallable(const EnableGlobalDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableGlobalDomainOutcome()>>(
        [this, request]()
        {
            return this->EnableGlobalDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::InquiryPriceCreateProxyOutcome GaapClient::InquiryPriceCreateProxy(const InquiryPriceCreateProxyRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateProxyResponse rsp = InquiryPriceCreateProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateProxyOutcome(rsp);
        else
            return InquiryPriceCreateProxyOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateProxyOutcome(outcome.GetError());
    }
}

void GaapClient::InquiryPriceCreateProxyAsync(const InquiryPriceCreateProxyRequest& request, const InquiryPriceCreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::InquiryPriceCreateProxyOutcomeCallable GaapClient::InquiryPriceCreateProxyCallable(const InquiryPriceCreateProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateProxyOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyCertificateOutcome GaapClient::ModifyCertificate(const ModifyCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateResponse rsp = ModifyCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateOutcome(rsp);
        else
            return ModifyCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyCertificateAsync(const ModifyCertificateRequest& request, const ModifyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyCertificateOutcomeCallable GaapClient::ModifyCertificateCallable(const ModifyCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyCertificateAttributesOutcome GaapClient::ModifyCertificateAttributes(const ModifyCertificateAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCertificateAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCertificateAttributesResponse rsp = ModifyCertificateAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCertificateAttributesOutcome(rsp);
        else
            return ModifyCertificateAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyCertificateAttributesOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyCertificateAttributesAsync(const ModifyCertificateAttributesRequest& request, const ModifyCertificateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCertificateAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyCertificateAttributesOutcomeCallable GaapClient::ModifyCertificateAttributesCallable(const ModifyCertificateAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCertificateAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyCertificateAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyDomainOutcome GaapClient::ModifyDomain(const ModifyDomainRequest &request)
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

void GaapClient::ModifyDomainAsync(const ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyDomainOutcomeCallable GaapClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyGlobalDomainAttributeOutcome GaapClient::ModifyGlobalDomainAttribute(const ModifyGlobalDomainAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalDomainAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalDomainAttributeResponse rsp = ModifyGlobalDomainAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalDomainAttributeOutcome(rsp);
        else
            return ModifyGlobalDomainAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalDomainAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyGlobalDomainAttributeAsync(const ModifyGlobalDomainAttributeRequest& request, const ModifyGlobalDomainAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGlobalDomainAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyGlobalDomainAttributeOutcomeCallable GaapClient::ModifyGlobalDomainAttributeCallable(const ModifyGlobalDomainAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGlobalDomainAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyGlobalDomainAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyGlobalDomainDnsOutcome GaapClient::ModifyGlobalDomainDns(const ModifyGlobalDomainDnsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGlobalDomainDns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGlobalDomainDnsResponse rsp = ModifyGlobalDomainDnsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGlobalDomainDnsOutcome(rsp);
        else
            return ModifyGlobalDomainDnsOutcome(o.GetError());
    }
    else
    {
        return ModifyGlobalDomainDnsOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyGlobalDomainDnsAsync(const ModifyGlobalDomainDnsRequest& request, const ModifyGlobalDomainDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGlobalDomainDns(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyGlobalDomainDnsOutcomeCallable GaapClient::ModifyGlobalDomainDnsCallable(const ModifyGlobalDomainDnsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGlobalDomainDnsOutcome()>>(
        [this, request]()
        {
            return this->ModifyGlobalDomainDns(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyGroupDomainConfigOutcome GaapClient::ModifyGroupDomainConfig(const ModifyGroupDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroupDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupDomainConfigResponse rsp = ModifyGroupDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupDomainConfigOutcome(rsp);
        else
            return ModifyGroupDomainConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupDomainConfigOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyGroupDomainConfigAsync(const ModifyGroupDomainConfigRequest& request, const ModifyGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGroupDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyGroupDomainConfigOutcomeCallable GaapClient::ModifyGroupDomainConfigCallable(const ModifyGroupDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGroupDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyGroupDomainConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyHTTPListenerAttributeOutcome GaapClient::ModifyHTTPListenerAttribute(const ModifyHTTPListenerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHTTPListenerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHTTPListenerAttributeResponse rsp = ModifyHTTPListenerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHTTPListenerAttributeOutcome(rsp);
        else
            return ModifyHTTPListenerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHTTPListenerAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyHTTPListenerAttributeAsync(const ModifyHTTPListenerAttributeRequest& request, const ModifyHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHTTPListenerAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyHTTPListenerAttributeOutcomeCallable GaapClient::ModifyHTTPListenerAttributeCallable(const ModifyHTTPListenerAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHTTPListenerAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHTTPListenerAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyHTTPSListenerAttributeOutcome GaapClient::ModifyHTTPSListenerAttribute(const ModifyHTTPSListenerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHTTPSListenerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHTTPSListenerAttributeResponse rsp = ModifyHTTPSListenerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHTTPSListenerAttributeOutcome(rsp);
        else
            return ModifyHTTPSListenerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyHTTPSListenerAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyHTTPSListenerAttributeAsync(const ModifyHTTPSListenerAttributeRequest& request, const ModifyHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHTTPSListenerAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyHTTPSListenerAttributeOutcomeCallable GaapClient::ModifyHTTPSListenerAttributeCallable(const ModifyHTTPSListenerAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHTTPSListenerAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyHTTPSListenerAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyProxiesAttributeOutcome GaapClient::ModifyProxiesAttribute(const ModifyProxiesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxiesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxiesAttributeResponse rsp = ModifyProxiesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxiesAttributeOutcome(rsp);
        else
            return ModifyProxiesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyProxiesAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyProxiesAttributeAsync(const ModifyProxiesAttributeRequest& request, const ModifyProxiesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxiesAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyProxiesAttributeOutcomeCallable GaapClient::ModifyProxiesAttributeCallable(const ModifyProxiesAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxiesAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxiesAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyProxiesProjectOutcome GaapClient::ModifyProxiesProject(const ModifyProxiesProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxiesProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxiesProjectResponse rsp = ModifyProxiesProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxiesProjectOutcome(rsp);
        else
            return ModifyProxiesProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProxiesProjectOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyProxiesProjectAsync(const ModifyProxiesProjectRequest& request, const ModifyProxiesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxiesProject(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyProxiesProjectOutcomeCallable GaapClient::ModifyProxiesProjectCallable(const ModifyProxiesProjectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxiesProjectOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxiesProject(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyProxyConfigurationOutcome GaapClient::ModifyProxyConfiguration(const ModifyProxyConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyConfigurationResponse rsp = ModifyProxyConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyConfigurationOutcome(rsp);
        else
            return ModifyProxyConfigurationOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyConfigurationOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyProxyConfigurationAsync(const ModifyProxyConfigurationRequest& request, const ModifyProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxyConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyProxyConfigurationOutcomeCallable GaapClient::ModifyProxyConfigurationCallable(const ModifyProxyConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxyConfigurationOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxyConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyProxyGroupAttributeOutcome GaapClient::ModifyProxyGroupAttribute(const ModifyProxyGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProxyGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProxyGroupAttributeResponse rsp = ModifyProxyGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProxyGroupAttributeOutcome(rsp);
        else
            return ModifyProxyGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyProxyGroupAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyProxyGroupAttributeAsync(const ModifyProxyGroupAttributeRequest& request, const ModifyProxyGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProxyGroupAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyProxyGroupAttributeOutcomeCallable GaapClient::ModifyProxyGroupAttributeCallable(const ModifyProxyGroupAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProxyGroupAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyProxyGroupAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyRealServerNameOutcome GaapClient::ModifyRealServerName(const ModifyRealServerNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRealServerName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRealServerNameResponse rsp = ModifyRealServerNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRealServerNameOutcome(rsp);
        else
            return ModifyRealServerNameOutcome(o.GetError());
    }
    else
    {
        return ModifyRealServerNameOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyRealServerNameAsync(const ModifyRealServerNameRequest& request, const ModifyRealServerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRealServerName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyRealServerNameOutcomeCallable GaapClient::ModifyRealServerNameCallable(const ModifyRealServerNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRealServerNameOutcome()>>(
        [this, request]()
        {
            return this->ModifyRealServerName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyRuleAttributeOutcome GaapClient::ModifyRuleAttribute(const ModifyRuleAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleAttributeResponse rsp = ModifyRuleAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleAttributeOutcome(rsp);
        else
            return ModifyRuleAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyRuleAttributeAsync(const ModifyRuleAttributeRequest& request, const ModifyRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRuleAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyRuleAttributeOutcomeCallable GaapClient::ModifyRuleAttributeCallable(const ModifyRuleAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRuleAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyRuleAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifySecurityRuleOutcome GaapClient::ModifySecurityRule(const ModifySecurityRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityRuleResponse rsp = ModifySecurityRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityRuleOutcome(rsp);
        else
            return ModifySecurityRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityRuleOutcome(outcome.GetError());
    }
}

void GaapClient::ModifySecurityRuleAsync(const ModifySecurityRuleRequest& request, const ModifySecurityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySecurityRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifySecurityRuleOutcomeCallable GaapClient::ModifySecurityRuleCallable(const ModifySecurityRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySecurityRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifySecurityRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyTCPListenerAttributeOutcome GaapClient::ModifyTCPListenerAttribute(const ModifyTCPListenerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTCPListenerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTCPListenerAttributeResponse rsp = ModifyTCPListenerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTCPListenerAttributeOutcome(rsp);
        else
            return ModifyTCPListenerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyTCPListenerAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyTCPListenerAttributeAsync(const ModifyTCPListenerAttributeRequest& request, const ModifyTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTCPListenerAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyTCPListenerAttributeOutcomeCallable GaapClient::ModifyTCPListenerAttributeCallable(const ModifyTCPListenerAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTCPListenerAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyTCPListenerAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::ModifyUDPListenerAttributeOutcome GaapClient::ModifyUDPListenerAttribute(const ModifyUDPListenerAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUDPListenerAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUDPListenerAttributeResponse rsp = ModifyUDPListenerAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUDPListenerAttributeOutcome(rsp);
        else
            return ModifyUDPListenerAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyUDPListenerAttributeOutcome(outcome.GetError());
    }
}

void GaapClient::ModifyUDPListenerAttributeAsync(const ModifyUDPListenerAttributeRequest& request, const ModifyUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUDPListenerAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::ModifyUDPListenerAttributeOutcomeCallable GaapClient::ModifyUDPListenerAttributeCallable(const ModifyUDPListenerAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUDPListenerAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyUDPListenerAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::OpenProxiesOutcome GaapClient::OpenProxies(const OpenProxiesRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProxies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProxiesResponse rsp = OpenProxiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProxiesOutcome(rsp);
        else
            return OpenProxiesOutcome(o.GetError());
    }
    else
    {
        return OpenProxiesOutcome(outcome.GetError());
    }
}

void GaapClient::OpenProxiesAsync(const OpenProxiesRequest& request, const OpenProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProxies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::OpenProxiesOutcomeCallable GaapClient::OpenProxiesCallable(const OpenProxiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenProxiesOutcome()>>(
        [this, request]()
        {
            return this->OpenProxies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::OpenProxyGroupOutcome GaapClient::OpenProxyGroup(const OpenProxyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "OpenProxyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenProxyGroupResponse rsp = OpenProxyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenProxyGroupOutcome(rsp);
        else
            return OpenProxyGroupOutcome(o.GetError());
    }
    else
    {
        return OpenProxyGroupOutcome(outcome.GetError());
    }
}

void GaapClient::OpenProxyGroupAsync(const OpenProxyGroupRequest& request, const OpenProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenProxyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::OpenProxyGroupOutcomeCallable GaapClient::OpenProxyGroupCallable(const OpenProxyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenProxyGroupOutcome()>>(
        [this, request]()
        {
            return this->OpenProxyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::OpenSecurityPolicyOutcome GaapClient::OpenSecurityPolicy(const OpenSecurityPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "OpenSecurityPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenSecurityPolicyResponse rsp = OpenSecurityPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenSecurityPolicyOutcome(rsp);
        else
            return OpenSecurityPolicyOutcome(o.GetError());
    }
    else
    {
        return OpenSecurityPolicyOutcome(outcome.GetError());
    }
}

void GaapClient::OpenSecurityPolicyAsync(const OpenSecurityPolicyRequest& request, const OpenSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenSecurityPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::OpenSecurityPolicyOutcomeCallable GaapClient::OpenSecurityPolicyCallable(const OpenSecurityPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenSecurityPolicyOutcome()>>(
        [this, request]()
        {
            return this->OpenSecurityPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::RemoveRealServersOutcome GaapClient::RemoveRealServers(const RemoveRealServersRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveRealServers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveRealServersResponse rsp = RemoveRealServersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveRealServersOutcome(rsp);
        else
            return RemoveRealServersOutcome(o.GetError());
    }
    else
    {
        return RemoveRealServersOutcome(outcome.GetError());
    }
}

void GaapClient::RemoveRealServersAsync(const RemoveRealServersRequest& request, const RemoveRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveRealServers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::RemoveRealServersOutcomeCallable GaapClient::RemoveRealServersCallable(const RemoveRealServersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveRealServersOutcome()>>(
        [this, request]()
        {
            return this->RemoveRealServers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::SetAuthenticationOutcome GaapClient::SetAuthentication(const SetAuthenticationRequest &request)
{
    auto outcome = MakeRequest(request, "SetAuthentication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAuthenticationResponse rsp = SetAuthenticationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAuthenticationOutcome(rsp);
        else
            return SetAuthenticationOutcome(o.GetError());
    }
    else
    {
        return SetAuthenticationOutcome(outcome.GetError());
    }
}

void GaapClient::SetAuthenticationAsync(const SetAuthenticationRequest& request, const SetAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAuthentication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::SetAuthenticationOutcomeCallable GaapClient::SetAuthenticationCallable(const SetAuthenticationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAuthenticationOutcome()>>(
        [this, request]()
        {
            return this->SetAuthentication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GaapClient::SetTlsVersionOutcome GaapClient::SetTlsVersion(const SetTlsVersionRequest &request)
{
    auto outcome = MakeRequest(request, "SetTlsVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTlsVersionResponse rsp = SetTlsVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTlsVersionOutcome(rsp);
        else
            return SetTlsVersionOutcome(o.GetError());
    }
    else
    {
        return SetTlsVersionOutcome(outcome.GetError());
    }
}

void GaapClient::SetTlsVersionAsync(const SetTlsVersionRequest& request, const SetTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTlsVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GaapClient::SetTlsVersionOutcomeCallable GaapClient::SetTlsVersionCallable(const SetTlsVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTlsVersionOutcome()>>(
        [this, request]()
        {
            return this->SetTlsVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

