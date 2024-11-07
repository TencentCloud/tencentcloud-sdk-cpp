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

VodClient::AttachMediaSubtitlesOutcome VodClient::AttachMediaSubtitles(const AttachMediaSubtitlesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachMediaSubtitles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachMediaSubtitlesResponse rsp = AttachMediaSubtitlesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachMediaSubtitlesOutcome(rsp);
        else
            return AttachMediaSubtitlesOutcome(o.GetError());
    }
    else
    {
        return AttachMediaSubtitlesOutcome(outcome.GetError());
    }
}

void VodClient::AttachMediaSubtitlesAsync(const AttachMediaSubtitlesRequest& request, const AttachMediaSubtitlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachMediaSubtitles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::AttachMediaSubtitlesOutcomeCallable VodClient::AttachMediaSubtitlesCallable(const AttachMediaSubtitlesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachMediaSubtitlesOutcome()>>(
        [this, request]()
        {
            return this->AttachMediaSubtitles(request);
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

VodClient::CreateAdaptiveDynamicStreamingTemplateOutcome VodClient::CreateAdaptiveDynamicStreamingTemplate(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAdaptiveDynamicStreamingTemplateResponse rsp = CreateAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return CreateAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateAdaptiveDynamicStreamingTemplateAsync(const CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::CreateAdaptiveDynamicStreamingTemplateCallable(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateAnimatedGraphicsTemplateOutcome VodClient::CreateAnimatedGraphicsTemplate(const CreateAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnimatedGraphicsTemplateResponse rsp = CreateAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnimatedGraphicsTemplateOutcome(rsp);
        else
            return CreateAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateAnimatedGraphicsTemplateAsync(const CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateAnimatedGraphicsTemplateOutcomeCallable VodClient::CreateAnimatedGraphicsTemplateCallable(const CreateAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateAnimatedGraphicsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateCLSLogsetOutcome VodClient::CreateCLSLogset(const CreateCLSLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSLogsetResponse rsp = CreateCLSLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSLogsetOutcome(rsp);
        else
            return CreateCLSLogsetOutcome(o.GetError());
    }
    else
    {
        return CreateCLSLogsetOutcome(outcome.GetError());
    }
}

void VodClient::CreateCLSLogsetAsync(const CreateCLSLogsetRequest& request, const CreateCLSLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCLSLogset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateCLSLogsetOutcomeCallable VodClient::CreateCLSLogsetCallable(const CreateCLSLogsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCLSLogsetOutcome()>>(
        [this, request]()
        {
            return this->CreateCLSLogset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateCLSTopicOutcome VodClient::CreateCLSTopic(const CreateCLSTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCLSTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCLSTopicResponse rsp = CreateCLSTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCLSTopicOutcome(rsp);
        else
            return CreateCLSTopicOutcome(o.GetError());
    }
    else
    {
        return CreateCLSTopicOutcome(outcome.GetError());
    }
}

void VodClient::CreateCLSTopicAsync(const CreateCLSTopicRequest& request, const CreateCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCLSTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateCLSTopicOutcomeCallable VodClient::CreateCLSTopicCallable(const CreateCLSTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCLSTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateCLSTopic(request);
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

VodClient::CreateComplexAdaptiveDynamicStreamingTaskOutcome VodClient::CreateComplexAdaptiveDynamicStreamingTask(const CreateComplexAdaptiveDynamicStreamingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateComplexAdaptiveDynamicStreamingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateComplexAdaptiveDynamicStreamingTaskResponse rsp = CreateComplexAdaptiveDynamicStreamingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateComplexAdaptiveDynamicStreamingTaskOutcome(rsp);
        else
            return CreateComplexAdaptiveDynamicStreamingTaskOutcome(o.GetError());
    }
    else
    {
        return CreateComplexAdaptiveDynamicStreamingTaskOutcome(outcome.GetError());
    }
}

void VodClient::CreateComplexAdaptiveDynamicStreamingTaskAsync(const CreateComplexAdaptiveDynamicStreamingTaskRequest& request, const CreateComplexAdaptiveDynamicStreamingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateComplexAdaptiveDynamicStreamingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable VodClient::CreateComplexAdaptiveDynamicStreamingTaskCallable(const CreateComplexAdaptiveDynamicStreamingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateComplexAdaptiveDynamicStreamingTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateComplexAdaptiveDynamicStreamingTask(request);
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

VodClient::CreateDomainVerifyRecordOutcome VodClient::CreateDomainVerifyRecord(const CreateDomainVerifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainVerifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainVerifyRecordResponse rsp = CreateDomainVerifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainVerifyRecordOutcome(rsp);
        else
            return CreateDomainVerifyRecordOutcome(o.GetError());
    }
    else
    {
        return CreateDomainVerifyRecordOutcome(outcome.GetError());
    }
}

void VodClient::CreateDomainVerifyRecordAsync(const CreateDomainVerifyRecordRequest& request, const CreateDomainVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainVerifyRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateDomainVerifyRecordOutcomeCallable VodClient::CreateDomainVerifyRecordCallable(const CreateDomainVerifyRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainVerifyRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainVerifyRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateEnhanceMediaTemplateOutcome VodClient::CreateEnhanceMediaTemplate(const CreateEnhanceMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnhanceMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnhanceMediaTemplateResponse rsp = CreateEnhanceMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnhanceMediaTemplateOutcome(rsp);
        else
            return CreateEnhanceMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateEnhanceMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateEnhanceMediaTemplateAsync(const CreateEnhanceMediaTemplateRequest& request, const CreateEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnhanceMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateEnhanceMediaTemplateOutcomeCallable VodClient::CreateEnhanceMediaTemplateCallable(const CreateEnhanceMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnhanceMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateEnhanceMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateHeadTailTemplateOutcome VodClient::CreateHeadTailTemplate(const CreateHeadTailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHeadTailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHeadTailTemplateResponse rsp = CreateHeadTailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHeadTailTemplateOutcome(rsp);
        else
            return CreateHeadTailTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateHeadTailTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateHeadTailTemplateAsync(const CreateHeadTailTemplateRequest& request, const CreateHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHeadTailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateHeadTailTemplateOutcomeCallable VodClient::CreateHeadTailTemplateCallable(const CreateHeadTailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHeadTailTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateHeadTailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateImageProcessingTemplateOutcome VodClient::CreateImageProcessingTemplate(const CreateImageProcessingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageProcessingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageProcessingTemplateResponse rsp = CreateImageProcessingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageProcessingTemplateOutcome(rsp);
        else
            return CreateImageProcessingTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateImageProcessingTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateImageProcessingTemplateAsync(const CreateImageProcessingTemplateRequest& request, const CreateImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageProcessingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateImageProcessingTemplateOutcomeCallable VodClient::CreateImageProcessingTemplateCallable(const CreateImageProcessingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageProcessingTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateImageProcessingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateImageSpriteTemplateOutcome VodClient::CreateImageSpriteTemplate(const CreateImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateImageSpriteTemplateResponse rsp = CreateImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateImageSpriteTemplateOutcome(rsp);
        else
            return CreateImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateImageSpriteTemplateAsync(const CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateImageSpriteTemplateOutcomeCallable VodClient::CreateImageSpriteTemplateCallable(const CreateImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateJustInTimeTranscodeTemplateOutcome VodClient::CreateJustInTimeTranscodeTemplate(const CreateJustInTimeTranscodeTemplateRequest &request)
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

void VodClient::CreateJustInTimeTranscodeTemplateAsync(const CreateJustInTimeTranscodeTemplateRequest& request, const CreateJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJustInTimeTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateJustInTimeTranscodeTemplateOutcomeCallable VodClient::CreateJustInTimeTranscodeTemplateCallable(const CreateJustInTimeTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJustInTimeTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateJustInTimeTranscodeTemplate(request);
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

VodClient::CreateQualityInspectTemplateOutcome VodClient::CreateQualityInspectTemplate(const CreateQualityInspectTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityInspectTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityInspectTemplateResponse rsp = CreateQualityInspectTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityInspectTemplateOutcome(rsp);
        else
            return CreateQualityInspectTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateQualityInspectTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateQualityInspectTemplateAsync(const CreateQualityInspectTemplateRequest& request, const CreateQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQualityInspectTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateQualityInspectTemplateOutcomeCallable VodClient::CreateQualityInspectTemplateCallable(const CreateQualityInspectTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQualityInspectTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateQualityInspectTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateRebuildMediaTemplateOutcome VodClient::CreateRebuildMediaTemplate(const CreateRebuildMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRebuildMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRebuildMediaTemplateResponse rsp = CreateRebuildMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRebuildMediaTemplateOutcome(rsp);
        else
            return CreateRebuildMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateRebuildMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateRebuildMediaTemplateAsync(const CreateRebuildMediaTemplateRequest& request, const CreateRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRebuildMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateRebuildMediaTemplateOutcomeCallable VodClient::CreateRebuildMediaTemplateCallable(const CreateRebuildMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRebuildMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateRebuildMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateReviewTemplateOutcome VodClient::CreateReviewTemplate(const CreateReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReviewTemplateResponse rsp = CreateReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReviewTemplateOutcome(rsp);
        else
            return CreateReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateReviewTemplateAsync(const CreateReviewTemplateRequest& request, const CreateReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateReviewTemplateOutcomeCallable VodClient::CreateReviewTemplateCallable(const CreateReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateRoundPlayOutcome VodClient::CreateRoundPlay(const CreateRoundPlayRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoundPlay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoundPlayResponse rsp = CreateRoundPlayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoundPlayOutcome(rsp);
        else
            return CreateRoundPlayOutcome(o.GetError());
    }
    else
    {
        return CreateRoundPlayOutcome(outcome.GetError());
    }
}

void VodClient::CreateRoundPlayAsync(const CreateRoundPlayRequest& request, const CreateRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoundPlay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateRoundPlayOutcomeCallable VodClient::CreateRoundPlayCallable(const CreateRoundPlayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoundPlayOutcome()>>(
        [this, request]()
        {
            return this->CreateRoundPlay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateSampleSnapshotTemplateOutcome VodClient::CreateSampleSnapshotTemplate(const CreateSampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSampleSnapshotTemplateResponse rsp = CreateSampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSampleSnapshotTemplateOutcome(rsp);
        else
            return CreateSampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateSampleSnapshotTemplateAsync(const CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateSampleSnapshotTemplateOutcomeCallable VodClient::CreateSampleSnapshotTemplateCallable(const CreateSampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateSnapshotByTimeOffsetTemplateOutcome VodClient::CreateSnapshotByTimeOffsetTemplate(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotByTimeOffsetTemplateResponse rsp = CreateSnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return CreateSnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateSnapshotByTimeOffsetTemplateAsync(const CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateSnapshotByTimeOffsetTemplateOutcomeCallable VodClient::CreateSnapshotByTimeOffsetTemplateCallable(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateStorageRegionOutcome VodClient::CreateStorageRegion(const CreateStorageRegionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorageRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageRegionResponse rsp = CreateStorageRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageRegionOutcome(rsp);
        else
            return CreateStorageRegionOutcome(o.GetError());
    }
    else
    {
        return CreateStorageRegionOutcome(outcome.GetError());
    }
}

void VodClient::CreateStorageRegionAsync(const CreateStorageRegionRequest& request, const CreateStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStorageRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateStorageRegionOutcomeCallable VodClient::CreateStorageRegionCallable(const CreateStorageRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStorageRegionOutcome()>>(
        [this, request]()
        {
            return this->CreateStorageRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateSubAppIdOutcome VodClient::CreateSubAppId(const CreateSubAppIdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubAppId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubAppIdResponse rsp = CreateSubAppIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubAppIdOutcome(rsp);
        else
            return CreateSubAppIdOutcome(o.GetError());
    }
    else
    {
        return CreateSubAppIdOutcome(outcome.GetError());
    }
}

void VodClient::CreateSubAppIdAsync(const CreateSubAppIdRequest& request, const CreateSubAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubAppId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateSubAppIdOutcomeCallable VodClient::CreateSubAppIdCallable(const CreateSubAppIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubAppIdOutcome()>>(
        [this, request]()
        {
            return this->CreateSubAppId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::CreateSuperPlayerConfigOutcome VodClient::CreateSuperPlayerConfig(const CreateSuperPlayerConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSuperPlayerConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSuperPlayerConfigResponse rsp = CreateSuperPlayerConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSuperPlayerConfigOutcome(rsp);
        else
            return CreateSuperPlayerConfigOutcome(o.GetError());
    }
    else
    {
        return CreateSuperPlayerConfigOutcome(outcome.GetError());
    }
}

void VodClient::CreateSuperPlayerConfigAsync(const CreateSuperPlayerConfigRequest& request, const CreateSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSuperPlayerConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateSuperPlayerConfigOutcomeCallable VodClient::CreateSuperPlayerConfigCallable(const CreateSuperPlayerConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSuperPlayerConfigOutcome()>>(
        [this, request]()
        {
            return this->CreateSuperPlayerConfig(request);
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

VodClient::CreateVodDomainOutcome VodClient::CreateVodDomain(const CreateVodDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVodDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVodDomainResponse rsp = CreateVodDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVodDomainOutcome(rsp);
        else
            return CreateVodDomainOutcome(o.GetError());
    }
    else
    {
        return CreateVodDomainOutcome(outcome.GetError());
    }
}

void VodClient::CreateVodDomainAsync(const CreateVodDomainRequest& request, const CreateVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVodDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::CreateVodDomainOutcomeCallable VodClient::CreateVodDomainCallable(const CreateVodDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVodDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateVodDomain(request);
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

VodClient::DeleteAdaptiveDynamicStreamingTemplateOutcome VodClient::DeleteAdaptiveDynamicStreamingTemplate(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAdaptiveDynamicStreamingTemplateResponse rsp = DeleteAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return DeleteAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteAdaptiveDynamicStreamingTemplateAsync(const DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::DeleteAdaptiveDynamicStreamingTemplateCallable(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteAnimatedGraphicsTemplateOutcome VodClient::DeleteAnimatedGraphicsTemplate(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAnimatedGraphicsTemplateResponse rsp = DeleteAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAnimatedGraphicsTemplateOutcome(rsp);
        else
            return DeleteAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteAnimatedGraphicsTemplateAsync(const DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteAnimatedGraphicsTemplateOutcomeCallable VodClient::DeleteAnimatedGraphicsTemplateCallable(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteAnimatedGraphicsTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteCLSTopicOutcome VodClient::DeleteCLSTopic(const DeleteCLSTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCLSTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCLSTopicResponse rsp = DeleteCLSTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCLSTopicOutcome(rsp);
        else
            return DeleteCLSTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteCLSTopicOutcome(outcome.GetError());
    }
}

void VodClient::DeleteCLSTopicAsync(const DeleteCLSTopicRequest& request, const DeleteCLSTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCLSTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteCLSTopicOutcomeCallable VodClient::DeleteCLSTopicCallable(const DeleteCLSTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCLSTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteCLSTopic(request);
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

VodClient::DeleteEnhanceMediaTemplateOutcome VodClient::DeleteEnhanceMediaTemplate(const DeleteEnhanceMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnhanceMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnhanceMediaTemplateResponse rsp = DeleteEnhanceMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnhanceMediaTemplateOutcome(rsp);
        else
            return DeleteEnhanceMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteEnhanceMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteEnhanceMediaTemplateAsync(const DeleteEnhanceMediaTemplateRequest& request, const DeleteEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnhanceMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteEnhanceMediaTemplateOutcomeCallable VodClient::DeleteEnhanceMediaTemplateCallable(const DeleteEnhanceMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnhanceMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnhanceMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteHeadTailTemplateOutcome VodClient::DeleteHeadTailTemplate(const DeleteHeadTailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHeadTailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHeadTailTemplateResponse rsp = DeleteHeadTailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHeadTailTemplateOutcome(rsp);
        else
            return DeleteHeadTailTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteHeadTailTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteHeadTailTemplateAsync(const DeleteHeadTailTemplateRequest& request, const DeleteHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteHeadTailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteHeadTailTemplateOutcomeCallable VodClient::DeleteHeadTailTemplateCallable(const DeleteHeadTailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteHeadTailTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteHeadTailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteImageProcessingTemplateOutcome VodClient::DeleteImageProcessingTemplate(const DeleteImageProcessingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageProcessingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageProcessingTemplateResponse rsp = DeleteImageProcessingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageProcessingTemplateOutcome(rsp);
        else
            return DeleteImageProcessingTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteImageProcessingTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteImageProcessingTemplateAsync(const DeleteImageProcessingTemplateRequest& request, const DeleteImageProcessingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageProcessingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteImageProcessingTemplateOutcomeCallable VodClient::DeleteImageProcessingTemplateCallable(const DeleteImageProcessingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageProcessingTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageProcessingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteImageSpriteTemplateOutcome VodClient::DeleteImageSpriteTemplate(const DeleteImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageSpriteTemplateResponse rsp = DeleteImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageSpriteTemplateOutcome(rsp);
        else
            return DeleteImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteImageSpriteTemplateAsync(const DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteImageSpriteTemplateOutcomeCallable VodClient::DeleteImageSpriteTemplateCallable(const DeleteImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteJustInTimeTranscodeTemplateOutcome VodClient::DeleteJustInTimeTranscodeTemplate(const DeleteJustInTimeTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJustInTimeTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJustInTimeTranscodeTemplateResponse rsp = DeleteJustInTimeTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJustInTimeTranscodeTemplateOutcome(rsp);
        else
            return DeleteJustInTimeTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteJustInTimeTranscodeTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteJustInTimeTranscodeTemplateAsync(const DeleteJustInTimeTranscodeTemplateRequest& request, const DeleteJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteJustInTimeTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteJustInTimeTranscodeTemplateOutcomeCallable VodClient::DeleteJustInTimeTranscodeTemplateCallable(const DeleteJustInTimeTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteJustInTimeTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteJustInTimeTranscodeTemplate(request);
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

VodClient::DeleteQualityInspectTemplateOutcome VodClient::DeleteQualityInspectTemplate(const DeleteQualityInspectTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQualityInspectTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQualityInspectTemplateResponse rsp = DeleteQualityInspectTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQualityInspectTemplateOutcome(rsp);
        else
            return DeleteQualityInspectTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteQualityInspectTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteQualityInspectTemplateAsync(const DeleteQualityInspectTemplateRequest& request, const DeleteQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQualityInspectTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteQualityInspectTemplateOutcomeCallable VodClient::DeleteQualityInspectTemplateCallable(const DeleteQualityInspectTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQualityInspectTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteQualityInspectTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteRebuildMediaTemplateOutcome VodClient::DeleteRebuildMediaTemplate(const DeleteRebuildMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRebuildMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRebuildMediaTemplateResponse rsp = DeleteRebuildMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRebuildMediaTemplateOutcome(rsp);
        else
            return DeleteRebuildMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteRebuildMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteRebuildMediaTemplateAsync(const DeleteRebuildMediaTemplateRequest& request, const DeleteRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRebuildMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteRebuildMediaTemplateOutcomeCallable VodClient::DeleteRebuildMediaTemplateCallable(const DeleteRebuildMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRebuildMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteRebuildMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteReviewTemplateOutcome VodClient::DeleteReviewTemplate(const DeleteReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReviewTemplateResponse rsp = DeleteReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReviewTemplateOutcome(rsp);
        else
            return DeleteReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteReviewTemplateAsync(const DeleteReviewTemplateRequest& request, const DeleteReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteReviewTemplateOutcomeCallable VodClient::DeleteReviewTemplateCallable(const DeleteReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteRoundPlayOutcome VodClient::DeleteRoundPlay(const DeleteRoundPlayRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoundPlay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoundPlayResponse rsp = DeleteRoundPlayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoundPlayOutcome(rsp);
        else
            return DeleteRoundPlayOutcome(o.GetError());
    }
    else
    {
        return DeleteRoundPlayOutcome(outcome.GetError());
    }
}

void VodClient::DeleteRoundPlayAsync(const DeleteRoundPlayRequest& request, const DeleteRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoundPlay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteRoundPlayOutcomeCallable VodClient::DeleteRoundPlayCallable(const DeleteRoundPlayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoundPlayOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoundPlay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteSampleSnapshotTemplateOutcome VodClient::DeleteSampleSnapshotTemplate(const DeleteSampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSampleSnapshotTemplateResponse rsp = DeleteSampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSampleSnapshotTemplateOutcome(rsp);
        else
            return DeleteSampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteSampleSnapshotTemplateAsync(const DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteSampleSnapshotTemplateOutcomeCallable VodClient::DeleteSampleSnapshotTemplateCallable(const DeleteSampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteSnapshotByTimeOffsetTemplateOutcome VodClient::DeleteSnapshotByTimeOffsetTemplate(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotByTimeOffsetTemplateResponse rsp = DeleteSnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return DeleteSnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteSnapshotByTimeOffsetTemplateAsync(const DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteSnapshotByTimeOffsetTemplateOutcomeCallable VodClient::DeleteSnapshotByTimeOffsetTemplateCallable(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DeleteSuperPlayerConfigOutcome VodClient::DeleteSuperPlayerConfig(const DeleteSuperPlayerConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSuperPlayerConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSuperPlayerConfigResponse rsp = DeleteSuperPlayerConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSuperPlayerConfigOutcome(rsp);
        else
            return DeleteSuperPlayerConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteSuperPlayerConfigOutcome(outcome.GetError());
    }
}

void VodClient::DeleteSuperPlayerConfigAsync(const DeleteSuperPlayerConfigRequest& request, const DeleteSuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSuperPlayerConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteSuperPlayerConfigOutcomeCallable VodClient::DeleteSuperPlayerConfigCallable(const DeleteSuperPlayerConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSuperPlayerConfigOutcome()>>(
        [this, request]()
        {
            return this->DeleteSuperPlayerConfig(request);
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

VodClient::DeleteVodDomainOutcome VodClient::DeleteVodDomain(const DeleteVodDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVodDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVodDomainResponse rsp = DeleteVodDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVodDomainOutcome(rsp);
        else
            return DeleteVodDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteVodDomainOutcome(outcome.GetError());
    }
}

void VodClient::DeleteVodDomainAsync(const DeleteVodDomainRequest& request, const DeleteVodDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVodDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DeleteVodDomainOutcomeCallable VodClient::DeleteVodDomainCallable(const DeleteVodDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVodDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteVodDomain(request);
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

VodClient::DescribeAdaptiveDynamicStreamingTemplatesOutcome VodClient::DescribeAdaptiveDynamicStreamingTemplates(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdaptiveDynamicStreamingTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdaptiveDynamicStreamingTemplatesResponse rsp = DescribeAdaptiveDynamicStreamingTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdaptiveDynamicStreamingTemplatesOutcome(rsp);
        else
            return DescribeAdaptiveDynamicStreamingTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAdaptiveDynamicStreamingTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAdaptiveDynamicStreamingTemplatesAsync(const DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdaptiveDynamicStreamingTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable VodClient::DescribeAdaptiveDynamicStreamingTemplatesCallable(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAdaptiveDynamicStreamingTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAdaptiveDynamicStreamingTemplates(request);
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

VodClient::DescribeAnimatedGraphicsTemplatesOutcome VodClient::DescribeAnimatedGraphicsTemplates(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAnimatedGraphicsTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAnimatedGraphicsTemplatesResponse rsp = DescribeAnimatedGraphicsTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAnimatedGraphicsTemplatesOutcome(rsp);
        else
            return DescribeAnimatedGraphicsTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeAnimatedGraphicsTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAnimatedGraphicsTemplatesAsync(const DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAnimatedGraphicsTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeAnimatedGraphicsTemplatesOutcomeCallable VodClient::DescribeAnimatedGraphicsTemplatesCallable(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAnimatedGraphicsTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAnimatedGraphicsTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCDNStatDetailsOutcome VodClient::DescribeCDNStatDetails(const DescribeCDNStatDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCDNStatDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCDNStatDetailsResponse rsp = DescribeCDNStatDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCDNStatDetailsOutcome(rsp);
        else
            return DescribeCDNStatDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeCDNStatDetailsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCDNStatDetailsAsync(const DescribeCDNStatDetailsRequest& request, const DescribeCDNStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCDNStatDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCDNStatDetailsOutcomeCallable VodClient::DescribeCDNStatDetailsCallable(const DescribeCDNStatDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCDNStatDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCDNStatDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCDNUsageDataOutcome VodClient::DescribeCDNUsageData(const DescribeCDNUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCDNUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCDNUsageDataResponse rsp = DescribeCDNUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCDNUsageDataOutcome(rsp);
        else
            return DescribeCDNUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCDNUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCDNUsageDataAsync(const DescribeCDNUsageDataRequest& request, const DescribeCDNUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCDNUsageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCDNUsageDataOutcomeCallable VodClient::DescribeCDNUsageDataCallable(const DescribeCDNUsageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCDNUsageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCDNUsageData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCLSLogsetsOutcome VodClient::DescribeCLSLogsets(const DescribeCLSLogsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCLSLogsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCLSLogsetsResponse rsp = DescribeCLSLogsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCLSLogsetsOutcome(rsp);
        else
            return DescribeCLSLogsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCLSLogsetsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCLSLogsetsAsync(const DescribeCLSLogsetsRequest& request, const DescribeCLSLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCLSLogsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCLSLogsetsOutcomeCallable VodClient::DescribeCLSLogsetsCallable(const DescribeCLSLogsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCLSLogsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCLSLogsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCLSPushTargetsOutcome VodClient::DescribeCLSPushTargets(const DescribeCLSPushTargetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCLSPushTargets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCLSPushTargetsResponse rsp = DescribeCLSPushTargetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCLSPushTargetsOutcome(rsp);
        else
            return DescribeCLSPushTargetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCLSPushTargetsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCLSPushTargetsAsync(const DescribeCLSPushTargetsRequest& request, const DescribeCLSPushTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCLSPushTargets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCLSPushTargetsOutcomeCallable VodClient::DescribeCLSPushTargetsCallable(const DescribeCLSPushTargetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCLSPushTargetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCLSPushTargets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCLSTopicsOutcome VodClient::DescribeCLSTopics(const DescribeCLSTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCLSTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCLSTopicsResponse rsp = DescribeCLSTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCLSTopicsOutcome(rsp);
        else
            return DescribeCLSTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeCLSTopicsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCLSTopicsAsync(const DescribeCLSTopicsRequest& request, const DescribeCLSTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCLSTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCLSTopicsOutcomeCallable VodClient::DescribeCLSTopicsCallable(const DescribeCLSTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCLSTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCLSTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeCdnLogsOutcome VodClient::DescribeCdnLogs(const DescribeCdnLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnLogsResponse rsp = DescribeCdnLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnLogsOutcome(rsp);
        else
            return DescribeCdnLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnLogsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCdnLogsAsync(const DescribeCdnLogsRequest& request, const DescribeCdnLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCdnLogsOutcomeCallable VodClient::DescribeCdnLogsCallable(const DescribeCdnLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeClientUploadAccelerationUsageDataOutcome VodClient::DescribeClientUploadAccelerationUsageData(const DescribeClientUploadAccelerationUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientUploadAccelerationUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientUploadAccelerationUsageDataResponse rsp = DescribeClientUploadAccelerationUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientUploadAccelerationUsageDataOutcome(rsp);
        else
            return DescribeClientUploadAccelerationUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeClientUploadAccelerationUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeClientUploadAccelerationUsageDataAsync(const DescribeClientUploadAccelerationUsageDataRequest& request, const DescribeClientUploadAccelerationUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientUploadAccelerationUsageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeClientUploadAccelerationUsageDataOutcomeCallable VodClient::DescribeClientUploadAccelerationUsageDataCallable(const DescribeClientUploadAccelerationUsageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientUploadAccelerationUsageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientUploadAccelerationUsageData(request);
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

VodClient::DescribeCurrentPlaylistOutcome VodClient::DescribeCurrentPlaylist(const DescribeCurrentPlaylistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurrentPlaylist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurrentPlaylistResponse rsp = DescribeCurrentPlaylistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurrentPlaylistOutcome(rsp);
        else
            return DescribeCurrentPlaylistOutcome(o.GetError());
    }
    else
    {
        return DescribeCurrentPlaylistOutcome(outcome.GetError());
    }
}

void VodClient::DescribeCurrentPlaylistAsync(const DescribeCurrentPlaylistRequest& request, const DescribeCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCurrentPlaylist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeCurrentPlaylistOutcomeCallable VodClient::DescribeCurrentPlaylistCallable(const DescribeCurrentPlaylistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCurrentPlaylistOutcome()>>(
        [this, request]()
        {
            return this->DescribeCurrentPlaylist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDailyMediaPlayStatOutcome VodClient::DescribeDailyMediaPlayStat(const DescribeDailyMediaPlayStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDailyMediaPlayStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDailyMediaPlayStatResponse rsp = DescribeDailyMediaPlayStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDailyMediaPlayStatOutcome(rsp);
        else
            return DescribeDailyMediaPlayStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDailyMediaPlayStatOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDailyMediaPlayStatAsync(const DescribeDailyMediaPlayStatRequest& request, const DescribeDailyMediaPlayStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDailyMediaPlayStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDailyMediaPlayStatOutcomeCallable VodClient::DescribeDailyMediaPlayStatCallable(const DescribeDailyMediaPlayStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDailyMediaPlayStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeDailyMediaPlayStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDailyMostPlayedStatOutcome VodClient::DescribeDailyMostPlayedStat(const DescribeDailyMostPlayedStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDailyMostPlayedStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDailyMostPlayedStatResponse rsp = DescribeDailyMostPlayedStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDailyMostPlayedStatOutcome(rsp);
        else
            return DescribeDailyMostPlayedStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDailyMostPlayedStatOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDailyMostPlayedStatAsync(const DescribeDailyMostPlayedStatRequest& request, const DescribeDailyMostPlayedStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDailyMostPlayedStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDailyMostPlayedStatOutcomeCallable VodClient::DescribeDailyMostPlayedStatCallable(const DescribeDailyMostPlayedStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDailyMostPlayedStatOutcome()>>(
        [this, request]()
        {
            return this->DescribeDailyMostPlayedStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDailyPlayStatFileListOutcome VodClient::DescribeDailyPlayStatFileList(const DescribeDailyPlayStatFileListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDailyPlayStatFileList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDailyPlayStatFileListResponse rsp = DescribeDailyPlayStatFileListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDailyPlayStatFileListOutcome(rsp);
        else
            return DescribeDailyPlayStatFileListOutcome(o.GetError());
    }
    else
    {
        return DescribeDailyPlayStatFileListOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDailyPlayStatFileListAsync(const DescribeDailyPlayStatFileListRequest& request, const DescribeDailyPlayStatFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDailyPlayStatFileList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDailyPlayStatFileListOutcomeCallable VodClient::DescribeDailyPlayStatFileListCallable(const DescribeDailyPlayStatFileListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDailyPlayStatFileListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDailyPlayStatFileList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDefaultDistributionConfigOutcome VodClient::DescribeDefaultDistributionConfig(const DescribeDefaultDistributionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultDistributionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultDistributionConfigResponse rsp = DescribeDefaultDistributionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultDistributionConfigOutcome(rsp);
        else
            return DescribeDefaultDistributionConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultDistributionConfigOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDefaultDistributionConfigAsync(const DescribeDefaultDistributionConfigRequest& request, const DescribeDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultDistributionConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDefaultDistributionConfigOutcomeCallable VodClient::DescribeDefaultDistributionConfigCallable(const DescribeDefaultDistributionConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultDistributionConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultDistributionConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDrmDataKeyOutcome VodClient::DescribeDrmDataKey(const DescribeDrmDataKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrmDataKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrmDataKeyResponse rsp = DescribeDrmDataKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrmDataKeyOutcome(rsp);
        else
            return DescribeDrmDataKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeDrmDataKeyOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDrmDataKeyAsync(const DescribeDrmDataKeyRequest& request, const DescribeDrmDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrmDataKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDrmDataKeyOutcomeCallable VodClient::DescribeDrmDataKeyCallable(const DescribeDrmDataKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrmDataKeyOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrmDataKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeDrmKeyProviderInfoOutcome VodClient::DescribeDrmKeyProviderInfo(const DescribeDrmKeyProviderInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDrmKeyProviderInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDrmKeyProviderInfoResponse rsp = DescribeDrmKeyProviderInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDrmKeyProviderInfoOutcome(rsp);
        else
            return DescribeDrmKeyProviderInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDrmKeyProviderInfoOutcome(outcome.GetError());
    }
}

void VodClient::DescribeDrmKeyProviderInfoAsync(const DescribeDrmKeyProviderInfoRequest& request, const DescribeDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDrmKeyProviderInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeDrmKeyProviderInfoOutcomeCallable VodClient::DescribeDrmKeyProviderInfoCallable(const DescribeDrmKeyProviderInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDrmKeyProviderInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDrmKeyProviderInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeEnhanceMediaTemplatesOutcome VodClient::DescribeEnhanceMediaTemplates(const DescribeEnhanceMediaTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnhanceMediaTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnhanceMediaTemplatesResponse rsp = DescribeEnhanceMediaTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnhanceMediaTemplatesOutcome(rsp);
        else
            return DescribeEnhanceMediaTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnhanceMediaTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeEnhanceMediaTemplatesAsync(const DescribeEnhanceMediaTemplatesRequest& request, const DescribeEnhanceMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnhanceMediaTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeEnhanceMediaTemplatesOutcomeCallable VodClient::DescribeEnhanceMediaTemplatesCallable(const DescribeEnhanceMediaTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnhanceMediaTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnhanceMediaTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeEventConfigOutcome VodClient::DescribeEventConfig(const DescribeEventConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventConfigResponse rsp = DescribeEventConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventConfigOutcome(rsp);
        else
            return DescribeEventConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeEventConfigOutcome(outcome.GetError());
    }
}

void VodClient::DescribeEventConfigAsync(const DescribeEventConfigRequest& request, const DescribeEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeEventConfigOutcomeCallable VodClient::DescribeEventConfigCallable(const DescribeEventConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeEventsStateOutcome VodClient::DescribeEventsState(const DescribeEventsStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventsState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsStateResponse rsp = DescribeEventsStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsStateOutcome(rsp);
        else
            return DescribeEventsStateOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsStateOutcome(outcome.GetError());
    }
}

void VodClient::DescribeEventsStateAsync(const DescribeEventsStateRequest& request, const DescribeEventsStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventsState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeEventsStateOutcomeCallable VodClient::DescribeEventsStateCallable(const DescribeEventsStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventsStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventsState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeFileAttributesOutcome VodClient::DescribeFileAttributes(const DescribeFileAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileAttributesResponse rsp = DescribeFileAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileAttributesOutcome(rsp);
        else
            return DescribeFileAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeFileAttributesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeFileAttributesAsync(const DescribeFileAttributesRequest& request, const DescribeFileAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeFileAttributesOutcomeCallable VodClient::DescribeFileAttributesCallable(const DescribeFileAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeHeadTailTemplatesOutcome VodClient::DescribeHeadTailTemplates(const DescribeHeadTailTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHeadTailTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHeadTailTemplatesResponse rsp = DescribeHeadTailTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHeadTailTemplatesOutcome(rsp);
        else
            return DescribeHeadTailTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeHeadTailTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeHeadTailTemplatesAsync(const DescribeHeadTailTemplatesRequest& request, const DescribeHeadTailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHeadTailTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeHeadTailTemplatesOutcomeCallable VodClient::DescribeHeadTailTemplatesCallable(const DescribeHeadTailTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHeadTailTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeHeadTailTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeImageProcessingTemplatesOutcome VodClient::DescribeImageProcessingTemplates(const DescribeImageProcessingTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageProcessingTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageProcessingTemplatesResponse rsp = DescribeImageProcessingTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageProcessingTemplatesOutcome(rsp);
        else
            return DescribeImageProcessingTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeImageProcessingTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeImageProcessingTemplatesAsync(const DescribeImageProcessingTemplatesRequest& request, const DescribeImageProcessingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageProcessingTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeImageProcessingTemplatesOutcomeCallable VodClient::DescribeImageProcessingTemplatesCallable(const DescribeImageProcessingTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageProcessingTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageProcessingTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeImageReviewUsageDataOutcome VodClient::DescribeImageReviewUsageData(const DescribeImageReviewUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageReviewUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageReviewUsageDataResponse rsp = DescribeImageReviewUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageReviewUsageDataOutcome(rsp);
        else
            return DescribeImageReviewUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeImageReviewUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeImageReviewUsageDataAsync(const DescribeImageReviewUsageDataRequest& request, const DescribeImageReviewUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageReviewUsageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeImageReviewUsageDataOutcomeCallable VodClient::DescribeImageReviewUsageDataCallable(const DescribeImageReviewUsageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageReviewUsageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageReviewUsageData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeImageSpriteTemplatesOutcome VodClient::DescribeImageSpriteTemplates(const DescribeImageSpriteTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageSpriteTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageSpriteTemplatesResponse rsp = DescribeImageSpriteTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageSpriteTemplatesOutcome(rsp);
        else
            return DescribeImageSpriteTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeImageSpriteTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeImageSpriteTemplatesAsync(const DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageSpriteTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeImageSpriteTemplatesOutcomeCallable VodClient::DescribeImageSpriteTemplatesCallable(const DescribeImageSpriteTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageSpriteTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageSpriteTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeJustInTimeTranscodeTemplatesOutcome VodClient::DescribeJustInTimeTranscodeTemplates(const DescribeJustInTimeTranscodeTemplatesRequest &request)
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

void VodClient::DescribeJustInTimeTranscodeTemplatesAsync(const DescribeJustInTimeTranscodeTemplatesRequest& request, const DescribeJustInTimeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJustInTimeTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeJustInTimeTranscodeTemplatesOutcomeCallable VodClient::DescribeJustInTimeTranscodeTemplatesCallable(const DescribeJustInTimeTranscodeTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJustInTimeTranscodeTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeJustInTimeTranscodeTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeLicenseUsageDataOutcome VodClient::DescribeLicenseUsageData(const DescribeLicenseUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseUsageDataResponse rsp = DescribeLicenseUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseUsageDataOutcome(rsp);
        else
            return DescribeLicenseUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeLicenseUsageDataAsync(const DescribeLicenseUsageDataRequest& request, const DescribeLicenseUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLicenseUsageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeLicenseUsageDataOutcomeCallable VodClient::DescribeLicenseUsageDataCallable(const DescribeLicenseUsageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLicenseUsageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeLicenseUsageData(request);
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

VodClient::DescribeMediaPlayStatDetailsOutcome VodClient::DescribeMediaPlayStatDetails(const DescribeMediaPlayStatDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaPlayStatDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaPlayStatDetailsResponse rsp = DescribeMediaPlayStatDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaPlayStatDetailsOutcome(rsp);
        else
            return DescribeMediaPlayStatDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaPlayStatDetailsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeMediaPlayStatDetailsAsync(const DescribeMediaPlayStatDetailsRequest& request, const DescribeMediaPlayStatDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaPlayStatDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeMediaPlayStatDetailsOutcomeCallable VodClient::DescribeMediaPlayStatDetailsCallable(const DescribeMediaPlayStatDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaPlayStatDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaPlayStatDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeMediaProcessUsageDataOutcome VodClient::DescribeMediaProcessUsageData(const DescribeMediaProcessUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaProcessUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaProcessUsageDataResponse rsp = DescribeMediaProcessUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaProcessUsageDataOutcome(rsp);
        else
            return DescribeMediaProcessUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaProcessUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeMediaProcessUsageDataAsync(const DescribeMediaProcessUsageDataRequest& request, const DescribeMediaProcessUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaProcessUsageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeMediaProcessUsageDataOutcomeCallable VodClient::DescribeMediaProcessUsageDataCallable(const DescribeMediaProcessUsageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaProcessUsageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaProcessUsageData(request);
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

VodClient::DescribePrepaidProductsOutcome VodClient::DescribePrepaidProducts(const DescribePrepaidProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrepaidProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrepaidProductsResponse rsp = DescribePrepaidProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrepaidProductsOutcome(rsp);
        else
            return DescribePrepaidProductsOutcome(o.GetError());
    }
    else
    {
        return DescribePrepaidProductsOutcome(outcome.GetError());
    }
}

void VodClient::DescribePrepaidProductsAsync(const DescribePrepaidProductsRequest& request, const DescribePrepaidProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrepaidProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribePrepaidProductsOutcomeCallable VodClient::DescribePrepaidProductsCallable(const DescribePrepaidProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrepaidProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribePrepaidProducts(request);
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

VodClient::DescribeQualityInspectTemplatesOutcome VodClient::DescribeQualityInspectTemplates(const DescribeQualityInspectTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityInspectTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityInspectTemplatesResponse rsp = DescribeQualityInspectTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityInspectTemplatesOutcome(rsp);
        else
            return DescribeQualityInspectTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityInspectTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeQualityInspectTemplatesAsync(const DescribeQualityInspectTemplatesRequest& request, const DescribeQualityInspectTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityInspectTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeQualityInspectTemplatesOutcomeCallable VodClient::DescribeQualityInspectTemplatesCallable(const DescribeQualityInspectTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityInspectTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityInspectTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeRebuildMediaTemplatesOutcome VodClient::DescribeRebuildMediaTemplates(const DescribeRebuildMediaTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRebuildMediaTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRebuildMediaTemplatesResponse rsp = DescribeRebuildMediaTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRebuildMediaTemplatesOutcome(rsp);
        else
            return DescribeRebuildMediaTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeRebuildMediaTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeRebuildMediaTemplatesAsync(const DescribeRebuildMediaTemplatesRequest& request, const DescribeRebuildMediaTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRebuildMediaTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeRebuildMediaTemplatesOutcomeCallable VodClient::DescribeRebuildMediaTemplatesCallable(const DescribeRebuildMediaTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRebuildMediaTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRebuildMediaTemplates(request);
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

VodClient::DescribeReviewTemplatesOutcome VodClient::DescribeReviewTemplates(const DescribeReviewTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReviewTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReviewTemplatesResponse rsp = DescribeReviewTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReviewTemplatesOutcome(rsp);
        else
            return DescribeReviewTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeReviewTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeReviewTemplatesAsync(const DescribeReviewTemplatesRequest& request, const DescribeReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReviewTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeReviewTemplatesOutcomeCallable VodClient::DescribeReviewTemplatesCallable(const DescribeReviewTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReviewTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeReviewTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeRoundPlaysOutcome VodClient::DescribeRoundPlays(const DescribeRoundPlaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoundPlays");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoundPlaysResponse rsp = DescribeRoundPlaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoundPlaysOutcome(rsp);
        else
            return DescribeRoundPlaysOutcome(o.GetError());
    }
    else
    {
        return DescribeRoundPlaysOutcome(outcome.GetError());
    }
}

void VodClient::DescribeRoundPlaysAsync(const DescribeRoundPlaysRequest& request, const DescribeRoundPlaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoundPlays(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeRoundPlaysOutcomeCallable VodClient::DescribeRoundPlaysCallable(const DescribeRoundPlaysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoundPlaysOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoundPlays(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeSampleSnapshotTemplatesOutcome VodClient::DescribeSampleSnapshotTemplates(const DescribeSampleSnapshotTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSampleSnapshotTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSampleSnapshotTemplatesResponse rsp = DescribeSampleSnapshotTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSampleSnapshotTemplatesOutcome(rsp);
        else
            return DescribeSampleSnapshotTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSampleSnapshotTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeSampleSnapshotTemplatesAsync(const DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleSnapshotTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeSampleSnapshotTemplatesOutcomeCallable VodClient::DescribeSampleSnapshotTemplatesCallable(const DescribeSampleSnapshotTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSampleSnapshotTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSampleSnapshotTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeSnapshotByTimeOffsetTemplatesOutcome VodClient::DescribeSnapshotByTimeOffsetTemplates(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotByTimeOffsetTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotByTimeOffsetTemplatesResponse rsp = DescribeSnapshotByTimeOffsetTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotByTimeOffsetTemplatesOutcome(rsp);
        else
            return DescribeSnapshotByTimeOffsetTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotByTimeOffsetTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeSnapshotByTimeOffsetTemplatesAsync(const DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotByTimeOffsetTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable VodClient::DescribeSnapshotByTimeOffsetTemplatesCallable(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotByTimeOffsetTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotByTimeOffsetTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeStorageDataOutcome VodClient::DescribeStorageData(const DescribeStorageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageDataResponse rsp = DescribeStorageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageDataOutcome(rsp);
        else
            return DescribeStorageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeStorageDataAsync(const DescribeStorageDataRequest& request, const DescribeStorageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorageData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeStorageDataOutcomeCallable VodClient::DescribeStorageDataCallable(const DescribeStorageDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorageData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeStorageDetailsOutcome VodClient::DescribeStorageDetails(const DescribeStorageDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageDetailsResponse rsp = DescribeStorageDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageDetailsOutcome(rsp);
        else
            return DescribeStorageDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageDetailsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeStorageDetailsAsync(const DescribeStorageDetailsRequest& request, const DescribeStorageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorageDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeStorageDetailsOutcomeCallable VodClient::DescribeStorageDetailsCallable(const DescribeStorageDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorageDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeStorageRegionsOutcome VodClient::DescribeStorageRegions(const DescribeStorageRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorageRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageRegionsResponse rsp = DescribeStorageRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageRegionsOutcome(rsp);
        else
            return DescribeStorageRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageRegionsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeStorageRegionsAsync(const DescribeStorageRegionsRequest& request, const DescribeStorageRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStorageRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeStorageRegionsOutcomeCallable VodClient::DescribeStorageRegionsCallable(const DescribeStorageRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStorageRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStorageRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeSubAppIdsOutcome VodClient::DescribeSubAppIds(const DescribeSubAppIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubAppIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubAppIdsResponse rsp = DescribeSubAppIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubAppIdsOutcome(rsp);
        else
            return DescribeSubAppIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubAppIdsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeSubAppIdsAsync(const DescribeSubAppIdsRequest& request, const DescribeSubAppIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubAppIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeSubAppIdsOutcomeCallable VodClient::DescribeSubAppIdsCallable(const DescribeSubAppIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubAppIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubAppIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::DescribeSuperPlayerConfigsOutcome VodClient::DescribeSuperPlayerConfigs(const DescribeSuperPlayerConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuperPlayerConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuperPlayerConfigsResponse rsp = DescribeSuperPlayerConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuperPlayerConfigsOutcome(rsp);
        else
            return DescribeSuperPlayerConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeSuperPlayerConfigsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeSuperPlayerConfigsAsync(const DescribeSuperPlayerConfigsRequest& request, const DescribeSuperPlayerConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSuperPlayerConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeSuperPlayerConfigsOutcomeCallable VodClient::DescribeSuperPlayerConfigsCallable(const DescribeSuperPlayerConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSuperPlayerConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSuperPlayerConfigs(request);
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

VodClient::DescribeVodDomainsOutcome VodClient::DescribeVodDomains(const DescribeVodDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVodDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVodDomainsResponse rsp = DescribeVodDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVodDomainsOutcome(rsp);
        else
            return DescribeVodDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeVodDomainsOutcome(outcome.GetError());
    }
}

void VodClient::DescribeVodDomainsAsync(const DescribeVodDomainsRequest& request, const DescribeVodDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVodDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::DescribeVodDomainsOutcomeCallable VodClient::DescribeVodDomainsCallable(const DescribeVodDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVodDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVodDomains(request);
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

VodClient::EnhanceMediaByTemplateOutcome VodClient::EnhanceMediaByTemplate(const EnhanceMediaByTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "EnhanceMediaByTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnhanceMediaByTemplateResponse rsp = EnhanceMediaByTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnhanceMediaByTemplateOutcome(rsp);
        else
            return EnhanceMediaByTemplateOutcome(o.GetError());
    }
    else
    {
        return EnhanceMediaByTemplateOutcome(outcome.GetError());
    }
}

void VodClient::EnhanceMediaByTemplateAsync(const EnhanceMediaByTemplateRequest& request, const EnhanceMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnhanceMediaByTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::EnhanceMediaByTemplateOutcomeCallable VodClient::EnhanceMediaByTemplateCallable(const EnhanceMediaByTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnhanceMediaByTemplateOutcome()>>(
        [this, request]()
        {
            return this->EnhanceMediaByTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::EnhanceMediaQualityOutcome VodClient::EnhanceMediaQuality(const EnhanceMediaQualityRequest &request)
{
    auto outcome = MakeRequest(request, "EnhanceMediaQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnhanceMediaQualityResponse rsp = EnhanceMediaQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnhanceMediaQualityOutcome(rsp);
        else
            return EnhanceMediaQualityOutcome(o.GetError());
    }
    else
    {
        return EnhanceMediaQualityOutcome(outcome.GetError());
    }
}

void VodClient::EnhanceMediaQualityAsync(const EnhanceMediaQualityRequest& request, const EnhanceMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnhanceMediaQuality(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::EnhanceMediaQualityOutcomeCallable VodClient::EnhanceMediaQualityCallable(const EnhanceMediaQualityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnhanceMediaQualityOutcome()>>(
        [this, request]()
        {
            return this->EnhanceMediaQuality(request);
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

VodClient::ExtractCopyRightWatermarkOutcome VodClient::ExtractCopyRightWatermark(const ExtractCopyRightWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractCopyRightWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractCopyRightWatermarkResponse rsp = ExtractCopyRightWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractCopyRightWatermarkOutcome(rsp);
        else
            return ExtractCopyRightWatermarkOutcome(o.GetError());
    }
    else
    {
        return ExtractCopyRightWatermarkOutcome(outcome.GetError());
    }
}

void VodClient::ExtractCopyRightWatermarkAsync(const ExtractCopyRightWatermarkRequest& request, const ExtractCopyRightWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExtractCopyRightWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ExtractCopyRightWatermarkOutcomeCallable VodClient::ExtractCopyRightWatermarkCallable(const ExtractCopyRightWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExtractCopyRightWatermarkOutcome()>>(
        [this, request]()
        {
            return this->ExtractCopyRightWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ExtractTraceWatermarkOutcome VodClient::ExtractTraceWatermark(const ExtractTraceWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "ExtractTraceWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExtractTraceWatermarkResponse rsp = ExtractTraceWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExtractTraceWatermarkOutcome(rsp);
        else
            return ExtractTraceWatermarkOutcome(o.GetError());
    }
    else
    {
        return ExtractTraceWatermarkOutcome(outcome.GetError());
    }
}

void VodClient::ExtractTraceWatermarkAsync(const ExtractTraceWatermarkRequest& request, const ExtractTraceWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExtractTraceWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ExtractTraceWatermarkOutcomeCallable VodClient::ExtractTraceWatermarkCallable(const ExtractTraceWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExtractTraceWatermarkOutcome()>>(
        [this, request]()
        {
            return this->ExtractTraceWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::FastEditMediaOutcome VodClient::FastEditMedia(const FastEditMediaRequest &request)
{
    auto outcome = MakeRequest(request, "FastEditMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FastEditMediaResponse rsp = FastEditMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FastEditMediaOutcome(rsp);
        else
            return FastEditMediaOutcome(o.GetError());
    }
    else
    {
        return FastEditMediaOutcome(outcome.GetError());
    }
}

void VodClient::FastEditMediaAsync(const FastEditMediaRequest& request, const FastEditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FastEditMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::FastEditMediaOutcomeCallable VodClient::FastEditMediaCallable(const FastEditMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FastEditMediaOutcome()>>(
        [this, request]()
        {
            return this->FastEditMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ForbidMediaDistributionOutcome VodClient::ForbidMediaDistribution(const ForbidMediaDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidMediaDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidMediaDistributionResponse rsp = ForbidMediaDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidMediaDistributionOutcome(rsp);
        else
            return ForbidMediaDistributionOutcome(o.GetError());
    }
    else
    {
        return ForbidMediaDistributionOutcome(outcome.GetError());
    }
}

void VodClient::ForbidMediaDistributionAsync(const ForbidMediaDistributionRequest& request, const ForbidMediaDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidMediaDistribution(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ForbidMediaDistributionOutcomeCallable VodClient::ForbidMediaDistributionCallable(const ForbidMediaDistributionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidMediaDistributionOutcome()>>(
        [this, request]()
        {
            return this->ForbidMediaDistribution(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::HandleCurrentPlaylistOutcome VodClient::HandleCurrentPlaylist(const HandleCurrentPlaylistRequest &request)
{
    auto outcome = MakeRequest(request, "HandleCurrentPlaylist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        HandleCurrentPlaylistResponse rsp = HandleCurrentPlaylistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return HandleCurrentPlaylistOutcome(rsp);
        else
            return HandleCurrentPlaylistOutcome(o.GetError());
    }
    else
    {
        return HandleCurrentPlaylistOutcome(outcome.GetError());
    }
}

void VodClient::HandleCurrentPlaylistAsync(const HandleCurrentPlaylistRequest& request, const HandleCurrentPlaylistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->HandleCurrentPlaylist(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::HandleCurrentPlaylistOutcomeCallable VodClient::HandleCurrentPlaylistCallable(const HandleCurrentPlaylistRequest &request)
{
    auto task = std::make_shared<std::packaged_task<HandleCurrentPlaylistOutcome()>>(
        [this, request]()
        {
            return this->HandleCurrentPlaylist(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::InspectMediaQualityOutcome VodClient::InspectMediaQuality(const InspectMediaQualityRequest &request)
{
    auto outcome = MakeRequest(request, "InspectMediaQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InspectMediaQualityResponse rsp = InspectMediaQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InspectMediaQualityOutcome(rsp);
        else
            return InspectMediaQualityOutcome(o.GetError());
    }
    else
    {
        return InspectMediaQualityOutcome(outcome.GetError());
    }
}

void VodClient::InspectMediaQualityAsync(const InspectMediaQualityRequest& request, const InspectMediaQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InspectMediaQuality(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::InspectMediaQualityOutcomeCallable VodClient::InspectMediaQualityCallable(const InspectMediaQualityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InspectMediaQualityOutcome()>>(
        [this, request]()
        {
            return this->InspectMediaQuality(request);
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

VodClient::ManageTaskOutcome VodClient::ManageTask(const ManageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ManageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageTaskResponse rsp = ManageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageTaskOutcome(rsp);
        else
            return ManageTaskOutcome(o.GetError());
    }
    else
    {
        return ManageTaskOutcome(outcome.GetError());
    }
}

void VodClient::ManageTaskAsync(const ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ManageTaskOutcomeCallable VodClient::ManageTaskCallable(const ManageTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageTaskOutcome()>>(
        [this, request]()
        {
            return this->ManageTask(request);
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

VodClient::ModifyAdaptiveDynamicStreamingTemplateOutcome VodClient::ModifyAdaptiveDynamicStreamingTemplate(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAdaptiveDynamicStreamingTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAdaptiveDynamicStreamingTemplateResponse rsp = ModifyAdaptiveDynamicStreamingTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAdaptiveDynamicStreamingTemplateOutcome(rsp);
        else
            return ModifyAdaptiveDynamicStreamingTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAdaptiveDynamicStreamingTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyAdaptiveDynamicStreamingTemplateAsync(const ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::ModifyAdaptiveDynamicStreamingTemplateCallable(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAdaptiveDynamicStreamingTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAdaptiveDynamicStreamingTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyAnimatedGraphicsTemplateOutcome VodClient::ModifyAnimatedGraphicsTemplate(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAnimatedGraphicsTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAnimatedGraphicsTemplateResponse rsp = ModifyAnimatedGraphicsTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAnimatedGraphicsTemplateOutcome(rsp);
        else
            return ModifyAnimatedGraphicsTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyAnimatedGraphicsTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyAnimatedGraphicsTemplateAsync(const ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyAnimatedGraphicsTemplateOutcomeCallable VodClient::ModifyAnimatedGraphicsTemplateCallable(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAnimatedGraphicsTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyAnimatedGraphicsTemplate(request);
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

VodClient::ModifyDefaultDistributionConfigOutcome VodClient::ModifyDefaultDistributionConfig(const ModifyDefaultDistributionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultDistributionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultDistributionConfigResponse rsp = ModifyDefaultDistributionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultDistributionConfigOutcome(rsp);
        else
            return ModifyDefaultDistributionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultDistributionConfigOutcome(outcome.GetError());
    }
}

void VodClient::ModifyDefaultDistributionConfigAsync(const ModifyDefaultDistributionConfigRequest& request, const ModifyDefaultDistributionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultDistributionConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyDefaultDistributionConfigOutcomeCallable VodClient::ModifyDefaultDistributionConfigCallable(const ModifyDefaultDistributionConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultDistributionConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultDistributionConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyDefaultStorageRegionOutcome VodClient::ModifyDefaultStorageRegion(const ModifyDefaultStorageRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultStorageRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultStorageRegionResponse rsp = ModifyDefaultStorageRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultStorageRegionOutcome(rsp);
        else
            return ModifyDefaultStorageRegionOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultStorageRegionOutcome(outcome.GetError());
    }
}

void VodClient::ModifyDefaultStorageRegionAsync(const ModifyDefaultStorageRegionRequest& request, const ModifyDefaultStorageRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultStorageRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyDefaultStorageRegionOutcomeCallable VodClient::ModifyDefaultStorageRegionCallable(const ModifyDefaultStorageRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultStorageRegionOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultStorageRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyEnhanceMediaTemplateOutcome VodClient::ModifyEnhanceMediaTemplate(const ModifyEnhanceMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnhanceMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnhanceMediaTemplateResponse rsp = ModifyEnhanceMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnhanceMediaTemplateOutcome(rsp);
        else
            return ModifyEnhanceMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyEnhanceMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyEnhanceMediaTemplateAsync(const ModifyEnhanceMediaTemplateRequest& request, const ModifyEnhanceMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnhanceMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyEnhanceMediaTemplateOutcomeCallable VodClient::ModifyEnhanceMediaTemplateCallable(const ModifyEnhanceMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnhanceMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnhanceMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyEventConfigOutcome VodClient::ModifyEventConfig(const ModifyEventConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEventConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEventConfigResponse rsp = ModifyEventConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEventConfigOutcome(rsp);
        else
            return ModifyEventConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyEventConfigOutcome(outcome.GetError());
    }
}

void VodClient::ModifyEventConfigAsync(const ModifyEventConfigRequest& request, const ModifyEventConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEventConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyEventConfigOutcomeCallable VodClient::ModifyEventConfigCallable(const ModifyEventConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEventConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyEventConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyHeadTailTemplateOutcome VodClient::ModifyHeadTailTemplate(const ModifyHeadTailTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHeadTailTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHeadTailTemplateResponse rsp = ModifyHeadTailTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHeadTailTemplateOutcome(rsp);
        else
            return ModifyHeadTailTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyHeadTailTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyHeadTailTemplateAsync(const ModifyHeadTailTemplateRequest& request, const ModifyHeadTailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHeadTailTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyHeadTailTemplateOutcomeCallable VodClient::ModifyHeadTailTemplateCallable(const ModifyHeadTailTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHeadTailTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyHeadTailTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyImageSpriteTemplateOutcome VodClient::ModifyImageSpriteTemplate(const ModifyImageSpriteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyImageSpriteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyImageSpriteTemplateResponse rsp = ModifyImageSpriteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyImageSpriteTemplateOutcome(rsp);
        else
            return ModifyImageSpriteTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyImageSpriteTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyImageSpriteTemplateAsync(const ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyImageSpriteTemplateOutcomeCallable VodClient::ModifyImageSpriteTemplateCallable(const ModifyImageSpriteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyImageSpriteTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyImageSpriteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyJustInTimeTranscodeTemplateOutcome VodClient::ModifyJustInTimeTranscodeTemplate(const ModifyJustInTimeTranscodeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJustInTimeTranscodeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJustInTimeTranscodeTemplateResponse rsp = ModifyJustInTimeTranscodeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJustInTimeTranscodeTemplateOutcome(rsp);
        else
            return ModifyJustInTimeTranscodeTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyJustInTimeTranscodeTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyJustInTimeTranscodeTemplateAsync(const ModifyJustInTimeTranscodeTemplateRequest& request, const ModifyJustInTimeTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJustInTimeTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyJustInTimeTranscodeTemplateOutcomeCallable VodClient::ModifyJustInTimeTranscodeTemplateCallable(const ModifyJustInTimeTranscodeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJustInTimeTranscodeTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyJustInTimeTranscodeTemplate(request);
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

VodClient::ModifyMediaStorageClassOutcome VodClient::ModifyMediaStorageClass(const ModifyMediaStorageClassRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMediaStorageClass");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMediaStorageClassResponse rsp = ModifyMediaStorageClassResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMediaStorageClassOutcome(rsp);
        else
            return ModifyMediaStorageClassOutcome(o.GetError());
    }
    else
    {
        return ModifyMediaStorageClassOutcome(outcome.GetError());
    }
}

void VodClient::ModifyMediaStorageClassAsync(const ModifyMediaStorageClassRequest& request, const ModifyMediaStorageClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMediaStorageClass(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyMediaStorageClassOutcomeCallable VodClient::ModifyMediaStorageClassCallable(const ModifyMediaStorageClassRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMediaStorageClassOutcome()>>(
        [this, request]()
        {
            return this->ModifyMediaStorageClass(request);
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

VodClient::ModifyQualityInspectTemplateOutcome VodClient::ModifyQualityInspectTemplate(const ModifyQualityInspectTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQualityInspectTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQualityInspectTemplateResponse rsp = ModifyQualityInspectTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQualityInspectTemplateOutcome(rsp);
        else
            return ModifyQualityInspectTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyQualityInspectTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyQualityInspectTemplateAsync(const ModifyQualityInspectTemplateRequest& request, const ModifyQualityInspectTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQualityInspectTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyQualityInspectTemplateOutcomeCallable VodClient::ModifyQualityInspectTemplateCallable(const ModifyQualityInspectTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQualityInspectTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyQualityInspectTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyRebuildMediaTemplateOutcome VodClient::ModifyRebuildMediaTemplate(const ModifyRebuildMediaTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRebuildMediaTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRebuildMediaTemplateResponse rsp = ModifyRebuildMediaTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRebuildMediaTemplateOutcome(rsp);
        else
            return ModifyRebuildMediaTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyRebuildMediaTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyRebuildMediaTemplateAsync(const ModifyRebuildMediaTemplateRequest& request, const ModifyRebuildMediaTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRebuildMediaTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyRebuildMediaTemplateOutcomeCallable VodClient::ModifyRebuildMediaTemplateCallable(const ModifyRebuildMediaTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRebuildMediaTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyRebuildMediaTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyReviewTemplateOutcome VodClient::ModifyReviewTemplate(const ModifyReviewTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReviewTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReviewTemplateResponse rsp = ModifyReviewTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReviewTemplateOutcome(rsp);
        else
            return ModifyReviewTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyReviewTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyReviewTemplateAsync(const ModifyReviewTemplateRequest& request, const ModifyReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyReviewTemplateOutcomeCallable VodClient::ModifyReviewTemplateCallable(const ModifyReviewTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyReviewTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyReviewTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyRoundPlayOutcome VodClient::ModifyRoundPlay(const ModifyRoundPlayRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoundPlay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoundPlayResponse rsp = ModifyRoundPlayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoundPlayOutcome(rsp);
        else
            return ModifyRoundPlayOutcome(o.GetError());
    }
    else
    {
        return ModifyRoundPlayOutcome(outcome.GetError());
    }
}

void VodClient::ModifyRoundPlayAsync(const ModifyRoundPlayRequest& request, const ModifyRoundPlayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoundPlay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyRoundPlayOutcomeCallable VodClient::ModifyRoundPlayCallable(const ModifyRoundPlayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoundPlayOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoundPlay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifySampleSnapshotTemplateOutcome VodClient::ModifySampleSnapshotTemplate(const ModifySampleSnapshotTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySampleSnapshotTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySampleSnapshotTemplateResponse rsp = ModifySampleSnapshotTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySampleSnapshotTemplateOutcome(rsp);
        else
            return ModifySampleSnapshotTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySampleSnapshotTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifySampleSnapshotTemplateAsync(const ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifySampleSnapshotTemplateOutcomeCallable VodClient::ModifySampleSnapshotTemplateCallable(const ModifySampleSnapshotTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySampleSnapshotTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySampleSnapshotTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifySnapshotByTimeOffsetTemplateOutcome VodClient::ModifySnapshotByTimeOffsetTemplate(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotByTimeOffsetTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotByTimeOffsetTemplateResponse rsp = ModifySnapshotByTimeOffsetTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotByTimeOffsetTemplateOutcome(rsp);
        else
            return ModifySnapshotByTimeOffsetTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotByTimeOffsetTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifySnapshotByTimeOffsetTemplateAsync(const ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifySnapshotByTimeOffsetTemplateOutcomeCallable VodClient::ModifySnapshotByTimeOffsetTemplateCallable(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotByTimeOffsetTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotByTimeOffsetTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifySubAppIdInfoOutcome VodClient::ModifySubAppIdInfo(const ModifySubAppIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubAppIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubAppIdInfoResponse rsp = ModifySubAppIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubAppIdInfoOutcome(rsp);
        else
            return ModifySubAppIdInfoOutcome(o.GetError());
    }
    else
    {
        return ModifySubAppIdInfoOutcome(outcome.GetError());
    }
}

void VodClient::ModifySubAppIdInfoAsync(const ModifySubAppIdInfoRequest& request, const ModifySubAppIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubAppIdInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifySubAppIdInfoOutcomeCallable VodClient::ModifySubAppIdInfoCallable(const ModifySubAppIdInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubAppIdInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifySubAppIdInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifySubAppIdStatusOutcome VodClient::ModifySubAppIdStatus(const ModifySubAppIdStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubAppIdStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubAppIdStatusResponse rsp = ModifySubAppIdStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubAppIdStatusOutcome(rsp);
        else
            return ModifySubAppIdStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySubAppIdStatusOutcome(outcome.GetError());
    }
}

void VodClient::ModifySubAppIdStatusAsync(const ModifySubAppIdStatusRequest& request, const ModifySubAppIdStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubAppIdStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifySubAppIdStatusOutcomeCallable VodClient::ModifySubAppIdStatusCallable(const ModifySubAppIdStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubAppIdStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySubAppIdStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifySuperPlayerConfigOutcome VodClient::ModifySuperPlayerConfig(const ModifySuperPlayerConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySuperPlayerConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySuperPlayerConfigResponse rsp = ModifySuperPlayerConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySuperPlayerConfigOutcome(rsp);
        else
            return ModifySuperPlayerConfigOutcome(o.GetError());
    }
    else
    {
        return ModifySuperPlayerConfigOutcome(outcome.GetError());
    }
}

void VodClient::ModifySuperPlayerConfigAsync(const ModifySuperPlayerConfigRequest& request, const ModifySuperPlayerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySuperPlayerConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifySuperPlayerConfigOutcomeCallable VodClient::ModifySuperPlayerConfigCallable(const ModifySuperPlayerConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySuperPlayerConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifySuperPlayerConfig(request);
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

VodClient::ModifyVodDomainAccelerateConfigOutcome VodClient::ModifyVodDomainAccelerateConfig(const ModifyVodDomainAccelerateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVodDomainAccelerateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVodDomainAccelerateConfigResponse rsp = ModifyVodDomainAccelerateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVodDomainAccelerateConfigOutcome(rsp);
        else
            return ModifyVodDomainAccelerateConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyVodDomainAccelerateConfigOutcome(outcome.GetError());
    }
}

void VodClient::ModifyVodDomainAccelerateConfigAsync(const ModifyVodDomainAccelerateConfigRequest& request, const ModifyVodDomainAccelerateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVodDomainAccelerateConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyVodDomainAccelerateConfigOutcomeCallable VodClient::ModifyVodDomainAccelerateConfigCallable(const ModifyVodDomainAccelerateConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVodDomainAccelerateConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyVodDomainAccelerateConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ModifyVodDomainConfigOutcome VodClient::ModifyVodDomainConfig(const ModifyVodDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVodDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVodDomainConfigResponse rsp = ModifyVodDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVodDomainConfigOutcome(rsp);
        else
            return ModifyVodDomainConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyVodDomainConfigOutcome(outcome.GetError());
    }
}

void VodClient::ModifyVodDomainConfigAsync(const ModifyVodDomainConfigRequest& request, const ModifyVodDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVodDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ModifyVodDomainConfigOutcomeCallable VodClient::ModifyVodDomainConfigCallable(const ModifyVodDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVodDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyVodDomainConfig(request);
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

VodClient::ParseStreamingManifestOutcome VodClient::ParseStreamingManifest(const ParseStreamingManifestRequest &request)
{
    auto outcome = MakeRequest(request, "ParseStreamingManifest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseStreamingManifestResponse rsp = ParseStreamingManifestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseStreamingManifestOutcome(rsp);
        else
            return ParseStreamingManifestOutcome(o.GetError());
    }
    else
    {
        return ParseStreamingManifestOutcome(outcome.GetError());
    }
}

void VodClient::ParseStreamingManifestAsync(const ParseStreamingManifestRequest& request, const ParseStreamingManifestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseStreamingManifest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ParseStreamingManifestOutcomeCallable VodClient::ParseStreamingManifestCallable(const ParseStreamingManifestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseStreamingManifestOutcome()>>(
        [this, request]()
        {
            return this->ParseStreamingManifest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ProcessImageOutcome VodClient::ProcessImage(const ProcessImageRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessImageResponse rsp = ProcessImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessImageOutcome(rsp);
        else
            return ProcessImageOutcome(o.GetError());
    }
    else
    {
        return ProcessImageOutcome(outcome.GetError());
    }
}

void VodClient::ProcessImageAsync(const ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ProcessImageOutcomeCallable VodClient::ProcessImageCallable(const ProcessImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessImageOutcome()>>(
        [this, request]()
        {
            return this->ProcessImage(request);
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

VodClient::PullUploadOutcome VodClient::PullUpload(const PullUploadRequest &request)
{
    auto outcome = MakeRequest(request, "PullUpload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PullUploadResponse rsp = PullUploadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PullUploadOutcome(rsp);
        else
            return PullUploadOutcome(o.GetError());
    }
    else
    {
        return PullUploadOutcome(outcome.GetError());
    }
}

void VodClient::PullUploadAsync(const PullUploadRequest& request, const PullUploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PullUpload(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::PullUploadOutcomeCallable VodClient::PullUploadCallable(const PullUploadRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PullUploadOutcome()>>(
        [this, request]()
        {
            return this->PullUpload(request);
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

VodClient::RebuildMediaOutcome VodClient::RebuildMedia(const RebuildMediaRequest &request)
{
    auto outcome = MakeRequest(request, "RebuildMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebuildMediaResponse rsp = RebuildMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebuildMediaOutcome(rsp);
        else
            return RebuildMediaOutcome(o.GetError());
    }
    else
    {
        return RebuildMediaOutcome(outcome.GetError());
    }
}

void VodClient::RebuildMediaAsync(const RebuildMediaRequest& request, const RebuildMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebuildMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::RebuildMediaOutcomeCallable VodClient::RebuildMediaCallable(const RebuildMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebuildMediaOutcome()>>(
        [this, request]()
        {
            return this->RebuildMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::RebuildMediaByTemplateOutcome VodClient::RebuildMediaByTemplate(const RebuildMediaByTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "RebuildMediaByTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RebuildMediaByTemplateResponse rsp = RebuildMediaByTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RebuildMediaByTemplateOutcome(rsp);
        else
            return RebuildMediaByTemplateOutcome(o.GetError());
    }
    else
    {
        return RebuildMediaByTemplateOutcome(outcome.GetError());
    }
}

void VodClient::RebuildMediaByTemplateAsync(const RebuildMediaByTemplateRequest& request, const RebuildMediaByTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RebuildMediaByTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::RebuildMediaByTemplateOutcomeCallable VodClient::RebuildMediaByTemplateCallable(const RebuildMediaByTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RebuildMediaByTemplateOutcome()>>(
        [this, request]()
        {
            return this->RebuildMediaByTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::RefreshUrlCacheOutcome VodClient::RefreshUrlCache(const RefreshUrlCacheRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshUrlCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshUrlCacheResponse rsp = RefreshUrlCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshUrlCacheOutcome(rsp);
        else
            return RefreshUrlCacheOutcome(o.GetError());
    }
    else
    {
        return RefreshUrlCacheOutcome(outcome.GetError());
    }
}

void VodClient::RefreshUrlCacheAsync(const RefreshUrlCacheRequest& request, const RefreshUrlCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefreshUrlCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::RefreshUrlCacheOutcomeCallable VodClient::RefreshUrlCacheCallable(const RefreshUrlCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefreshUrlCacheOutcome()>>(
        [this, request]()
        {
            return this->RefreshUrlCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::RemoveWatermarkOutcome VodClient::RemoveWatermark(const RemoveWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveWatermarkResponse rsp = RemoveWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveWatermarkOutcome(rsp);
        else
            return RemoveWatermarkOutcome(o.GetError());
    }
    else
    {
        return RemoveWatermarkOutcome(outcome.GetError());
    }
}

void VodClient::RemoveWatermarkAsync(const RemoveWatermarkRequest& request, const RemoveWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::RemoveWatermarkOutcomeCallable VodClient::RemoveWatermarkCallable(const RemoveWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveWatermarkOutcome()>>(
        [this, request]()
        {
            return this->RemoveWatermark(request);
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

VodClient::RestoreMediaOutcome VodClient::RestoreMedia(const RestoreMediaRequest &request)
{
    auto outcome = MakeRequest(request, "RestoreMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestoreMediaResponse rsp = RestoreMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestoreMediaOutcome(rsp);
        else
            return RestoreMediaOutcome(o.GetError());
    }
    else
    {
        return RestoreMediaOutcome(outcome.GetError());
    }
}

void VodClient::RestoreMediaAsync(const RestoreMediaRequest& request, const RestoreMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestoreMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::RestoreMediaOutcomeCallable VodClient::RestoreMediaCallable(const RestoreMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestoreMediaOutcome()>>(
        [this, request]()
        {
            return this->RestoreMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ReviewAudioVideoOutcome VodClient::ReviewAudioVideo(const ReviewAudioVideoRequest &request)
{
    auto outcome = MakeRequest(request, "ReviewAudioVideo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReviewAudioVideoResponse rsp = ReviewAudioVideoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReviewAudioVideoOutcome(rsp);
        else
            return ReviewAudioVideoOutcome(o.GetError());
    }
    else
    {
        return ReviewAudioVideoOutcome(outcome.GetError());
    }
}

void VodClient::ReviewAudioVideoAsync(const ReviewAudioVideoRequest& request, const ReviewAudioVideoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReviewAudioVideo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ReviewAudioVideoOutcomeCallable VodClient::ReviewAudioVideoCallable(const ReviewAudioVideoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReviewAudioVideoOutcome()>>(
        [this, request]()
        {
            return this->ReviewAudioVideo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::ReviewImageOutcome VodClient::ReviewImage(const ReviewImageRequest &request)
{
    auto outcome = MakeRequest(request, "ReviewImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReviewImageResponse rsp = ReviewImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReviewImageOutcome(rsp);
        else
            return ReviewImageOutcome(o.GetError());
    }
    else
    {
        return ReviewImageOutcome(outcome.GetError());
    }
}

void VodClient::ReviewImageAsync(const ReviewImageRequest& request, const ReviewImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReviewImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::ReviewImageOutcomeCallable VodClient::ReviewImageCallable(const ReviewImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReviewImageOutcome()>>(
        [this, request]()
        {
            return this->ReviewImage(request);
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

VodClient::SetCLSPushTargetOutcome VodClient::SetCLSPushTarget(const SetCLSPushTargetRequest &request)
{
    auto outcome = MakeRequest(request, "SetCLSPushTarget");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetCLSPushTargetResponse rsp = SetCLSPushTargetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetCLSPushTargetOutcome(rsp);
        else
            return SetCLSPushTargetOutcome(o.GetError());
    }
    else
    {
        return SetCLSPushTargetOutcome(outcome.GetError());
    }
}

void VodClient::SetCLSPushTargetAsync(const SetCLSPushTargetRequest& request, const SetCLSPushTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetCLSPushTarget(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SetCLSPushTargetOutcomeCallable VodClient::SetCLSPushTargetCallable(const SetCLSPushTargetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetCLSPushTargetOutcome()>>(
        [this, request]()
        {
            return this->SetCLSPushTarget(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::SetDrmKeyProviderInfoOutcome VodClient::SetDrmKeyProviderInfo(const SetDrmKeyProviderInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SetDrmKeyProviderInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDrmKeyProviderInfoResponse rsp = SetDrmKeyProviderInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDrmKeyProviderInfoOutcome(rsp);
        else
            return SetDrmKeyProviderInfoOutcome(o.GetError());
    }
    else
    {
        return SetDrmKeyProviderInfoOutcome(outcome.GetError());
    }
}

void VodClient::SetDrmKeyProviderInfoAsync(const SetDrmKeyProviderInfoRequest& request, const SetDrmKeyProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetDrmKeyProviderInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SetDrmKeyProviderInfoOutcomeCallable VodClient::SetDrmKeyProviderInfoCallable(const SetDrmKeyProviderInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetDrmKeyProviderInfoOutcome()>>(
        [this, request]()
        {
            return this->SetDrmKeyProviderInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::SetVodDomainCertificateOutcome VodClient::SetVodDomainCertificate(const SetVodDomainCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "SetVodDomainCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetVodDomainCertificateResponse rsp = SetVodDomainCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetVodDomainCertificateOutcome(rsp);
        else
            return SetVodDomainCertificateOutcome(o.GetError());
    }
    else
    {
        return SetVodDomainCertificateOutcome(outcome.GetError());
    }
}

void VodClient::SetVodDomainCertificateAsync(const SetVodDomainCertificateRequest& request, const SetVodDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetVodDomainCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SetVodDomainCertificateOutcomeCallable VodClient::SetVodDomainCertificateCallable(const SetVodDomainCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetVodDomainCertificateOutcome()>>(
        [this, request]()
        {
            return this->SetVodDomainCertificate(request);
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

VodClient::SplitMediaOutcome VodClient::SplitMedia(const SplitMediaRequest &request)
{
    auto outcome = MakeRequest(request, "SplitMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SplitMediaResponse rsp = SplitMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SplitMediaOutcome(rsp);
        else
            return SplitMediaOutcome(o.GetError());
    }
    else
    {
        return SplitMediaOutcome(outcome.GetError());
    }
}

void VodClient::SplitMediaAsync(const SplitMediaRequest& request, const SplitMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SplitMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::SplitMediaOutcomeCallable VodClient::SplitMediaCallable(const SplitMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SplitMediaOutcome()>>(
        [this, request]()
        {
            return this->SplitMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::VerifyDomainRecordOutcome VodClient::VerifyDomainRecord(const VerifyDomainRecordRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDomainRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDomainRecordResponse rsp = VerifyDomainRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDomainRecordOutcome(rsp);
        else
            return VerifyDomainRecordOutcome(o.GetError());
    }
    else
    {
        return VerifyDomainRecordOutcome(outcome.GetError());
    }
}

void VodClient::VerifyDomainRecordAsync(const VerifyDomainRecordRequest& request, const VerifyDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyDomainRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::VerifyDomainRecordOutcomeCallable VodClient::VerifyDomainRecordCallable(const VerifyDomainRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyDomainRecordOutcome()>>(
        [this, request]()
        {
            return this->VerifyDomainRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VodClient::WeChatMiniProgramPublishOutcome VodClient::WeChatMiniProgramPublish(const WeChatMiniProgramPublishRequest &request)
{
    auto outcome = MakeRequest(request, "WeChatMiniProgramPublish");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WeChatMiniProgramPublishResponse rsp = WeChatMiniProgramPublishResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WeChatMiniProgramPublishOutcome(rsp);
        else
            return WeChatMiniProgramPublishOutcome(o.GetError());
    }
    else
    {
        return WeChatMiniProgramPublishOutcome(outcome.GetError());
    }
}

void VodClient::WeChatMiniProgramPublishAsync(const WeChatMiniProgramPublishRequest& request, const WeChatMiniProgramPublishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WeChatMiniProgramPublish(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VodClient::WeChatMiniProgramPublishOutcomeCallable VodClient::WeChatMiniProgramPublishCallable(const WeChatMiniProgramPublishRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WeChatMiniProgramPublishOutcome()>>(
        [this, request]()
        {
            return this->WeChatMiniProgramPublish(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

