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


TeoClient::ApplyFreeCertificateOutcome TeoClient::ApplyFreeCertificate(const ApplyFreeCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyFreeCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyFreeCertificateResponse rsp = ApplyFreeCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyFreeCertificateOutcome(rsp);
        else
            return ApplyFreeCertificateOutcome(o.GetError());
    }
    else
    {
        return ApplyFreeCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ApplyFreeCertificateAsync(const ApplyFreeCertificateRequest& request, const ApplyFreeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyFreeCertificateRequest&;
    using Resp = ApplyFreeCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyFreeCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ApplyFreeCertificateOutcomeCallable TeoClient::ApplyFreeCertificateCallable(const ApplyFreeCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyFreeCertificateOutcome>>();
    ApplyFreeCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const ApplyFreeCertificateRequest&,
        ApplyFreeCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindSecurityTemplateToEntityRequest&;
    using Resp = BindSecurityTemplateToEntityResponse;

    DoRequestAsync<Req, Resp>(
        "BindSecurityTemplateToEntity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::BindSecurityTemplateToEntityOutcomeCallable TeoClient::BindSecurityTemplateToEntityCallable(const BindSecurityTemplateToEntityRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSecurityTemplateToEntityOutcome>>();
    BindSecurityTemplateToEntityAsync(
    request,
    [prom](
        const TeoClient*,
        const BindSecurityTemplateToEntityRequest&,
        BindSecurityTemplateToEntityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindSharedCNAMERequest&;
    using Resp = BindSharedCNAMEResponse;

    DoRequestAsync<Req, Resp>(
        "BindSharedCNAME", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::BindSharedCNAMEOutcomeCallable TeoClient::BindSharedCNAMECallable(const BindSharedCNAMERequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSharedCNAMEOutcome>>();
    BindSharedCNAMEAsync(
    request,
    [prom](
        const TeoClient*,
        const BindSharedCNAMERequest&,
        BindSharedCNAMEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BindZoneToPlanRequest&;
    using Resp = BindZoneToPlanResponse;

    DoRequestAsync<Req, Resp>(
        "BindZoneToPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::BindZoneToPlanOutcomeCallable TeoClient::BindZoneToPlanCallable(const BindZoneToPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindZoneToPlanOutcome>>();
    BindZoneToPlanAsync(
    request,
    [prom](
        const TeoClient*,
        const BindZoneToPlanRequest&,
        BindZoneToPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CheckCnameStatusRequest&;
    using Resp = CheckCnameStatusResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCnameStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CheckCnameStatusOutcomeCallable TeoClient::CheckCnameStatusCallable(const CheckCnameStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCnameStatusOutcome>>();
    CheckCnameStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const CheckCnameStatusRequest&,
        CheckCnameStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CheckFreeCertificateVerificationOutcome TeoClient::CheckFreeCertificateVerification(const CheckFreeCertificateVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFreeCertificateVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFreeCertificateVerificationResponse rsp = CheckFreeCertificateVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFreeCertificateVerificationOutcome(rsp);
        else
            return CheckFreeCertificateVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckFreeCertificateVerificationOutcome(outcome.GetError());
    }
}

void TeoClient::CheckFreeCertificateVerificationAsync(const CheckFreeCertificateVerificationRequest& request, const CheckFreeCertificateVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFreeCertificateVerificationRequest&;
    using Resp = CheckFreeCertificateVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFreeCertificateVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CheckFreeCertificateVerificationOutcomeCallable TeoClient::CheckFreeCertificateVerificationCallable(const CheckFreeCertificateVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFreeCertificateVerificationOutcome>>();
    CheckFreeCertificateVerificationAsync(
    request,
    [prom](
        const TeoClient*,
        const CheckFreeCertificateVerificationRequest&,
        CheckFreeCertificateVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ConfirmMultiPathGatewayOriginACLOutcome TeoClient::ConfirmMultiPathGatewayOriginACL(const ConfirmMultiPathGatewayOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmMultiPathGatewayOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmMultiPathGatewayOriginACLResponse rsp = ConfirmMultiPathGatewayOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmMultiPathGatewayOriginACLOutcome(rsp);
        else
            return ConfirmMultiPathGatewayOriginACLOutcome(o.GetError());
    }
    else
    {
        return ConfirmMultiPathGatewayOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::ConfirmMultiPathGatewayOriginACLAsync(const ConfirmMultiPathGatewayOriginACLRequest& request, const ConfirmMultiPathGatewayOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmMultiPathGatewayOriginACLRequest&;
    using Resp = ConfirmMultiPathGatewayOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmMultiPathGatewayOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ConfirmMultiPathGatewayOriginACLOutcomeCallable TeoClient::ConfirmMultiPathGatewayOriginACLCallable(const ConfirmMultiPathGatewayOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmMultiPathGatewayOriginACLOutcome>>();
    ConfirmMultiPathGatewayOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const ConfirmMultiPathGatewayOriginACLRequest&,
        ConfirmMultiPathGatewayOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ConfirmOriginACLUpdateOutcome TeoClient::ConfirmOriginACLUpdate(const ConfirmOriginACLUpdateRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmOriginACLUpdate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmOriginACLUpdateResponse rsp = ConfirmOriginACLUpdateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmOriginACLUpdateOutcome(rsp);
        else
            return ConfirmOriginACLUpdateOutcome(o.GetError());
    }
    else
    {
        return ConfirmOriginACLUpdateOutcome(outcome.GetError());
    }
}

void TeoClient::ConfirmOriginACLUpdateAsync(const ConfirmOriginACLUpdateRequest& request, const ConfirmOriginACLUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmOriginACLUpdateRequest&;
    using Resp = ConfirmOriginACLUpdateResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmOriginACLUpdate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ConfirmOriginACLUpdateOutcomeCallable TeoClient::ConfirmOriginACLUpdateCallable(const ConfirmOriginACLUpdateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmOriginACLUpdateOutcome>>();
    ConfirmOriginACLUpdateAsync(
    request,
    [prom](
        const TeoClient*,
        const ConfirmOriginACLUpdateRequest&,
        ConfirmOriginACLUpdateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAccelerationDomainRequest&;
    using Resp = CreateAccelerationDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccelerationDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateAccelerationDomainOutcomeCallable TeoClient::CreateAccelerationDomainCallable(const CreateAccelerationDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccelerationDomainOutcome>>();
    CreateAccelerationDomainAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateAccelerationDomainRequest&,
        CreateAccelerationDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAliasDomainRequest&;
    using Resp = CreateAliasDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAliasDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateAliasDomainOutcomeCallable TeoClient::CreateAliasDomainCallable(const CreateAliasDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAliasDomainOutcome>>();
    CreateAliasDomainAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateAliasDomainRequest&,
        CreateAliasDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApplicationProxyRequest&;
    using Resp = CreateApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateApplicationProxyOutcomeCallable TeoClient::CreateApplicationProxyCallable(const CreateApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProxyOutcome>>();
    CreateApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateApplicationProxyRequest&,
        CreateApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateApplicationProxyRuleRequest&;
    using Resp = CreateApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateApplicationProxyRuleOutcomeCallable TeoClient::CreateApplicationProxyRuleCallable(const CreateApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationProxyRuleOutcome>>();
    CreateApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateApplicationProxyRuleRequest&,
        CreateApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCLSIndexRequest&;
    using Resp = CreateCLSIndexResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCLSIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateCLSIndexOutcomeCallable TeoClient::CreateCLSIndexCallable(const CreateCLSIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCLSIndexOutcome>>();
    CreateCLSIndexAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateCLSIndexRequest&,
        CreateCLSIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateConfigGroupVersionRequest&;
    using Resp = CreateConfigGroupVersionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigGroupVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateConfigGroupVersionOutcomeCallable TeoClient::CreateConfigGroupVersionCallable(const CreateConfigGroupVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigGroupVersionOutcome>>();
    CreateConfigGroupVersionAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateConfigGroupVersionRequest&,
        CreateConfigGroupVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateContentIdentifierRequest&;
    using Resp = CreateContentIdentifierResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContentIdentifier", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateContentIdentifierOutcomeCallable TeoClient::CreateContentIdentifierCallable(const CreateContentIdentifierRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContentIdentifierOutcome>>();
    CreateContentIdentifierAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateContentIdentifierRequest&,
        CreateContentIdentifierOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCustomizeErrorPageRequest&;
    using Resp = CreateCustomizeErrorPageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomizeErrorPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateCustomizeErrorPageOutcomeCallable TeoClient::CreateCustomizeErrorPageCallable(const CreateCustomizeErrorPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomizeErrorPageOutcome>>();
    CreateCustomizeErrorPageAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateCustomizeErrorPageRequest&,
        CreateCustomizeErrorPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDnsRecordRequest&;
    using Resp = CreateDnsRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDnsRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateDnsRecordOutcomeCallable TeoClient::CreateDnsRecordCallable(const CreateDnsRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDnsRecordOutcome>>();
    CreateDnsRecordAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateDnsRecordRequest&,
        CreateDnsRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateFunctionRequest&;
    using Resp = CreateFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateFunctionOutcomeCallable TeoClient::CreateFunctionCallable(const CreateFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFunctionOutcome>>();
    CreateFunctionAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateFunctionRequest&,
        CreateFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateFunctionRuleRequest&;
    using Resp = CreateFunctionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFunctionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateFunctionRuleOutcomeCallable TeoClient::CreateFunctionRuleCallable(const CreateFunctionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFunctionRuleOutcome>>();
    CreateFunctionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateFunctionRuleRequest&,
        CreateFunctionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateJustInTimeTranscodeTemplateOutcome TeoClient::CreateJustInTimeTranscodeTemplate(const CreateJustInTimeTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJustInTimeTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJustInTimeTranscodeTemplateResponse rsp = CreateJustInTimeTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJustInTimeTranscodeTemplateOutcome(rsp);
        else
            return CreateJustInTimeTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateJustInTimeTranscodeTemplateOutcome(outcome.GetError());
    }
}

void TeoClient::CreateJustInTimeTranscodeTemplateAsync(const CreateJustInTimeTranscodeTemplateRequest& request, const CreateJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJustInTimeTranscodeTemplateRequest&;
    using Resp = CreateJustInTimeTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJustInTimeTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateJustInTimeTranscodeTemplateOutcomeCallable TeoClient::CreateJustInTimeTranscodeTemplateCallable(const CreateJustInTimeTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJustInTimeTranscodeTemplateOutcome>>();
    CreateJustInTimeTranscodeTemplateAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateJustInTimeTranscodeTemplateRequest&,
        CreateJustInTimeTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateL4ProxyRequest&;
    using Resp = CreateL4ProxyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL4Proxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateL4ProxyOutcomeCallable TeoClient::CreateL4ProxyCallable(const CreateL4ProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL4ProxyOutcome>>();
    CreateL4ProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateL4ProxyRequest&,
        CreateL4ProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateL4ProxyRulesRequest&;
    using Resp = CreateL4ProxyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL4ProxyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateL4ProxyRulesOutcomeCallable TeoClient::CreateL4ProxyRulesCallable(const CreateL4ProxyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL4ProxyRulesOutcome>>();
    CreateL4ProxyRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateL4ProxyRulesRequest&,
        CreateL4ProxyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateL7AccRulesRequest&;
    using Resp = CreateL7AccRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateL7AccRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateL7AccRulesOutcomeCallable TeoClient::CreateL7AccRulesCallable(const CreateL7AccRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateL7AccRulesOutcome>>();
    CreateL7AccRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateL7AccRulesRequest&,
        CreateL7AccRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLoadBalancerRequest&;
    using Resp = CreateLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateLoadBalancerOutcomeCallable TeoClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLoadBalancerOutcome>>();
    CreateLoadBalancerAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateLoadBalancerRequest&,
        CreateLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateMultiPathGatewayOutcome TeoClient::CreateMultiPathGateway(const CreateMultiPathGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiPathGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiPathGatewayResponse rsp = CreateMultiPathGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiPathGatewayOutcome(rsp);
        else
            return CreateMultiPathGatewayOutcome(o.GetError());
    }
    else
    {
        return CreateMultiPathGatewayOutcome(outcome.GetError());
    }
}

void TeoClient::CreateMultiPathGatewayAsync(const CreateMultiPathGatewayRequest& request, const CreateMultiPathGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMultiPathGatewayRequest&;
    using Resp = CreateMultiPathGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultiPathGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateMultiPathGatewayOutcomeCallable TeoClient::CreateMultiPathGatewayCallable(const CreateMultiPathGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultiPathGatewayOutcome>>();
    CreateMultiPathGatewayAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateMultiPathGatewayRequest&,
        CreateMultiPathGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateMultiPathGatewayLineOutcome TeoClient::CreateMultiPathGatewayLine(const CreateMultiPathGatewayLineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiPathGatewayLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiPathGatewayLineResponse rsp = CreateMultiPathGatewayLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiPathGatewayLineOutcome(rsp);
        else
            return CreateMultiPathGatewayLineOutcome(o.GetError());
    }
    else
    {
        return CreateMultiPathGatewayLineOutcome(outcome.GetError());
    }
}

void TeoClient::CreateMultiPathGatewayLineAsync(const CreateMultiPathGatewayLineRequest& request, const CreateMultiPathGatewayLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMultiPathGatewayLineRequest&;
    using Resp = CreateMultiPathGatewayLineResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultiPathGatewayLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateMultiPathGatewayLineOutcomeCallable TeoClient::CreateMultiPathGatewayLineCallable(const CreateMultiPathGatewayLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultiPathGatewayLineOutcome>>();
    CreateMultiPathGatewayLineAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateMultiPathGatewayLineRequest&,
        CreateMultiPathGatewayLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateMultiPathGatewaySecretKeyOutcome TeoClient::CreateMultiPathGatewaySecretKey(const CreateMultiPathGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMultiPathGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMultiPathGatewaySecretKeyResponse rsp = CreateMultiPathGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMultiPathGatewaySecretKeyOutcome(rsp);
        else
            return CreateMultiPathGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return CreateMultiPathGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void TeoClient::CreateMultiPathGatewaySecretKeyAsync(const CreateMultiPathGatewaySecretKeyRequest& request, const CreateMultiPathGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMultiPathGatewaySecretKeyRequest&;
    using Resp = CreateMultiPathGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMultiPathGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateMultiPathGatewaySecretKeyOutcomeCallable TeoClient::CreateMultiPathGatewaySecretKeyCallable(const CreateMultiPathGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMultiPathGatewaySecretKeyOutcome>>();
    CreateMultiPathGatewaySecretKeyAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateMultiPathGatewaySecretKeyRequest&,
        CreateMultiPathGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateOriginGroupRequest&;
    using Resp = CreateOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateOriginGroupOutcomeCallable TeoClient::CreateOriginGroupCallable(const CreateOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOriginGroupOutcome>>();
    CreateOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateOriginGroupRequest&,
        CreateOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePlanRequest&;
    using Resp = CreatePlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePlanOutcomeCallable TeoClient::CreatePlanCallable(const CreatePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePlanOutcome>>();
    CreatePlanAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePlanRequest&,
        CreatePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePlanForZoneRequest&;
    using Resp = CreatePlanForZoneResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePlanForZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePlanForZoneOutcomeCallable TeoClient::CreatePlanForZoneCallable(const CreatePlanForZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePlanForZoneOutcome>>();
    CreatePlanForZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePlanForZoneRequest&,
        CreatePlanForZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePrefetchTaskRequest&;
    using Resp = CreatePrefetchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrefetchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrefetchTaskOutcome>>();
    CreatePrefetchTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePrefetchTaskRequest&,
        CreatePrefetchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePurgeTaskRequest&;
    using Resp = CreatePurgeTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePurgeTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePurgeTaskOutcome>>();
    CreatePurgeTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreatePurgeTaskRequest&,
        CreatePurgeTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRealtimeLogDeliveryTaskRequest&;
    using Resp = CreateRealtimeLogDeliveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRealtimeLogDeliveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateRealtimeLogDeliveryTaskOutcomeCallable TeoClient::CreateRealtimeLogDeliveryTaskCallable(const CreateRealtimeLogDeliveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRealtimeLogDeliveryTaskOutcome>>();
    CreateRealtimeLogDeliveryTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateRealtimeLogDeliveryTaskRequest&,
        CreateRealtimeLogDeliveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateRuleOutcomeCallable TeoClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateSecurityAPIResourceOutcome TeoClient::CreateSecurityAPIResource(const CreateSecurityAPIResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityAPIResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityAPIResourceResponse rsp = CreateSecurityAPIResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityAPIResourceOutcome(rsp);
        else
            return CreateSecurityAPIResourceOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityAPIResourceOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityAPIResourceAsync(const CreateSecurityAPIResourceRequest& request, const CreateSecurityAPIResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityAPIResourceRequest&;
    using Resp = CreateSecurityAPIResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityAPIResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSecurityAPIResourceOutcomeCallable TeoClient::CreateSecurityAPIResourceCallable(const CreateSecurityAPIResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityAPIResourceOutcome>>();
    CreateSecurityAPIResourceAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSecurityAPIResourceRequest&,
        CreateSecurityAPIResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateSecurityAPIServiceOutcome TeoClient::CreateSecurityAPIService(const CreateSecurityAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityAPIServiceResponse rsp = CreateSecurityAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityAPIServiceOutcome(rsp);
        else
            return CreateSecurityAPIServiceOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityAPIServiceOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityAPIServiceAsync(const CreateSecurityAPIServiceRequest& request, const CreateSecurityAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityAPIServiceRequest&;
    using Resp = CreateSecurityAPIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityAPIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSecurityAPIServiceOutcomeCallable TeoClient::CreateSecurityAPIServiceCallable(const CreateSecurityAPIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityAPIServiceOutcome>>();
    CreateSecurityAPIServiceAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSecurityAPIServiceRequest&,
        CreateSecurityAPIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateSecurityClientAttesterOutcome TeoClient::CreateSecurityClientAttester(const CreateSecurityClientAttesterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityClientAttester");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityClientAttesterResponse rsp = CreateSecurityClientAttesterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityClientAttesterOutcome(rsp);
        else
            return CreateSecurityClientAttesterOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityClientAttesterOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityClientAttesterAsync(const CreateSecurityClientAttesterRequest& request, const CreateSecurityClientAttesterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityClientAttesterRequest&;
    using Resp = CreateSecurityClientAttesterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityClientAttester", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSecurityClientAttesterOutcomeCallable TeoClient::CreateSecurityClientAttesterCallable(const CreateSecurityClientAttesterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityClientAttesterOutcome>>();
    CreateSecurityClientAttesterAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSecurityClientAttesterRequest&,
        CreateSecurityClientAttesterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSecurityIPGroupRequest&;
    using Resp = CreateSecurityIPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityIPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSecurityIPGroupOutcomeCallable TeoClient::CreateSecurityIPGroupCallable(const CreateSecurityIPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityIPGroupOutcome>>();
    CreateSecurityIPGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSecurityIPGroupRequest&,
        CreateSecurityIPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateSecurityJSInjectionRuleOutcome TeoClient::CreateSecurityJSInjectionRule(const CreateSecurityJSInjectionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSecurityJSInjectionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSecurityJSInjectionRuleResponse rsp = CreateSecurityJSInjectionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSecurityJSInjectionRuleOutcome(rsp);
        else
            return CreateSecurityJSInjectionRuleOutcome(o.GetError());
    }
    else
    {
        return CreateSecurityJSInjectionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateSecurityJSInjectionRuleAsync(const CreateSecurityJSInjectionRuleRequest& request, const CreateSecurityJSInjectionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSecurityJSInjectionRuleRequest&;
    using Resp = CreateSecurityJSInjectionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSecurityJSInjectionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSecurityJSInjectionRuleOutcomeCallable TeoClient::CreateSecurityJSInjectionRuleCallable(const CreateSecurityJSInjectionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSecurityJSInjectionRuleOutcome>>();
    CreateSecurityJSInjectionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSecurityJSInjectionRuleRequest&,
        CreateSecurityJSInjectionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSharedCNAMERequest&;
    using Resp = CreateSharedCNAMEResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSharedCNAME", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateSharedCNAMEOutcomeCallable TeoClient::CreateSharedCNAMECallable(const CreateSharedCNAMERequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSharedCNAMEOutcome>>();
    CreateSharedCNAMEAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateSharedCNAMERequest&,
        CreateSharedCNAMEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::CreateWebSecurityTemplateOutcome TeoClient::CreateWebSecurityTemplate(const CreateWebSecurityTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebSecurityTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebSecurityTemplateResponse rsp = CreateWebSecurityTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebSecurityTemplateOutcome(rsp);
        else
            return CreateWebSecurityTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateWebSecurityTemplateOutcome(outcome.GetError());
    }
}

void TeoClient::CreateWebSecurityTemplateAsync(const CreateWebSecurityTemplateRequest& request, const CreateWebSecurityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebSecurityTemplateRequest&;
    using Resp = CreateWebSecurityTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebSecurityTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateWebSecurityTemplateOutcomeCallable TeoClient::CreateWebSecurityTemplateCallable(const CreateWebSecurityTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebSecurityTemplateOutcome>>();
    CreateWebSecurityTemplateAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateWebSecurityTemplateRequest&,
        CreateWebSecurityTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateZoneRequest&;
    using Resp = CreateZoneResponse;

    DoRequestAsync<Req, Resp>(
        "CreateZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::CreateZoneOutcomeCallable TeoClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateZoneOutcome>>();
    CreateZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const CreateZoneRequest&,
        CreateZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAccelerationDomainsRequest&;
    using Resp = DeleteAccelerationDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccelerationDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteAccelerationDomainsOutcomeCallable TeoClient::DeleteAccelerationDomainsCallable(const DeleteAccelerationDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccelerationDomainsOutcome>>();
    DeleteAccelerationDomainsAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteAccelerationDomainsRequest&,
        DeleteAccelerationDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAliasDomainRequest&;
    using Resp = DeleteAliasDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAliasDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteAliasDomainOutcomeCallable TeoClient::DeleteAliasDomainCallable(const DeleteAliasDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAliasDomainOutcome>>();
    DeleteAliasDomainAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteAliasDomainRequest&,
        DeleteAliasDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApplicationProxyRequest&;
    using Resp = DeleteApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteApplicationProxyOutcomeCallable TeoClient::DeleteApplicationProxyCallable(const DeleteApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationProxyOutcome>>();
    DeleteApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteApplicationProxyRequest&,
        DeleteApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteApplicationProxyRuleRequest&;
    using Resp = DeleteApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteApplicationProxyRuleOutcomeCallable TeoClient::DeleteApplicationProxyRuleCallable(const DeleteApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationProxyRuleOutcome>>();
    DeleteApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteApplicationProxyRuleRequest&,
        DeleteApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteContentIdentifierRequest&;
    using Resp = DeleteContentIdentifierResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteContentIdentifier", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteContentIdentifierOutcomeCallable TeoClient::DeleteContentIdentifierCallable(const DeleteContentIdentifierRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteContentIdentifierOutcome>>();
    DeleteContentIdentifierAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteContentIdentifierRequest&,
        DeleteContentIdentifierOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCustomErrorPageRequest&;
    using Resp = DeleteCustomErrorPageResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomErrorPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteCustomErrorPageOutcomeCallable TeoClient::DeleteCustomErrorPageCallable(const DeleteCustomErrorPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomErrorPageOutcome>>();
    DeleteCustomErrorPageAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteCustomErrorPageRequest&,
        DeleteCustomErrorPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDnsRecordsRequest&;
    using Resp = DeleteDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteDnsRecordsOutcomeCallable TeoClient::DeleteDnsRecordsCallable(const DeleteDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDnsRecordsOutcome>>();
    DeleteDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteDnsRecordsRequest&,
        DeleteDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteFunctionRequest&;
    using Resp = DeleteFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteFunctionOutcomeCallable TeoClient::DeleteFunctionCallable(const DeleteFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFunctionOutcome>>();
    DeleteFunctionAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteFunctionRequest&,
        DeleteFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteFunctionRulesRequest&;
    using Resp = DeleteFunctionRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFunctionRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteFunctionRulesOutcomeCallable TeoClient::DeleteFunctionRulesCallable(const DeleteFunctionRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFunctionRulesOutcome>>();
    DeleteFunctionRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteFunctionRulesRequest&,
        DeleteFunctionRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteJustInTimeTranscodeTemplatesOutcome TeoClient::DeleteJustInTimeTranscodeTemplates(const DeleteJustInTimeTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJustInTimeTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJustInTimeTranscodeTemplatesResponse rsp = DeleteJustInTimeTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJustInTimeTranscodeTemplatesOutcome(rsp);
        else
            return DeleteJustInTimeTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteJustInTimeTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteJustInTimeTranscodeTemplatesAsync(const DeleteJustInTimeTranscodeTemplatesRequest& request, const DeleteJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJustInTimeTranscodeTemplatesRequest&;
    using Resp = DeleteJustInTimeTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJustInTimeTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteJustInTimeTranscodeTemplatesOutcomeCallable TeoClient::DeleteJustInTimeTranscodeTemplatesCallable(const DeleteJustInTimeTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJustInTimeTranscodeTemplatesOutcome>>();
    DeleteJustInTimeTranscodeTemplatesAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteJustInTimeTranscodeTemplatesRequest&,
        DeleteJustInTimeTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteL4ProxyRequest&;
    using Resp = DeleteL4ProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL4Proxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteL4ProxyOutcomeCallable TeoClient::DeleteL4ProxyCallable(const DeleteL4ProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL4ProxyOutcome>>();
    DeleteL4ProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteL4ProxyRequest&,
        DeleteL4ProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteL4ProxyRulesRequest&;
    using Resp = DeleteL4ProxyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL4ProxyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteL4ProxyRulesOutcomeCallable TeoClient::DeleteL4ProxyRulesCallable(const DeleteL4ProxyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL4ProxyRulesOutcome>>();
    DeleteL4ProxyRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteL4ProxyRulesRequest&,
        DeleteL4ProxyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteL7AccRulesRequest&;
    using Resp = DeleteL7AccRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteL7AccRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteL7AccRulesOutcomeCallable TeoClient::DeleteL7AccRulesCallable(const DeleteL7AccRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteL7AccRulesOutcome>>();
    DeleteL7AccRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteL7AccRulesRequest&,
        DeleteL7AccRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLoadBalancerRequest&;
    using Resp = DeleteLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteLoadBalancerOutcomeCallable TeoClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoadBalancerOutcome>>();
    DeleteLoadBalancerAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteLoadBalancerRequest&,
        DeleteLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteMultiPathGatewayOutcome TeoClient::DeleteMultiPathGateway(const DeleteMultiPathGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMultiPathGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMultiPathGatewayResponse rsp = DeleteMultiPathGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMultiPathGatewayOutcome(rsp);
        else
            return DeleteMultiPathGatewayOutcome(o.GetError());
    }
    else
    {
        return DeleteMultiPathGatewayOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteMultiPathGatewayAsync(const DeleteMultiPathGatewayRequest& request, const DeleteMultiPathGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMultiPathGatewayRequest&;
    using Resp = DeleteMultiPathGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMultiPathGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteMultiPathGatewayOutcomeCallable TeoClient::DeleteMultiPathGatewayCallable(const DeleteMultiPathGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMultiPathGatewayOutcome>>();
    DeleteMultiPathGatewayAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteMultiPathGatewayRequest&,
        DeleteMultiPathGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteMultiPathGatewayLineOutcome TeoClient::DeleteMultiPathGatewayLine(const DeleteMultiPathGatewayLineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMultiPathGatewayLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMultiPathGatewayLineResponse rsp = DeleteMultiPathGatewayLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMultiPathGatewayLineOutcome(rsp);
        else
            return DeleteMultiPathGatewayLineOutcome(o.GetError());
    }
    else
    {
        return DeleteMultiPathGatewayLineOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteMultiPathGatewayLineAsync(const DeleteMultiPathGatewayLineRequest& request, const DeleteMultiPathGatewayLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMultiPathGatewayLineRequest&;
    using Resp = DeleteMultiPathGatewayLineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMultiPathGatewayLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteMultiPathGatewayLineOutcomeCallable TeoClient::DeleteMultiPathGatewayLineCallable(const DeleteMultiPathGatewayLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMultiPathGatewayLineOutcome>>();
    DeleteMultiPathGatewayLineAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteMultiPathGatewayLineRequest&,
        DeleteMultiPathGatewayLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteOriginGroupRequest&;
    using Resp = DeleteOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteOriginGroupOutcomeCallable TeoClient::DeleteOriginGroupCallable(const DeleteOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteOriginGroupOutcome>>();
    DeleteOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteOriginGroupRequest&,
        DeleteOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRealtimeLogDeliveryTaskRequest&;
    using Resp = DeleteRealtimeLogDeliveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRealtimeLogDeliveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteRealtimeLogDeliveryTaskOutcomeCallable TeoClient::DeleteRealtimeLogDeliveryTaskCallable(const DeleteRealtimeLogDeliveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRealtimeLogDeliveryTaskOutcome>>();
    DeleteRealtimeLogDeliveryTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteRealtimeLogDeliveryTaskRequest&,
        DeleteRealtimeLogDeliveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRulesRequest&;
    using Resp = DeleteRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteRulesOutcomeCallable TeoClient::DeleteRulesCallable(const DeleteRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRulesOutcome>>();
    DeleteRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteRulesRequest&,
        DeleteRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteSecurityAPIResourceOutcome TeoClient::DeleteSecurityAPIResource(const DeleteSecurityAPIResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityAPIResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityAPIResourceResponse rsp = DeleteSecurityAPIResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityAPIResourceOutcome(rsp);
        else
            return DeleteSecurityAPIResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityAPIResourceOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSecurityAPIResourceAsync(const DeleteSecurityAPIResourceRequest& request, const DeleteSecurityAPIResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityAPIResourceRequest&;
    using Resp = DeleteSecurityAPIResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityAPIResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSecurityAPIResourceOutcomeCallable TeoClient::DeleteSecurityAPIResourceCallable(const DeleteSecurityAPIResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityAPIResourceOutcome>>();
    DeleteSecurityAPIResourceAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSecurityAPIResourceRequest&,
        DeleteSecurityAPIResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteSecurityAPIServiceOutcome TeoClient::DeleteSecurityAPIService(const DeleteSecurityAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityAPIServiceResponse rsp = DeleteSecurityAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityAPIServiceOutcome(rsp);
        else
            return DeleteSecurityAPIServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityAPIServiceOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSecurityAPIServiceAsync(const DeleteSecurityAPIServiceRequest& request, const DeleteSecurityAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityAPIServiceRequest&;
    using Resp = DeleteSecurityAPIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityAPIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSecurityAPIServiceOutcomeCallable TeoClient::DeleteSecurityAPIServiceCallable(const DeleteSecurityAPIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityAPIServiceOutcome>>();
    DeleteSecurityAPIServiceAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSecurityAPIServiceRequest&,
        DeleteSecurityAPIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteSecurityClientAttesterOutcome TeoClient::DeleteSecurityClientAttester(const DeleteSecurityClientAttesterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityClientAttester");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityClientAttesterResponse rsp = DeleteSecurityClientAttesterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityClientAttesterOutcome(rsp);
        else
            return DeleteSecurityClientAttesterOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityClientAttesterOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSecurityClientAttesterAsync(const DeleteSecurityClientAttesterRequest& request, const DeleteSecurityClientAttesterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityClientAttesterRequest&;
    using Resp = DeleteSecurityClientAttesterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityClientAttester", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSecurityClientAttesterOutcomeCallable TeoClient::DeleteSecurityClientAttesterCallable(const DeleteSecurityClientAttesterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityClientAttesterOutcome>>();
    DeleteSecurityClientAttesterAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSecurityClientAttesterRequest&,
        DeleteSecurityClientAttesterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSecurityIPGroupRequest&;
    using Resp = DeleteSecurityIPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityIPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSecurityIPGroupOutcomeCallable TeoClient::DeleteSecurityIPGroupCallable(const DeleteSecurityIPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityIPGroupOutcome>>();
    DeleteSecurityIPGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSecurityIPGroupRequest&,
        DeleteSecurityIPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteSecurityJSInjectionRuleOutcome TeoClient::DeleteSecurityJSInjectionRule(const DeleteSecurityJSInjectionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSecurityJSInjectionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSecurityJSInjectionRuleResponse rsp = DeleteSecurityJSInjectionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSecurityJSInjectionRuleOutcome(rsp);
        else
            return DeleteSecurityJSInjectionRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteSecurityJSInjectionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteSecurityJSInjectionRuleAsync(const DeleteSecurityJSInjectionRuleRequest& request, const DeleteSecurityJSInjectionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSecurityJSInjectionRuleRequest&;
    using Resp = DeleteSecurityJSInjectionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSecurityJSInjectionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSecurityJSInjectionRuleOutcomeCallable TeoClient::DeleteSecurityJSInjectionRuleCallable(const DeleteSecurityJSInjectionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSecurityJSInjectionRuleOutcome>>();
    DeleteSecurityJSInjectionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSecurityJSInjectionRuleRequest&,
        DeleteSecurityJSInjectionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSharedCNAMERequest&;
    using Resp = DeleteSharedCNAMEResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSharedCNAME", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteSharedCNAMEOutcomeCallable TeoClient::DeleteSharedCNAMECallable(const DeleteSharedCNAMERequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSharedCNAMEOutcome>>();
    DeleteSharedCNAMEAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteSharedCNAMERequest&,
        DeleteSharedCNAMEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DeleteWebSecurityTemplateOutcome TeoClient::DeleteWebSecurityTemplate(const DeleteWebSecurityTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebSecurityTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebSecurityTemplateResponse rsp = DeleteWebSecurityTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebSecurityTemplateOutcome(rsp);
        else
            return DeleteWebSecurityTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteWebSecurityTemplateOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteWebSecurityTemplateAsync(const DeleteWebSecurityTemplateRequest& request, const DeleteWebSecurityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebSecurityTemplateRequest&;
    using Resp = DeleteWebSecurityTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebSecurityTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteWebSecurityTemplateOutcomeCallable TeoClient::DeleteWebSecurityTemplateCallable(const DeleteWebSecurityTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebSecurityTemplateOutcome>>();
    DeleteWebSecurityTemplateAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteWebSecurityTemplateRequest&,
        DeleteWebSecurityTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteZoneRequest&;
    using Resp = DeleteZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeleteZoneOutcomeCallable TeoClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteZoneOutcome>>();
    DeleteZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const DeleteZoneRequest&,
        DeleteZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeployConfigGroupVersionRequest&;
    using Resp = DeployConfigGroupVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DeployConfigGroupVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DeployConfigGroupVersionOutcomeCallable TeoClient::DeployConfigGroupVersionCallable(const DeployConfigGroupVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployConfigGroupVersionOutcome>>();
    DeployConfigGroupVersionAsync(
    request,
    [prom](
        const TeoClient*,
        const DeployConfigGroupVersionRequest&,
        DeployConfigGroupVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccelerationDomainsRequest&;
    using Resp = DescribeAccelerationDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccelerationDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeAccelerationDomainsOutcomeCallable TeoClient::DescribeAccelerationDomainsCallable(const DescribeAccelerationDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccelerationDomainsOutcome>>();
    DescribeAccelerationDomainsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeAccelerationDomainsRequest&,
        DescribeAccelerationDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAliasDomainsRequest&;
    using Resp = DescribeAliasDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAliasDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeAliasDomainsOutcomeCallable TeoClient::DescribeAliasDomainsCallable(const DescribeAliasDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAliasDomainsOutcome>>();
    DescribeAliasDomainsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeAliasDomainsRequest&,
        DescribeAliasDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeApplicationProxiesRequest&;
    using Resp = DescribeApplicationProxiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationProxies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeApplicationProxiesOutcomeCallable TeoClient::DescribeApplicationProxiesCallable(const DescribeApplicationProxiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationProxiesOutcome>>();
    DescribeApplicationProxiesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeApplicationProxiesRequest&,
        DescribeApplicationProxiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAvailablePlansRequest&;
    using Resp = DescribeAvailablePlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailablePlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeAvailablePlansOutcomeCallable TeoClient::DescribeAvailablePlansCallable(const DescribeAvailablePlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailablePlansOutcome>>();
    DescribeAvailablePlansAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeAvailablePlansRequest&,
        DescribeAvailablePlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBillingDataRequest&;
    using Resp = DescribeBillingDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillingData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeBillingDataOutcomeCallable TeoClient::DescribeBillingDataCallable(const DescribeBillingDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillingDataOutcome>>();
    DescribeBillingDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeBillingDataRequest&,
        DescribeBillingDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeConfigGroupVersionDetailRequest&;
    using Resp = DescribeConfigGroupVersionDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigGroupVersionDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeConfigGroupVersionDetailOutcomeCallable TeoClient::DescribeConfigGroupVersionDetailCallable(const DescribeConfigGroupVersionDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigGroupVersionDetailOutcome>>();
    DescribeConfigGroupVersionDetailAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeConfigGroupVersionDetailRequest&,
        DescribeConfigGroupVersionDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeConfigGroupVersionsRequest&;
    using Resp = DescribeConfigGroupVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigGroupVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeConfigGroupVersionsOutcomeCallable TeoClient::DescribeConfigGroupVersionsCallable(const DescribeConfigGroupVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigGroupVersionsOutcome>>();
    DescribeConfigGroupVersionsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeConfigGroupVersionsRequest&,
        DescribeConfigGroupVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeContentIdentifiersRequest&;
    using Resp = DescribeContentIdentifiersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContentIdentifiers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeContentIdentifiersOutcomeCallable TeoClient::DescribeContentIdentifiersCallable(const DescribeContentIdentifiersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContentIdentifiersOutcome>>();
    DescribeContentIdentifiersAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeContentIdentifiersRequest&,
        DescribeContentIdentifiersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeContentQuotaRequest&;
    using Resp = DescribeContentQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContentQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeContentQuotaOutcomeCallable TeoClient::DescribeContentQuotaCallable(const DescribeContentQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContentQuotaOutcome>>();
    DescribeContentQuotaAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeContentQuotaRequest&,
        DescribeContentQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCustomErrorPagesRequest&;
    using Resp = DescribeCustomErrorPagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomErrorPages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeCustomErrorPagesOutcomeCallable TeoClient::DescribeCustomErrorPagesCallable(const DescribeCustomErrorPagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomErrorPagesOutcome>>();
    DescribeCustomErrorPagesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeCustomErrorPagesRequest&,
        DescribeCustomErrorPagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDDoSAttackDataRequest&;
    using Resp = DescribeDDoSAttackDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAttackData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDoSAttackDataOutcomeCallable TeoClient::DescribeDDoSAttackDataCallable(const DescribeDDoSAttackDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAttackDataOutcome>>();
    DescribeDDoSAttackDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDoSAttackDataRequest&,
        DescribeDDoSAttackDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDDoSAttackEventRequest&;
    using Resp = DescribeDDoSAttackEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAttackEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDoSAttackEventOutcomeCallable TeoClient::DescribeDDoSAttackEventCallable(const DescribeDDoSAttackEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAttackEventOutcome>>();
    DescribeDDoSAttackEventAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDoSAttackEventRequest&,
        DescribeDDoSAttackEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDDoSAttackTopDataRequest&;
    using Resp = DescribeDDoSAttackTopDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSAttackTopData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDoSAttackTopDataOutcomeCallable TeoClient::DescribeDDoSAttackTopDataCallable(const DescribeDDoSAttackTopDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSAttackTopDataOutcome>>();
    DescribeDDoSAttackTopDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDoSAttackTopDataRequest&,
        DescribeDDoSAttackTopDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeDDoSProtectionOutcome TeoClient::DescribeDDoSProtection(const DescribeDDoSProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSProtectionResponse rsp = DescribeDDoSProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSProtectionOutcome(rsp);
        else
            return DescribeDDoSProtectionOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSProtectionOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDDoSProtectionAsync(const DescribeDDoSProtectionRequest& request, const DescribeDDoSProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSProtectionRequest&;
    using Resp = DescribeDDoSProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDDoSProtectionOutcomeCallable TeoClient::DescribeDDoSProtectionCallable(const DescribeDDoSProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSProtectionOutcome>>();
    DescribeDDoSProtectionAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDDoSProtectionRequest&,
        DescribeDDoSProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDefaultCertificatesRequest&;
    using Resp = DescribeDefaultCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDefaultCertificatesOutcomeCallable TeoClient::DescribeDefaultCertificatesCallable(const DescribeDefaultCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultCertificatesOutcome>>();
    DescribeDefaultCertificatesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDefaultCertificatesRequest&,
        DescribeDefaultCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeployHistoryRequest&;
    using Resp = DescribeDeployHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDeployHistoryOutcomeCallable TeoClient::DescribeDeployHistoryCallable(const DescribeDeployHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeployHistoryOutcome>>();
    DescribeDeployHistoryAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDeployHistoryRequest&,
        DescribeDeployHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDnsRecordsRequest&;
    using Resp = DescribeDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeDnsRecordsOutcomeCallable TeoClient::DescribeDnsRecordsCallable(const DescribeDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDnsRecordsOutcome>>();
    DescribeDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeDnsRecordsRequest&,
        DescribeDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEnvironmentsRequest&;
    using Resp = DescribeEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeEnvironmentsOutcomeCallable TeoClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFunctionRulesRequest&;
    using Resp = DescribeFunctionRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFunctionRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeFunctionRulesOutcomeCallable TeoClient::DescribeFunctionRulesCallable(const DescribeFunctionRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFunctionRulesOutcome>>();
    DescribeFunctionRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeFunctionRulesRequest&,
        DescribeFunctionRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFunctionRuntimeEnvironmentRequest&;
    using Resp = DescribeFunctionRuntimeEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFunctionRuntimeEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeFunctionRuntimeEnvironmentOutcomeCallable TeoClient::DescribeFunctionRuntimeEnvironmentCallable(const DescribeFunctionRuntimeEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFunctionRuntimeEnvironmentOutcome>>();
    DescribeFunctionRuntimeEnvironmentAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeFunctionRuntimeEnvironmentRequest&,
        DescribeFunctionRuntimeEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFunctionsRequest&;
    using Resp = DescribeFunctionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFunctions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeFunctionsOutcomeCallable TeoClient::DescribeFunctionsCallable(const DescribeFunctionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFunctionsOutcome>>();
    DescribeFunctionsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeFunctionsRequest&,
        DescribeFunctionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHostsSettingRequest&;
    using Resp = DescribeHostsSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostsSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeHostsSettingOutcomeCallable TeoClient::DescribeHostsSettingCallable(const DescribeHostsSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostsSettingOutcome>>();
    DescribeHostsSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeHostsSettingRequest&,
        DescribeHostsSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIPRegionRequest&;
    using Resp = DescribeIPRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeIPRegionOutcomeCallable TeoClient::DescribeIPRegionCallable(const DescribeIPRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPRegionOutcome>>();
    DescribeIPRegionAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeIPRegionRequest&,
        DescribeIPRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeIdentificationsRequest&;
    using Resp = DescribeIdentificationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdentifications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeIdentificationsOutcomeCallable TeoClient::DescribeIdentificationsCallable(const DescribeIdentificationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdentificationsOutcome>>();
    DescribeIdentificationsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeIdentificationsRequest&,
        DescribeIdentificationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeJustInTimeTranscodeTemplatesOutcome TeoClient::DescribeJustInTimeTranscodeTemplates(const DescribeJustInTimeTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJustInTimeTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJustInTimeTranscodeTemplatesResponse rsp = DescribeJustInTimeTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJustInTimeTranscodeTemplatesOutcome(rsp);
        else
            return DescribeJustInTimeTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeJustInTimeTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeJustInTimeTranscodeTemplatesAsync(const DescribeJustInTimeTranscodeTemplatesRequest& request, const DescribeJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJustInTimeTranscodeTemplatesRequest&;
    using Resp = DescribeJustInTimeTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJustInTimeTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeJustInTimeTranscodeTemplatesOutcomeCallable TeoClient::DescribeJustInTimeTranscodeTemplatesCallable(const DescribeJustInTimeTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJustInTimeTranscodeTemplatesOutcome>>();
    DescribeJustInTimeTranscodeTemplatesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeJustInTimeTranscodeTemplatesRequest&,
        DescribeJustInTimeTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeL4ProxyRequest&;
    using Resp = DescribeL4ProxyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL4Proxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeL4ProxyOutcomeCallable TeoClient::DescribeL4ProxyCallable(const DescribeL4ProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL4ProxyOutcome>>();
    DescribeL4ProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeL4ProxyRequest&,
        DescribeL4ProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeL4ProxyRulesRequest&;
    using Resp = DescribeL4ProxyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL4ProxyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeL4ProxyRulesOutcomeCallable TeoClient::DescribeL4ProxyRulesCallable(const DescribeL4ProxyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL4ProxyRulesOutcome>>();
    DescribeL4ProxyRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeL4ProxyRulesRequest&,
        DescribeL4ProxyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeL7AccRulesRequest&;
    using Resp = DescribeL7AccRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL7AccRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeL7AccRulesOutcomeCallable TeoClient::DescribeL7AccRulesCallable(const DescribeL7AccRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL7AccRulesOutcome>>();
    DescribeL7AccRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeL7AccRulesRequest&,
        DescribeL7AccRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeL7AccSettingRequest&;
    using Resp = DescribeL7AccSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeL7AccSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeL7AccSettingOutcomeCallable TeoClient::DescribeL7AccSettingCallable(const DescribeL7AccSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeL7AccSettingOutcome>>();
    DescribeL7AccSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeL7AccSettingRequest&,
        DescribeL7AccSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLoadBalancerListRequest&;
    using Resp = DescribeLoadBalancerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoadBalancerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeLoadBalancerListOutcomeCallable TeoClient::DescribeLoadBalancerListCallable(const DescribeLoadBalancerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoadBalancerListOutcome>>();
    DescribeLoadBalancerListAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeLoadBalancerListRequest&,
        DescribeLoadBalancerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewayOutcome TeoClient::DescribeMultiPathGateway(const DescribeMultiPathGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewayResponse rsp = DescribeMultiPathGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewayOutcome(rsp);
        else
            return DescribeMultiPathGatewayOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewayOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewayAsync(const DescribeMultiPathGatewayRequest& request, const DescribeMultiPathGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewayRequest&;
    using Resp = DescribeMultiPathGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewayOutcomeCallable TeoClient::DescribeMultiPathGatewayCallable(const DescribeMultiPathGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewayOutcome>>();
    DescribeMultiPathGatewayAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewayRequest&,
        DescribeMultiPathGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewayLineOutcome TeoClient::DescribeMultiPathGatewayLine(const DescribeMultiPathGatewayLineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGatewayLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewayLineResponse rsp = DescribeMultiPathGatewayLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewayLineOutcome(rsp);
        else
            return DescribeMultiPathGatewayLineOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewayLineOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewayLineAsync(const DescribeMultiPathGatewayLineRequest& request, const DescribeMultiPathGatewayLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewayLineRequest&;
    using Resp = DescribeMultiPathGatewayLineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGatewayLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewayLineOutcomeCallable TeoClient::DescribeMultiPathGatewayLineCallable(const DescribeMultiPathGatewayLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewayLineOutcome>>();
    DescribeMultiPathGatewayLineAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewayLineRequest&,
        DescribeMultiPathGatewayLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewayOriginACLOutcome TeoClient::DescribeMultiPathGatewayOriginACL(const DescribeMultiPathGatewayOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGatewayOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewayOriginACLResponse rsp = DescribeMultiPathGatewayOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewayOriginACLOutcome(rsp);
        else
            return DescribeMultiPathGatewayOriginACLOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewayOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewayOriginACLAsync(const DescribeMultiPathGatewayOriginACLRequest& request, const DescribeMultiPathGatewayOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewayOriginACLRequest&;
    using Resp = DescribeMultiPathGatewayOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGatewayOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewayOriginACLOutcomeCallable TeoClient::DescribeMultiPathGatewayOriginACLCallable(const DescribeMultiPathGatewayOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewayOriginACLOutcome>>();
    DescribeMultiPathGatewayOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewayOriginACLRequest&,
        DescribeMultiPathGatewayOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewayRegionsOutcome TeoClient::DescribeMultiPathGatewayRegions(const DescribeMultiPathGatewayRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGatewayRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewayRegionsResponse rsp = DescribeMultiPathGatewayRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewayRegionsOutcome(rsp);
        else
            return DescribeMultiPathGatewayRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewayRegionsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewayRegionsAsync(const DescribeMultiPathGatewayRegionsRequest& request, const DescribeMultiPathGatewayRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewayRegionsRequest&;
    using Resp = DescribeMultiPathGatewayRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGatewayRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewayRegionsOutcomeCallable TeoClient::DescribeMultiPathGatewayRegionsCallable(const DescribeMultiPathGatewayRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewayRegionsOutcome>>();
    DescribeMultiPathGatewayRegionsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewayRegionsRequest&,
        DescribeMultiPathGatewayRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewaySecretKeyOutcome TeoClient::DescribeMultiPathGatewaySecretKey(const DescribeMultiPathGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewaySecretKeyResponse rsp = DescribeMultiPathGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewaySecretKeyOutcome(rsp);
        else
            return DescribeMultiPathGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewaySecretKeyAsync(const DescribeMultiPathGatewaySecretKeyRequest& request, const DescribeMultiPathGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewaySecretKeyRequest&;
    using Resp = DescribeMultiPathGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewaySecretKeyOutcomeCallable TeoClient::DescribeMultiPathGatewaySecretKeyCallable(const DescribeMultiPathGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewaySecretKeyOutcome>>();
    DescribeMultiPathGatewaySecretKeyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewaySecretKeyRequest&,
        DescribeMultiPathGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeMultiPathGatewaysOutcome TeoClient::DescribeMultiPathGateways(const DescribeMultiPathGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMultiPathGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMultiPathGatewaysResponse rsp = DescribeMultiPathGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMultiPathGatewaysOutcome(rsp);
        else
            return DescribeMultiPathGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeMultiPathGatewaysOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeMultiPathGatewaysAsync(const DescribeMultiPathGatewaysRequest& request, const DescribeMultiPathGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMultiPathGatewaysRequest&;
    using Resp = DescribeMultiPathGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMultiPathGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeMultiPathGatewaysOutcomeCallable TeoClient::DescribeMultiPathGatewaysCallable(const DescribeMultiPathGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMultiPathGatewaysOutcome>>();
    DescribeMultiPathGatewaysAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeMultiPathGatewaysRequest&,
        DescribeMultiPathGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeOriginACLOutcome TeoClient::DescribeOriginACL(const DescribeOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginACLResponse rsp = DescribeOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginACLOutcome(rsp);
        else
            return DescribeOriginACLOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeOriginACLAsync(const DescribeOriginACLRequest& request, const DescribeOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOriginACLRequest&;
    using Resp = DescribeOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginACLOutcomeCallable TeoClient::DescribeOriginACLCallable(const DescribeOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginACLOutcome>>();
    DescribeOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginACLRequest&,
        DescribeOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOriginGroupRequest&;
    using Resp = DescribeOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginGroupOutcomeCallable TeoClient::DescribeOriginGroupCallable(const DescribeOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginGroupOutcome>>();
    DescribeOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginGroupRequest&,
        DescribeOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOriginGroupHealthStatusRequest&;
    using Resp = DescribeOriginGroupHealthStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginGroupHealthStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginGroupHealthStatusOutcomeCallable TeoClient::DescribeOriginGroupHealthStatusCallable(const DescribeOriginGroupHealthStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginGroupHealthStatusOutcome>>();
    DescribeOriginGroupHealthStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginGroupHealthStatusRequest&,
        DescribeOriginGroupHealthStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOriginProtectionRequest&;
    using Resp = DescribeOriginProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOriginProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOriginProtectionOutcomeCallable TeoClient::DescribeOriginProtectionCallable(const DescribeOriginProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOriginProtectionOutcome>>();
    DescribeOriginProtectionAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOriginProtectionRequest&,
        DescribeOriginProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeOverviewL7DataRequest&;
    using Resp = DescribeOverviewL7DataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewL7Data", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeOverviewL7DataOutcomeCallable TeoClient::DescribeOverviewL7DataCallable(const DescribeOverviewL7DataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewL7DataOutcome>>();
    DescribeOverviewL7DataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeOverviewL7DataRequest&,
        DescribeOverviewL7DataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePlansRequest&;
    using Resp = DescribePlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePlansOutcomeCallable TeoClient::DescribePlansCallable(const DescribePlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlansOutcome>>();
    DescribePlansAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePlansRequest&,
        DescribePlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribePrefetchOriginLimitOutcome TeoClient::DescribePrefetchOriginLimit(const DescribePrefetchOriginLimitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrefetchOriginLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrefetchOriginLimitResponse rsp = DescribePrefetchOriginLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrefetchOriginLimitOutcome(rsp);
        else
            return DescribePrefetchOriginLimitOutcome(o.GetError());
    }
    else
    {
        return DescribePrefetchOriginLimitOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePrefetchOriginLimitAsync(const DescribePrefetchOriginLimitRequest& request, const DescribePrefetchOriginLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrefetchOriginLimitRequest&;
    using Resp = DescribePrefetchOriginLimitResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrefetchOriginLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePrefetchOriginLimitOutcomeCallable TeoClient::DescribePrefetchOriginLimitCallable(const DescribePrefetchOriginLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrefetchOriginLimitOutcome>>();
    DescribePrefetchOriginLimitAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePrefetchOriginLimitRequest&,
        DescribePrefetchOriginLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePrefetchTasksRequest&;
    using Resp = DescribePrefetchTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrefetchTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrefetchTasksOutcome>>();
    DescribePrefetchTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePrefetchTasksRequest&,
        DescribePrefetchTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePurgeTasksRequest&;
    using Resp = DescribePurgeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePurgeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePurgeTasksOutcome>>();
    DescribePurgeTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribePurgeTasksRequest&,
        DescribePurgeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRealtimeLogDeliveryTasksRequest&;
    using Resp = DescribeRealtimeLogDeliveryTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRealtimeLogDeliveryTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeRealtimeLogDeliveryTasksOutcomeCallable TeoClient::DescribeRealtimeLogDeliveryTasksCallable(const DescribeRealtimeLogDeliveryTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRealtimeLogDeliveryTasksOutcome>>();
    DescribeRealtimeLogDeliveryTasksAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeRealtimeLogDeliveryTasksRequest&,
        DescribeRealtimeLogDeliveryTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeRulesOutcomeCallable TeoClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRulesSettingRequest&;
    using Resp = DescribeRulesSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRulesSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeRulesSettingOutcomeCallable TeoClient::DescribeRulesSettingCallable(const DescribeRulesSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesSettingOutcome>>();
    DescribeRulesSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeRulesSettingRequest&,
        DescribeRulesSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityAPIResourceOutcome TeoClient::DescribeSecurityAPIResource(const DescribeSecurityAPIResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAPIResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAPIResourceResponse rsp = DescribeSecurityAPIResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAPIResourceOutcome(rsp);
        else
            return DescribeSecurityAPIResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAPIResourceOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityAPIResourceAsync(const DescribeSecurityAPIResourceRequest& request, const DescribeSecurityAPIResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityAPIResourceRequest&;
    using Resp = DescribeSecurityAPIResourceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityAPIResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityAPIResourceOutcomeCallable TeoClient::DescribeSecurityAPIResourceCallable(const DescribeSecurityAPIResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityAPIResourceOutcome>>();
    DescribeSecurityAPIResourceAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityAPIResourceRequest&,
        DescribeSecurityAPIResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityAPIServiceOutcome TeoClient::DescribeSecurityAPIService(const DescribeSecurityAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityAPIServiceResponse rsp = DescribeSecurityAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityAPIServiceOutcome(rsp);
        else
            return DescribeSecurityAPIServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityAPIServiceOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityAPIServiceAsync(const DescribeSecurityAPIServiceRequest& request, const DescribeSecurityAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityAPIServiceRequest&;
    using Resp = DescribeSecurityAPIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityAPIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityAPIServiceOutcomeCallable TeoClient::DescribeSecurityAPIServiceCallable(const DescribeSecurityAPIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityAPIServiceOutcome>>();
    DescribeSecurityAPIServiceAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityAPIServiceRequest&,
        DescribeSecurityAPIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityClientAttesterOutcome TeoClient::DescribeSecurityClientAttester(const DescribeSecurityClientAttesterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityClientAttester");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityClientAttesterResponse rsp = DescribeSecurityClientAttesterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityClientAttesterOutcome(rsp);
        else
            return DescribeSecurityClientAttesterOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityClientAttesterOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityClientAttesterAsync(const DescribeSecurityClientAttesterRequest& request, const DescribeSecurityClientAttesterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityClientAttesterRequest&;
    using Resp = DescribeSecurityClientAttesterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityClientAttester", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityClientAttesterOutcomeCallable TeoClient::DescribeSecurityClientAttesterCallable(const DescribeSecurityClientAttesterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityClientAttesterOutcome>>();
    DescribeSecurityClientAttesterAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityClientAttesterRequest&,
        DescribeSecurityClientAttesterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityIPGroupRequest&;
    using Resp = DescribeSecurityIPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityIPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityIPGroupOutcomeCallable TeoClient::DescribeSecurityIPGroupCallable(const DescribeSecurityIPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityIPGroupOutcome>>();
    DescribeSecurityIPGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityIPGroupRequest&,
        DescribeSecurityIPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityIPGroupContentOutcome TeoClient::DescribeSecurityIPGroupContent(const DescribeSecurityIPGroupContentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityIPGroupContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityIPGroupContentResponse rsp = DescribeSecurityIPGroupContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityIPGroupContentOutcome(rsp);
        else
            return DescribeSecurityIPGroupContentOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityIPGroupContentOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityIPGroupContentAsync(const DescribeSecurityIPGroupContentRequest& request, const DescribeSecurityIPGroupContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityIPGroupContentRequest&;
    using Resp = DescribeSecurityIPGroupContentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityIPGroupContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityIPGroupContentOutcomeCallable TeoClient::DescribeSecurityIPGroupContentCallable(const DescribeSecurityIPGroupContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityIPGroupContentOutcome>>();
    DescribeSecurityIPGroupContentAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityIPGroupContentRequest&,
        DescribeSecurityIPGroupContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityIPGroupInfoRequest&;
    using Resp = DescribeSecurityIPGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityIPGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityIPGroupInfoOutcomeCallable TeoClient::DescribeSecurityIPGroupInfoCallable(const DescribeSecurityIPGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityIPGroupInfoOutcome>>();
    DescribeSecurityIPGroupInfoAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityIPGroupInfoRequest&,
        DescribeSecurityIPGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeSecurityJSInjectionRuleOutcome TeoClient::DescribeSecurityJSInjectionRule(const DescribeSecurityJSInjectionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityJSInjectionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityJSInjectionRuleResponse rsp = DescribeSecurityJSInjectionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityJSInjectionRuleOutcome(rsp);
        else
            return DescribeSecurityJSInjectionRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityJSInjectionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeSecurityJSInjectionRuleAsync(const DescribeSecurityJSInjectionRuleRequest& request, const DescribeSecurityJSInjectionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityJSInjectionRuleRequest&;
    using Resp = DescribeSecurityJSInjectionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityJSInjectionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityJSInjectionRuleOutcomeCallable TeoClient::DescribeSecurityJSInjectionRuleCallable(const DescribeSecurityJSInjectionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityJSInjectionRuleOutcome>>();
    DescribeSecurityJSInjectionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityJSInjectionRuleRequest&,
        DescribeSecurityJSInjectionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityPolicyRequest&;
    using Resp = DescribeSecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityPolicyOutcomeCallable TeoClient::DescribeSecurityPolicyCallable(const DescribeSecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityPolicyOutcome>>();
    DescribeSecurityPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityPolicyRequest&,
        DescribeSecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSecurityTemplateBindingsRequest&;
    using Resp = DescribeSecurityTemplateBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityTemplateBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeSecurityTemplateBindingsOutcomeCallable TeoClient::DescribeSecurityTemplateBindingsCallable(const DescribeSecurityTemplateBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityTemplateBindingsOutcome>>();
    DescribeSecurityTemplateBindingsAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeSecurityTemplateBindingsRequest&,
        DescribeSecurityTemplateBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTimingL4DataRequest&;
    using Resp = DescribeTimingL4DataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL4Data", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL4DataOutcomeCallable TeoClient::DescribeTimingL4DataCallable(const DescribeTimingL4DataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL4DataOutcome>>();
    DescribeTimingL4DataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL4DataRequest&,
        DescribeTimingL4DataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTimingL7AnalysisDataRequest&;
    using Resp = DescribeTimingL7AnalysisDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL7AnalysisData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL7AnalysisDataOutcomeCallable TeoClient::DescribeTimingL7AnalysisDataCallable(const DescribeTimingL7AnalysisDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL7AnalysisDataOutcome>>();
    DescribeTimingL7AnalysisDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL7AnalysisDataRequest&,
        DescribeTimingL7AnalysisDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTimingL7CacheDataRequest&;
    using Resp = DescribeTimingL7CacheDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL7CacheData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL7CacheDataOutcomeCallable TeoClient::DescribeTimingL7CacheDataCallable(const DescribeTimingL7CacheDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL7CacheDataOutcome>>();
    DescribeTimingL7CacheDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL7CacheDataRequest&,
        DescribeTimingL7CacheDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeTimingL7OriginPullDataOutcome TeoClient::DescribeTimingL7OriginPullData(const DescribeTimingL7OriginPullDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimingL7OriginPullData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimingL7OriginPullDataResponse rsp = DescribeTimingL7OriginPullDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimingL7OriginPullDataOutcome(rsp);
        else
            return DescribeTimingL7OriginPullDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTimingL7OriginPullDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeTimingL7OriginPullDataAsync(const DescribeTimingL7OriginPullDataRequest& request, const DescribeTimingL7OriginPullDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimingL7OriginPullDataRequest&;
    using Resp = DescribeTimingL7OriginPullDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimingL7OriginPullData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTimingL7OriginPullDataOutcomeCallable TeoClient::DescribeTimingL7OriginPullDataCallable(const DescribeTimingL7OriginPullDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimingL7OriginPullDataOutcome>>();
    DescribeTimingL7OriginPullDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTimingL7OriginPullDataRequest&,
        DescribeTimingL7OriginPullDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopL7AnalysisDataRequest&;
    using Resp = DescribeTopL7AnalysisDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopL7AnalysisData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTopL7AnalysisDataOutcomeCallable TeoClient::DescribeTopL7AnalysisDataCallable(const DescribeTopL7AnalysisDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopL7AnalysisDataOutcome>>();
    DescribeTopL7AnalysisDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTopL7AnalysisDataRequest&,
        DescribeTopL7AnalysisDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopL7CacheDataRequest&;
    using Resp = DescribeTopL7CacheDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopL7CacheData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeTopL7CacheDataOutcomeCallable TeoClient::DescribeTopL7CacheDataCallable(const DescribeTopL7CacheDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopL7CacheDataOutcome>>();
    DescribeTopL7CacheDataAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeTopL7CacheDataRequest&,
        DescribeTopL7CacheDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebSecurityTemplateOutcome TeoClient::DescribeWebSecurityTemplate(const DescribeWebSecurityTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebSecurityTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebSecurityTemplateResponse rsp = DescribeWebSecurityTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebSecurityTemplateOutcome(rsp);
        else
            return DescribeWebSecurityTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeWebSecurityTemplateOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebSecurityTemplateAsync(const DescribeWebSecurityTemplateRequest& request, const DescribeWebSecurityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebSecurityTemplateRequest&;
    using Resp = DescribeWebSecurityTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebSecurityTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebSecurityTemplateOutcomeCallable TeoClient::DescribeWebSecurityTemplateCallable(const DescribeWebSecurityTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebSecurityTemplateOutcome>>();
    DescribeWebSecurityTemplateAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebSecurityTemplateRequest&,
        DescribeWebSecurityTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DescribeWebSecurityTemplatesOutcome TeoClient::DescribeWebSecurityTemplates(const DescribeWebSecurityTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebSecurityTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebSecurityTemplatesResponse rsp = DescribeWebSecurityTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebSecurityTemplatesOutcome(rsp);
        else
            return DescribeWebSecurityTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeWebSecurityTemplatesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeWebSecurityTemplatesAsync(const DescribeWebSecurityTemplatesRequest& request, const DescribeWebSecurityTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebSecurityTemplatesRequest&;
    using Resp = DescribeWebSecurityTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebSecurityTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeWebSecurityTemplatesOutcomeCallable TeoClient::DescribeWebSecurityTemplatesCallable(const DescribeWebSecurityTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebSecurityTemplatesOutcome>>();
    DescribeWebSecurityTemplatesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeWebSecurityTemplatesRequest&,
        DescribeWebSecurityTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeZoneConfigImportResultRequest&;
    using Resp = DescribeZoneConfigImportResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneConfigImportResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZoneConfigImportResultOutcomeCallable TeoClient::DescribeZoneConfigImportResultCallable(const DescribeZoneConfigImportResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneConfigImportResultOutcome>>();
    DescribeZoneConfigImportResultAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZoneConfigImportResultRequest&,
        DescribeZoneConfigImportResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeZoneSettingRequest&;
    using Resp = DescribeZoneSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZoneSettingOutcomeCallable TeoClient::DescribeZoneSettingCallable(const DescribeZoneSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneSettingOutcome>>();
    DescribeZoneSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZoneSettingRequest&,
        DescribeZoneSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const TeoClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DestroyPlanRequest&;
    using Resp = DestroyPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DestroyPlanOutcomeCallable TeoClient::DestroyPlanCallable(const DestroyPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyPlanOutcome>>();
    DestroyPlanAsync(
    request,
    [prom](
        const TeoClient*,
        const DestroyPlanRequest&,
        DestroyPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::DisableOriginACLOutcome TeoClient::DisableOriginACL(const DisableOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "DisableOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableOriginACLResponse rsp = DisableOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableOriginACLOutcome(rsp);
        else
            return DisableOriginACLOutcome(o.GetError());
    }
    else
    {
        return DisableOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::DisableOriginACLAsync(const DisableOriginACLRequest& request, const DisableOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableOriginACLRequest&;
    using Resp = DisableOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "DisableOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DisableOriginACLOutcomeCallable TeoClient::DisableOriginACLCallable(const DisableOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableOriginACLOutcome>>();
    DisableOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const DisableOriginACLRequest&,
        DisableOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DownloadL4LogsRequest&;
    using Resp = DownloadL4LogsResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadL4Logs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DownloadL4LogsOutcomeCallable TeoClient::DownloadL4LogsCallable(const DownloadL4LogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadL4LogsOutcome>>();
    DownloadL4LogsAsync(
    request,
    [prom](
        const TeoClient*,
        const DownloadL4LogsRequest&,
        DownloadL4LogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DownloadL7LogsRequest&;
    using Resp = DownloadL7LogsResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadL7Logs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::DownloadL7LogsOutcomeCallable TeoClient::DownloadL7LogsCallable(const DownloadL7LogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadL7LogsOutcome>>();
    DownloadL7LogsAsync(
    request,
    [prom](
        const TeoClient*,
        const DownloadL7LogsRequest&,
        DownloadL7LogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::EnableOriginACLOutcome TeoClient::EnableOriginACL(const EnableOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "EnableOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableOriginACLResponse rsp = EnableOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableOriginACLOutcome(rsp);
        else
            return EnableOriginACLOutcome(o.GetError());
    }
    else
    {
        return EnableOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::EnableOriginACLAsync(const EnableOriginACLRequest& request, const EnableOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableOriginACLRequest&;
    using Resp = EnableOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "EnableOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::EnableOriginACLOutcomeCallable TeoClient::EnableOriginACLCallable(const EnableOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableOriginACLOutcome>>();
    EnableOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const EnableOriginACLRequest&,
        EnableOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExportZoneConfigRequest&;
    using Resp = ExportZoneConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ExportZoneConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ExportZoneConfigOutcomeCallable TeoClient::ExportZoneConfigCallable(const ExportZoneConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportZoneConfigOutcome>>();
    ExportZoneConfigAsync(
    request,
    [prom](
        const TeoClient*,
        const ExportZoneConfigRequest&,
        ExportZoneConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const HandleFunctionRuntimeEnvironmentRequest&;
    using Resp = HandleFunctionRuntimeEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "HandleFunctionRuntimeEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::HandleFunctionRuntimeEnvironmentOutcomeCallable TeoClient::HandleFunctionRuntimeEnvironmentCallable(const HandleFunctionRuntimeEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<HandleFunctionRuntimeEnvironmentOutcome>>();
    HandleFunctionRuntimeEnvironmentAsync(
    request,
    [prom](
        const TeoClient*,
        const HandleFunctionRuntimeEnvironmentRequest&,
        HandleFunctionRuntimeEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const IdentifyZoneRequest&;
    using Resp = IdentifyZoneResponse;

    DoRequestAsync<Req, Resp>(
        "IdentifyZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::IdentifyZoneOutcomeCallable TeoClient::IdentifyZoneCallable(const IdentifyZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<IdentifyZoneOutcome>>();
    IdentifyZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const IdentifyZoneRequest&,
        IdentifyZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ImportZoneConfigRequest&;
    using Resp = ImportZoneConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ImportZoneConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ImportZoneConfigOutcomeCallable TeoClient::ImportZoneConfigCallable(const ImportZoneConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportZoneConfigOutcome>>();
    ImportZoneConfigAsync(
    request,
    [prom](
        const TeoClient*,
        const ImportZoneConfigRequest&,
        ImportZoneConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const IncreasePlanQuotaRequest&;
    using Resp = IncreasePlanQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "IncreasePlanQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::IncreasePlanQuotaOutcomeCallable TeoClient::IncreasePlanQuotaCallable(const IncreasePlanQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<IncreasePlanQuotaOutcome>>();
    IncreasePlanQuotaAsync(
    request,
    [prom](
        const TeoClient*,
        const IncreasePlanQuotaRequest&,
        IncreasePlanQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAccelerationDomainRequest&;
    using Resp = ModifyAccelerationDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccelerationDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyAccelerationDomainOutcomeCallable TeoClient::ModifyAccelerationDomainCallable(const ModifyAccelerationDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccelerationDomainOutcome>>();
    ModifyAccelerationDomainAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyAccelerationDomainRequest&,
        ModifyAccelerationDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAccelerationDomainStatusesRequest&;
    using Resp = ModifyAccelerationDomainStatusesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccelerationDomainStatuses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyAccelerationDomainStatusesOutcomeCallable TeoClient::ModifyAccelerationDomainStatusesCallable(const ModifyAccelerationDomainStatusesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccelerationDomainStatusesOutcome>>();
    ModifyAccelerationDomainStatusesAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyAccelerationDomainStatusesRequest&,
        ModifyAccelerationDomainStatusesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAliasDomainRequest&;
    using Resp = ModifyAliasDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAliasDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyAliasDomainOutcomeCallable TeoClient::ModifyAliasDomainCallable(const ModifyAliasDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAliasDomainOutcome>>();
    ModifyAliasDomainAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyAliasDomainRequest&,
        ModifyAliasDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAliasDomainStatusRequest&;
    using Resp = ModifyAliasDomainStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAliasDomainStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyAliasDomainStatusOutcomeCallable TeoClient::ModifyAliasDomainStatusCallable(const ModifyAliasDomainStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAliasDomainStatusOutcome>>();
    ModifyAliasDomainStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyAliasDomainStatusRequest&,
        ModifyAliasDomainStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationProxyRequest&;
    using Resp = ModifyApplicationProxyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyOutcomeCallable TeoClient::ModifyApplicationProxyCallable(const ModifyApplicationProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyOutcome>>();
    ModifyApplicationProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRequest&,
        ModifyApplicationProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationProxyRuleRequest&;
    using Resp = ModifyApplicationProxyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyRuleOutcomeCallable TeoClient::ModifyApplicationProxyRuleCallable(const ModifyApplicationProxyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyRuleOutcome>>();
    ModifyApplicationProxyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRuleRequest&,
        ModifyApplicationProxyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationProxyRuleStatusRequest&;
    using Resp = ModifyApplicationProxyRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyRuleStatusOutcomeCallable TeoClient::ModifyApplicationProxyRuleStatusCallable(const ModifyApplicationProxyRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyRuleStatusOutcome>>();
    ModifyApplicationProxyRuleStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyRuleStatusRequest&,
        ModifyApplicationProxyRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyApplicationProxyStatusRequest&;
    using Resp = ModifyApplicationProxyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationProxyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyApplicationProxyStatusOutcomeCallable TeoClient::ModifyApplicationProxyStatusCallable(const ModifyApplicationProxyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationProxyStatusOutcome>>();
    ModifyApplicationProxyStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyApplicationProxyStatusRequest&,
        ModifyApplicationProxyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyContentIdentifierRequest&;
    using Resp = ModifyContentIdentifierResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContentIdentifier", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyContentIdentifierOutcomeCallable TeoClient::ModifyContentIdentifierCallable(const ModifyContentIdentifierRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContentIdentifierOutcome>>();
    ModifyContentIdentifierAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyContentIdentifierRequest&,
        ModifyContentIdentifierOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyCustomErrorPageRequest&;
    using Resp = ModifyCustomErrorPageResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomErrorPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyCustomErrorPageOutcomeCallable TeoClient::ModifyCustomErrorPageCallable(const ModifyCustomErrorPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomErrorPageOutcome>>();
    ModifyCustomErrorPageAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyCustomErrorPageRequest&,
        ModifyCustomErrorPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyDDoSProtectionOutcome TeoClient::ModifyDDoSProtection(const ModifyDDoSProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSProtectionResponse rsp = ModifyDDoSProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSProtectionOutcome(rsp);
        else
            return ModifyDDoSProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSProtectionOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDDoSProtectionAsync(const ModifyDDoSProtectionRequest& request, const ModifyDDoSProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSProtectionRequest&;
    using Resp = ModifyDDoSProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDDoSProtectionOutcomeCallable TeoClient::ModifyDDoSProtectionCallable(const ModifyDDoSProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSProtectionOutcome>>();
    ModifyDDoSProtectionAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDDoSProtectionRequest&,
        ModifyDDoSProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDnsRecordsRequest&;
    using Resp = ModifyDnsRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDnsRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDnsRecordsOutcomeCallable TeoClient::ModifyDnsRecordsCallable(const ModifyDnsRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDnsRecordsOutcome>>();
    ModifyDnsRecordsAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDnsRecordsRequest&,
        ModifyDnsRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDnsRecordsStatusRequest&;
    using Resp = ModifyDnsRecordsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDnsRecordsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyDnsRecordsStatusOutcomeCallable TeoClient::ModifyDnsRecordsStatusCallable(const ModifyDnsRecordsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDnsRecordsStatusOutcome>>();
    ModifyDnsRecordsStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyDnsRecordsStatusRequest&,
        ModifyDnsRecordsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyFunctionRequest&;
    using Resp = ModifyFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyFunctionOutcomeCallable TeoClient::ModifyFunctionCallable(const ModifyFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFunctionOutcome>>();
    ModifyFunctionAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyFunctionRequest&,
        ModifyFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyFunctionRuleRequest&;
    using Resp = ModifyFunctionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFunctionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyFunctionRuleOutcomeCallable TeoClient::ModifyFunctionRuleCallable(const ModifyFunctionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFunctionRuleOutcome>>();
    ModifyFunctionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyFunctionRuleRequest&,
        ModifyFunctionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyFunctionRulePriorityRequest&;
    using Resp = ModifyFunctionRulePriorityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFunctionRulePriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyFunctionRulePriorityOutcomeCallable TeoClient::ModifyFunctionRulePriorityCallable(const ModifyFunctionRulePriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFunctionRulePriorityOutcome>>();
    ModifyFunctionRulePriorityAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyFunctionRulePriorityRequest&,
        ModifyFunctionRulePriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHostsCertificateRequest&;
    using Resp = ModifyHostsCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHostsCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyHostsCertificateOutcomeCallable TeoClient::ModifyHostsCertificateCallable(const ModifyHostsCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHostsCertificateOutcome>>();
    ModifyHostsCertificateAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyHostsCertificateRequest&,
        ModifyHostsCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL4ProxyRequest&;
    using Resp = ModifyL4ProxyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4Proxy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL4ProxyOutcomeCallable TeoClient::ModifyL4ProxyCallable(const ModifyL4ProxyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4ProxyOutcome>>();
    ModifyL4ProxyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL4ProxyRequest&,
        ModifyL4ProxyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL4ProxyRulesRequest&;
    using Resp = ModifyL4ProxyRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4ProxyRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL4ProxyRulesOutcomeCallable TeoClient::ModifyL4ProxyRulesCallable(const ModifyL4ProxyRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4ProxyRulesOutcome>>();
    ModifyL4ProxyRulesAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL4ProxyRulesRequest&,
        ModifyL4ProxyRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL4ProxyRulesStatusRequest&;
    using Resp = ModifyL4ProxyRulesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4ProxyRulesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL4ProxyRulesStatusOutcomeCallable TeoClient::ModifyL4ProxyRulesStatusCallable(const ModifyL4ProxyRulesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4ProxyRulesStatusOutcome>>();
    ModifyL4ProxyRulesStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL4ProxyRulesStatusRequest&,
        ModifyL4ProxyRulesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL4ProxyStatusRequest&;
    using Resp = ModifyL4ProxyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL4ProxyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL4ProxyStatusOutcomeCallable TeoClient::ModifyL4ProxyStatusCallable(const ModifyL4ProxyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL4ProxyStatusOutcome>>();
    ModifyL4ProxyStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL4ProxyStatusRequest&,
        ModifyL4ProxyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL7AccRuleRequest&;
    using Resp = ModifyL7AccRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL7AccRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL7AccRuleOutcomeCallable TeoClient::ModifyL7AccRuleCallable(const ModifyL7AccRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL7AccRuleOutcome>>();
    ModifyL7AccRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL7AccRuleRequest&,
        ModifyL7AccRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL7AccRulePriorityRequest&;
    using Resp = ModifyL7AccRulePriorityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL7AccRulePriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL7AccRulePriorityOutcomeCallable TeoClient::ModifyL7AccRulePriorityCallable(const ModifyL7AccRulePriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL7AccRulePriorityOutcome>>();
    ModifyL7AccRulePriorityAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL7AccRulePriorityRequest&,
        ModifyL7AccRulePriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyL7AccSettingRequest&;
    using Resp = ModifyL7AccSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyL7AccSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyL7AccSettingOutcomeCallable TeoClient::ModifyL7AccSettingCallable(const ModifyL7AccSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyL7AccSettingOutcome>>();
    ModifyL7AccSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyL7AccSettingRequest&,
        ModifyL7AccSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLoadBalancerRequest&;
    using Resp = ModifyLoadBalancerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoadBalancer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyLoadBalancerOutcomeCallable TeoClient::ModifyLoadBalancerCallable(const ModifyLoadBalancerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoadBalancerOutcome>>();
    ModifyLoadBalancerAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyLoadBalancerRequest&,
        ModifyLoadBalancerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyMultiPathGatewayOutcome TeoClient::ModifyMultiPathGateway(const ModifyMultiPathGatewayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMultiPathGateway");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMultiPathGatewayResponse rsp = ModifyMultiPathGatewayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMultiPathGatewayOutcome(rsp);
        else
            return ModifyMultiPathGatewayOutcome(o.GetError());
    }
    else
    {
        return ModifyMultiPathGatewayOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyMultiPathGatewayAsync(const ModifyMultiPathGatewayRequest& request, const ModifyMultiPathGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMultiPathGatewayRequest&;
    using Resp = ModifyMultiPathGatewayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMultiPathGateway", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyMultiPathGatewayOutcomeCallable TeoClient::ModifyMultiPathGatewayCallable(const ModifyMultiPathGatewayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMultiPathGatewayOutcome>>();
    ModifyMultiPathGatewayAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyMultiPathGatewayRequest&,
        ModifyMultiPathGatewayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyMultiPathGatewayLineOutcome TeoClient::ModifyMultiPathGatewayLine(const ModifyMultiPathGatewayLineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMultiPathGatewayLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMultiPathGatewayLineResponse rsp = ModifyMultiPathGatewayLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMultiPathGatewayLineOutcome(rsp);
        else
            return ModifyMultiPathGatewayLineOutcome(o.GetError());
    }
    else
    {
        return ModifyMultiPathGatewayLineOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyMultiPathGatewayLineAsync(const ModifyMultiPathGatewayLineRequest& request, const ModifyMultiPathGatewayLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMultiPathGatewayLineRequest&;
    using Resp = ModifyMultiPathGatewayLineResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMultiPathGatewayLine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyMultiPathGatewayLineOutcomeCallable TeoClient::ModifyMultiPathGatewayLineCallable(const ModifyMultiPathGatewayLineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMultiPathGatewayLineOutcome>>();
    ModifyMultiPathGatewayLineAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyMultiPathGatewayLineRequest&,
        ModifyMultiPathGatewayLineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyMultiPathGatewaySecretKeyOutcome TeoClient::ModifyMultiPathGatewaySecretKey(const ModifyMultiPathGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMultiPathGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMultiPathGatewaySecretKeyResponse rsp = ModifyMultiPathGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMultiPathGatewaySecretKeyOutcome(rsp);
        else
            return ModifyMultiPathGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyMultiPathGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyMultiPathGatewaySecretKeyAsync(const ModifyMultiPathGatewaySecretKeyRequest& request, const ModifyMultiPathGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMultiPathGatewaySecretKeyRequest&;
    using Resp = ModifyMultiPathGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMultiPathGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyMultiPathGatewaySecretKeyOutcomeCallable TeoClient::ModifyMultiPathGatewaySecretKeyCallable(const ModifyMultiPathGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMultiPathGatewaySecretKeyOutcome>>();
    ModifyMultiPathGatewaySecretKeyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyMultiPathGatewaySecretKeyRequest&,
        ModifyMultiPathGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyMultiPathGatewayStatusOutcome TeoClient::ModifyMultiPathGatewayStatus(const ModifyMultiPathGatewayStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMultiPathGatewayStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMultiPathGatewayStatusResponse rsp = ModifyMultiPathGatewayStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMultiPathGatewayStatusOutcome(rsp);
        else
            return ModifyMultiPathGatewayStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyMultiPathGatewayStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyMultiPathGatewayStatusAsync(const ModifyMultiPathGatewayStatusRequest& request, const ModifyMultiPathGatewayStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMultiPathGatewayStatusRequest&;
    using Resp = ModifyMultiPathGatewayStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMultiPathGatewayStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyMultiPathGatewayStatusOutcomeCallable TeoClient::ModifyMultiPathGatewayStatusCallable(const ModifyMultiPathGatewayStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMultiPathGatewayStatusOutcome>>();
    ModifyMultiPathGatewayStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyMultiPathGatewayStatusRequest&,
        ModifyMultiPathGatewayStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyOriginACLOutcome TeoClient::ModifyOriginACL(const ModifyOriginACLRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOriginACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOriginACLResponse rsp = ModifyOriginACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOriginACLOutcome(rsp);
        else
            return ModifyOriginACLOutcome(o.GetError());
    }
    else
    {
        return ModifyOriginACLOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyOriginACLAsync(const ModifyOriginACLRequest& request, const ModifyOriginACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOriginACLRequest&;
    using Resp = ModifyOriginACLResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOriginACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyOriginACLOutcomeCallable TeoClient::ModifyOriginACLCallable(const ModifyOriginACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOriginACLOutcome>>();
    ModifyOriginACLAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyOriginACLRequest&,
        ModifyOriginACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyOriginGroupRequest&;
    using Resp = ModifyOriginGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOriginGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyOriginGroupOutcomeCallable TeoClient::ModifyOriginGroupCallable(const ModifyOriginGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOriginGroupOutcome>>();
    ModifyOriginGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyOriginGroupRequest&,
        ModifyOriginGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPlanRequest&;
    using Resp = ModifyPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyPlanOutcomeCallable TeoClient::ModifyPlanCallable(const ModifyPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPlanOutcome>>();
    ModifyPlanAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyPlanRequest&,
        ModifyPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyPrefetchOriginLimitOutcome TeoClient::ModifyPrefetchOriginLimit(const ModifyPrefetchOriginLimitRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrefetchOriginLimit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrefetchOriginLimitResponse rsp = ModifyPrefetchOriginLimitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrefetchOriginLimitOutcome(rsp);
        else
            return ModifyPrefetchOriginLimitOutcome(o.GetError());
    }
    else
    {
        return ModifyPrefetchOriginLimitOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyPrefetchOriginLimitAsync(const ModifyPrefetchOriginLimitRequest& request, const ModifyPrefetchOriginLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrefetchOriginLimitRequest&;
    using Resp = ModifyPrefetchOriginLimitResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrefetchOriginLimit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyPrefetchOriginLimitOutcomeCallable TeoClient::ModifyPrefetchOriginLimitCallable(const ModifyPrefetchOriginLimitRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrefetchOriginLimitOutcome>>();
    ModifyPrefetchOriginLimitAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyPrefetchOriginLimitRequest&,
        ModifyPrefetchOriginLimitOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRealtimeLogDeliveryTaskRequest&;
    using Resp = ModifyRealtimeLogDeliveryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRealtimeLogDeliveryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyRealtimeLogDeliveryTaskOutcomeCallable TeoClient::ModifyRealtimeLogDeliveryTaskCallable(const ModifyRealtimeLogDeliveryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRealtimeLogDeliveryTaskOutcome>>();
    ModifyRealtimeLogDeliveryTaskAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyRealtimeLogDeliveryTaskRequest&,
        ModifyRealtimeLogDeliveryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRuleRequest&;
    using Resp = ModifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyRuleOutcomeCallable TeoClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleOutcome>>();
    ModifyRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyRuleRequest&,
        ModifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifySecurityAPIResourceOutcome TeoClient::ModifySecurityAPIResource(const ModifySecurityAPIResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityAPIResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityAPIResourceResponse rsp = ModifySecurityAPIResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityAPIResourceOutcome(rsp);
        else
            return ModifySecurityAPIResourceOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityAPIResourceOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityAPIResourceAsync(const ModifySecurityAPIResourceRequest& request, const ModifySecurityAPIResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityAPIResourceRequest&;
    using Resp = ModifySecurityAPIResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityAPIResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityAPIResourceOutcomeCallable TeoClient::ModifySecurityAPIResourceCallable(const ModifySecurityAPIResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityAPIResourceOutcome>>();
    ModifySecurityAPIResourceAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityAPIResourceRequest&,
        ModifySecurityAPIResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifySecurityAPIServiceOutcome TeoClient::ModifySecurityAPIService(const ModifySecurityAPIServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityAPIService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityAPIServiceResponse rsp = ModifySecurityAPIServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityAPIServiceOutcome(rsp);
        else
            return ModifySecurityAPIServiceOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityAPIServiceOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityAPIServiceAsync(const ModifySecurityAPIServiceRequest& request, const ModifySecurityAPIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityAPIServiceRequest&;
    using Resp = ModifySecurityAPIServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityAPIService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityAPIServiceOutcomeCallable TeoClient::ModifySecurityAPIServiceCallable(const ModifySecurityAPIServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityAPIServiceOutcome>>();
    ModifySecurityAPIServiceAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityAPIServiceRequest&,
        ModifySecurityAPIServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifySecurityClientAttesterOutcome TeoClient::ModifySecurityClientAttester(const ModifySecurityClientAttesterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityClientAttester");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityClientAttesterResponse rsp = ModifySecurityClientAttesterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityClientAttesterOutcome(rsp);
        else
            return ModifySecurityClientAttesterOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityClientAttesterOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityClientAttesterAsync(const ModifySecurityClientAttesterRequest& request, const ModifySecurityClientAttesterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityClientAttesterRequest&;
    using Resp = ModifySecurityClientAttesterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityClientAttester", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityClientAttesterOutcomeCallable TeoClient::ModifySecurityClientAttesterCallable(const ModifySecurityClientAttesterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityClientAttesterOutcome>>();
    ModifySecurityClientAttesterAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityClientAttesterRequest&,
        ModifySecurityClientAttesterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySecurityIPGroupRequest&;
    using Resp = ModifySecurityIPGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityIPGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityIPGroupOutcomeCallable TeoClient::ModifySecurityIPGroupCallable(const ModifySecurityIPGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityIPGroupOutcome>>();
    ModifySecurityIPGroupAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityIPGroupRequest&,
        ModifySecurityIPGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifySecurityJSInjectionRuleOutcome TeoClient::ModifySecurityJSInjectionRule(const ModifySecurityJSInjectionRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityJSInjectionRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityJSInjectionRuleResponse rsp = ModifySecurityJSInjectionRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityJSInjectionRuleOutcome(rsp);
        else
            return ModifySecurityJSInjectionRuleOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityJSInjectionRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifySecurityJSInjectionRuleAsync(const ModifySecurityJSInjectionRuleRequest& request, const ModifySecurityJSInjectionRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityJSInjectionRuleRequest&;
    using Resp = ModifySecurityJSInjectionRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityJSInjectionRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityJSInjectionRuleOutcomeCallable TeoClient::ModifySecurityJSInjectionRuleCallable(const ModifySecurityJSInjectionRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityJSInjectionRuleOutcome>>();
    ModifySecurityJSInjectionRuleAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityJSInjectionRuleRequest&,
        ModifySecurityJSInjectionRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySecurityPolicyRequest&;
    using Resp = ModifySecurityPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifySecurityPolicyOutcomeCallable TeoClient::ModifySecurityPolicyCallable(const ModifySecurityPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityPolicyOutcome>>();
    ModifySecurityPolicyAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifySecurityPolicyRequest&,
        ModifySecurityPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyWebSecurityTemplateOutcome TeoClient::ModifyWebSecurityTemplate(const ModifyWebSecurityTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebSecurityTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebSecurityTemplateResponse rsp = ModifyWebSecurityTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebSecurityTemplateOutcome(rsp);
        else
            return ModifyWebSecurityTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyWebSecurityTemplateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyWebSecurityTemplateAsync(const ModifyWebSecurityTemplateRequest& request, const ModifyWebSecurityTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebSecurityTemplateRequest&;
    using Resp = ModifyWebSecurityTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebSecurityTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyWebSecurityTemplateOutcomeCallable TeoClient::ModifyWebSecurityTemplateCallable(const ModifyWebSecurityTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebSecurityTemplateOutcome>>();
    ModifyWebSecurityTemplateAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyWebSecurityTemplateRequest&,
        ModifyWebSecurityTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyZoneRequest&;
    using Resp = ModifyZoneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneOutcomeCallable TeoClient::ModifyZoneCallable(const ModifyZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneOutcome>>();
    ModifyZoneAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneRequest&,
        ModifyZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyZoneSettingRequest&;
    using Resp = ModifyZoneSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneSettingOutcomeCallable TeoClient::ModifyZoneSettingCallable(const ModifyZoneSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneSettingOutcome>>();
    ModifyZoneSettingAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneSettingRequest&,
        ModifyZoneSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyZoneStatusRequest&;
    using Resp = ModifyZoneStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneStatusOutcomeCallable TeoClient::ModifyZoneStatusCallable(const ModifyZoneStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneStatusOutcome>>();
    ModifyZoneStatusAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneStatusRequest&,
        ModifyZoneStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::ModifyZoneWorkModeOutcome TeoClient::ModifyZoneWorkMode(const ModifyZoneWorkModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneWorkMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneWorkModeResponse rsp = ModifyZoneWorkModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneWorkModeOutcome(rsp);
        else
            return ModifyZoneWorkModeOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneWorkModeOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneWorkModeAsync(const ModifyZoneWorkModeRequest& request, const ModifyZoneWorkModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneWorkModeRequest&;
    using Resp = ModifyZoneWorkModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneWorkMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::ModifyZoneWorkModeOutcomeCallable TeoClient::ModifyZoneWorkModeCallable(const ModifyZoneWorkModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneWorkModeOutcome>>();
    ModifyZoneWorkModeAsync(
    request,
    [prom](
        const TeoClient*,
        const ModifyZoneWorkModeRequest&,
        ModifyZoneWorkModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TeoClient::RefreshMultiPathGatewaySecretKeyOutcome TeoClient::RefreshMultiPathGatewaySecretKey(const RefreshMultiPathGatewaySecretKeyRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshMultiPathGatewaySecretKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshMultiPathGatewaySecretKeyResponse rsp = RefreshMultiPathGatewaySecretKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshMultiPathGatewaySecretKeyOutcome(rsp);
        else
            return RefreshMultiPathGatewaySecretKeyOutcome(o.GetError());
    }
    else
    {
        return RefreshMultiPathGatewaySecretKeyOutcome(outcome.GetError());
    }
}

void TeoClient::RefreshMultiPathGatewaySecretKeyAsync(const RefreshMultiPathGatewaySecretKeyRequest& request, const RefreshMultiPathGatewaySecretKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshMultiPathGatewaySecretKeyRequest&;
    using Resp = RefreshMultiPathGatewaySecretKeyResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshMultiPathGatewaySecretKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::RefreshMultiPathGatewaySecretKeyOutcomeCallable TeoClient::RefreshMultiPathGatewaySecretKeyCallable(const RefreshMultiPathGatewaySecretKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshMultiPathGatewaySecretKeyOutcome>>();
    RefreshMultiPathGatewaySecretKeyAsync(
    request,
    [prom](
        const TeoClient*,
        const RefreshMultiPathGatewaySecretKeyRequest&,
        RefreshMultiPathGatewaySecretKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RenewPlanRequest&;
    using Resp = RenewPlanResponse;

    DoRequestAsync<Req, Resp>(
        "RenewPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::RenewPlanOutcomeCallable TeoClient::RenewPlanCallable(const RenewPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewPlanOutcome>>();
    RenewPlanAsync(
    request,
    [prom](
        const TeoClient*,
        const RenewPlanRequest&,
        RenewPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpgradePlanRequest&;
    using Resp = UpgradePlanResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::UpgradePlanOutcomeCallable TeoClient::UpgradePlanCallable(const UpgradePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradePlanOutcome>>();
    UpgradePlanAsync(
    request,
    [prom](
        const TeoClient*,
        const UpgradePlanRequest&,
        UpgradePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VerifyOwnershipRequest&;
    using Resp = VerifyOwnershipResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyOwnership", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TeoClient::VerifyOwnershipOutcomeCallable TeoClient::VerifyOwnershipCallable(const VerifyOwnershipRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyOwnershipOutcome>>();
    VerifyOwnershipAsync(
    request,
    [prom](
        const TeoClient*,
        const VerifyOwnershipRequest&,
        VerifyOwnershipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

