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

#include <tencentcloud/mps/v20190612/MpsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mps::V20190612;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-12";
    const string ENDPOINT = "mps.tencentcloudapi.com";
}

MpsClient::MpsClient(const Credential &credential, const string &region) :
    MpsClient(credential, region, ClientProfile())
{
}

MpsClient::MpsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MpsClient::BatchDeleteStreamLinkFlowOutcome MpsClient::BatchDeleteStreamLinkFlow(const BatchDeleteStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteStreamLinkFlowResponse rsp = BatchDeleteStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteStreamLinkFlowOutcome(rsp);
        else
            return BatchDeleteStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::BatchDeleteStreamLinkFlowAsync(const BatchDeleteStreamLinkFlowRequest& request, const BatchDeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::BatchDeleteStreamLinkFlowOutcomeCallable MpsClient::BatchDeleteStreamLinkFlowCallable(const BatchDeleteStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::BatchProcessMediaOutcome MpsClient::BatchProcessMedia(const BatchProcessMediaRequest &request)
{
    auto outcome = MakeRequest(request, "BatchProcessMedia");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchProcessMediaResponse rsp = BatchProcessMediaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchProcessMediaOutcome(rsp);
        else
            return BatchProcessMediaOutcome(o.GetError());
    }
    else
    {
        return BatchProcessMediaOutcome(outcome.GetError());
    }
}

void MpsClient::BatchProcessMediaAsync(const BatchProcessMediaRequest& request, const BatchProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchProcessMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::BatchProcessMediaOutcomeCallable MpsClient::BatchProcessMediaCallable(const BatchProcessMediaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchProcessMediaOutcome()>>(
        [this, request]()
        {
            return this->BatchProcessMedia(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::BatchStartStreamLinkFlowOutcome MpsClient::BatchStartStreamLinkFlow(const BatchStartStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStartStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStartStreamLinkFlowResponse rsp = BatchStartStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStartStreamLinkFlowOutcome(rsp);
        else
            return BatchStartStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return BatchStartStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::BatchStartStreamLinkFlowAsync(const BatchStartStreamLinkFlowRequest& request, const BatchStartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStartStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::BatchStartStreamLinkFlowOutcomeCallable MpsClient::BatchStartStreamLinkFlowCallable(const BatchStartStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStartStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->BatchStartStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::BatchStopStreamLinkFlowOutcome MpsClient::BatchStopStreamLinkFlow(const BatchStopStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "BatchStopStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchStopStreamLinkFlowResponse rsp = BatchStopStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchStopStreamLinkFlowOutcome(rsp);
        else
            return BatchStopStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return BatchStopStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::BatchStopStreamLinkFlowAsync(const BatchStopStreamLinkFlowRequest& request, const BatchStopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchStopStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::BatchStopStreamLinkFlowOutcomeCallable MpsClient::BatchStopStreamLinkFlowCallable(const BatchStopStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchStopStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->BatchStopStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateAIAnalysisTemplateOutcome MpsClient::CreateAIAnalysisTemplate(const CreateAIAnalysisTemplateRequest &request)
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

void MpsClient::CreateAIAnalysisTemplateAsync(const CreateAIAnalysisTemplateRequest& request, const CreateAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAIAnalysisTemplateOutcomeCallable MpsClient::CreateAIAnalysisTemplateCallable(const CreateAIAnalysisTemplateRequest &request)
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

MpsClient::CreateAIRecognitionTemplateOutcome MpsClient::CreateAIRecognitionTemplate(const CreateAIRecognitionTemplateRequest &request)
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

void MpsClient::CreateAIRecognitionTemplateAsync(const CreateAIRecognitionTemplateRequest& request, const CreateAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAIRecognitionTemplateOutcomeCallable MpsClient::CreateAIRecognitionTemplateCallable(const CreateAIRecognitionTemplateRequest &request)
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

MpsClient::CreateAdaptiveDynamicStreamingTemplateOutcome MpsClient::CreateAdaptiveDynamicStreamingTemplate(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
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

void MpsClient::CreateAdaptiveDynamicStreamingTemplateAsync(const CreateAdaptiveDynamicStreamingTemplateRequest& request, const CreateAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::CreateAdaptiveDynamicStreamingTemplateCallable(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
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

MpsClient::CreateAnimatedGraphicsTemplateOutcome MpsClient::CreateAnimatedGraphicsTemplate(const CreateAnimatedGraphicsTemplateRequest &request)
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

void MpsClient::CreateAnimatedGraphicsTemplateAsync(const CreateAnimatedGraphicsTemplateRequest& request, const CreateAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAnimatedGraphicsTemplateOutcomeCallable MpsClient::CreateAnimatedGraphicsTemplateCallable(const CreateAnimatedGraphicsTemplateRequest &request)
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

MpsClient::CreateAsrHotwordsOutcome MpsClient::CreateAsrHotwords(const CreateAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAsrHotwordsResponse rsp = CreateAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAsrHotwordsOutcome(rsp);
        else
            return CreateAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return CreateAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::CreateAsrHotwordsAsync(const CreateAsrHotwordsRequest& request, const CreateAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateAsrHotwordsOutcomeCallable MpsClient::CreateAsrHotwordsCallable(const CreateAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->CreateAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateContentReviewTemplateOutcome MpsClient::CreateContentReviewTemplate(const CreateContentReviewTemplateRequest &request)
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

void MpsClient::CreateContentReviewTemplateAsync(const CreateContentReviewTemplateRequest& request, const CreateContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateContentReviewTemplateOutcomeCallable MpsClient::CreateContentReviewTemplateCallable(const CreateContentReviewTemplateRequest &request)
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

MpsClient::CreateImageSpriteTemplateOutcome MpsClient::CreateImageSpriteTemplate(const CreateImageSpriteTemplateRequest &request)
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

void MpsClient::CreateImageSpriteTemplateAsync(const CreateImageSpriteTemplateRequest& request, const CreateImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateImageSpriteTemplateOutcomeCallable MpsClient::CreateImageSpriteTemplateCallable(const CreateImageSpriteTemplateRequest &request)
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

MpsClient::CreateLiveRecordTemplateOutcome MpsClient::CreateLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request)
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

void MpsClient::CreateLiveRecordTemplateAsync(const CreateLiveRecordTemplateRequest& request, const CreateLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateLiveRecordTemplateOutcomeCallable MpsClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreatePersonSampleOutcome MpsClient::CreatePersonSample(const CreatePersonSampleRequest &request)
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

void MpsClient::CreatePersonSampleAsync(const CreatePersonSampleRequest& request, const CreatePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreatePersonSampleOutcomeCallable MpsClient::CreatePersonSampleCallable(const CreatePersonSampleRequest &request)
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

MpsClient::CreateQualityControlTemplateOutcome MpsClient::CreateQualityControlTemplate(const CreateQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQualityControlTemplateResponse rsp = CreateQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQualityControlTemplateOutcome(rsp);
        else
            return CreateQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateQualityControlTemplateAsync(const CreateQualityControlTemplateRequest& request, const CreateQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateQualityControlTemplateOutcomeCallable MpsClient::CreateQualityControlTemplateCallable(const CreateQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSampleSnapshotTemplateOutcome MpsClient::CreateSampleSnapshotTemplate(const CreateSampleSnapshotTemplateRequest &request)
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

void MpsClient::CreateSampleSnapshotTemplateAsync(const CreateSampleSnapshotTemplateRequest& request, const CreateSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSampleSnapshotTemplateOutcomeCallable MpsClient::CreateSampleSnapshotTemplateCallable(const CreateSampleSnapshotTemplateRequest &request)
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

MpsClient::CreateScheduleOutcome MpsClient::CreateSchedule(const CreateScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScheduleResponse rsp = CreateScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScheduleOutcome(rsp);
        else
            return CreateScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::CreateScheduleAsync(const CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateScheduleOutcomeCallable MpsClient::CreateScheduleCallable(const CreateScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScheduleOutcome()>>(
        [this, request]()
        {
            return this->CreateSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSmartSubtitleTemplateOutcome MpsClient::CreateSmartSubtitleTemplate(const CreateSmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSmartSubtitleTemplateResponse rsp = CreateSmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSmartSubtitleTemplateOutcome(rsp);
        else
            return CreateSmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSmartSubtitleTemplateAsync(const CreateSmartSubtitleTemplateRequest& request, const CreateSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSmartSubtitleTemplateOutcomeCallable MpsClient::CreateSmartSubtitleTemplateCallable(const CreateSmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateSmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateSnapshotByTimeOffsetTemplateOutcome MpsClient::CreateSnapshotByTimeOffsetTemplate(const CreateSnapshotByTimeOffsetTemplateRequest &request)
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

void MpsClient::CreateSnapshotByTimeOffsetTemplateAsync(const CreateSnapshotByTimeOffsetTemplateRequest& request, const CreateSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::CreateSnapshotByTimeOffsetTemplateCallable(const CreateSnapshotByTimeOffsetTemplateRequest &request)
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

MpsClient::CreateStreamLinkEventOutcome MpsClient::CreateStreamLinkEvent(const CreateStreamLinkEventRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkEventResponse rsp = CreateStreamLinkEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkEventOutcome(rsp);
        else
            return CreateStreamLinkEventOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkEventOutcome(outcome.GetError());
    }
}

void MpsClient::CreateStreamLinkEventAsync(const CreateStreamLinkEventRequest& request, const CreateStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateStreamLinkEventOutcomeCallable MpsClient::CreateStreamLinkEventCallable(const CreateStreamLinkEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkEventOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateStreamLinkFlowOutcome MpsClient::CreateStreamLinkFlow(const CreateStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkFlowResponse rsp = CreateStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkFlowOutcome(rsp);
        else
            return CreateStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::CreateStreamLinkFlowAsync(const CreateStreamLinkFlowRequest& request, const CreateStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateStreamLinkFlowOutcomeCallable MpsClient::CreateStreamLinkFlowCallable(const CreateStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateStreamLinkInputOutcome MpsClient::CreateStreamLinkInput(const CreateStreamLinkInputRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkInputResponse rsp = CreateStreamLinkInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkInputOutcome(rsp);
        else
            return CreateStreamLinkInputOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkInputOutcome(outcome.GetError());
    }
}

void MpsClient::CreateStreamLinkInputAsync(const CreateStreamLinkInputRequest& request, const CreateStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateStreamLinkInputOutcomeCallable MpsClient::CreateStreamLinkInputCallable(const CreateStreamLinkInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkInputOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateStreamLinkOutputInfoOutcome MpsClient::CreateStreamLinkOutputInfo(const CreateStreamLinkOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkOutputInfoResponse rsp = CreateStreamLinkOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkOutputInfoOutcome(rsp);
        else
            return CreateStreamLinkOutputInfoOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkOutputInfoOutcome(outcome.GetError());
    }
}

void MpsClient::CreateStreamLinkOutputInfoAsync(const CreateStreamLinkOutputInfoRequest& request, const CreateStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateStreamLinkOutputInfoOutcomeCallable MpsClient::CreateStreamLinkOutputInfoCallable(const CreateStreamLinkOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateStreamLinkSecurityGroupOutcome MpsClient::CreateStreamLinkSecurityGroup(const CreateStreamLinkSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStreamLinkSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStreamLinkSecurityGroupResponse rsp = CreateStreamLinkSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStreamLinkSecurityGroupOutcome(rsp);
        else
            return CreateStreamLinkSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return CreateStreamLinkSecurityGroupOutcome(outcome.GetError());
    }
}

void MpsClient::CreateStreamLinkSecurityGroupAsync(const CreateStreamLinkSecurityGroupRequest& request, const CreateStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStreamLinkSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateStreamLinkSecurityGroupOutcomeCallable MpsClient::CreateStreamLinkSecurityGroupCallable(const CreateStreamLinkSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStreamLinkSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateStreamLinkSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateTranscodeTemplateOutcome MpsClient::CreateTranscodeTemplate(const CreateTranscodeTemplateRequest &request)
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

void MpsClient::CreateTranscodeTemplateAsync(const CreateTranscodeTemplateRequest& request, const CreateTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateTranscodeTemplateOutcomeCallable MpsClient::CreateTranscodeTemplateCallable(const CreateTranscodeTemplateRequest &request)
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

MpsClient::CreateVideoDatabaseEntryTaskOutcome MpsClient::CreateVideoDatabaseEntryTask(const CreateVideoDatabaseEntryTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoDatabaseEntryTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoDatabaseEntryTaskResponse rsp = CreateVideoDatabaseEntryTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoDatabaseEntryTaskOutcome(rsp);
        else
            return CreateVideoDatabaseEntryTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoDatabaseEntryTaskOutcome(outcome.GetError());
    }
}

void MpsClient::CreateVideoDatabaseEntryTaskAsync(const CreateVideoDatabaseEntryTaskRequest& request, const CreateVideoDatabaseEntryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoDatabaseEntryTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateVideoDatabaseEntryTaskOutcomeCallable MpsClient::CreateVideoDatabaseEntryTaskCallable(const CreateVideoDatabaseEntryTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoDatabaseEntryTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoDatabaseEntryTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateVideoSearchTaskOutcome MpsClient::CreateVideoSearchTask(const CreateVideoSearchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoSearchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoSearchTaskResponse rsp = CreateVideoSearchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoSearchTaskOutcome(rsp);
        else
            return CreateVideoSearchTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoSearchTaskOutcome(outcome.GetError());
    }
}

void MpsClient::CreateVideoSearchTaskAsync(const CreateVideoSearchTaskRequest& request, const CreateVideoSearchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVideoSearchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateVideoSearchTaskOutcomeCallable MpsClient::CreateVideoSearchTaskCallable(const CreateVideoSearchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVideoSearchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVideoSearchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::CreateWatermarkTemplateOutcome MpsClient::CreateWatermarkTemplate(const CreateWatermarkTemplateRequest &request)
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

void MpsClient::CreateWatermarkTemplateAsync(const CreateWatermarkTemplateRequest& request, const CreateWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWatermarkTemplateOutcomeCallable MpsClient::CreateWatermarkTemplateCallable(const CreateWatermarkTemplateRequest &request)
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

MpsClient::CreateWordSamplesOutcome MpsClient::CreateWordSamples(const CreateWordSamplesRequest &request)
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

void MpsClient::CreateWordSamplesAsync(const CreateWordSamplesRequest& request, const CreateWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWordSamplesOutcomeCallable MpsClient::CreateWordSamplesCallable(const CreateWordSamplesRequest &request)
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

MpsClient::CreateWorkflowOutcome MpsClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::CreateWorkflowOutcomeCallable MpsClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWorkflowOutcome()>>(
        [this, request]()
        {
            return this->CreateWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteAIAnalysisTemplateOutcome MpsClient::DeleteAIAnalysisTemplate(const DeleteAIAnalysisTemplateRequest &request)
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

void MpsClient::DeleteAIAnalysisTemplateAsync(const DeleteAIAnalysisTemplateRequest& request, const DeleteAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAIAnalysisTemplateOutcomeCallable MpsClient::DeleteAIAnalysisTemplateCallable(const DeleteAIAnalysisTemplateRequest &request)
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

MpsClient::DeleteAIRecognitionTemplateOutcome MpsClient::DeleteAIRecognitionTemplate(const DeleteAIRecognitionTemplateRequest &request)
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

void MpsClient::DeleteAIRecognitionTemplateAsync(const DeleteAIRecognitionTemplateRequest& request, const DeleteAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAIRecognitionTemplateOutcomeCallable MpsClient::DeleteAIRecognitionTemplateCallable(const DeleteAIRecognitionTemplateRequest &request)
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

MpsClient::DeleteAdaptiveDynamicStreamingTemplateOutcome MpsClient::DeleteAdaptiveDynamicStreamingTemplate(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
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

void MpsClient::DeleteAdaptiveDynamicStreamingTemplateAsync(const DeleteAdaptiveDynamicStreamingTemplateRequest& request, const DeleteAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::DeleteAdaptiveDynamicStreamingTemplateCallable(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
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

MpsClient::DeleteAnimatedGraphicsTemplateOutcome MpsClient::DeleteAnimatedGraphicsTemplate(const DeleteAnimatedGraphicsTemplateRequest &request)
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

void MpsClient::DeleteAnimatedGraphicsTemplateAsync(const DeleteAnimatedGraphicsTemplateRequest& request, const DeleteAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAnimatedGraphicsTemplateOutcomeCallable MpsClient::DeleteAnimatedGraphicsTemplateCallable(const DeleteAnimatedGraphicsTemplateRequest &request)
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

MpsClient::DeleteAsrHotwordsOutcome MpsClient::DeleteAsrHotwords(const DeleteAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAsrHotwordsResponse rsp = DeleteAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAsrHotwordsOutcome(rsp);
        else
            return DeleteAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return DeleteAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteAsrHotwordsAsync(const DeleteAsrHotwordsRequest& request, const DeleteAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteAsrHotwordsOutcomeCallable MpsClient::DeleteAsrHotwordsCallable(const DeleteAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteContentReviewTemplateOutcome MpsClient::DeleteContentReviewTemplate(const DeleteContentReviewTemplateRequest &request)
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

void MpsClient::DeleteContentReviewTemplateAsync(const DeleteContentReviewTemplateRequest& request, const DeleteContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteContentReviewTemplateOutcomeCallable MpsClient::DeleteContentReviewTemplateCallable(const DeleteContentReviewTemplateRequest &request)
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

MpsClient::DeleteImageSpriteTemplateOutcome MpsClient::DeleteImageSpriteTemplate(const DeleteImageSpriteTemplateRequest &request)
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

void MpsClient::DeleteImageSpriteTemplateAsync(const DeleteImageSpriteTemplateRequest& request, const DeleteImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteImageSpriteTemplateOutcomeCallable MpsClient::DeleteImageSpriteTemplateCallable(const DeleteImageSpriteTemplateRequest &request)
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

MpsClient::DeleteLiveRecordTemplateOutcome MpsClient::DeleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request)
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

void MpsClient::DeleteLiveRecordTemplateAsync(const DeleteLiveRecordTemplateRequest& request, const DeleteLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteLiveRecordTemplateOutcomeCallable MpsClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeletePersonSampleOutcome MpsClient::DeletePersonSample(const DeletePersonSampleRequest &request)
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

void MpsClient::DeletePersonSampleAsync(const DeletePersonSampleRequest& request, const DeletePersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeletePersonSampleOutcomeCallable MpsClient::DeletePersonSampleCallable(const DeletePersonSampleRequest &request)
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

MpsClient::DeleteQualityControlTemplateOutcome MpsClient::DeleteQualityControlTemplate(const DeleteQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQualityControlTemplateResponse rsp = DeleteQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQualityControlTemplateOutcome(rsp);
        else
            return DeleteQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteQualityControlTemplateAsync(const DeleteQualityControlTemplateRequest& request, const DeleteQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteQualityControlTemplateOutcomeCallable MpsClient::DeleteQualityControlTemplateCallable(const DeleteQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSampleSnapshotTemplateOutcome MpsClient::DeleteSampleSnapshotTemplate(const DeleteSampleSnapshotTemplateRequest &request)
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

void MpsClient::DeleteSampleSnapshotTemplateAsync(const DeleteSampleSnapshotTemplateRequest& request, const DeleteSampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSampleSnapshotTemplateOutcomeCallable MpsClient::DeleteSampleSnapshotTemplateCallable(const DeleteSampleSnapshotTemplateRequest &request)
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

MpsClient::DeleteScheduleOutcome MpsClient::DeleteSchedule(const DeleteScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScheduleResponse rsp = DeleteScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScheduleOutcome(rsp);
        else
            return DeleteScheduleOutcome(o.GetError());
    }
    else
    {
        return DeleteScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteScheduleAsync(const DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteScheduleOutcomeCallable MpsClient::DeleteScheduleCallable(const DeleteScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScheduleOutcome()>>(
        [this, request]()
        {
            return this->DeleteSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSmartSubtitleTemplateOutcome MpsClient::DeleteSmartSubtitleTemplate(const DeleteSmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmartSubtitleTemplateResponse rsp = DeleteSmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmartSubtitleTemplateOutcome(rsp);
        else
            return DeleteSmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSmartSubtitleTemplateAsync(const DeleteSmartSubtitleTemplateRequest& request, const DeleteSmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSmartSubtitleTemplateOutcomeCallable MpsClient::DeleteSmartSubtitleTemplateCallable(const DeleteSmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteSmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteSnapshotByTimeOffsetTemplateOutcome MpsClient::DeleteSnapshotByTimeOffsetTemplate(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
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

void MpsClient::DeleteSnapshotByTimeOffsetTemplateAsync(const DeleteSnapshotByTimeOffsetTemplateRequest& request, const DeleteSnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::DeleteSnapshotByTimeOffsetTemplateCallable(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
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

MpsClient::DeleteStreamLinkEventOutcome MpsClient::DeleteStreamLinkEvent(const DeleteStreamLinkEventRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkEventResponse rsp = DeleteStreamLinkEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkEventOutcome(rsp);
        else
            return DeleteStreamLinkEventOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkEventOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteStreamLinkEventAsync(const DeleteStreamLinkEventRequest& request, const DeleteStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteStreamLinkEventOutcomeCallable MpsClient::DeleteStreamLinkEventCallable(const DeleteStreamLinkEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkEventOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteStreamLinkFlowOutcome MpsClient::DeleteStreamLinkFlow(const DeleteStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkFlowResponse rsp = DeleteStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkFlowOutcome(rsp);
        else
            return DeleteStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteStreamLinkFlowAsync(const DeleteStreamLinkFlowRequest& request, const DeleteStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteStreamLinkFlowOutcomeCallable MpsClient::DeleteStreamLinkFlowCallable(const DeleteStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteStreamLinkOutputOutcome MpsClient::DeleteStreamLinkOutput(const DeleteStreamLinkOutputRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkOutput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkOutputResponse rsp = DeleteStreamLinkOutputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkOutputOutcome(rsp);
        else
            return DeleteStreamLinkOutputOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkOutputOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteStreamLinkOutputAsync(const DeleteStreamLinkOutputRequest& request, const DeleteStreamLinkOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkOutput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteStreamLinkOutputOutcomeCallable MpsClient::DeleteStreamLinkOutputCallable(const DeleteStreamLinkOutputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkOutputOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkOutput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteStreamLinkSecurityGroupOutcome MpsClient::DeleteStreamLinkSecurityGroup(const DeleteStreamLinkSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStreamLinkSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStreamLinkSecurityGroupResponse rsp = DeleteStreamLinkSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStreamLinkSecurityGroupOutcome(rsp);
        else
            return DeleteStreamLinkSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteStreamLinkSecurityGroupOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteStreamLinkSecurityGroupAsync(const DeleteStreamLinkSecurityGroupRequest& request, const DeleteStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStreamLinkSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteStreamLinkSecurityGroupOutcomeCallable MpsClient::DeleteStreamLinkSecurityGroupCallable(const DeleteStreamLinkSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStreamLinkSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteStreamLinkSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DeleteTranscodeTemplateOutcome MpsClient::DeleteTranscodeTemplate(const DeleteTranscodeTemplateRequest &request)
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

void MpsClient::DeleteTranscodeTemplateAsync(const DeleteTranscodeTemplateRequest& request, const DeleteTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteTranscodeTemplateOutcomeCallable MpsClient::DeleteTranscodeTemplateCallable(const DeleteTranscodeTemplateRequest &request)
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

MpsClient::DeleteWatermarkTemplateOutcome MpsClient::DeleteWatermarkTemplate(const DeleteWatermarkTemplateRequest &request)
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

void MpsClient::DeleteWatermarkTemplateAsync(const DeleteWatermarkTemplateRequest& request, const DeleteWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWatermarkTemplateOutcomeCallable MpsClient::DeleteWatermarkTemplateCallable(const DeleteWatermarkTemplateRequest &request)
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

MpsClient::DeleteWordSamplesOutcome MpsClient::DeleteWordSamples(const DeleteWordSamplesRequest &request)
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

void MpsClient::DeleteWordSamplesAsync(const DeleteWordSamplesRequest& request, const DeleteWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWordSamplesOutcomeCallable MpsClient::DeleteWordSamplesCallable(const DeleteWordSamplesRequest &request)
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

MpsClient::DeleteWorkflowOutcome MpsClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DeleteWorkflowOutcomeCallable MpsClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWorkflowOutcome()>>(
        [this, request]()
        {
            return this->DeleteWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAIAnalysisTemplatesOutcome MpsClient::DescribeAIAnalysisTemplates(const DescribeAIAnalysisTemplatesRequest &request)
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

void MpsClient::DescribeAIAnalysisTemplatesAsync(const DescribeAIAnalysisTemplatesRequest& request, const DescribeAIAnalysisTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIAnalysisTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAIAnalysisTemplatesOutcomeCallable MpsClient::DescribeAIAnalysisTemplatesCallable(const DescribeAIAnalysisTemplatesRequest &request)
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

MpsClient::DescribeAIRecognitionTemplatesOutcome MpsClient::DescribeAIRecognitionTemplates(const DescribeAIRecognitionTemplatesRequest &request)
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

void MpsClient::DescribeAIRecognitionTemplatesAsync(const DescribeAIRecognitionTemplatesRequest& request, const DescribeAIRecognitionTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIRecognitionTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAIRecognitionTemplatesOutcomeCallable MpsClient::DescribeAIRecognitionTemplatesCallable(const DescribeAIRecognitionTemplatesRequest &request)
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

MpsClient::DescribeAdaptiveDynamicStreamingTemplatesOutcome MpsClient::DescribeAdaptiveDynamicStreamingTemplates(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
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

void MpsClient::DescribeAdaptiveDynamicStreamingTemplatesAsync(const DescribeAdaptiveDynamicStreamingTemplatesRequest& request, const DescribeAdaptiveDynamicStreamingTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAdaptiveDynamicStreamingTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable MpsClient::DescribeAdaptiveDynamicStreamingTemplatesCallable(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
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

MpsClient::DescribeAnimatedGraphicsTemplatesOutcome MpsClient::DescribeAnimatedGraphicsTemplates(const DescribeAnimatedGraphicsTemplatesRequest &request)
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

void MpsClient::DescribeAnimatedGraphicsTemplatesAsync(const DescribeAnimatedGraphicsTemplatesRequest& request, const DescribeAnimatedGraphicsTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAnimatedGraphicsTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAnimatedGraphicsTemplatesOutcomeCallable MpsClient::DescribeAnimatedGraphicsTemplatesCallable(const DescribeAnimatedGraphicsTemplatesRequest &request)
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

MpsClient::DescribeAsrHotwordsOutcome MpsClient::DescribeAsrHotwords(const DescribeAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsrHotwordsResponse rsp = DescribeAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsrHotwordsOutcome(rsp);
        else
            return DescribeAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return DescribeAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAsrHotwordsAsync(const DescribeAsrHotwordsRequest& request, const DescribeAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAsrHotwordsOutcomeCallable MpsClient::DescribeAsrHotwordsCallable(const DescribeAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeAsrHotwordsListOutcome MpsClient::DescribeAsrHotwordsList(const DescribeAsrHotwordsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsrHotwordsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsrHotwordsListResponse rsp = DescribeAsrHotwordsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsrHotwordsListOutcome(rsp);
        else
            return DescribeAsrHotwordsListOutcome(o.GetError());
    }
    else
    {
        return DescribeAsrHotwordsListOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeAsrHotwordsListAsync(const DescribeAsrHotwordsListRequest& request, const DescribeAsrHotwordsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAsrHotwordsList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeAsrHotwordsListOutcomeCallable MpsClient::DescribeAsrHotwordsListCallable(const DescribeAsrHotwordsListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAsrHotwordsListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAsrHotwordsList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeBatchTaskDetailOutcome MpsClient::DescribeBatchTaskDetail(const DescribeBatchTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskDetailResponse rsp = DescribeBatchTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskDetailOutcome(rsp);
        else
            return DescribeBatchTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeBatchTaskDetailAsync(const DescribeBatchTaskDetailRequest& request, const DescribeBatchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeBatchTaskDetailOutcomeCallable MpsClient::DescribeBatchTaskDetailCallable(const DescribeBatchTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeContentReviewTemplatesOutcome MpsClient::DescribeContentReviewTemplates(const DescribeContentReviewTemplatesRequest &request)
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

void MpsClient::DescribeContentReviewTemplatesAsync(const DescribeContentReviewTemplatesRequest& request, const DescribeContentReviewTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContentReviewTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeContentReviewTemplatesOutcomeCallable MpsClient::DescribeContentReviewTemplatesCallable(const DescribeContentReviewTemplatesRequest &request)
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

MpsClient::DescribeGroupAttachFlowsByIdOutcome MpsClient::DescribeGroupAttachFlowsById(const DescribeGroupAttachFlowsByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupAttachFlowsById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupAttachFlowsByIdResponse rsp = DescribeGroupAttachFlowsByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupAttachFlowsByIdOutcome(rsp);
        else
            return DescribeGroupAttachFlowsByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupAttachFlowsByIdOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeGroupAttachFlowsByIdAsync(const DescribeGroupAttachFlowsByIdRequest& request, const DescribeGroupAttachFlowsByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupAttachFlowsById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeGroupAttachFlowsByIdOutcomeCallable MpsClient::DescribeGroupAttachFlowsByIdCallable(const DescribeGroupAttachFlowsByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupAttachFlowsByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupAttachFlowsById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeImageSpriteTemplatesOutcome MpsClient::DescribeImageSpriteTemplates(const DescribeImageSpriteTemplatesRequest &request)
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

void MpsClient::DescribeImageSpriteTemplatesAsync(const DescribeImageSpriteTemplatesRequest& request, const DescribeImageSpriteTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageSpriteTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeImageSpriteTemplatesOutcomeCallable MpsClient::DescribeImageSpriteTemplatesCallable(const DescribeImageSpriteTemplatesRequest &request)
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

MpsClient::DescribeImageTaskDetailOutcome MpsClient::DescribeImageTaskDetail(const DescribeImageTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTaskDetailResponse rsp = DescribeImageTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTaskDetailOutcome(rsp);
        else
            return DescribeImageTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeImageTaskDetailAsync(const DescribeImageTaskDetailRequest& request, const DescribeImageTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeImageTaskDetailOutcomeCallable MpsClient::DescribeImageTaskDetailCallable(const DescribeImageTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeLiveRecordTemplatesOutcome MpsClient::DescribeLiveRecordTemplates(const DescribeLiveRecordTemplatesRequest &request)
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

void MpsClient::DescribeLiveRecordTemplatesAsync(const DescribeLiveRecordTemplatesRequest& request, const DescribeLiveRecordTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLiveRecordTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeLiveRecordTemplatesOutcomeCallable MpsClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLiveRecordTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLiveRecordTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeMediaMetaDataOutcome MpsClient::DescribeMediaMetaData(const DescribeMediaMetaDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMediaMetaData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMediaMetaDataResponse rsp = DescribeMediaMetaDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMediaMetaDataOutcome(rsp);
        else
            return DescribeMediaMetaDataOutcome(o.GetError());
    }
    else
    {
        return DescribeMediaMetaDataOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeMediaMetaDataAsync(const DescribeMediaMetaDataRequest& request, const DescribeMediaMetaDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMediaMetaData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeMediaMetaDataOutcomeCallable MpsClient::DescribeMediaMetaDataCallable(const DescribeMediaMetaDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMediaMetaDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeMediaMetaData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribePersonSamplesOutcome MpsClient::DescribePersonSamples(const DescribePersonSamplesRequest &request)
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

void MpsClient::DescribePersonSamplesAsync(const DescribePersonSamplesRequest& request, const DescribePersonSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePersonSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribePersonSamplesOutcomeCallable MpsClient::DescribePersonSamplesCallable(const DescribePersonSamplesRequest &request)
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

MpsClient::DescribeQualityControlTemplatesOutcome MpsClient::DescribeQualityControlTemplates(const DescribeQualityControlTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityControlTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityControlTemplatesResponse rsp = DescribeQualityControlTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityControlTemplatesOutcome(rsp);
        else
            return DescribeQualityControlTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityControlTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeQualityControlTemplatesAsync(const DescribeQualityControlTemplatesRequest& request, const DescribeQualityControlTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityControlTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeQualityControlTemplatesOutcomeCallable MpsClient::DescribeQualityControlTemplatesCallable(const DescribeQualityControlTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityControlTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityControlTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSampleSnapshotTemplatesOutcome MpsClient::DescribeSampleSnapshotTemplates(const DescribeSampleSnapshotTemplatesRequest &request)
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

void MpsClient::DescribeSampleSnapshotTemplatesAsync(const DescribeSampleSnapshotTemplatesRequest& request, const DescribeSampleSnapshotTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSampleSnapshotTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSampleSnapshotTemplatesOutcomeCallable MpsClient::DescribeSampleSnapshotTemplatesCallable(const DescribeSampleSnapshotTemplatesRequest &request)
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

MpsClient::DescribeSchedulesOutcome MpsClient::DescribeSchedules(const DescribeSchedulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSchedules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSchedulesResponse rsp = DescribeSchedulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSchedulesOutcome(rsp);
        else
            return DescribeSchedulesOutcome(o.GetError());
    }
    else
    {
        return DescribeSchedulesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSchedulesAsync(const DescribeSchedulesRequest& request, const DescribeSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSchedules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSchedulesOutcomeCallable MpsClient::DescribeSchedulesCallable(const DescribeSchedulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSchedulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSchedules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSmartSubtitleTemplatesOutcome MpsClient::DescribeSmartSubtitleTemplates(const DescribeSmartSubtitleTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmartSubtitleTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmartSubtitleTemplatesResponse rsp = DescribeSmartSubtitleTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmartSubtitleTemplatesOutcome(rsp);
        else
            return DescribeSmartSubtitleTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSmartSubtitleTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSmartSubtitleTemplatesAsync(const DescribeSmartSubtitleTemplatesRequest& request, const DescribeSmartSubtitleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSmartSubtitleTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSmartSubtitleTemplatesOutcomeCallable MpsClient::DescribeSmartSubtitleTemplatesCallable(const DescribeSmartSubtitleTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSmartSubtitleTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSmartSubtitleTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeSnapshotByTimeOffsetTemplatesOutcome MpsClient::DescribeSnapshotByTimeOffsetTemplates(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
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

void MpsClient::DescribeSnapshotByTimeOffsetTemplatesAsync(const DescribeSnapshotByTimeOffsetTemplatesRequest& request, const DescribeSnapshotByTimeOffsetTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotByTimeOffsetTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable MpsClient::DescribeSnapshotByTimeOffsetTemplatesCallable(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
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

MpsClient::DescribeStreamLinkActivateStateOutcome MpsClient::DescribeStreamLinkActivateState(const DescribeStreamLinkActivateStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkActivateState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkActivateStateResponse rsp = DescribeStreamLinkActivateStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkActivateStateOutcome(rsp);
        else
            return DescribeStreamLinkActivateStateOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkActivateStateOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkActivateStateAsync(const DescribeStreamLinkActivateStateRequest& request, const DescribeStreamLinkActivateStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkActivateState(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkActivateStateOutcomeCallable MpsClient::DescribeStreamLinkActivateStateCallable(const DescribeStreamLinkActivateStateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkActivateStateOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkActivateState(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkEventOutcome MpsClient::DescribeStreamLinkEvent(const DescribeStreamLinkEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkEventResponse rsp = DescribeStreamLinkEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkEventOutcome(rsp);
        else
            return DescribeStreamLinkEventOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkEventOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkEventAsync(const DescribeStreamLinkEventRequest& request, const DescribeStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkEventOutcomeCallable MpsClient::DescribeStreamLinkEventCallable(const DescribeStreamLinkEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkEventAttachedFlowsOutcome MpsClient::DescribeStreamLinkEventAttachedFlows(const DescribeStreamLinkEventAttachedFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkEventAttachedFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkEventAttachedFlowsResponse rsp = DescribeStreamLinkEventAttachedFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkEventAttachedFlowsOutcome(rsp);
        else
            return DescribeStreamLinkEventAttachedFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkEventAttachedFlowsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkEventAttachedFlowsAsync(const DescribeStreamLinkEventAttachedFlowsRequest& request, const DescribeStreamLinkEventAttachedFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkEventAttachedFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkEventAttachedFlowsOutcomeCallable MpsClient::DescribeStreamLinkEventAttachedFlowsCallable(const DescribeStreamLinkEventAttachedFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkEventAttachedFlowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkEventAttachedFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkEventsOutcome MpsClient::DescribeStreamLinkEvents(const DescribeStreamLinkEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkEventsResponse rsp = DescribeStreamLinkEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkEventsOutcome(rsp);
        else
            return DescribeStreamLinkEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkEventsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkEventsAsync(const DescribeStreamLinkEventsRequest& request, const DescribeStreamLinkEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkEventsOutcomeCallable MpsClient::DescribeStreamLinkEventsCallable(const DescribeStreamLinkEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowOutcome MpsClient::DescribeStreamLinkFlow(const DescribeStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowResponse rsp = DescribeStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowOutcome(rsp);
        else
            return DescribeStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowAsync(const DescribeStreamLinkFlowRequest& request, const DescribeStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowOutcomeCallable MpsClient::DescribeStreamLinkFlowCallable(const DescribeStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowLogsOutcome MpsClient::DescribeStreamLinkFlowLogs(const DescribeStreamLinkFlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowLogsResponse rsp = DescribeStreamLinkFlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowLogsOutcome(rsp);
        else
            return DescribeStreamLinkFlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowLogsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowLogsAsync(const DescribeStreamLinkFlowLogsRequest& request, const DescribeStreamLinkFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowLogsOutcomeCallable MpsClient::DescribeStreamLinkFlowLogsCallable(const DescribeStreamLinkFlowLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowMediaStatisticsOutcome MpsClient::DescribeStreamLinkFlowMediaStatistics(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowMediaStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowMediaStatisticsResponse rsp = DescribeStreamLinkFlowMediaStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowMediaStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowMediaStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowMediaStatisticsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowMediaStatisticsAsync(const DescribeStreamLinkFlowMediaStatisticsRequest& request, const DescribeStreamLinkFlowMediaStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowMediaStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowMediaStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowMediaStatisticsCallable(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowMediaStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowMediaStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowRealtimeStatusOutcome MpsClient::DescribeStreamLinkFlowRealtimeStatus(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowRealtimeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowRealtimeStatusResponse rsp = DescribeStreamLinkFlowRealtimeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowRealtimeStatusOutcome(rsp);
        else
            return DescribeStreamLinkFlowRealtimeStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowRealtimeStatusOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowRealtimeStatusAsync(const DescribeStreamLinkFlowRealtimeStatusRequest& request, const DescribeStreamLinkFlowRealtimeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowRealtimeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowRealtimeStatusOutcomeCallable MpsClient::DescribeStreamLinkFlowRealtimeStatusCallable(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowRealtimeStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowRealtimeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowSRTStatisticsOutcome MpsClient::DescribeStreamLinkFlowSRTStatistics(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowSRTStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowSRTStatisticsResponse rsp = DescribeStreamLinkFlowSRTStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowSRTStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowSRTStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowSRTStatisticsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowSRTStatisticsAsync(const DescribeStreamLinkFlowSRTStatisticsRequest& request, const DescribeStreamLinkFlowSRTStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowSRTStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowSRTStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowSRTStatisticsCallable(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowSRTStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowSRTStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowStatisticsOutcome MpsClient::DescribeStreamLinkFlowStatistics(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlowStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowStatisticsResponse rsp = DescribeStreamLinkFlowStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowStatisticsOutcome(rsp);
        else
            return DescribeStreamLinkFlowStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowStatisticsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowStatisticsAsync(const DescribeStreamLinkFlowStatisticsRequest& request, const DescribeStreamLinkFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlowStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowStatisticsCallable(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlowStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkFlowsOutcome MpsClient::DescribeStreamLinkFlows(const DescribeStreamLinkFlowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkFlows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkFlowsResponse rsp = DescribeStreamLinkFlowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkFlowsOutcome(rsp);
        else
            return DescribeStreamLinkFlowsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkFlowsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkFlowsAsync(const DescribeStreamLinkFlowsRequest& request, const DescribeStreamLinkFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkFlows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkFlowsOutcomeCallable MpsClient::DescribeStreamLinkFlowsCallable(const DescribeStreamLinkFlowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkFlowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkFlows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkRegionsOutcome MpsClient::DescribeStreamLinkRegions(const DescribeStreamLinkRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkRegionsResponse rsp = DescribeStreamLinkRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkRegionsOutcome(rsp);
        else
            return DescribeStreamLinkRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkRegionsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkRegionsAsync(const DescribeStreamLinkRegionsRequest& request, const DescribeStreamLinkRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkRegionsOutcomeCallable MpsClient::DescribeStreamLinkRegionsCallable(const DescribeStreamLinkRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeStreamLinkSecurityGroupsOutcome MpsClient::DescribeStreamLinkSecurityGroups(const DescribeStreamLinkSecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamLinkSecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamLinkSecurityGroupsResponse rsp = DescribeStreamLinkSecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamLinkSecurityGroupsOutcome(rsp);
        else
            return DescribeStreamLinkSecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamLinkSecurityGroupsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeStreamLinkSecurityGroupsAsync(const DescribeStreamLinkSecurityGroupsRequest& request, const DescribeStreamLinkSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamLinkSecurityGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeStreamLinkSecurityGroupsOutcomeCallable MpsClient::DescribeStreamLinkSecurityGroupsCallable(const DescribeStreamLinkSecurityGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamLinkSecurityGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamLinkSecurityGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeTaskDetailOutcome MpsClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
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

void MpsClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTaskDetailOutcomeCallable MpsClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
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

MpsClient::DescribeTasksOutcome MpsClient::DescribeTasks(const DescribeTasksRequest &request)
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

void MpsClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTasksOutcomeCallable MpsClient::DescribeTasksCallable(const DescribeTasksRequest &request)
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

MpsClient::DescribeTranscodeTemplatesOutcome MpsClient::DescribeTranscodeTemplates(const DescribeTranscodeTemplatesRequest &request)
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

void MpsClient::DescribeTranscodeTemplatesAsync(const DescribeTranscodeTemplatesRequest& request, const DescribeTranscodeTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTranscodeTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeTranscodeTemplatesOutcomeCallable MpsClient::DescribeTranscodeTemplatesCallable(const DescribeTranscodeTemplatesRequest &request)
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

MpsClient::DescribeVideoDatabaseEntryTaskDetailOutcome MpsClient::DescribeVideoDatabaseEntryTaskDetail(const DescribeVideoDatabaseEntryTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoDatabaseEntryTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoDatabaseEntryTaskDetailResponse rsp = DescribeVideoDatabaseEntryTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoDatabaseEntryTaskDetailOutcome(rsp);
        else
            return DescribeVideoDatabaseEntryTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoDatabaseEntryTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeVideoDatabaseEntryTaskDetailAsync(const DescribeVideoDatabaseEntryTaskDetailRequest& request, const DescribeVideoDatabaseEntryTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoDatabaseEntryTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeVideoDatabaseEntryTaskDetailOutcomeCallable MpsClient::DescribeVideoDatabaseEntryTaskDetailCallable(const DescribeVideoDatabaseEntryTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoDatabaseEntryTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoDatabaseEntryTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeVideoSearchTaskDetailOutcome MpsClient::DescribeVideoSearchTaskDetail(const DescribeVideoSearchTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoSearchTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoSearchTaskDetailResponse rsp = DescribeVideoSearchTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoSearchTaskDetailOutcome(rsp);
        else
            return DescribeVideoSearchTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoSearchTaskDetailOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeVideoSearchTaskDetailAsync(const DescribeVideoSearchTaskDetailRequest& request, const DescribeVideoSearchTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoSearchTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeVideoSearchTaskDetailOutcomeCallable MpsClient::DescribeVideoSearchTaskDetailCallable(const DescribeVideoSearchTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoSearchTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoSearchTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DescribeWatermarkTemplatesOutcome MpsClient::DescribeWatermarkTemplates(const DescribeWatermarkTemplatesRequest &request)
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

void MpsClient::DescribeWatermarkTemplatesAsync(const DescribeWatermarkTemplatesRequest& request, const DescribeWatermarkTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWatermarkTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWatermarkTemplatesOutcomeCallable MpsClient::DescribeWatermarkTemplatesCallable(const DescribeWatermarkTemplatesRequest &request)
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

MpsClient::DescribeWordSamplesOutcome MpsClient::DescribeWordSamples(const DescribeWordSamplesRequest &request)
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

void MpsClient::DescribeWordSamplesAsync(const DescribeWordSamplesRequest& request, const DescribeWordSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWordSamples(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWordSamplesOutcomeCallable MpsClient::DescribeWordSamplesCallable(const DescribeWordSamplesRequest &request)
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

MpsClient::DescribeWorkflowsOutcome MpsClient::DescribeWorkflows(const DescribeWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkflowsResponse rsp = DescribeWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkflowsOutcome(rsp);
        else
            return DescribeWorkflowsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkflowsOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeWorkflowsAsync(const DescribeWorkflowsRequest& request, const DescribeWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWorkflows(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DescribeWorkflowsOutcomeCallable MpsClient::DescribeWorkflowsCallable(const DescribeWorkflowsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWorkflowsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWorkflows(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DisableScheduleOutcome MpsClient::DisableSchedule(const DisableScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableScheduleResponse rsp = DisableScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableScheduleOutcome(rsp);
        else
            return DisableScheduleOutcome(o.GetError());
    }
    else
    {
        return DisableScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::DisableScheduleAsync(const DisableScheduleRequest& request, const DisableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DisableScheduleOutcomeCallable MpsClient::DisableScheduleCallable(const DisableScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableScheduleOutcome()>>(
        [this, request]()
        {
            return this->DisableSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DisableWorkflowOutcome MpsClient::DisableWorkflow(const DisableWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DisableWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableWorkflowResponse rsp = DisableWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableWorkflowOutcome(rsp);
        else
            return DisableWorkflowOutcome(o.GetError());
    }
    else
    {
        return DisableWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::DisableWorkflowAsync(const DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DisableWorkflowOutcomeCallable MpsClient::DisableWorkflowCallable(const DisableWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableWorkflowOutcome()>>(
        [this, request]()
        {
            return this->DisableWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::DisassociateSecurityGroupOutcome MpsClient::DisassociateSecurityGroup(const DisassociateSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateSecurityGroupResponse rsp = DisassociateSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateSecurityGroupOutcome(rsp);
        else
            return DisassociateSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DisassociateSecurityGroupOutcome(outcome.GetError());
    }
}

void MpsClient::DisassociateSecurityGroupAsync(const DisassociateSecurityGroupRequest& request, const DisassociateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::DisassociateSecurityGroupOutcomeCallable MpsClient::DisassociateSecurityGroupCallable(const DisassociateSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->DisassociateSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::EditMediaOutcome MpsClient::EditMedia(const EditMediaRequest &request)
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

void MpsClient::EditMediaAsync(const EditMediaRequest& request, const EditMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EditMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EditMediaOutcomeCallable MpsClient::EditMediaCallable(const EditMediaRequest &request)
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

MpsClient::EnableScheduleOutcome MpsClient::EnableSchedule(const EnableScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableScheduleResponse rsp = EnableScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableScheduleOutcome(rsp);
        else
            return EnableScheduleOutcome(o.GetError());
    }
    else
    {
        return EnableScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::EnableScheduleAsync(const EnableScheduleRequest& request, const EnableScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableSchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EnableScheduleOutcomeCallable MpsClient::EnableScheduleCallable(const EnableScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableScheduleOutcome()>>(
        [this, request]()
        {
            return this->EnableSchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::EnableWorkflowOutcome MpsClient::EnableWorkflow(const EnableWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "EnableWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableWorkflowResponse rsp = EnableWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableWorkflowOutcome(rsp);
        else
            return EnableWorkflowOutcome(o.GetError());
    }
    else
    {
        return EnableWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::EnableWorkflowAsync(const EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::EnableWorkflowOutcomeCallable MpsClient::EnableWorkflowCallable(const EnableWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableWorkflowOutcome()>>(
        [this, request]()
        {
            return this->EnableWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ExecuteFunctionOutcome MpsClient::ExecuteFunction(const ExecuteFunctionRequest &request)
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

void MpsClient::ExecuteFunctionAsync(const ExecuteFunctionRequest& request, const ExecuteFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteFunction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ExecuteFunctionOutcomeCallable MpsClient::ExecuteFunctionCallable(const ExecuteFunctionRequest &request)
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

MpsClient::ManageTaskOutcome MpsClient::ManageTask(const ManageTaskRequest &request)
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

void MpsClient::ManageTaskAsync(const ManageTaskRequest& request, const ManageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ManageTaskOutcomeCallable MpsClient::ManageTaskCallable(const ManageTaskRequest &request)
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

MpsClient::ModifyAIAnalysisTemplateOutcome MpsClient::ModifyAIAnalysisTemplate(const ModifyAIAnalysisTemplateRequest &request)
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

void MpsClient::ModifyAIAnalysisTemplateAsync(const ModifyAIAnalysisTemplateRequest& request, const ModifyAIAnalysisTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIAnalysisTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAIAnalysisTemplateOutcomeCallable MpsClient::ModifyAIAnalysisTemplateCallable(const ModifyAIAnalysisTemplateRequest &request)
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

MpsClient::ModifyAIRecognitionTemplateOutcome MpsClient::ModifyAIRecognitionTemplate(const ModifyAIRecognitionTemplateRequest &request)
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

void MpsClient::ModifyAIRecognitionTemplateAsync(const ModifyAIRecognitionTemplateRequest& request, const ModifyAIRecognitionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAIRecognitionTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAIRecognitionTemplateOutcomeCallable MpsClient::ModifyAIRecognitionTemplateCallable(const ModifyAIRecognitionTemplateRequest &request)
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

MpsClient::ModifyAdaptiveDynamicStreamingTemplateOutcome MpsClient::ModifyAdaptiveDynamicStreamingTemplate(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
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

void MpsClient::ModifyAdaptiveDynamicStreamingTemplateAsync(const ModifyAdaptiveDynamicStreamingTemplateRequest& request, const ModifyAdaptiveDynamicStreamingTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAdaptiveDynamicStreamingTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::ModifyAdaptiveDynamicStreamingTemplateCallable(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
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

MpsClient::ModifyAnimatedGraphicsTemplateOutcome MpsClient::ModifyAnimatedGraphicsTemplate(const ModifyAnimatedGraphicsTemplateRequest &request)
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

void MpsClient::ModifyAnimatedGraphicsTemplateAsync(const ModifyAnimatedGraphicsTemplateRequest& request, const ModifyAnimatedGraphicsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAnimatedGraphicsTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAnimatedGraphicsTemplateOutcomeCallable MpsClient::ModifyAnimatedGraphicsTemplateCallable(const ModifyAnimatedGraphicsTemplateRequest &request)
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

MpsClient::ModifyAsrHotwordsOutcome MpsClient::ModifyAsrHotwords(const ModifyAsrHotwordsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAsrHotwords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAsrHotwordsResponse rsp = ModifyAsrHotwordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAsrHotwordsOutcome(rsp);
        else
            return ModifyAsrHotwordsOutcome(o.GetError());
    }
    else
    {
        return ModifyAsrHotwordsOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyAsrHotwordsAsync(const ModifyAsrHotwordsRequest& request, const ModifyAsrHotwordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAsrHotwords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyAsrHotwordsOutcomeCallable MpsClient::ModifyAsrHotwordsCallable(const ModifyAsrHotwordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAsrHotwordsOutcome()>>(
        [this, request]()
        {
            return this->ModifyAsrHotwords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyContentReviewTemplateOutcome MpsClient::ModifyContentReviewTemplate(const ModifyContentReviewTemplateRequest &request)
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

void MpsClient::ModifyContentReviewTemplateAsync(const ModifyContentReviewTemplateRequest& request, const ModifyContentReviewTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyContentReviewTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyContentReviewTemplateOutcomeCallable MpsClient::ModifyContentReviewTemplateCallable(const ModifyContentReviewTemplateRequest &request)
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

MpsClient::ModifyImageSpriteTemplateOutcome MpsClient::ModifyImageSpriteTemplate(const ModifyImageSpriteTemplateRequest &request)
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

void MpsClient::ModifyImageSpriteTemplateAsync(const ModifyImageSpriteTemplateRequest& request, const ModifyImageSpriteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyImageSpriteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyImageSpriteTemplateOutcomeCallable MpsClient::ModifyImageSpriteTemplateCallable(const ModifyImageSpriteTemplateRequest &request)
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

MpsClient::ModifyLiveRecordTemplateOutcome MpsClient::ModifyLiveRecordTemplate(const ModifyLiveRecordTemplateRequest &request)
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

void MpsClient::ModifyLiveRecordTemplateAsync(const ModifyLiveRecordTemplateRequest& request, const ModifyLiveRecordTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLiveRecordTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyLiveRecordTemplateOutcomeCallable MpsClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLiveRecordTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyLiveRecordTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyPersonSampleOutcome MpsClient::ModifyPersonSample(const ModifyPersonSampleRequest &request)
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

void MpsClient::ModifyPersonSampleAsync(const ModifyPersonSampleRequest& request, const ModifyPersonSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyPersonSampleOutcomeCallable MpsClient::ModifyPersonSampleCallable(const ModifyPersonSampleRequest &request)
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

MpsClient::ModifyQualityControlTemplateOutcome MpsClient::ModifyQualityControlTemplate(const ModifyQualityControlTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQualityControlTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQualityControlTemplateResponse rsp = ModifyQualityControlTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQualityControlTemplateOutcome(rsp);
        else
            return ModifyQualityControlTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyQualityControlTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyQualityControlTemplateAsync(const ModifyQualityControlTemplateRequest& request, const ModifyQualityControlTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQualityControlTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyQualityControlTemplateOutcomeCallable MpsClient::ModifyQualityControlTemplateCallable(const ModifyQualityControlTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQualityControlTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyQualityControlTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySampleSnapshotTemplateOutcome MpsClient::ModifySampleSnapshotTemplate(const ModifySampleSnapshotTemplateRequest &request)
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

void MpsClient::ModifySampleSnapshotTemplateAsync(const ModifySampleSnapshotTemplateRequest& request, const ModifySampleSnapshotTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySampleSnapshotTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySampleSnapshotTemplateOutcomeCallable MpsClient::ModifySampleSnapshotTemplateCallable(const ModifySampleSnapshotTemplateRequest &request)
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

MpsClient::ModifyScheduleOutcome MpsClient::ModifySchedule(const ModifyScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScheduleResponse rsp = ModifyScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScheduleOutcome(rsp);
        else
            return ModifyScheduleOutcome(o.GetError());
    }
    else
    {
        return ModifyScheduleOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyScheduleAsync(const ModifyScheduleRequest& request, const ModifyScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySchedule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyScheduleOutcomeCallable MpsClient::ModifyScheduleCallable(const ModifyScheduleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyScheduleOutcome()>>(
        [this, request]()
        {
            return this->ModifySchedule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySmartSubtitleTemplateOutcome MpsClient::ModifySmartSubtitleTemplate(const ModifySmartSubtitleTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmartSubtitleTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmartSubtitleTemplateResponse rsp = ModifySmartSubtitleTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmartSubtitleTemplateOutcome(rsp);
        else
            return ModifySmartSubtitleTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmartSubtitleTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySmartSubtitleTemplateAsync(const ModifySmartSubtitleTemplateRequest& request, const ModifySmartSubtitleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySmartSubtitleTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySmartSubtitleTemplateOutcomeCallable MpsClient::ModifySmartSubtitleTemplateCallable(const ModifySmartSubtitleTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySmartSubtitleTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifySmartSubtitleTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifySnapshotByTimeOffsetTemplateOutcome MpsClient::ModifySnapshotByTimeOffsetTemplate(const ModifySnapshotByTimeOffsetTemplateRequest &request)
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

void MpsClient::ModifySnapshotByTimeOffsetTemplateAsync(const ModifySnapshotByTimeOffsetTemplateRequest& request, const ModifySnapshotByTimeOffsetTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotByTimeOffsetTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifySnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::ModifySnapshotByTimeOffsetTemplateCallable(const ModifySnapshotByTimeOffsetTemplateRequest &request)
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

MpsClient::ModifyStreamLinkEventOutcome MpsClient::ModifyStreamLinkEvent(const ModifyStreamLinkEventRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkEventResponse rsp = ModifyStreamLinkEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkEventOutcome(rsp);
        else
            return ModifyStreamLinkEventOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkEventOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyStreamLinkEventAsync(const ModifyStreamLinkEventRequest& request, const ModifyStreamLinkEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyStreamLinkEventOutcomeCallable MpsClient::ModifyStreamLinkEventCallable(const ModifyStreamLinkEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkEventOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyStreamLinkFlowOutcome MpsClient::ModifyStreamLinkFlow(const ModifyStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkFlowResponse rsp = ModifyStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkFlowOutcome(rsp);
        else
            return ModifyStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyStreamLinkFlowAsync(const ModifyStreamLinkFlowRequest& request, const ModifyStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyStreamLinkFlowOutcomeCallable MpsClient::ModifyStreamLinkFlowCallable(const ModifyStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyStreamLinkInputOutcome MpsClient::ModifyStreamLinkInput(const ModifyStreamLinkInputRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkInput");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkInputResponse rsp = ModifyStreamLinkInputResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkInputOutcome(rsp);
        else
            return ModifyStreamLinkInputOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkInputOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyStreamLinkInputAsync(const ModifyStreamLinkInputRequest& request, const ModifyStreamLinkInputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkInput(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyStreamLinkInputOutcomeCallable MpsClient::ModifyStreamLinkInputCallable(const ModifyStreamLinkInputRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkInputOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkInput(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyStreamLinkOutputInfoOutcome MpsClient::ModifyStreamLinkOutputInfo(const ModifyStreamLinkOutputInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkOutputInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkOutputInfoResponse rsp = ModifyStreamLinkOutputInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkOutputInfoOutcome(rsp);
        else
            return ModifyStreamLinkOutputInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkOutputInfoOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyStreamLinkOutputInfoAsync(const ModifyStreamLinkOutputInfoRequest& request, const ModifyStreamLinkOutputInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkOutputInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyStreamLinkOutputInfoOutcomeCallable MpsClient::ModifyStreamLinkOutputInfoCallable(const ModifyStreamLinkOutputInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkOutputInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkOutputInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyStreamLinkSecurityGroupOutcome MpsClient::ModifyStreamLinkSecurityGroup(const ModifyStreamLinkSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStreamLinkSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStreamLinkSecurityGroupResponse rsp = ModifyStreamLinkSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStreamLinkSecurityGroupOutcome(rsp);
        else
            return ModifyStreamLinkSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyStreamLinkSecurityGroupOutcome(outcome.GetError());
    }
}

void MpsClient::ModifyStreamLinkSecurityGroupAsync(const ModifyStreamLinkSecurityGroupRequest& request, const ModifyStreamLinkSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStreamLinkSecurityGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyStreamLinkSecurityGroupOutcomeCallable MpsClient::ModifyStreamLinkSecurityGroupCallable(const ModifyStreamLinkSecurityGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStreamLinkSecurityGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyStreamLinkSecurityGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ModifyTranscodeTemplateOutcome MpsClient::ModifyTranscodeTemplate(const ModifyTranscodeTemplateRequest &request)
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

void MpsClient::ModifyTranscodeTemplateAsync(const ModifyTranscodeTemplateRequest& request, const ModifyTranscodeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTranscodeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyTranscodeTemplateOutcomeCallable MpsClient::ModifyTranscodeTemplateCallable(const ModifyTranscodeTemplateRequest &request)
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

MpsClient::ModifyWatermarkTemplateOutcome MpsClient::ModifyWatermarkTemplate(const ModifyWatermarkTemplateRequest &request)
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

void MpsClient::ModifyWatermarkTemplateAsync(const ModifyWatermarkTemplateRequest& request, const ModifyWatermarkTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWatermarkTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyWatermarkTemplateOutcomeCallable MpsClient::ModifyWatermarkTemplateCallable(const ModifyWatermarkTemplateRequest &request)
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

MpsClient::ModifyWordSampleOutcome MpsClient::ModifyWordSample(const ModifyWordSampleRequest &request)
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

void MpsClient::ModifyWordSampleAsync(const ModifyWordSampleRequest& request, const ModifyWordSampleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyWordSample(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ModifyWordSampleOutcomeCallable MpsClient::ModifyWordSampleCallable(const ModifyWordSampleRequest &request)
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

MpsClient::ParseLiveStreamProcessNotificationOutcome MpsClient::ParseLiveStreamProcessNotification(const ParseLiveStreamProcessNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ParseLiveStreamProcessNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseLiveStreamProcessNotificationResponse rsp = ParseLiveStreamProcessNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseLiveStreamProcessNotificationOutcome(rsp);
        else
            return ParseLiveStreamProcessNotificationOutcome(o.GetError());
    }
    else
    {
        return ParseLiveStreamProcessNotificationOutcome(outcome.GetError());
    }
}

void MpsClient::ParseLiveStreamProcessNotificationAsync(const ParseLiveStreamProcessNotificationRequest& request, const ParseLiveStreamProcessNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseLiveStreamProcessNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ParseLiveStreamProcessNotificationOutcomeCallable MpsClient::ParseLiveStreamProcessNotificationCallable(const ParseLiveStreamProcessNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseLiveStreamProcessNotificationOutcome()>>(
        [this, request]()
        {
            return this->ParseLiveStreamProcessNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ParseNotificationOutcome MpsClient::ParseNotification(const ParseNotificationRequest &request)
{
    auto outcome = MakeRequest(request, "ParseNotification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseNotificationResponse rsp = ParseNotificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseNotificationOutcome(rsp);
        else
            return ParseNotificationOutcome(o.GetError());
    }
    else
    {
        return ParseNotificationOutcome(outcome.GetError());
    }
}

void MpsClient::ParseNotificationAsync(const ParseNotificationRequest& request, const ParseNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseNotification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ParseNotificationOutcomeCallable MpsClient::ParseNotificationCallable(const ParseNotificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseNotificationOutcome()>>(
        [this, request]()
        {
            return this->ParseNotification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ProcessImageOutcome MpsClient::ProcessImage(const ProcessImageRequest &request)
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

void MpsClient::ProcessImageAsync(const ProcessImageRequest& request, const ProcessImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessImageOutcomeCallable MpsClient::ProcessImageCallable(const ProcessImageRequest &request)
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

MpsClient::ProcessLiveStreamOutcome MpsClient::ProcessLiveStream(const ProcessLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessLiveStreamResponse rsp = ProcessLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessLiveStreamOutcome(rsp);
        else
            return ProcessLiveStreamOutcome(o.GetError());
    }
    else
    {
        return ProcessLiveStreamOutcome(outcome.GetError());
    }
}

void MpsClient::ProcessLiveStreamAsync(const ProcessLiveStreamRequest& request, const ProcessLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessLiveStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessLiveStreamOutcomeCallable MpsClient::ProcessLiveStreamCallable(const ProcessLiveStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProcessLiveStreamOutcome()>>(
        [this, request]()
        {
            return this->ProcessLiveStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ProcessMediaOutcome MpsClient::ProcessMedia(const ProcessMediaRequest &request)
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

void MpsClient::ProcessMediaAsync(const ProcessMediaRequest& request, const ProcessMediaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProcessMedia(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ProcessMediaOutcomeCallable MpsClient::ProcessMediaCallable(const ProcessMediaRequest &request)
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

MpsClient::RecognizeMediaForZhiXueOutcome MpsClient::RecognizeMediaForZhiXue(const RecognizeMediaForZhiXueRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeMediaForZhiXue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeMediaForZhiXueResponse rsp = RecognizeMediaForZhiXueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeMediaForZhiXueOutcome(rsp);
        else
            return RecognizeMediaForZhiXueOutcome(o.GetError());
    }
    else
    {
        return RecognizeMediaForZhiXueOutcome(outcome.GetError());
    }
}

void MpsClient::RecognizeMediaForZhiXueAsync(const RecognizeMediaForZhiXueRequest& request, const RecognizeMediaForZhiXueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeMediaForZhiXue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::RecognizeMediaForZhiXueOutcomeCallable MpsClient::RecognizeMediaForZhiXueCallable(const RecognizeMediaForZhiXueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeMediaForZhiXueOutcome()>>(
        [this, request]()
        {
            return this->RecognizeMediaForZhiXue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::ResetWorkflowOutcome MpsClient::ResetWorkflow(const ResetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "ResetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetWorkflowResponse rsp = ResetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetWorkflowOutcome(rsp);
        else
            return ResetWorkflowOutcome(o.GetError());
    }
    else
    {
        return ResetWorkflowOutcome(outcome.GetError());
    }
}

void MpsClient::ResetWorkflowAsync(const ResetWorkflowRequest& request, const ResetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetWorkflow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::ResetWorkflowOutcomeCallable MpsClient::ResetWorkflowCallable(const ResetWorkflowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetWorkflowOutcome()>>(
        [this, request]()
        {
            return this->ResetWorkflow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::StartStreamLinkFlowOutcome MpsClient::StartStreamLinkFlow(const StartStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamLinkFlowResponse rsp = StartStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamLinkFlowOutcome(rsp);
        else
            return StartStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return StartStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::StartStreamLinkFlowAsync(const StartStreamLinkFlowRequest& request, const StartStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::StartStreamLinkFlowOutcomeCallable MpsClient::StartStreamLinkFlowCallable(const StartStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->StartStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::StopStreamLinkFlowOutcome MpsClient::StopStreamLinkFlow(const StopStreamLinkFlowRequest &request)
{
    auto outcome = MakeRequest(request, "StopStreamLinkFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopStreamLinkFlowResponse rsp = StopStreamLinkFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopStreamLinkFlowOutcome(rsp);
        else
            return StopStreamLinkFlowOutcome(o.GetError());
    }
    else
    {
        return StopStreamLinkFlowOutcome(outcome.GetError());
    }
}

void MpsClient::StopStreamLinkFlowAsync(const StopStreamLinkFlowRequest& request, const StopStreamLinkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopStreamLinkFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::StopStreamLinkFlowOutcomeCallable MpsClient::StopStreamLinkFlowCallable(const StopStreamLinkFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopStreamLinkFlowOutcome()>>(
        [this, request]()
        {
            return this->StopStreamLinkFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MpsClient::WithdrawsWatermarkOutcome MpsClient::WithdrawsWatermark(const WithdrawsWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "WithdrawsWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WithdrawsWatermarkResponse rsp = WithdrawsWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WithdrawsWatermarkOutcome(rsp);
        else
            return WithdrawsWatermarkOutcome(o.GetError());
    }
    else
    {
        return WithdrawsWatermarkOutcome(outcome.GetError());
    }
}

void MpsClient::WithdrawsWatermarkAsync(const WithdrawsWatermarkRequest& request, const WithdrawsWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WithdrawsWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MpsClient::WithdrawsWatermarkOutcomeCallable MpsClient::WithdrawsWatermarkCallable(const WithdrawsWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WithdrawsWatermarkOutcome()>>(
        [this, request]()
        {
            return this->WithdrawsWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

