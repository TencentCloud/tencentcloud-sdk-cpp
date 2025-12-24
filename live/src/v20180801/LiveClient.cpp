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

#include <tencentcloud/live/v20180801/LiveClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Live::V20180801;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-01";
    const string ENDPOINT = "live.tencentcloudapi.com";
}

LiveClient::LiveClient(const Credential &credential, const string &region) :
    LiveClient(credential, region, ClientProfile())
{
}

LiveClient::LiveClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LiveClient::AddCasterInputInfoOutcome LiveClient::AddCasterInputInfo(const AddCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterInputInfoResponse rsp = AddCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterInputInfoOutcome(rsp);
        else
            return AddCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterInputInfoAsync(const AddCasterInputInfoRequest& request, const AddCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCasterInputInfoRequest&;
    using Resp = AddCasterInputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddCasterInputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddCasterInputInfoOutcomeCallable LiveClient::AddCasterInputInfoCallable(const AddCasterInputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCasterInputInfoOutcome>>();
    AddCasterInputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const AddCasterInputInfoRequest&,
        AddCasterInputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddCasterLayoutInfoOutcome LiveClient::AddCasterLayoutInfo(const AddCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterLayoutInfoResponse rsp = AddCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterLayoutInfoOutcome(rsp);
        else
            return AddCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterLayoutInfoAsync(const AddCasterLayoutInfoRequest& request, const AddCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCasterLayoutInfoRequest&;
    using Resp = AddCasterLayoutInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddCasterLayoutInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddCasterLayoutInfoOutcomeCallable LiveClient::AddCasterLayoutInfoCallable(const AddCasterLayoutInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCasterLayoutInfoOutcome>>();
    AddCasterLayoutInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const AddCasterLayoutInfoRequest&,
        AddCasterLayoutInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddCasterMarkPicInfoOutcome LiveClient::AddCasterMarkPicInfo(const AddCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterMarkPicInfoResponse rsp = AddCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterMarkPicInfoOutcome(rsp);
        else
            return AddCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterMarkPicInfoAsync(const AddCasterMarkPicInfoRequest& request, const AddCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCasterMarkPicInfoRequest&;
    using Resp = AddCasterMarkPicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddCasterMarkPicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddCasterMarkPicInfoOutcomeCallable LiveClient::AddCasterMarkPicInfoCallable(const AddCasterMarkPicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCasterMarkPicInfoOutcome>>();
    AddCasterMarkPicInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const AddCasterMarkPicInfoRequest&,
        AddCasterMarkPicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddCasterMarkWordInfoOutcome LiveClient::AddCasterMarkWordInfo(const AddCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterMarkWordInfoResponse rsp = AddCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterMarkWordInfoOutcome(rsp);
        else
            return AddCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterMarkWordInfoAsync(const AddCasterMarkWordInfoRequest& request, const AddCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCasterMarkWordInfoRequest&;
    using Resp = AddCasterMarkWordInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddCasterMarkWordInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddCasterMarkWordInfoOutcomeCallable LiveClient::AddCasterMarkWordInfoCallable(const AddCasterMarkWordInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCasterMarkWordInfoOutcome>>();
    AddCasterMarkWordInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const AddCasterMarkWordInfoRequest&,
        AddCasterMarkWordInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddCasterOutputInfoOutcome LiveClient::AddCasterOutputInfo(const AddCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCasterOutputInfoResponse rsp = AddCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCasterOutputInfoOutcome(rsp);
        else
            return AddCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return AddCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::AddCasterOutputInfoAsync(const AddCasterOutputInfoRequest& request, const AddCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddCasterOutputInfoRequest&;
    using Resp = AddCasterOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddCasterOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddCasterOutputInfoOutcomeCallable LiveClient::AddCasterOutputInfoCallable(const AddCasterOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddCasterOutputInfoOutcome>>();
    AddCasterOutputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const AddCasterOutputInfoRequest&,
        AddCasterOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddDelayLiveStreamOutcome LiveClient::AddDelayLiveStream(const AddDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "AddDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDelayLiveStreamResponse rsp = AddDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDelayLiveStreamOutcome(rsp);
        else
            return AddDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return AddDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::AddDelayLiveStreamAsync(const AddDelayLiveStreamRequest& request, const AddDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDelayLiveStreamRequest&;
    using Resp = AddDelayLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "AddDelayLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddDelayLiveStreamOutcomeCallable LiveClient::AddDelayLiveStreamCallable(const AddDelayLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDelayLiveStreamOutcome>>();
    AddDelayLiveStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const AddDelayLiveStreamRequest&,
        AddDelayLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddLiveDomainOutcome LiveClient::AddLiveDomain(const AddLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveDomainResponse rsp = AddLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveDomainOutcome(rsp);
        else
            return AddLiveDomainOutcome(o.GetError());
    }
    else
    {
        return AddLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveDomainAsync(const AddLiveDomainRequest& request, const AddLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddLiveDomainRequest&;
    using Resp = AddLiveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "AddLiveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddLiveDomainOutcomeCallable LiveClient::AddLiveDomainCallable(const AddLiveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddLiveDomainOutcome>>();
    AddLiveDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const AddLiveDomainRequest&,
        AddLiveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AddLiveWatermarkOutcome LiveClient::AddLiveWatermark(const AddLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "AddLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLiveWatermarkResponse rsp = AddLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLiveWatermarkOutcome(rsp);
        else
            return AddLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return AddLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::AddLiveWatermarkAsync(const AddLiveWatermarkRequest& request, const AddLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddLiveWatermarkRequest&;
    using Resp = AddLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "AddLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AddLiveWatermarkOutcomeCallable LiveClient::AddLiveWatermarkCallable(const AddLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddLiveWatermarkOutcome>>();
    AddLiveWatermarkAsync(
    request,
    [prom](
        const LiveClient*,
        const AddLiveWatermarkRequest&,
        AddLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::AuthenticateDomainOwnerOutcome LiveClient::AuthenticateDomainOwner(const AuthenticateDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "AuthenticateDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthenticateDomainOwnerResponse rsp = AuthenticateDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthenticateDomainOwnerOutcome(rsp);
        else
            return AuthenticateDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return AuthenticateDomainOwnerOutcome(outcome.GetError());
    }
}

void LiveClient::AuthenticateDomainOwnerAsync(const AuthenticateDomainOwnerRequest& request, const AuthenticateDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AuthenticateDomainOwnerRequest&;
    using Resp = AuthenticateDomainOwnerResponse;

    DoRequestAsync<Req, Resp>(
        "AuthenticateDomainOwner", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::AuthenticateDomainOwnerOutcomeCallable LiveClient::AuthenticateDomainOwnerCallable(const AuthenticateDomainOwnerRequest &request)
{
    const auto prom = std::make_shared<std::promise<AuthenticateDomainOwnerOutcome>>();
    AuthenticateDomainOwnerAsync(
    request,
    [prom](
        const LiveClient*,
        const AuthenticateDomainOwnerRequest&,
        AuthenticateDomainOwnerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CancelCommonMixStreamOutcome LiveClient::CancelCommonMixStream(const CancelCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CancelCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelCommonMixStreamResponse rsp = CancelCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelCommonMixStreamOutcome(rsp);
        else
            return CancelCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CancelCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CancelCommonMixStreamAsync(const CancelCommonMixStreamRequest& request, const CancelCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelCommonMixStreamRequest&;
    using Resp = CancelCommonMixStreamResponse;

    DoRequestAsync<Req, Resp>(
        "CancelCommonMixStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CancelCommonMixStreamOutcomeCallable LiveClient::CancelCommonMixStreamCallable(const CancelCommonMixStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelCommonMixStreamOutcome>>();
    CancelCommonMixStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const CancelCommonMixStreamRequest&,
        CancelCommonMixStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CopyCasterOutcome LiveClient::CopyCaster(const CopyCasterRequest &request)
{
    auto outcome = MakeRequest(request, "CopyCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyCasterResponse rsp = CopyCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyCasterOutcome(rsp);
        else
            return CopyCasterOutcome(o.GetError());
    }
    else
    {
        return CopyCasterOutcome(outcome.GetError());
    }
}

void LiveClient::CopyCasterAsync(const CopyCasterRequest& request, const CopyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyCasterRequest&;
    using Resp = CopyCasterResponse;

    DoRequestAsync<Req, Resp>(
        "CopyCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CopyCasterOutcomeCallable LiveClient::CopyCasterCallable(const CopyCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyCasterOutcome>>();
    CopyCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const CopyCasterRequest&,
        CopyCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateAuditKeywordsOutcome LiveClient::CreateAuditKeywords(const CreateAuditKeywordsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditKeywords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditKeywordsResponse rsp = CreateAuditKeywordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditKeywordsOutcome(rsp);
        else
            return CreateAuditKeywordsOutcome(o.GetError());
    }
    else
    {
        return CreateAuditKeywordsOutcome(outcome.GetError());
    }
}

void LiveClient::CreateAuditKeywordsAsync(const CreateAuditKeywordsRequest& request, const CreateAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditKeywordsRequest&;
    using Resp = CreateAuditKeywordsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditKeywords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateAuditKeywordsOutcomeCallable LiveClient::CreateAuditKeywordsCallable(const CreateAuditKeywordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditKeywordsOutcome>>();
    CreateAuditKeywordsAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateAuditKeywordsRequest&,
        CreateAuditKeywordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCasterOutcome LiveClient::CreateCaster(const CreateCasterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterResponse rsp = CreateCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterOutcome(rsp);
        else
            return CreateCasterOutcome(o.GetError());
    }
    else
    {
        return CreateCasterOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterAsync(const CreateCasterRequest& request, const CreateCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCasterRequest&;
    using Resp = CreateCasterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCasterOutcomeCallable LiveClient::CreateCasterCallable(const CreateCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCasterOutcome>>();
    CreateCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCasterRequest&,
        CreateCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCasterInputPushUrlOutcome LiveClient::CreateCasterInputPushUrl(const CreateCasterInputPushUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterInputPushUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterInputPushUrlResponse rsp = CreateCasterInputPushUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterInputPushUrlOutcome(rsp);
        else
            return CreateCasterInputPushUrlOutcome(o.GetError());
    }
    else
    {
        return CreateCasterInputPushUrlOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterInputPushUrlAsync(const CreateCasterInputPushUrlRequest& request, const CreateCasterInputPushUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCasterInputPushUrlRequest&;
    using Resp = CreateCasterInputPushUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCasterInputPushUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCasterInputPushUrlOutcomeCallable LiveClient::CreateCasterInputPushUrlCallable(const CreateCasterInputPushUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCasterInputPushUrlOutcome>>();
    CreateCasterInputPushUrlAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCasterInputPushUrlRequest&,
        CreateCasterInputPushUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCasterPgmOutcome LiveClient::CreateCasterPgm(const CreateCasterPgmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPgm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPgmResponse rsp = CreateCasterPgmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPgmOutcome(rsp);
        else
            return CreateCasterPgmOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPgmOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPgmAsync(const CreateCasterPgmRequest& request, const CreateCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCasterPgmRequest&;
    using Resp = CreateCasterPgmResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCasterPgm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCasterPgmOutcomeCallable LiveClient::CreateCasterPgmCallable(const CreateCasterPgmRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCasterPgmOutcome>>();
    CreateCasterPgmAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCasterPgmRequest&,
        CreateCasterPgmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCasterPgmFromPvwOutcome LiveClient::CreateCasterPgmFromPvw(const CreateCasterPgmFromPvwRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPgmFromPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPgmFromPvwResponse rsp = CreateCasterPgmFromPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPgmFromPvwOutcome(rsp);
        else
            return CreateCasterPgmFromPvwOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPgmFromPvwOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPgmFromPvwAsync(const CreateCasterPgmFromPvwRequest& request, const CreateCasterPgmFromPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCasterPgmFromPvwRequest&;
    using Resp = CreateCasterPgmFromPvwResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCasterPgmFromPvw", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCasterPgmFromPvwOutcomeCallable LiveClient::CreateCasterPgmFromPvwCallable(const CreateCasterPgmFromPvwRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCasterPgmFromPvwOutcome>>();
    CreateCasterPgmFromPvwAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCasterPgmFromPvwRequest&,
        CreateCasterPgmFromPvwOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCasterPvwOutcome LiveClient::CreateCasterPvw(const CreateCasterPvwRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCasterPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCasterPvwResponse rsp = CreateCasterPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCasterPvwOutcome(rsp);
        else
            return CreateCasterPvwOutcome(o.GetError());
    }
    else
    {
        return CreateCasterPvwOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCasterPvwAsync(const CreateCasterPvwRequest& request, const CreateCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCasterPvwRequest&;
    using Resp = CreateCasterPvwResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCasterPvw", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCasterPvwOutcomeCallable LiveClient::CreateCasterPvwCallable(const CreateCasterPvwRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCasterPvwOutcome>>();
    CreateCasterPvwAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCasterPvwRequest&,
        CreateCasterPvwOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateCommonMixStreamOutcome LiveClient::CreateCommonMixStream(const CreateCommonMixStreamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommonMixStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommonMixStreamResponse rsp = CreateCommonMixStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommonMixStreamOutcome(rsp);
        else
            return CreateCommonMixStreamOutcome(o.GetError());
    }
    else
    {
        return CreateCommonMixStreamOutcome(outcome.GetError());
    }
}

void LiveClient::CreateCommonMixStreamAsync(const CreateCommonMixStreamRequest& request, const CreateCommonMixStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCommonMixStreamRequest&;
    using Resp = CreateCommonMixStreamResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCommonMixStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateCommonMixStreamOutcomeCallable LiveClient::CreateCommonMixStreamCallable(const CreateCommonMixStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCommonMixStreamOutcome>>();
    CreateCommonMixStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateCommonMixStreamRequest&,
        CreateCommonMixStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveCallbackRuleOutcome LiveClient::CreateLiveCallbackRule(const CreateLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackRuleResponse rsp = CreateLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackRuleOutcome(rsp);
        else
            return CreateLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackRuleAsync(const CreateLiveCallbackRuleRequest& request, const CreateLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveCallbackRuleRequest&;
    using Resp = CreateLiveCallbackRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveCallbackRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveCallbackRuleOutcomeCallable LiveClient::CreateLiveCallbackRuleCallable(const CreateLiveCallbackRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveCallbackRuleOutcome>>();
    CreateLiveCallbackRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveCallbackRuleRequest&,
        CreateLiveCallbackRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveCallbackTemplateOutcome LiveClient::CreateLiveCallbackTemplate(const CreateLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveCallbackTemplateResponse rsp = CreateLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveCallbackTemplateOutcome(rsp);
        else
            return CreateLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveCallbackTemplateAsync(const CreateLiveCallbackTemplateRequest& request, const CreateLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveCallbackTemplateRequest&;
    using Resp = CreateLiveCallbackTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveCallbackTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveCallbackTemplateOutcomeCallable LiveClient::CreateLiveCallbackTemplateCallable(const CreateLiveCallbackTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveCallbackTemplateOutcome>>();
    CreateLiveCallbackTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveCallbackTemplateRequest&,
        CreateLiveCallbackTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLivePadRuleOutcome LiveClient::CreateLivePadRule(const CreateLivePadRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePadRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePadRuleResponse rsp = CreateLivePadRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePadRuleOutcome(rsp);
        else
            return CreateLivePadRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLivePadRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePadRuleAsync(const CreateLivePadRuleRequest& request, const CreateLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLivePadRuleRequest&;
    using Resp = CreateLivePadRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLivePadRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLivePadRuleOutcomeCallable LiveClient::CreateLivePadRuleCallable(const CreateLivePadRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLivePadRuleOutcome>>();
    CreateLivePadRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLivePadRuleRequest&,
        CreateLivePadRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLivePadTemplateOutcome LiveClient::CreateLivePadTemplate(const CreateLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePadTemplateResponse rsp = CreateLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePadTemplateOutcome(rsp);
        else
            return CreateLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePadTemplateAsync(const CreateLivePadTemplateRequest& request, const CreateLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLivePadTemplateRequest&;
    using Resp = CreateLivePadTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLivePadTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLivePadTemplateOutcomeCallable LiveClient::CreateLivePadTemplateCallable(const CreateLivePadTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLivePadTemplateOutcome>>();
    CreateLivePadTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLivePadTemplateRequest&,
        CreateLivePadTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLivePullStreamTaskOutcome LiveClient::CreateLivePullStreamTask(const CreateLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLivePullStreamTaskResponse rsp = CreateLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLivePullStreamTaskOutcome(rsp);
        else
            return CreateLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLivePullStreamTaskAsync(const CreateLivePullStreamTaskRequest& request, const CreateLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLivePullStreamTaskRequest&;
    using Resp = CreateLivePullStreamTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLivePullStreamTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLivePullStreamTaskOutcomeCallable LiveClient::CreateLivePullStreamTaskCallable(const CreateLivePullStreamTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLivePullStreamTaskOutcome>>();
    CreateLivePullStreamTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLivePullStreamTaskRequest&,
        CreateLivePullStreamTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveRecordOutcome LiveClient::CreateLiveRecord(const CreateLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordResponse rsp = CreateLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordOutcome(rsp);
        else
            return CreateLiveRecordOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordAsync(const CreateLiveRecordRequest& request, const CreateLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveRecordRequest&;
    using Resp = CreateLiveRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveRecordOutcomeCallable LiveClient::CreateLiveRecordCallable(const CreateLiveRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveRecordOutcome>>();
    CreateLiveRecordAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveRecordRequest&,
        CreateLiveRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveRecordRuleOutcome LiveClient::CreateLiveRecordRule(const CreateLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordRuleResponse rsp = CreateLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordRuleOutcome(rsp);
        else
            return CreateLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordRuleAsync(const CreateLiveRecordRuleRequest& request, const CreateLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveRecordRuleRequest&;
    using Resp = CreateLiveRecordRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveRecordRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveRecordRuleOutcomeCallable LiveClient::CreateLiveRecordRuleCallable(const CreateLiveRecordRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveRecordRuleOutcome>>();
    CreateLiveRecordRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveRecordRuleRequest&,
        CreateLiveRecordRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveRecordTemplateOutcome LiveClient::CreateLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveRecordTemplateResponse rsp = CreateLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveRecordTemplateOutcome(rsp);
        else
            return CreateLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveRecordTemplateRequest&;
    using Resp = CreateLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveRecordTemplateOutcomeCallable LiveClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveRecordTemplateOutcome>>();
    CreateLiveRecordTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveRecordTemplateRequest&,
        CreateLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveSnapshotRuleOutcome LiveClient::CreateLiveSnapshotRule(const CreateLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotRuleResponse rsp = CreateLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotRuleOutcome(rsp);
        else
            return CreateLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotRuleAsync(const CreateLiveSnapshotRuleRequest& request, const CreateLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveSnapshotRuleRequest&;
    using Resp = CreateLiveSnapshotRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveSnapshotRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveSnapshotRuleOutcomeCallable LiveClient::CreateLiveSnapshotRuleCallable(const CreateLiveSnapshotRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveSnapshotRuleOutcome>>();
    CreateLiveSnapshotRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveSnapshotRuleRequest&,
        CreateLiveSnapshotRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveSnapshotTemplateOutcome LiveClient::CreateLiveSnapshotTemplate(const CreateLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveSnapshotTemplateResponse rsp = CreateLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveSnapshotTemplateOutcome(rsp);
        else
            return CreateLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveSnapshotTemplateAsync(const CreateLiveSnapshotTemplateRequest& request, const CreateLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveSnapshotTemplateRequest&;
    using Resp = CreateLiveSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveSnapshotTemplateOutcomeCallable LiveClient::CreateLiveSnapshotTemplateCallable(const CreateLiveSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveSnapshotTemplateOutcome>>();
    CreateLiveSnapshotTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveSnapshotTemplateRequest&,
        CreateLiveSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveStreamMonitorOutcome LiveClient::CreateLiveStreamMonitor(const CreateLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveStreamMonitorResponse rsp = CreateLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveStreamMonitorOutcome(rsp);
        else
            return CreateLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return CreateLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveStreamMonitorAsync(const CreateLiveStreamMonitorRequest& request, const CreateLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveStreamMonitorRequest&;
    using Resp = CreateLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveStreamMonitorOutcomeCallable LiveClient::CreateLiveStreamMonitorCallable(const CreateLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveStreamMonitorOutcome>>();
    CreateLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveStreamMonitorRequest&,
        CreateLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveTimeShiftRuleOutcome LiveClient::CreateLiveTimeShiftRule(const CreateLiveTimeShiftRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTimeShiftRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTimeShiftRuleResponse rsp = CreateLiveTimeShiftRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTimeShiftRuleOutcome(rsp);
        else
            return CreateLiveTimeShiftRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTimeShiftRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTimeShiftRuleAsync(const CreateLiveTimeShiftRuleRequest& request, const CreateLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveTimeShiftRuleRequest&;
    using Resp = CreateLiveTimeShiftRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveTimeShiftRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveTimeShiftRuleOutcomeCallable LiveClient::CreateLiveTimeShiftRuleCallable(const CreateLiveTimeShiftRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveTimeShiftRuleOutcome>>();
    CreateLiveTimeShiftRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveTimeShiftRuleRequest&,
        CreateLiveTimeShiftRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveTimeShiftTemplateOutcome LiveClient::CreateLiveTimeShiftTemplate(const CreateLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTimeShiftTemplateResponse rsp = CreateLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTimeShiftTemplateOutcome(rsp);
        else
            return CreateLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTimeShiftTemplateAsync(const CreateLiveTimeShiftTemplateRequest& request, const CreateLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveTimeShiftTemplateRequest&;
    using Resp = CreateLiveTimeShiftTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveTimeShiftTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveTimeShiftTemplateOutcomeCallable LiveClient::CreateLiveTimeShiftTemplateCallable(const CreateLiveTimeShiftTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveTimeShiftTemplateOutcome>>();
    CreateLiveTimeShiftTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveTimeShiftTemplateRequest&,
        CreateLiveTimeShiftTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveTranscodeRuleOutcome LiveClient::CreateLiveTranscodeRule(const CreateLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeRuleResponse rsp = CreateLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeRuleOutcome(rsp);
        else
            return CreateLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeRuleAsync(const CreateLiveTranscodeRuleRequest& request, const CreateLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveTranscodeRuleRequest&;
    using Resp = CreateLiveTranscodeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveTranscodeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveTranscodeRuleOutcomeCallable LiveClient::CreateLiveTranscodeRuleCallable(const CreateLiveTranscodeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveTranscodeRuleOutcome>>();
    CreateLiveTranscodeRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveTranscodeRuleRequest&,
        CreateLiveTranscodeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveTranscodeTemplateOutcome LiveClient::CreateLiveTranscodeTemplate(const CreateLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveTranscodeTemplateResponse rsp = CreateLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveTranscodeTemplateOutcome(rsp);
        else
            return CreateLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveTranscodeTemplateAsync(const CreateLiveTranscodeTemplateRequest& request, const CreateLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveTranscodeTemplateRequest&;
    using Resp = CreateLiveTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveTranscodeTemplateOutcomeCallable LiveClient::CreateLiveTranscodeTemplateCallable(const CreateLiveTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveTranscodeTemplateOutcome>>();
    CreateLiveTranscodeTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveTranscodeTemplateRequest&,
        CreateLiveTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateLiveWatermarkRuleOutcome LiveClient::CreateLiveWatermarkRule(const CreateLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLiveWatermarkRuleResponse rsp = CreateLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLiveWatermarkRuleOutcome(rsp);
        else
            return CreateLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::CreateLiveWatermarkRuleAsync(const CreateLiveWatermarkRuleRequest& request, const CreateLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLiveWatermarkRuleRequest&;
    using Resp = CreateLiveWatermarkRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveWatermarkRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateLiveWatermarkRuleOutcomeCallable LiveClient::CreateLiveWatermarkRuleCallable(const CreateLiveWatermarkRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveWatermarkRuleOutcome>>();
    CreateLiveWatermarkRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateLiveWatermarkRuleRequest&,
        CreateLiveWatermarkRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreatePullStreamConfigOutcome LiveClient::CreatePullStreamConfig(const CreatePullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePullStreamConfigResponse rsp = CreatePullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePullStreamConfigOutcome(rsp);
        else
            return CreatePullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::CreatePullStreamConfigAsync(const CreatePullStreamConfigRequest& request, const CreatePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePullStreamConfigRequest&;
    using Resp = CreatePullStreamConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePullStreamConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreatePullStreamConfigOutcomeCallable LiveClient::CreatePullStreamConfigCallable(const CreatePullStreamConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePullStreamConfigOutcome>>();
    CreatePullStreamConfigAsync(
    request,
    [prom](
        const LiveClient*,
        const CreatePullStreamConfigRequest&,
        CreatePullStreamConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateRecordTaskOutcome LiveClient::CreateRecordTask(const CreateRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordTaskResponse rsp = CreateRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordTaskOutcome(rsp);
        else
            return CreateRecordTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateRecordTaskAsync(const CreateRecordTaskRequest& request, const CreateRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRecordTaskRequest&;
    using Resp = CreateRecordTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRecordTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateRecordTaskOutcomeCallable LiveClient::CreateRecordTaskCallable(const CreateRecordTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRecordTaskOutcome>>();
    CreateRecordTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateRecordTaskRequest&,
        CreateRecordTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::CreateScreenshotTaskOutcome LiveClient::CreateScreenshotTask(const CreateScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScreenshotTaskResponse rsp = CreateScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScreenshotTaskOutcome(rsp);
        else
            return CreateScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return CreateScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::CreateScreenshotTaskAsync(const CreateScreenshotTaskRequest& request, const CreateScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScreenshotTaskRequest&;
    using Resp = CreateScreenshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScreenshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::CreateScreenshotTaskOutcomeCallable LiveClient::CreateScreenshotTaskCallable(const CreateScreenshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScreenshotTaskOutcome>>();
    CreateScreenshotTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const CreateScreenshotTaskRequest&,
        CreateScreenshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteAuditKeywordsOutcome LiveClient::DeleteAuditKeywords(const DeleteAuditKeywordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditKeywords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditKeywordsResponse rsp = DeleteAuditKeywordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditKeywordsOutcome(rsp);
        else
            return DeleteAuditKeywordsOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditKeywordsOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteAuditKeywordsAsync(const DeleteAuditKeywordsRequest& request, const DeleteAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditKeywordsRequest&;
    using Resp = DeleteAuditKeywordsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditKeywords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteAuditKeywordsOutcomeCallable LiveClient::DeleteAuditKeywordsCallable(const DeleteAuditKeywordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditKeywordsOutcome>>();
    DeleteAuditKeywordsAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteAuditKeywordsRequest&,
        DeleteAuditKeywordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterOutcome LiveClient::DeleteCaster(const DeleteCasterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterResponse rsp = DeleteCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterOutcome(rsp);
        else
            return DeleteCasterOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterAsync(const DeleteCasterRequest& request, const DeleteCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterRequest&;
    using Resp = DeleteCasterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterOutcomeCallable LiveClient::DeleteCasterCallable(const DeleteCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterOutcome>>();
    DeleteCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterRequest&,
        DeleteCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterInputInfoOutcome LiveClient::DeleteCasterInputInfo(const DeleteCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterInputInfoResponse rsp = DeleteCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterInputInfoOutcome(rsp);
        else
            return DeleteCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterInputInfoAsync(const DeleteCasterInputInfoRequest& request, const DeleteCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterInputInfoRequest&;
    using Resp = DeleteCasterInputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCasterInputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterInputInfoOutcomeCallable LiveClient::DeleteCasterInputInfoCallable(const DeleteCasterInputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterInputInfoOutcome>>();
    DeleteCasterInputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterInputInfoRequest&,
        DeleteCasterInputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterLayoutInfoOutcome LiveClient::DeleteCasterLayoutInfo(const DeleteCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterLayoutInfoResponse rsp = DeleteCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterLayoutInfoOutcome(rsp);
        else
            return DeleteCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterLayoutInfoAsync(const DeleteCasterLayoutInfoRequest& request, const DeleteCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterLayoutInfoRequest&;
    using Resp = DeleteCasterLayoutInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCasterLayoutInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterLayoutInfoOutcomeCallable LiveClient::DeleteCasterLayoutInfoCallable(const DeleteCasterLayoutInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterLayoutInfoOutcome>>();
    DeleteCasterLayoutInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterLayoutInfoRequest&,
        DeleteCasterLayoutInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterMarkPicInfoOutcome LiveClient::DeleteCasterMarkPicInfo(const DeleteCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterMarkPicInfoResponse rsp = DeleteCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterMarkPicInfoOutcome(rsp);
        else
            return DeleteCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterMarkPicInfoAsync(const DeleteCasterMarkPicInfoRequest& request, const DeleteCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterMarkPicInfoRequest&;
    using Resp = DeleteCasterMarkPicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCasterMarkPicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterMarkPicInfoOutcomeCallable LiveClient::DeleteCasterMarkPicInfoCallable(const DeleteCasterMarkPicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterMarkPicInfoOutcome>>();
    DeleteCasterMarkPicInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterMarkPicInfoRequest&,
        DeleteCasterMarkPicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterMarkWordInfoOutcome LiveClient::DeleteCasterMarkWordInfo(const DeleteCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterMarkWordInfoResponse rsp = DeleteCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterMarkWordInfoOutcome(rsp);
        else
            return DeleteCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterMarkWordInfoAsync(const DeleteCasterMarkWordInfoRequest& request, const DeleteCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterMarkWordInfoRequest&;
    using Resp = DeleteCasterMarkWordInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCasterMarkWordInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterMarkWordInfoOutcomeCallable LiveClient::DeleteCasterMarkWordInfoCallable(const DeleteCasterMarkWordInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterMarkWordInfoOutcome>>();
    DeleteCasterMarkWordInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterMarkWordInfoRequest&,
        DeleteCasterMarkWordInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteCasterOutputInfoOutcome LiveClient::DeleteCasterOutputInfo(const DeleteCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCasterOutputInfoResponse rsp = DeleteCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCasterOutputInfoOutcome(rsp);
        else
            return DeleteCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteCasterOutputInfoAsync(const DeleteCasterOutputInfoRequest& request, const DeleteCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCasterOutputInfoRequest&;
    using Resp = DeleteCasterOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCasterOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteCasterOutputInfoOutcomeCallable LiveClient::DeleteCasterOutputInfoCallable(const DeleteCasterOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCasterOutputInfoOutcome>>();
    DeleteCasterOutputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteCasterOutputInfoRequest&,
        DeleteCasterOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveCallbackRuleOutcome LiveClient::DeleteLiveCallbackRule(const DeleteLiveCallbackRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackRuleResponse rsp = DeleteLiveCallbackRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackRuleOutcome(rsp);
        else
            return DeleteLiveCallbackRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackRuleAsync(const DeleteLiveCallbackRuleRequest& request, const DeleteLiveCallbackRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveCallbackRuleRequest&;
    using Resp = DeleteLiveCallbackRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveCallbackRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveCallbackRuleOutcomeCallable LiveClient::DeleteLiveCallbackRuleCallable(const DeleteLiveCallbackRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveCallbackRuleOutcome>>();
    DeleteLiveCallbackRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveCallbackRuleRequest&,
        DeleteLiveCallbackRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveCallbackTemplateOutcome LiveClient::DeleteLiveCallbackTemplate(const DeleteLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveCallbackTemplateResponse rsp = DeleteLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveCallbackTemplateOutcome(rsp);
        else
            return DeleteLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveCallbackTemplateAsync(const DeleteLiveCallbackTemplateRequest& request, const DeleteLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveCallbackTemplateRequest&;
    using Resp = DeleteLiveCallbackTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveCallbackTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveCallbackTemplateOutcomeCallable LiveClient::DeleteLiveCallbackTemplateCallable(const DeleteLiveCallbackTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveCallbackTemplateOutcome>>();
    DeleteLiveCallbackTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveCallbackTemplateRequest&,
        DeleteLiveCallbackTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveDomainOutcome LiveClient::DeleteLiveDomain(const DeleteLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveDomainResponse rsp = DeleteLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveDomainOutcome(rsp);
        else
            return DeleteLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveDomainAsync(const DeleteLiveDomainRequest& request, const DeleteLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveDomainRequest&;
    using Resp = DeleteLiveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveDomainOutcomeCallable LiveClient::DeleteLiveDomainCallable(const DeleteLiveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveDomainOutcome>>();
    DeleteLiveDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveDomainRequest&,
        DeleteLiveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLivePadRuleOutcome LiveClient::DeleteLivePadRule(const DeleteLivePadRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePadRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePadRuleResponse rsp = DeleteLivePadRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePadRuleOutcome(rsp);
        else
            return DeleteLivePadRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePadRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePadRuleAsync(const DeleteLivePadRuleRequest& request, const DeleteLivePadRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLivePadRuleRequest&;
    using Resp = DeleteLivePadRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLivePadRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLivePadRuleOutcomeCallable LiveClient::DeleteLivePadRuleCallable(const DeleteLivePadRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLivePadRuleOutcome>>();
    DeleteLivePadRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLivePadRuleRequest&,
        DeleteLivePadRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLivePadTemplateOutcome LiveClient::DeleteLivePadTemplate(const DeleteLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePadTemplateResponse rsp = DeleteLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePadTemplateOutcome(rsp);
        else
            return DeleteLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePadTemplateAsync(const DeleteLivePadTemplateRequest& request, const DeleteLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLivePadTemplateRequest&;
    using Resp = DeleteLivePadTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLivePadTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLivePadTemplateOutcomeCallable LiveClient::DeleteLivePadTemplateCallable(const DeleteLivePadTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLivePadTemplateOutcome>>();
    DeleteLivePadTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLivePadTemplateRequest&,
        DeleteLivePadTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLivePullStreamTaskOutcome LiveClient::DeleteLivePullStreamTask(const DeleteLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLivePullStreamTaskResponse rsp = DeleteLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLivePullStreamTaskOutcome(rsp);
        else
            return DeleteLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLivePullStreamTaskAsync(const DeleteLivePullStreamTaskRequest& request, const DeleteLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLivePullStreamTaskRequest&;
    using Resp = DeleteLivePullStreamTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLivePullStreamTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLivePullStreamTaskOutcomeCallable LiveClient::DeleteLivePullStreamTaskCallable(const DeleteLivePullStreamTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLivePullStreamTaskOutcome>>();
    DeleteLivePullStreamTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLivePullStreamTaskRequest&,
        DeleteLivePullStreamTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveRecordOutcome LiveClient::DeleteLiveRecord(const DeleteLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordResponse rsp = DeleteLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordOutcome(rsp);
        else
            return DeleteLiveRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordAsync(const DeleteLiveRecordRequest& request, const DeleteLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveRecordRequest&;
    using Resp = DeleteLiveRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveRecordOutcomeCallable LiveClient::DeleteLiveRecordCallable(const DeleteLiveRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveRecordOutcome>>();
    DeleteLiveRecordAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveRecordRequest&,
        DeleteLiveRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveRecordRuleOutcome LiveClient::DeleteLiveRecordRule(const DeleteLiveRecordRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordRuleResponse rsp = DeleteLiveRecordRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordRuleOutcome(rsp);
        else
            return DeleteLiveRecordRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordRuleAsync(const DeleteLiveRecordRuleRequest& request, const DeleteLiveRecordRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveRecordRuleRequest&;
    using Resp = DeleteLiveRecordRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveRecordRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveRecordRuleOutcomeCallable LiveClient::DeleteLiveRecordRuleCallable(const DeleteLiveRecordRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveRecordRuleOutcome>>();
    DeleteLiveRecordRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveRecordRuleRequest&,
        DeleteLiveRecordRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveRecordTemplateOutcome LiveClient::DeleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveRecordTemplateResponse rsp = DeleteLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveRecordTemplateOutcome(rsp);
        else
            return DeleteLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveRecordTemplateRequest&;
    using Resp = DeleteLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveRecordTemplateOutcomeCallable LiveClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveRecordTemplateOutcome>>();
    DeleteLiveRecordTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveRecordTemplateRequest&,
        DeleteLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveSnapshotRuleOutcome LiveClient::DeleteLiveSnapshotRule(const DeleteLiveSnapshotRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotRuleResponse rsp = DeleteLiveSnapshotRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotRuleOutcome(rsp);
        else
            return DeleteLiveSnapshotRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotRuleAsync(const DeleteLiveSnapshotRuleRequest& request, const DeleteLiveSnapshotRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveSnapshotRuleRequest&;
    using Resp = DeleteLiveSnapshotRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveSnapshotRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveSnapshotRuleOutcomeCallable LiveClient::DeleteLiveSnapshotRuleCallable(const DeleteLiveSnapshotRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveSnapshotRuleOutcome>>();
    DeleteLiveSnapshotRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveSnapshotRuleRequest&,
        DeleteLiveSnapshotRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveSnapshotTemplateOutcome LiveClient::DeleteLiveSnapshotTemplate(const DeleteLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveSnapshotTemplateResponse rsp = DeleteLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveSnapshotTemplateOutcome(rsp);
        else
            return DeleteLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveSnapshotTemplateAsync(const DeleteLiveSnapshotTemplateRequest& request, const DeleteLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveSnapshotTemplateRequest&;
    using Resp = DeleteLiveSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveSnapshotTemplateOutcomeCallable LiveClient::DeleteLiveSnapshotTemplateCallable(const DeleteLiveSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveSnapshotTemplateOutcome>>();
    DeleteLiveSnapshotTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveSnapshotTemplateRequest&,
        DeleteLiveSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveStreamMonitorOutcome LiveClient::DeleteLiveStreamMonitor(const DeleteLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveStreamMonitorResponse rsp = DeleteLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveStreamMonitorOutcome(rsp);
        else
            return DeleteLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveStreamMonitorAsync(const DeleteLiveStreamMonitorRequest& request, const DeleteLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveStreamMonitorRequest&;
    using Resp = DeleteLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveStreamMonitorOutcomeCallable LiveClient::DeleteLiveStreamMonitorCallable(const DeleteLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveStreamMonitorOutcome>>();
    DeleteLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveStreamMonitorRequest&,
        DeleteLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveTimeShiftRuleOutcome LiveClient::DeleteLiveTimeShiftRule(const DeleteLiveTimeShiftRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTimeShiftRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTimeShiftRuleResponse rsp = DeleteLiveTimeShiftRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTimeShiftRuleOutcome(rsp);
        else
            return DeleteLiveTimeShiftRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTimeShiftRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTimeShiftRuleAsync(const DeleteLiveTimeShiftRuleRequest& request, const DeleteLiveTimeShiftRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveTimeShiftRuleRequest&;
    using Resp = DeleteLiveTimeShiftRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveTimeShiftRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveTimeShiftRuleOutcomeCallable LiveClient::DeleteLiveTimeShiftRuleCallable(const DeleteLiveTimeShiftRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveTimeShiftRuleOutcome>>();
    DeleteLiveTimeShiftRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveTimeShiftRuleRequest&,
        DeleteLiveTimeShiftRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveTimeShiftTemplateOutcome LiveClient::DeleteLiveTimeShiftTemplate(const DeleteLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTimeShiftTemplateResponse rsp = DeleteLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTimeShiftTemplateOutcome(rsp);
        else
            return DeleteLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTimeShiftTemplateAsync(const DeleteLiveTimeShiftTemplateRequest& request, const DeleteLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveTimeShiftTemplateRequest&;
    using Resp = DeleteLiveTimeShiftTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveTimeShiftTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveTimeShiftTemplateOutcomeCallable LiveClient::DeleteLiveTimeShiftTemplateCallable(const DeleteLiveTimeShiftTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveTimeShiftTemplateOutcome>>();
    DeleteLiveTimeShiftTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveTimeShiftTemplateRequest&,
        DeleteLiveTimeShiftTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveTranscodeRuleOutcome LiveClient::DeleteLiveTranscodeRule(const DeleteLiveTranscodeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeRuleResponse rsp = DeleteLiveTranscodeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeRuleOutcome(rsp);
        else
            return DeleteLiveTranscodeRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeRuleAsync(const DeleteLiveTranscodeRuleRequest& request, const DeleteLiveTranscodeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveTranscodeRuleRequest&;
    using Resp = DeleteLiveTranscodeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveTranscodeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveTranscodeRuleOutcomeCallable LiveClient::DeleteLiveTranscodeRuleCallable(const DeleteLiveTranscodeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveTranscodeRuleOutcome>>();
    DeleteLiveTranscodeRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveTranscodeRuleRequest&,
        DeleteLiveTranscodeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveTranscodeTemplateOutcome LiveClient::DeleteLiveTranscodeTemplate(const DeleteLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveTranscodeTemplateResponse rsp = DeleteLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveTranscodeTemplateOutcome(rsp);
        else
            return DeleteLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveTranscodeTemplateAsync(const DeleteLiveTranscodeTemplateRequest& request, const DeleteLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveTranscodeTemplateRequest&;
    using Resp = DeleteLiveTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveTranscodeTemplateOutcomeCallable LiveClient::DeleteLiveTranscodeTemplateCallable(const DeleteLiveTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveTranscodeTemplateOutcome>>();
    DeleteLiveTranscodeTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveTranscodeTemplateRequest&,
        DeleteLiveTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveWatermarkOutcome LiveClient::DeleteLiveWatermark(const DeleteLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkResponse rsp = DeleteLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkOutcome(rsp);
        else
            return DeleteLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkAsync(const DeleteLiveWatermarkRequest& request, const DeleteLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveWatermarkRequest&;
    using Resp = DeleteLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveWatermarkOutcomeCallable LiveClient::DeleteLiveWatermarkCallable(const DeleteLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveWatermarkOutcome>>();
    DeleteLiveWatermarkAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveWatermarkRequest&,
        DeleteLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteLiveWatermarkRuleOutcome LiveClient::DeleteLiveWatermarkRule(const DeleteLiveWatermarkRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLiveWatermarkRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLiveWatermarkRuleResponse rsp = DeleteLiveWatermarkRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLiveWatermarkRuleOutcome(rsp);
        else
            return DeleteLiveWatermarkRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLiveWatermarkRuleOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteLiveWatermarkRuleAsync(const DeleteLiveWatermarkRuleRequest& request, const DeleteLiveWatermarkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLiveWatermarkRuleRequest&;
    using Resp = DeleteLiveWatermarkRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveWatermarkRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteLiveWatermarkRuleOutcomeCallable LiveClient::DeleteLiveWatermarkRuleCallable(const DeleteLiveWatermarkRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveWatermarkRuleOutcome>>();
    DeleteLiveWatermarkRuleAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteLiveWatermarkRuleRequest&,
        DeleteLiveWatermarkRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeletePullStreamConfigOutcome LiveClient::DeletePullStreamConfig(const DeletePullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePullStreamConfigResponse rsp = DeletePullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePullStreamConfigOutcome(rsp);
        else
            return DeletePullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::DeletePullStreamConfigAsync(const DeletePullStreamConfigRequest& request, const DeletePullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePullStreamConfigRequest&;
    using Resp = DeletePullStreamConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePullStreamConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeletePullStreamConfigOutcomeCallable LiveClient::DeletePullStreamConfigCallable(const DeletePullStreamConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePullStreamConfigOutcome>>();
    DeletePullStreamConfigAsync(
    request,
    [prom](
        const LiveClient*,
        const DeletePullStreamConfigRequest&,
        DeletePullStreamConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteRecordTaskOutcome LiveClient::DeleteRecordTask(const DeleteRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordTaskResponse rsp = DeleteRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordTaskOutcome(rsp);
        else
            return DeleteRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteRecordTaskAsync(const DeleteRecordTaskRequest& request, const DeleteRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRecordTaskRequest&;
    using Resp = DeleteRecordTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRecordTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteRecordTaskOutcomeCallable LiveClient::DeleteRecordTaskCallable(const DeleteRecordTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRecordTaskOutcome>>();
    DeleteRecordTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteRecordTaskRequest&,
        DeleteRecordTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DeleteScreenshotTaskOutcome LiveClient::DeleteScreenshotTask(const DeleteScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScreenshotTaskResponse rsp = DeleteScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScreenshotTaskOutcome(rsp);
        else
            return DeleteScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DeleteScreenshotTaskAsync(const DeleteScreenshotTaskRequest& request, const DeleteScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScreenshotTaskRequest&;
    using Resp = DeleteScreenshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScreenshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DeleteScreenshotTaskOutcomeCallable LiveClient::DeleteScreenshotTaskCallable(const DeleteScreenshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScreenshotTaskOutcome>>();
    DeleteScreenshotTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const DeleteScreenshotTaskRequest&,
        DeleteScreenshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeAllStreamPlayInfoListOutcome LiveClient::DescribeAllStreamPlayInfoList(const DescribeAllStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllStreamPlayInfoListResponse rsp = DescribeAllStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllStreamPlayInfoListOutcome(rsp);
        else
            return DescribeAllStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAllStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeAllStreamPlayInfoListAsync(const DescribeAllStreamPlayInfoListRequest& request, const DescribeAllStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllStreamPlayInfoListRequest&;
    using Resp = DescribeAllStreamPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllStreamPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeAllStreamPlayInfoListOutcomeCallable LiveClient::DescribeAllStreamPlayInfoListCallable(const DescribeAllStreamPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllStreamPlayInfoListOutcome>>();
    DescribeAllStreamPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeAllStreamPlayInfoListRequest&,
        DescribeAllStreamPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeAreaBillBandwidthAndFluxListOutcome LiveClient::DescribeAreaBillBandwidthAndFluxList(const DescribeAreaBillBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAreaBillBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAreaBillBandwidthAndFluxListResponse rsp = DescribeAreaBillBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAreaBillBandwidthAndFluxListOutcome(rsp);
        else
            return DescribeAreaBillBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribeAreaBillBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeAreaBillBandwidthAndFluxListAsync(const DescribeAreaBillBandwidthAndFluxListRequest& request, const DescribeAreaBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAreaBillBandwidthAndFluxListRequest&;
    using Resp = DescribeAreaBillBandwidthAndFluxListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAreaBillBandwidthAndFluxList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeAreaBillBandwidthAndFluxListOutcomeCallable LiveClient::DescribeAreaBillBandwidthAndFluxListCallable(const DescribeAreaBillBandwidthAndFluxListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAreaBillBandwidthAndFluxListOutcome>>();
    DescribeAreaBillBandwidthAndFluxListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeAreaBillBandwidthAndFluxListRequest&,
        DescribeAreaBillBandwidthAndFluxListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeAuditKeywordsOutcome LiveClient::DescribeAuditKeywords(const DescribeAuditKeywordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditKeywords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditKeywordsResponse rsp = DescribeAuditKeywordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditKeywordsOutcome(rsp);
        else
            return DescribeAuditKeywordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditKeywordsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeAuditKeywordsAsync(const DescribeAuditKeywordsRequest& request, const DescribeAuditKeywordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditKeywordsRequest&;
    using Resp = DescribeAuditKeywordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditKeywords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeAuditKeywordsOutcomeCallable LiveClient::DescribeAuditKeywordsCallable(const DescribeAuditKeywordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditKeywordsOutcome>>();
    DescribeAuditKeywordsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeAuditKeywordsRequest&,
        DescribeAuditKeywordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeBackupStreamListOutcome LiveClient::DescribeBackupStreamList(const DescribeBackupStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupStreamListResponse rsp = DescribeBackupStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupStreamListOutcome(rsp);
        else
            return DescribeBackupStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeBackupStreamListAsync(const DescribeBackupStreamListRequest& request, const DescribeBackupStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupStreamListRequest&;
    using Resp = DescribeBackupStreamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupStreamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeBackupStreamListOutcomeCallable LiveClient::DescribeBackupStreamListCallable(const DescribeBackupStreamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupStreamListOutcome>>();
    DescribeBackupStreamListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeBackupStreamListRequest&,
        DescribeBackupStreamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeBillBandwidthAndFluxListOutcome LiveClient::DescribeBillBandwidthAndFluxList(const DescribeBillBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillBandwidthAndFluxListResponse rsp = DescribeBillBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillBandwidthAndFluxListOutcome(rsp);
        else
            return DescribeBillBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribeBillBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeBillBandwidthAndFluxListAsync(const DescribeBillBandwidthAndFluxListRequest& request, const DescribeBillBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBillBandwidthAndFluxListRequest&;
    using Resp = DescribeBillBandwidthAndFluxListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBillBandwidthAndFluxList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeBillBandwidthAndFluxListOutcomeCallable LiveClient::DescribeBillBandwidthAndFluxListCallable(const DescribeBillBandwidthAndFluxListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBillBandwidthAndFluxListOutcome>>();
    DescribeBillBandwidthAndFluxListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeBillBandwidthAndFluxListRequest&,
        DescribeBillBandwidthAndFluxListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCallbackRecordsListOutcome LiveClient::DescribeCallbackRecordsList(const DescribeCallbackRecordsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallbackRecordsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallbackRecordsListResponse rsp = DescribeCallbackRecordsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallbackRecordsListOutcome(rsp);
        else
            return DescribeCallbackRecordsListOutcome(o.GetError());
    }
    else
    {
        return DescribeCallbackRecordsListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCallbackRecordsListAsync(const DescribeCallbackRecordsListRequest& request, const DescribeCallbackRecordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCallbackRecordsListRequest&;
    using Resp = DescribeCallbackRecordsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallbackRecordsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCallbackRecordsListOutcomeCallable LiveClient::DescribeCallbackRecordsListCallable(const DescribeCallbackRecordsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallbackRecordsListOutcome>>();
    DescribeCallbackRecordsListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCallbackRecordsListRequest&,
        DescribeCallbackRecordsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterOutcome LiveClient::DescribeCaster(const DescribeCasterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterResponse rsp = DescribeCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterOutcome(rsp);
        else
            return DescribeCasterOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterAsync(const DescribeCasterRequest& request, const DescribeCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterRequest&;
    using Resp = DescribeCasterResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterOutcomeCallable LiveClient::DescribeCasterCallable(const DescribeCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterOutcome>>();
    DescribeCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterRequest&,
        DescribeCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterDisplayInfoOutcome LiveClient::DescribeCasterDisplayInfo(const DescribeCasterDisplayInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterDisplayInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterDisplayInfoResponse rsp = DescribeCasterDisplayInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterDisplayInfoOutcome(rsp);
        else
            return DescribeCasterDisplayInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterDisplayInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterDisplayInfoAsync(const DescribeCasterDisplayInfoRequest& request, const DescribeCasterDisplayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterDisplayInfoRequest&;
    using Resp = DescribeCasterDisplayInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterDisplayInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterDisplayInfoOutcomeCallable LiveClient::DescribeCasterDisplayInfoCallable(const DescribeCasterDisplayInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterDisplayInfoOutcome>>();
    DescribeCasterDisplayInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterDisplayInfoRequest&,
        DescribeCasterDisplayInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterInputInfosOutcome LiveClient::DescribeCasterInputInfos(const DescribeCasterInputInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterInputInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterInputInfosResponse rsp = DescribeCasterInputInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterInputInfosOutcome(rsp);
        else
            return DescribeCasterInputInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterInputInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterInputInfosAsync(const DescribeCasterInputInfosRequest& request, const DescribeCasterInputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterInputInfosRequest&;
    using Resp = DescribeCasterInputInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterInputInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterInputInfosOutcomeCallable LiveClient::DescribeCasterInputInfosCallable(const DescribeCasterInputInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterInputInfosOutcome>>();
    DescribeCasterInputInfosAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterInputInfosRequest&,
        DescribeCasterInputInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterLayoutInfosOutcome LiveClient::DescribeCasterLayoutInfos(const DescribeCasterLayoutInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterLayoutInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterLayoutInfosResponse rsp = DescribeCasterLayoutInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterLayoutInfosOutcome(rsp);
        else
            return DescribeCasterLayoutInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterLayoutInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterLayoutInfosAsync(const DescribeCasterLayoutInfosRequest& request, const DescribeCasterLayoutInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterLayoutInfosRequest&;
    using Resp = DescribeCasterLayoutInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterLayoutInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterLayoutInfosOutcomeCallable LiveClient::DescribeCasterLayoutInfosCallable(const DescribeCasterLayoutInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterLayoutInfosOutcome>>();
    DescribeCasterLayoutInfosAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterLayoutInfosRequest&,
        DescribeCasterLayoutInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterListOutcome LiveClient::DescribeCasterList(const DescribeCasterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterListResponse rsp = DescribeCasterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterListOutcome(rsp);
        else
            return DescribeCasterListOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterListAsync(const DescribeCasterListRequest& request, const DescribeCasterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterListRequest&;
    using Resp = DescribeCasterListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterListOutcomeCallable LiveClient::DescribeCasterListCallable(const DescribeCasterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterListOutcome>>();
    DescribeCasterListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterListRequest&,
        DescribeCasterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterMarkPicInfosOutcome LiveClient::DescribeCasterMarkPicInfos(const DescribeCasterMarkPicInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterMarkPicInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterMarkPicInfosResponse rsp = DescribeCasterMarkPicInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterMarkPicInfosOutcome(rsp);
        else
            return DescribeCasterMarkPicInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterMarkPicInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterMarkPicInfosAsync(const DescribeCasterMarkPicInfosRequest& request, const DescribeCasterMarkPicInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterMarkPicInfosRequest&;
    using Resp = DescribeCasterMarkPicInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterMarkPicInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterMarkPicInfosOutcomeCallable LiveClient::DescribeCasterMarkPicInfosCallable(const DescribeCasterMarkPicInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterMarkPicInfosOutcome>>();
    DescribeCasterMarkPicInfosAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterMarkPicInfosRequest&,
        DescribeCasterMarkPicInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterMarkWordInfosOutcome LiveClient::DescribeCasterMarkWordInfos(const DescribeCasterMarkWordInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterMarkWordInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterMarkWordInfosResponse rsp = DescribeCasterMarkWordInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterMarkWordInfosOutcome(rsp);
        else
            return DescribeCasterMarkWordInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterMarkWordInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterMarkWordInfosAsync(const DescribeCasterMarkWordInfosRequest& request, const DescribeCasterMarkWordInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterMarkWordInfosRequest&;
    using Resp = DescribeCasterMarkWordInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterMarkWordInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterMarkWordInfosOutcomeCallable LiveClient::DescribeCasterMarkWordInfosCallable(const DescribeCasterMarkWordInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterMarkWordInfosOutcome>>();
    DescribeCasterMarkWordInfosAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterMarkWordInfosRequest&,
        DescribeCasterMarkWordInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterOutputInfosOutcome LiveClient::DescribeCasterOutputInfos(const DescribeCasterOutputInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterOutputInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterOutputInfosResponse rsp = DescribeCasterOutputInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterOutputInfosOutcome(rsp);
        else
            return DescribeCasterOutputInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterOutputInfosOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterOutputInfosAsync(const DescribeCasterOutputInfosRequest& request, const DescribeCasterOutputInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterOutputInfosRequest&;
    using Resp = DescribeCasterOutputInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterOutputInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterOutputInfosOutcomeCallable LiveClient::DescribeCasterOutputInfosCallable(const DescribeCasterOutputInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterOutputInfosOutcome>>();
    DescribeCasterOutputInfosAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterOutputInfosRequest&,
        DescribeCasterOutputInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterPlayUrlOutcome LiveClient::DescribeCasterPlayUrl(const DescribeCasterPlayUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterPlayUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterPlayUrlResponse rsp = DescribeCasterPlayUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterPlayUrlOutcome(rsp);
        else
            return DescribeCasterPlayUrlOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterPlayUrlOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterPlayUrlAsync(const DescribeCasterPlayUrlRequest& request, const DescribeCasterPlayUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterPlayUrlRequest&;
    using Resp = DescribeCasterPlayUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterPlayUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterPlayUrlOutcomeCallable LiveClient::DescribeCasterPlayUrlCallable(const DescribeCasterPlayUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterPlayUrlOutcome>>();
    DescribeCasterPlayUrlAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterPlayUrlRequest&,
        DescribeCasterPlayUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterTransitionTypesOutcome LiveClient::DescribeCasterTransitionTypes(const DescribeCasterTransitionTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterTransitionTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterTransitionTypesResponse rsp = DescribeCasterTransitionTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterTransitionTypesOutcome(rsp);
        else
            return DescribeCasterTransitionTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterTransitionTypesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterTransitionTypesAsync(const DescribeCasterTransitionTypesRequest& request, const DescribeCasterTransitionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterTransitionTypesRequest&;
    using Resp = DescribeCasterTransitionTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterTransitionTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterTransitionTypesOutcomeCallable LiveClient::DescribeCasterTransitionTypesCallable(const DescribeCasterTransitionTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterTransitionTypesOutcome>>();
    DescribeCasterTransitionTypesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterTransitionTypesRequest&,
        DescribeCasterTransitionTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeCasterUserStatusOutcome LiveClient::DescribeCasterUserStatus(const DescribeCasterUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCasterUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCasterUserStatusResponse rsp = DescribeCasterUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCasterUserStatusOutcome(rsp);
        else
            return DescribeCasterUserStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCasterUserStatusOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeCasterUserStatusAsync(const DescribeCasterUserStatusRequest& request, const DescribeCasterUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCasterUserStatusRequest&;
    using Resp = DescribeCasterUserStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCasterUserStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeCasterUserStatusOutcomeCallable LiveClient::DescribeCasterUserStatusCallable(const DescribeCasterUserStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCasterUserStatusOutcome>>();
    DescribeCasterUserStatusAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeCasterUserStatusRequest&,
        DescribeCasterUserStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeConcurrentRecordStreamNumOutcome LiveClient::DescribeConcurrentRecordStreamNum(const DescribeConcurrentRecordStreamNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConcurrentRecordStreamNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConcurrentRecordStreamNumResponse rsp = DescribeConcurrentRecordStreamNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConcurrentRecordStreamNumOutcome(rsp);
        else
            return DescribeConcurrentRecordStreamNumOutcome(o.GetError());
    }
    else
    {
        return DescribeConcurrentRecordStreamNumOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeConcurrentRecordStreamNumAsync(const DescribeConcurrentRecordStreamNumRequest& request, const DescribeConcurrentRecordStreamNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConcurrentRecordStreamNumRequest&;
    using Resp = DescribeConcurrentRecordStreamNumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConcurrentRecordStreamNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeConcurrentRecordStreamNumOutcomeCallable LiveClient::DescribeConcurrentRecordStreamNumCallable(const DescribeConcurrentRecordStreamNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConcurrentRecordStreamNumOutcome>>();
    DescribeConcurrentRecordStreamNumAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeConcurrentRecordStreamNumRequest&,
        DescribeConcurrentRecordStreamNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeDeliverBandwidthListOutcome LiveClient::DescribeDeliverBandwidthList(const DescribeDeliverBandwidthListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliverBandwidthList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliverBandwidthListResponse rsp = DescribeDeliverBandwidthListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliverBandwidthListOutcome(rsp);
        else
            return DescribeDeliverBandwidthListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliverBandwidthListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeDeliverBandwidthListAsync(const DescribeDeliverBandwidthListRequest& request, const DescribeDeliverBandwidthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeliverBandwidthListRequest&;
    using Resp = DescribeDeliverBandwidthListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeliverBandwidthList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeDeliverBandwidthListOutcomeCallable LiveClient::DescribeDeliverBandwidthListCallable(const DescribeDeliverBandwidthListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeliverBandwidthListOutcome>>();
    DescribeDeliverBandwidthListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeDeliverBandwidthListRequest&,
        DescribeDeliverBandwidthListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeDeliverLogDownListOutcome LiveClient::DescribeDeliverLogDownList(const DescribeDeliverLogDownListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliverLogDownList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliverLogDownListResponse rsp = DescribeDeliverLogDownListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliverLogDownListOutcome(rsp);
        else
            return DescribeDeliverLogDownListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliverLogDownListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeDeliverLogDownListAsync(const DescribeDeliverLogDownListRequest& request, const DescribeDeliverLogDownListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeliverLogDownListRequest&;
    using Resp = DescribeDeliverLogDownListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeliverLogDownList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeDeliverLogDownListOutcomeCallable LiveClient::DescribeDeliverLogDownListCallable(const DescribeDeliverLogDownListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeliverLogDownListOutcome>>();
    DescribeDeliverLogDownListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeDeliverLogDownListRequest&,
        DescribeDeliverLogDownListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeGroupProIspPlayInfoListOutcome LiveClient::DescribeGroupProIspPlayInfoList(const DescribeGroupProIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupProIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupProIspPlayInfoListResponse rsp = DescribeGroupProIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupProIspPlayInfoListOutcome(rsp);
        else
            return DescribeGroupProIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupProIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeGroupProIspPlayInfoListAsync(const DescribeGroupProIspPlayInfoListRequest& request, const DescribeGroupProIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupProIspPlayInfoListRequest&;
    using Resp = DescribeGroupProIspPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupProIspPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeGroupProIspPlayInfoListOutcomeCallable LiveClient::DescribeGroupProIspPlayInfoListCallable(const DescribeGroupProIspPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupProIspPlayInfoListOutcome>>();
    DescribeGroupProIspPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeGroupProIspPlayInfoListRequest&,
        DescribeGroupProIspPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeHttpStatusInfoListOutcome LiveClient::DescribeHttpStatusInfoList(const DescribeHttpStatusInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttpStatusInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpStatusInfoListResponse rsp = DescribeHttpStatusInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpStatusInfoListOutcome(rsp);
        else
            return DescribeHttpStatusInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpStatusInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeHttpStatusInfoListAsync(const DescribeHttpStatusInfoListRequest& request, const DescribeHttpStatusInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHttpStatusInfoListRequest&;
    using Resp = DescribeHttpStatusInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHttpStatusInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeHttpStatusInfoListOutcomeCallable LiveClient::DescribeHttpStatusInfoListCallable(const DescribeHttpStatusInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHttpStatusInfoListOutcome>>();
    DescribeHttpStatusInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeHttpStatusInfoListRequest&,
        DescribeHttpStatusInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCallbackRulesOutcome LiveClient::DescribeLiveCallbackRules(const DescribeLiveCallbackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackRulesResponse rsp = DescribeLiveCallbackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackRulesOutcome(rsp);
        else
            return DescribeLiveCallbackRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackRulesAsync(const DescribeLiveCallbackRulesRequest& request, const DescribeLiveCallbackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCallbackRulesRequest&;
    using Resp = DescribeLiveCallbackRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCallbackRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCallbackRulesOutcomeCallable LiveClient::DescribeLiveCallbackRulesCallable(const DescribeLiveCallbackRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCallbackRulesOutcome>>();
    DescribeLiveCallbackRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCallbackRulesRequest&,
        DescribeLiveCallbackRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCallbackTemplateOutcome LiveClient::DescribeLiveCallbackTemplate(const DescribeLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplateResponse rsp = DescribeLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplateOutcome(rsp);
        else
            return DescribeLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplateAsync(const DescribeLiveCallbackTemplateRequest& request, const DescribeLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCallbackTemplateRequest&;
    using Resp = DescribeLiveCallbackTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCallbackTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCallbackTemplateOutcomeCallable LiveClient::DescribeLiveCallbackTemplateCallable(const DescribeLiveCallbackTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCallbackTemplateOutcome>>();
    DescribeLiveCallbackTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCallbackTemplateRequest&,
        DescribeLiveCallbackTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCallbackTemplatesOutcome LiveClient::DescribeLiveCallbackTemplates(const DescribeLiveCallbackTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCallbackTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCallbackTemplatesResponse rsp = DescribeLiveCallbackTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCallbackTemplatesOutcome(rsp);
        else
            return DescribeLiveCallbackTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCallbackTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCallbackTemplatesAsync(const DescribeLiveCallbackTemplatesRequest& request, const DescribeLiveCallbackTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCallbackTemplatesRequest&;
    using Resp = DescribeLiveCallbackTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCallbackTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCallbackTemplatesOutcomeCallable LiveClient::DescribeLiveCallbackTemplatesCallable(const DescribeLiveCallbackTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCallbackTemplatesOutcome>>();
    DescribeLiveCallbackTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCallbackTemplatesRequest&,
        DescribeLiveCallbackTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCertOutcome LiveClient::DescribeLiveCert(const DescribeLiveCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertResponse rsp = DescribeLiveCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertOutcome(rsp);
        else
            return DescribeLiveCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertAsync(const DescribeLiveCertRequest& request, const DescribeLiveCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCertRequest&;
    using Resp = DescribeLiveCertResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCertOutcomeCallable LiveClient::DescribeLiveCertCallable(const DescribeLiveCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCertOutcome>>();
    DescribeLiveCertAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCertRequest&,
        DescribeLiveCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCertsOutcome LiveClient::DescribeLiveCerts(const DescribeLiveCertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCertsResponse rsp = DescribeLiveCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCertsOutcome(rsp);
        else
            return DescribeLiveCertsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCertsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCertsAsync(const DescribeLiveCertsRequest& request, const DescribeLiveCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCertsRequest&;
    using Resp = DescribeLiveCertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCertsOutcomeCallable LiveClient::DescribeLiveCertsCallable(const DescribeLiveCertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCertsOutcome>>();
    DescribeLiveCertsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCertsRequest&,
        DescribeLiveCertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveCloudEffectListOutcome LiveClient::DescribeLiveCloudEffectList(const DescribeLiveCloudEffectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveCloudEffectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveCloudEffectListResponse rsp = DescribeLiveCloudEffectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveCloudEffectListOutcome(rsp);
        else
            return DescribeLiveCloudEffectListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveCloudEffectListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveCloudEffectListAsync(const DescribeLiveCloudEffectListRequest& request, const DescribeLiveCloudEffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveCloudEffectListRequest&;
    using Resp = DescribeLiveCloudEffectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveCloudEffectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveCloudEffectListOutcomeCallable LiveClient::DescribeLiveCloudEffectListCallable(const DescribeLiveCloudEffectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveCloudEffectListOutcome>>();
    DescribeLiveCloudEffectListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveCloudEffectListRequest&,
        DescribeLiveCloudEffectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDelayInfoListOutcome LiveClient::DescribeLiveDelayInfoList(const DescribeLiveDelayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDelayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDelayInfoListResponse rsp = DescribeLiveDelayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDelayInfoListOutcome(rsp);
        else
            return DescribeLiveDelayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDelayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDelayInfoListAsync(const DescribeLiveDelayInfoListRequest& request, const DescribeLiveDelayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDelayInfoListRequest&;
    using Resp = DescribeLiveDelayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDelayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDelayInfoListOutcomeCallable LiveClient::DescribeLiveDelayInfoListCallable(const DescribeLiveDelayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDelayInfoListOutcome>>();
    DescribeLiveDelayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDelayInfoListRequest&,
        DescribeLiveDelayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainOutcome LiveClient::DescribeLiveDomain(const DescribeLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainResponse rsp = DescribeLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainOutcome(rsp);
        else
            return DescribeLiveDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainAsync(const DescribeLiveDomainRequest& request, const DescribeLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainRequest&;
    using Resp = DescribeLiveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainOutcomeCallable LiveClient::DescribeLiveDomainCallable(const DescribeLiveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainOutcome>>();
    DescribeLiveDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainRequest&,
        DescribeLiveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainCertOutcome LiveClient::DescribeLiveDomainCert(const DescribeLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainCertResponse rsp = DescribeLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainCertOutcome(rsp);
        else
            return DescribeLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainCertAsync(const DescribeLiveDomainCertRequest& request, const DescribeLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainCertRequest&;
    using Resp = DescribeLiveDomainCertResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomainCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainCertOutcomeCallable LiveClient::DescribeLiveDomainCertCallable(const DescribeLiveDomainCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainCertOutcome>>();
    DescribeLiveDomainCertAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainCertRequest&,
        DescribeLiveDomainCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainCertBindingsOutcome LiveClient::DescribeLiveDomainCertBindings(const DescribeLiveDomainCertBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainCertBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainCertBindingsResponse rsp = DescribeLiveDomainCertBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainCertBindingsOutcome(rsp);
        else
            return DescribeLiveDomainCertBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainCertBindingsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainCertBindingsAsync(const DescribeLiveDomainCertBindingsRequest& request, const DescribeLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainCertBindingsRequest&;
    using Resp = DescribeLiveDomainCertBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomainCertBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainCertBindingsOutcomeCallable LiveClient::DescribeLiveDomainCertBindingsCallable(const DescribeLiveDomainCertBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainCertBindingsOutcome>>();
    DescribeLiveDomainCertBindingsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainCertBindingsRequest&,
        DescribeLiveDomainCertBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainPlayInfoListOutcome LiveClient::DescribeLiveDomainPlayInfoList(const DescribeLiveDomainPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainPlayInfoListResponse rsp = DescribeLiveDomainPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainPlayInfoListOutcome(rsp);
        else
            return DescribeLiveDomainPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainPlayInfoListAsync(const DescribeLiveDomainPlayInfoListRequest& request, const DescribeLiveDomainPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainPlayInfoListRequest&;
    using Resp = DescribeLiveDomainPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomainPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainPlayInfoListOutcomeCallable LiveClient::DescribeLiveDomainPlayInfoListCallable(const DescribeLiveDomainPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainPlayInfoListOutcome>>();
    DescribeLiveDomainPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainPlayInfoListRequest&,
        DescribeLiveDomainPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainRefererOutcome LiveClient::DescribeLiveDomainReferer(const DescribeLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainRefererResponse rsp = DescribeLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainRefererOutcome(rsp);
        else
            return DescribeLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainRefererAsync(const DescribeLiveDomainRefererRequest& request, const DescribeLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainRefererRequest&;
    using Resp = DescribeLiveDomainRefererResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomainReferer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainRefererOutcomeCallable LiveClient::DescribeLiveDomainRefererCallable(const DescribeLiveDomainRefererRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainRefererOutcome>>();
    DescribeLiveDomainRefererAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainRefererRequest&,
        DescribeLiveDomainRefererOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveDomainsOutcome LiveClient::DescribeLiveDomains(const DescribeLiveDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveDomainsResponse rsp = DescribeLiveDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveDomainsOutcome(rsp);
        else
            return DescribeLiveDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveDomainsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveDomainsAsync(const DescribeLiveDomainsRequest& request, const DescribeLiveDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveDomainsRequest&;
    using Resp = DescribeLiveDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveDomainsOutcomeCallable LiveClient::DescribeLiveDomainsCallable(const DescribeLiveDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveDomainsOutcome>>();
    DescribeLiveDomainsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveDomainsRequest&,
        DescribeLiveDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveEnhanceInfoListOutcome LiveClient::DescribeLiveEnhanceInfoList(const DescribeLiveEnhanceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveEnhanceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveEnhanceInfoListResponse rsp = DescribeLiveEnhanceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveEnhanceInfoListOutcome(rsp);
        else
            return DescribeLiveEnhanceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveEnhanceInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveEnhanceInfoListAsync(const DescribeLiveEnhanceInfoListRequest& request, const DescribeLiveEnhanceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveEnhanceInfoListRequest&;
    using Resp = DescribeLiveEnhanceInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveEnhanceInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveEnhanceInfoListOutcomeCallable LiveClient::DescribeLiveEnhanceInfoListCallable(const DescribeLiveEnhanceInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveEnhanceInfoListOutcome>>();
    DescribeLiveEnhanceInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveEnhanceInfoListRequest&,
        DescribeLiveEnhanceInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePackageInfoOutcome LiveClient::DescribeLivePackageInfo(const DescribeLivePackageInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePackageInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePackageInfoResponse rsp = DescribeLivePackageInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePackageInfoOutcome(rsp);
        else
            return DescribeLivePackageInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePackageInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePackageInfoAsync(const DescribeLivePackageInfoRequest& request, const DescribeLivePackageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePackageInfoRequest&;
    using Resp = DescribeLivePackageInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePackageInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePackageInfoOutcomeCallable LiveClient::DescribeLivePackageInfoCallable(const DescribeLivePackageInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePackageInfoOutcome>>();
    DescribeLivePackageInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePackageInfoRequest&,
        DescribeLivePackageInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePadRulesOutcome LiveClient::DescribeLivePadRules(const DescribeLivePadRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadRulesResponse rsp = DescribeLivePadRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadRulesOutcome(rsp);
        else
            return DescribeLivePadRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadRulesAsync(const DescribeLivePadRulesRequest& request, const DescribeLivePadRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePadRulesRequest&;
    using Resp = DescribeLivePadRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePadRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePadRulesOutcomeCallable LiveClient::DescribeLivePadRulesCallable(const DescribeLivePadRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePadRulesOutcome>>();
    DescribeLivePadRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePadRulesRequest&,
        DescribeLivePadRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePadStreamListOutcome LiveClient::DescribeLivePadStreamList(const DescribeLivePadStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadStreamListResponse rsp = DescribeLivePadStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadStreamListOutcome(rsp);
        else
            return DescribeLivePadStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadStreamListAsync(const DescribeLivePadStreamListRequest& request, const DescribeLivePadStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePadStreamListRequest&;
    using Resp = DescribeLivePadStreamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePadStreamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePadStreamListOutcomeCallable LiveClient::DescribeLivePadStreamListCallable(const DescribeLivePadStreamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePadStreamListOutcome>>();
    DescribeLivePadStreamListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePadStreamListRequest&,
        DescribeLivePadStreamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePadTemplateOutcome LiveClient::DescribeLivePadTemplate(const DescribeLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadTemplateResponse rsp = DescribeLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadTemplateOutcome(rsp);
        else
            return DescribeLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadTemplateAsync(const DescribeLivePadTemplateRequest& request, const DescribeLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePadTemplateRequest&;
    using Resp = DescribeLivePadTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePadTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePadTemplateOutcomeCallable LiveClient::DescribeLivePadTemplateCallable(const DescribeLivePadTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePadTemplateOutcome>>();
    DescribeLivePadTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePadTemplateRequest&,
        DescribeLivePadTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePadTemplatesOutcome LiveClient::DescribeLivePadTemplates(const DescribeLivePadTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePadTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePadTemplatesResponse rsp = DescribeLivePadTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePadTemplatesOutcome(rsp);
        else
            return DescribeLivePadTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePadTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePadTemplatesAsync(const DescribeLivePadTemplatesRequest& request, const DescribeLivePadTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePadTemplatesRequest&;
    using Resp = DescribeLivePadTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePadTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePadTemplatesOutcomeCallable LiveClient::DescribeLivePadTemplatesCallable(const DescribeLivePadTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePadTemplatesOutcome>>();
    DescribeLivePadTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePadTemplatesRequest&,
        DescribeLivePadTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePlayAuthKeyOutcome LiveClient::DescribeLivePlayAuthKey(const DescribeLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePlayAuthKeyResponse rsp = DescribeLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePlayAuthKeyOutcome(rsp);
        else
            return DescribeLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePlayAuthKeyAsync(const DescribeLivePlayAuthKeyRequest& request, const DescribeLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePlayAuthKeyRequest&;
    using Resp = DescribeLivePlayAuthKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePlayAuthKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePlayAuthKeyOutcomeCallable LiveClient::DescribeLivePlayAuthKeyCallable(const DescribeLivePlayAuthKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePlayAuthKeyOutcome>>();
    DescribeLivePlayAuthKeyAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePlayAuthKeyRequest&,
        DescribeLivePlayAuthKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePullStreamTaskStatusOutcome LiveClient::DescribeLivePullStreamTaskStatus(const DescribeLivePullStreamTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePullStreamTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePullStreamTaskStatusResponse rsp = DescribeLivePullStreamTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePullStreamTaskStatusOutcome(rsp);
        else
            return DescribeLivePullStreamTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePullStreamTaskStatusOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePullStreamTaskStatusAsync(const DescribeLivePullStreamTaskStatusRequest& request, const DescribeLivePullStreamTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePullStreamTaskStatusRequest&;
    using Resp = DescribeLivePullStreamTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePullStreamTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePullStreamTaskStatusOutcomeCallable LiveClient::DescribeLivePullStreamTaskStatusCallable(const DescribeLivePullStreamTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePullStreamTaskStatusOutcome>>();
    DescribeLivePullStreamTaskStatusAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePullStreamTaskStatusRequest&,
        DescribeLivePullStreamTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePullStreamTasksOutcome LiveClient::DescribeLivePullStreamTasks(const DescribeLivePullStreamTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePullStreamTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePullStreamTasksResponse rsp = DescribeLivePullStreamTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePullStreamTasksOutcome(rsp);
        else
            return DescribeLivePullStreamTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePullStreamTasksOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePullStreamTasksAsync(const DescribeLivePullStreamTasksRequest& request, const DescribeLivePullStreamTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePullStreamTasksRequest&;
    using Resp = DescribeLivePullStreamTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePullStreamTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePullStreamTasksOutcomeCallable LiveClient::DescribeLivePullStreamTasksCallable(const DescribeLivePullStreamTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePullStreamTasksOutcome>>();
    DescribeLivePullStreamTasksAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePullStreamTasksRequest&,
        DescribeLivePullStreamTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLivePushAuthKeyOutcome LiveClient::DescribeLivePushAuthKey(const DescribeLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLivePushAuthKeyResponse rsp = DescribeLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLivePushAuthKeyOutcome(rsp);
        else
            return DescribeLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLivePushAuthKeyAsync(const DescribeLivePushAuthKeyRequest& request, const DescribeLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLivePushAuthKeyRequest&;
    using Resp = DescribeLivePushAuthKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLivePushAuthKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLivePushAuthKeyOutcomeCallable LiveClient::DescribeLivePushAuthKeyCallable(const DescribeLivePushAuthKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLivePushAuthKeyOutcome>>();
    DescribeLivePushAuthKeyAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLivePushAuthKeyRequest&,
        DescribeLivePushAuthKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveRecordRulesOutcome LiveClient::DescribeLiveRecordRules(const DescribeLiveRecordRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordRulesResponse rsp = DescribeLiveRecordRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordRulesOutcome(rsp);
        else
            return DescribeLiveRecordRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordRulesAsync(const DescribeLiveRecordRulesRequest& request, const DescribeLiveRecordRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveRecordRulesRequest&;
    using Resp = DescribeLiveRecordRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveRecordRulesOutcomeCallable LiveClient::DescribeLiveRecordRulesCallable(const DescribeLiveRecordRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordRulesOutcome>>();
    DescribeLiveRecordRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveRecordRulesRequest&,
        DescribeLiveRecordRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveRecordTemplateOutcome LiveClient::DescribeLiveRecordTemplate(const DescribeLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplateResponse rsp = DescribeLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplateOutcome(rsp);
        else
            return DescribeLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordTemplateAsync(const DescribeLiveRecordTemplateRequest& request, const DescribeLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveRecordTemplateRequest&;
    using Resp = DescribeLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveRecordTemplateOutcomeCallable LiveClient::DescribeLiveRecordTemplateCallable(const DescribeLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordTemplateOutcome>>();
    DescribeLiveRecordTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveRecordTemplateRequest&,
        DescribeLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveRecordTemplatesOutcome LiveClient::DescribeLiveRecordTemplates(const DescribeLiveRecordTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveRecordTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveRecordTemplatesResponse rsp = DescribeLiveRecordTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveRecordTemplatesOutcome(rsp);
        else
            return DescribeLiveRecordTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveRecordTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveRecordTemplatesAsync(const DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveRecordTemplatesRequest&;
    using Resp = DescribeLiveRecordTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveRecordTemplatesOutcomeCallable LiveClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordTemplatesOutcome>>();
    DescribeLiveRecordTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveRecordTemplatesRequest&,
        DescribeLiveRecordTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveSnapshotRulesOutcome LiveClient::DescribeLiveSnapshotRules(const DescribeLiveSnapshotRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotRulesResponse rsp = DescribeLiveSnapshotRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotRulesOutcome(rsp);
        else
            return DescribeLiveSnapshotRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotRulesAsync(const DescribeLiveSnapshotRulesRequest& request, const DescribeLiveSnapshotRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveSnapshotRulesRequest&;
    using Resp = DescribeLiveSnapshotRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveSnapshotRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveSnapshotRulesOutcomeCallable LiveClient::DescribeLiveSnapshotRulesCallable(const DescribeLiveSnapshotRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveSnapshotRulesOutcome>>();
    DescribeLiveSnapshotRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveSnapshotRulesRequest&,
        DescribeLiveSnapshotRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveSnapshotTemplateOutcome LiveClient::DescribeLiveSnapshotTemplate(const DescribeLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplateResponse rsp = DescribeLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplateOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplateAsync(const DescribeLiveSnapshotTemplateRequest& request, const DescribeLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveSnapshotTemplateRequest&;
    using Resp = DescribeLiveSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveSnapshotTemplateOutcomeCallable LiveClient::DescribeLiveSnapshotTemplateCallable(const DescribeLiveSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveSnapshotTemplateOutcome>>();
    DescribeLiveSnapshotTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveSnapshotTemplateRequest&,
        DescribeLiveSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveSnapshotTemplatesOutcome LiveClient::DescribeLiveSnapshotTemplates(const DescribeLiveSnapshotTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveSnapshotTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveSnapshotTemplatesResponse rsp = DescribeLiveSnapshotTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveSnapshotTemplatesOutcome(rsp);
        else
            return DescribeLiveSnapshotTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveSnapshotTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveSnapshotTemplatesAsync(const DescribeLiveSnapshotTemplatesRequest& request, const DescribeLiveSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveSnapshotTemplatesRequest&;
    using Resp = DescribeLiveSnapshotTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveSnapshotTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveSnapshotTemplatesOutcomeCallable LiveClient::DescribeLiveSnapshotTemplatesCallable(const DescribeLiveSnapshotTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveSnapshotTemplatesOutcome>>();
    DescribeLiveSnapshotTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveSnapshotTemplatesRequest&,
        DescribeLiveSnapshotTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamEventListOutcome LiveClient::DescribeLiveStreamEventList(const DescribeLiveStreamEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamEventListResponse rsp = DescribeLiveStreamEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamEventListOutcome(rsp);
        else
            return DescribeLiveStreamEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamEventListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamEventListAsync(const DescribeLiveStreamEventListRequest& request, const DescribeLiveStreamEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamEventListRequest&;
    using Resp = DescribeLiveStreamEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamEventListOutcomeCallable LiveClient::DescribeLiveStreamEventListCallable(const DescribeLiveStreamEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamEventListOutcome>>();
    DescribeLiveStreamEventListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamEventListRequest&,
        DescribeLiveStreamEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamMonitorOutcome LiveClient::DescribeLiveStreamMonitor(const DescribeLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamMonitorResponse rsp = DescribeLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamMonitorOutcome(rsp);
        else
            return DescribeLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamMonitorAsync(const DescribeLiveStreamMonitorRequest& request, const DescribeLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamMonitorRequest&;
    using Resp = DescribeLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamMonitorOutcomeCallable LiveClient::DescribeLiveStreamMonitorCallable(const DescribeLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamMonitorOutcome>>();
    DescribeLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamMonitorRequest&,
        DescribeLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamMonitorListOutcome LiveClient::DescribeLiveStreamMonitorList(const DescribeLiveStreamMonitorListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamMonitorList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamMonitorListResponse rsp = DescribeLiveStreamMonitorListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamMonitorListOutcome(rsp);
        else
            return DescribeLiveStreamMonitorListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamMonitorListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamMonitorListAsync(const DescribeLiveStreamMonitorListRequest& request, const DescribeLiveStreamMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamMonitorListRequest&;
    using Resp = DescribeLiveStreamMonitorListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamMonitorList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamMonitorListOutcomeCallable LiveClient::DescribeLiveStreamMonitorListCallable(const DescribeLiveStreamMonitorListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamMonitorListOutcome>>();
    DescribeLiveStreamMonitorListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamMonitorListRequest&,
        DescribeLiveStreamMonitorListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamOnlineListOutcome LiveClient::DescribeLiveStreamOnlineList(const DescribeLiveStreamOnlineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamOnlineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamOnlineListResponse rsp = DescribeLiveStreamOnlineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamOnlineListOutcome(rsp);
        else
            return DescribeLiveStreamOnlineListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamOnlineListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamOnlineListAsync(const DescribeLiveStreamOnlineListRequest& request, const DescribeLiveStreamOnlineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamOnlineListRequest&;
    using Resp = DescribeLiveStreamOnlineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamOnlineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamOnlineListOutcomeCallable LiveClient::DescribeLiveStreamOnlineListCallable(const DescribeLiveStreamOnlineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamOnlineListOutcome>>();
    DescribeLiveStreamOnlineListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamOnlineListRequest&,
        DescribeLiveStreamOnlineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamPublishedListOutcome LiveClient::DescribeLiveStreamPublishedList(const DescribeLiveStreamPublishedListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPublishedList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPublishedListResponse rsp = DescribeLiveStreamPublishedListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPublishedListOutcome(rsp);
        else
            return DescribeLiveStreamPublishedListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPublishedListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPublishedListAsync(const DescribeLiveStreamPublishedListRequest& request, const DescribeLiveStreamPublishedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamPublishedListRequest&;
    using Resp = DescribeLiveStreamPublishedListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamPublishedList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamPublishedListOutcomeCallable LiveClient::DescribeLiveStreamPublishedListCallable(const DescribeLiveStreamPublishedListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamPublishedListOutcome>>();
    DescribeLiveStreamPublishedListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamPublishedListRequest&,
        DescribeLiveStreamPublishedListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamPushInfoListOutcome LiveClient::DescribeLiveStreamPushInfoList(const DescribeLiveStreamPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamPushInfoListResponse rsp = DescribeLiveStreamPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamPushInfoListOutcome(rsp);
        else
            return DescribeLiveStreamPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamPushInfoListAsync(const DescribeLiveStreamPushInfoListRequest& request, const DescribeLiveStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamPushInfoListRequest&;
    using Resp = DescribeLiveStreamPushInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamPushInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamPushInfoListOutcomeCallable LiveClient::DescribeLiveStreamPushInfoListCallable(const DescribeLiveStreamPushInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamPushInfoListOutcome>>();
    DescribeLiveStreamPushInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamPushInfoListRequest&,
        DescribeLiveStreamPushInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveStreamStateOutcome LiveClient::DescribeLiveStreamState(const DescribeLiveStreamStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveStreamState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveStreamStateResponse rsp = DescribeLiveStreamStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveStreamStateOutcome(rsp);
        else
            return DescribeLiveStreamStateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveStreamStateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveStreamStateAsync(const DescribeLiveStreamStateRequest& request, const DescribeLiveStreamStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveStreamStateRequest&;
    using Resp = DescribeLiveStreamStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveStreamState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveStreamStateOutcomeCallable LiveClient::DescribeLiveStreamStateCallable(const DescribeLiveStreamStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveStreamStateOutcome>>();
    DescribeLiveStreamStateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveStreamStateRequest&,
        DescribeLiveStreamStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTimeShiftBillInfoListOutcome LiveClient::DescribeLiveTimeShiftBillInfoList(const DescribeLiveTimeShiftBillInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftBillInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftBillInfoListResponse rsp = DescribeLiveTimeShiftBillInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftBillInfoListOutcome(rsp);
        else
            return DescribeLiveTimeShiftBillInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftBillInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftBillInfoListAsync(const DescribeLiveTimeShiftBillInfoListRequest& request, const DescribeLiveTimeShiftBillInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTimeShiftBillInfoListRequest&;
    using Resp = DescribeLiveTimeShiftBillInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTimeShiftBillInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTimeShiftBillInfoListOutcomeCallable LiveClient::DescribeLiveTimeShiftBillInfoListCallable(const DescribeLiveTimeShiftBillInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTimeShiftBillInfoListOutcome>>();
    DescribeLiveTimeShiftBillInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTimeShiftBillInfoListRequest&,
        DescribeLiveTimeShiftBillInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTimeShiftRulesOutcome LiveClient::DescribeLiveTimeShiftRules(const DescribeLiveTimeShiftRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftRulesResponse rsp = DescribeLiveTimeShiftRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftRulesOutcome(rsp);
        else
            return DescribeLiveTimeShiftRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftRulesAsync(const DescribeLiveTimeShiftRulesRequest& request, const DescribeLiveTimeShiftRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTimeShiftRulesRequest&;
    using Resp = DescribeLiveTimeShiftRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTimeShiftRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTimeShiftRulesOutcomeCallable LiveClient::DescribeLiveTimeShiftRulesCallable(const DescribeLiveTimeShiftRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTimeShiftRulesOutcome>>();
    DescribeLiveTimeShiftRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTimeShiftRulesRequest&,
        DescribeLiveTimeShiftRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTimeShiftTemplatesOutcome LiveClient::DescribeLiveTimeShiftTemplates(const DescribeLiveTimeShiftTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftTemplatesResponse rsp = DescribeLiveTimeShiftTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftTemplatesOutcome(rsp);
        else
            return DescribeLiveTimeShiftTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftTemplatesAsync(const DescribeLiveTimeShiftTemplatesRequest& request, const DescribeLiveTimeShiftTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTimeShiftTemplatesRequest&;
    using Resp = DescribeLiveTimeShiftTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTimeShiftTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTimeShiftTemplatesOutcomeCallable LiveClient::DescribeLiveTimeShiftTemplatesCallable(const DescribeLiveTimeShiftTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTimeShiftTemplatesOutcome>>();
    DescribeLiveTimeShiftTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTimeShiftTemplatesRequest&,
        DescribeLiveTimeShiftTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTimeShiftWriteSizeInfoListOutcome LiveClient::DescribeLiveTimeShiftWriteSizeInfoList(const DescribeLiveTimeShiftWriteSizeInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTimeShiftWriteSizeInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTimeShiftWriteSizeInfoListResponse rsp = DescribeLiveTimeShiftWriteSizeInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTimeShiftWriteSizeInfoListOutcome(rsp);
        else
            return DescribeLiveTimeShiftWriteSizeInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTimeShiftWriteSizeInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTimeShiftWriteSizeInfoListAsync(const DescribeLiveTimeShiftWriteSizeInfoListRequest& request, const DescribeLiveTimeShiftWriteSizeInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTimeShiftWriteSizeInfoListRequest&;
    using Resp = DescribeLiveTimeShiftWriteSizeInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTimeShiftWriteSizeInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTimeShiftWriteSizeInfoListOutcomeCallable LiveClient::DescribeLiveTimeShiftWriteSizeInfoListCallable(const DescribeLiveTimeShiftWriteSizeInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTimeShiftWriteSizeInfoListOutcome>>();
    DescribeLiveTimeShiftWriteSizeInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTimeShiftWriteSizeInfoListRequest&,
        DescribeLiveTimeShiftWriteSizeInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcome LiveClient::DescribeLiveTranscodeDetailInfo(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeDetailInfoResponse rsp = DescribeLiveTranscodeDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeDetailInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeDetailInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeDetailInfoAsync(const DescribeLiveTranscodeDetailInfoRequest& request, const DescribeLiveTranscodeDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTranscodeDetailInfoRequest&;
    using Resp = DescribeLiveTranscodeDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTranscodeDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTranscodeDetailInfoOutcomeCallable LiveClient::DescribeLiveTranscodeDetailInfoCallable(const DescribeLiveTranscodeDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTranscodeDetailInfoOutcome>>();
    DescribeLiveTranscodeDetailInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTranscodeDetailInfoRequest&,
        DescribeLiveTranscodeDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTranscodeRulesOutcome LiveClient::DescribeLiveTranscodeRules(const DescribeLiveTranscodeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeRulesResponse rsp = DescribeLiveTranscodeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeRulesOutcome(rsp);
        else
            return DescribeLiveTranscodeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeRulesAsync(const DescribeLiveTranscodeRulesRequest& request, const DescribeLiveTranscodeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTranscodeRulesRequest&;
    using Resp = DescribeLiveTranscodeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTranscodeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTranscodeRulesOutcomeCallable LiveClient::DescribeLiveTranscodeRulesCallable(const DescribeLiveTranscodeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTranscodeRulesOutcome>>();
    DescribeLiveTranscodeRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTranscodeRulesRequest&,
        DescribeLiveTranscodeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTranscodeTemplateOutcome LiveClient::DescribeLiveTranscodeTemplate(const DescribeLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplateResponse rsp = DescribeLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplateOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplateAsync(const DescribeLiveTranscodeTemplateRequest& request, const DescribeLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTranscodeTemplateRequest&;
    using Resp = DescribeLiveTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTranscodeTemplateOutcomeCallable LiveClient::DescribeLiveTranscodeTemplateCallable(const DescribeLiveTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTranscodeTemplateOutcome>>();
    DescribeLiveTranscodeTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTranscodeTemplateRequest&,
        DescribeLiveTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTranscodeTemplatesOutcome LiveClient::DescribeLiveTranscodeTemplates(const DescribeLiveTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTemplatesResponse rsp = DescribeLiveTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTemplatesOutcome(rsp);
        else
            return DescribeLiveTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTemplatesAsync(const DescribeLiveTranscodeTemplatesRequest& request, const DescribeLiveTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTranscodeTemplatesRequest&;
    using Resp = DescribeLiveTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTranscodeTemplatesOutcomeCallable LiveClient::DescribeLiveTranscodeTemplatesCallable(const DescribeLiveTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTranscodeTemplatesOutcome>>();
    DescribeLiveTranscodeTemplatesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTranscodeTemplatesRequest&,
        DescribeLiveTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcome LiveClient::DescribeLiveTranscodeTotalInfo(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveTranscodeTotalInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveTranscodeTotalInfoResponse rsp = DescribeLiveTranscodeTotalInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveTranscodeTotalInfoOutcome(rsp);
        else
            return DescribeLiveTranscodeTotalInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveTranscodeTotalInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveTranscodeTotalInfoAsync(const DescribeLiveTranscodeTotalInfoRequest& request, const DescribeLiveTranscodeTotalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveTranscodeTotalInfoRequest&;
    using Resp = DescribeLiveTranscodeTotalInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveTranscodeTotalInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveTranscodeTotalInfoOutcomeCallable LiveClient::DescribeLiveTranscodeTotalInfoCallable(const DescribeLiveTranscodeTotalInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveTranscodeTotalInfoOutcome>>();
    DescribeLiveTranscodeTotalInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveTranscodeTotalInfoRequest&,
        DescribeLiveTranscodeTotalInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveWatermarkOutcome LiveClient::DescribeLiveWatermark(const DescribeLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkResponse rsp = DescribeLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkOutcome(rsp);
        else
            return DescribeLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkAsync(const DescribeLiveWatermarkRequest& request, const DescribeLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveWatermarkRequest&;
    using Resp = DescribeLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveWatermarkOutcomeCallable LiveClient::DescribeLiveWatermarkCallable(const DescribeLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveWatermarkOutcome>>();
    DescribeLiveWatermarkAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveWatermarkRequest&,
        DescribeLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveWatermarkRulesOutcome LiveClient::DescribeLiveWatermarkRules(const DescribeLiveWatermarkRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarkRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarkRulesResponse rsp = DescribeLiveWatermarkRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarkRulesOutcome(rsp);
        else
            return DescribeLiveWatermarkRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarkRulesOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarkRulesAsync(const DescribeLiveWatermarkRulesRequest& request, const DescribeLiveWatermarkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveWatermarkRulesRequest&;
    using Resp = DescribeLiveWatermarkRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveWatermarkRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveWatermarkRulesOutcomeCallable LiveClient::DescribeLiveWatermarkRulesCallable(const DescribeLiveWatermarkRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveWatermarkRulesOutcome>>();
    DescribeLiveWatermarkRulesAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveWatermarkRulesRequest&,
        DescribeLiveWatermarkRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveWatermarksOutcome LiveClient::DescribeLiveWatermarks(const DescribeLiveWatermarksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveWatermarks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveWatermarksResponse rsp = DescribeLiveWatermarksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveWatermarksOutcome(rsp);
        else
            return DescribeLiveWatermarksOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveWatermarksOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveWatermarksAsync(const DescribeLiveWatermarksRequest& request, const DescribeLiveWatermarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveWatermarksRequest&;
    using Resp = DescribeLiveWatermarksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveWatermarks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveWatermarksOutcomeCallable LiveClient::DescribeLiveWatermarksCallable(const DescribeLiveWatermarksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveWatermarksOutcome>>();
    DescribeLiveWatermarksAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveWatermarksRequest&,
        DescribeLiveWatermarksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLiveXP2PDetailInfoListOutcome LiveClient::DescribeLiveXP2PDetailInfoList(const DescribeLiveXP2PDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLiveXP2PDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLiveXP2PDetailInfoListResponse rsp = DescribeLiveXP2PDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLiveXP2PDetailInfoListOutcome(rsp);
        else
            return DescribeLiveXP2PDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeLiveXP2PDetailInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLiveXP2PDetailInfoListAsync(const DescribeLiveXP2PDetailInfoListRequest& request, const DescribeLiveXP2PDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLiveXP2PDetailInfoListRequest&;
    using Resp = DescribeLiveXP2PDetailInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveXP2PDetailInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLiveXP2PDetailInfoListOutcomeCallable LiveClient::DescribeLiveXP2PDetailInfoListCallable(const DescribeLiveXP2PDetailInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveXP2PDetailInfoListOutcome>>();
    DescribeLiveXP2PDetailInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLiveXP2PDetailInfoListRequest&,
        DescribeLiveXP2PDetailInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeLogDownloadListOutcome LiveClient::DescribeLogDownloadList(const DescribeLogDownloadListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogDownloadList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogDownloadListResponse rsp = DescribeLogDownloadListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogDownloadListOutcome(rsp);
        else
            return DescribeLogDownloadListOutcome(o.GetError());
    }
    else
    {
        return DescribeLogDownloadListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeLogDownloadListAsync(const DescribeLogDownloadListRequest& request, const DescribeLogDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogDownloadListRequest&;
    using Resp = DescribeLogDownloadListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogDownloadList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeLogDownloadListOutcomeCallable LiveClient::DescribeLogDownloadListCallable(const DescribeLogDownloadListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogDownloadListOutcome>>();
    DescribeLogDownloadListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeLogDownloadListRequest&,
        DescribeLogDownloadListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeMonitorReportOutcome LiveClient::DescribeMonitorReport(const DescribeMonitorReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorReportResponse rsp = DescribeMonitorReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorReportOutcome(rsp);
        else
            return DescribeMonitorReportOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorReportOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeMonitorReportAsync(const DescribeMonitorReportRequest& request, const DescribeMonitorReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMonitorReportRequest&;
    using Resp = DescribeMonitorReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMonitorReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeMonitorReportOutcomeCallable LiveClient::DescribeMonitorReportCallable(const DescribeMonitorReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMonitorReportOutcome>>();
    DescribeMonitorReportAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeMonitorReportRequest&,
        DescribeMonitorReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcome LiveClient::DescribePlayErrorCodeDetailInfoList(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeDetailInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeDetailInfoListResponse rsp = DescribePlayErrorCodeDetailInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeDetailInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeDetailInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeDetailInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeDetailInfoListAsync(const DescribePlayErrorCodeDetailInfoListRequest& request, const DescribePlayErrorCodeDetailInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlayErrorCodeDetailInfoListRequest&;
    using Resp = DescribePlayErrorCodeDetailInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlayErrorCodeDetailInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePlayErrorCodeDetailInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeDetailInfoListCallable(const DescribePlayErrorCodeDetailInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlayErrorCodeDetailInfoListOutcome>>();
    DescribePlayErrorCodeDetailInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePlayErrorCodeDetailInfoListRequest&,
        DescribePlayErrorCodeDetailInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcome LiveClient::DescribePlayErrorCodeSumInfoList(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlayErrorCodeSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePlayErrorCodeSumInfoListResponse rsp = DescribePlayErrorCodeSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePlayErrorCodeSumInfoListOutcome(rsp);
        else
            return DescribePlayErrorCodeSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePlayErrorCodeSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePlayErrorCodeSumInfoListAsync(const DescribePlayErrorCodeSumInfoListRequest& request, const DescribePlayErrorCodeSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePlayErrorCodeSumInfoListRequest&;
    using Resp = DescribePlayErrorCodeSumInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlayErrorCodeSumInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePlayErrorCodeSumInfoListOutcomeCallable LiveClient::DescribePlayErrorCodeSumInfoListCallable(const DescribePlayErrorCodeSumInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePlayErrorCodeSumInfoListOutcome>>();
    DescribePlayErrorCodeSumInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePlayErrorCodeSumInfoListRequest&,
        DescribePlayErrorCodeSumInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeProIspPlaySumInfoListOutcome LiveClient::DescribeProIspPlaySumInfoList(const DescribeProIspPlaySumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProIspPlaySumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProIspPlaySumInfoListResponse rsp = DescribeProIspPlaySumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProIspPlaySumInfoListOutcome(rsp);
        else
            return DescribeProIspPlaySumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeProIspPlaySumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeProIspPlaySumInfoListAsync(const DescribeProIspPlaySumInfoListRequest& request, const DescribeProIspPlaySumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProIspPlaySumInfoListRequest&;
    using Resp = DescribeProIspPlaySumInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProIspPlaySumInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeProIspPlaySumInfoListOutcomeCallable LiveClient::DescribeProIspPlaySumInfoListCallable(const DescribeProIspPlaySumInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProIspPlaySumInfoListOutcome>>();
    DescribeProIspPlaySumInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeProIspPlaySumInfoListRequest&,
        DescribeProIspPlaySumInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeProvinceIspPlayInfoListOutcome LiveClient::DescribeProvinceIspPlayInfoList(const DescribeProvinceIspPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProvinceIspPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProvinceIspPlayInfoListResponse rsp = DescribeProvinceIspPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProvinceIspPlayInfoListOutcome(rsp);
        else
            return DescribeProvinceIspPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeProvinceIspPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeProvinceIspPlayInfoListAsync(const DescribeProvinceIspPlayInfoListRequest& request, const DescribeProvinceIspPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProvinceIspPlayInfoListRequest&;
    using Resp = DescribeProvinceIspPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProvinceIspPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeProvinceIspPlayInfoListOutcomeCallable LiveClient::DescribeProvinceIspPlayInfoListCallable(const DescribeProvinceIspPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProvinceIspPlayInfoListOutcome>>();
    DescribeProvinceIspPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeProvinceIspPlayInfoListRequest&,
        DescribeProvinceIspPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePullStreamConfigsOutcome LiveClient::DescribePullStreamConfigs(const DescribePullStreamConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePullStreamConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePullStreamConfigsResponse rsp = DescribePullStreamConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePullStreamConfigsOutcome(rsp);
        else
            return DescribePullStreamConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribePullStreamConfigsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePullStreamConfigsAsync(const DescribePullStreamConfigsRequest& request, const DescribePullStreamConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePullStreamConfigsRequest&;
    using Resp = DescribePullStreamConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePullStreamConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePullStreamConfigsOutcomeCallable LiveClient::DescribePullStreamConfigsCallable(const DescribePullStreamConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePullStreamConfigsOutcome>>();
    DescribePullStreamConfigsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePullStreamConfigsRequest&,
        DescribePullStreamConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePullTransformPushInfoOutcome LiveClient::DescribePullTransformPushInfo(const DescribePullTransformPushInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePullTransformPushInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePullTransformPushInfoResponse rsp = DescribePullTransformPushInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePullTransformPushInfoOutcome(rsp);
        else
            return DescribePullTransformPushInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePullTransformPushInfoOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePullTransformPushInfoAsync(const DescribePullTransformPushInfoRequest& request, const DescribePullTransformPushInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePullTransformPushInfoRequest&;
    using Resp = DescribePullTransformPushInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePullTransformPushInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePullTransformPushInfoOutcomeCallable LiveClient::DescribePullTransformPushInfoCallable(const DescribePullTransformPushInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePullTransformPushInfoOutcome>>();
    DescribePullTransformPushInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePullTransformPushInfoRequest&,
        DescribePullTransformPushInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePullTransformPushInfoListOutcome LiveClient::DescribePullTransformPushInfoList(const DescribePullTransformPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePullTransformPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePullTransformPushInfoListResponse rsp = DescribePullTransformPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePullTransformPushInfoListOutcome(rsp);
        else
            return DescribePullTransformPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribePullTransformPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePullTransformPushInfoListAsync(const DescribePullTransformPushInfoListRequest& request, const DescribePullTransformPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePullTransformPushInfoListRequest&;
    using Resp = DescribePullTransformPushInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePullTransformPushInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePullTransformPushInfoListOutcomeCallable LiveClient::DescribePullTransformPushInfoListCallable(const DescribePullTransformPushInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePullTransformPushInfoListOutcome>>();
    DescribePullTransformPushInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePullTransformPushInfoListRequest&,
        DescribePullTransformPushInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribePushBandwidthAndFluxListOutcome LiveClient::DescribePushBandwidthAndFluxList(const DescribePushBandwidthAndFluxListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushBandwidthAndFluxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushBandwidthAndFluxListResponse rsp = DescribePushBandwidthAndFluxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushBandwidthAndFluxListOutcome(rsp);
        else
            return DescribePushBandwidthAndFluxListOutcome(o.GetError());
    }
    else
    {
        return DescribePushBandwidthAndFluxListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribePushBandwidthAndFluxListAsync(const DescribePushBandwidthAndFluxListRequest& request, const DescribePushBandwidthAndFluxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePushBandwidthAndFluxListRequest&;
    using Resp = DescribePushBandwidthAndFluxListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePushBandwidthAndFluxList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribePushBandwidthAndFluxListOutcomeCallable LiveClient::DescribePushBandwidthAndFluxListCallable(const DescribePushBandwidthAndFluxListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePushBandwidthAndFluxListOutcome>>();
    DescribePushBandwidthAndFluxListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribePushBandwidthAndFluxListRequest&,
        DescribePushBandwidthAndFluxListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeRecordTaskOutcome LiveClient::DescribeRecordTask(const DescribeRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTaskResponse rsp = DescribeRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTaskOutcome(rsp);
        else
            return DescribeRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeRecordTaskAsync(const DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordTaskRequest&;
    using Resp = DescribeRecordTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeRecordTaskOutcomeCallable LiveClient::DescribeRecordTaskCallable(const DescribeRecordTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordTaskOutcome>>();
    DescribeRecordTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeRecordTaskRequest&,
        DescribeRecordTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeScreenShotSheetNumListOutcome LiveClient::DescribeScreenShotSheetNumList(const DescribeScreenShotSheetNumListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenShotSheetNumList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenShotSheetNumListResponse rsp = DescribeScreenShotSheetNumListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenShotSheetNumListOutcome(rsp);
        else
            return DescribeScreenShotSheetNumListOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenShotSheetNumListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeScreenShotSheetNumListAsync(const DescribeScreenShotSheetNumListRequest& request, const DescribeScreenShotSheetNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenShotSheetNumListRequest&;
    using Resp = DescribeScreenShotSheetNumListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenShotSheetNumList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeScreenShotSheetNumListOutcomeCallable LiveClient::DescribeScreenShotSheetNumListCallable(const DescribeScreenShotSheetNumListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenShotSheetNumListOutcome>>();
    DescribeScreenShotSheetNumListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeScreenShotSheetNumListRequest&,
        DescribeScreenShotSheetNumListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeScreenshotTaskOutcome LiveClient::DescribeScreenshotTask(const DescribeScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenshotTaskResponse rsp = DescribeScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenshotTaskOutcome(rsp);
        else
            return DescribeScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeScreenshotTaskAsync(const DescribeScreenshotTaskRequest& request, const DescribeScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenshotTaskRequest&;
    using Resp = DescribeScreenshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeScreenshotTaskOutcomeCallable LiveClient::DescribeScreenshotTaskCallable(const DescribeScreenshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenshotTaskOutcome>>();
    DescribeScreenshotTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeScreenshotTaskRequest&,
        DescribeScreenshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeStreamDayPlayInfoListOutcome LiveClient::DescribeStreamDayPlayInfoList(const DescribeStreamDayPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamDayPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamDayPlayInfoListResponse rsp = DescribeStreamDayPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamDayPlayInfoListOutcome(rsp);
        else
            return DescribeStreamDayPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamDayPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamDayPlayInfoListAsync(const DescribeStreamDayPlayInfoListRequest& request, const DescribeStreamDayPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamDayPlayInfoListRequest&;
    using Resp = DescribeStreamDayPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamDayPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeStreamDayPlayInfoListOutcomeCallable LiveClient::DescribeStreamDayPlayInfoListCallable(const DescribeStreamDayPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamDayPlayInfoListOutcome>>();
    DescribeStreamDayPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeStreamDayPlayInfoListRequest&,
        DescribeStreamDayPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeStreamPlayInfoListOutcome LiveClient::DescribeStreamPlayInfoList(const DescribeStreamPlayInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPlayInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPlayInfoListResponse rsp = DescribeStreamPlayInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPlayInfoListOutcome(rsp);
        else
            return DescribeStreamPlayInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPlayInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamPlayInfoListAsync(const DescribeStreamPlayInfoListRequest& request, const DescribeStreamPlayInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPlayInfoListRequest&;
    using Resp = DescribeStreamPlayInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPlayInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeStreamPlayInfoListOutcomeCallable LiveClient::DescribeStreamPlayInfoListCallable(const DescribeStreamPlayInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPlayInfoListOutcome>>();
    DescribeStreamPlayInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeStreamPlayInfoListRequest&,
        DescribeStreamPlayInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeStreamPushInfoListOutcome LiveClient::DescribeStreamPushInfoList(const DescribeStreamPushInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamPushInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamPushInfoListResponse rsp = DescribeStreamPushInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamPushInfoListOutcome(rsp);
        else
            return DescribeStreamPushInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamPushInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeStreamPushInfoListAsync(const DescribeStreamPushInfoListRequest& request, const DescribeStreamPushInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamPushInfoListRequest&;
    using Resp = DescribeStreamPushInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamPushInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeStreamPushInfoListOutcomeCallable LiveClient::DescribeStreamPushInfoListCallable(const DescribeStreamPushInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamPushInfoListOutcome>>();
    DescribeStreamPushInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeStreamPushInfoListRequest&,
        DescribeStreamPushInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeTimeShiftRecordDetailOutcome LiveClient::DescribeTimeShiftRecordDetail(const DescribeTimeShiftRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeShiftRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeShiftRecordDetailResponse rsp = DescribeTimeShiftRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeShiftRecordDetailOutcome(rsp);
        else
            return DescribeTimeShiftRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeShiftRecordDetailOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTimeShiftRecordDetailAsync(const DescribeTimeShiftRecordDetailRequest& request, const DescribeTimeShiftRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimeShiftRecordDetailRequest&;
    using Resp = DescribeTimeShiftRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimeShiftRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeTimeShiftRecordDetailOutcomeCallable LiveClient::DescribeTimeShiftRecordDetailCallable(const DescribeTimeShiftRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimeShiftRecordDetailOutcome>>();
    DescribeTimeShiftRecordDetailAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeTimeShiftRecordDetailRequest&,
        DescribeTimeShiftRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeTimeShiftStreamListOutcome LiveClient::DescribeTimeShiftStreamList(const DescribeTimeShiftStreamListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTimeShiftStreamList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTimeShiftStreamListResponse rsp = DescribeTimeShiftStreamListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTimeShiftStreamListOutcome(rsp);
        else
            return DescribeTimeShiftStreamListOutcome(o.GetError());
    }
    else
    {
        return DescribeTimeShiftStreamListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTimeShiftStreamListAsync(const DescribeTimeShiftStreamListRequest& request, const DescribeTimeShiftStreamListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTimeShiftStreamListRequest&;
    using Resp = DescribeTimeShiftStreamListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTimeShiftStreamList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeTimeShiftStreamListOutcomeCallable LiveClient::DescribeTimeShiftStreamListCallable(const DescribeTimeShiftStreamListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTimeShiftStreamListOutcome>>();
    DescribeTimeShiftStreamListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeTimeShiftStreamListRequest&,
        DescribeTimeShiftStreamListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeTopClientIpSumInfoListOutcome LiveClient::DescribeTopClientIpSumInfoList(const DescribeTopClientIpSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopClientIpSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopClientIpSumInfoListResponse rsp = DescribeTopClientIpSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopClientIpSumInfoListOutcome(rsp);
        else
            return DescribeTopClientIpSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopClientIpSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTopClientIpSumInfoListAsync(const DescribeTopClientIpSumInfoListRequest& request, const DescribeTopClientIpSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopClientIpSumInfoListRequest&;
    using Resp = DescribeTopClientIpSumInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopClientIpSumInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeTopClientIpSumInfoListOutcomeCallable LiveClient::DescribeTopClientIpSumInfoListCallable(const DescribeTopClientIpSumInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopClientIpSumInfoListOutcome>>();
    DescribeTopClientIpSumInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeTopClientIpSumInfoListRequest&,
        DescribeTopClientIpSumInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeTranscodeTaskNumOutcome LiveClient::DescribeTranscodeTaskNum(const DescribeTranscodeTaskNumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeTaskNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeTaskNumResponse rsp = DescribeTranscodeTaskNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeTaskNumOutcome(rsp);
        else
            return DescribeTranscodeTaskNumOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeTaskNumOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeTranscodeTaskNumAsync(const DescribeTranscodeTaskNumRequest& request, const DescribeTranscodeTaskNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTranscodeTaskNumRequest&;
    using Resp = DescribeTranscodeTaskNumResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeTaskNum", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeTranscodeTaskNumOutcomeCallable LiveClient::DescribeTranscodeTaskNumCallable(const DescribeTranscodeTaskNumRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeTaskNumOutcome>>();
    DescribeTranscodeTaskNumAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeTranscodeTaskNumRequest&,
        DescribeTranscodeTaskNumOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeUploadStreamNumsOutcome LiveClient::DescribeUploadStreamNums(const DescribeUploadStreamNumsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadStreamNums");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadStreamNumsResponse rsp = DescribeUploadStreamNumsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadStreamNumsOutcome(rsp);
        else
            return DescribeUploadStreamNumsOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadStreamNumsOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeUploadStreamNumsAsync(const DescribeUploadStreamNumsRequest& request, const DescribeUploadStreamNumsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUploadStreamNumsRequest&;
    using Resp = DescribeUploadStreamNumsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUploadStreamNums", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeUploadStreamNumsOutcomeCallable LiveClient::DescribeUploadStreamNumsCallable(const DescribeUploadStreamNumsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUploadStreamNumsOutcome>>();
    DescribeUploadStreamNumsAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeUploadStreamNumsRequest&,
        DescribeUploadStreamNumsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DescribeVisitTopSumInfoListOutcome LiveClient::DescribeVisitTopSumInfoList(const DescribeVisitTopSumInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVisitTopSumInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVisitTopSumInfoListResponse rsp = DescribeVisitTopSumInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVisitTopSumInfoListOutcome(rsp);
        else
            return DescribeVisitTopSumInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeVisitTopSumInfoListOutcome(outcome.GetError());
    }
}

void LiveClient::DescribeVisitTopSumInfoListAsync(const DescribeVisitTopSumInfoListRequest& request, const DescribeVisitTopSumInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVisitTopSumInfoListRequest&;
    using Resp = DescribeVisitTopSumInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVisitTopSumInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DescribeVisitTopSumInfoListOutcomeCallable LiveClient::DescribeVisitTopSumInfoListCallable(const DescribeVisitTopSumInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVisitTopSumInfoListOutcome>>();
    DescribeVisitTopSumInfoListAsync(
    request,
    [prom](
        const LiveClient*,
        const DescribeVisitTopSumInfoListRequest&,
        DescribeVisitTopSumInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::DropLiveStreamOutcome LiveClient::DropLiveStream(const DropLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DropLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DropLiveStreamResponse rsp = DropLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DropLiveStreamOutcome(rsp);
        else
            return DropLiveStreamOutcome(o.GetError());
    }
    else
    {
        return DropLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::DropLiveStreamAsync(const DropLiveStreamRequest& request, const DropLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DropLiveStreamRequest&;
    using Resp = DropLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DropLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::DropLiveStreamOutcomeCallable LiveClient::DropLiveStreamCallable(const DropLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DropLiveStreamOutcome>>();
    DropLiveStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const DropLiveStreamRequest&,
        DropLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::EnableLiveDomainOutcome LiveClient::EnableLiveDomain(const EnableLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "EnableLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableLiveDomainResponse rsp = EnableLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableLiveDomainOutcome(rsp);
        else
            return EnableLiveDomainOutcome(o.GetError());
    }
    else
    {
        return EnableLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::EnableLiveDomainAsync(const EnableLiveDomainRequest& request, const EnableLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableLiveDomainRequest&;
    using Resp = EnableLiveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "EnableLiveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::EnableLiveDomainOutcomeCallable LiveClient::EnableLiveDomainCallable(const EnableLiveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableLiveDomainOutcome>>();
    EnableLiveDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const EnableLiveDomainRequest&,
        EnableLiveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::EnableOptimalSwitchingOutcome LiveClient::EnableOptimalSwitching(const EnableOptimalSwitchingRequest &request)
{
    auto outcome = MakeRequest(request, "EnableOptimalSwitching");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableOptimalSwitchingResponse rsp = EnableOptimalSwitchingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableOptimalSwitchingOutcome(rsp);
        else
            return EnableOptimalSwitchingOutcome(o.GetError());
    }
    else
    {
        return EnableOptimalSwitchingOutcome(outcome.GetError());
    }
}

void LiveClient::EnableOptimalSwitchingAsync(const EnableOptimalSwitchingRequest& request, const EnableOptimalSwitchingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableOptimalSwitchingRequest&;
    using Resp = EnableOptimalSwitchingResponse;

    DoRequestAsync<Req, Resp>(
        "EnableOptimalSwitching", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::EnableOptimalSwitchingOutcomeCallable LiveClient::EnableOptimalSwitchingCallable(const EnableOptimalSwitchingRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableOptimalSwitchingOutcome>>();
    EnableOptimalSwitchingAsync(
    request,
    [prom](
        const LiveClient*,
        const EnableOptimalSwitchingRequest&,
        EnableOptimalSwitchingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ForbidLiveDomainOutcome LiveClient::ForbidLiveDomain(const ForbidLiveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveDomainResponse rsp = ForbidLiveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveDomainOutcome(rsp);
        else
            return ForbidLiveDomainOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveDomainAsync(const ForbidLiveDomainRequest& request, const ForbidLiveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForbidLiveDomainRequest&;
    using Resp = ForbidLiveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ForbidLiveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ForbidLiveDomainOutcomeCallable LiveClient::ForbidLiveDomainCallable(const ForbidLiveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForbidLiveDomainOutcome>>();
    ForbidLiveDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const ForbidLiveDomainRequest&,
        ForbidLiveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ForbidLiveStreamOutcome LiveClient::ForbidLiveStream(const ForbidLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidLiveStreamResponse rsp = ForbidLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidLiveStreamOutcome(rsp);
        else
            return ForbidLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ForbidLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ForbidLiveStreamAsync(const ForbidLiveStreamRequest& request, const ForbidLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ForbidLiveStreamRequest&;
    using Resp = ForbidLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ForbidLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ForbidLiveStreamOutcomeCallable LiveClient::ForbidLiveStreamCallable(const ForbidLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForbidLiveStreamOutcome>>();
    ForbidLiveStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const ForbidLiveStreamRequest&,
        ForbidLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterOutcome LiveClient::ModifyCaster(const ModifyCasterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterResponse rsp = ModifyCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterOutcome(rsp);
        else
            return ModifyCasterOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterAsync(const ModifyCasterRequest& request, const ModifyCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterRequest&;
    using Resp = ModifyCasterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterOutcomeCallable LiveClient::ModifyCasterCallable(const ModifyCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterOutcome>>();
    ModifyCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterRequest&,
        ModifyCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterInputInfoOutcome LiveClient::ModifyCasterInputInfo(const ModifyCasterInputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterInputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterInputInfoResponse rsp = ModifyCasterInputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterInputInfoOutcome(rsp);
        else
            return ModifyCasterInputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterInputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterInputInfoAsync(const ModifyCasterInputInfoRequest& request, const ModifyCasterInputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterInputInfoRequest&;
    using Resp = ModifyCasterInputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCasterInputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterInputInfoOutcomeCallable LiveClient::ModifyCasterInputInfoCallable(const ModifyCasterInputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterInputInfoOutcome>>();
    ModifyCasterInputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterInputInfoRequest&,
        ModifyCasterInputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterLayoutInfoOutcome LiveClient::ModifyCasterLayoutInfo(const ModifyCasterLayoutInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterLayoutInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterLayoutInfoResponse rsp = ModifyCasterLayoutInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterLayoutInfoOutcome(rsp);
        else
            return ModifyCasterLayoutInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterLayoutInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterLayoutInfoAsync(const ModifyCasterLayoutInfoRequest& request, const ModifyCasterLayoutInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterLayoutInfoRequest&;
    using Resp = ModifyCasterLayoutInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCasterLayoutInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterLayoutInfoOutcomeCallable LiveClient::ModifyCasterLayoutInfoCallable(const ModifyCasterLayoutInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterLayoutInfoOutcome>>();
    ModifyCasterLayoutInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterLayoutInfoRequest&,
        ModifyCasterLayoutInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterMarkPicInfoOutcome LiveClient::ModifyCasterMarkPicInfo(const ModifyCasterMarkPicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterMarkPicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterMarkPicInfoResponse rsp = ModifyCasterMarkPicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterMarkPicInfoOutcome(rsp);
        else
            return ModifyCasterMarkPicInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterMarkPicInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterMarkPicInfoAsync(const ModifyCasterMarkPicInfoRequest& request, const ModifyCasterMarkPicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterMarkPicInfoRequest&;
    using Resp = ModifyCasterMarkPicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCasterMarkPicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterMarkPicInfoOutcomeCallable LiveClient::ModifyCasterMarkPicInfoCallable(const ModifyCasterMarkPicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterMarkPicInfoOutcome>>();
    ModifyCasterMarkPicInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterMarkPicInfoRequest&,
        ModifyCasterMarkPicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterMarkWordInfoOutcome LiveClient::ModifyCasterMarkWordInfo(const ModifyCasterMarkWordInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterMarkWordInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterMarkWordInfoResponse rsp = ModifyCasterMarkWordInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterMarkWordInfoOutcome(rsp);
        else
            return ModifyCasterMarkWordInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterMarkWordInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterMarkWordInfoAsync(const ModifyCasterMarkWordInfoRequest& request, const ModifyCasterMarkWordInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterMarkWordInfoRequest&;
    using Resp = ModifyCasterMarkWordInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCasterMarkWordInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterMarkWordInfoOutcomeCallable LiveClient::ModifyCasterMarkWordInfoCallable(const ModifyCasterMarkWordInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterMarkWordInfoOutcome>>();
    ModifyCasterMarkWordInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterMarkWordInfoRequest&,
        ModifyCasterMarkWordInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyCasterOutputInfoOutcome LiveClient::ModifyCasterOutputInfo(const ModifyCasterOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCasterOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCasterOutputInfoResponse rsp = ModifyCasterOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCasterOutputInfoOutcome(rsp);
        else
            return ModifyCasterOutputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCasterOutputInfoOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyCasterOutputInfoAsync(const ModifyCasterOutputInfoRequest& request, const ModifyCasterOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCasterOutputInfoRequest&;
    using Resp = ModifyCasterOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCasterOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyCasterOutputInfoOutcomeCallable LiveClient::ModifyCasterOutputInfoCallable(const ModifyCasterOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCasterOutputInfoOutcome>>();
    ModifyCasterOutputInfoAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyCasterOutputInfoRequest&,
        ModifyCasterOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveCallbackTemplateOutcome LiveClient::ModifyLiveCallbackTemplate(const ModifyLiveCallbackTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveCallbackTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveCallbackTemplateResponse rsp = ModifyLiveCallbackTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveCallbackTemplateOutcome(rsp);
        else
            return ModifyLiveCallbackTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveCallbackTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveCallbackTemplateAsync(const ModifyLiveCallbackTemplateRequest& request, const ModifyLiveCallbackTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveCallbackTemplateRequest&;
    using Resp = ModifyLiveCallbackTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveCallbackTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveCallbackTemplateOutcomeCallable LiveClient::ModifyLiveCallbackTemplateCallable(const ModifyLiveCallbackTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveCallbackTemplateOutcome>>();
    ModifyLiveCallbackTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveCallbackTemplateRequest&,
        ModifyLiveCallbackTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveDomainCertBindingsOutcome LiveClient::ModifyLiveDomainCertBindings(const ModifyLiveDomainCertBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainCertBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainCertBindingsResponse rsp = ModifyLiveDomainCertBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainCertBindingsOutcome(rsp);
        else
            return ModifyLiveDomainCertBindingsOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainCertBindingsOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainCertBindingsAsync(const ModifyLiveDomainCertBindingsRequest& request, const ModifyLiveDomainCertBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveDomainCertBindingsRequest&;
    using Resp = ModifyLiveDomainCertBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveDomainCertBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveDomainCertBindingsOutcomeCallable LiveClient::ModifyLiveDomainCertBindingsCallable(const ModifyLiveDomainCertBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveDomainCertBindingsOutcome>>();
    ModifyLiveDomainCertBindingsAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveDomainCertBindingsRequest&,
        ModifyLiveDomainCertBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveDomainRefererOutcome LiveClient::ModifyLiveDomainReferer(const ModifyLiveDomainRefererRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveDomainReferer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveDomainRefererResponse rsp = ModifyLiveDomainRefererResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveDomainRefererOutcome(rsp);
        else
            return ModifyLiveDomainRefererOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveDomainRefererOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveDomainRefererAsync(const ModifyLiveDomainRefererRequest& request, const ModifyLiveDomainRefererAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveDomainRefererRequest&;
    using Resp = ModifyLiveDomainRefererResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveDomainReferer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveDomainRefererOutcomeCallable LiveClient::ModifyLiveDomainRefererCallable(const ModifyLiveDomainRefererRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveDomainRefererOutcome>>();
    ModifyLiveDomainRefererAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveDomainRefererRequest&,
        ModifyLiveDomainRefererOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLivePadTemplateOutcome LiveClient::ModifyLivePadTemplate(const ModifyLivePadTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePadTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePadTemplateResponse rsp = ModifyLivePadTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePadTemplateOutcome(rsp);
        else
            return ModifyLivePadTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePadTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePadTemplateAsync(const ModifyLivePadTemplateRequest& request, const ModifyLivePadTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLivePadTemplateRequest&;
    using Resp = ModifyLivePadTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLivePadTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLivePadTemplateOutcomeCallable LiveClient::ModifyLivePadTemplateCallable(const ModifyLivePadTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLivePadTemplateOutcome>>();
    ModifyLivePadTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLivePadTemplateRequest&,
        ModifyLivePadTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLivePlayAuthKeyOutcome LiveClient::ModifyLivePlayAuthKey(const ModifyLivePlayAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayAuthKeyResponse rsp = ModifyLivePlayAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayAuthKeyOutcome(rsp);
        else
            return ModifyLivePlayAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayAuthKeyAsync(const ModifyLivePlayAuthKeyRequest& request, const ModifyLivePlayAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLivePlayAuthKeyRequest&;
    using Resp = ModifyLivePlayAuthKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLivePlayAuthKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLivePlayAuthKeyOutcomeCallable LiveClient::ModifyLivePlayAuthKeyCallable(const ModifyLivePlayAuthKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLivePlayAuthKeyOutcome>>();
    ModifyLivePlayAuthKeyAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLivePlayAuthKeyRequest&,
        ModifyLivePlayAuthKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLivePlayDomainOutcome LiveClient::ModifyLivePlayDomain(const ModifyLivePlayDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePlayDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePlayDomainResponse rsp = ModifyLivePlayDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePlayDomainOutcome(rsp);
        else
            return ModifyLivePlayDomainOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePlayDomainOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePlayDomainAsync(const ModifyLivePlayDomainRequest& request, const ModifyLivePlayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLivePlayDomainRequest&;
    using Resp = ModifyLivePlayDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLivePlayDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLivePlayDomainOutcomeCallable LiveClient::ModifyLivePlayDomainCallable(const ModifyLivePlayDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLivePlayDomainOutcome>>();
    ModifyLivePlayDomainAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLivePlayDomainRequest&,
        ModifyLivePlayDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLivePullStreamTaskOutcome LiveClient::ModifyLivePullStreamTask(const ModifyLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePullStreamTaskResponse rsp = ModifyLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePullStreamTaskOutcome(rsp);
        else
            return ModifyLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePullStreamTaskAsync(const ModifyLivePullStreamTaskRequest& request, const ModifyLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLivePullStreamTaskRequest&;
    using Resp = ModifyLivePullStreamTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLivePullStreamTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLivePullStreamTaskOutcomeCallable LiveClient::ModifyLivePullStreamTaskCallable(const ModifyLivePullStreamTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLivePullStreamTaskOutcome>>();
    ModifyLivePullStreamTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLivePullStreamTaskRequest&,
        ModifyLivePullStreamTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLivePushAuthKeyOutcome LiveClient::ModifyLivePushAuthKey(const ModifyLivePushAuthKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLivePushAuthKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLivePushAuthKeyResponse rsp = ModifyLivePushAuthKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLivePushAuthKeyOutcome(rsp);
        else
            return ModifyLivePushAuthKeyOutcome(o.GetError());
    }
    else
    {
        return ModifyLivePushAuthKeyOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLivePushAuthKeyAsync(const ModifyLivePushAuthKeyRequest& request, const ModifyLivePushAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLivePushAuthKeyRequest&;
    using Resp = ModifyLivePushAuthKeyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLivePushAuthKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLivePushAuthKeyOutcomeCallable LiveClient::ModifyLivePushAuthKeyCallable(const ModifyLivePushAuthKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLivePushAuthKeyOutcome>>();
    ModifyLivePushAuthKeyAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLivePushAuthKeyRequest&,
        ModifyLivePushAuthKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveRecordTemplateOutcome LiveClient::ModifyLiveRecordTemplate(const ModifyLiveRecordTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveRecordTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveRecordTemplateResponse rsp = ModifyLiveRecordTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveRecordTemplateOutcome(rsp);
        else
            return ModifyLiveRecordTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveRecordTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveRecordTemplateAsync(const ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveRecordTemplateRequest&;
    using Resp = ModifyLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveRecordTemplateOutcomeCallable LiveClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveRecordTemplateOutcome>>();
    ModifyLiveRecordTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveRecordTemplateRequest&,
        ModifyLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveSnapshotTemplateOutcome LiveClient::ModifyLiveSnapshotTemplate(const ModifyLiveSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveSnapshotTemplateResponse rsp = ModifyLiveSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveSnapshotTemplateOutcome(rsp);
        else
            return ModifyLiveSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveSnapshotTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveSnapshotTemplateAsync(const ModifyLiveSnapshotTemplateRequest& request, const ModifyLiveSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveSnapshotTemplateRequest&;
    using Resp = ModifyLiveSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveSnapshotTemplateOutcomeCallable LiveClient::ModifyLiveSnapshotTemplateCallable(const ModifyLiveSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveSnapshotTemplateOutcome>>();
    ModifyLiveSnapshotTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveSnapshotTemplateRequest&,
        ModifyLiveSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveStreamMonitorOutcome LiveClient::ModifyLiveStreamMonitor(const ModifyLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveStreamMonitorResponse rsp = ModifyLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveStreamMonitorOutcome(rsp);
        else
            return ModifyLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveStreamMonitorAsync(const ModifyLiveStreamMonitorRequest& request, const ModifyLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveStreamMonitorRequest&;
    using Resp = ModifyLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveStreamMonitorOutcomeCallable LiveClient::ModifyLiveStreamMonitorCallable(const ModifyLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveStreamMonitorOutcome>>();
    ModifyLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveStreamMonitorRequest&,
        ModifyLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveTimeShiftTemplateOutcome LiveClient::ModifyLiveTimeShiftTemplate(const ModifyLiveTimeShiftTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveTimeShiftTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveTimeShiftTemplateResponse rsp = ModifyLiveTimeShiftTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveTimeShiftTemplateOutcome(rsp);
        else
            return ModifyLiveTimeShiftTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveTimeShiftTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveTimeShiftTemplateAsync(const ModifyLiveTimeShiftTemplateRequest& request, const ModifyLiveTimeShiftTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveTimeShiftTemplateRequest&;
    using Resp = ModifyLiveTimeShiftTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveTimeShiftTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveTimeShiftTemplateOutcomeCallable LiveClient::ModifyLiveTimeShiftTemplateCallable(const ModifyLiveTimeShiftTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveTimeShiftTemplateOutcome>>();
    ModifyLiveTimeShiftTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveTimeShiftTemplateRequest&,
        ModifyLiveTimeShiftTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyLiveTranscodeTemplateOutcome LiveClient::ModifyLiveTranscodeTemplate(const ModifyLiveTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLiveTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLiveTranscodeTemplateResponse rsp = ModifyLiveTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLiveTranscodeTemplateOutcome(rsp);
        else
            return ModifyLiveTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyLiveTranscodeTemplateOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyLiveTranscodeTemplateAsync(const ModifyLiveTranscodeTemplateRequest& request, const ModifyLiveTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLiveTranscodeTemplateRequest&;
    using Resp = ModifyLiveTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyLiveTranscodeTemplateOutcomeCallable LiveClient::ModifyLiveTranscodeTemplateCallable(const ModifyLiveTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveTranscodeTemplateOutcome>>();
    ModifyLiveTranscodeTemplateAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyLiveTranscodeTemplateRequest&,
        ModifyLiveTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyPullStreamConfigOutcome LiveClient::ModifyPullStreamConfig(const ModifyPullStreamConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPullStreamConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPullStreamConfigResponse rsp = ModifyPullStreamConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPullStreamConfigOutcome(rsp);
        else
            return ModifyPullStreamConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyPullStreamConfigOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyPullStreamConfigAsync(const ModifyPullStreamConfigRequest& request, const ModifyPullStreamConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPullStreamConfigRequest&;
    using Resp = ModifyPullStreamConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPullStreamConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyPullStreamConfigOutcomeCallable LiveClient::ModifyPullStreamConfigCallable(const ModifyPullStreamConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPullStreamConfigOutcome>>();
    ModifyPullStreamConfigAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyPullStreamConfigRequest&,
        ModifyPullStreamConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ModifyPullStreamStatusOutcome LiveClient::ModifyPullStreamStatus(const ModifyPullStreamStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPullStreamStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPullStreamStatusResponse rsp = ModifyPullStreamStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPullStreamStatusOutcome(rsp);
        else
            return ModifyPullStreamStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPullStreamStatusOutcome(outcome.GetError());
    }
}

void LiveClient::ModifyPullStreamStatusAsync(const ModifyPullStreamStatusRequest& request, const ModifyPullStreamStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPullStreamStatusRequest&;
    using Resp = ModifyPullStreamStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPullStreamStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ModifyPullStreamStatusOutcomeCallable LiveClient::ModifyPullStreamStatusCallable(const ModifyPullStreamStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPullStreamStatusOutcome>>();
    ModifyPullStreamStatusAsync(
    request,
    [prom](
        const LiveClient*,
        const ModifyPullStreamStatusRequest&,
        ModifyPullStreamStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ReleaseCasterOutcome LiveClient::ReleaseCaster(const ReleaseCasterRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseCaster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseCasterResponse rsp = ReleaseCasterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseCasterOutcome(rsp);
        else
            return ReleaseCasterOutcome(o.GetError());
    }
    else
    {
        return ReleaseCasterOutcome(outcome.GetError());
    }
}

void LiveClient::ReleaseCasterAsync(const ReleaseCasterRequest& request, const ReleaseCasterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseCasterRequest&;
    using Resp = ReleaseCasterResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseCaster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ReleaseCasterOutcomeCallable LiveClient::ReleaseCasterCallable(const ReleaseCasterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseCasterOutcome>>();
    ReleaseCasterAsync(
    request,
    [prom](
        const LiveClient*,
        const ReleaseCasterRequest&,
        ReleaseCasterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::RestartLivePullStreamTaskOutcome LiveClient::RestartLivePullStreamTask(const RestartLivePullStreamTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RestartLivePullStreamTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartLivePullStreamTaskResponse rsp = RestartLivePullStreamTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartLivePullStreamTaskOutcome(rsp);
        else
            return RestartLivePullStreamTaskOutcome(o.GetError());
    }
    else
    {
        return RestartLivePullStreamTaskOutcome(outcome.GetError());
    }
}

void LiveClient::RestartLivePullStreamTaskAsync(const RestartLivePullStreamTaskRequest& request, const RestartLivePullStreamTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartLivePullStreamTaskRequest&;
    using Resp = RestartLivePullStreamTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RestartLivePullStreamTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::RestartLivePullStreamTaskOutcomeCallable LiveClient::RestartLivePullStreamTaskCallable(const RestartLivePullStreamTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartLivePullStreamTaskOutcome>>();
    RestartLivePullStreamTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const RestartLivePullStreamTaskRequest&,
        RestartLivePullStreamTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ResumeDelayLiveStreamOutcome LiveClient::ResumeDelayLiveStream(const ResumeDelayLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDelayLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDelayLiveStreamResponse rsp = ResumeDelayLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDelayLiveStreamOutcome(rsp);
        else
            return ResumeDelayLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeDelayLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeDelayLiveStreamAsync(const ResumeDelayLiveStreamRequest& request, const ResumeDelayLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeDelayLiveStreamRequest&;
    using Resp = ResumeDelayLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeDelayLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ResumeDelayLiveStreamOutcomeCallable LiveClient::ResumeDelayLiveStreamCallable(const ResumeDelayLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeDelayLiveStreamOutcome>>();
    ResumeDelayLiveStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const ResumeDelayLiveStreamRequest&,
        ResumeDelayLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::ResumeLiveStreamOutcome LiveClient::ResumeLiveStream(const ResumeLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeLiveStreamResponse rsp = ResumeLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeLiveStreamOutcome(rsp);
        else
            return ResumeLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ResumeLiveStreamOutcome(outcome.GetError());
    }
}

void LiveClient::ResumeLiveStreamAsync(const ResumeLiveStreamRequest& request, const ResumeLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeLiveStreamRequest&;
    using Resp = ResumeLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::ResumeLiveStreamOutcomeCallable LiveClient::ResumeLiveStreamCallable(const ResumeLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeLiveStreamOutcome>>();
    ResumeLiveStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const ResumeLiveStreamRequest&,
        ResumeLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::SendLiveCloudEffectOutcome LiveClient::SendLiveCloudEffect(const SendLiveCloudEffectRequest &request)
{
    auto outcome = MakeRequest(request, "SendLiveCloudEffect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendLiveCloudEffectResponse rsp = SendLiveCloudEffectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendLiveCloudEffectOutcome(rsp);
        else
            return SendLiveCloudEffectOutcome(o.GetError());
    }
    else
    {
        return SendLiveCloudEffectOutcome(outcome.GetError());
    }
}

void LiveClient::SendLiveCloudEffectAsync(const SendLiveCloudEffectRequest& request, const SendLiveCloudEffectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendLiveCloudEffectRequest&;
    using Resp = SendLiveCloudEffectResponse;

    DoRequestAsync<Req, Resp>(
        "SendLiveCloudEffect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::SendLiveCloudEffectOutcomeCallable LiveClient::SendLiveCloudEffectCallable(const SendLiveCloudEffectRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendLiveCloudEffectOutcome>>();
    SendLiveCloudEffectAsync(
    request,
    [prom](
        const LiveClient*,
        const SendLiveCloudEffectRequest&,
        SendLiveCloudEffectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StartLivePadStreamOutcome LiveClient::StartLivePadStream(const StartLivePadStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartLivePadStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLivePadStreamResponse rsp = StartLivePadStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLivePadStreamOutcome(rsp);
        else
            return StartLivePadStreamOutcome(o.GetError());
    }
    else
    {
        return StartLivePadStreamOutcome(outcome.GetError());
    }
}

void LiveClient::StartLivePadStreamAsync(const StartLivePadStreamRequest& request, const StartLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartLivePadStreamRequest&;
    using Resp = StartLivePadStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StartLivePadStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StartLivePadStreamOutcomeCallable LiveClient::StartLivePadStreamCallable(const StartLivePadStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartLivePadStreamOutcome>>();
    StartLivePadStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const StartLivePadStreamRequest&,
        StartLivePadStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StartLiveStreamMonitorOutcome LiveClient::StartLiveStreamMonitor(const StartLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StartLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLiveStreamMonitorResponse rsp = StartLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLiveStreamMonitorOutcome(rsp);
        else
            return StartLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return StartLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::StartLiveStreamMonitorAsync(const StartLiveStreamMonitorRequest& request, const StartLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartLiveStreamMonitorRequest&;
    using Resp = StartLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "StartLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StartLiveStreamMonitorOutcomeCallable LiveClient::StartLiveStreamMonitorCallable(const StartLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartLiveStreamMonitorOutcome>>();
    StartLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const StartLiveStreamMonitorRequest&,
        StartLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopCasterPgmOutcome LiveClient::StopCasterPgm(const StopCasterPgmRequest &request)
{
    auto outcome = MakeRequest(request, "StopCasterPgm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCasterPgmResponse rsp = StopCasterPgmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCasterPgmOutcome(rsp);
        else
            return StopCasterPgmOutcome(o.GetError());
    }
    else
    {
        return StopCasterPgmOutcome(outcome.GetError());
    }
}

void LiveClient::StopCasterPgmAsync(const StopCasterPgmRequest& request, const StopCasterPgmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCasterPgmRequest&;
    using Resp = StopCasterPgmResponse;

    DoRequestAsync<Req, Resp>(
        "StopCasterPgm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopCasterPgmOutcomeCallable LiveClient::StopCasterPgmCallable(const StopCasterPgmRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCasterPgmOutcome>>();
    StopCasterPgmAsync(
    request,
    [prom](
        const LiveClient*,
        const StopCasterPgmRequest&,
        StopCasterPgmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopCasterPvwOutcome LiveClient::StopCasterPvw(const StopCasterPvwRequest &request)
{
    auto outcome = MakeRequest(request, "StopCasterPvw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCasterPvwResponse rsp = StopCasterPvwResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCasterPvwOutcome(rsp);
        else
            return StopCasterPvwOutcome(o.GetError());
    }
    else
    {
        return StopCasterPvwOutcome(outcome.GetError());
    }
}

void LiveClient::StopCasterPvwAsync(const StopCasterPvwRequest& request, const StopCasterPvwAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopCasterPvwRequest&;
    using Resp = StopCasterPvwResponse;

    DoRequestAsync<Req, Resp>(
        "StopCasterPvw", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopCasterPvwOutcomeCallable LiveClient::StopCasterPvwCallable(const StopCasterPvwRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopCasterPvwOutcome>>();
    StopCasterPvwAsync(
    request,
    [prom](
        const LiveClient*,
        const StopCasterPvwRequest&,
        StopCasterPvwOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopLivePadStreamOutcome LiveClient::StopLivePadStream(const StopLivePadStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopLivePadStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLivePadStreamResponse rsp = StopLivePadStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLivePadStreamOutcome(rsp);
        else
            return StopLivePadStreamOutcome(o.GetError());
    }
    else
    {
        return StopLivePadStreamOutcome(outcome.GetError());
    }
}

void LiveClient::StopLivePadStreamAsync(const StopLivePadStreamRequest& request, const StopLivePadStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLivePadStreamRequest&;
    using Resp = StopLivePadStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StopLivePadStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopLivePadStreamOutcomeCallable LiveClient::StopLivePadStreamCallable(const StopLivePadStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLivePadStreamOutcome>>();
    StopLivePadStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const StopLivePadStreamRequest&,
        StopLivePadStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopLiveRecordOutcome LiveClient::StopLiveRecord(const StopLiveRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopLiveRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLiveRecordResponse rsp = StopLiveRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLiveRecordOutcome(rsp);
        else
            return StopLiveRecordOutcome(o.GetError());
    }
    else
    {
        return StopLiveRecordOutcome(outcome.GetError());
    }
}

void LiveClient::StopLiveRecordAsync(const StopLiveRecordRequest& request, const StopLiveRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLiveRecordRequest&;
    using Resp = StopLiveRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopLiveRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopLiveRecordOutcomeCallable LiveClient::StopLiveRecordCallable(const StopLiveRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLiveRecordOutcome>>();
    StopLiveRecordAsync(
    request,
    [prom](
        const LiveClient*,
        const StopLiveRecordRequest&,
        StopLiveRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopLiveStreamMonitorOutcome LiveClient::StopLiveStreamMonitor(const StopLiveStreamMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "StopLiveStreamMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLiveStreamMonitorResponse rsp = StopLiveStreamMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLiveStreamMonitorOutcome(rsp);
        else
            return StopLiveStreamMonitorOutcome(o.GetError());
    }
    else
    {
        return StopLiveStreamMonitorOutcome(outcome.GetError());
    }
}

void LiveClient::StopLiveStreamMonitorAsync(const StopLiveStreamMonitorRequest& request, const StopLiveStreamMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLiveStreamMonitorRequest&;
    using Resp = StopLiveStreamMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "StopLiveStreamMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopLiveStreamMonitorOutcomeCallable LiveClient::StopLiveStreamMonitorCallable(const StopLiveStreamMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLiveStreamMonitorOutcome>>();
    StopLiveStreamMonitorAsync(
    request,
    [prom](
        const LiveClient*,
        const StopLiveStreamMonitorRequest&,
        StopLiveStreamMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopRecordTaskOutcome LiveClient::StopRecordTask(const StopRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordTaskResponse rsp = StopRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordTaskOutcome(rsp);
        else
            return StopRecordTaskOutcome(o.GetError());
    }
    else
    {
        return StopRecordTaskOutcome(outcome.GetError());
    }
}

void LiveClient::StopRecordTaskAsync(const StopRecordTaskRequest& request, const StopRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRecordTaskRequest&;
    using Resp = StopRecordTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopRecordTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopRecordTaskOutcomeCallable LiveClient::StopRecordTaskCallable(const StopRecordTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRecordTaskOutcome>>();
    StopRecordTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const StopRecordTaskRequest&,
        StopRecordTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::StopScreenshotTaskOutcome LiveClient::StopScreenshotTask(const StopScreenshotTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopScreenshotTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopScreenshotTaskResponse rsp = StopScreenshotTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopScreenshotTaskOutcome(rsp);
        else
            return StopScreenshotTaskOutcome(o.GetError());
    }
    else
    {
        return StopScreenshotTaskOutcome(outcome.GetError());
    }
}

void LiveClient::StopScreenshotTaskAsync(const StopScreenshotTaskRequest& request, const StopScreenshotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopScreenshotTaskRequest&;
    using Resp = StopScreenshotTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopScreenshotTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::StopScreenshotTaskOutcomeCallable LiveClient::StopScreenshotTaskCallable(const StopScreenshotTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopScreenshotTaskOutcome>>();
    StopScreenshotTaskAsync(
    request,
    [prom](
        const LiveClient*,
        const StopScreenshotTaskRequest&,
        StopScreenshotTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::SwitchBackupStreamOutcome LiveClient::SwitchBackupStream(const SwitchBackupStreamRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchBackupStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchBackupStreamResponse rsp = SwitchBackupStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchBackupStreamOutcome(rsp);
        else
            return SwitchBackupStreamOutcome(o.GetError());
    }
    else
    {
        return SwitchBackupStreamOutcome(outcome.GetError());
    }
}

void LiveClient::SwitchBackupStreamAsync(const SwitchBackupStreamRequest& request, const SwitchBackupStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchBackupStreamRequest&;
    using Resp = SwitchBackupStreamResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchBackupStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::SwitchBackupStreamOutcomeCallable LiveClient::SwitchBackupStreamCallable(const SwitchBackupStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchBackupStreamOutcome>>();
    SwitchBackupStreamAsync(
    request,
    [prom](
        const LiveClient*,
        const SwitchBackupStreamRequest&,
        SwitchBackupStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::UnBindLiveDomainCertOutcome LiveClient::UnBindLiveDomainCert(const UnBindLiveDomainCertRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindLiveDomainCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindLiveDomainCertResponse rsp = UnBindLiveDomainCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindLiveDomainCertOutcome(rsp);
        else
            return UnBindLiveDomainCertOutcome(o.GetError());
    }
    else
    {
        return UnBindLiveDomainCertOutcome(outcome.GetError());
    }
}

void LiveClient::UnBindLiveDomainCertAsync(const UnBindLiveDomainCertRequest& request, const UnBindLiveDomainCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindLiveDomainCertRequest&;
    using Resp = UnBindLiveDomainCertResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindLiveDomainCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::UnBindLiveDomainCertOutcomeCallable LiveClient::UnBindLiveDomainCertCallable(const UnBindLiveDomainCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindLiveDomainCertOutcome>>();
    UnBindLiveDomainCertAsync(
    request,
    [prom](
        const LiveClient*,
        const UnBindLiveDomainCertRequest&,
        UnBindLiveDomainCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LiveClient::UpdateLiveWatermarkOutcome LiveClient::UpdateLiveWatermark(const UpdateLiveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateLiveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateLiveWatermarkResponse rsp = UpdateLiveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateLiveWatermarkOutcome(rsp);
        else
            return UpdateLiveWatermarkOutcome(o.GetError());
    }
    else
    {
        return UpdateLiveWatermarkOutcome(outcome.GetError());
    }
}

void LiveClient::UpdateLiveWatermarkAsync(const UpdateLiveWatermarkRequest& request, const UpdateLiveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateLiveWatermarkRequest&;
    using Resp = UpdateLiveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateLiveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LiveClient::UpdateLiveWatermarkOutcomeCallable LiveClient::UpdateLiveWatermarkCallable(const UpdateLiveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateLiveWatermarkOutcome>>();
    UpdateLiveWatermarkAsync(
    request,
    [prom](
        const LiveClient*,
        const UpdateLiveWatermarkRequest&,
        UpdateLiveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

