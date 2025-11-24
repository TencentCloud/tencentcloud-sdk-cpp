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

#include <tencentcloud/faceid/v20180301/FaceidClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Faceid::V20180301;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-01";
    const string ENDPOINT = "faceid.tencentcloudapi.com";
}

FaceidClient::FaceidClient(const Credential &credential, const string &region) :
    FaceidClient(credential, region, ClientProfile())
{
}

FaceidClient::FaceidClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


FaceidClient::BankCard2EVerificationOutcome FaceidClient::BankCard2EVerification(const BankCard2EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCard2EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCard2EVerificationResponse rsp = BankCard2EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCard2EVerificationOutcome(rsp);
        else
            return BankCard2EVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCard2EVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCard2EVerificationAsync(const BankCard2EVerificationRequest& request, const BankCard2EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCard2EVerificationRequest&;
    using Resp = BankCard2EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCard2EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCard2EVerificationOutcomeCallable FaceidClient::BankCard2EVerificationCallable(const BankCard2EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCard2EVerificationOutcome>>();
    BankCard2EVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCard2EVerificationRequest&,
        BankCard2EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::BankCard4EVerificationOutcome FaceidClient::BankCard4EVerification(const BankCard4EVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCard4EVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCard4EVerificationResponse rsp = BankCard4EVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCard4EVerificationOutcome(rsp);
        else
            return BankCard4EVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCard4EVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCard4EVerificationAsync(const BankCard4EVerificationRequest& request, const BankCard4EVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCard4EVerificationRequest&;
    using Resp = BankCard4EVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCard4EVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCard4EVerificationOutcomeCallable FaceidClient::BankCard4EVerificationCallable(const BankCard4EVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCard4EVerificationOutcome>>();
    BankCard4EVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCard4EVerificationRequest&,
        BankCard4EVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::BankCardVerificationOutcome FaceidClient::BankCardVerification(const BankCardVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "BankCardVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BankCardVerificationResponse rsp = BankCardVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BankCardVerificationOutcome(rsp);
        else
            return BankCardVerificationOutcome(o.GetError());
    }
    else
    {
        return BankCardVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::BankCardVerificationAsync(const BankCardVerificationRequest& request, const BankCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BankCardVerificationRequest&;
    using Resp = BankCardVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "BankCardVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::BankCardVerificationOutcomeCallable FaceidClient::BankCardVerificationCallable(const BankCardVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<BankCardVerificationOutcome>>();
    BankCardVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const BankCardVerificationRequest&,
        BankCardVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckBankCardInformationOutcome FaceidClient::CheckBankCardInformation(const CheckBankCardInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBankCardInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBankCardInformationResponse rsp = CheckBankCardInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBankCardInformationOutcome(rsp);
        else
            return CheckBankCardInformationOutcome(o.GetError());
    }
    else
    {
        return CheckBankCardInformationOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckBankCardInformationAsync(const CheckBankCardInformationRequest& request, const CheckBankCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBankCardInformationRequest&;
    using Resp = CheckBankCardInformationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBankCardInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckBankCardInformationOutcomeCallable FaceidClient::CheckBankCardInformationCallable(const CheckBankCardInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBankCardInformationOutcome>>();
    CheckBankCardInformationAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckBankCardInformationRequest&,
        CheckBankCardInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckEidTokenStatusOutcome FaceidClient::CheckEidTokenStatus(const CheckEidTokenStatusRequest &request)
{
    auto outcome = MakeRequest(request, "CheckEidTokenStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckEidTokenStatusResponse rsp = CheckEidTokenStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckEidTokenStatusOutcome(rsp);
        else
            return CheckEidTokenStatusOutcome(o.GetError());
    }
    else
    {
        return CheckEidTokenStatusOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckEidTokenStatusAsync(const CheckEidTokenStatusRequest& request, const CheckEidTokenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckEidTokenStatusRequest&;
    using Resp = CheckEidTokenStatusResponse;

    DoRequestAsync<Req, Resp>(
        "CheckEidTokenStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckEidTokenStatusOutcomeCallable FaceidClient::CheckEidTokenStatusCallable(const CheckEidTokenStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckEidTokenStatusOutcome>>();
    CheckEidTokenStatusAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckEidTokenStatusRequest&,
        CheckEidTokenStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckIdCardInformationOutcome FaceidClient::CheckIdCardInformation(const CheckIdCardInformationRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIdCardInformation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIdCardInformationResponse rsp = CheckIdCardInformationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIdCardInformationOutcome(rsp);
        else
            return CheckIdCardInformationOutcome(o.GetError());
    }
    else
    {
        return CheckIdCardInformationOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckIdCardInformationAsync(const CheckIdCardInformationRequest& request, const CheckIdCardInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIdCardInformationRequest&;
    using Resp = CheckIdCardInformationResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIdCardInformation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckIdCardInformationOutcomeCallable FaceidClient::CheckIdCardInformationCallable(const CheckIdCardInformationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIdCardInformationOutcome>>();
    CheckIdCardInformationAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckIdCardInformationRequest&,
        CheckIdCardInformationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckIdNameDateOutcome FaceidClient::CheckIdNameDate(const CheckIdNameDateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckIdNameDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckIdNameDateResponse rsp = CheckIdNameDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckIdNameDateOutcome(rsp);
        else
            return CheckIdNameDateOutcome(o.GetError());
    }
    else
    {
        return CheckIdNameDateOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckIdNameDateAsync(const CheckIdNameDateRequest& request, const CheckIdNameDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckIdNameDateRequest&;
    using Resp = CheckIdNameDateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckIdNameDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckIdNameDateOutcomeCallable FaceidClient::CheckIdNameDateCallable(const CheckIdNameDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckIdNameDateOutcome>>();
    CheckIdNameDateAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckIdNameDateRequest&,
        CheckIdNameDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::CheckPhoneAndNameOutcome FaceidClient::CheckPhoneAndName(const CheckPhoneAndNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckPhoneAndName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckPhoneAndNameResponse rsp = CheckPhoneAndNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckPhoneAndNameOutcome(rsp);
        else
            return CheckPhoneAndNameOutcome(o.GetError());
    }
    else
    {
        return CheckPhoneAndNameOutcome(outcome.GetError());
    }
}

void FaceidClient::CheckPhoneAndNameAsync(const CheckPhoneAndNameRequest& request, const CheckPhoneAndNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckPhoneAndNameRequest&;
    using Resp = CheckPhoneAndNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckPhoneAndName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::CheckPhoneAndNameOutcomeCallable FaceidClient::CheckPhoneAndNameCallable(const CheckPhoneAndNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckPhoneAndNameOutcome>>();
    CheckPhoneAndNameAsync(
    request,
    [prom](
        const FaceidClient*,
        const CheckPhoneAndNameRequest&,
        CheckPhoneAndNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::DetectAIFakeFacesOutcome FaceidClient::DetectAIFakeFaces(const DetectAIFakeFacesRequest &request)
{
    auto outcome = MakeRequest(request, "DetectAIFakeFaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectAIFakeFacesResponse rsp = DetectAIFakeFacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectAIFakeFacesOutcome(rsp);
        else
            return DetectAIFakeFacesOutcome(o.GetError());
    }
    else
    {
        return DetectAIFakeFacesOutcome(outcome.GetError());
    }
}

void FaceidClient::DetectAIFakeFacesAsync(const DetectAIFakeFacesRequest& request, const DetectAIFakeFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectAIFakeFacesRequest&;
    using Resp = DetectAIFakeFacesResponse;

    DoRequestAsync<Req, Resp>(
        "DetectAIFakeFaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::DetectAIFakeFacesOutcomeCallable FaceidClient::DetectAIFakeFacesCallable(const DetectAIFakeFacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectAIFakeFacesOutcome>>();
    DetectAIFakeFacesAsync(
    request,
    [prom](
        const FaceidClient*,
        const DetectAIFakeFacesRequest&,
        DetectAIFakeFacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::DetectAuthOutcome FaceidClient::DetectAuth(const DetectAuthRequest &request)
{
    auto outcome = MakeRequest(request, "DetectAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectAuthResponse rsp = DetectAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectAuthOutcome(rsp);
        else
            return DetectAuthOutcome(o.GetError());
    }
    else
    {
        return DetectAuthOutcome(outcome.GetError());
    }
}

void FaceidClient::DetectAuthAsync(const DetectAuthRequest& request, const DetectAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetectAuthRequest&;
    using Resp = DetectAuthResponse;

    DoRequestAsync<Req, Resp>(
        "DetectAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::DetectAuthOutcomeCallable FaceidClient::DetectAuthCallable(const DetectAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetectAuthOutcome>>();
    DetectAuthAsync(
    request,
    [prom](
        const FaceidClient*,
        const DetectAuthRequest&,
        DetectAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::EncryptedPhoneVerificationOutcome FaceidClient::EncryptedPhoneVerification(const EncryptedPhoneVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "EncryptedPhoneVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EncryptedPhoneVerificationResponse rsp = EncryptedPhoneVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EncryptedPhoneVerificationOutcome(rsp);
        else
            return EncryptedPhoneVerificationOutcome(o.GetError());
    }
    else
    {
        return EncryptedPhoneVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::EncryptedPhoneVerificationAsync(const EncryptedPhoneVerificationRequest& request, const EncryptedPhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EncryptedPhoneVerificationRequest&;
    using Resp = EncryptedPhoneVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "EncryptedPhoneVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::EncryptedPhoneVerificationOutcomeCallable FaceidClient::EncryptedPhoneVerificationCallable(const EncryptedPhoneVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<EncryptedPhoneVerificationOutcome>>();
    EncryptedPhoneVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const EncryptedPhoneVerificationRequest&,
        EncryptedPhoneVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetActionSequenceOutcome FaceidClient::GetActionSequence(const GetActionSequenceRequest &request)
{
    auto outcome = MakeRequest(request, "GetActionSequence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetActionSequenceResponse rsp = GetActionSequenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetActionSequenceOutcome(rsp);
        else
            return GetActionSequenceOutcome(o.GetError());
    }
    else
    {
        return GetActionSequenceOutcome(outcome.GetError());
    }
}

void FaceidClient::GetActionSequenceAsync(const GetActionSequenceRequest& request, const GetActionSequenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetActionSequenceRequest&;
    using Resp = GetActionSequenceResponse;

    DoRequestAsync<Req, Resp>(
        "GetActionSequence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetActionSequenceOutcomeCallable FaceidClient::GetActionSequenceCallable(const GetActionSequenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetActionSequenceOutcome>>();
    GetActionSequenceAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetActionSequenceRequest&,
        GetActionSequenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetDetectInfoOutcome FaceidClient::GetDetectInfo(const GetDetectInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetDetectInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDetectInfoResponse rsp = GetDetectInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDetectInfoOutcome(rsp);
        else
            return GetDetectInfoOutcome(o.GetError());
    }
    else
    {
        return GetDetectInfoOutcome(outcome.GetError());
    }
}

void FaceidClient::GetDetectInfoAsync(const GetDetectInfoRequest& request, const GetDetectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDetectInfoRequest&;
    using Resp = GetDetectInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetDetectInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetDetectInfoOutcomeCallable FaceidClient::GetDetectInfoCallable(const GetDetectInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDetectInfoOutcome>>();
    GetDetectInfoAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetDetectInfoRequest&,
        GetDetectInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetDetectInfoEnhancedOutcome FaceidClient::GetDetectInfoEnhanced(const GetDetectInfoEnhancedRequest &request)
{
    auto outcome = MakeRequest(request, "GetDetectInfoEnhanced");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDetectInfoEnhancedResponse rsp = GetDetectInfoEnhancedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDetectInfoEnhancedOutcome(rsp);
        else
            return GetDetectInfoEnhancedOutcome(o.GetError());
    }
    else
    {
        return GetDetectInfoEnhancedOutcome(outcome.GetError());
    }
}

void FaceidClient::GetDetectInfoEnhancedAsync(const GetDetectInfoEnhancedRequest& request, const GetDetectInfoEnhancedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDetectInfoEnhancedRequest&;
    using Resp = GetDetectInfoEnhancedResponse;

    DoRequestAsync<Req, Resp>(
        "GetDetectInfoEnhanced", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetDetectInfoEnhancedOutcomeCallable FaceidClient::GetDetectInfoEnhancedCallable(const GetDetectInfoEnhancedRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDetectInfoEnhancedOutcome>>();
    GetDetectInfoEnhancedAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetDetectInfoEnhancedRequest&,
        GetDetectInfoEnhancedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetEidResultOutcome FaceidClient::GetEidResult(const GetEidResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetEidResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEidResultResponse rsp = GetEidResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEidResultOutcome(rsp);
        else
            return GetEidResultOutcome(o.GetError());
    }
    else
    {
        return GetEidResultOutcome(outcome.GetError());
    }
}

void FaceidClient::GetEidResultAsync(const GetEidResultRequest& request, const GetEidResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEidResultRequest&;
    using Resp = GetEidResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetEidResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetEidResultOutcomeCallable FaceidClient::GetEidResultCallable(const GetEidResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEidResultOutcome>>();
    GetEidResultAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetEidResultRequest&,
        GetEidResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetEidTokenOutcome FaceidClient::GetEidToken(const GetEidTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetEidToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEidTokenResponse rsp = GetEidTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEidTokenOutcome(rsp);
        else
            return GetEidTokenOutcome(o.GetError());
    }
    else
    {
        return GetEidTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::GetEidTokenAsync(const GetEidTokenRequest& request, const GetEidTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEidTokenRequest&;
    using Resp = GetEidTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetEidToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetEidTokenOutcomeCallable FaceidClient::GetEidTokenCallable(const GetEidTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEidTokenOutcome>>();
    GetEidTokenAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetEidTokenRequest&,
        GetEidTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceIdResultOutcome FaceidClient::GetFaceIdResult(const GetFaceIdResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceIdResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceIdResultResponse rsp = GetFaceIdResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceIdResultOutcome(rsp);
        else
            return GetFaceIdResultOutcome(o.GetError());
    }
    else
    {
        return GetFaceIdResultOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceIdResultAsync(const GetFaceIdResultRequest& request, const GetFaceIdResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceIdResultRequest&;
    using Resp = GetFaceIdResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceIdResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceIdResultOutcomeCallable FaceidClient::GetFaceIdResultCallable(const GetFaceIdResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceIdResultOutcome>>();
    GetFaceIdResultAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceIdResultRequest&,
        GetFaceIdResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceIdRiskInfoOutcome FaceidClient::GetFaceIdRiskInfo(const GetFaceIdRiskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceIdRiskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceIdRiskInfoResponse rsp = GetFaceIdRiskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceIdRiskInfoOutcome(rsp);
        else
            return GetFaceIdRiskInfoOutcome(o.GetError());
    }
    else
    {
        return GetFaceIdRiskInfoOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceIdRiskInfoAsync(const GetFaceIdRiskInfoRequest& request, const GetFaceIdRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceIdRiskInfoRequest&;
    using Resp = GetFaceIdRiskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceIdRiskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceIdRiskInfoOutcomeCallable FaceidClient::GetFaceIdRiskInfoCallable(const GetFaceIdRiskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceIdRiskInfoOutcome>>();
    GetFaceIdRiskInfoAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceIdRiskInfoRequest&,
        GetFaceIdRiskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceIdTokenOutcome FaceidClient::GetFaceIdToken(const GetFaceIdTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceIdToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceIdTokenResponse rsp = GetFaceIdTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceIdTokenOutcome(rsp);
        else
            return GetFaceIdTokenOutcome(o.GetError());
    }
    else
    {
        return GetFaceIdTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceIdTokenAsync(const GetFaceIdTokenRequest& request, const GetFaceIdTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceIdTokenRequest&;
    using Resp = GetFaceIdTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceIdToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceIdTokenOutcomeCallable FaceidClient::GetFaceIdTokenCallable(const GetFaceIdTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceIdTokenOutcome>>();
    GetFaceIdTokenAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceIdTokenRequest&,
        GetFaceIdTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetFaceidRiskInfoTokenOutcome FaceidClient::GetFaceidRiskInfoToken(const GetFaceidRiskInfoTokenRequest &request)
{
    auto outcome = MakeRequest(request, "GetFaceidRiskInfoToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFaceidRiskInfoTokenResponse rsp = GetFaceidRiskInfoTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFaceidRiskInfoTokenOutcome(rsp);
        else
            return GetFaceidRiskInfoTokenOutcome(o.GetError());
    }
    else
    {
        return GetFaceidRiskInfoTokenOutcome(outcome.GetError());
    }
}

void FaceidClient::GetFaceidRiskInfoTokenAsync(const GetFaceidRiskInfoTokenRequest& request, const GetFaceidRiskInfoTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFaceidRiskInfoTokenRequest&;
    using Resp = GetFaceidRiskInfoTokenResponse;

    DoRequestAsync<Req, Resp>(
        "GetFaceidRiskInfoToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetFaceidRiskInfoTokenOutcomeCallable FaceidClient::GetFaceidRiskInfoTokenCallable(const GetFaceidRiskInfoTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFaceidRiskInfoTokenOutcome>>();
    GetFaceidRiskInfoTokenAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetFaceidRiskInfoTokenRequest&,
        GetFaceidRiskInfoTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetLiveCodeOutcome FaceidClient::GetLiveCode(const GetLiveCodeRequest &request)
{
    auto outcome = MakeRequest(request, "GetLiveCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLiveCodeResponse rsp = GetLiveCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLiveCodeOutcome(rsp);
        else
            return GetLiveCodeOutcome(o.GetError());
    }
    else
    {
        return GetLiveCodeOutcome(outcome.GetError());
    }
}

void FaceidClient::GetLiveCodeAsync(const GetLiveCodeRequest& request, const GetLiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLiveCodeRequest&;
    using Resp = GetLiveCodeResponse;

    DoRequestAsync<Req, Resp>(
        "GetLiveCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetLiveCodeOutcomeCallable FaceidClient::GetLiveCodeCallable(const GetLiveCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLiveCodeOutcome>>();
    GetLiveCodeAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetLiveCodeRequest&,
        GetLiveCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::GetWeChatBillDetailsOutcome FaceidClient::GetWeChatBillDetails(const GetWeChatBillDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "GetWeChatBillDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWeChatBillDetailsResponse rsp = GetWeChatBillDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWeChatBillDetailsOutcome(rsp);
        else
            return GetWeChatBillDetailsOutcome(o.GetError());
    }
    else
    {
        return GetWeChatBillDetailsOutcome(outcome.GetError());
    }
}

void FaceidClient::GetWeChatBillDetailsAsync(const GetWeChatBillDetailsRequest& request, const GetWeChatBillDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWeChatBillDetailsRequest&;
    using Resp = GetWeChatBillDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "GetWeChatBillDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::GetWeChatBillDetailsOutcomeCallable FaceidClient::GetWeChatBillDetailsCallable(const GetWeChatBillDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWeChatBillDetailsOutcome>>();
    GetWeChatBillDetailsAsync(
    request,
    [prom](
        const FaceidClient*,
        const GetWeChatBillDetailsRequest&,
        GetWeChatBillDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::IdCardOCRVerificationOutcome FaceidClient::IdCardOCRVerification(const IdCardOCRVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "IdCardOCRVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IdCardOCRVerificationResponse rsp = IdCardOCRVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IdCardOCRVerificationOutcome(rsp);
        else
            return IdCardOCRVerificationOutcome(o.GetError());
    }
    else
    {
        return IdCardOCRVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::IdCardOCRVerificationAsync(const IdCardOCRVerificationRequest& request, const IdCardOCRVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IdCardOCRVerificationRequest&;
    using Resp = IdCardOCRVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "IdCardOCRVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::IdCardOCRVerificationOutcomeCallable FaceidClient::IdCardOCRVerificationCallable(const IdCardOCRVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<IdCardOCRVerificationOutcome>>();
    IdCardOCRVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const IdCardOCRVerificationRequest&,
        IdCardOCRVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::IdCardVerificationOutcome FaceidClient::IdCardVerification(const IdCardVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "IdCardVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IdCardVerificationResponse rsp = IdCardVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IdCardVerificationOutcome(rsp);
        else
            return IdCardVerificationOutcome(o.GetError());
    }
    else
    {
        return IdCardVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::IdCardVerificationAsync(const IdCardVerificationRequest& request, const IdCardVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IdCardVerificationRequest&;
    using Resp = IdCardVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "IdCardVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::IdCardVerificationOutcomeCallable FaceidClient::IdCardVerificationCallable(const IdCardVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<IdCardVerificationOutcome>>();
    IdCardVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const IdCardVerificationRequest&,
        IdCardVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::ImageRecognitionOutcome FaceidClient::ImageRecognition(const ImageRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "ImageRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageRecognitionResponse rsp = ImageRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageRecognitionOutcome(rsp);
        else
            return ImageRecognitionOutcome(o.GetError());
    }
    else
    {
        return ImageRecognitionOutcome(outcome.GetError());
    }
}

void FaceidClient::ImageRecognitionAsync(const ImageRecognitionRequest& request, const ImageRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageRecognitionRequest&;
    using Resp = ImageRecognitionResponse;

    DoRequestAsync<Req, Resp>(
        "ImageRecognition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ImageRecognitionOutcomeCallable FaceidClient::ImageRecognitionCallable(const ImageRecognitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImageRecognitionOutcome>>();
    ImageRecognitionAsync(
    request,
    [prom](
        const FaceidClient*,
        const ImageRecognitionRequest&,
        ImageRecognitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::ImageRecognitionV2Outcome FaceidClient::ImageRecognitionV2(const ImageRecognitionV2Request &request)
{
    auto outcome = MakeRequest(request, "ImageRecognitionV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImageRecognitionV2Response rsp = ImageRecognitionV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImageRecognitionV2Outcome(rsp);
        else
            return ImageRecognitionV2Outcome(o.GetError());
    }
    else
    {
        return ImageRecognitionV2Outcome(outcome.GetError());
    }
}

void FaceidClient::ImageRecognitionV2Async(const ImageRecognitionV2Request& request, const ImageRecognitionV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImageRecognitionV2Request&;
    using Resp = ImageRecognitionV2Response;

    DoRequestAsync<Req, Resp>(
        "ImageRecognitionV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ImageRecognitionV2OutcomeCallable FaceidClient::ImageRecognitionV2Callable(const ImageRecognitionV2Request &request)
{
    const auto prom = std::make_shared<std::promise<ImageRecognitionV2Outcome>>();
    ImageRecognitionV2Async(
    request,
    [prom](
        const FaceidClient*,
        const ImageRecognitionV2Request&,
        ImageRecognitionV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::LivenessCompareOutcome FaceidClient::LivenessCompare(const LivenessCompareRequest &request)
{
    auto outcome = MakeRequest(request, "LivenessCompare");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LivenessCompareResponse rsp = LivenessCompareResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LivenessCompareOutcome(rsp);
        else
            return LivenessCompareOutcome(o.GetError());
    }
    else
    {
        return LivenessCompareOutcome(outcome.GetError());
    }
}

void FaceidClient::LivenessCompareAsync(const LivenessCompareRequest& request, const LivenessCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LivenessCompareRequest&;
    using Resp = LivenessCompareResponse;

    DoRequestAsync<Req, Resp>(
        "LivenessCompare", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::LivenessCompareOutcomeCallable FaceidClient::LivenessCompareCallable(const LivenessCompareRequest &request)
{
    const auto prom = std::make_shared<std::promise<LivenessCompareOutcome>>();
    LivenessCompareAsync(
    request,
    [prom](
        const FaceidClient*,
        const LivenessCompareRequest&,
        LivenessCompareOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::LivenessRecognitionOutcome FaceidClient::LivenessRecognition(const LivenessRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "LivenessRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LivenessRecognitionResponse rsp = LivenessRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LivenessRecognitionOutcome(rsp);
        else
            return LivenessRecognitionOutcome(o.GetError());
    }
    else
    {
        return LivenessRecognitionOutcome(outcome.GetError());
    }
}

void FaceidClient::LivenessRecognitionAsync(const LivenessRecognitionRequest& request, const LivenessRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LivenessRecognitionRequest&;
    using Resp = LivenessRecognitionResponse;

    DoRequestAsync<Req, Resp>(
        "LivenessRecognition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::LivenessRecognitionOutcomeCallable FaceidClient::LivenessRecognitionCallable(const LivenessRecognitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<LivenessRecognitionOutcome>>();
    LivenessRecognitionAsync(
    request,
    [prom](
        const FaceidClient*,
        const LivenessRecognitionRequest&,
        LivenessRecognitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::MinorsVerificationOutcome FaceidClient::MinorsVerification(const MinorsVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "MinorsVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MinorsVerificationResponse rsp = MinorsVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MinorsVerificationOutcome(rsp);
        else
            return MinorsVerificationOutcome(o.GetError());
    }
    else
    {
        return MinorsVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::MinorsVerificationAsync(const MinorsVerificationRequest& request, const MinorsVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MinorsVerificationRequest&;
    using Resp = MinorsVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "MinorsVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::MinorsVerificationOutcomeCallable FaceidClient::MinorsVerificationCallable(const MinorsVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<MinorsVerificationOutcome>>();
    MinorsVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const MinorsVerificationRequest&,
        MinorsVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::MobileNetworkTimeVerificationOutcome FaceidClient::MobileNetworkTimeVerification(const MobileNetworkTimeVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "MobileNetworkTimeVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MobileNetworkTimeVerificationResponse rsp = MobileNetworkTimeVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MobileNetworkTimeVerificationOutcome(rsp);
        else
            return MobileNetworkTimeVerificationOutcome(o.GetError());
    }
    else
    {
        return MobileNetworkTimeVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::MobileNetworkTimeVerificationAsync(const MobileNetworkTimeVerificationRequest& request, const MobileNetworkTimeVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MobileNetworkTimeVerificationRequest&;
    using Resp = MobileNetworkTimeVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "MobileNetworkTimeVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::MobileNetworkTimeVerificationOutcomeCallable FaceidClient::MobileNetworkTimeVerificationCallable(const MobileNetworkTimeVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<MobileNetworkTimeVerificationOutcome>>();
    MobileNetworkTimeVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const MobileNetworkTimeVerificationRequest&,
        MobileNetworkTimeVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::MobileStatusOutcome FaceidClient::MobileStatus(const MobileStatusRequest &request)
{
    auto outcome = MakeRequest(request, "MobileStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MobileStatusResponse rsp = MobileStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MobileStatusOutcome(rsp);
        else
            return MobileStatusOutcome(o.GetError());
    }
    else
    {
        return MobileStatusOutcome(outcome.GetError());
    }
}

void FaceidClient::MobileStatusAsync(const MobileStatusRequest& request, const MobileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MobileStatusRequest&;
    using Resp = MobileStatusResponse;

    DoRequestAsync<Req, Resp>(
        "MobileStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::MobileStatusOutcomeCallable FaceidClient::MobileStatusCallable(const MobileStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<MobileStatusOutcome>>();
    MobileStatusAsync(
    request,
    [prom](
        const FaceidClient*,
        const MobileStatusRequest&,
        MobileStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::ParseNfcDataOutcome FaceidClient::ParseNfcData(const ParseNfcDataRequest &request)
{
    auto outcome = MakeRequest(request, "ParseNfcData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseNfcDataResponse rsp = ParseNfcDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseNfcDataOutcome(rsp);
        else
            return ParseNfcDataOutcome(o.GetError());
    }
    else
    {
        return ParseNfcDataOutcome(outcome.GetError());
    }
}

void FaceidClient::ParseNfcDataAsync(const ParseNfcDataRequest& request, const ParseNfcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ParseNfcDataRequest&;
    using Resp = ParseNfcDataResponse;

    DoRequestAsync<Req, Resp>(
        "ParseNfcData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::ParseNfcDataOutcomeCallable FaceidClient::ParseNfcDataCallable(const ParseNfcDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseNfcDataOutcome>>();
    ParseNfcDataAsync(
    request,
    [prom](
        const FaceidClient*,
        const ParseNfcDataRequest&,
        ParseNfcDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::PhoneVerificationOutcome FaceidClient::PhoneVerification(const PhoneVerificationRequest &request)
{
    auto outcome = MakeRequest(request, "PhoneVerification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PhoneVerificationResponse rsp = PhoneVerificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PhoneVerificationOutcome(rsp);
        else
            return PhoneVerificationOutcome(o.GetError());
    }
    else
    {
        return PhoneVerificationOutcome(outcome.GetError());
    }
}

void FaceidClient::PhoneVerificationAsync(const PhoneVerificationRequest& request, const PhoneVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PhoneVerificationRequest&;
    using Resp = PhoneVerificationResponse;

    DoRequestAsync<Req, Resp>(
        "PhoneVerification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::PhoneVerificationOutcomeCallable FaceidClient::PhoneVerificationCallable(const PhoneVerificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<PhoneVerificationOutcome>>();
    PhoneVerificationAsync(
    request,
    [prom](
        const FaceidClient*,
        const PhoneVerificationRequest&,
        PhoneVerificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::PhoneVerificationCMCCOutcome FaceidClient::PhoneVerificationCMCC(const PhoneVerificationCMCCRequest &request)
{
    auto outcome = MakeRequest(request, "PhoneVerificationCMCC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PhoneVerificationCMCCResponse rsp = PhoneVerificationCMCCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PhoneVerificationCMCCOutcome(rsp);
        else
            return PhoneVerificationCMCCOutcome(o.GetError());
    }
    else
    {
        return PhoneVerificationCMCCOutcome(outcome.GetError());
    }
}

void FaceidClient::PhoneVerificationCMCCAsync(const PhoneVerificationCMCCRequest& request, const PhoneVerificationCMCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PhoneVerificationCMCCRequest&;
    using Resp = PhoneVerificationCMCCResponse;

    DoRequestAsync<Req, Resp>(
        "PhoneVerificationCMCC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::PhoneVerificationCMCCOutcomeCallable FaceidClient::PhoneVerificationCMCCCallable(const PhoneVerificationCMCCRequest &request)
{
    const auto prom = std::make_shared<std::promise<PhoneVerificationCMCCOutcome>>();
    PhoneVerificationCMCCAsync(
    request,
    [prom](
        const FaceidClient*,
        const PhoneVerificationCMCCRequest&,
        PhoneVerificationCMCCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::PhoneVerificationCTCCOutcome FaceidClient::PhoneVerificationCTCC(const PhoneVerificationCTCCRequest &request)
{
    auto outcome = MakeRequest(request, "PhoneVerificationCTCC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PhoneVerificationCTCCResponse rsp = PhoneVerificationCTCCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PhoneVerificationCTCCOutcome(rsp);
        else
            return PhoneVerificationCTCCOutcome(o.GetError());
    }
    else
    {
        return PhoneVerificationCTCCOutcome(outcome.GetError());
    }
}

void FaceidClient::PhoneVerificationCTCCAsync(const PhoneVerificationCTCCRequest& request, const PhoneVerificationCTCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PhoneVerificationCTCCRequest&;
    using Resp = PhoneVerificationCTCCResponse;

    DoRequestAsync<Req, Resp>(
        "PhoneVerificationCTCC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::PhoneVerificationCTCCOutcomeCallable FaceidClient::PhoneVerificationCTCCCallable(const PhoneVerificationCTCCRequest &request)
{
    const auto prom = std::make_shared<std::promise<PhoneVerificationCTCCOutcome>>();
    PhoneVerificationCTCCAsync(
    request,
    [prom](
        const FaceidClient*,
        const PhoneVerificationCTCCRequest&,
        PhoneVerificationCTCCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

FaceidClient::PhoneVerificationCUCCOutcome FaceidClient::PhoneVerificationCUCC(const PhoneVerificationCUCCRequest &request)
{
    auto outcome = MakeRequest(request, "PhoneVerificationCUCC");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PhoneVerificationCUCCResponse rsp = PhoneVerificationCUCCResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PhoneVerificationCUCCOutcome(rsp);
        else
            return PhoneVerificationCUCCOutcome(o.GetError());
    }
    else
    {
        return PhoneVerificationCUCCOutcome(outcome.GetError());
    }
}

void FaceidClient::PhoneVerificationCUCCAsync(const PhoneVerificationCUCCRequest& request, const PhoneVerificationCUCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PhoneVerificationCUCCRequest&;
    using Resp = PhoneVerificationCUCCResponse;

    DoRequestAsync<Req, Resp>(
        "PhoneVerificationCUCC", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

FaceidClient::PhoneVerificationCUCCOutcomeCallable FaceidClient::PhoneVerificationCUCCCallable(const PhoneVerificationCUCCRequest &request)
{
    const auto prom = std::make_shared<std::promise<PhoneVerificationCUCCOutcome>>();
    PhoneVerificationCUCCAsync(
    request,
    [prom](
        const FaceidClient*,
        const PhoneVerificationCUCCRequest&,
        PhoneVerificationCUCCOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

