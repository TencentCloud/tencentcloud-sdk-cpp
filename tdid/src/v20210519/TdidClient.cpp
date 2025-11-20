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

#include <tencentcloud/tdid/v20210519/TdidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdid::V20210519;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-19";
    const string ENDPOINT = "tdid.tencentcloudapi.com";
}

TdidClient::TdidClient(const Credential &credential, const string &region) :
    TdidClient(credential, region, ClientProfile())
{
}

TdidClient::TdidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdidClient::CreateDisclosedCredentialOutcome TdidClient::CreateDisclosedCredential(const CreateDisclosedCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDisclosedCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDisclosedCredentialResponse rsp = CreateDisclosedCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDisclosedCredentialOutcome(rsp);
        else
            return CreateDisclosedCredentialOutcome(o.GetError());
    }
    else
    {
        return CreateDisclosedCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::CreateDisclosedCredentialAsync(const CreateDisclosedCredentialRequest& request, const CreateDisclosedCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDisclosedCredentialRequest&;
    using Resp = CreateDisclosedCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDisclosedCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateDisclosedCredentialOutcomeCallable TdidClient::CreateDisclosedCredentialCallable(const CreateDisclosedCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDisclosedCredentialOutcome>>();
    CreateDisclosedCredentialAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateDisclosedCredentialRequest&,
        CreateDisclosedCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreatePresentationOutcome TdidClient::CreatePresentation(const CreatePresentationRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePresentation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePresentationResponse rsp = CreatePresentationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePresentationOutcome(rsp);
        else
            return CreatePresentationOutcome(o.GetError());
    }
    else
    {
        return CreatePresentationOutcome(outcome.GetError());
    }
}

void TdidClient::CreatePresentationAsync(const CreatePresentationRequest& request, const CreatePresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePresentationRequest&;
    using Resp = CreatePresentationResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePresentation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreatePresentationOutcomeCallable TdidClient::CreatePresentationCallable(const CreatePresentationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePresentationOutcome>>();
    CreatePresentationAsync(
    request,
    [prom](
        const TdidClient*,
        const CreatePresentationRequest&,
        CreatePresentationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateTDidByHostOutcome TdidClient::CreateTDidByHost(const CreateTDidByHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByHostResponse rsp = CreateTDidByHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByHostOutcome(rsp);
        else
            return CreateTDidByHostOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByHostOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByHostAsync(const CreateTDidByHostRequest& request, const CreateTDidByHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDidByHostRequest&;
    using Resp = CreateTDidByHostResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDidByHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateTDidByHostOutcomeCallable TdidClient::CreateTDidByHostCallable(const CreateTDidByHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDidByHostOutcome>>();
    CreateTDidByHostAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateTDidByHostRequest&,
        CreateTDidByHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::CreateTDidByPubKeyOutcome TdidClient::CreateTDidByPubKey(const CreateTDidByPubKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTDidByPubKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTDidByPubKeyResponse rsp = CreateTDidByPubKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTDidByPubKeyOutcome(rsp);
        else
            return CreateTDidByPubKeyOutcome(o.GetError());
    }
    else
    {
        return CreateTDidByPubKeyOutcome(outcome.GetError());
    }
}

void TdidClient::CreateTDidByPubKeyAsync(const CreateTDidByPubKeyRequest& request, const CreateTDidByPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTDidByPubKeyRequest&;
    using Resp = CreateTDidByPubKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTDidByPubKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::CreateTDidByPubKeyOutcomeCallable TdidClient::CreateTDidByPubKeyCallable(const CreateTDidByPubKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTDidByPubKeyOutcome>>();
    CreateTDidByPubKeyAsync(
    request,
    [prom](
        const TdidClient*,
        const CreateTDidByPubKeyRequest&,
        CreateTDidByPubKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::DeactivateTDidOutcome TdidClient::DeactivateTDid(const DeactivateTDidRequest &request)
{
    auto outcome = MakeRequest(request, "DeactivateTDid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeactivateTDidResponse rsp = DeactivateTDidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeactivateTDidOutcome(rsp);
        else
            return DeactivateTDidOutcome(o.GetError());
    }
    else
    {
        return DeactivateTDidOutcome(outcome.GetError());
    }
}

void TdidClient::DeactivateTDidAsync(const DeactivateTDidRequest& request, const DeactivateTDidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeactivateTDidRequest&;
    using Resp = DeactivateTDidResponse;

    DoRequestAsync<Req, Resp>(
        "DeactivateTDid", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::DeactivateTDidOutcomeCallable TdidClient::DeactivateTDidCallable(const DeactivateTDidRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeactivateTDidOutcome>>();
    DeactivateTDidAsync(
    request,
    [prom](
        const TdidClient*,
        const DeactivateTDidRequest&,
        DeactivateTDidOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetAppSummaryOutcome TdidClient::GetAppSummary(const GetAppSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetAppSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAppSummaryResponse rsp = GetAppSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAppSummaryOutcome(rsp);
        else
            return GetAppSummaryOutcome(o.GetError());
    }
    else
    {
        return GetAppSummaryOutcome(outcome.GetError());
    }
}

void TdidClient::GetAppSummaryAsync(const GetAppSummaryRequest& request, const GetAppSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAppSummaryRequest&;
    using Resp = GetAppSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetAppSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetAppSummaryOutcomeCallable TdidClient::GetAppSummaryCallable(const GetAppSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAppSummaryOutcome>>();
    GetAppSummaryAsync(
    request,
    [prom](
        const TdidClient*,
        const GetAppSummaryRequest&,
        GetAppSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetCredentialStateOutcome TdidClient::GetCredentialState(const GetCredentialStateRequest &request)
{
    auto outcome = MakeRequest(request, "GetCredentialState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCredentialStateResponse rsp = GetCredentialStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCredentialStateOutcome(rsp);
        else
            return GetCredentialStateOutcome(o.GetError());
    }
    else
    {
        return GetCredentialStateOutcome(outcome.GetError());
    }
}

void TdidClient::GetCredentialStateAsync(const GetCredentialStateRequest& request, const GetCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCredentialStateRequest&;
    using Resp = GetCredentialStateResponse;

    DoRequestAsync<Req, Resp>(
        "GetCredentialState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetCredentialStateOutcomeCallable TdidClient::GetCredentialStateCallable(const GetCredentialStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCredentialStateOutcome>>();
    GetCredentialStateAsync(
    request,
    [prom](
        const TdidClient*,
        const GetCredentialStateRequest&,
        GetCredentialStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetOverSummaryOutcome TdidClient::GetOverSummary(const GetOverSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetOverSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetOverSummaryResponse rsp = GetOverSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetOverSummaryOutcome(rsp);
        else
            return GetOverSummaryOutcome(o.GetError());
    }
    else
    {
        return GetOverSummaryOutcome(outcome.GetError());
    }
}

void TdidClient::GetOverSummaryAsync(const GetOverSummaryRequest& request, const GetOverSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetOverSummaryRequest&;
    using Resp = GetOverSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetOverSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetOverSummaryOutcomeCallable TdidClient::GetOverSummaryCallable(const GetOverSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetOverSummaryOutcome>>();
    GetOverSummaryAsync(
    request,
    [prom](
        const TdidClient*,
        const GetOverSummaryRequest&,
        GetOverSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetTDidByObjectIdOutcome TdidClient::GetTDidByObjectId(const GetTDidByObjectIdRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidByObjectId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidByObjectIdResponse rsp = GetTDidByObjectIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidByObjectIdOutcome(rsp);
        else
            return GetTDidByObjectIdOutcome(o.GetError());
    }
    else
    {
        return GetTDidByObjectIdOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidByObjectIdAsync(const GetTDidByObjectIdRequest& request, const GetTDidByObjectIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTDidByObjectIdRequest&;
    using Resp = GetTDidByObjectIdResponse;

    DoRequestAsync<Req, Resp>(
        "GetTDidByObjectId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetTDidByObjectIdOutcomeCallable TdidClient::GetTDidByObjectIdCallable(const GetTDidByObjectIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTDidByObjectIdOutcome>>();
    GetTDidByObjectIdAsync(
    request,
    [prom](
        const TdidClient*,
        const GetTDidByObjectIdRequest&,
        GetTDidByObjectIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetTDidDocumentOutcome TdidClient::GetTDidDocument(const GetTDidDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidDocumentResponse rsp = GetTDidDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidDocumentOutcome(rsp);
        else
            return GetTDidDocumentOutcome(o.GetError());
    }
    else
    {
        return GetTDidDocumentOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidDocumentAsync(const GetTDidDocumentRequest& request, const GetTDidDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTDidDocumentRequest&;
    using Resp = GetTDidDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "GetTDidDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetTDidDocumentOutcomeCallable TdidClient::GetTDidDocumentCallable(const GetTDidDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTDidDocumentOutcome>>();
    GetTDidDocumentAsync(
    request,
    [prom](
        const TdidClient*,
        const GetTDidDocumentRequest&,
        GetTDidDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::GetTDidPubKeyOutcome TdidClient::GetTDidPubKey(const GetTDidPubKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetTDidPubKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTDidPubKeyResponse rsp = GetTDidPubKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTDidPubKeyOutcome(rsp);
        else
            return GetTDidPubKeyOutcome(o.GetError());
    }
    else
    {
        return GetTDidPubKeyOutcome(outcome.GetError());
    }
}

void TdidClient::GetTDidPubKeyAsync(const GetTDidPubKeyRequest& request, const GetTDidPubKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTDidPubKeyRequest&;
    using Resp = GetTDidPubKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GetTDidPubKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::GetTDidPubKeyOutcomeCallable TdidClient::GetTDidPubKeyCallable(const GetTDidPubKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTDidPubKeyOutcome>>();
    GetTDidPubKeyAsync(
    request,
    [prom](
        const TdidClient*,
        const GetTDidPubKeyRequest&,
        GetTDidPubKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::IssueCredentialOutcome TdidClient::IssueCredential(const IssueCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "IssueCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IssueCredentialResponse rsp = IssueCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IssueCredentialOutcome(rsp);
        else
            return IssueCredentialOutcome(o.GetError());
    }
    else
    {
        return IssueCredentialOutcome(outcome.GetError());
    }
}

void TdidClient::IssueCredentialAsync(const IssueCredentialRequest& request, const IssueCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IssueCredentialRequest&;
    using Resp = IssueCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "IssueCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::IssueCredentialOutcomeCallable TdidClient::IssueCredentialCallable(const IssueCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<IssueCredentialOutcome>>();
    IssueCredentialAsync(
    request,
    [prom](
        const TdidClient*,
        const IssueCredentialRequest&,
        IssueCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::QueryAuthorityInfoOutcome TdidClient::QueryAuthorityInfo(const QueryAuthorityInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAuthorityInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAuthorityInfoResponse rsp = QueryAuthorityInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAuthorityInfoOutcome(rsp);
        else
            return QueryAuthorityInfoOutcome(o.GetError());
    }
    else
    {
        return QueryAuthorityInfoOutcome(outcome.GetError());
    }
}

void TdidClient::QueryAuthorityInfoAsync(const QueryAuthorityInfoRequest& request, const QueryAuthorityInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAuthorityInfoRequest&;
    using Resp = QueryAuthorityInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAuthorityInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::QueryAuthorityInfoOutcomeCallable TdidClient::QueryAuthorityInfoCallable(const QueryAuthorityInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAuthorityInfoOutcome>>();
    QueryAuthorityInfoAsync(
    request,
    [prom](
        const TdidClient*,
        const QueryAuthorityInfoRequest&,
        QueryAuthorityInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::QueryCPTOutcome TdidClient::QueryCPT(const QueryCPTRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCPT");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCPTResponse rsp = QueryCPTResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCPTOutcome(rsp);
        else
            return QueryCPTOutcome(o.GetError());
    }
    else
    {
        return QueryCPTOutcome(outcome.GetError());
    }
}

void TdidClient::QueryCPTAsync(const QueryCPTRequest& request, const QueryCPTAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCPTRequest&;
    using Resp = QueryCPTResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCPT", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::QueryCPTOutcomeCallable TdidClient::QueryCPTCallable(const QueryCPTRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCPTOutcome>>();
    QueryCPTAsync(
    request,
    [prom](
        const TdidClient*,
        const QueryCPTRequest&,
        QueryCPTOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::SetTDidAttributeOutcome TdidClient::SetTDidAttribute(const SetTDidAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "SetTDidAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTDidAttributeResponse rsp = SetTDidAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTDidAttributeOutcome(rsp);
        else
            return SetTDidAttributeOutcome(o.GetError());
    }
    else
    {
        return SetTDidAttributeOutcome(outcome.GetError());
    }
}

void TdidClient::SetTDidAttributeAsync(const SetTDidAttributeRequest& request, const SetTDidAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetTDidAttributeRequest&;
    using Resp = SetTDidAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "SetTDidAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::SetTDidAttributeOutcomeCallable TdidClient::SetTDidAttributeCallable(const SetTDidAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetTDidAttributeOutcome>>();
    SetTDidAttributeAsync(
    request,
    [prom](
        const TdidClient*,
        const SetTDidAttributeRequest&,
        SetTDidAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::UpdateCredentialStateOutcome TdidClient::UpdateCredentialState(const UpdateCredentialStateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCredentialState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCredentialStateResponse rsp = UpdateCredentialStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCredentialStateOutcome(rsp);
        else
            return UpdateCredentialStateOutcome(o.GetError());
    }
    else
    {
        return UpdateCredentialStateOutcome(outcome.GetError());
    }
}

void TdidClient::UpdateCredentialStateAsync(const UpdateCredentialStateRequest& request, const UpdateCredentialStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCredentialStateRequest&;
    using Resp = UpdateCredentialStateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCredentialState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::UpdateCredentialStateOutcomeCallable TdidClient::UpdateCredentialStateCallable(const UpdateCredentialStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCredentialStateOutcome>>();
    UpdateCredentialStateAsync(
    request,
    [prom](
        const TdidClient*,
        const UpdateCredentialStateRequest&,
        UpdateCredentialStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::VerifyCredentialsOutcome TdidClient::VerifyCredentials(const VerifyCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyCredentialsResponse rsp = VerifyCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyCredentialsOutcome(rsp);
        else
            return VerifyCredentialsOutcome(o.GetError());
    }
    else
    {
        return VerifyCredentialsOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyCredentialsAsync(const VerifyCredentialsRequest& request, const VerifyCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyCredentialsRequest&;
    using Resp = VerifyCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::VerifyCredentialsOutcomeCallable TdidClient::VerifyCredentialsCallable(const VerifyCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyCredentialsOutcome>>();
    VerifyCredentialsAsync(
    request,
    [prom](
        const TdidClient*,
        const VerifyCredentialsRequest&,
        VerifyCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TdidClient::VerifyPresentationOutcome TdidClient::VerifyPresentation(const VerifyPresentationRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPresentation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPresentationResponse rsp = VerifyPresentationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPresentationOutcome(rsp);
        else
            return VerifyPresentationOutcome(o.GetError());
    }
    else
    {
        return VerifyPresentationOutcome(outcome.GetError());
    }
}

void TdidClient::VerifyPresentationAsync(const VerifyPresentationRequest& request, const VerifyPresentationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyPresentationRequest&;
    using Resp = VerifyPresentationResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyPresentation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TdidClient::VerifyPresentationOutcomeCallable TdidClient::VerifyPresentationCallable(const VerifyPresentationRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyPresentationOutcome>>();
    VerifyPresentationAsync(
    request,
    [prom](
        const TdidClient*,
        const VerifyPresentationRequest&,
        VerifyPresentationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

