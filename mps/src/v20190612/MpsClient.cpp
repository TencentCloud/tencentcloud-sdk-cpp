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
    using Req = const BatchDeleteStreamLinkFlowRequest&;
    using Resp = BatchDeleteStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::BatchDeleteStreamLinkFlowOutcomeCallable MpsClient::BatchDeleteStreamLinkFlowCallable(const BatchDeleteStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteStreamLinkFlowOutcome>>();
    BatchDeleteStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const BatchDeleteStreamLinkFlowRequest&,
        BatchDeleteStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchProcessMediaRequest&;
    using Resp = BatchProcessMediaResponse;

    DoRequestAsync<Req, Resp>(
        "BatchProcessMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::BatchProcessMediaOutcomeCallable MpsClient::BatchProcessMediaCallable(const BatchProcessMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchProcessMediaOutcome>>();
    BatchProcessMediaAsync(
    request,
    [prom](
        const MpsClient*,
        const BatchProcessMediaRequest&,
        BatchProcessMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchStartStreamLinkFlowRequest&;
    using Resp = BatchStartStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStartStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::BatchStartStreamLinkFlowOutcomeCallable MpsClient::BatchStartStreamLinkFlowCallable(const BatchStartStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStartStreamLinkFlowOutcome>>();
    BatchStartStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const BatchStartStreamLinkFlowRequest&,
        BatchStartStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const BatchStopStreamLinkFlowRequest&;
    using Resp = BatchStopStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "BatchStopStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::BatchStopStreamLinkFlowOutcomeCallable MpsClient::BatchStopStreamLinkFlowCallable(const BatchStopStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchStopStreamLinkFlowOutcome>>();
    BatchStopStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const BatchStopStreamLinkFlowRequest&,
        BatchStopStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIAnalysisTemplateRequest&;
    using Resp = CreateAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateAIAnalysisTemplateOutcomeCallable MpsClient::CreateAIAnalysisTemplateCallable(const CreateAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIAnalysisTemplateOutcome>>();
    CreateAIAnalysisTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateAIAnalysisTemplateRequest&,
        CreateAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIRecognitionTemplateRequest&;
    using Resp = CreateAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateAIRecognitionTemplateOutcomeCallable MpsClient::CreateAIRecognitionTemplateCallable(const CreateAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIRecognitionTemplateOutcome>>();
    CreateAIRecognitionTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateAIRecognitionTemplateRequest&,
        CreateAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = CreateAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::CreateAdaptiveDynamicStreamingTemplateCallable(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAdaptiveDynamicStreamingTemplateOutcome>>();
    CreateAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateAdaptiveDynamicStreamingTemplateRequest&,
        CreateAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAnimatedGraphicsTemplateRequest&;
    using Resp = CreateAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateAnimatedGraphicsTemplateOutcomeCallable MpsClient::CreateAnimatedGraphicsTemplateCallable(const CreateAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAnimatedGraphicsTemplateOutcome>>();
    CreateAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateAnimatedGraphicsTemplateRequest&,
        CreateAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAsrHotwordsRequest&;
    using Resp = CreateAsrHotwordsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAsrHotwords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateAsrHotwordsOutcomeCallable MpsClient::CreateAsrHotwordsCallable(const CreateAsrHotwordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAsrHotwordsOutcome>>();
    CreateAsrHotwordsAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateAsrHotwordsRequest&,
        CreateAsrHotwordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateContentReviewTemplateRequest&;
    using Resp = CreateContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateContentReviewTemplateOutcomeCallable MpsClient::CreateContentReviewTemplateCallable(const CreateContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContentReviewTemplateOutcome>>();
    CreateContentReviewTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateContentReviewTemplateRequest&,
        CreateContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateImageSpriteTemplateRequest&;
    using Resp = CreateImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateImageSpriteTemplateOutcomeCallable MpsClient::CreateImageSpriteTemplateCallable(const CreateImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageSpriteTemplateOutcome>>();
    CreateImageSpriteTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateImageSpriteTemplateRequest&,
        CreateImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateLiveRecordTemplateRequest&;
    using Resp = CreateLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateLiveRecordTemplateOutcomeCallable MpsClient::CreateLiveRecordTemplateCallable(const CreateLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLiveRecordTemplateOutcome>>();
    CreateLiveRecordTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateLiveRecordTemplateRequest&,
        CreateLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MpsClient::CreateMediaEvaluationOutcome MpsClient::CreateMediaEvaluation(const CreateMediaEvaluationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMediaEvaluation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMediaEvaluationResponse rsp = CreateMediaEvaluationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMediaEvaluationOutcome(rsp);
        else
            return CreateMediaEvaluationOutcome(o.GetError());
    }
    else
    {
        return CreateMediaEvaluationOutcome(outcome.GetError());
    }
}

void MpsClient::CreateMediaEvaluationAsync(const CreateMediaEvaluationRequest& request, const CreateMediaEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMediaEvaluationRequest&;
    using Resp = CreateMediaEvaluationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMediaEvaluation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateMediaEvaluationOutcomeCallable MpsClient::CreateMediaEvaluationCallable(const CreateMediaEvaluationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMediaEvaluationOutcome>>();
    CreateMediaEvaluationAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateMediaEvaluationRequest&,
        CreateMediaEvaluationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePersonSampleRequest&;
    using Resp = CreatePersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreatePersonSampleOutcomeCallable MpsClient::CreatePersonSampleCallable(const CreatePersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonSampleOutcome>>();
    CreatePersonSampleAsync(
    request,
    [prom](
        const MpsClient*,
        const CreatePersonSampleRequest&,
        CreatePersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateQualityControlTemplateRequest&;
    using Resp = CreateQualityControlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQualityControlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateQualityControlTemplateOutcomeCallable MpsClient::CreateQualityControlTemplateCallable(const CreateQualityControlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQualityControlTemplateOutcome>>();
    CreateQualityControlTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateQualityControlTemplateRequest&,
        CreateQualityControlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSampleSnapshotTemplateRequest&;
    using Resp = CreateSampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateSampleSnapshotTemplateOutcomeCallable MpsClient::CreateSampleSnapshotTemplateCallable(const CreateSampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSampleSnapshotTemplateOutcome>>();
    CreateSampleSnapshotTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateSampleSnapshotTemplateRequest&,
        CreateSampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateScheduleRequest&;
    using Resp = CreateScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateScheduleOutcomeCallable MpsClient::CreateScheduleCallable(const CreateScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScheduleOutcome>>();
    CreateScheduleAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateScheduleRequest&,
        CreateScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MpsClient::CreateSmartEraseTemplateOutcome MpsClient::CreateSmartEraseTemplate(const CreateSmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSmartEraseTemplateResponse rsp = CreateSmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSmartEraseTemplateOutcome(rsp);
        else
            return CreateSmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::CreateSmartEraseTemplateAsync(const CreateSmartEraseTemplateRequest& request, const CreateSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSmartEraseTemplateRequest&;
    using Resp = CreateSmartEraseTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSmartEraseTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateSmartEraseTemplateOutcomeCallable MpsClient::CreateSmartEraseTemplateCallable(const CreateSmartEraseTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSmartEraseTemplateOutcome>>();
    CreateSmartEraseTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateSmartEraseTemplateRequest&,
        CreateSmartEraseTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSmartSubtitleTemplateRequest&;
    using Resp = CreateSmartSubtitleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSmartSubtitleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateSmartSubtitleTemplateOutcomeCallable MpsClient::CreateSmartSubtitleTemplateCallable(const CreateSmartSubtitleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSmartSubtitleTemplateOutcome>>();
    CreateSmartSubtitleTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateSmartSubtitleTemplateRequest&,
        CreateSmartSubtitleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSnapshotByTimeOffsetTemplateRequest&;
    using Resp = CreateSnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::CreateSnapshotByTimeOffsetTemplateCallable(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotByTimeOffsetTemplateOutcome>>();
    CreateSnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateSnapshotByTimeOffsetTemplateRequest&,
        CreateSnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStreamLinkEventRequest&;
    using Resp = CreateStreamLinkEventResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateStreamLinkEventOutcomeCallable MpsClient::CreateStreamLinkEventCallable(const CreateStreamLinkEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkEventOutcome>>();
    CreateStreamLinkEventAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateStreamLinkEventRequest&,
        CreateStreamLinkEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStreamLinkFlowRequest&;
    using Resp = CreateStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateStreamLinkFlowOutcomeCallable MpsClient::CreateStreamLinkFlowCallable(const CreateStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkFlowOutcome>>();
    CreateStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateStreamLinkFlowRequest&,
        CreateStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStreamLinkInputRequest&;
    using Resp = CreateStreamLinkInputResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateStreamLinkInputOutcomeCallable MpsClient::CreateStreamLinkInputCallable(const CreateStreamLinkInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkInputOutcome>>();
    CreateStreamLinkInputAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateStreamLinkInputRequest&,
        CreateStreamLinkInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStreamLinkOutputInfoRequest&;
    using Resp = CreateStreamLinkOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateStreamLinkOutputInfoOutcomeCallable MpsClient::CreateStreamLinkOutputInfoCallable(const CreateStreamLinkOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkOutputInfoOutcome>>();
    CreateStreamLinkOutputInfoAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateStreamLinkOutputInfoRequest&,
        CreateStreamLinkOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStreamLinkSecurityGroupRequest&;
    using Resp = CreateStreamLinkSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStreamLinkSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateStreamLinkSecurityGroupOutcomeCallable MpsClient::CreateStreamLinkSecurityGroupCallable(const CreateStreamLinkSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStreamLinkSecurityGroupOutcome>>();
    CreateStreamLinkSecurityGroupAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateStreamLinkSecurityGroupRequest&,
        CreateStreamLinkSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTranscodeTemplateRequest&;
    using Resp = CreateTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateTranscodeTemplateOutcomeCallable MpsClient::CreateTranscodeTemplateCallable(const CreateTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTranscodeTemplateOutcome>>();
    CreateTranscodeTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateTranscodeTemplateRequest&,
        CreateTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateVideoDatabaseEntryTaskRequest&;
    using Resp = CreateVideoDatabaseEntryTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoDatabaseEntryTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateVideoDatabaseEntryTaskOutcomeCallable MpsClient::CreateVideoDatabaseEntryTaskCallable(const CreateVideoDatabaseEntryTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoDatabaseEntryTaskOutcome>>();
    CreateVideoDatabaseEntryTaskAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateVideoDatabaseEntryTaskRequest&,
        CreateVideoDatabaseEntryTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateVideoSearchTaskRequest&;
    using Resp = CreateVideoSearchTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoSearchTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateVideoSearchTaskOutcomeCallable MpsClient::CreateVideoSearchTaskCallable(const CreateVideoSearchTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoSearchTaskOutcome>>();
    CreateVideoSearchTaskAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateVideoSearchTaskRequest&,
        CreateVideoSearchTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWatermarkTemplateRequest&;
    using Resp = CreateWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateWatermarkTemplateOutcomeCallable MpsClient::CreateWatermarkTemplateCallable(const CreateWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWatermarkTemplateOutcome>>();
    CreateWatermarkTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateWatermarkTemplateRequest&,
        CreateWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWordSamplesRequest&;
    using Resp = CreateWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateWordSamplesOutcomeCallable MpsClient::CreateWordSamplesCallable(const CreateWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWordSamplesOutcome>>();
    CreateWordSamplesAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateWordSamplesRequest&,
        CreateWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWorkflowRequest&;
    using Resp = CreateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::CreateWorkflowOutcomeCallable MpsClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowOutcome>>();
    CreateWorkflowAsync(
    request,
    [prom](
        const MpsClient*,
        const CreateWorkflowRequest&,
        CreateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAIAnalysisTemplateRequest&;
    using Resp = DeleteAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteAIAnalysisTemplateOutcomeCallable MpsClient::DeleteAIAnalysisTemplateCallable(const DeleteAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIAnalysisTemplateOutcome>>();
    DeleteAIAnalysisTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteAIAnalysisTemplateRequest&,
        DeleteAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAIRecognitionTemplateRequest&;
    using Resp = DeleteAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteAIRecognitionTemplateOutcomeCallable MpsClient::DeleteAIRecognitionTemplateCallable(const DeleteAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIRecognitionTemplateOutcome>>();
    DeleteAIRecognitionTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteAIRecognitionTemplateRequest&,
        DeleteAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = DeleteAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::DeleteAdaptiveDynamicStreamingTemplateCallable(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAdaptiveDynamicStreamingTemplateOutcome>>();
    DeleteAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteAdaptiveDynamicStreamingTemplateRequest&,
        DeleteAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAnimatedGraphicsTemplateRequest&;
    using Resp = DeleteAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteAnimatedGraphicsTemplateOutcomeCallable MpsClient::DeleteAnimatedGraphicsTemplateCallable(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAnimatedGraphicsTemplateOutcome>>();
    DeleteAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteAnimatedGraphicsTemplateRequest&,
        DeleteAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAsrHotwordsRequest&;
    using Resp = DeleteAsrHotwordsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAsrHotwords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteAsrHotwordsOutcomeCallable MpsClient::DeleteAsrHotwordsCallable(const DeleteAsrHotwordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAsrHotwordsOutcome>>();
    DeleteAsrHotwordsAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteAsrHotwordsRequest&,
        DeleteAsrHotwordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteContentReviewTemplateRequest&;
    using Resp = DeleteContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteContentReviewTemplateOutcomeCallable MpsClient::DeleteContentReviewTemplateCallable(const DeleteContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteContentReviewTemplateOutcome>>();
    DeleteContentReviewTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteContentReviewTemplateRequest&,
        DeleteContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteImageSpriteTemplateRequest&;
    using Resp = DeleteImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteImageSpriteTemplateOutcomeCallable MpsClient::DeleteImageSpriteTemplateCallable(const DeleteImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageSpriteTemplateOutcome>>();
    DeleteImageSpriteTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteImageSpriteTemplateRequest&,
        DeleteImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteLiveRecordTemplateRequest&;
    using Resp = DeleteLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteLiveRecordTemplateOutcomeCallable MpsClient::DeleteLiveRecordTemplateCallable(const DeleteLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLiveRecordTemplateOutcome>>();
    DeleteLiveRecordTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteLiveRecordTemplateRequest&,
        DeleteLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeletePersonSampleRequest&;
    using Resp = DeletePersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeletePersonSampleOutcomeCallable MpsClient::DeletePersonSampleCallable(const DeletePersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePersonSampleOutcome>>();
    DeletePersonSampleAsync(
    request,
    [prom](
        const MpsClient*,
        const DeletePersonSampleRequest&,
        DeletePersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteQualityControlTemplateRequest&;
    using Resp = DeleteQualityControlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQualityControlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteQualityControlTemplateOutcomeCallable MpsClient::DeleteQualityControlTemplateCallable(const DeleteQualityControlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQualityControlTemplateOutcome>>();
    DeleteQualityControlTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteQualityControlTemplateRequest&,
        DeleteQualityControlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSampleSnapshotTemplateRequest&;
    using Resp = DeleteSampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteSampleSnapshotTemplateOutcomeCallable MpsClient::DeleteSampleSnapshotTemplateCallable(const DeleteSampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSampleSnapshotTemplateOutcome>>();
    DeleteSampleSnapshotTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteSampleSnapshotTemplateRequest&,
        DeleteSampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteScheduleRequest&;
    using Resp = DeleteScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteScheduleOutcomeCallable MpsClient::DeleteScheduleCallable(const DeleteScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScheduleOutcome>>();
    DeleteScheduleAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteScheduleRequest&,
        DeleteScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MpsClient::DeleteSmartEraseTemplateOutcome MpsClient::DeleteSmartEraseTemplate(const DeleteSmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSmartEraseTemplateResponse rsp = DeleteSmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSmartEraseTemplateOutcome(rsp);
        else
            return DeleteSmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::DeleteSmartEraseTemplateAsync(const DeleteSmartEraseTemplateRequest& request, const DeleteSmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSmartEraseTemplateRequest&;
    using Resp = DeleteSmartEraseTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSmartEraseTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteSmartEraseTemplateOutcomeCallable MpsClient::DeleteSmartEraseTemplateCallable(const DeleteSmartEraseTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSmartEraseTemplateOutcome>>();
    DeleteSmartEraseTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteSmartEraseTemplateRequest&,
        DeleteSmartEraseTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSmartSubtitleTemplateRequest&;
    using Resp = DeleteSmartSubtitleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSmartSubtitleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteSmartSubtitleTemplateOutcomeCallable MpsClient::DeleteSmartSubtitleTemplateCallable(const DeleteSmartSubtitleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSmartSubtitleTemplateOutcome>>();
    DeleteSmartSubtitleTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteSmartSubtitleTemplateRequest&,
        DeleteSmartSubtitleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSnapshotByTimeOffsetTemplateRequest&;
    using Resp = DeleteSnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteSnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::DeleteSnapshotByTimeOffsetTemplateCallable(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotByTimeOffsetTemplateOutcome>>();
    DeleteSnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteSnapshotByTimeOffsetTemplateRequest&,
        DeleteSnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteStreamLinkEventRequest&;
    using Resp = DeleteStreamLinkEventResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteStreamLinkEventOutcomeCallable MpsClient::DeleteStreamLinkEventCallable(const DeleteStreamLinkEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkEventOutcome>>();
    DeleteStreamLinkEventAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteStreamLinkEventRequest&,
        DeleteStreamLinkEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteStreamLinkFlowRequest&;
    using Resp = DeleteStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteStreamLinkFlowOutcomeCallable MpsClient::DeleteStreamLinkFlowCallable(const DeleteStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkFlowOutcome>>();
    DeleteStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteStreamLinkFlowRequest&,
        DeleteStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteStreamLinkOutputRequest&;
    using Resp = DeleteStreamLinkOutputResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkOutput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteStreamLinkOutputOutcomeCallable MpsClient::DeleteStreamLinkOutputCallable(const DeleteStreamLinkOutputRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkOutputOutcome>>();
    DeleteStreamLinkOutputAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteStreamLinkOutputRequest&,
        DeleteStreamLinkOutputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteStreamLinkSecurityGroupRequest&;
    using Resp = DeleteStreamLinkSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteStreamLinkSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteStreamLinkSecurityGroupOutcomeCallable MpsClient::DeleteStreamLinkSecurityGroupCallable(const DeleteStreamLinkSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteStreamLinkSecurityGroupOutcome>>();
    DeleteStreamLinkSecurityGroupAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteStreamLinkSecurityGroupRequest&,
        DeleteStreamLinkSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTranscodeTemplateRequest&;
    using Resp = DeleteTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteTranscodeTemplateOutcomeCallable MpsClient::DeleteTranscodeTemplateCallable(const DeleteTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTranscodeTemplateOutcome>>();
    DeleteTranscodeTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteTranscodeTemplateRequest&,
        DeleteTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWatermarkTemplateRequest&;
    using Resp = DeleteWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteWatermarkTemplateOutcomeCallable MpsClient::DeleteWatermarkTemplateCallable(const DeleteWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWatermarkTemplateOutcome>>();
    DeleteWatermarkTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteWatermarkTemplateRequest&,
        DeleteWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWordSamplesRequest&;
    using Resp = DeleteWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteWordSamplesOutcomeCallable MpsClient::DeleteWordSamplesCallable(const DeleteWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWordSamplesOutcome>>();
    DeleteWordSamplesAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteWordSamplesRequest&,
        DeleteWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWorkflowRequest&;
    using Resp = DeleteWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DeleteWorkflowOutcomeCallable MpsClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowOutcome>>();
    DeleteWorkflowAsync(
    request,
    [prom](
        const MpsClient*,
        const DeleteWorkflowRequest&,
        DeleteWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIAnalysisTemplatesRequest&;
    using Resp = DescribeAIAnalysisTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIAnalysisTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAIAnalysisTemplatesOutcomeCallable MpsClient::DescribeAIAnalysisTemplatesCallable(const DescribeAIAnalysisTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIAnalysisTemplatesOutcome>>();
    DescribeAIAnalysisTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAIAnalysisTemplatesRequest&,
        DescribeAIAnalysisTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIRecognitionTemplatesRequest&;
    using Resp = DescribeAIRecognitionTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIRecognitionTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAIRecognitionTemplatesOutcomeCallable MpsClient::DescribeAIRecognitionTemplatesCallable(const DescribeAIRecognitionTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIRecognitionTemplatesOutcome>>();
    DescribeAIRecognitionTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAIRecognitionTemplatesRequest&,
        DescribeAIRecognitionTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAdaptiveDynamicStreamingTemplatesRequest&;
    using Resp = DescribeAdaptiveDynamicStreamingTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdaptiveDynamicStreamingTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable MpsClient::DescribeAdaptiveDynamicStreamingTemplatesCallable(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdaptiveDynamicStreamingTemplatesOutcome>>();
    DescribeAdaptiveDynamicStreamingTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAdaptiveDynamicStreamingTemplatesRequest&,
        DescribeAdaptiveDynamicStreamingTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAnimatedGraphicsTemplatesRequest&;
    using Resp = DescribeAnimatedGraphicsTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAnimatedGraphicsTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAnimatedGraphicsTemplatesOutcomeCallable MpsClient::DescribeAnimatedGraphicsTemplatesCallable(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAnimatedGraphicsTemplatesOutcome>>();
    DescribeAnimatedGraphicsTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAnimatedGraphicsTemplatesRequest&,
        DescribeAnimatedGraphicsTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAsrHotwordsRequest&;
    using Resp = DescribeAsrHotwordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsrHotwords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAsrHotwordsOutcomeCallable MpsClient::DescribeAsrHotwordsCallable(const DescribeAsrHotwordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsrHotwordsOutcome>>();
    DescribeAsrHotwordsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAsrHotwordsRequest&,
        DescribeAsrHotwordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAsrHotwordsListRequest&;
    using Resp = DescribeAsrHotwordsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsrHotwordsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeAsrHotwordsListOutcomeCallable MpsClient::DescribeAsrHotwordsListCallable(const DescribeAsrHotwordsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsrHotwordsListOutcome>>();
    DescribeAsrHotwordsListAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeAsrHotwordsListRequest&,
        DescribeAsrHotwordsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeBatchTaskDetailRequest&;
    using Resp = DescribeBatchTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeBatchTaskDetailOutcomeCallable MpsClient::DescribeBatchTaskDetailCallable(const DescribeBatchTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchTaskDetailOutcome>>();
    DescribeBatchTaskDetailAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeBatchTaskDetailRequest&,
        DescribeBatchTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeContentReviewTemplatesRequest&;
    using Resp = DescribeContentReviewTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContentReviewTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeContentReviewTemplatesOutcomeCallable MpsClient::DescribeContentReviewTemplatesCallable(const DescribeContentReviewTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContentReviewTemplatesOutcome>>();
    DescribeContentReviewTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeContentReviewTemplatesRequest&,
        DescribeContentReviewTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeGroupAttachFlowsByIdRequest&;
    using Resp = DescribeGroupAttachFlowsByIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupAttachFlowsById", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeGroupAttachFlowsByIdOutcomeCallable MpsClient::DescribeGroupAttachFlowsByIdCallable(const DescribeGroupAttachFlowsByIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupAttachFlowsByIdOutcome>>();
    DescribeGroupAttachFlowsByIdAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeGroupAttachFlowsByIdRequest&,
        DescribeGroupAttachFlowsByIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageSpriteTemplatesRequest&;
    using Resp = DescribeImageSpriteTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageSpriteTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeImageSpriteTemplatesOutcomeCallable MpsClient::DescribeImageSpriteTemplatesCallable(const DescribeImageSpriteTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageSpriteTemplatesOutcome>>();
    DescribeImageSpriteTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeImageSpriteTemplatesRequest&,
        DescribeImageSpriteTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageTaskDetailRequest&;
    using Resp = DescribeImageTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeImageTaskDetailOutcomeCallable MpsClient::DescribeImageTaskDetailCallable(const DescribeImageTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageTaskDetailOutcome>>();
    DescribeImageTaskDetailAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeImageTaskDetailRequest&,
        DescribeImageTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLiveRecordTemplatesRequest&;
    using Resp = DescribeLiveRecordTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLiveRecordTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeLiveRecordTemplatesOutcomeCallable MpsClient::DescribeLiveRecordTemplatesCallable(const DescribeLiveRecordTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLiveRecordTemplatesOutcome>>();
    DescribeLiveRecordTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeLiveRecordTemplatesRequest&,
        DescribeLiveRecordTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMediaMetaDataRequest&;
    using Resp = DescribeMediaMetaDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaMetaData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeMediaMetaDataOutcomeCallable MpsClient::DescribeMediaMetaDataCallable(const DescribeMediaMetaDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaMetaDataOutcome>>();
    DescribeMediaMetaDataAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeMediaMetaDataRequest&,
        DescribeMediaMetaDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePersonSamplesRequest&;
    using Resp = DescribePersonSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePersonSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribePersonSamplesOutcomeCallable MpsClient::DescribePersonSamplesCallable(const DescribePersonSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePersonSamplesOutcome>>();
    DescribePersonSamplesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribePersonSamplesRequest&,
        DescribePersonSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeQualityControlTemplatesRequest&;
    using Resp = DescribeQualityControlTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityControlTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeQualityControlTemplatesOutcomeCallable MpsClient::DescribeQualityControlTemplatesCallable(const DescribeQualityControlTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityControlTemplatesOutcome>>();
    DescribeQualityControlTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeQualityControlTemplatesRequest&,
        DescribeQualityControlTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSampleSnapshotTemplatesRequest&;
    using Resp = DescribeSampleSnapshotTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleSnapshotTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeSampleSnapshotTemplatesOutcomeCallable MpsClient::DescribeSampleSnapshotTemplatesCallable(const DescribeSampleSnapshotTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleSnapshotTemplatesOutcome>>();
    DescribeSampleSnapshotTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeSampleSnapshotTemplatesRequest&,
        DescribeSampleSnapshotTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSchedulesRequest&;
    using Resp = DescribeSchedulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSchedules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeSchedulesOutcomeCallable MpsClient::DescribeSchedulesCallable(const DescribeSchedulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSchedulesOutcome>>();
    DescribeSchedulesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeSchedulesRequest&,
        DescribeSchedulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MpsClient::DescribeSmartEraseTemplatesOutcome MpsClient::DescribeSmartEraseTemplates(const DescribeSmartEraseTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSmartEraseTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSmartEraseTemplatesResponse rsp = DescribeSmartEraseTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSmartEraseTemplatesOutcome(rsp);
        else
            return DescribeSmartEraseTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSmartEraseTemplatesOutcome(outcome.GetError());
    }
}

void MpsClient::DescribeSmartEraseTemplatesAsync(const DescribeSmartEraseTemplatesRequest& request, const DescribeSmartEraseTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSmartEraseTemplatesRequest&;
    using Resp = DescribeSmartEraseTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmartEraseTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeSmartEraseTemplatesOutcomeCallable MpsClient::DescribeSmartEraseTemplatesCallable(const DescribeSmartEraseTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmartEraseTemplatesOutcome>>();
    DescribeSmartEraseTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeSmartEraseTemplatesRequest&,
        DescribeSmartEraseTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSmartSubtitleTemplatesRequest&;
    using Resp = DescribeSmartSubtitleTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSmartSubtitleTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeSmartSubtitleTemplatesOutcomeCallable MpsClient::DescribeSmartSubtitleTemplatesCallable(const DescribeSmartSubtitleTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSmartSubtitleTemplatesOutcome>>();
    DescribeSmartSubtitleTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeSmartSubtitleTemplatesRequest&,
        DescribeSmartSubtitleTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSnapshotByTimeOffsetTemplatesRequest&;
    using Resp = DescribeSnapshotByTimeOffsetTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotByTimeOffsetTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable MpsClient::DescribeSnapshotByTimeOffsetTemplatesCallable(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotByTimeOffsetTemplatesOutcome>>();
    DescribeSnapshotByTimeOffsetTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeSnapshotByTimeOffsetTemplatesRequest&,
        DescribeSnapshotByTimeOffsetTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkActivateStateRequest&;
    using Resp = DescribeStreamLinkActivateStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkActivateState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkActivateStateOutcomeCallable MpsClient::DescribeStreamLinkActivateStateCallable(const DescribeStreamLinkActivateStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkActivateStateOutcome>>();
    DescribeStreamLinkActivateStateAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkActivateStateRequest&,
        DescribeStreamLinkActivateStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkEventRequest&;
    using Resp = DescribeStreamLinkEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkEventOutcomeCallable MpsClient::DescribeStreamLinkEventCallable(const DescribeStreamLinkEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkEventOutcome>>();
    DescribeStreamLinkEventAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkEventRequest&,
        DescribeStreamLinkEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkEventAttachedFlowsRequest&;
    using Resp = DescribeStreamLinkEventAttachedFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkEventAttachedFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkEventAttachedFlowsOutcomeCallable MpsClient::DescribeStreamLinkEventAttachedFlowsCallable(const DescribeStreamLinkEventAttachedFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkEventAttachedFlowsOutcome>>();
    DescribeStreamLinkEventAttachedFlowsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkEventAttachedFlowsRequest&,
        DescribeStreamLinkEventAttachedFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkEventsRequest&;
    using Resp = DescribeStreamLinkEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkEventsOutcomeCallable MpsClient::DescribeStreamLinkEventsCallable(const DescribeStreamLinkEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkEventsOutcome>>();
    DescribeStreamLinkEventsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkEventsRequest&,
        DescribeStreamLinkEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowRequest&;
    using Resp = DescribeStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowOutcomeCallable MpsClient::DescribeStreamLinkFlowCallable(const DescribeStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowOutcome>>();
    DescribeStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowRequest&,
        DescribeStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowLogsRequest&;
    using Resp = DescribeStreamLinkFlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowLogsOutcomeCallable MpsClient::DescribeStreamLinkFlowLogsCallable(const DescribeStreamLinkFlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowLogsOutcome>>();
    DescribeStreamLinkFlowLogsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowLogsRequest&,
        DescribeStreamLinkFlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowMediaStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowMediaStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowMediaStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowMediaStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowMediaStatisticsCallable(const DescribeStreamLinkFlowMediaStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowMediaStatisticsOutcome>>();
    DescribeStreamLinkFlowMediaStatisticsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowMediaStatisticsRequest&,
        DescribeStreamLinkFlowMediaStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowRealtimeStatusRequest&;
    using Resp = DescribeStreamLinkFlowRealtimeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowRealtimeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowRealtimeStatusOutcomeCallable MpsClient::DescribeStreamLinkFlowRealtimeStatusCallable(const DescribeStreamLinkFlowRealtimeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowRealtimeStatusOutcome>>();
    DescribeStreamLinkFlowRealtimeStatusAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowRealtimeStatusRequest&,
        DescribeStreamLinkFlowRealtimeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowSRTStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowSRTStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowSRTStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowSRTStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowSRTStatisticsCallable(const DescribeStreamLinkFlowSRTStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowSRTStatisticsOutcome>>();
    DescribeStreamLinkFlowSRTStatisticsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowSRTStatisticsRequest&,
        DescribeStreamLinkFlowSRTStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowStatisticsRequest&;
    using Resp = DescribeStreamLinkFlowStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlowStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowStatisticsOutcomeCallable MpsClient::DescribeStreamLinkFlowStatisticsCallable(const DescribeStreamLinkFlowStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowStatisticsOutcome>>();
    DescribeStreamLinkFlowStatisticsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowStatisticsRequest&,
        DescribeStreamLinkFlowStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkFlowsRequest&;
    using Resp = DescribeStreamLinkFlowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkFlows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkFlowsOutcomeCallable MpsClient::DescribeStreamLinkFlowsCallable(const DescribeStreamLinkFlowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkFlowsOutcome>>();
    DescribeStreamLinkFlowsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkFlowsRequest&,
        DescribeStreamLinkFlowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkRegionsRequest&;
    using Resp = DescribeStreamLinkRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkRegionsOutcomeCallable MpsClient::DescribeStreamLinkRegionsCallable(const DescribeStreamLinkRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkRegionsOutcome>>();
    DescribeStreamLinkRegionsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkRegionsRequest&,
        DescribeStreamLinkRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStreamLinkSecurityGroupsRequest&;
    using Resp = DescribeStreamLinkSecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamLinkSecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeStreamLinkSecurityGroupsOutcomeCallable MpsClient::DescribeStreamLinkSecurityGroupsCallable(const DescribeStreamLinkSecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamLinkSecurityGroupsOutcome>>();
    DescribeStreamLinkSecurityGroupsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeStreamLinkSecurityGroupsRequest&,
        DescribeStreamLinkSecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeTaskDetailOutcomeCallable MpsClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeTasksOutcomeCallable MpsClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTranscodeTemplatesRequest&;
    using Resp = DescribeTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeTranscodeTemplatesOutcomeCallable MpsClient::DescribeTranscodeTemplatesCallable(const DescribeTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeTemplatesOutcome>>();
    DescribeTranscodeTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeTranscodeTemplatesRequest&,
        DescribeTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeVideoDatabaseEntryTaskDetailRequest&;
    using Resp = DescribeVideoDatabaseEntryTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoDatabaseEntryTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeVideoDatabaseEntryTaskDetailOutcomeCallable MpsClient::DescribeVideoDatabaseEntryTaskDetailCallable(const DescribeVideoDatabaseEntryTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoDatabaseEntryTaskDetailOutcome>>();
    DescribeVideoDatabaseEntryTaskDetailAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeVideoDatabaseEntryTaskDetailRequest&,
        DescribeVideoDatabaseEntryTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeVideoSearchTaskDetailRequest&;
    using Resp = DescribeVideoSearchTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoSearchTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeVideoSearchTaskDetailOutcomeCallable MpsClient::DescribeVideoSearchTaskDetailCallable(const DescribeVideoSearchTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoSearchTaskDetailOutcome>>();
    DescribeVideoSearchTaskDetailAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeVideoSearchTaskDetailRequest&,
        DescribeVideoSearchTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWatermarkTemplatesRequest&;
    using Resp = DescribeWatermarkTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWatermarkTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeWatermarkTemplatesOutcomeCallable MpsClient::DescribeWatermarkTemplatesCallable(const DescribeWatermarkTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWatermarkTemplatesOutcome>>();
    DescribeWatermarkTemplatesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeWatermarkTemplatesRequest&,
        DescribeWatermarkTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWordSamplesRequest&;
    using Resp = DescribeWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeWordSamplesOutcomeCallable MpsClient::DescribeWordSamplesCallable(const DescribeWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWordSamplesOutcome>>();
    DescribeWordSamplesAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeWordSamplesRequest&,
        DescribeWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWorkflowsRequest&;
    using Resp = DescribeWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DescribeWorkflowsOutcomeCallable MpsClient::DescribeWorkflowsCallable(const DescribeWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkflowsOutcome>>();
    DescribeWorkflowsAsync(
    request,
    [prom](
        const MpsClient*,
        const DescribeWorkflowsRequest&,
        DescribeWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableScheduleRequest&;
    using Resp = DisableScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DisableSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DisableScheduleOutcomeCallable MpsClient::DisableScheduleCallable(const DisableScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableScheduleOutcome>>();
    DisableScheduleAsync(
    request,
    [prom](
        const MpsClient*,
        const DisableScheduleRequest&,
        DisableScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisableWorkflowRequest&;
    using Resp = DisableWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DisableWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DisableWorkflowOutcomeCallable MpsClient::DisableWorkflowCallable(const DisableWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableWorkflowOutcome>>();
    DisableWorkflowAsync(
    request,
    [prom](
        const MpsClient*,
        const DisableWorkflowRequest&,
        DisableWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DisassociateSecurityGroupRequest&;
    using Resp = DisassociateSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::DisassociateSecurityGroupOutcomeCallable MpsClient::DisassociateSecurityGroupCallable(const DisassociateSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateSecurityGroupOutcome>>();
    DisassociateSecurityGroupAsync(
    request,
    [prom](
        const MpsClient*,
        const DisassociateSecurityGroupRequest&,
        DisassociateSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EditMediaRequest&;
    using Resp = EditMediaResponse;

    DoRequestAsync<Req, Resp>(
        "EditMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::EditMediaOutcomeCallable MpsClient::EditMediaCallable(const EditMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditMediaOutcome>>();
    EditMediaAsync(
    request,
    [prom](
        const MpsClient*,
        const EditMediaRequest&,
        EditMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableScheduleRequest&;
    using Resp = EnableScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::EnableScheduleOutcomeCallable MpsClient::EnableScheduleCallable(const EnableScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableScheduleOutcome>>();
    EnableScheduleAsync(
    request,
    [prom](
        const MpsClient*,
        const EnableScheduleRequest&,
        EnableScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnableWorkflowRequest&;
    using Resp = EnableWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "EnableWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::EnableWorkflowOutcomeCallable MpsClient::EnableWorkflowCallable(const EnableWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableWorkflowOutcome>>();
    EnableWorkflowAsync(
    request,
    [prom](
        const MpsClient*,
        const EnableWorkflowRequest&,
        EnableWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExecuteFunctionRequest&;
    using Resp = ExecuteFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ExecuteFunctionOutcomeCallable MpsClient::ExecuteFunctionCallable(const ExecuteFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteFunctionOutcome>>();
    ExecuteFunctionAsync(
    request,
    [prom](
        const MpsClient*,
        const ExecuteFunctionRequest&,
        ExecuteFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ManageTaskRequest&;
    using Resp = ManageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ManageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ManageTaskOutcomeCallable MpsClient::ManageTaskCallable(const ManageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageTaskOutcome>>();
    ManageTaskAsync(
    request,
    [prom](
        const MpsClient*,
        const ManageTaskRequest&,
        ManageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAIAnalysisTemplateRequest&;
    using Resp = ModifyAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyAIAnalysisTemplateOutcomeCallable MpsClient::ModifyAIAnalysisTemplateCallable(const ModifyAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAIAnalysisTemplateOutcome>>();
    ModifyAIAnalysisTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyAIAnalysisTemplateRequest&,
        ModifyAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAIRecognitionTemplateRequest&;
    using Resp = ModifyAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyAIRecognitionTemplateOutcomeCallable MpsClient::ModifyAIRecognitionTemplateCallable(const ModifyAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAIRecognitionTemplateOutcome>>();
    ModifyAIRecognitionTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyAIRecognitionTemplateRequest&,
        ModifyAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = ModifyAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable MpsClient::ModifyAdaptiveDynamicStreamingTemplateCallable(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAdaptiveDynamicStreamingTemplateOutcome>>();
    ModifyAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyAdaptiveDynamicStreamingTemplateRequest&,
        ModifyAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAnimatedGraphicsTemplateRequest&;
    using Resp = ModifyAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyAnimatedGraphicsTemplateOutcomeCallable MpsClient::ModifyAnimatedGraphicsTemplateCallable(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAnimatedGraphicsTemplateOutcome>>();
    ModifyAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyAnimatedGraphicsTemplateRequest&,
        ModifyAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAsrHotwordsRequest&;
    using Resp = ModifyAsrHotwordsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAsrHotwords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyAsrHotwordsOutcomeCallable MpsClient::ModifyAsrHotwordsCallable(const ModifyAsrHotwordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAsrHotwordsOutcome>>();
    ModifyAsrHotwordsAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyAsrHotwordsRequest&,
        ModifyAsrHotwordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyContentReviewTemplateRequest&;
    using Resp = ModifyContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyContentReviewTemplateOutcomeCallable MpsClient::ModifyContentReviewTemplateCallable(const ModifyContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContentReviewTemplateOutcome>>();
    ModifyContentReviewTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyContentReviewTemplateRequest&,
        ModifyContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyImageSpriteTemplateRequest&;
    using Resp = ModifyImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyImageSpriteTemplateOutcomeCallable MpsClient::ModifyImageSpriteTemplateCallable(const ModifyImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageSpriteTemplateOutcome>>();
    ModifyImageSpriteTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyImageSpriteTemplateRequest&,
        ModifyImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyLiveRecordTemplateRequest&;
    using Resp = ModifyLiveRecordTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLiveRecordTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyLiveRecordTemplateOutcomeCallable MpsClient::ModifyLiveRecordTemplateCallable(const ModifyLiveRecordTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLiveRecordTemplateOutcome>>();
    ModifyLiveRecordTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyLiveRecordTemplateRequest&,
        ModifyLiveRecordTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPersonSampleRequest&;
    using Resp = ModifyPersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyPersonSampleOutcomeCallable MpsClient::ModifyPersonSampleCallable(const ModifyPersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPersonSampleOutcome>>();
    ModifyPersonSampleAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyPersonSampleRequest&,
        ModifyPersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyQualityControlTemplateRequest&;
    using Resp = ModifyQualityControlTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQualityControlTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyQualityControlTemplateOutcomeCallable MpsClient::ModifyQualityControlTemplateCallable(const ModifyQualityControlTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQualityControlTemplateOutcome>>();
    ModifyQualityControlTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyQualityControlTemplateRequest&,
        ModifyQualityControlTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySampleSnapshotTemplateRequest&;
    using Resp = ModifySampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifySampleSnapshotTemplateOutcomeCallable MpsClient::ModifySampleSnapshotTemplateCallable(const ModifySampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySampleSnapshotTemplateOutcome>>();
    ModifySampleSnapshotTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifySampleSnapshotTemplateRequest&,
        ModifySampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyScheduleRequest&;
    using Resp = ModifyScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyScheduleOutcomeCallable MpsClient::ModifyScheduleCallable(const ModifyScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyScheduleOutcome>>();
    ModifyScheduleAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyScheduleRequest&,
        ModifyScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MpsClient::ModifySmartEraseTemplateOutcome MpsClient::ModifySmartEraseTemplate(const ModifySmartEraseTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySmartEraseTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySmartEraseTemplateResponse rsp = ModifySmartEraseTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySmartEraseTemplateOutcome(rsp);
        else
            return ModifySmartEraseTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifySmartEraseTemplateOutcome(outcome.GetError());
    }
}

void MpsClient::ModifySmartEraseTemplateAsync(const ModifySmartEraseTemplateRequest& request, const ModifySmartEraseTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySmartEraseTemplateRequest&;
    using Resp = ModifySmartEraseTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySmartEraseTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifySmartEraseTemplateOutcomeCallable MpsClient::ModifySmartEraseTemplateCallable(const ModifySmartEraseTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySmartEraseTemplateOutcome>>();
    ModifySmartEraseTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifySmartEraseTemplateRequest&,
        ModifySmartEraseTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySmartSubtitleTemplateRequest&;
    using Resp = ModifySmartSubtitleTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySmartSubtitleTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifySmartSubtitleTemplateOutcomeCallable MpsClient::ModifySmartSubtitleTemplateCallable(const ModifySmartSubtitleTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySmartSubtitleTemplateOutcome>>();
    ModifySmartSubtitleTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifySmartSubtitleTemplateRequest&,
        ModifySmartSubtitleTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySnapshotByTimeOffsetTemplateRequest&;
    using Resp = ModifySnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifySnapshotByTimeOffsetTemplateOutcomeCallable MpsClient::ModifySnapshotByTimeOffsetTemplateCallable(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotByTimeOffsetTemplateOutcome>>();
    ModifySnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifySnapshotByTimeOffsetTemplateRequest&,
        ModifySnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStreamLinkEventRequest&;
    using Resp = ModifyStreamLinkEventResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyStreamLinkEventOutcomeCallable MpsClient::ModifyStreamLinkEventCallable(const ModifyStreamLinkEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkEventOutcome>>();
    ModifyStreamLinkEventAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyStreamLinkEventRequest&,
        ModifyStreamLinkEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStreamLinkFlowRequest&;
    using Resp = ModifyStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyStreamLinkFlowOutcomeCallable MpsClient::ModifyStreamLinkFlowCallable(const ModifyStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkFlowOutcome>>();
    ModifyStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyStreamLinkFlowRequest&,
        ModifyStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStreamLinkInputRequest&;
    using Resp = ModifyStreamLinkInputResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkInput", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyStreamLinkInputOutcomeCallable MpsClient::ModifyStreamLinkInputCallable(const ModifyStreamLinkInputRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkInputOutcome>>();
    ModifyStreamLinkInputAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyStreamLinkInputRequest&,
        ModifyStreamLinkInputOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStreamLinkOutputInfoRequest&;
    using Resp = ModifyStreamLinkOutputInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkOutputInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyStreamLinkOutputInfoOutcomeCallable MpsClient::ModifyStreamLinkOutputInfoCallable(const ModifyStreamLinkOutputInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkOutputInfoOutcome>>();
    ModifyStreamLinkOutputInfoAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyStreamLinkOutputInfoRequest&,
        ModifyStreamLinkOutputInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyStreamLinkSecurityGroupRequest&;
    using Resp = ModifyStreamLinkSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyStreamLinkSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyStreamLinkSecurityGroupOutcomeCallable MpsClient::ModifyStreamLinkSecurityGroupCallable(const ModifyStreamLinkSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyStreamLinkSecurityGroupOutcome>>();
    ModifyStreamLinkSecurityGroupAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyStreamLinkSecurityGroupRequest&,
        ModifyStreamLinkSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTranscodeTemplateRequest&;
    using Resp = ModifyTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyTranscodeTemplateOutcomeCallable MpsClient::ModifyTranscodeTemplateCallable(const ModifyTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTranscodeTemplateOutcome>>();
    ModifyTranscodeTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyTranscodeTemplateRequest&,
        ModifyTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyWatermarkTemplateRequest&;
    using Resp = ModifyWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyWatermarkTemplateOutcomeCallable MpsClient::ModifyWatermarkTemplateCallable(const ModifyWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWatermarkTemplateOutcome>>();
    ModifyWatermarkTemplateAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyWatermarkTemplateRequest&,
        ModifyWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyWordSampleRequest&;
    using Resp = ModifyWordSampleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWordSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ModifyWordSampleOutcomeCallable MpsClient::ModifyWordSampleCallable(const ModifyWordSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWordSampleOutcome>>();
    ModifyWordSampleAsync(
    request,
    [prom](
        const MpsClient*,
        const ModifyWordSampleRequest&,
        ModifyWordSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ParseLiveStreamProcessNotificationRequest&;
    using Resp = ParseLiveStreamProcessNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "ParseLiveStreamProcessNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ParseLiveStreamProcessNotificationOutcomeCallable MpsClient::ParseLiveStreamProcessNotificationCallable(const ParseLiveStreamProcessNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseLiveStreamProcessNotificationOutcome>>();
    ParseLiveStreamProcessNotificationAsync(
    request,
    [prom](
        const MpsClient*,
        const ParseLiveStreamProcessNotificationRequest&,
        ParseLiveStreamProcessNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ParseNotificationRequest&;
    using Resp = ParseNotificationResponse;

    DoRequestAsync<Req, Resp>(
        "ParseNotification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ParseNotificationOutcomeCallable MpsClient::ParseNotificationCallable(const ParseNotificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseNotificationOutcome>>();
    ParseNotificationAsync(
    request,
    [prom](
        const MpsClient*,
        const ParseNotificationRequest&,
        ParseNotificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessImageRequest&;
    using Resp = ProcessImageResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ProcessImageOutcomeCallable MpsClient::ProcessImageCallable(const ProcessImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessImageOutcome>>();
    ProcessImageAsync(
    request,
    [prom](
        const MpsClient*,
        const ProcessImageRequest&,
        ProcessImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessLiveStreamRequest&;
    using Resp = ProcessLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ProcessLiveStreamOutcomeCallable MpsClient::ProcessLiveStreamCallable(const ProcessLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessLiveStreamOutcome>>();
    ProcessLiveStreamAsync(
    request,
    [prom](
        const MpsClient*,
        const ProcessLiveStreamRequest&,
        ProcessLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMediaRequest&;
    using Resp = ProcessMediaResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ProcessMediaOutcomeCallable MpsClient::ProcessMediaCallable(const ProcessMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMediaOutcome>>();
    ProcessMediaAsync(
    request,
    [prom](
        const MpsClient*,
        const ProcessMediaRequest&,
        ProcessMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RecognizeMediaForZhiXueRequest&;
    using Resp = RecognizeMediaForZhiXueResponse;

    DoRequestAsync<Req, Resp>(
        "RecognizeMediaForZhiXue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::RecognizeMediaForZhiXueOutcomeCallable MpsClient::RecognizeMediaForZhiXueCallable(const RecognizeMediaForZhiXueRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecognizeMediaForZhiXueOutcome>>();
    RecognizeMediaForZhiXueAsync(
    request,
    [prom](
        const MpsClient*,
        const RecognizeMediaForZhiXueRequest&,
        RecognizeMediaForZhiXueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetWorkflowRequest&;
    using Resp = ResetWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "ResetWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::ResetWorkflowOutcomeCallable MpsClient::ResetWorkflowCallable(const ResetWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetWorkflowOutcome>>();
    ResetWorkflowAsync(
    request,
    [prom](
        const MpsClient*,
        const ResetWorkflowRequest&,
        ResetWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StartStreamLinkFlowRequest&;
    using Resp = StartStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::StartStreamLinkFlowOutcomeCallable MpsClient::StartStreamLinkFlowCallable(const StartStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamLinkFlowOutcome>>();
    StartStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const StartStreamLinkFlowRequest&,
        StartStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const StopStreamLinkFlowRequest&;
    using Resp = StopStreamLinkFlowResponse;

    DoRequestAsync<Req, Resp>(
        "StopStreamLinkFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::StopStreamLinkFlowOutcomeCallable MpsClient::StopStreamLinkFlowCallable(const StopStreamLinkFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopStreamLinkFlowOutcome>>();
    StopStreamLinkFlowAsync(
    request,
    [prom](
        const MpsClient*,
        const StopStreamLinkFlowRequest&,
        StopStreamLinkFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const WithdrawsWatermarkRequest&;
    using Resp = WithdrawsWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "WithdrawsWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MpsClient::WithdrawsWatermarkOutcomeCallable MpsClient::WithdrawsWatermarkCallable(const WithdrawsWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<WithdrawsWatermarkOutcome>>();
    WithdrawsWatermarkAsync(
    request,
    [prom](
        const MpsClient*,
        const WithdrawsWatermarkRequest&,
        WithdrawsWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

