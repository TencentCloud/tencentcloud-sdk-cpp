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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCard2EVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::BankCard2EVerificationOutcomeCallable FaceidClient::BankCard2EVerificationCallable(const BankCard2EVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCard2EVerificationOutcome()>>(
        [this, request]()
        {
            return this->BankCard2EVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCard4EVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::BankCard4EVerificationOutcomeCallable FaceidClient::BankCard4EVerificationCallable(const BankCard4EVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCard4EVerificationOutcome()>>(
        [this, request]()
        {
            return this->BankCard4EVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BankCardVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::BankCardVerificationOutcomeCallable FaceidClient::BankCardVerificationCallable(const BankCardVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BankCardVerificationOutcome()>>(
        [this, request]()
        {
            return this->BankCardVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBankCardInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CheckBankCardInformationOutcomeCallable FaceidClient::CheckBankCardInformationCallable(const CheckBankCardInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBankCardInformationOutcome()>>(
        [this, request]()
        {
            return this->CheckBankCardInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckEidTokenStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CheckEidTokenStatusOutcomeCallable FaceidClient::CheckEidTokenStatusCallable(const CheckEidTokenStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckEidTokenStatusOutcome()>>(
        [this, request]()
        {
            return this->CheckEidTokenStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckIdCardInformation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CheckIdCardInformationOutcomeCallable FaceidClient::CheckIdCardInformationCallable(const CheckIdCardInformationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckIdCardInformationOutcome()>>(
        [this, request]()
        {
            return this->CheckIdCardInformation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckIdNameDate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CheckIdNameDateOutcomeCallable FaceidClient::CheckIdNameDateCallable(const CheckIdNameDateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckIdNameDateOutcome()>>(
        [this, request]()
        {
            return this->CheckIdNameDate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckPhoneAndName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::CheckPhoneAndNameOutcomeCallable FaceidClient::CheckPhoneAndNameCallable(const CheckPhoneAndNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckPhoneAndNameOutcome()>>(
        [this, request]()
        {
            return this->CheckPhoneAndName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectAIFakeFaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::DetectAIFakeFacesOutcomeCallable FaceidClient::DetectAIFakeFacesCallable(const DetectAIFakeFacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectAIFakeFacesOutcome()>>(
        [this, request]()
        {
            return this->DetectAIFakeFaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::DetectAuthOutcomeCallable FaceidClient::DetectAuthCallable(const DetectAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectAuthOutcome()>>(
        [this, request]()
        {
            return this->DetectAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EncryptedPhoneVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::EncryptedPhoneVerificationOutcomeCallable FaceidClient::EncryptedPhoneVerificationCallable(const EncryptedPhoneVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EncryptedPhoneVerificationOutcome()>>(
        [this, request]()
        {
            return this->EncryptedPhoneVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetActionSequence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetActionSequenceOutcomeCallable FaceidClient::GetActionSequenceCallable(const GetActionSequenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetActionSequenceOutcome()>>(
        [this, request]()
        {
            return this->GetActionSequence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDetectInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetDetectInfoOutcomeCallable FaceidClient::GetDetectInfoCallable(const GetDetectInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDetectInfoOutcome()>>(
        [this, request]()
        {
            return this->GetDetectInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDetectInfoEnhanced(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetDetectInfoEnhancedOutcomeCallable FaceidClient::GetDetectInfoEnhancedCallable(const GetDetectInfoEnhancedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDetectInfoEnhancedOutcome()>>(
        [this, request]()
        {
            return this->GetDetectInfoEnhanced(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEidResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetEidResultOutcomeCallable FaceidClient::GetEidResultCallable(const GetEidResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEidResultOutcome()>>(
        [this, request]()
        {
            return this->GetEidResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEidToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetEidTokenOutcomeCallable FaceidClient::GetEidTokenCallable(const GetEidTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEidTokenOutcome()>>(
        [this, request]()
        {
            return this->GetEidToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFaceIdResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetFaceIdResultOutcomeCallable FaceidClient::GetFaceIdResultCallable(const GetFaceIdResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFaceIdResultOutcome()>>(
        [this, request]()
        {
            return this->GetFaceIdResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFaceIdRiskInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetFaceIdRiskInfoOutcomeCallable FaceidClient::GetFaceIdRiskInfoCallable(const GetFaceIdRiskInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFaceIdRiskInfoOutcome()>>(
        [this, request]()
        {
            return this->GetFaceIdRiskInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFaceIdToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetFaceIdTokenOutcomeCallable FaceidClient::GetFaceIdTokenCallable(const GetFaceIdTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFaceIdTokenOutcome()>>(
        [this, request]()
        {
            return this->GetFaceIdToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetFaceidRiskInfoToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetFaceidRiskInfoTokenOutcomeCallable FaceidClient::GetFaceidRiskInfoTokenCallable(const GetFaceidRiskInfoTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetFaceidRiskInfoTokenOutcome()>>(
        [this, request]()
        {
            return this->GetFaceidRiskInfoToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetLiveCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetLiveCodeOutcomeCallable FaceidClient::GetLiveCodeCallable(const GetLiveCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetLiveCodeOutcome()>>(
        [this, request]()
        {
            return this->GetLiveCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWeChatBillDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::GetWeChatBillDetailsOutcomeCallable FaceidClient::GetWeChatBillDetailsCallable(const GetWeChatBillDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWeChatBillDetailsOutcome()>>(
        [this, request]()
        {
            return this->GetWeChatBillDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IdCardOCRVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::IdCardOCRVerificationOutcomeCallable FaceidClient::IdCardOCRVerificationCallable(const IdCardOCRVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IdCardOCRVerificationOutcome()>>(
        [this, request]()
        {
            return this->IdCardOCRVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IdCardVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::IdCardVerificationOutcomeCallable FaceidClient::IdCardVerificationCallable(const IdCardVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IdCardVerificationOutcome()>>(
        [this, request]()
        {
            return this->IdCardVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageRecognition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ImageRecognitionOutcomeCallable FaceidClient::ImageRecognitionCallable(const ImageRecognitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImageRecognitionOutcome()>>(
        [this, request]()
        {
            return this->ImageRecognition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImageRecognitionV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ImageRecognitionV2OutcomeCallable FaceidClient::ImageRecognitionV2Callable(const ImageRecognitionV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<ImageRecognitionV2Outcome()>>(
        [this, request]()
        {
            return this->ImageRecognitionV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

FaceidClient::LivenessOutcome FaceidClient::Liveness(const LivenessRequest &request)
{
    auto outcome = MakeRequest(request, "Liveness");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LivenessResponse rsp = LivenessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LivenessOutcome(rsp);
        else
            return LivenessOutcome(o.GetError());
    }
    else
    {
        return LivenessOutcome(outcome.GetError());
    }
}

void FaceidClient::LivenessAsync(const LivenessRequest& request, const LivenessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Liveness(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::LivenessOutcomeCallable FaceidClient::LivenessCallable(const LivenessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LivenessOutcome()>>(
        [this, request]()
        {
            return this->Liveness(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LivenessCompare(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::LivenessCompareOutcomeCallable FaceidClient::LivenessCompareCallable(const LivenessCompareRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LivenessCompareOutcome()>>(
        [this, request]()
        {
            return this->LivenessCompare(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LivenessRecognition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::LivenessRecognitionOutcomeCallable FaceidClient::LivenessRecognitionCallable(const LivenessRecognitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LivenessRecognitionOutcome()>>(
        [this, request]()
        {
            return this->LivenessRecognition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MinorsVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::MinorsVerificationOutcomeCallable FaceidClient::MinorsVerificationCallable(const MinorsVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MinorsVerificationOutcome()>>(
        [this, request]()
        {
            return this->MinorsVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MobileNetworkTimeVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::MobileNetworkTimeVerificationOutcomeCallable FaceidClient::MobileNetworkTimeVerificationCallable(const MobileNetworkTimeVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MobileNetworkTimeVerificationOutcome()>>(
        [this, request]()
        {
            return this->MobileNetworkTimeVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MobileStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::MobileStatusOutcomeCallable FaceidClient::MobileStatusCallable(const MobileStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MobileStatusOutcome()>>(
        [this, request]()
        {
            return this->MobileStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseNfcData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::ParseNfcDataOutcomeCallable FaceidClient::ParseNfcDataCallable(const ParseNfcDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseNfcDataOutcome()>>(
        [this, request]()
        {
            return this->ParseNfcData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PhoneVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::PhoneVerificationOutcomeCallable FaceidClient::PhoneVerificationCallable(const PhoneVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PhoneVerificationOutcome()>>(
        [this, request]()
        {
            return this->PhoneVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PhoneVerificationCMCC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::PhoneVerificationCMCCOutcomeCallable FaceidClient::PhoneVerificationCMCCCallable(const PhoneVerificationCMCCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PhoneVerificationCMCCOutcome()>>(
        [this, request]()
        {
            return this->PhoneVerificationCMCC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PhoneVerificationCTCC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::PhoneVerificationCTCCOutcomeCallable FaceidClient::PhoneVerificationCTCCCallable(const PhoneVerificationCTCCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PhoneVerificationCTCCOutcome()>>(
        [this, request]()
        {
            return this->PhoneVerificationCTCC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PhoneVerificationCUCC(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

FaceidClient::PhoneVerificationCUCCOutcomeCallable FaceidClient::PhoneVerificationCUCCCallable(const PhoneVerificationCUCCRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PhoneVerificationCUCCOutcome()>>(
        [this, request]()
        {
            return this->PhoneVerificationCUCC(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

