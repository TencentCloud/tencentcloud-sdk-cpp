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
    using Req = const AddRealServersRequest&;
    using Resp = AddRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "AddRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::AddRealServersOutcomeCallable GaapClient::AddRealServersCallable(const AddRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddRealServersOutcome>>();
    AddRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const AddRealServersRequest&,
        AddRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BanAndRecoverProxyRequest&;
    using Resp = BanAndRecoverProxyResponse;

    DoRequestAsync<Req, Resp>(
        "BanAndRecoverProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::BanAndRecoverProxyOutcomeCallable GaapClient::BanAndRecoverProxyCallable(const BanAndRecoverProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BanAndRecoverProxyOutcome>>();
    BanAndRecoverProxyAsync(
    request,
    [prom](
        const GaapClient*,
        const BanAndRecoverProxyRequest&,
        BanAndRecoverProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindListenerRealServersRequest&;
    using Resp = BindListenerRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "BindListenerRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::BindListenerRealServersOutcomeCallable GaapClient::BindListenerRealServersCallable(const BindListenerRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindListenerRealServersOutcome>>();
    BindListenerRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const BindListenerRealServersRequest&,
        BindListenerRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindRuleRealServersRequest&;
    using Resp = BindRuleRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "BindRuleRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::BindRuleRealServersOutcomeCallable GaapClient::BindRuleRealServersCallable(const BindRuleRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindRuleRealServersOutcome>>();
    BindRuleRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const BindRuleRealServersRequest&,
        BindRuleRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckProxyCreateRequest&;
    using Resp = CheckProxyCreateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckProxyCreate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CheckProxyCreateOutcomeCallable GaapClient::CheckProxyCreateCallable(const CheckProxyCreateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckProxyCreateOutcome>>();
    CheckProxyCreateAsync(
    request,
    [prom](
        const GaapClient*,
        const CheckProxyCreateRequest&,
        CheckProxyCreateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CloseProxiesRequest&;
    using Resp = CloseProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "CloseProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CloseProxiesOutcomeCallable GaapClient::CloseProxiesCallable(const CloseProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseProxiesOutcome>>();
    CloseProxiesAsync(
    request,
    [prom](
        const GaapClient*,
        const CloseProxiesRequest&,
        CloseProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CloseProxyGroupRequest&;
    using Resp = CloseProxyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CloseProxyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CloseProxyGroupOutcomeCallable GaapClient::CloseProxyGroupCallable(const CloseProxyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseProxyGroupOutcome>>();
    CloseProxyGroupAsync(
    request,
    [prom](
        const GaapClient*,
        const CloseProxyGroupRequest&,
        CloseProxyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CloseSecurityPolicyRequest&;
    using Resp = CloseSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CloseSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CloseSecurityPolicyOutcomeCallable GaapClient::CloseSecurityPolicyCallable(const CloseSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseSecurityPolicyOutcome>>();
    CloseSecurityPolicyAsync(
    request,
    [prom](
        const GaapClient*,
        const CloseSecurityPolicyRequest&,
        CloseSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCertificateRequest&;
    using Resp = CreateCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateCertificateOutcomeCallable GaapClient::CreateCertificateCallable(const CreateCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCertificateOutcome>>();
    CreateCertificateAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateCertificateRequest&,
        CreateCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCustomHeaderRequest&;
    using Resp = CreateCustomHeaderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomHeader", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateCustomHeaderOutcomeCallable GaapClient::CreateCustomHeaderCallable(const CreateCustomHeaderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomHeaderOutcome>>();
    CreateCustomHeaderAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateCustomHeaderRequest&,
        CreateCustomHeaderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateDomainOutcomeCallable GaapClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDomainErrorPageInfoRequest&;
    using Resp = CreateDomainErrorPageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainErrorPageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateDomainErrorPageInfoOutcomeCallable GaapClient::CreateDomainErrorPageInfoCallable(const CreateDomainErrorPageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainErrorPageInfoOutcome>>();
    CreateDomainErrorPageInfoAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateDomainErrorPageInfoRequest&,
        CreateDomainErrorPageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateGlobalDomainRequest&;
    using Resp = CreateGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateGlobalDomainOutcomeCallable GaapClient::CreateGlobalDomainCallable(const CreateGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalDomainOutcome>>();
    CreateGlobalDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateGlobalDomainRequest&,
        CreateGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateGlobalDomainDnsRequest&;
    using Resp = CreateGlobalDomainDnsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGlobalDomainDns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateGlobalDomainDnsOutcomeCallable GaapClient::CreateGlobalDomainDnsCallable(const CreateGlobalDomainDnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGlobalDomainDnsOutcome>>();
    CreateGlobalDomainDnsAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateGlobalDomainDnsRequest&,
        CreateGlobalDomainDnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateHTTPListenerRequest&;
    using Resp = CreateHTTPListenerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHTTPListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateHTTPListenerOutcomeCallable GaapClient::CreateHTTPListenerCallable(const CreateHTTPListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHTTPListenerOutcome>>();
    CreateHTTPListenerAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateHTTPListenerRequest&,
        CreateHTTPListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateHTTPSListenerRequest&;
    using Resp = CreateHTTPSListenerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHTTPSListener", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateHTTPSListenerOutcomeCallable GaapClient::CreateHTTPSListenerCallable(const CreateHTTPSListenerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHTTPSListenerOutcome>>();
    CreateHTTPSListenerAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateHTTPSListenerRequest&,
        CreateHTTPSListenerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProxyRequest&;
    using Resp = CreateProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateProxyOutcomeCallable GaapClient::CreateProxyCallable(const CreateProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxyOutcome>>();
    CreateProxyAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateProxyRequest&,
        CreateProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProxyGroupRequest&;
    using Resp = CreateProxyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateProxyGroupOutcomeCallable GaapClient::CreateProxyGroupCallable(const CreateProxyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxyGroupOutcome>>();
    CreateProxyGroupAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateProxyGroupRequest&,
        CreateProxyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProxyGroupDomainRequest&;
    using Resp = CreateProxyGroupDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProxyGroupDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateProxyGroupDomainOutcomeCallable GaapClient::CreateProxyGroupDomainCallable(const CreateProxyGroupDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProxyGroupDomainOutcome>>();
    CreateProxyGroupDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateProxyGroupDomainRequest&,
        CreateProxyGroupDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateRuleOutcomeCallable GaapClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSecurityPolicyRequest&;
    using Resp = CreateSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateSecurityPolicyOutcomeCallable GaapClient::CreateSecurityPolicyCallable(const CreateSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityPolicyOutcome>>();
    CreateSecurityPolicyAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateSecurityPolicyRequest&,
        CreateSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSecurityRulesRequest&;
    using Resp = CreateSecurityRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateSecurityRulesOutcomeCallable GaapClient::CreateSecurityRulesCallable(const CreateSecurityRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityRulesOutcome>>();
    CreateSecurityRulesAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateSecurityRulesRequest&,
        CreateSecurityRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTCPListenersRequest&;
    using Resp = CreateTCPListenersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTCPListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateTCPListenersOutcomeCallable GaapClient::CreateTCPListenersCallable(const CreateTCPListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTCPListenersOutcome>>();
    CreateTCPListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateTCPListenersRequest&,
        CreateTCPListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUDPListenersRequest&;
    using Resp = CreateUDPListenersResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUDPListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::CreateUDPListenersOutcomeCallable GaapClient::CreateUDPListenersCallable(const CreateUDPListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUDPListenersOutcome>>();
    CreateUDPListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const CreateUDPListenersRequest&,
        CreateUDPListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCertificateRequest&;
    using Resp = DeleteCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteCertificateOutcomeCallable GaapClient::DeleteCertificateCallable(const DeleteCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCertificateOutcome>>();
    DeleteCertificateAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteCertificateRequest&,
        DeleteCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDomainRequest&;
    using Resp = DeleteDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteDomainOutcomeCallable GaapClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainOutcome>>();
    DeleteDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteDomainRequest&,
        DeleteDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDomainErrorPageInfoRequest&;
    using Resp = DeleteDomainErrorPageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainErrorPageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteDomainErrorPageInfoOutcomeCallable GaapClient::DeleteDomainErrorPageInfoCallable(const DeleteDomainErrorPageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainErrorPageInfoOutcome>>();
    DeleteDomainErrorPageInfoAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteDomainErrorPageInfoRequest&,
        DeleteDomainErrorPageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGlobalDomainRequest&;
    using Resp = DeleteGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteGlobalDomainOutcomeCallable GaapClient::DeleteGlobalDomainCallable(const DeleteGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalDomainOutcome>>();
    DeleteGlobalDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteGlobalDomainRequest&,
        DeleteGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteGlobalDomainDnsRequest&;
    using Resp = DeleteGlobalDomainDnsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGlobalDomainDns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteGlobalDomainDnsOutcomeCallable GaapClient::DeleteGlobalDomainDnsCallable(const DeleteGlobalDomainDnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGlobalDomainDnsOutcome>>();
    DeleteGlobalDomainDnsAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteGlobalDomainDnsRequest&,
        DeleteGlobalDomainDnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteListenersRequest&;
    using Resp = DeleteListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteListenersOutcomeCallable GaapClient::DeleteListenersCallable(const DeleteListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteListenersOutcome>>();
    DeleteListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteListenersRequest&,
        DeleteListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteProxyGroupRequest&;
    using Resp = DeleteProxyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProxyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteProxyGroupOutcomeCallable GaapClient::DeleteProxyGroupCallable(const DeleteProxyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProxyGroupOutcome>>();
    DeleteProxyGroupAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteProxyGroupRequest&,
        DeleteProxyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteRuleOutcomeCallable GaapClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSecurityPolicyRequest&;
    using Resp = DeleteSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteSecurityPolicyOutcomeCallable GaapClient::DeleteSecurityPolicyCallable(const DeleteSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityPolicyOutcome>>();
    DeleteSecurityPolicyAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteSecurityPolicyRequest&,
        DeleteSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSecurityRulesRequest&;
    using Resp = DeleteSecurityRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DeleteSecurityRulesOutcomeCallable GaapClient::DeleteSecurityRulesCallable(const DeleteSecurityRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityRulesOutcome>>();
    DeleteSecurityRulesAsync(
    request,
    [prom](
        const GaapClient*,
        const DeleteSecurityRulesRequest&,
        DeleteSecurityRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccessRegionsRequest&;
    using Resp = DescribeAccessRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeAccessRegionsOutcomeCallable GaapClient::DescribeAccessRegionsCallable(const DescribeAccessRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessRegionsOutcome>>();
    DescribeAccessRegionsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeAccessRegionsRequest&,
        DescribeAccessRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccessRegionsByDestRegionRequest&;
    using Resp = DescribeAccessRegionsByDestRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessRegionsByDestRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeAccessRegionsByDestRegionOutcomeCallable GaapClient::DescribeAccessRegionsByDestRegionCallable(const DescribeAccessRegionsByDestRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessRegionsByDestRegionOutcome>>();
    DescribeAccessRegionsByDestRegionAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeAccessRegionsByDestRegionRequest&,
        DescribeAccessRegionsByDestRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuthSignatureRequest&;
    using Resp = DescribeAuthSignatureResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthSignature", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeAuthSignatureOutcomeCallable GaapClient::DescribeAuthSignatureCallable(const DescribeAuthSignatureRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthSignatureOutcome>>();
    DescribeAuthSignatureAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeAuthSignatureRequest&,
        DescribeAuthSignatureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBlackHeaderRequest&;
    using Resp = DescribeBlackHeaderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBlackHeader", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeBlackHeaderOutcomeCallable GaapClient::DescribeBlackHeaderCallable(const DescribeBlackHeaderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBlackHeaderOutcome>>();
    DescribeBlackHeaderAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeBlackHeaderRequest&,
        DescribeBlackHeaderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCertificateDetailRequest&;
    using Resp = DescribeCertificateDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificateDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeCertificateDetailOutcomeCallable GaapClient::DescribeCertificateDetailCallable(const DescribeCertificateDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificateDetailOutcome>>();
    DescribeCertificateDetailAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeCertificateDetailRequest&,
        DescribeCertificateDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCertificatesRequest&;
    using Resp = DescribeCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeCertificatesOutcomeCallable GaapClient::DescribeCertificatesCallable(const DescribeCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCertificatesOutcome>>();
    DescribeCertificatesAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeCertificatesRequest&,
        DescribeCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCountryAreaMappingRequest&;
    using Resp = DescribeCountryAreaMappingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCountryAreaMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeCountryAreaMappingOutcomeCallable GaapClient::DescribeCountryAreaMappingCallable(const DescribeCountryAreaMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCountryAreaMappingOutcome>>();
    DescribeCountryAreaMappingAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeCountryAreaMappingRequest&,
        DescribeCountryAreaMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCrossBorderProxiesRequest&;
    using Resp = DescribeCrossBorderProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCrossBorderProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeCrossBorderProxiesOutcomeCallable GaapClient::DescribeCrossBorderProxiesCallable(const DescribeCrossBorderProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCrossBorderProxiesOutcome>>();
    DescribeCrossBorderProxiesAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeCrossBorderProxiesRequest&,
        DescribeCrossBorderProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCustomHeaderRequest&;
    using Resp = DescribeCustomHeaderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomHeader", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeCustomHeaderOutcomeCallable GaapClient::DescribeCustomHeaderCallable(const DescribeCustomHeaderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomHeaderOutcome>>();
    DescribeCustomHeaderAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeCustomHeaderRequest&,
        DescribeCustomHeaderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDestRegionsRequest&;
    using Resp = DescribeDestRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDestRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeDestRegionsOutcomeCallable GaapClient::DescribeDestRegionsCallable(const DescribeDestRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDestRegionsOutcome>>();
    DescribeDestRegionsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeDestRegionsRequest&,
        DescribeDestRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDomainErrorPageInfoRequest&;
    using Resp = DescribeDomainErrorPageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainErrorPageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeDomainErrorPageInfoOutcomeCallable GaapClient::DescribeDomainErrorPageInfoCallable(const DescribeDomainErrorPageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainErrorPageInfoOutcome>>();
    DescribeDomainErrorPageInfoAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeDomainErrorPageInfoRequest&,
        DescribeDomainErrorPageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDomainErrorPageInfoByIdsRequest&;
    using Resp = DescribeDomainErrorPageInfoByIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainErrorPageInfoByIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeDomainErrorPageInfoByIdsOutcomeCallable GaapClient::DescribeDomainErrorPageInfoByIdsCallable(const DescribeDomainErrorPageInfoByIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainErrorPageInfoByIdsOutcome>>();
    DescribeDomainErrorPageInfoByIdsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeDomainErrorPageInfoByIdsRequest&,
        DescribeDomainErrorPageInfoByIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGlobalDomainDnsRequest&;
    using Resp = DescribeGlobalDomainDnsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalDomainDns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeGlobalDomainDnsOutcomeCallable GaapClient::DescribeGlobalDomainDnsCallable(const DescribeGlobalDomainDnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalDomainDnsOutcome>>();
    DescribeGlobalDomainDnsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeGlobalDomainDnsRequest&,
        DescribeGlobalDomainDnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGlobalDomainsRequest&;
    using Resp = DescribeGlobalDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGlobalDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeGlobalDomainsOutcomeCallable GaapClient::DescribeGlobalDomainsCallable(const DescribeGlobalDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGlobalDomainsOutcome>>();
    DescribeGlobalDomainsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeGlobalDomainsRequest&,
        DescribeGlobalDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGroupAndStatisticsProxyRequest&;
    using Resp = DescribeGroupAndStatisticsProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupAndStatisticsProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeGroupAndStatisticsProxyOutcomeCallable GaapClient::DescribeGroupAndStatisticsProxyCallable(const DescribeGroupAndStatisticsProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupAndStatisticsProxyOutcome>>();
    DescribeGroupAndStatisticsProxyAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeGroupAndStatisticsProxyRequest&,
        DescribeGroupAndStatisticsProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGroupDomainConfigRequest&;
    using Resp = DescribeGroupDomainConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupDomainConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeGroupDomainConfigOutcomeCallable GaapClient::DescribeGroupDomainConfigCallable(const DescribeGroupDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupDomainConfigOutcome>>();
    DescribeGroupDomainConfigAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeGroupDomainConfigRequest&,
        DescribeGroupDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHTTPListenersRequest&;
    using Resp = DescribeHTTPListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHTTPListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeHTTPListenersOutcomeCallable GaapClient::DescribeHTTPListenersCallable(const DescribeHTTPListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHTTPListenersOutcome>>();
    DescribeHTTPListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeHTTPListenersRequest&,
        DescribeHTTPListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHTTPSListenersRequest&;
    using Resp = DescribeHTTPSListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHTTPSListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeHTTPSListenersOutcomeCallable GaapClient::DescribeHTTPSListenersCallable(const DescribeHTTPSListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHTTPSListenersOutcome>>();
    DescribeHTTPSListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeHTTPSListenersRequest&,
        DescribeHTTPSListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeListenerRealServersRequest&;
    using Resp = DescribeListenerRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeListenerRealServersOutcomeCallable GaapClient::DescribeListenerRealServersCallable(const DescribeListenerRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerRealServersOutcome>>();
    DescribeListenerRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeListenerRealServersRequest&,
        DescribeListenerRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeListenerStatisticsRequest&;
    using Resp = DescribeListenerStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeListenerStatisticsOutcomeCallable GaapClient::DescribeListenerStatisticsCallable(const DescribeListenerStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerStatisticsOutcome>>();
    DescribeListenerStatisticsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeListenerStatisticsRequest&,
        DescribeListenerStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxiesRequest&;
    using Resp = DescribeProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxiesOutcomeCallable GaapClient::DescribeProxiesCallable(const DescribeProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxiesOutcome>>();
    DescribeProxiesAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxiesRequest&,
        DescribeProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxiesStatusRequest&;
    using Resp = DescribeProxiesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxiesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxiesStatusOutcomeCallable GaapClient::DescribeProxiesStatusCallable(const DescribeProxiesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxiesStatusOutcome>>();
    DescribeProxiesStatusAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxiesStatusRequest&,
        DescribeProxiesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyAndStatisticsListenersRequest&;
    using Resp = DescribeProxyAndStatisticsListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyAndStatisticsListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyAndStatisticsListenersOutcomeCallable GaapClient::DescribeProxyAndStatisticsListenersCallable(const DescribeProxyAndStatisticsListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyAndStatisticsListenersOutcome>>();
    DescribeProxyAndStatisticsListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyAndStatisticsListenersRequest&,
        DescribeProxyAndStatisticsListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyDetailRequest&;
    using Resp = DescribeProxyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyDetailOutcomeCallable GaapClient::DescribeProxyDetailCallable(const DescribeProxyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyDetailOutcome>>();
    DescribeProxyDetailAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyDetailRequest&,
        DescribeProxyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyGroupDetailsRequest&;
    using Resp = DescribeProxyGroupDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyGroupDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyGroupDetailsOutcomeCallable GaapClient::DescribeProxyGroupDetailsCallable(const DescribeProxyGroupDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyGroupDetailsOutcome>>();
    DescribeProxyGroupDetailsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyGroupDetailsRequest&,
        DescribeProxyGroupDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyGroupListRequest&;
    using Resp = DescribeProxyGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyGroupListOutcomeCallable GaapClient::DescribeProxyGroupListCallable(const DescribeProxyGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyGroupListOutcome>>();
    DescribeProxyGroupListAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyGroupListRequest&,
        DescribeProxyGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyGroupStatisticsRequest&;
    using Resp = DescribeProxyGroupStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyGroupStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyGroupStatisticsOutcomeCallable GaapClient::DescribeProxyGroupStatisticsCallable(const DescribeProxyGroupStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyGroupStatisticsOutcome>>();
    DescribeProxyGroupStatisticsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyGroupStatisticsRequest&,
        DescribeProxyGroupStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProxyStatisticsRequest&;
    using Resp = DescribeProxyStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProxyStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeProxyStatisticsOutcomeCallable GaapClient::DescribeProxyStatisticsCallable(const DescribeProxyStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProxyStatisticsOutcome>>();
    DescribeProxyStatisticsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeProxyStatisticsRequest&,
        DescribeProxyStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRealServerStatisticsRequest&;
    using Resp = DescribeRealServerStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealServerStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRealServerStatisticsOutcomeCallable GaapClient::DescribeRealServerStatisticsCallable(const DescribeRealServerStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealServerStatisticsOutcome>>();
    DescribeRealServerStatisticsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRealServerStatisticsRequest&,
        DescribeRealServerStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRealServersRequest&;
    using Resp = DescribeRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRealServersOutcomeCallable GaapClient::DescribeRealServersCallable(const DescribeRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealServersOutcome>>();
    DescribeRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRealServersRequest&,
        DescribeRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRealServersStatusRequest&;
    using Resp = DescribeRealServersStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealServersStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRealServersStatusOutcomeCallable GaapClient::DescribeRealServersStatusCallable(const DescribeRealServersStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealServersStatusOutcome>>();
    DescribeRealServersStatusAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRealServersStatusRequest&,
        DescribeRealServersStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRegionAndPriceRequest&;
    using Resp = DescribeRegionAndPriceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegionAndPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRegionAndPriceOutcomeCallable GaapClient::DescribeRegionAndPriceCallable(const DescribeRegionAndPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionAndPriceOutcome>>();
    DescribeRegionAndPriceAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRegionAndPriceRequest&,
        DescribeRegionAndPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeResourcesByTagRequest&;
    using Resp = DescribeResourcesByTagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourcesByTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeResourcesByTagOutcomeCallable GaapClient::DescribeResourcesByTagCallable(const DescribeResourcesByTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesByTagOutcome>>();
    DescribeResourcesByTagAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeResourcesByTagRequest&,
        DescribeResourcesByTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRuleRealServersRequest&;
    using Resp = DescribeRuleRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRuleRealServersOutcomeCallable GaapClient::DescribeRuleRealServersCallable(const DescribeRuleRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleRealServersOutcome>>();
    DescribeRuleRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRuleRealServersRequest&,
        DescribeRuleRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRulesOutcomeCallable GaapClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRulesByRuleIdsRequest&;
    using Resp = DescribeRulesByRuleIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRulesByRuleIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeRulesByRuleIdsOutcomeCallable GaapClient::DescribeRulesByRuleIdsCallable(const DescribeRulesByRuleIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesByRuleIdsOutcome>>();
    DescribeRulesByRuleIdsAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeRulesByRuleIdsRequest&,
        DescribeRulesByRuleIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityPolicyDetailRequest&;
    using Resp = DescribeSecurityPolicyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeSecurityPolicyDetailOutcomeCallable GaapClient::DescribeSecurityPolicyDetailCallable(const DescribeSecurityPolicyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyDetailOutcome>>();
    DescribeSecurityPolicyDetailAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeSecurityPolicyDetailRequest&,
        DescribeSecurityPolicyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityRulesRequest&;
    using Resp = DescribeSecurityRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeSecurityRulesOutcomeCallable GaapClient::DescribeSecurityRulesCallable(const DescribeSecurityRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityRulesOutcome>>();
    DescribeSecurityRulesAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeSecurityRulesRequest&,
        DescribeSecurityRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTCPListenersRequest&;
    using Resp = DescribeTCPListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTCPListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeTCPListenersOutcomeCallable GaapClient::DescribeTCPListenersCallable(const DescribeTCPListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTCPListenersOutcome>>();
    DescribeTCPListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeTCPListenersRequest&,
        DescribeTCPListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeTaskStatusOutcomeCallable GaapClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUDPListenersRequest&;
    using Resp = DescribeUDPListenersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUDPListeners", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DescribeUDPListenersOutcomeCallable GaapClient::DescribeUDPListenersCallable(const DescribeUDPListenersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUDPListenersOutcome>>();
    DescribeUDPListenersAsync(
    request,
    [prom](
        const GaapClient*,
        const DescribeUDPListenersRequest&,
        DescribeUDPListenersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DestroyProxiesRequest&;
    using Resp = DestroyProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DestroyProxiesOutcomeCallable GaapClient::DestroyProxiesCallable(const DestroyProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyProxiesOutcome>>();
    DestroyProxiesAsync(
    request,
    [prom](
        const GaapClient*,
        const DestroyProxiesRequest&,
        DestroyProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableGlobalDomainRequest&;
    using Resp = DisableGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DisableGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::DisableGlobalDomainOutcomeCallable GaapClient::DisableGlobalDomainCallable(const DisableGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableGlobalDomainOutcome>>();
    DisableGlobalDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const DisableGlobalDomainRequest&,
        DisableGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableGlobalDomainRequest&;
    using Resp = EnableGlobalDomainResponse;

    DoRequestAsync<Req, Resp>(
        "EnableGlobalDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::EnableGlobalDomainOutcomeCallable GaapClient::EnableGlobalDomainCallable(const EnableGlobalDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableGlobalDomainOutcome>>();
    EnableGlobalDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const EnableGlobalDomainRequest&,
        EnableGlobalDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InquiryPriceCreateProxyRequest&;
    using Resp = InquiryPriceCreateProxyResponse;

    DoRequestAsync<Req, Resp>(
        "InquiryPriceCreateProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::InquiryPriceCreateProxyOutcomeCallable GaapClient::InquiryPriceCreateProxyCallable(const InquiryPriceCreateProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquiryPriceCreateProxyOutcome>>();
    InquiryPriceCreateProxyAsync(
    request,
    [prom](
        const GaapClient*,
        const InquiryPriceCreateProxyRequest&,
        InquiryPriceCreateProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCertificateRequest&;
    using Resp = ModifyCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyCertificateOutcomeCallable GaapClient::ModifyCertificateCallable(const ModifyCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateOutcome>>();
    ModifyCertificateAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyCertificateRequest&,
        ModifyCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCertificateAttributesRequest&;
    using Resp = ModifyCertificateAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCertificateAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyCertificateAttributesOutcomeCallable GaapClient::ModifyCertificateAttributesCallable(const ModifyCertificateAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCertificateAttributesOutcome>>();
    ModifyCertificateAttributesAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyCertificateAttributesRequest&,
        ModifyCertificateAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDomainRequest&;
    using Resp = ModifyDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyDomainOutcomeCallable GaapClient::ModifyDomainCallable(const ModifyDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOutcome>>();
    ModifyDomainAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyDomainRequest&,
        ModifyDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGlobalDomainAttributeRequest&;
    using Resp = ModifyGlobalDomainAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalDomainAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyGlobalDomainAttributeOutcomeCallable GaapClient::ModifyGlobalDomainAttributeCallable(const ModifyGlobalDomainAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalDomainAttributeOutcome>>();
    ModifyGlobalDomainAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyGlobalDomainAttributeRequest&,
        ModifyGlobalDomainAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGlobalDomainDnsRequest&;
    using Resp = ModifyGlobalDomainDnsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGlobalDomainDns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyGlobalDomainDnsOutcomeCallable GaapClient::ModifyGlobalDomainDnsCallable(const ModifyGlobalDomainDnsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGlobalDomainDnsOutcome>>();
    ModifyGlobalDomainDnsAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyGlobalDomainDnsRequest&,
        ModifyGlobalDomainDnsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyGroupDomainConfigRequest&;
    using Resp = ModifyGroupDomainConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGroupDomainConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyGroupDomainConfigOutcomeCallable GaapClient::ModifyGroupDomainConfigCallable(const ModifyGroupDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupDomainConfigOutcome>>();
    ModifyGroupDomainConfigAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyGroupDomainConfigRequest&,
        ModifyGroupDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHTTPListenerAttributeRequest&;
    using Resp = ModifyHTTPListenerAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHTTPListenerAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyHTTPListenerAttributeOutcomeCallable GaapClient::ModifyHTTPListenerAttributeCallable(const ModifyHTTPListenerAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHTTPListenerAttributeOutcome>>();
    ModifyHTTPListenerAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyHTTPListenerAttributeRequest&,
        ModifyHTTPListenerAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHTTPSListenerAttributeRequest&;
    using Resp = ModifyHTTPSListenerAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHTTPSListenerAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyHTTPSListenerAttributeOutcomeCallable GaapClient::ModifyHTTPSListenerAttributeCallable(const ModifyHTTPSListenerAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHTTPSListenerAttributeOutcome>>();
    ModifyHTTPSListenerAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyHTTPSListenerAttributeRequest&,
        ModifyHTTPSListenerAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProxiesAttributeRequest&;
    using Resp = ModifyProxiesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxiesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyProxiesAttributeOutcomeCallable GaapClient::ModifyProxiesAttributeCallable(const ModifyProxiesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxiesAttributeOutcome>>();
    ModifyProxiesAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyProxiesAttributeRequest&,
        ModifyProxiesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProxiesProjectRequest&;
    using Resp = ModifyProxiesProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxiesProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyProxiesProjectOutcomeCallable GaapClient::ModifyProxiesProjectCallable(const ModifyProxiesProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxiesProjectOutcome>>();
    ModifyProxiesProjectAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyProxiesProjectRequest&,
        ModifyProxiesProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProxyConfigurationRequest&;
    using Resp = ModifyProxyConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxyConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyProxyConfigurationOutcomeCallable GaapClient::ModifyProxyConfigurationCallable(const ModifyProxyConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxyConfigurationOutcome>>();
    ModifyProxyConfigurationAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyProxyConfigurationRequest&,
        ModifyProxyConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyProxyGroupAttributeRequest&;
    using Resp = ModifyProxyGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProxyGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyProxyGroupAttributeOutcomeCallable GaapClient::ModifyProxyGroupAttributeCallable(const ModifyProxyGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProxyGroupAttributeOutcome>>();
    ModifyProxyGroupAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyProxyGroupAttributeRequest&,
        ModifyProxyGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRealServerNameRequest&;
    using Resp = ModifyRealServerNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRealServerName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyRealServerNameOutcomeCallable GaapClient::ModifyRealServerNameCallable(const ModifyRealServerNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRealServerNameOutcome>>();
    ModifyRealServerNameAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyRealServerNameRequest&,
        ModifyRealServerNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRuleAttributeRequest&;
    using Resp = ModifyRuleAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRuleAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyRuleAttributeOutcomeCallable GaapClient::ModifyRuleAttributeCallable(const ModifyRuleAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleAttributeOutcome>>();
    ModifyRuleAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyRuleAttributeRequest&,
        ModifyRuleAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySecurityRuleRequest&;
    using Resp = ModifySecurityRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifySecurityRuleOutcomeCallable GaapClient::ModifySecurityRuleCallable(const ModifySecurityRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityRuleOutcome>>();
    ModifySecurityRuleAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifySecurityRuleRequest&,
        ModifySecurityRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTCPListenerAttributeRequest&;
    using Resp = ModifyTCPListenerAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTCPListenerAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyTCPListenerAttributeOutcomeCallable GaapClient::ModifyTCPListenerAttributeCallable(const ModifyTCPListenerAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTCPListenerAttributeOutcome>>();
    ModifyTCPListenerAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyTCPListenerAttributeRequest&,
        ModifyTCPListenerAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUDPListenerAttributeRequest&;
    using Resp = ModifyUDPListenerAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUDPListenerAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::ModifyUDPListenerAttributeOutcomeCallable GaapClient::ModifyUDPListenerAttributeCallable(const ModifyUDPListenerAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUDPListenerAttributeOutcome>>();
    ModifyUDPListenerAttributeAsync(
    request,
    [prom](
        const GaapClient*,
        const ModifyUDPListenerAttributeRequest&,
        ModifyUDPListenerAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OpenProxiesRequest&;
    using Resp = OpenProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "OpenProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::OpenProxiesOutcomeCallable GaapClient::OpenProxiesCallable(const OpenProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenProxiesOutcome>>();
    OpenProxiesAsync(
    request,
    [prom](
        const GaapClient*,
        const OpenProxiesRequest&,
        OpenProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OpenProxyGroupRequest&;
    using Resp = OpenProxyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "OpenProxyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::OpenProxyGroupOutcomeCallable GaapClient::OpenProxyGroupCallable(const OpenProxyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenProxyGroupOutcome>>();
    OpenProxyGroupAsync(
    request,
    [prom](
        const GaapClient*,
        const OpenProxyGroupRequest&,
        OpenProxyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const OpenSecurityPolicyRequest&;
    using Resp = OpenSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "OpenSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::OpenSecurityPolicyOutcomeCallable GaapClient::OpenSecurityPolicyCallable(const OpenSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenSecurityPolicyOutcome>>();
    OpenSecurityPolicyAsync(
    request,
    [prom](
        const GaapClient*,
        const OpenSecurityPolicyRequest&,
        OpenSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveRealServersRequest&;
    using Resp = RemoveRealServersResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveRealServers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::RemoveRealServersOutcomeCallable GaapClient::RemoveRealServersCallable(const RemoveRealServersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveRealServersOutcome>>();
    RemoveRealServersAsync(
    request,
    [prom](
        const GaapClient*,
        const RemoveRealServersRequest&,
        RemoveRealServersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetAuthenticationRequest&;
    using Resp = SetAuthenticationResponse;

    DoRequestAsync<Req, Resp>(
        "SetAuthentication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::SetAuthenticationOutcomeCallable GaapClient::SetAuthenticationCallable(const SetAuthenticationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAuthenticationOutcome>>();
    SetAuthenticationAsync(
    request,
    [prom](
        const GaapClient*,
        const SetAuthenticationRequest&,
        SetAuthenticationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetTlsVersionRequest&;
    using Resp = SetTlsVersionResponse;

    DoRequestAsync<Req, Resp>(
        "SetTlsVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

GaapClient::SetTlsVersionOutcomeCallable GaapClient::SetTlsVersionCallable(const SetTlsVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTlsVersionOutcome>>();
    SetTlsVersionAsync(
    request,
    [prom](
        const GaapClient*,
        const SetTlsVersionRequest&,
        SetTlsVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

