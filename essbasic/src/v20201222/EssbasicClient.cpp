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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ArchiveFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ArchiveFlowOutcomeCallable EssbasicClient::ArchiveFlowCallable(const ArchiveFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ArchiveFlowOutcome()>>(
        [this, request]()
        {
            return this->ArchiveFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CancelFlowOutcomeCallable EssbasicClient::CancelFlowCallable(const CancelFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelFlowOutcome()>>(
        [this, request]()
        {
            return this->CancelFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBankCard2EVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckBankCard2EVerificationOutcomeCallable EssbasicClient::CheckBankCard2EVerificationCallable(const CheckBankCard2EVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBankCard2EVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckBankCard2EVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBankCard3EVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckBankCard3EVerificationOutcomeCallable EssbasicClient::CheckBankCard3EVerificationCallable(const CheckBankCard3EVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBankCard3EVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckBankCard3EVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBankCard4EVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckBankCard4EVerificationOutcomeCallable EssbasicClient::CheckBankCard4EVerificationCallable(const CheckBankCard4EVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBankCard4EVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckBankCard4EVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBankCardVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckBankCardVerificationOutcomeCallable EssbasicClient::CheckBankCardVerificationCallable(const CheckBankCardVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBankCardVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckBankCardVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckFaceIdentify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckFaceIdentifyOutcomeCallable EssbasicClient::CheckFaceIdentifyCallable(const CheckFaceIdentifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckFaceIdentifyOutcome()>>(
        [this, request]()
        {
            return this->CheckFaceIdentify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckIdCardVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckIdCardVerificationOutcomeCallable EssbasicClient::CheckIdCardVerificationCallable(const CheckIdCardVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckIdCardVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckIdCardVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckMobileAndName(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckMobileAndNameOutcomeCallable EssbasicClient::CheckMobileAndNameCallable(const CheckMobileAndNameRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckMobileAndNameOutcome()>>(
        [this, request]()
        {
            return this->CheckMobileAndName(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckMobileVerification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckMobileVerificationOutcomeCallable EssbasicClient::CheckMobileVerificationCallable(const CheckMobileVerificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckMobileVerificationOutcome()>>(
        [this, request]()
        {
            return this->CheckMobileVerification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckVerifyCodeMatchFlowId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CheckVerifyCodeMatchFlowIdOutcomeCallable EssbasicClient::CheckVerifyCodeMatchFlowIdCallable(const CheckVerifyCodeMatchFlowIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckVerifyCodeMatchFlowIdOutcome()>>(
        [this, request]()
        {
            return this->CheckVerifyCodeMatchFlowId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFaceIdSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFaceIdSignOutcomeCallable EssbasicClient::CreateFaceIdSignCallable(const CreateFaceIdSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFaceIdSignOutcome()>>(
        [this, request]()
        {
            return this->CreateFaceIdSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlowByFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateFlowByFilesOutcomeCallable EssbasicClient::CreateFlowByFilesCallable(const CreateFlowByFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlowByFilesOutcome()>>(
        [this, request]()
        {
            return this->CreateFlowByFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateH5FaceIdUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateH5FaceIdUrlOutcomeCallable EssbasicClient::CreateH5FaceIdUrlCallable(const CreateH5FaceIdUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateH5FaceIdUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateH5FaceIdUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePreviewSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreatePreviewSignUrlOutcomeCallable EssbasicClient::CreatePreviewSignUrlCallable(const CreatePreviewSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePreviewSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreatePreviewSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSealOutcomeCallable EssbasicClient::CreateSealCallable(const CreateSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSealOutcome()>>(
        [this, request]()
        {
            return this->CreateSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServerFlowSign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateServerFlowSignOutcomeCallable EssbasicClient::CreateServerFlowSignCallable(const CreateServerFlowSignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServerFlowSignOutcome()>>(
        [this, request]()
        {
            return this->CreateServerFlowSign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSignUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSignUrlOutcomeCallable EssbasicClient::CreateSignUrlCallable(const CreateSignUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSignUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateSignUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSubOrganizationOutcomeCallable EssbasicClient::CreateSubOrganizationCallable(const CreateSubOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubOrganizationOutcome()>>(
        [this, request]()
        {
            return this->CreateSubOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubOrganizationAndSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateSubOrganizationAndSealOutcomeCallable EssbasicClient::CreateSubOrganizationAndSealCallable(const CreateSubOrganizationAndSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubOrganizationAndSealOutcome()>>(
        [this, request]()
        {
            return this->CreateSubOrganizationAndSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateUserOutcomeCallable EssbasicClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserAndSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::CreateUserAndSealOutcomeCallable EssbasicClient::CreateUserAndSealCallable(const CreateUserAndSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserAndSealOutcome()>>(
        [this, request]()
        {
            return this->CreateUserAndSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DeleteSealOutcomeCallable EssbasicClient::DeleteSealCallable(const DeleteSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSealOutcome()>>(
        [this, request]()
        {
            return this->DeleteSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCatalogApprovers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeCatalogApproversOutcomeCallable EssbasicClient::DescribeCatalogApproversCallable(const DescribeCatalogApproversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCatalogApproversOutcome()>>(
        [this, request]()
        {
            return this->DescribeCatalogApprovers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCatalogSignComponents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeCatalogSignComponentsOutcomeCallable EssbasicClient::DescribeCatalogSignComponentsCallable(const DescribeCatalogSignComponentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCatalogSignComponentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCatalogSignComponents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomFlowIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeCustomFlowIdsOutcomeCallable EssbasicClient::DescribeCustomFlowIdsCallable(const DescribeCustomFlowIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomFlowIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomFlowIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomFlowIdsByFlowId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeCustomFlowIdsByFlowIdOutcomeCallable EssbasicClient::DescribeCustomFlowIdsByFlowIdCallable(const DescribeCustomFlowIdsByFlowIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomFlowIdsByFlowIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomFlowIdsByFlowId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFaceIdPhotos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFaceIdPhotosOutcomeCallable EssbasicClient::DescribeFaceIdPhotosCallable(const DescribeFaceIdPhotosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFaceIdPhotosOutcome()>>(
        [this, request]()
        {
            return this->DescribeFaceIdPhotos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFaceIdResults(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFaceIdResultsOutcomeCallable EssbasicClient::DescribeFaceIdResultsCallable(const DescribeFaceIdResultsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFaceIdResultsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFaceIdResults(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileIdsByCustomIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFileIdsByCustomIdsOutcomeCallable EssbasicClient::DescribeFileIdsByCustomIdsCallable(const DescribeFileIdsByCustomIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileIdsByCustomIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileIdsByCustomIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileUrls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFileUrlsOutcomeCallable EssbasicClient::DescribeFileUrlsCallable(const DescribeFileUrlsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileUrlsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileUrls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFlowOutcomeCallable EssbasicClient::DescribeFlowCallable(const DescribeFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowApprovers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFlowApproversOutcomeCallable EssbasicClient::DescribeFlowApproversCallable(const DescribeFlowApproversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowApproversOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowApprovers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFlowFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeFlowFilesOutcomeCallable EssbasicClient::DescribeFlowFilesCallable(const DescribeFlowFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFlowFilesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFlowFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSeals(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeSealsOutcomeCallable EssbasicClient::DescribeSealsCallable(const DescribeSealsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSealsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSeals(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubOrganizations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeSubOrganizationsOutcomeCallable EssbasicClient::DescribeSubOrganizationsCallable(const DescribeSubOrganizationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubOrganizationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubOrganizations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DescribeUsersOutcomeCallable EssbasicClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DestroyFlowFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::DestroyFlowFileOutcomeCallable EssbasicClient::DestroyFlowFileCallable(const DestroyFlowFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DestroyFlowFileOutcome()>>(
        [this, request]()
        {
            return this->DestroyFlowFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateOrganizationSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::GenerateOrganizationSealOutcomeCallable EssbasicClient::GenerateOrganizationSealCallable(const GenerateOrganizationSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateOrganizationSealOutcome()>>(
        [this, request]()
        {
            return this->GenerateOrganizationSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateUserSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::GenerateUserSealOutcomeCallable EssbasicClient::GenerateUserSealCallable(const GenerateUserSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateUserSealOutcome()>>(
        [this, request]()
        {
            return this->GenerateUserSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOrganizationDefaultSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyOrganizationDefaultSealOutcomeCallable EssbasicClient::ModifyOrganizationDefaultSealCallable(const ModifyOrganizationDefaultSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOrganizationDefaultSealOutcome()>>(
        [this, request]()
        {
            return this->ModifyOrganizationDefaultSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifySealOutcomeCallable EssbasicClient::ModifySealCallable(const ModifySealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySealOutcome()>>(
        [this, request]()
        {
            return this->ModifySeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubOrganizationInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifySubOrganizationInfoOutcomeCallable EssbasicClient::ModifySubOrganizationInfoCallable(const ModifySubOrganizationInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubOrganizationInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifySubOrganizationInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyUserOutcomeCallable EssbasicClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserDefaultSeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::ModifyUserDefaultSealOutcomeCallable EssbasicClient::ModifyUserDefaultSealCallable(const ModifyUserDefaultSealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserDefaultSealOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserDefaultSeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RejectFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::RejectFlowOutcomeCallable EssbasicClient::RejectFlowCallable(const RejectFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RejectFlowOutcome()>>(
        [this, request]()
        {
            return this->RejectFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SendFlowOutcomeCallable EssbasicClient::SendFlowCallable(const SendFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendFlowOutcome()>>(
        [this, request]()
        {
            return this->SendFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendFlowUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SendFlowUrlOutcomeCallable EssbasicClient::SendFlowUrlCallable(const SendFlowUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendFlowUrlOutcome()>>(
        [this, request]()
        {
            return this->SendFlowUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendSignInnerVerifyCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SendSignInnerVerifyCodeOutcomeCallable EssbasicClient::SendSignInnerVerifyCodeCallable(const SendSignInnerVerifyCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendSignInnerVerifyCodeOutcome()>>(
        [this, request]()
        {
            return this->SendSignInnerVerifyCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SignFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::SignFlowOutcomeCallable EssbasicClient::SignFlowCallable(const SignFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SignFlowOutcome()>>(
        [this, request]()
        {
            return this->SignFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFiles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::UploadFilesOutcomeCallable EssbasicClient::UploadFilesCallable(const UploadFilesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFilesOutcome()>>(
        [this, request]()
        {
            return this->UploadFiles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifySubOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::VerifySubOrganizationOutcomeCallable EssbasicClient::VerifySubOrganizationCallable(const VerifySubOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifySubOrganizationOutcome()>>(
        [this, request]()
        {
            return this->VerifySubOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EssbasicClient::VerifyUserOutcomeCallable EssbasicClient::VerifyUserCallable(const VerifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyUserOutcome()>>(
        [this, request]()
        {
            return this->VerifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

