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

#include <tencentcloud/vod/v20180717/VodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vod::V20180717;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-17";
    const string ENDPOINT = "vod.tencentcloudapi.com";
}

VodClient::VodClient(const Credential &credential, const string &region) :
    VodClient(credential, region, ClientProfile())
{
}

VodClient::VodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VodClient::ApplyUploadOutcome VodClient::ApplyUpload(const ApplyUploadRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyUploadResponse rsp = ApplyUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyUploadOutcome(rsp);
        else
            return ApplyUploadOutcome(o.GetError());
    }
    else
    {
        return ApplyUploadOutcome(outcome.GetError());
    }
}

void VodClient::ApplyUploadAsync(const ApplyUploadRequest& request, const ApplyUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ApplyUploadOutcomeCallable VodClient::ApplyUploadCallable(const ApplyUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyUploadOutcome()>>(
        [this, request]()
        {
            return this->ApplyUpload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CommitUploadOutcome VodClient::CommitUpload(const CommitUploadRequest &request)
{
    auto outcome = MakeRequest(request, "CommitUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CommitUploadResponse rsp = CommitUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CommitUploadOutcome(rsp);
        else
            return CommitUploadOutcome(o.GetError());
    }
    else
    {
        return CommitUploadOutcome(outcome.GetError());
    }
}

void VodClient::CommitUploadAsync(const CommitUploadRequest& request, const CommitUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CommitUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CommitUploadOutcomeCallable VodClient::CommitUploadCallable(const CommitUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CommitUploadOutcome()>>(
        [this, request]()
        {
            return this->CommitUpload(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ComposeMediaOutcome VodClient::ComposeMedia(const ComposeMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ComposeMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ComposeMediaResponse rsp = ComposeMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ComposeMediaOutcome(rsp);
        else
            return ComposeMediaOutcome(o.GetError());
    }
    else
    {
        return ComposeMediaOutcome(outcome.GetError());
    }
}

void VodClient::ComposeMediaAsync(const ComposeMediaRequest& request, const ComposeMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ComposeMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ComposeMediaOutcomeCallable VodClient::ComposeMediaCallable(const ComposeMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ComposeMediaOutcome()>>(
        [this, request]()
        {
            return this->ComposeMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ConfirmEventsOutcome VodClient::ConfirmEvents(const ConfirmEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmEventsResponse rsp = ConfirmEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmEventsOutcome(rsp);
        else
            return ConfirmEventsOutcome(o.GetError());
    }
    else
    {
        return ConfirmEventsOutcome(outcome.GetError());
    }
}

void VodClient::ConfirmEventsAsync(const ConfirmEventsRequest& request, const ConfirmEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfirmEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ConfirmEventsOutcomeCallable VodClient::ConfirmEventsCallable(const ConfirmEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfirmEventsOutcome()>>(
        [this, request]()
        {
            return this->ConfirmEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateAIAnalysisTemplateOutcome VodClient::CreateAIAnalysisTemplate(const CreateAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIAnalysisTemplateResponse rsp = CreateAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIAnalysisTemplateOutcome(rsp);
        else
            return CreateAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateAIAnalysisTemplateAsync(const CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateAIAnalysisTemplateOutcomeCallable VodClient::CreateAIAnalysisTemplateCallable(const CreateAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateAIRecognitionTemplateOutcome VodClient::CreateAIRecognitionTemplate(const CreateAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAIRecognitionTemplateResponse rsp = CreateAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAIRecognitionTemplateOutcome(rsp);
        else
            return CreateAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateAIRecognitionTemplateAsync(const CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateAIRecognitionTemplateOutcomeCallable VodClient::CreateAIRecognitionTemplateCallable(const CreateAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateClassOutcome VodClient::CreateClass(const CreateClassRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClassResponse rsp = CreateClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClassOutcome(rsp);
        else
            return CreateClassOutcome(o.GetError());
    }
    else
    {
        return CreateClassOutcome(outcome.GetError());
    }
}

void VodClient::CreateClassAsync(const CreateClassRequest& request, const CreateClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateClassOutcomeCallable VodClient::CreateClassCallable(const CreateClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClassOutcome()>>(
        [this, request]()
        {
            return this->CreateClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateContentReviewTemplateOutcome VodClient::CreateContentReviewTemplate(const CreateContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContentReviewTemplateResponse rsp = CreateContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContentReviewTemplateOutcome(rsp);
        else
            return CreateContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateContentReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateContentReviewTemplateAsync(const CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateContentReviewTemplateOutcomeCallable VodClient::CreateContentReviewTemplateCallable(const CreateContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreatePersonSampleOutcome VodClient::CreatePersonSample(const CreatePersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonSampleResponse rsp = CreatePersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonSampleOutcome(rsp);
        else
            return CreatePersonSampleOutcome(o.GetError());
    }
    else
    {
        return CreatePersonSampleOutcome(outcome.GetError());
    }
}

void VodClient::CreatePersonSampleAsync(const CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreatePersonSampleOutcomeCallable VodClient::CreatePersonSampleCallable(const CreatePersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonSampleOutcome()>>(
        [this, request]()
        {
            return this->CreatePersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateProcedureTemplateOutcome VodClient::CreateProcedureTemplate(const CreateProcedureTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProcedureTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProcedureTemplateResponse rsp = CreateProcedureTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProcedureTemplateOutcome(rsp);
        else
            return CreateProcedureTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateProcedureTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateProcedureTemplateAsync(const CreateProcedureTemplateRequest& request, const CreateProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProcedureTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateProcedureTemplateOutcomeCallable VodClient::CreateProcedureTemplateCallable(const CreateProcedureTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProcedureTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateProcedureTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateTranscodeTemplateOutcome VodClient::CreateTranscodeTemplate(const CreateTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTranscodeTemplateResponse rsp = CreateTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTranscodeTemplateOutcome(rsp);
        else
            return CreateTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTranscodeTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateTranscodeTemplateAsync(const CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateTranscodeTemplateOutcomeCallable VodClient::CreateTranscodeTemplateCallable(const CreateTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateWatermarkTemplateOutcome VodClient::CreateWatermarkTemplate(const CreateWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWatermarkTemplateResponse rsp = CreateWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWatermarkTemplateOutcome(rsp);
        else
            return CreateWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateWatermarkTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateWatermarkTemplateAsync(const CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateWatermarkTemplateOutcomeCallable VodClient::CreateWatermarkTemplateCallable(const CreateWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateWordSamplesOutcome VodClient::CreateWordSamples(const CreateWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWordSamplesResponse rsp = CreateWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWordSamplesOutcome(rsp);
        else
            return CreateWordSamplesOutcome(o.GetError());
    }
    else
    {
        return CreateWordSamplesOutcome(outcome.GetError());
    }
}

void VodClient::CreateWordSamplesAsync(const CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateWordSamplesOutcomeCallable VodClient::CreateWordSamplesCallable(const CreateWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->CreateWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteAIAnalysisTemplateOutcome VodClient::DeleteAIAnalysisTemplate(const DeleteAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIAnalysisTemplateResponse rsp = DeleteAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIAnalysisTemplateOutcome(rsp);
        else
            return DeleteAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteAIAnalysisTemplateAsync(const DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteAIAnalysisTemplateOutcomeCallable VodClient::DeleteAIAnalysisTemplateCallable(const DeleteAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteAIRecognitionTemplateOutcome VodClient::DeleteAIRecognitionTemplate(const DeleteAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAIRecognitionTemplateResponse rsp = DeleteAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAIRecognitionTemplateOutcome(rsp);
        else
            return DeleteAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteAIRecognitionTemplateAsync(const DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteAIRecognitionTemplateOutcomeCallable VodClient::DeleteAIRecognitionTemplateCallable(const DeleteAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteClassOutcome VodClient::DeleteClass(const DeleteClassRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClassResponse rsp = DeleteClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClassOutcome(rsp);
        else
            return DeleteClassOutcome(o.GetError());
    }
    else
    {
        return DeleteClassOutcome(outcome.GetError());
    }
}

void VodClient::DeleteClassAsync(const DeleteClassRequest& request, const DeleteClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteClassOutcomeCallable VodClient::DeleteClassCallable(const DeleteClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClassOutcome()>>(
        [this, request]()
        {
            return this->DeleteClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteContentReviewTemplateOutcome VodClient::DeleteContentReviewTemplate(const DeleteContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContentReviewTemplateResponse rsp = DeleteContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContentReviewTemplateOutcome(rsp);
        else
            return DeleteContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteContentReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteContentReviewTemplateAsync(const DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteContentReviewTemplateOutcomeCallable VodClient::DeleteContentReviewTemplateCallable(const DeleteContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteMediaOutcome VodClient::DeleteMedia(const DeleteMediaRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMediaResponse rsp = DeleteMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMediaOutcome(rsp);
        else
            return DeleteMediaOutcome(o.GetError());
    }
    else
    {
        return DeleteMediaOutcome(outcome.GetError());
    }
}

void VodClient::DeleteMediaAsync(const DeleteMediaRequest& request, const DeleteMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteMediaOutcomeCallable VodClient::DeleteMediaCallable(const DeleteMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMediaOutcome()>>(
        [this, request]()
        {
            return this->DeleteMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeletePersonSampleOutcome VodClient::DeletePersonSample(const DeletePersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonSampleResponse rsp = DeletePersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonSampleOutcome(rsp);
        else
            return DeletePersonSampleOutcome(o.GetError());
    }
    else
    {
        return DeletePersonSampleOutcome(outcome.GetError());
    }
}

void VodClient::DeletePersonSampleAsync(const DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeletePersonSampleOutcomeCallable VodClient::DeletePersonSampleCallable(const DeletePersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonSampleOutcome()>>(
        [this, request]()
        {
            return this->DeletePersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteProcedureTemplateOutcome VodClient::DeleteProcedureTemplate(const DeleteProcedureTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProcedureTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProcedureTemplateResponse rsp = DeleteProcedureTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProcedureTemplateOutcome(rsp);
        else
            return DeleteProcedureTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteProcedureTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteProcedureTemplateAsync(const DeleteProcedureTemplateRequest& request, const DeleteProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProcedureTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteProcedureTemplateOutcomeCallable VodClient::DeleteProcedureTemplateCallable(const DeleteProcedureTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProcedureTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteProcedureTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteTranscodeTemplateOutcome VodClient::DeleteTranscodeTemplate(const DeleteTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTranscodeTemplateResponse rsp = DeleteTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTranscodeTemplateOutcome(rsp);
        else
            return DeleteTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteTranscodeTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteTranscodeTemplateAsync(const DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteTranscodeTemplateOutcomeCallable VodClient::DeleteTranscodeTemplateCallable(const DeleteTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteWatermarkTemplateOutcome VodClient::DeleteWatermarkTemplate(const DeleteWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWatermarkTemplateResponse rsp = DeleteWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWatermarkTemplateOutcome(rsp);
        else
            return DeleteWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteWatermarkTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteWatermarkTemplateAsync(const DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteWatermarkTemplateOutcomeCallable VodClient::DeleteWatermarkTemplateCallable(const DeleteWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteWordSamplesOutcome VodClient::DeleteWordSamples(const DeleteWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWordSamplesResponse rsp = DeleteWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWordSamplesOutcome(rsp);
        else
            return DeleteWordSamplesOutcome(o.GetError());
    }
    else
    {
        return DeleteWordSamplesOutcome(outcome.GetError());
    }
}

void VodClient::DeleteWordSamplesAsync(const DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteWordSamplesOutcomeCallable VodClient::DeleteWordSamplesCallable(const DeleteWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->DeleteWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeAIAnalysisTemplatesOutcome VodClient::DescribeAIAnalysisTemplates(const DescribeAIAnalysisTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIAnalysisTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIAnalysisTemplatesResponse rsp = DescribeAIAnalysisTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIAnalysisTemplatesOutcome(rsp);
        else
            return DescribeAIAnalysisTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAIAnalysisTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAIAnalysisTemplatesAsync(const DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIAnalysisTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeAIAnalysisTemplatesOutcomeCallable VodClient::DescribeAIAnalysisTemplatesCallable(const DescribeAIAnalysisTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIAnalysisTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIAnalysisTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeAIRecognitionTemplatesOutcome VodClient::DescribeAIRecognitionTemplates(const DescribeAIRecognitionTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIRecognitionTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIRecognitionTemplatesResponse rsp = DescribeAIRecognitionTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIRecognitionTemplatesOutcome(rsp);
        else
            return DescribeAIRecognitionTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAIRecognitionTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAIRecognitionTemplatesAsync(const DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIRecognitionTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeAIRecognitionTemplatesOutcomeCallable VodClient::DescribeAIRecognitionTemplatesCallable(const DescribeAIRecognitionTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIRecognitionTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIRecognitionTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeAllClassOutcome VodClient::DescribeAllClass(const DescribeAllClassRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllClassResponse rsp = DescribeAllClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllClassOutcome(rsp);
        else
            return DescribeAllClassOutcome(o.GetError());
    }
    else
    {
        return DescribeAllClassOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAllClassAsync(const DescribeAllClassRequest& request, const DescribeAllClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAllClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeAllClassOutcomeCallable VodClient::DescribeAllClassCallable(const DescribeAllClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAllClassOutcome()>>(
        [this, request]()
        {
            return this->DescribeAllClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeContentReviewTemplatesOutcome VodClient::DescribeContentReviewTemplates(const DescribeContentReviewTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContentReviewTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContentReviewTemplatesResponse rsp = DescribeContentReviewTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContentReviewTemplatesOutcome(rsp);
        else
            return DescribeContentReviewTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeContentReviewTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeContentReviewTemplatesAsync(const DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentReviewTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeContentReviewTemplatesOutcomeCallable VodClient::DescribeContentReviewTemplatesCallable(const DescribeContentReviewTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContentReviewTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeContentReviewTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeMediaInfosOutcome VodClient::DescribeMediaInfos(const DescribeMediaInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaInfosResponse rsp = DescribeMediaInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaInfosOutcome(rsp);
        else
            return DescribeMediaInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaInfosOutcome(outcome.GetError());
    }
}

void VodClient::DescribeMediaInfosAsync(const DescribeMediaInfosRequest& request, const DescribeMediaInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeMediaInfosOutcomeCallable VodClient::DescribeMediaInfosCallable(const DescribeMediaInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribePersonSamplesOutcome VodClient::DescribePersonSamples(const DescribePersonSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonSamplesResponse rsp = DescribePersonSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonSamplesOutcome(rsp);
        else
            return DescribePersonSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribePersonSamplesOutcome(outcome.GetError());
    }
}

void VodClient::DescribePersonSamplesAsync(const DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribePersonSamplesOutcomeCallable VodClient::DescribePersonSamplesCallable(const DescribePersonSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePersonSamplesOutcome()>>(
        [this, request]()
        {
            return this->DescribePersonSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeProcedureTemplatesOutcome VodClient::DescribeProcedureTemplates(const DescribeProcedureTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcedureTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcedureTemplatesResponse rsp = DescribeProcedureTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcedureTemplatesOutcome(rsp);
        else
            return DescribeProcedureTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeProcedureTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeProcedureTemplatesAsync(const DescribeProcedureTemplatesRequest& request, const DescribeProcedureTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProcedureTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeProcedureTemplatesOutcomeCallable VodClient::DescribeProcedureTemplatesCallable(const DescribeProcedureTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProcedureTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeProcedureTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeReviewDetailsOutcome VodClient::DescribeReviewDetails(const DescribeReviewDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReviewDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReviewDetailsResponse rsp = DescribeReviewDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReviewDetailsOutcome(rsp);
        else
            return DescribeReviewDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeReviewDetailsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeReviewDetailsAsync(const DescribeReviewDetailsRequest& request, const DescribeReviewDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReviewDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeReviewDetailsOutcomeCallable VodClient::DescribeReviewDetailsCallable(const DescribeReviewDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReviewDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeReviewDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeTaskDetailOutcome VodClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void VodClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeTaskDetailOutcomeCallable VodClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeTasksOutcome VodClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void VodClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeTasksOutcomeCallable VodClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeTranscodeTemplatesOutcome VodClient::DescribeTranscodeTemplates(const DescribeTranscodeTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTranscodeTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTranscodeTemplatesResponse rsp = DescribeTranscodeTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTranscodeTemplatesOutcome(rsp);
        else
            return DescribeTranscodeTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeTranscodeTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeTranscodeTemplatesAsync(const DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeTranscodeTemplatesOutcomeCallable VodClient::DescribeTranscodeTemplatesCallable(const DescribeTranscodeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTranscodeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTranscodeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeWatermarkTemplatesOutcome VodClient::DescribeWatermarkTemplates(const DescribeWatermarkTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWatermarkTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWatermarkTemplatesResponse rsp = DescribeWatermarkTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWatermarkTemplatesOutcome(rsp);
        else
            return DescribeWatermarkTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeWatermarkTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeWatermarkTemplatesAsync(const DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWatermarkTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeWatermarkTemplatesOutcomeCallable VodClient::DescribeWatermarkTemplatesCallable(const DescribeWatermarkTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWatermarkTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWatermarkTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeWordSamplesOutcome VodClient::DescribeWordSamples(const DescribeWordSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWordSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWordSamplesResponse rsp = DescribeWordSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWordSamplesOutcome(rsp);
        else
            return DescribeWordSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribeWordSamplesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeWordSamplesAsync(const DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeWordSamplesOutcomeCallable VodClient::DescribeWordSamplesCallable(const DescribeWordSamplesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWordSamplesOutcome()>>(
        [this, request]()
        {
            return this->DescribeWordSamples(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::EditMediaOutcome VodClient::EditMedia(const EditMediaRequest &request)
{
    auto outcome = MakeRequest(request, "EditMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditMediaResponse rsp = EditMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditMediaOutcome(rsp);
        else
            return EditMediaOutcome(o.GetError());
    }
    else
    {
        return EditMediaOutcome(outcome.GetError());
    }
}

void VodClient::EditMediaAsync(const EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::EditMediaOutcomeCallable VodClient::EditMediaCallable(const EditMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EditMediaOutcome()>>(
        [this, request]()
        {
            return this->EditMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ExecuteFunctionOutcome VodClient::ExecuteFunction(const ExecuteFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteFunctionResponse rsp = ExecuteFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteFunctionOutcome(rsp);
        else
            return ExecuteFunctionOutcome(o.GetError());
    }
    else
    {
        return ExecuteFunctionOutcome(outcome.GetError());
    }
}

void VodClient::ExecuteFunctionAsync(const ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ExecuteFunctionOutcomeCallable VodClient::ExecuteFunctionCallable(const ExecuteFunctionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteFunctionOutcome()>>(
        [this, request]()
        {
            return this->ExecuteFunction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::LiveRealTimeClipOutcome VodClient::LiveRealTimeClip(const LiveRealTimeClipRequest &request)
{
    auto outcome = MakeRequest(request, "LiveRealTimeClip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LiveRealTimeClipResponse rsp = LiveRealTimeClipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LiveRealTimeClipOutcome(rsp);
        else
            return LiveRealTimeClipOutcome(o.GetError());
    }
    else
    {
        return LiveRealTimeClipOutcome(outcome.GetError());
    }
}

void VodClient::LiveRealTimeClipAsync(const LiveRealTimeClipRequest& request, const LiveRealTimeClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LiveRealTimeClip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::LiveRealTimeClipOutcomeCallable VodClient::LiveRealTimeClipCallable(const LiveRealTimeClipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LiveRealTimeClipOutcome()>>(
        [this, request]()
        {
            return this->LiveRealTimeClip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyAIAnalysisTemplateOutcome VodClient::ModifyAIAnalysisTemplate(const ModifyAIAnalysisTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAIAnalysisTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAIAnalysisTemplateResponse rsp = ModifyAIAnalysisTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAIAnalysisTemplateOutcome(rsp);
        else
            return ModifyAIAnalysisTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAIAnalysisTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyAIAnalysisTemplateAsync(const ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyAIAnalysisTemplateOutcomeCallable VodClient::ModifyAIAnalysisTemplateCallable(const ModifyAIAnalysisTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAIAnalysisTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAIAnalysisTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyAIRecognitionTemplateOutcome VodClient::ModifyAIRecognitionTemplate(const ModifyAIRecognitionTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAIRecognitionTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAIRecognitionTemplateResponse rsp = ModifyAIRecognitionTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAIRecognitionTemplateOutcome(rsp);
        else
            return ModifyAIRecognitionTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAIRecognitionTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyAIRecognitionTemplateAsync(const ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyAIRecognitionTemplateOutcomeCallable VodClient::ModifyAIRecognitionTemplateCallable(const ModifyAIRecognitionTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAIRecognitionTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAIRecognitionTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyClassOutcome VodClient::ModifyClass(const ModifyClassRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClassResponse rsp = ModifyClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClassOutcome(rsp);
        else
            return ModifyClassOutcome(o.GetError());
    }
    else
    {
        return ModifyClassOutcome(outcome.GetError());
    }
}

void VodClient::ModifyClassAsync(const ModifyClassRequest& request, const ModifyClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyClassOutcomeCallable VodClient::ModifyClassCallable(const ModifyClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClassOutcome()>>(
        [this, request]()
        {
            return this->ModifyClass(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyContentReviewTemplateOutcome VodClient::ModifyContentReviewTemplate(const ModifyContentReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContentReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContentReviewTemplateResponse rsp = ModifyContentReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContentReviewTemplateOutcome(rsp);
        else
            return ModifyContentReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyContentReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyContentReviewTemplateAsync(const ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyContentReviewTemplateOutcomeCallable VodClient::ModifyContentReviewTemplateCallable(const ModifyContentReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyContentReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyContentReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyMediaInfoOutcome VodClient::ModifyMediaInfo(const ModifyMediaInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaInfoResponse rsp = ModifyMediaInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaInfoOutcome(rsp);
        else
            return ModifyMediaInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaInfoOutcome(outcome.GetError());
    }
}

void VodClient::ModifyMediaInfoAsync(const ModifyMediaInfoRequest& request, const ModifyMediaInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyMediaInfoOutcomeCallable VodClient::ModifyMediaInfoCallable(const ModifyMediaInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyPersonSampleOutcome VodClient::ModifyPersonSample(const ModifyPersonSampleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonSampleResponse rsp = ModifyPersonSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonSampleOutcome(rsp);
        else
            return ModifyPersonSampleOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonSampleOutcome(outcome.GetError());
    }
}

void VodClient::ModifyPersonSampleAsync(const ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyPersonSampleOutcomeCallable VodClient::ModifyPersonSampleCallable(const ModifyPersonSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonSampleOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyTranscodeTemplateOutcome VodClient::ModifyTranscodeTemplate(const ModifyTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTranscodeTemplateResponse rsp = ModifyTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTranscodeTemplateOutcome(rsp);
        else
            return ModifyTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTranscodeTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyTranscodeTemplateAsync(const ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyTranscodeTemplateOutcomeCallable VodClient::ModifyTranscodeTemplateCallable(const ModifyTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyTranscodeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyWatermarkTemplateOutcome VodClient::ModifyWatermarkTemplate(const ModifyWatermarkTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWatermarkTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWatermarkTemplateResponse rsp = ModifyWatermarkTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWatermarkTemplateOutcome(rsp);
        else
            return ModifyWatermarkTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyWatermarkTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyWatermarkTemplateAsync(const ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyWatermarkTemplateOutcomeCallable VodClient::ModifyWatermarkTemplateCallable(const ModifyWatermarkTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWatermarkTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyWatermarkTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyWordSampleOutcome VodClient::ModifyWordSample(const ModifyWordSampleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWordSample");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWordSampleResponse rsp = ModifyWordSampleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWordSampleOutcome(rsp);
        else
            return ModifyWordSampleOutcome(o.GetError());
    }
    else
    {
        return ModifyWordSampleOutcome(outcome.GetError());
    }
}

void VodClient::ModifyWordSampleAsync(const ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWordSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyWordSampleOutcomeCallable VodClient::ModifyWordSampleCallable(const ModifyWordSampleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyWordSampleOutcome()>>(
        [this, request]()
        {
            return this->ModifyWordSample(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ProcessMediaOutcome VodClient::ProcessMedia(const ProcessMediaRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMediaResponse rsp = ProcessMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMediaOutcome(rsp);
        else
            return ProcessMediaOutcome(o.GetError());
    }
    else
    {
        return ProcessMediaOutcome(outcome.GetError());
    }
}

void VodClient::ProcessMediaAsync(const ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ProcessMediaOutcomeCallable VodClient::ProcessMediaCallable(const ProcessMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMediaOutcome()>>(
        [this, request]()
        {
            return this->ProcessMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ProcessMediaByProcedureOutcome VodClient::ProcessMediaByProcedure(const ProcessMediaByProcedureRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMediaByProcedure");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMediaByProcedureResponse rsp = ProcessMediaByProcedureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMediaByProcedureOutcome(rsp);
        else
            return ProcessMediaByProcedureOutcome(o.GetError());
    }
    else
    {
        return ProcessMediaByProcedureOutcome(outcome.GetError());
    }
}

void VodClient::ProcessMediaByProcedureAsync(const ProcessMediaByProcedureRequest& request, const ProcessMediaByProcedureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMediaByProcedure(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ProcessMediaByProcedureOutcomeCallable VodClient::ProcessMediaByProcedureCallable(const ProcessMediaByProcedureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMediaByProcedureOutcome()>>(
        [this, request]()
        {
            return this->ProcessMediaByProcedure(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ProcessMediaByUrlOutcome VodClient::ProcessMediaByUrl(const ProcessMediaByUrlRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMediaByUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMediaByUrlResponse rsp = ProcessMediaByUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMediaByUrlOutcome(rsp);
        else
            return ProcessMediaByUrlOutcome(o.GetError());
    }
    else
    {
        return ProcessMediaByUrlOutcome(outcome.GetError());
    }
}

void VodClient::ProcessMediaByUrlAsync(const ProcessMediaByUrlRequest& request, const ProcessMediaByUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMediaByUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ProcessMediaByUrlOutcomeCallable VodClient::ProcessMediaByUrlCallable(const ProcessMediaByUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessMediaByUrlOutcome()>>(
        [this, request]()
        {
            return this->ProcessMediaByUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::PullEventsOutcome VodClient::PullEvents(const PullEventsRequest &request)
{
    auto outcome = MakeRequest(request, "PullEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullEventsResponse rsp = PullEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullEventsOutcome(rsp);
        else
            return PullEventsOutcome(o.GetError());
    }
    else
    {
        return PullEventsOutcome(outcome.GetError());
    }
}

void VodClient::PullEventsAsync(const PullEventsRequest& request, const PullEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::PullEventsOutcomeCallable VodClient::PullEventsCallable(const PullEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullEventsOutcome()>>(
        [this, request]()
        {
            return this->PullEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::PushUrlCacheOutcome VodClient::PushUrlCache(const PushUrlCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PushUrlCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushUrlCacheResponse rsp = PushUrlCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushUrlCacheOutcome(rsp);
        else
            return PushUrlCacheOutcome(o.GetError());
    }
    else
    {
        return PushUrlCacheOutcome(outcome.GetError());
    }
}

void VodClient::PushUrlCacheAsync(const PushUrlCacheRequest& request, const PushUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PushUrlCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::PushUrlCacheOutcomeCallable VodClient::PushUrlCacheCallable(const PushUrlCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PushUrlCacheOutcome()>>(
        [this, request]()
        {
            return this->PushUrlCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ResetProcedureTemplateOutcome VodClient::ResetProcedureTemplate(const ResetProcedureTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ResetProcedureTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetProcedureTemplateResponse rsp = ResetProcedureTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetProcedureTemplateOutcome(rsp);
        else
            return ResetProcedureTemplateOutcome(o.GetError());
    }
    else
    {
        return ResetProcedureTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ResetProcedureTemplateAsync(const ResetProcedureTemplateRequest& request, const ResetProcedureTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetProcedureTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ResetProcedureTemplateOutcomeCallable VodClient::ResetProcedureTemplateCallable(const ResetProcedureTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetProcedureTemplateOutcome()>>(
        [this, request]()
        {
            return this->ResetProcedureTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::SearchMediaOutcome VodClient::SearchMedia(const SearchMediaRequest &request)
{
    auto outcome = MakeRequest(request, "SearchMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchMediaResponse rsp = SearchMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchMediaOutcome(rsp);
        else
            return SearchMediaOutcome(o.GetError());
    }
    else
    {
        return SearchMediaOutcome(outcome.GetError());
    }
}

void VodClient::SearchMediaAsync(const SearchMediaRequest& request, const SearchMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SearchMediaOutcomeCallable VodClient::SearchMediaCallable(const SearchMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchMediaOutcome()>>(
        [this, request]()
        {
            return this->SearchMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::SimpleHlsClipOutcome VodClient::SimpleHlsClip(const SimpleHlsClipRequest &request)
{
    auto outcome = MakeRequest(request, "SimpleHlsClip");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SimpleHlsClipResponse rsp = SimpleHlsClipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SimpleHlsClipOutcome(rsp);
        else
            return SimpleHlsClipOutcome(o.GetError());
    }
    else
    {
        return SimpleHlsClipOutcome(outcome.GetError());
    }
}

void VodClient::SimpleHlsClipAsync(const SimpleHlsClipRequest& request, const SimpleHlsClipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SimpleHlsClip(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SimpleHlsClipOutcomeCallable VodClient::SimpleHlsClipCallable(const SimpleHlsClipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SimpleHlsClipOutcome()>>(
        [this, request]()
        {
            return this->SimpleHlsClip(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

