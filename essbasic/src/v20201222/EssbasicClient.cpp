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

#include <tencentcloud/essbasic/v20201222/EssbasicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Essbasic::V20201222;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-22";
    const string ENDPOINT = "essbasic.tencentcloudapi.com";
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region) :
    EssbasicClient(credential, region, ClientProfile())
{
}

EssbasicClient::EssbasicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EssbasicClient::ArchiveFlowOutcome EssbasicClient::ArchiveFlow(const ArchiveFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ArchiveFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ArchiveFlowResponse rsp = ArchiveFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ArchiveFlowOutcome(rsp);
        else
            return ArchiveFlowOutcome(o.GetError());
    }
    else
    {
        return ArchiveFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::ArchiveFlowAsync(const ArchiveFlowRequest& request, const ArchiveFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ArchiveFlowRequest&;
    using Resp = ArchiveFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ArchiveFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ArchiveFlowOutcomeCallable EssbasicClient::ArchiveFlowCallable(const ArchiveFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ArchiveFlowOutcome>>();
    ArchiveFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ArchiveFlowRequest&,
        ArchiveFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CancelFlowOutcome EssbasicClient::CancelFlow(const CancelFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CancelFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelFlowResponse rsp = CancelFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelFlowOutcome(rsp);
        else
            return CancelFlowOutcome(o.GetError());
    }
    else
    {
        return CancelFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::CancelFlowAsync(const CancelFlowRequest& request, const CancelFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelFlowRequest&;
    using Resp = CancelFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CancelFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CancelFlowOutcomeCallable EssbasicClient::CancelFlowCallable(const CancelFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelFlowOutcome>>();
    CancelFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CancelFlowRequest&,
        CancelFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckBankCard2EVerificationOutcome EssbasicClient::CheckBankCard2EVerification(const CheckBankCard2EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCard2EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCard2EVerificationResponse rsp = CheckBankCard2EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCard2EVerificationOutcome(rsp);
        else
            return CheckBankCard2EVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCard2EVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckBankCard2EVerificationAsync(const CheckBankCard2EVerificationRequest& request, const CheckBankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCard2EVerificationRequest&;
    using Resp = CheckBankCard2EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCard2EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckBankCard2EVerificationOutcomeCallable EssbasicClient::CheckBankCard2EVerificationCallable(const CheckBankCard2EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCard2EVerificationOutcome>>();
    CheckBankCard2EVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckBankCard2EVerificationRequest&,
        CheckBankCard2EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckBankCard3EVerificationOutcome EssbasicClient::CheckBankCard3EVerification(const CheckBankCard3EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCard3EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCard3EVerificationResponse rsp = CheckBankCard3EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCard3EVerificationOutcome(rsp);
        else
            return CheckBankCard3EVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCard3EVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckBankCard3EVerificationAsync(const CheckBankCard3EVerificationRequest& request, const CheckBankCard3EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCard3EVerificationRequest&;
    using Resp = CheckBankCard3EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCard3EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckBankCard3EVerificationOutcomeCallable EssbasicClient::CheckBankCard3EVerificationCallable(const CheckBankCard3EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCard3EVerificationOutcome>>();
    CheckBankCard3EVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckBankCard3EVerificationRequest&,
        CheckBankCard3EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckBankCard4EVerificationOutcome EssbasicClient::CheckBankCard4EVerification(const CheckBankCard4EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCard4EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCard4EVerificationResponse rsp = CheckBankCard4EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCard4EVerificationOutcome(rsp);
        else
            return CheckBankCard4EVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCard4EVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckBankCard4EVerificationAsync(const CheckBankCard4EVerificationRequest& request, const CheckBankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCard4EVerificationRequest&;
    using Resp = CheckBankCard4EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCard4EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckBankCard4EVerificationOutcomeCallable EssbasicClient::CheckBankCard4EVerificationCallable(const CheckBankCard4EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCard4EVerificationOutcome>>();
    CheckBankCard4EVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckBankCard4EVerificationRequest&,
        CheckBankCard4EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckBankCardVerificationOutcome EssbasicClient::CheckBankCardVerification(const CheckBankCardVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCardVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCardVerificationResponse rsp = CheckBankCardVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCardVerificationOutcome(rsp);
        else
            return CheckBankCardVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCardVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckBankCardVerificationAsync(const CheckBankCardVerificationRequest& request, const CheckBankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCardVerificationRequest&;
    using Resp = CheckBankCardVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCardVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckBankCardVerificationOutcomeCallable EssbasicClient::CheckBankCardVerificationCallable(const CheckBankCardVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCardVerificationOutcome>>();
    CheckBankCardVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckBankCardVerificationRequest&,
        CheckBankCardVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckFaceIdentifyOutcome EssbasicClient::CheckFaceIdentify(const CheckFaceIdentifyRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFaceIdentify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFaceIdentifyResponse rsp = CheckFaceIdentifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFaceIdentifyOutcome(rsp);
        else
            return CheckFaceIdentifyOutcome(o.GetError());
    }
    else
    {
        return CheckFaceIdentifyOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckFaceIdentifyAsync(const CheckFaceIdentifyRequest& request, const CheckFaceIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFaceIdentifyRequest&;
    using Resp = CheckFaceIdentifyResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFaceIdentify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckFaceIdentifyOutcomeCallable EssbasicClient::CheckFaceIdentifyCallable(const CheckFaceIdentifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFaceIdentifyOutcome>>();
    CheckFaceIdentifyAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckFaceIdentifyRequest&,
        CheckFaceIdentifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckIdCardVerificationOutcome EssbasicClient::CheckIdCardVerification(const CheckIdCardVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIdCardVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIdCardVerificationResponse rsp = CheckIdCardVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIdCardVerificationOutcome(rsp);
        else
            return CheckIdCardVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckIdCardVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckIdCardVerificationAsync(const CheckIdCardVerificationRequest& request, const CheckIdCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIdCardVerificationRequest&;
    using Resp = CheckIdCardVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIdCardVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckIdCardVerificationOutcomeCallable EssbasicClient::CheckIdCardVerificationCallable(const CheckIdCardVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIdCardVerificationOutcome>>();
    CheckIdCardVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckIdCardVerificationRequest&,
        CheckIdCardVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckMobileAndNameOutcome EssbasicClient::CheckMobileAndName(const CheckMobileAndNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMobileAndName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMobileAndNameResponse rsp = CheckMobileAndNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMobileAndNameOutcome(rsp);
        else
            return CheckMobileAndNameOutcome(o.GetError());
    }
    else
    {
        return CheckMobileAndNameOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckMobileAndNameAsync(const CheckMobileAndNameRequest& request, const CheckMobileAndNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckMobileAndNameRequest&;
    using Resp = CheckMobileAndNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckMobileAndName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckMobileAndNameOutcomeCallable EssbasicClient::CheckMobileAndNameCallable(const CheckMobileAndNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckMobileAndNameOutcome>>();
    CheckMobileAndNameAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckMobileAndNameRequest&,
        CheckMobileAndNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckMobileVerificationOutcome EssbasicClient::CheckMobileVerification(const CheckMobileVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckMobileVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckMobileVerificationResponse rsp = CheckMobileVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckMobileVerificationOutcome(rsp);
        else
            return CheckMobileVerificationOutcome(o.GetError());
    }
    else
    {
        return CheckMobileVerificationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckMobileVerificationAsync(const CheckMobileVerificationRequest& request, const CheckMobileVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckMobileVerificationRequest&;
    using Resp = CheckMobileVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckMobileVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckMobileVerificationOutcomeCallable EssbasicClient::CheckMobileVerificationCallable(const CheckMobileVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckMobileVerificationOutcome>>();
    CheckMobileVerificationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckMobileVerificationRequest&,
        CheckMobileVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CheckVerifyCodeMatchFlowIdOutcome EssbasicClient::CheckVerifyCodeMatchFlowId(const CheckVerifyCodeMatchFlowIdRequest &request)
{
    auto outcome = MakeRequest(request, "CheckVerifyCodeMatchFlowId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckVerifyCodeMatchFlowIdResponse rsp = CheckVerifyCodeMatchFlowIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckVerifyCodeMatchFlowIdOutcome(rsp);
        else
            return CheckVerifyCodeMatchFlowIdOutcome(o.GetError());
    }
    else
    {
        return CheckVerifyCodeMatchFlowIdOutcome(outcome.GetError());
    }
}

void EssbasicClient::CheckVerifyCodeMatchFlowIdAsync(const CheckVerifyCodeMatchFlowIdRequest& request, const CheckVerifyCodeMatchFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckVerifyCodeMatchFlowIdRequest&;
    using Resp = CheckVerifyCodeMatchFlowIdResponse;

    DoRequestAsync<Req, Resp>(
        "CheckVerifyCodeMatchFlowId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CheckVerifyCodeMatchFlowIdOutcomeCallable EssbasicClient::CheckVerifyCodeMatchFlowIdCallable(const CheckVerifyCodeMatchFlowIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckVerifyCodeMatchFlowIdOutcome>>();
    CheckVerifyCodeMatchFlowIdAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CheckVerifyCodeMatchFlowIdRequest&,
        CheckVerifyCodeMatchFlowIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFaceIdSignOutcome EssbasicClient::CreateFaceIdSign(const CreateFaceIdSignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFaceIdSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFaceIdSignResponse rsp = CreateFaceIdSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFaceIdSignOutcome(rsp);
        else
            return CreateFaceIdSignOutcome(o.GetError());
    }
    else
    {
        return CreateFaceIdSignOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFaceIdSignAsync(const CreateFaceIdSignRequest& request, const CreateFaceIdSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFaceIdSignRequest&;
    using Resp = CreateFaceIdSignResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFaceIdSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFaceIdSignOutcomeCallable EssbasicClient::CreateFaceIdSignCallable(const CreateFaceIdSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFaceIdSignOutcome>>();
    CreateFaceIdSignAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFaceIdSignRequest&,
        CreateFaceIdSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateFlowByFilesOutcome EssbasicClient::CreateFlowByFiles(const CreateFlowByFilesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowByFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowByFilesResponse rsp = CreateFlowByFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowByFilesOutcome(rsp);
        else
            return CreateFlowByFilesOutcome(o.GetError());
    }
    else
    {
        return CreateFlowByFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateFlowByFilesAsync(const CreateFlowByFilesRequest& request, const CreateFlowByFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowByFilesRequest&;
    using Resp = CreateFlowByFilesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowByFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateFlowByFilesOutcomeCallable EssbasicClient::CreateFlowByFilesCallable(const CreateFlowByFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowByFilesOutcome>>();
    CreateFlowByFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateFlowByFilesRequest&,
        CreateFlowByFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateH5FaceIdUrlOutcome EssbasicClient::CreateH5FaceIdUrl(const CreateH5FaceIdUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateH5FaceIdUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateH5FaceIdUrlResponse rsp = CreateH5FaceIdUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateH5FaceIdUrlOutcome(rsp);
        else
            return CreateH5FaceIdUrlOutcome(o.GetError());
    }
    else
    {
        return CreateH5FaceIdUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateH5FaceIdUrlAsync(const CreateH5FaceIdUrlRequest& request, const CreateH5FaceIdUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateH5FaceIdUrlRequest&;
    using Resp = CreateH5FaceIdUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateH5FaceIdUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateH5FaceIdUrlOutcomeCallable EssbasicClient::CreateH5FaceIdUrlCallable(const CreateH5FaceIdUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateH5FaceIdUrlOutcome>>();
    CreateH5FaceIdUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateH5FaceIdUrlRequest&,
        CreateH5FaceIdUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreatePreviewSignUrlOutcome EssbasicClient::CreatePreviewSignUrl(const CreatePreviewSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePreviewSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePreviewSignUrlResponse rsp = CreatePreviewSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePreviewSignUrlOutcome(rsp);
        else
            return CreatePreviewSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreatePreviewSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreatePreviewSignUrlAsync(const CreatePreviewSignUrlRequest& request, const CreatePreviewSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePreviewSignUrlRequest&;
    using Resp = CreatePreviewSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePreviewSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreatePreviewSignUrlOutcomeCallable EssbasicClient::CreatePreviewSignUrlCallable(const CreatePreviewSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePreviewSignUrlOutcome>>();
    CreatePreviewSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreatePreviewSignUrlRequest&,
        CreatePreviewSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSealOutcome EssbasicClient::CreateSeal(const CreateSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSealResponse rsp = CreateSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSealOutcome(rsp);
        else
            return CreateSealOutcome(o.GetError());
    }
    else
    {
        return CreateSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSealAsync(const CreateSealRequest& request, const CreateSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSealRequest&;
    using Resp = CreateSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSealOutcomeCallable EssbasicClient::CreateSealCallable(const CreateSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSealOutcome>>();
    CreateSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSealRequest&,
        CreateSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateServerFlowSignOutcome EssbasicClient::CreateServerFlowSign(const CreateServerFlowSignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerFlowSign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerFlowSignResponse rsp = CreateServerFlowSignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerFlowSignOutcome(rsp);
        else
            return CreateServerFlowSignOutcome(o.GetError());
    }
    else
    {
        return CreateServerFlowSignOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateServerFlowSignAsync(const CreateServerFlowSignRequest& request, const CreateServerFlowSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServerFlowSignRequest&;
    using Resp = CreateServerFlowSignResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServerFlowSign", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateServerFlowSignOutcomeCallable EssbasicClient::CreateServerFlowSignCallable(const CreateServerFlowSignRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServerFlowSignOutcome>>();
    CreateServerFlowSignAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateServerFlowSignRequest&,
        CreateServerFlowSignOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSignUrlOutcome EssbasicClient::CreateSignUrl(const CreateSignUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSignUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSignUrlResponse rsp = CreateSignUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSignUrlOutcome(rsp);
        else
            return CreateSignUrlOutcome(o.GetError());
    }
    else
    {
        return CreateSignUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSignUrlAsync(const CreateSignUrlRequest& request, const CreateSignUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSignUrlRequest&;
    using Resp = CreateSignUrlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSignUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSignUrlOutcomeCallable EssbasicClient::CreateSignUrlCallable(const CreateSignUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSignUrlOutcome>>();
    CreateSignUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSignUrlRequest&,
        CreateSignUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSubOrganizationOutcome EssbasicClient::CreateSubOrganization(const CreateSubOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubOrganizationResponse rsp = CreateSubOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubOrganizationOutcome(rsp);
        else
            return CreateSubOrganizationOutcome(o.GetError());
    }
    else
    {
        return CreateSubOrganizationOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSubOrganizationAsync(const CreateSubOrganizationRequest& request, const CreateSubOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubOrganizationRequest&;
    using Resp = CreateSubOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSubOrganizationOutcomeCallable EssbasicClient::CreateSubOrganizationCallable(const CreateSubOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubOrganizationOutcome>>();
    CreateSubOrganizationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSubOrganizationRequest&,
        CreateSubOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateSubOrganizationAndSealOutcome EssbasicClient::CreateSubOrganizationAndSeal(const CreateSubOrganizationAndSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubOrganizationAndSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubOrganizationAndSealResponse rsp = CreateSubOrganizationAndSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubOrganizationAndSealOutcome(rsp);
        else
            return CreateSubOrganizationAndSealOutcome(o.GetError());
    }
    else
    {
        return CreateSubOrganizationAndSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateSubOrganizationAndSealAsync(const CreateSubOrganizationAndSealRequest& request, const CreateSubOrganizationAndSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubOrganizationAndSealRequest&;
    using Resp = CreateSubOrganizationAndSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubOrganizationAndSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateSubOrganizationAndSealOutcomeCallable EssbasicClient::CreateSubOrganizationAndSealCallable(const CreateSubOrganizationAndSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubOrganizationAndSealOutcome>>();
    CreateSubOrganizationAndSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateSubOrganizationAndSealRequest&,
        CreateSubOrganizationAndSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateUserOutcome EssbasicClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateUserOutcomeCallable EssbasicClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::CreateUserAndSealOutcome EssbasicClient::CreateUserAndSeal(const CreateUserAndSealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserAndSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserAndSealResponse rsp = CreateUserAndSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserAndSealOutcome(rsp);
        else
            return CreateUserAndSealOutcome(o.GetError());
    }
    else
    {
        return CreateUserAndSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::CreateUserAndSealAsync(const CreateUserAndSealRequest& request, const CreateUserAndSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserAndSealRequest&;
    using Resp = CreateUserAndSealResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserAndSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::CreateUserAndSealOutcomeCallable EssbasicClient::CreateUserAndSealCallable(const CreateUserAndSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserAndSealOutcome>>();
    CreateUserAndSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const CreateUserAndSealRequest&,
        CreateUserAndSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DeleteSealOutcome EssbasicClient::DeleteSeal(const DeleteSealRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSealResponse rsp = DeleteSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSealOutcome(rsp);
        else
            return DeleteSealOutcome(o.GetError());
    }
    else
    {
        return DeleteSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::DeleteSealAsync(const DeleteSealRequest& request, const DeleteSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSealRequest&;
    using Resp = DeleteSealResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DeleteSealOutcomeCallable EssbasicClient::DeleteSealCallable(const DeleteSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSealOutcome>>();
    DeleteSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DeleteSealRequest&,
        DeleteSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeCatalogApproversOutcome EssbasicClient::DescribeCatalogApprovers(const DescribeCatalogApproversRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCatalogApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCatalogApproversResponse rsp = DescribeCatalogApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCatalogApproversOutcome(rsp);
        else
            return DescribeCatalogApproversOutcome(o.GetError());
    }
    else
    {
        return DescribeCatalogApproversOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCatalogApproversAsync(const DescribeCatalogApproversRequest& request, const DescribeCatalogApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCatalogApproversRequest&;
    using Resp = DescribeCatalogApproversResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCatalogApprovers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeCatalogApproversOutcomeCallable EssbasicClient::DescribeCatalogApproversCallable(const DescribeCatalogApproversRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCatalogApproversOutcome>>();
    DescribeCatalogApproversAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeCatalogApproversRequest&,
        DescribeCatalogApproversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeCatalogSignComponentsOutcome EssbasicClient::DescribeCatalogSignComponents(const DescribeCatalogSignComponentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCatalogSignComponents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCatalogSignComponentsResponse rsp = DescribeCatalogSignComponentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCatalogSignComponentsOutcome(rsp);
        else
            return DescribeCatalogSignComponentsOutcome(o.GetError());
    }
    else
    {
        return DescribeCatalogSignComponentsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCatalogSignComponentsAsync(const DescribeCatalogSignComponentsRequest& request, const DescribeCatalogSignComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCatalogSignComponentsRequest&;
    using Resp = DescribeCatalogSignComponentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCatalogSignComponents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeCatalogSignComponentsOutcomeCallable EssbasicClient::DescribeCatalogSignComponentsCallable(const DescribeCatalogSignComponentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCatalogSignComponentsOutcome>>();
    DescribeCatalogSignComponentsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeCatalogSignComponentsRequest&,
        DescribeCatalogSignComponentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeCustomFlowIdsOutcome EssbasicClient::DescribeCustomFlowIds(const DescribeCustomFlowIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomFlowIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomFlowIdsResponse rsp = DescribeCustomFlowIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomFlowIdsOutcome(rsp);
        else
            return DescribeCustomFlowIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomFlowIdsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCustomFlowIdsAsync(const DescribeCustomFlowIdsRequest& request, const DescribeCustomFlowIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomFlowIdsRequest&;
    using Resp = DescribeCustomFlowIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomFlowIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeCustomFlowIdsOutcomeCallable EssbasicClient::DescribeCustomFlowIdsCallable(const DescribeCustomFlowIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomFlowIdsOutcome>>();
    DescribeCustomFlowIdsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeCustomFlowIdsRequest&,
        DescribeCustomFlowIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeCustomFlowIdsByFlowIdOutcome EssbasicClient::DescribeCustomFlowIdsByFlowId(const DescribeCustomFlowIdsByFlowIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomFlowIdsByFlowId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomFlowIdsByFlowIdResponse rsp = DescribeCustomFlowIdsByFlowIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomFlowIdsByFlowIdOutcome(rsp);
        else
            return DescribeCustomFlowIdsByFlowIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomFlowIdsByFlowIdOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeCustomFlowIdsByFlowIdAsync(const DescribeCustomFlowIdsByFlowIdRequest& request, const DescribeCustomFlowIdsByFlowIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomFlowIdsByFlowIdRequest&;
    using Resp = DescribeCustomFlowIdsByFlowIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomFlowIdsByFlowId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeCustomFlowIdsByFlowIdOutcomeCallable EssbasicClient::DescribeCustomFlowIdsByFlowIdCallable(const DescribeCustomFlowIdsByFlowIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomFlowIdsByFlowIdOutcome>>();
    DescribeCustomFlowIdsByFlowIdAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeCustomFlowIdsByFlowIdRequest&,
        DescribeCustomFlowIdsByFlowIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFaceIdPhotosOutcome EssbasicClient::DescribeFaceIdPhotos(const DescribeFaceIdPhotosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFaceIdPhotos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFaceIdPhotosResponse rsp = DescribeFaceIdPhotosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFaceIdPhotosOutcome(rsp);
        else
            return DescribeFaceIdPhotosOutcome(o.GetError());
    }
    else
    {
        return DescribeFaceIdPhotosOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFaceIdPhotosAsync(const DescribeFaceIdPhotosRequest& request, const DescribeFaceIdPhotosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFaceIdPhotosRequest&;
    using Resp = DescribeFaceIdPhotosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFaceIdPhotos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFaceIdPhotosOutcomeCallable EssbasicClient::DescribeFaceIdPhotosCallable(const DescribeFaceIdPhotosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFaceIdPhotosOutcome>>();
    DescribeFaceIdPhotosAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFaceIdPhotosRequest&,
        DescribeFaceIdPhotosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFaceIdResultsOutcome EssbasicClient::DescribeFaceIdResults(const DescribeFaceIdResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFaceIdResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFaceIdResultsResponse rsp = DescribeFaceIdResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFaceIdResultsOutcome(rsp);
        else
            return DescribeFaceIdResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeFaceIdResultsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFaceIdResultsAsync(const DescribeFaceIdResultsRequest& request, const DescribeFaceIdResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFaceIdResultsRequest&;
    using Resp = DescribeFaceIdResultsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFaceIdResults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFaceIdResultsOutcomeCallable EssbasicClient::DescribeFaceIdResultsCallable(const DescribeFaceIdResultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFaceIdResultsOutcome>>();
    DescribeFaceIdResultsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFaceIdResultsRequest&,
        DescribeFaceIdResultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFileIdsByCustomIdsOutcome EssbasicClient::DescribeFileIdsByCustomIds(const DescribeFileIdsByCustomIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileIdsByCustomIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileIdsByCustomIdsResponse rsp = DescribeFileIdsByCustomIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileIdsByCustomIdsOutcome(rsp);
        else
            return DescribeFileIdsByCustomIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileIdsByCustomIdsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFileIdsByCustomIdsAsync(const DescribeFileIdsByCustomIdsRequest& request, const DescribeFileIdsByCustomIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileIdsByCustomIdsRequest&;
    using Resp = DescribeFileIdsByCustomIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileIdsByCustomIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFileIdsByCustomIdsOutcomeCallable EssbasicClient::DescribeFileIdsByCustomIdsCallable(const DescribeFileIdsByCustomIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileIdsByCustomIdsOutcome>>();
    DescribeFileIdsByCustomIdsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFileIdsByCustomIdsRequest&,
        DescribeFileIdsByCustomIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFileUrlsOutcome EssbasicClient::DescribeFileUrls(const DescribeFileUrlsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUrls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUrlsResponse rsp = DescribeFileUrlsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUrlsOutcome(rsp);
        else
            return DescribeFileUrlsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUrlsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFileUrlsAsync(const DescribeFileUrlsRequest& request, const DescribeFileUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileUrlsRequest&;
    using Resp = DescribeFileUrlsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileUrls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFileUrlsOutcomeCallable EssbasicClient::DescribeFileUrlsCallable(const DescribeFileUrlsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileUrlsOutcome>>();
    DescribeFileUrlsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFileUrlsRequest&,
        DescribeFileUrlsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFlowOutcome EssbasicClient::DescribeFlow(const DescribeFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowResponse rsp = DescribeFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowOutcome(rsp);
        else
            return DescribeFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowRequest&;
    using Resp = DescribeFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFlowOutcomeCallable EssbasicClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowOutcome>>();
    DescribeFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFlowRequest&,
        DescribeFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFlowApproversOutcome EssbasicClient::DescribeFlowApprovers(const DescribeFlowApproversRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowApprovers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowApproversResponse rsp = DescribeFlowApproversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowApproversOutcome(rsp);
        else
            return DescribeFlowApproversOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowApproversOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFlowApproversAsync(const DescribeFlowApproversRequest& request, const DescribeFlowApproversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowApproversRequest&;
    using Resp = DescribeFlowApproversResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowApprovers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFlowApproversOutcomeCallable EssbasicClient::DescribeFlowApproversCallable(const DescribeFlowApproversRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowApproversOutcome>>();
    DescribeFlowApproversAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFlowApproversRequest&,
        DescribeFlowApproversOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeFlowFilesOutcome EssbasicClient::DescribeFlowFiles(const DescribeFlowFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowFilesResponse rsp = DescribeFlowFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowFilesOutcome(rsp);
        else
            return DescribeFlowFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeFlowFilesAsync(const DescribeFlowFilesRequest& request, const DescribeFlowFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowFilesRequest&;
    using Resp = DescribeFlowFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeFlowFilesOutcomeCallable EssbasicClient::DescribeFlowFilesCallable(const DescribeFlowFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowFilesOutcome>>();
    DescribeFlowFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeFlowFilesRequest&,
        DescribeFlowFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeSealsOutcome EssbasicClient::DescribeSeals(const DescribeSealsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSeals");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSealsResponse rsp = DescribeSealsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSealsOutcome(rsp);
        else
            return DescribeSealsOutcome(o.GetError());
    }
    else
    {
        return DescribeSealsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeSealsAsync(const DescribeSealsRequest& request, const DescribeSealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSealsRequest&;
    using Resp = DescribeSealsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSeals", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeSealsOutcomeCallable EssbasicClient::DescribeSealsCallable(const DescribeSealsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSealsOutcome>>();
    DescribeSealsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeSealsRequest&,
        DescribeSealsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeSubOrganizationsOutcome EssbasicClient::DescribeSubOrganizations(const DescribeSubOrganizationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubOrganizations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubOrganizationsResponse rsp = DescribeSubOrganizationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubOrganizationsOutcome(rsp);
        else
            return DescribeSubOrganizationsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubOrganizationsOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeSubOrganizationsAsync(const DescribeSubOrganizationsRequest& request, const DescribeSubOrganizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubOrganizationsRequest&;
    using Resp = DescribeSubOrganizationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubOrganizations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeSubOrganizationsOutcomeCallable EssbasicClient::DescribeSubOrganizationsCallable(const DescribeSubOrganizationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubOrganizationsOutcome>>();
    DescribeSubOrganizationsAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeSubOrganizationsRequest&,
        DescribeSubOrganizationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DescribeUsersOutcome EssbasicClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void EssbasicClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsersRequest&;
    using Resp = DescribeUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DescribeUsersOutcomeCallable EssbasicClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersOutcome>>();
    DescribeUsersAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DescribeUsersRequest&,
        DescribeUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::DestroyFlowFileOutcome EssbasicClient::DestroyFlowFile(const DestroyFlowFileRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyFlowFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyFlowFileResponse rsp = DestroyFlowFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyFlowFileOutcome(rsp);
        else
            return DestroyFlowFileOutcome(o.GetError());
    }
    else
    {
        return DestroyFlowFileOutcome(outcome.GetError());
    }
}

void EssbasicClient::DestroyFlowFileAsync(const DestroyFlowFileRequest& request, const DestroyFlowFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyFlowFileRequest&;
    using Resp = DestroyFlowFileResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyFlowFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::DestroyFlowFileOutcomeCallable EssbasicClient::DestroyFlowFileCallable(const DestroyFlowFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyFlowFileOutcome>>();
    DestroyFlowFileAsync(
    request,
    [prom](
        const EssbasicClient*,
        const DestroyFlowFileRequest&,
        DestroyFlowFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::GenerateOrganizationSealOutcome EssbasicClient::GenerateOrganizationSeal(const GenerateOrganizationSealRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateOrganizationSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateOrganizationSealResponse rsp = GenerateOrganizationSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateOrganizationSealOutcome(rsp);
        else
            return GenerateOrganizationSealOutcome(o.GetError());
    }
    else
    {
        return GenerateOrganizationSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::GenerateOrganizationSealAsync(const GenerateOrganizationSealRequest& request, const GenerateOrganizationSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateOrganizationSealRequest&;
    using Resp = GenerateOrganizationSealResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateOrganizationSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::GenerateOrganizationSealOutcomeCallable EssbasicClient::GenerateOrganizationSealCallable(const GenerateOrganizationSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateOrganizationSealOutcome>>();
    GenerateOrganizationSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const GenerateOrganizationSealRequest&,
        GenerateOrganizationSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::GenerateUserSealOutcome EssbasicClient::GenerateUserSeal(const GenerateUserSealRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateUserSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateUserSealResponse rsp = GenerateUserSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateUserSealOutcome(rsp);
        else
            return GenerateUserSealOutcome(o.GetError());
    }
    else
    {
        return GenerateUserSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::GenerateUserSealAsync(const GenerateUserSealRequest& request, const GenerateUserSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateUserSealRequest&;
    using Resp = GenerateUserSealResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateUserSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::GenerateUserSealOutcomeCallable EssbasicClient::GenerateUserSealCallable(const GenerateUserSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateUserSealOutcome>>();
    GenerateUserSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const GenerateUserSealRequest&,
        GenerateUserSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyOrganizationDefaultSealOutcome EssbasicClient::ModifyOrganizationDefaultSeal(const ModifyOrganizationDefaultSealRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrganizationDefaultSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrganizationDefaultSealResponse rsp = ModifyOrganizationDefaultSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrganizationDefaultSealOutcome(rsp);
        else
            return ModifyOrganizationDefaultSealOutcome(o.GetError());
    }
    else
    {
        return ModifyOrganizationDefaultSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyOrganizationDefaultSealAsync(const ModifyOrganizationDefaultSealRequest& request, const ModifyOrganizationDefaultSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOrganizationDefaultSealRequest&;
    using Resp = ModifyOrganizationDefaultSealResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOrganizationDefaultSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyOrganizationDefaultSealOutcomeCallable EssbasicClient::ModifyOrganizationDefaultSealCallable(const ModifyOrganizationDefaultSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOrganizationDefaultSealOutcome>>();
    ModifyOrganizationDefaultSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyOrganizationDefaultSealRequest&,
        ModifyOrganizationDefaultSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifySealOutcome EssbasicClient::ModifySeal(const ModifySealRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySealResponse rsp = ModifySealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySealOutcome(rsp);
        else
            return ModifySealOutcome(o.GetError());
    }
    else
    {
        return ModifySealOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifySealAsync(const ModifySealRequest& request, const ModifySealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySealRequest&;
    using Resp = ModifySealResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifySealOutcomeCallable EssbasicClient::ModifySealCallable(const ModifySealRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySealOutcome>>();
    ModifySealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifySealRequest&,
        ModifySealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifySubOrganizationInfoOutcome EssbasicClient::ModifySubOrganizationInfo(const ModifySubOrganizationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubOrganizationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubOrganizationInfoResponse rsp = ModifySubOrganizationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubOrganizationInfoOutcome(rsp);
        else
            return ModifySubOrganizationInfoOutcome(o.GetError());
    }
    else
    {
        return ModifySubOrganizationInfoOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifySubOrganizationInfoAsync(const ModifySubOrganizationInfoRequest& request, const ModifySubOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubOrganizationInfoRequest&;
    using Resp = ModifySubOrganizationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubOrganizationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifySubOrganizationInfoOutcomeCallable EssbasicClient::ModifySubOrganizationInfoCallable(const ModifySubOrganizationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubOrganizationInfoOutcome>>();
    ModifySubOrganizationInfoAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifySubOrganizationInfoRequest&,
        ModifySubOrganizationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyUserOutcome EssbasicClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyUserOutcomeCallable EssbasicClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::ModifyUserDefaultSealOutcome EssbasicClient::ModifyUserDefaultSeal(const ModifyUserDefaultSealRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserDefaultSeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserDefaultSealResponse rsp = ModifyUserDefaultSealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserDefaultSealOutcome(rsp);
        else
            return ModifyUserDefaultSealOutcome(o.GetError());
    }
    else
    {
        return ModifyUserDefaultSealOutcome(outcome.GetError());
    }
}

void EssbasicClient::ModifyUserDefaultSealAsync(const ModifyUserDefaultSealRequest& request, const ModifyUserDefaultSealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserDefaultSealRequest&;
    using Resp = ModifyUserDefaultSealResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserDefaultSeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::ModifyUserDefaultSealOutcomeCallable EssbasicClient::ModifyUserDefaultSealCallable(const ModifyUserDefaultSealRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserDefaultSealOutcome>>();
    ModifyUserDefaultSealAsync(
    request,
    [prom](
        const EssbasicClient*,
        const ModifyUserDefaultSealRequest&,
        ModifyUserDefaultSealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::RejectFlowOutcome EssbasicClient::RejectFlow(const RejectFlowRequest &request)
{
    auto outcome = MakeRequest(request, "RejectFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectFlowResponse rsp = RejectFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectFlowOutcome(rsp);
        else
            return RejectFlowOutcome(o.GetError());
    }
    else
    {
        return RejectFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::RejectFlowAsync(const RejectFlowRequest& request, const RejectFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RejectFlowRequest&;
    using Resp = RejectFlowResponse;

    DoRequestAsync<Req, Resp>(
        "RejectFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::RejectFlowOutcomeCallable EssbasicClient::RejectFlowCallable(const RejectFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectFlowOutcome>>();
    RejectFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const RejectFlowRequest&,
        RejectFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SendFlowOutcome EssbasicClient::SendFlow(const SendFlowRequest &request)
{
    auto outcome = MakeRequest(request, "SendFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendFlowResponse rsp = SendFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendFlowOutcome(rsp);
        else
            return SendFlowOutcome(o.GetError());
    }
    else
    {
        return SendFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::SendFlowAsync(const SendFlowRequest& request, const SendFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendFlowRequest&;
    using Resp = SendFlowResponse;

    DoRequestAsync<Req, Resp>(
        "SendFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SendFlowOutcomeCallable EssbasicClient::SendFlowCallable(const SendFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendFlowOutcome>>();
    SendFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SendFlowRequest&,
        SendFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SendFlowUrlOutcome EssbasicClient::SendFlowUrl(const SendFlowUrlRequest &request)
{
    auto outcome = MakeRequest(request, "SendFlowUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendFlowUrlResponse rsp = SendFlowUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendFlowUrlOutcome(rsp);
        else
            return SendFlowUrlOutcome(o.GetError());
    }
    else
    {
        return SendFlowUrlOutcome(outcome.GetError());
    }
}

void EssbasicClient::SendFlowUrlAsync(const SendFlowUrlRequest& request, const SendFlowUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendFlowUrlRequest&;
    using Resp = SendFlowUrlResponse;

    DoRequestAsync<Req, Resp>(
        "SendFlowUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SendFlowUrlOutcomeCallable EssbasicClient::SendFlowUrlCallable(const SendFlowUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendFlowUrlOutcome>>();
    SendFlowUrlAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SendFlowUrlRequest&,
        SendFlowUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SendSignInnerVerifyCodeOutcome EssbasicClient::SendSignInnerVerifyCode(const SendSignInnerVerifyCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendSignInnerVerifyCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendSignInnerVerifyCodeResponse rsp = SendSignInnerVerifyCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendSignInnerVerifyCodeOutcome(rsp);
        else
            return SendSignInnerVerifyCodeOutcome(o.GetError());
    }
    else
    {
        return SendSignInnerVerifyCodeOutcome(outcome.GetError());
    }
}

void EssbasicClient::SendSignInnerVerifyCodeAsync(const SendSignInnerVerifyCodeRequest& request, const SendSignInnerVerifyCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendSignInnerVerifyCodeRequest&;
    using Resp = SendSignInnerVerifyCodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendSignInnerVerifyCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SendSignInnerVerifyCodeOutcomeCallable EssbasicClient::SendSignInnerVerifyCodeCallable(const SendSignInnerVerifyCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendSignInnerVerifyCodeOutcome>>();
    SendSignInnerVerifyCodeAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SendSignInnerVerifyCodeRequest&,
        SendSignInnerVerifyCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::SignFlowOutcome EssbasicClient::SignFlow(const SignFlowRequest &request)
{
    auto outcome = MakeRequest(request, "SignFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SignFlowResponse rsp = SignFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SignFlowOutcome(rsp);
        else
            return SignFlowOutcome(o.GetError());
    }
    else
    {
        return SignFlowOutcome(outcome.GetError());
    }
}

void EssbasicClient::SignFlowAsync(const SignFlowRequest& request, const SignFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SignFlowRequest&;
    using Resp = SignFlowResponse;

    DoRequestAsync<Req, Resp>(
        "SignFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::SignFlowOutcomeCallable EssbasicClient::SignFlowCallable(const SignFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<SignFlowOutcome>>();
    SignFlowAsync(
    request,
    [prom](
        const EssbasicClient*,
        const SignFlowRequest&,
        SignFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::UploadFilesOutcome EssbasicClient::UploadFiles(const UploadFilesRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFilesResponse rsp = UploadFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFilesOutcome(rsp);
        else
            return UploadFilesOutcome(o.GetError());
    }
    else
    {
        return UploadFilesOutcome(outcome.GetError());
    }
}

void EssbasicClient::UploadFilesAsync(const UploadFilesRequest& request, const UploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFilesRequest&;
    using Resp = UploadFilesResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::UploadFilesOutcomeCallable EssbasicClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFilesOutcome>>();
    UploadFilesAsync(
    request,
    [prom](
        const EssbasicClient*,
        const UploadFilesRequest&,
        UploadFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::VerifySubOrganizationOutcome EssbasicClient::VerifySubOrganization(const VerifySubOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "VerifySubOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifySubOrganizationResponse rsp = VerifySubOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifySubOrganizationOutcome(rsp);
        else
            return VerifySubOrganizationOutcome(o.GetError());
    }
    else
    {
        return VerifySubOrganizationOutcome(outcome.GetError());
    }
}

void EssbasicClient::VerifySubOrganizationAsync(const VerifySubOrganizationRequest& request, const VerifySubOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifySubOrganizationRequest&;
    using Resp = VerifySubOrganizationResponse;

    DoRequestAsync<Req, Resp>(
        "VerifySubOrganization", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::VerifySubOrganizationOutcomeCallable EssbasicClient::VerifySubOrganizationCallable(const VerifySubOrganizationRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifySubOrganizationOutcome>>();
    VerifySubOrganizationAsync(
    request,
    [prom](
        const EssbasicClient*,
        const VerifySubOrganizationRequest&,
        VerifySubOrganizationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EssbasicClient::VerifyUserOutcome EssbasicClient::VerifyUser(const VerifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyUserResponse rsp = VerifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyUserOutcome(rsp);
        else
            return VerifyUserOutcome(o.GetError());
    }
    else
    {
        return VerifyUserOutcome(outcome.GetError());
    }
}

void EssbasicClient::VerifyUserAsync(const VerifyUserRequest& request, const VerifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyUserRequest&;
    using Resp = VerifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EssbasicClient::VerifyUserOutcomeCallable EssbasicClient::VerifyUserCallable(const VerifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyUserOutcome>>();
    VerifyUserAsync(
    request,
    [prom](
        const EssbasicClient*,
        const VerifyUserRequest&,
        VerifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

