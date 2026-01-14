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
    using Req = const ApplyUploadRequest&;
    using Resp = ApplyUploadResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ApplyUploadOutcomeCallable VodClient::ApplyUploadCallable(const ApplyUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyUploadOutcome>>();
    ApplyUploadAsync(
    request,
    [prom](
        const VodClient*,
        const ApplyUploadRequest&,
        ApplyUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const AttachMediaSubtitlesRequest&;
    using Resp = AttachMediaSubtitlesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachMediaSubtitles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::AttachMediaSubtitlesOutcomeCallable VodClient::AttachMediaSubtitlesCallable(const AttachMediaSubtitlesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachMediaSubtitlesOutcome>>();
    AttachMediaSubtitlesAsync(
    request,
    [prom](
        const VodClient*,
        const AttachMediaSubtitlesRequest&,
        AttachMediaSubtitlesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CommitUploadRequest&;
    using Resp = CommitUploadResponse;

    DoRequestAsync<Req, Resp>(
        "CommitUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CommitUploadOutcomeCallable VodClient::CommitUploadCallable(const CommitUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CommitUploadOutcome>>();
    CommitUploadAsync(
    request,
    [prom](
        const VodClient*,
        const CommitUploadRequest&,
        CommitUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ComposeMediaRequest&;
    using Resp = ComposeMediaResponse;

    DoRequestAsync<Req, Resp>(
        "ComposeMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ComposeMediaOutcomeCallable VodClient::ComposeMediaCallable(const ComposeMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ComposeMediaOutcome>>();
    ComposeMediaAsync(
    request,
    [prom](
        const VodClient*,
        const ComposeMediaRequest&,
        ComposeMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ConfirmEventsRequest&;
    using Resp = ConfirmEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ConfirmEventsOutcomeCallable VodClient::ConfirmEventsCallable(const ConfirmEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmEventsOutcome>>();
    ConfirmEventsAsync(
    request,
    [prom](
        const VodClient*,
        const ConfirmEventsRequest&,
        ConfirmEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIAnalysisTemplateRequest&;
    using Resp = CreateAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAIAnalysisTemplateOutcomeCallable VodClient::CreateAIAnalysisTemplateCallable(const CreateAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIAnalysisTemplateOutcome>>();
    CreateAIAnalysisTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAIAnalysisTemplateRequest&,
        CreateAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAIRecognitionTemplateRequest&;
    using Resp = CreateAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAIRecognitionTemplateOutcomeCallable VodClient::CreateAIRecognitionTemplateCallable(const CreateAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAIRecognitionTemplateOutcome>>();
    CreateAIRecognitionTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAIRecognitionTemplateRequest&,
        CreateAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = CreateAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::CreateAdaptiveDynamicStreamingTemplateCallable(const CreateAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAdaptiveDynamicStreamingTemplateOutcome>>();
    CreateAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAdaptiveDynamicStreamingTemplateRequest&,
        CreateAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateAigcCustomElementOutcome VodClient::CreateAigcCustomElement(const CreateAigcCustomElementRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAigcCustomElement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAigcCustomElementResponse rsp = CreateAigcCustomElementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAigcCustomElementOutcome(rsp);
        else
            return CreateAigcCustomElementOutcome(o.GetError());
    }
    else
    {
        return CreateAigcCustomElementOutcome(outcome.GetError());
    }
}

void VodClient::CreateAigcCustomElementAsync(const CreateAigcCustomElementRequest& request, const CreateAigcCustomElementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAigcCustomElementRequest&;
    using Resp = CreateAigcCustomElementResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAigcCustomElement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAigcCustomElementOutcomeCallable VodClient::CreateAigcCustomElementCallable(const CreateAigcCustomElementRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAigcCustomElementOutcome>>();
    CreateAigcCustomElementAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAigcCustomElementRequest&,
        CreateAigcCustomElementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateAigcImageTaskOutcome VodClient::CreateAigcImageTask(const CreateAigcImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAigcImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAigcImageTaskResponse rsp = CreateAigcImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAigcImageTaskOutcome(rsp);
        else
            return CreateAigcImageTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAigcImageTaskOutcome(outcome.GetError());
    }
}

void VodClient::CreateAigcImageTaskAsync(const CreateAigcImageTaskRequest& request, const CreateAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAigcImageTaskRequest&;
    using Resp = CreateAigcImageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAigcImageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAigcImageTaskOutcomeCallable VodClient::CreateAigcImageTaskCallable(const CreateAigcImageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAigcImageTaskOutcome>>();
    CreateAigcImageTaskAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAigcImageTaskRequest&,
        CreateAigcImageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateAigcVideoTaskOutcome VodClient::CreateAigcVideoTask(const CreateAigcVideoTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAigcVideoTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAigcVideoTaskResponse rsp = CreateAigcVideoTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAigcVideoTaskOutcome(rsp);
        else
            return CreateAigcVideoTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAigcVideoTaskOutcome(outcome.GetError());
    }
}

void VodClient::CreateAigcVideoTaskAsync(const CreateAigcVideoTaskRequest& request, const CreateAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAigcVideoTaskRequest&;
    using Resp = CreateAigcVideoTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAigcVideoTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAigcVideoTaskOutcomeCallable VodClient::CreateAigcVideoTaskCallable(const CreateAigcVideoTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAigcVideoTaskOutcome>>();
    CreateAigcVideoTaskAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAigcVideoTaskRequest&,
        CreateAigcVideoTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAnimatedGraphicsTemplateRequest&;
    using Resp = CreateAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateAnimatedGraphicsTemplateOutcomeCallable VodClient::CreateAnimatedGraphicsTemplateCallable(const CreateAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAnimatedGraphicsTemplateOutcome>>();
    CreateAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateAnimatedGraphicsTemplateRequest&,
        CreateAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCLSLogsetRequest&;
    using Resp = CreateCLSLogsetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCLSLogset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateCLSLogsetOutcomeCallable VodClient::CreateCLSLogsetCallable(const CreateCLSLogsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCLSLogsetOutcome>>();
    CreateCLSLogsetAsync(
    request,
    [prom](
        const VodClient*,
        const CreateCLSLogsetRequest&,
        CreateCLSLogsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateCLSTopicRequest&;
    using Resp = CreateCLSTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCLSTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateCLSTopicOutcomeCallable VodClient::CreateCLSTopicCallable(const CreateCLSTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCLSTopicOutcome>>();
    CreateCLSTopicAsync(
    request,
    [prom](
        const VodClient*,
        const CreateCLSTopicRequest&,
        CreateCLSTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateClassRequest&;
    using Resp = CreateClassResponse;

    DoRequestAsync<Req, Resp>(
        "CreateClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateClassOutcomeCallable VodClient::CreateClassCallable(const CreateClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClassOutcome>>();
    CreateClassAsync(
    request,
    [prom](
        const VodClient*,
        const CreateClassRequest&,
        CreateClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateComplexAdaptiveDynamicStreamingTaskRequest&;
    using Resp = CreateComplexAdaptiveDynamicStreamingTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateComplexAdaptiveDynamicStreamingTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateComplexAdaptiveDynamicStreamingTaskOutcomeCallable VodClient::CreateComplexAdaptiveDynamicStreamingTaskCallable(const CreateComplexAdaptiveDynamicStreamingTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateComplexAdaptiveDynamicStreamingTaskOutcome>>();
    CreateComplexAdaptiveDynamicStreamingTaskAsync(
    request,
    [prom](
        const VodClient*,
        const CreateComplexAdaptiveDynamicStreamingTaskRequest&,
        CreateComplexAdaptiveDynamicStreamingTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateContentReviewTemplateRequest&;
    using Resp = CreateContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateContentReviewTemplateOutcomeCallable VodClient::CreateContentReviewTemplateCallable(const CreateContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContentReviewTemplateOutcome>>();
    CreateContentReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateContentReviewTemplateRequest&,
        CreateContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDomainVerifyRecordRequest&;
    using Resp = CreateDomainVerifyRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainVerifyRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateDomainVerifyRecordOutcomeCallable VodClient::CreateDomainVerifyRecordCallable(const CreateDomainVerifyRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainVerifyRecordOutcome>>();
    CreateDomainVerifyRecordAsync(
    request,
    [prom](
        const VodClient*,
        const CreateDomainVerifyRecordRequest&,
        CreateDomainVerifyRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateEnhanceMediaTemplateRequest&;
    using Resp = CreateEnhanceMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnhanceMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateEnhanceMediaTemplateOutcomeCallable VodClient::CreateEnhanceMediaTemplateCallable(const CreateEnhanceMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnhanceMediaTemplateOutcome>>();
    CreateEnhanceMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateEnhanceMediaTemplateRequest&,
        CreateEnhanceMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateHeadTailTemplateRequest&;
    using Resp = CreateHeadTailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHeadTailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateHeadTailTemplateOutcomeCallable VodClient::CreateHeadTailTemplateCallable(const CreateHeadTailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHeadTailTemplateOutcome>>();
    CreateHeadTailTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateHeadTailTemplateRequest&,
        CreateHeadTailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateImageProcessingTemplateRequest&;
    using Resp = CreateImageProcessingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageProcessingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateImageProcessingTemplateOutcomeCallable VodClient::CreateImageProcessingTemplateCallable(const CreateImageProcessingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageProcessingTemplateOutcome>>();
    CreateImageProcessingTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateImageProcessingTemplateRequest&,
        CreateImageProcessingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateImageSpriteTemplateRequest&;
    using Resp = CreateImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateImageSpriteTemplateOutcomeCallable VodClient::CreateImageSpriteTemplateCallable(const CreateImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateImageSpriteTemplateOutcome>>();
    CreateImageSpriteTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateImageSpriteTemplateRequest&,
        CreateImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateJustInTimeTranscodeTemplateRequest&;
    using Resp = CreateJustInTimeTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJustInTimeTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateJustInTimeTranscodeTemplateOutcomeCallable VodClient::CreateJustInTimeTranscodeTemplateCallable(const CreateJustInTimeTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJustInTimeTranscodeTemplateOutcome>>();
    CreateJustInTimeTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateJustInTimeTranscodeTemplateRequest&,
        CreateJustInTimeTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateMPSTemplateOutcome VodClient::CreateMPSTemplate(const CreateMPSTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMPSTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMPSTemplateResponse rsp = CreateMPSTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMPSTemplateOutcome(rsp);
        else
            return CreateMPSTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateMPSTemplateOutcome(outcome.GetError());
    }
}

void VodClient::CreateMPSTemplateAsync(const CreateMPSTemplateRequest& request, const CreateMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMPSTemplateRequest&;
    using Resp = CreateMPSTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMPSTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateMPSTemplateOutcomeCallable VodClient::CreateMPSTemplateCallable(const CreateMPSTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMPSTemplateOutcome>>();
    CreateMPSTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateMPSTemplateRequest&,
        CreateMPSTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreatePersonSampleRequest&;
    using Resp = CreatePersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreatePersonSampleOutcomeCallable VodClient::CreatePersonSampleCallable(const CreatePersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonSampleOutcome>>();
    CreatePersonSampleAsync(
    request,
    [prom](
        const VodClient*,
        const CreatePersonSampleRequest&,
        CreatePersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateProcedureTemplateRequest&;
    using Resp = CreateProcedureTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProcedureTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateProcedureTemplateOutcomeCallable VodClient::CreateProcedureTemplateCallable(const CreateProcedureTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProcedureTemplateOutcome>>();
    CreateProcedureTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateProcedureTemplateRequest&,
        CreateProcedureTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateQualityInspectTemplateRequest&;
    using Resp = CreateQualityInspectTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQualityInspectTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateQualityInspectTemplateOutcomeCallable VodClient::CreateQualityInspectTemplateCallable(const CreateQualityInspectTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQualityInspectTemplateOutcome>>();
    CreateQualityInspectTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateQualityInspectTemplateRequest&,
        CreateQualityInspectTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRebuildMediaTemplateRequest&;
    using Resp = CreateRebuildMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRebuildMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateRebuildMediaTemplateOutcomeCallable VodClient::CreateRebuildMediaTemplateCallable(const CreateRebuildMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRebuildMediaTemplateOutcome>>();
    CreateRebuildMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateRebuildMediaTemplateRequest&,
        CreateRebuildMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateReviewTemplateRequest&;
    using Resp = CreateReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateReviewTemplateOutcomeCallable VodClient::CreateReviewTemplateCallable(const CreateReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReviewTemplateOutcome>>();
    CreateReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateReviewTemplateRequest&,
        CreateReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRoundPlayRequest&;
    using Resp = CreateRoundPlayResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoundPlay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateRoundPlayOutcomeCallable VodClient::CreateRoundPlayCallable(const CreateRoundPlayRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRoundPlayOutcome>>();
    CreateRoundPlayAsync(
    request,
    [prom](
        const VodClient*,
        const CreateRoundPlayRequest&,
        CreateRoundPlayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSampleSnapshotTemplateRequest&;
    using Resp = CreateSampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSampleSnapshotTemplateOutcomeCallable VodClient::CreateSampleSnapshotTemplateCallable(const CreateSampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSampleSnapshotTemplateOutcome>>();
    CreateSampleSnapshotTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSampleSnapshotTemplateRequest&,
        CreateSampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateSceneAigcImageTaskOutcome VodClient::CreateSceneAigcImageTask(const CreateSceneAigcImageTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSceneAigcImageTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSceneAigcImageTaskResponse rsp = CreateSceneAigcImageTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSceneAigcImageTaskOutcome(rsp);
        else
            return CreateSceneAigcImageTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSceneAigcImageTaskOutcome(outcome.GetError());
    }
}

void VodClient::CreateSceneAigcImageTaskAsync(const CreateSceneAigcImageTaskRequest& request, const CreateSceneAigcImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSceneAigcImageTaskRequest&;
    using Resp = CreateSceneAigcImageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSceneAigcImageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSceneAigcImageTaskOutcomeCallable VodClient::CreateSceneAigcImageTaskCallable(const CreateSceneAigcImageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSceneAigcImageTaskOutcome>>();
    CreateSceneAigcImageTaskAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSceneAigcImageTaskRequest&,
        CreateSceneAigcImageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateSceneAigcVideoTaskOutcome VodClient::CreateSceneAigcVideoTask(const CreateSceneAigcVideoTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSceneAigcVideoTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSceneAigcVideoTaskResponse rsp = CreateSceneAigcVideoTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSceneAigcVideoTaskOutcome(rsp);
        else
            return CreateSceneAigcVideoTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSceneAigcVideoTaskOutcome(outcome.GetError());
    }
}

void VodClient::CreateSceneAigcVideoTaskAsync(const CreateSceneAigcVideoTaskRequest& request, const CreateSceneAigcVideoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSceneAigcVideoTaskRequest&;
    using Resp = CreateSceneAigcVideoTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSceneAigcVideoTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSceneAigcVideoTaskOutcomeCallable VodClient::CreateSceneAigcVideoTaskCallable(const CreateSceneAigcVideoTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSceneAigcVideoTaskOutcome>>();
    CreateSceneAigcVideoTaskAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSceneAigcVideoTaskRequest&,
        CreateSceneAigcVideoTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSnapshotByTimeOffsetTemplateRequest&;
    using Resp = CreateSnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSnapshotByTimeOffsetTemplateOutcomeCallable VodClient::CreateSnapshotByTimeOffsetTemplateCallable(const CreateSnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSnapshotByTimeOffsetTemplateOutcome>>();
    CreateSnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSnapshotByTimeOffsetTemplateRequest&,
        CreateSnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateStorageRegionRequest&;
    using Resp = CreateStorageRegionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStorageRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateStorageRegionOutcomeCallable VodClient::CreateStorageRegionCallable(const CreateStorageRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStorageRegionOutcome>>();
    CreateStorageRegionAsync(
    request,
    [prom](
        const VodClient*,
        const CreateStorageRegionRequest&,
        CreateStorageRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSubAppIdRequest&;
    using Resp = CreateSubAppIdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubAppId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSubAppIdOutcomeCallable VodClient::CreateSubAppIdCallable(const CreateSubAppIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubAppIdOutcome>>();
    CreateSubAppIdAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSubAppIdRequest&,
        CreateSubAppIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateSuperPlayerConfigRequest&;
    using Resp = CreateSuperPlayerConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSuperPlayerConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateSuperPlayerConfigOutcomeCallable VodClient::CreateSuperPlayerConfigCallable(const CreateSuperPlayerConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSuperPlayerConfigOutcome>>();
    CreateSuperPlayerConfigAsync(
    request,
    [prom](
        const VodClient*,
        const CreateSuperPlayerConfigRequest&,
        CreateSuperPlayerConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTranscodeTemplateRequest&;
    using Resp = CreateTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateTranscodeTemplateOutcomeCallable VodClient::CreateTranscodeTemplateCallable(const CreateTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTranscodeTemplateOutcome>>();
    CreateTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateTranscodeTemplateRequest&,
        CreateTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateVodDomainRequest&;
    using Resp = CreateVodDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVodDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateVodDomainOutcomeCallable VodClient::CreateVodDomainCallable(const CreateVodDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVodDomainOutcome>>();
    CreateVodDomainAsync(
    request,
    [prom](
        const VodClient*,
        const CreateVodDomainRequest&,
        CreateVodDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWatermarkTemplateRequest&;
    using Resp = CreateWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateWatermarkTemplateOutcomeCallable VodClient::CreateWatermarkTemplateCallable(const CreateWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWatermarkTemplateOutcome>>();
    CreateWatermarkTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const CreateWatermarkTemplateRequest&,
        CreateWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateWordSamplesRequest&;
    using Resp = CreateWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateWordSamplesOutcomeCallable VodClient::CreateWordSamplesCallable(const CreateWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWordSamplesOutcome>>();
    CreateWordSamplesAsync(
    request,
    [prom](
        const VodClient*,
        const CreateWordSamplesRequest&,
        CreateWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAIAnalysisTemplateRequest&;
    using Resp = DeleteAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteAIAnalysisTemplateOutcomeCallable VodClient::DeleteAIAnalysisTemplateCallable(const DeleteAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIAnalysisTemplateOutcome>>();
    DeleteAIAnalysisTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteAIAnalysisTemplateRequest&,
        DeleteAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAIRecognitionTemplateRequest&;
    using Resp = DeleteAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteAIRecognitionTemplateOutcomeCallable VodClient::DeleteAIRecognitionTemplateCallable(const DeleteAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAIRecognitionTemplateOutcome>>();
    DeleteAIRecognitionTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteAIRecognitionTemplateRequest&,
        DeleteAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = DeleteAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::DeleteAdaptiveDynamicStreamingTemplateCallable(const DeleteAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAdaptiveDynamicStreamingTemplateOutcome>>();
    DeleteAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteAdaptiveDynamicStreamingTemplateRequest&,
        DeleteAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAnimatedGraphicsTemplateRequest&;
    using Resp = DeleteAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteAnimatedGraphicsTemplateOutcomeCallable VodClient::DeleteAnimatedGraphicsTemplateCallable(const DeleteAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAnimatedGraphicsTemplateOutcome>>();
    DeleteAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteAnimatedGraphicsTemplateRequest&,
        DeleteAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCLSTopicRequest&;
    using Resp = DeleteCLSTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCLSTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteCLSTopicOutcomeCallable VodClient::DeleteCLSTopicCallable(const DeleteCLSTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCLSTopicOutcome>>();
    DeleteCLSTopicAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteCLSTopicRequest&,
        DeleteCLSTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteClassRequest&;
    using Resp = DeleteClassResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteClassOutcomeCallable VodClient::DeleteClassCallable(const DeleteClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClassOutcome>>();
    DeleteClassAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteClassRequest&,
        DeleteClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteContentReviewTemplateRequest&;
    using Resp = DeleteContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteContentReviewTemplateOutcomeCallable VodClient::DeleteContentReviewTemplateCallable(const DeleteContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteContentReviewTemplateOutcome>>();
    DeleteContentReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteContentReviewTemplateRequest&,
        DeleteContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteEnhanceMediaTemplateRequest&;
    using Resp = DeleteEnhanceMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnhanceMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteEnhanceMediaTemplateOutcomeCallable VodClient::DeleteEnhanceMediaTemplateCallable(const DeleteEnhanceMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnhanceMediaTemplateOutcome>>();
    DeleteEnhanceMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteEnhanceMediaTemplateRequest&,
        DeleteEnhanceMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteHeadTailTemplateRequest&;
    using Resp = DeleteHeadTailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHeadTailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteHeadTailTemplateOutcomeCallable VodClient::DeleteHeadTailTemplateCallable(const DeleteHeadTailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHeadTailTemplateOutcome>>();
    DeleteHeadTailTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteHeadTailTemplateRequest&,
        DeleteHeadTailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteImageProcessingTemplateRequest&;
    using Resp = DeleteImageProcessingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImageProcessingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteImageProcessingTemplateOutcomeCallable VodClient::DeleteImageProcessingTemplateCallable(const DeleteImageProcessingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageProcessingTemplateOutcome>>();
    DeleteImageProcessingTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteImageProcessingTemplateRequest&,
        DeleteImageProcessingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteImageSpriteTemplateRequest&;
    using Resp = DeleteImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteImageSpriteTemplateOutcomeCallable VodClient::DeleteImageSpriteTemplateCallable(const DeleteImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageSpriteTemplateOutcome>>();
    DeleteImageSpriteTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteImageSpriteTemplateRequest&,
        DeleteImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteJustInTimeTranscodeTemplateRequest&;
    using Resp = DeleteJustInTimeTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJustInTimeTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteJustInTimeTranscodeTemplateOutcomeCallable VodClient::DeleteJustInTimeTranscodeTemplateCallable(const DeleteJustInTimeTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJustInTimeTranscodeTemplateOutcome>>();
    DeleteJustInTimeTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteJustInTimeTranscodeTemplateRequest&,
        DeleteJustInTimeTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DeleteMPSTemplateOutcome VodClient::DeleteMPSTemplate(const DeleteMPSTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMPSTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMPSTemplateResponse rsp = DeleteMPSTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMPSTemplateOutcome(rsp);
        else
            return DeleteMPSTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteMPSTemplateOutcome(outcome.GetError());
    }
}

void VodClient::DeleteMPSTemplateAsync(const DeleteMPSTemplateRequest& request, const DeleteMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMPSTemplateRequest&;
    using Resp = DeleteMPSTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMPSTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteMPSTemplateOutcomeCallable VodClient::DeleteMPSTemplateCallable(const DeleteMPSTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMPSTemplateOutcome>>();
    DeleteMPSTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteMPSTemplateRequest&,
        DeleteMPSTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteMediaRequest&;
    using Resp = DeleteMediaResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteMediaOutcomeCallable VodClient::DeleteMediaCallable(const DeleteMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMediaOutcome>>();
    DeleteMediaAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteMediaRequest&,
        DeleteMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeletePersonSampleRequest&;
    using Resp = DeletePersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeletePersonSampleOutcomeCallable VodClient::DeletePersonSampleCallable(const DeletePersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePersonSampleOutcome>>();
    DeletePersonSampleAsync(
    request,
    [prom](
        const VodClient*,
        const DeletePersonSampleRequest&,
        DeletePersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteProcedureTemplateRequest&;
    using Resp = DeleteProcedureTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProcedureTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteProcedureTemplateOutcomeCallable VodClient::DeleteProcedureTemplateCallable(const DeleteProcedureTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProcedureTemplateOutcome>>();
    DeleteProcedureTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteProcedureTemplateRequest&,
        DeleteProcedureTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteQualityInspectTemplateRequest&;
    using Resp = DeleteQualityInspectTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQualityInspectTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteQualityInspectTemplateOutcomeCallable VodClient::DeleteQualityInspectTemplateCallable(const DeleteQualityInspectTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQualityInspectTemplateOutcome>>();
    DeleteQualityInspectTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteQualityInspectTemplateRequest&,
        DeleteQualityInspectTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRebuildMediaTemplateRequest&;
    using Resp = DeleteRebuildMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRebuildMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteRebuildMediaTemplateOutcomeCallable VodClient::DeleteRebuildMediaTemplateCallable(const DeleteRebuildMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRebuildMediaTemplateOutcome>>();
    DeleteRebuildMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteRebuildMediaTemplateRequest&,
        DeleteRebuildMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteReviewTemplateRequest&;
    using Resp = DeleteReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteReviewTemplateOutcomeCallable VodClient::DeleteReviewTemplateCallable(const DeleteReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReviewTemplateOutcome>>();
    DeleteReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteReviewTemplateRequest&,
        DeleteReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRoundPlayRequest&;
    using Resp = DeleteRoundPlayResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoundPlay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteRoundPlayOutcomeCallable VodClient::DeleteRoundPlayCallable(const DeleteRoundPlayRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRoundPlayOutcome>>();
    DeleteRoundPlayAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteRoundPlayRequest&,
        DeleteRoundPlayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSampleSnapshotTemplateRequest&;
    using Resp = DeleteSampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteSampleSnapshotTemplateOutcomeCallable VodClient::DeleteSampleSnapshotTemplateCallable(const DeleteSampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSampleSnapshotTemplateOutcome>>();
    DeleteSampleSnapshotTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteSampleSnapshotTemplateRequest&,
        DeleteSampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSnapshotByTimeOffsetTemplateRequest&;
    using Resp = DeleteSnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteSnapshotByTimeOffsetTemplateOutcomeCallable VodClient::DeleteSnapshotByTimeOffsetTemplateCallable(const DeleteSnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSnapshotByTimeOffsetTemplateOutcome>>();
    DeleteSnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteSnapshotByTimeOffsetTemplateRequest&,
        DeleteSnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteSuperPlayerConfigRequest&;
    using Resp = DeleteSuperPlayerConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSuperPlayerConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteSuperPlayerConfigOutcomeCallable VodClient::DeleteSuperPlayerConfigCallable(const DeleteSuperPlayerConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSuperPlayerConfigOutcome>>();
    DeleteSuperPlayerConfigAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteSuperPlayerConfigRequest&,
        DeleteSuperPlayerConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTranscodeTemplateRequest&;
    using Resp = DeleteTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteTranscodeTemplateOutcomeCallable VodClient::DeleteTranscodeTemplateCallable(const DeleteTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTranscodeTemplateOutcome>>();
    DeleteTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteTranscodeTemplateRequest&,
        DeleteTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteVodDomainRequest&;
    using Resp = DeleteVodDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVodDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteVodDomainOutcomeCallable VodClient::DeleteVodDomainCallable(const DeleteVodDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVodDomainOutcome>>();
    DeleteVodDomainAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteVodDomainRequest&,
        DeleteVodDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWatermarkTemplateRequest&;
    using Resp = DeleteWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteWatermarkTemplateOutcomeCallable VodClient::DeleteWatermarkTemplateCallable(const DeleteWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWatermarkTemplateOutcome>>();
    DeleteWatermarkTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteWatermarkTemplateRequest&,
        DeleteWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteWordSamplesRequest&;
    using Resp = DeleteWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteWordSamplesOutcomeCallable VodClient::DeleteWordSamplesCallable(const DeleteWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWordSamplesOutcome>>();
    DeleteWordSamplesAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteWordSamplesRequest&,
        DeleteWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIAnalysisTemplatesRequest&;
    using Resp = DescribeAIAnalysisTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIAnalysisTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAIAnalysisTemplatesOutcomeCallable VodClient::DescribeAIAnalysisTemplatesCallable(const DescribeAIAnalysisTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIAnalysisTemplatesOutcome>>();
    DescribeAIAnalysisTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAIAnalysisTemplatesRequest&,
        DescribeAIAnalysisTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAIRecognitionTemplatesRequest&;
    using Resp = DescribeAIRecognitionTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIRecognitionTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAIRecognitionTemplatesOutcomeCallable VodClient::DescribeAIRecognitionTemplatesCallable(const DescribeAIRecognitionTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIRecognitionTemplatesOutcome>>();
    DescribeAIRecognitionTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAIRecognitionTemplatesRequest&,
        DescribeAIRecognitionTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAdaptiveDynamicStreamingTemplatesRequest&;
    using Resp = DescribeAdaptiveDynamicStreamingTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdaptiveDynamicStreamingTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAdaptiveDynamicStreamingTemplatesOutcomeCallable VodClient::DescribeAdaptiveDynamicStreamingTemplatesCallable(const DescribeAdaptiveDynamicStreamingTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdaptiveDynamicStreamingTemplatesOutcome>>();
    DescribeAdaptiveDynamicStreamingTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAdaptiveDynamicStreamingTemplatesRequest&,
        DescribeAdaptiveDynamicStreamingTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DescribeAigcUsageDataOutcome VodClient::DescribeAigcUsageData(const DescribeAigcUsageDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAigcUsageData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAigcUsageDataResponse rsp = DescribeAigcUsageDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAigcUsageDataOutcome(rsp);
        else
            return DescribeAigcUsageDataOutcome(o.GetError());
    }
    else
    {
        return DescribeAigcUsageDataOutcome(outcome.GetError());
    }
}

void VodClient::DescribeAigcUsageDataAsync(const DescribeAigcUsageDataRequest& request, const DescribeAigcUsageDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAigcUsageDataRequest&;
    using Resp = DescribeAigcUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAigcUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAigcUsageDataOutcomeCallable VodClient::DescribeAigcUsageDataCallable(const DescribeAigcUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAigcUsageDataOutcome>>();
    DescribeAigcUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAigcUsageDataRequest&,
        DescribeAigcUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAllClassRequest&;
    using Resp = DescribeAllClassResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAllClassOutcomeCallable VodClient::DescribeAllClassCallable(const DescribeAllClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllClassOutcome>>();
    DescribeAllClassAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAllClassRequest&,
        DescribeAllClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAnimatedGraphicsTemplatesRequest&;
    using Resp = DescribeAnimatedGraphicsTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAnimatedGraphicsTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeAnimatedGraphicsTemplatesOutcomeCallable VodClient::DescribeAnimatedGraphicsTemplatesCallable(const DescribeAnimatedGraphicsTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAnimatedGraphicsTemplatesOutcome>>();
    DescribeAnimatedGraphicsTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeAnimatedGraphicsTemplatesRequest&,
        DescribeAnimatedGraphicsTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCDNStatDetailsRequest&;
    using Resp = DescribeCDNStatDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCDNStatDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCDNStatDetailsOutcomeCallable VodClient::DescribeCDNStatDetailsCallable(const DescribeCDNStatDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCDNStatDetailsOutcome>>();
    DescribeCDNStatDetailsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCDNStatDetailsRequest&,
        DescribeCDNStatDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCDNUsageDataRequest&;
    using Resp = DescribeCDNUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCDNUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCDNUsageDataOutcomeCallable VodClient::DescribeCDNUsageDataCallable(const DescribeCDNUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCDNUsageDataOutcome>>();
    DescribeCDNUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCDNUsageDataRequest&,
        DescribeCDNUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCLSLogsetsRequest&;
    using Resp = DescribeCLSLogsetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCLSLogsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCLSLogsetsOutcomeCallable VodClient::DescribeCLSLogsetsCallable(const DescribeCLSLogsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCLSLogsetsOutcome>>();
    DescribeCLSLogsetsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCLSLogsetsRequest&,
        DescribeCLSLogsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCLSPushTargetsRequest&;
    using Resp = DescribeCLSPushTargetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCLSPushTargets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCLSPushTargetsOutcomeCallable VodClient::DescribeCLSPushTargetsCallable(const DescribeCLSPushTargetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCLSPushTargetsOutcome>>();
    DescribeCLSPushTargetsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCLSPushTargetsRequest&,
        DescribeCLSPushTargetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCLSTopicsRequest&;
    using Resp = DescribeCLSTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCLSTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCLSTopicsOutcomeCallable VodClient::DescribeCLSTopicsCallable(const DescribeCLSTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCLSTopicsOutcome>>();
    DescribeCLSTopicsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCLSTopicsRequest&,
        DescribeCLSTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCdnLogsRequest&;
    using Resp = DescribeCdnLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCdnLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCdnLogsOutcomeCallable VodClient::DescribeCdnLogsCallable(const DescribeCdnLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCdnLogsOutcome>>();
    DescribeCdnLogsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCdnLogsRequest&,
        DescribeCdnLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClientUploadAccelerationUsageDataRequest&;
    using Resp = DescribeClientUploadAccelerationUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientUploadAccelerationUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeClientUploadAccelerationUsageDataOutcomeCallable VodClient::DescribeClientUploadAccelerationUsageDataCallable(const DescribeClientUploadAccelerationUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientUploadAccelerationUsageDataOutcome>>();
    DescribeClientUploadAccelerationUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeClientUploadAccelerationUsageDataRequest&,
        DescribeClientUploadAccelerationUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeContentReviewTemplatesRequest&;
    using Resp = DescribeContentReviewTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContentReviewTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeContentReviewTemplatesOutcomeCallable VodClient::DescribeContentReviewTemplatesCallable(const DescribeContentReviewTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContentReviewTemplatesOutcome>>();
    DescribeContentReviewTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeContentReviewTemplatesRequest&,
        DescribeContentReviewTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCurrentPlaylistRequest&;
    using Resp = DescribeCurrentPlaylistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCurrentPlaylist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeCurrentPlaylistOutcomeCallable VodClient::DescribeCurrentPlaylistCallable(const DescribeCurrentPlaylistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCurrentPlaylistOutcome>>();
    DescribeCurrentPlaylistAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeCurrentPlaylistRequest&,
        DescribeCurrentPlaylistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDailyMediaPlayStatRequest&;
    using Resp = DescribeDailyMediaPlayStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDailyMediaPlayStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDailyMediaPlayStatOutcomeCallable VodClient::DescribeDailyMediaPlayStatCallable(const DescribeDailyMediaPlayStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDailyMediaPlayStatOutcome>>();
    DescribeDailyMediaPlayStatAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDailyMediaPlayStatRequest&,
        DescribeDailyMediaPlayStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDailyMostPlayedStatRequest&;
    using Resp = DescribeDailyMostPlayedStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDailyMostPlayedStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDailyMostPlayedStatOutcomeCallable VodClient::DescribeDailyMostPlayedStatCallable(const DescribeDailyMostPlayedStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDailyMostPlayedStatOutcome>>();
    DescribeDailyMostPlayedStatAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDailyMostPlayedStatRequest&,
        DescribeDailyMostPlayedStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDailyPlayStatFileListRequest&;
    using Resp = DescribeDailyPlayStatFileListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDailyPlayStatFileList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDailyPlayStatFileListOutcomeCallable VodClient::DescribeDailyPlayStatFileListCallable(const DescribeDailyPlayStatFileListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDailyPlayStatFileListOutcome>>();
    DescribeDailyPlayStatFileListAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDailyPlayStatFileListRequest&,
        DescribeDailyPlayStatFileListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDefaultDistributionConfigRequest&;
    using Resp = DescribeDefaultDistributionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefaultDistributionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDefaultDistributionConfigOutcomeCallable VodClient::DescribeDefaultDistributionConfigCallable(const DescribeDefaultDistributionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefaultDistributionConfigOutcome>>();
    DescribeDefaultDistributionConfigAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDefaultDistributionConfigRequest&,
        DescribeDefaultDistributionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDrmDataKeyRequest&;
    using Resp = DescribeDrmDataKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDrmDataKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDrmDataKeyOutcomeCallable VodClient::DescribeDrmDataKeyCallable(const DescribeDrmDataKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDrmDataKeyOutcome>>();
    DescribeDrmDataKeyAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDrmDataKeyRequest&,
        DescribeDrmDataKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDrmKeyProviderInfoRequest&;
    using Resp = DescribeDrmKeyProviderInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDrmKeyProviderInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeDrmKeyProviderInfoOutcomeCallable VodClient::DescribeDrmKeyProviderInfoCallable(const DescribeDrmKeyProviderInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDrmKeyProviderInfoOutcome>>();
    DescribeDrmKeyProviderInfoAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeDrmKeyProviderInfoRequest&,
        DescribeDrmKeyProviderInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEnhanceMediaTemplatesRequest&;
    using Resp = DescribeEnhanceMediaTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnhanceMediaTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeEnhanceMediaTemplatesOutcomeCallable VodClient::DescribeEnhanceMediaTemplatesCallable(const DescribeEnhanceMediaTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnhanceMediaTemplatesOutcome>>();
    DescribeEnhanceMediaTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeEnhanceMediaTemplatesRequest&,
        DescribeEnhanceMediaTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEventConfigRequest&;
    using Resp = DescribeEventConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeEventConfigOutcomeCallable VodClient::DescribeEventConfigCallable(const DescribeEventConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventConfigOutcome>>();
    DescribeEventConfigAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeEventConfigRequest&,
        DescribeEventConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeEventsStateRequest&;
    using Resp = DescribeEventsStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventsState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeEventsStateOutcomeCallable VodClient::DescribeEventsStateCallable(const DescribeEventsStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventsStateOutcome>>();
    DescribeEventsStateAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeEventsStateRequest&,
        DescribeEventsStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeFileAttributesRequest&;
    using Resp = DescribeFileAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeFileAttributesOutcomeCallable VodClient::DescribeFileAttributesCallable(const DescribeFileAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileAttributesOutcome>>();
    DescribeFileAttributesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeFileAttributesRequest&,
        DescribeFileAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeHeadTailTemplatesRequest&;
    using Resp = DescribeHeadTailTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHeadTailTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeHeadTailTemplatesOutcomeCallable VodClient::DescribeHeadTailTemplatesCallable(const DescribeHeadTailTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHeadTailTemplatesOutcome>>();
    DescribeHeadTailTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeHeadTailTemplatesRequest&,
        DescribeHeadTailTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageProcessingTemplatesRequest&;
    using Resp = DescribeImageProcessingTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageProcessingTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeImageProcessingTemplatesOutcomeCallable VodClient::DescribeImageProcessingTemplatesCallable(const DescribeImageProcessingTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageProcessingTemplatesOutcome>>();
    DescribeImageProcessingTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeImageProcessingTemplatesRequest&,
        DescribeImageProcessingTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageReviewUsageDataRequest&;
    using Resp = DescribeImageReviewUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageReviewUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeImageReviewUsageDataOutcomeCallable VodClient::DescribeImageReviewUsageDataCallable(const DescribeImageReviewUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageReviewUsageDataOutcome>>();
    DescribeImageReviewUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeImageReviewUsageDataRequest&,
        DescribeImageReviewUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeImageSpriteTemplatesRequest&;
    using Resp = DescribeImageSpriteTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageSpriteTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeImageSpriteTemplatesOutcomeCallable VodClient::DescribeImageSpriteTemplatesCallable(const DescribeImageSpriteTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageSpriteTemplatesOutcome>>();
    DescribeImageSpriteTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeImageSpriteTemplatesRequest&,
        DescribeImageSpriteTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeJustInTimeTranscodeTemplatesRequest&;
    using Resp = DescribeJustInTimeTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJustInTimeTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeJustInTimeTranscodeTemplatesOutcomeCallable VodClient::DescribeJustInTimeTranscodeTemplatesCallable(const DescribeJustInTimeTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJustInTimeTranscodeTemplatesOutcome>>();
    DescribeJustInTimeTranscodeTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeJustInTimeTranscodeTemplatesRequest&,
        DescribeJustInTimeTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeLicenseUsageDataRequest&;
    using Resp = DescribeLicenseUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeLicenseUsageDataOutcomeCallable VodClient::DescribeLicenseUsageDataCallable(const DescribeLicenseUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseUsageDataOutcome>>();
    DescribeLicenseUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeLicenseUsageDataRequest&,
        DescribeLicenseUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DescribeMPSTemplatesOutcome VodClient::DescribeMPSTemplates(const DescribeMPSTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMPSTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMPSTemplatesResponse rsp = DescribeMPSTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMPSTemplatesOutcome(rsp);
        else
            return DescribeMPSTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeMPSTemplatesOutcome(outcome.GetError());
    }
}

void VodClient::DescribeMPSTemplatesAsync(const DescribeMPSTemplatesRequest& request, const DescribeMPSTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMPSTemplatesRequest&;
    using Resp = DescribeMPSTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMPSTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeMPSTemplatesOutcomeCallable VodClient::DescribeMPSTemplatesCallable(const DescribeMPSTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMPSTemplatesOutcome>>();
    DescribeMPSTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeMPSTemplatesRequest&,
        DescribeMPSTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMediaInfosRequest&;
    using Resp = DescribeMediaInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeMediaInfosOutcomeCallable VodClient::DescribeMediaInfosCallable(const DescribeMediaInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaInfosOutcome>>();
    DescribeMediaInfosAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeMediaInfosRequest&,
        DescribeMediaInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMediaPlayStatDetailsRequest&;
    using Resp = DescribeMediaPlayStatDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaPlayStatDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeMediaPlayStatDetailsOutcomeCallable VodClient::DescribeMediaPlayStatDetailsCallable(const DescribeMediaPlayStatDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaPlayStatDetailsOutcome>>();
    DescribeMediaPlayStatDetailsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeMediaPlayStatDetailsRequest&,
        DescribeMediaPlayStatDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMediaProcessUsageDataRequest&;
    using Resp = DescribeMediaProcessUsageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMediaProcessUsageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeMediaProcessUsageDataOutcomeCallable VodClient::DescribeMediaProcessUsageDataCallable(const DescribeMediaProcessUsageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMediaProcessUsageDataOutcome>>();
    DescribeMediaProcessUsageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeMediaProcessUsageDataRequest&,
        DescribeMediaProcessUsageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePersonSamplesRequest&;
    using Resp = DescribePersonSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePersonSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribePersonSamplesOutcomeCallable VodClient::DescribePersonSamplesCallable(const DescribePersonSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePersonSamplesOutcome>>();
    DescribePersonSamplesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribePersonSamplesRequest&,
        DescribePersonSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribePrepaidProductsRequest&;
    using Resp = DescribePrepaidProductsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrepaidProducts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribePrepaidProductsOutcomeCallable VodClient::DescribePrepaidProductsCallable(const DescribePrepaidProductsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrepaidProductsOutcome>>();
    DescribePrepaidProductsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribePrepaidProductsRequest&,
        DescribePrepaidProductsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProcedureTemplatesRequest&;
    using Resp = DescribeProcedureTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcedureTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeProcedureTemplatesOutcomeCallable VodClient::DescribeProcedureTemplatesCallable(const DescribeProcedureTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcedureTemplatesOutcome>>();
    DescribeProcedureTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeProcedureTemplatesRequest&,
        DescribeProcedureTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeQualityInspectTemplatesRequest&;
    using Resp = DescribeQualityInspectTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQualityInspectTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeQualityInspectTemplatesOutcomeCallable VodClient::DescribeQualityInspectTemplatesCallable(const DescribeQualityInspectTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQualityInspectTemplatesOutcome>>();
    DescribeQualityInspectTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeQualityInspectTemplatesRequest&,
        DescribeQualityInspectTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRebuildMediaTemplatesRequest&;
    using Resp = DescribeRebuildMediaTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRebuildMediaTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeRebuildMediaTemplatesOutcomeCallable VodClient::DescribeRebuildMediaTemplatesCallable(const DescribeRebuildMediaTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRebuildMediaTemplatesOutcome>>();
    DescribeRebuildMediaTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeRebuildMediaTemplatesRequest&,
        DescribeRebuildMediaTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeReviewDetailsRequest&;
    using Resp = DescribeReviewDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReviewDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeReviewDetailsOutcomeCallable VodClient::DescribeReviewDetailsCallable(const DescribeReviewDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReviewDetailsOutcome>>();
    DescribeReviewDetailsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeReviewDetailsRequest&,
        DescribeReviewDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeReviewTemplatesRequest&;
    using Resp = DescribeReviewTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReviewTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeReviewTemplatesOutcomeCallable VodClient::DescribeReviewTemplatesCallable(const DescribeReviewTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReviewTemplatesOutcome>>();
    DescribeReviewTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeReviewTemplatesRequest&,
        DescribeReviewTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRoundPlaysRequest&;
    using Resp = DescribeRoundPlaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoundPlays", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeRoundPlaysOutcomeCallable VodClient::DescribeRoundPlaysCallable(const DescribeRoundPlaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoundPlaysOutcome>>();
    DescribeRoundPlaysAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeRoundPlaysRequest&,
        DescribeRoundPlaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSampleSnapshotTemplatesRequest&;
    using Resp = DescribeSampleSnapshotTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSampleSnapshotTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeSampleSnapshotTemplatesOutcomeCallable VodClient::DescribeSampleSnapshotTemplatesCallable(const DescribeSampleSnapshotTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSampleSnapshotTemplatesOutcome>>();
    DescribeSampleSnapshotTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeSampleSnapshotTemplatesRequest&,
        DescribeSampleSnapshotTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSnapshotByTimeOffsetTemplatesRequest&;
    using Resp = DescribeSnapshotByTimeOffsetTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSnapshotByTimeOffsetTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeSnapshotByTimeOffsetTemplatesOutcomeCallable VodClient::DescribeSnapshotByTimeOffsetTemplatesCallable(const DescribeSnapshotByTimeOffsetTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSnapshotByTimeOffsetTemplatesOutcome>>();
    DescribeSnapshotByTimeOffsetTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeSnapshotByTimeOffsetTemplatesRequest&,
        DescribeSnapshotByTimeOffsetTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStorageDataRequest&;
    using Resp = DescribeStorageDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorageData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeStorageDataOutcomeCallable VodClient::DescribeStorageDataCallable(const DescribeStorageDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageDataOutcome>>();
    DescribeStorageDataAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeStorageDataRequest&,
        DescribeStorageDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStorageDetailsRequest&;
    using Resp = DescribeStorageDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorageDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeStorageDetailsOutcomeCallable VodClient::DescribeStorageDetailsCallable(const DescribeStorageDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageDetailsOutcome>>();
    DescribeStorageDetailsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeStorageDetailsRequest&,
        DescribeStorageDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeStorageRegionsRequest&;
    using Resp = DescribeStorageRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorageRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeStorageRegionsOutcomeCallable VodClient::DescribeStorageRegionsCallable(const DescribeStorageRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageRegionsOutcome>>();
    DescribeStorageRegionsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeStorageRegionsRequest&,
        DescribeStorageRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSubAppIdsRequest&;
    using Resp = DescribeSubAppIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubAppIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeSubAppIdsOutcomeCallable VodClient::DescribeSubAppIdsCallable(const DescribeSubAppIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubAppIdsOutcome>>();
    DescribeSubAppIdsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeSubAppIdsRequest&,
        DescribeSubAppIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSuperPlayerConfigsRequest&;
    using Resp = DescribeSuperPlayerConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSuperPlayerConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeSuperPlayerConfigsOutcomeCallable VodClient::DescribeSuperPlayerConfigsCallable(const DescribeSuperPlayerConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSuperPlayerConfigsOutcome>>();
    DescribeSuperPlayerConfigsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeSuperPlayerConfigsRequest&,
        DescribeSuperPlayerConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeTaskDetailOutcomeCallable VodClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeTasksOutcomeCallable VodClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTranscodeTemplatesRequest&;
    using Resp = DescribeTranscodeTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTranscodeTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeTranscodeTemplatesOutcomeCallable VodClient::DescribeTranscodeTemplatesCallable(const DescribeTranscodeTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTranscodeTemplatesOutcome>>();
    DescribeTranscodeTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeTranscodeTemplatesRequest&,
        DescribeTranscodeTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeVodDomainsRequest&;
    using Resp = DescribeVodDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVodDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeVodDomainsOutcomeCallable VodClient::DescribeVodDomainsCallable(const DescribeVodDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVodDomainsOutcome>>();
    DescribeVodDomainsAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeVodDomainsRequest&,
        DescribeVodDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWatermarkTemplatesRequest&;
    using Resp = DescribeWatermarkTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWatermarkTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeWatermarkTemplatesOutcomeCallable VodClient::DescribeWatermarkTemplatesCallable(const DescribeWatermarkTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWatermarkTemplatesOutcome>>();
    DescribeWatermarkTemplatesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeWatermarkTemplatesRequest&,
        DescribeWatermarkTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeWordSamplesRequest&;
    using Resp = DescribeWordSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWordSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeWordSamplesOutcomeCallable VodClient::DescribeWordSamplesCallable(const DescribeWordSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWordSamplesOutcome>>();
    DescribeWordSamplesAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeWordSamplesRequest&,
        DescribeWordSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EditMediaRequest&;
    using Resp = EditMediaResponse;

    DoRequestAsync<Req, Resp>(
        "EditMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::EditMediaOutcomeCallable VodClient::EditMediaCallable(const EditMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditMediaOutcome>>();
    EditMediaAsync(
    request,
    [prom](
        const VodClient*,
        const EditMediaRequest&,
        EditMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnhanceMediaByTemplateRequest&;
    using Resp = EnhanceMediaByTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "EnhanceMediaByTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::EnhanceMediaByTemplateOutcomeCallable VodClient::EnhanceMediaByTemplateCallable(const EnhanceMediaByTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnhanceMediaByTemplateOutcome>>();
    EnhanceMediaByTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const EnhanceMediaByTemplateRequest&,
        EnhanceMediaByTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const EnhanceMediaQualityRequest&;
    using Resp = EnhanceMediaQualityResponse;

    DoRequestAsync<Req, Resp>(
        "EnhanceMediaQuality", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::EnhanceMediaQualityOutcomeCallable VodClient::EnhanceMediaQualityCallable(const EnhanceMediaQualityRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnhanceMediaQualityOutcome>>();
    EnhanceMediaQualityAsync(
    request,
    [prom](
        const VodClient*,
        const EnhanceMediaQualityRequest&,
        EnhanceMediaQualityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExecuteFunctionRequest&;
    using Resp = ExecuteFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ExecuteFunctionOutcomeCallable VodClient::ExecuteFunctionCallable(const ExecuteFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteFunctionOutcome>>();
    ExecuteFunctionAsync(
    request,
    [prom](
        const VodClient*,
        const ExecuteFunctionRequest&,
        ExecuteFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExtractCopyRightWatermarkRequest&;
    using Resp = ExtractCopyRightWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractCopyRightWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ExtractCopyRightWatermarkOutcomeCallable VodClient::ExtractCopyRightWatermarkCallable(const ExtractCopyRightWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractCopyRightWatermarkOutcome>>();
    ExtractCopyRightWatermarkAsync(
    request,
    [prom](
        const VodClient*,
        const ExtractCopyRightWatermarkRequest&,
        ExtractCopyRightWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ExtractTraceWatermarkRequest&;
    using Resp = ExtractTraceWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "ExtractTraceWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ExtractTraceWatermarkOutcomeCallable VodClient::ExtractTraceWatermarkCallable(const ExtractTraceWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExtractTraceWatermarkOutcome>>();
    ExtractTraceWatermarkAsync(
    request,
    [prom](
        const VodClient*,
        const ExtractTraceWatermarkRequest&,
        ExtractTraceWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const FastEditMediaRequest&;
    using Resp = FastEditMediaResponse;

    DoRequestAsync<Req, Resp>(
        "FastEditMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::FastEditMediaOutcomeCallable VodClient::FastEditMediaCallable(const FastEditMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<FastEditMediaOutcome>>();
    FastEditMediaAsync(
    request,
    [prom](
        const VodClient*,
        const FastEditMediaRequest&,
        FastEditMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ForbidMediaDistributionRequest&;
    using Resp = ForbidMediaDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "ForbidMediaDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ForbidMediaDistributionOutcomeCallable VodClient::ForbidMediaDistributionCallable(const ForbidMediaDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ForbidMediaDistributionOutcome>>();
    ForbidMediaDistributionAsync(
    request,
    [prom](
        const VodClient*,
        const ForbidMediaDistributionRequest&,
        ForbidMediaDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const HandleCurrentPlaylistRequest&;
    using Resp = HandleCurrentPlaylistResponse;

    DoRequestAsync<Req, Resp>(
        "HandleCurrentPlaylist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::HandleCurrentPlaylistOutcomeCallable VodClient::HandleCurrentPlaylistCallable(const HandleCurrentPlaylistRequest &request)
{
    const auto prom = std::make_shared<std::promise<HandleCurrentPlaylistOutcome>>();
    HandleCurrentPlaylistAsync(
    request,
    [prom](
        const VodClient*,
        const HandleCurrentPlaylistRequest&,
        HandleCurrentPlaylistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::ImportMediaKnowledgeOutcome VodClient::ImportMediaKnowledge(const ImportMediaKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "ImportMediaKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportMediaKnowledgeResponse rsp = ImportMediaKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportMediaKnowledgeOutcome(rsp);
        else
            return ImportMediaKnowledgeOutcome(o.GetError());
    }
    else
    {
        return ImportMediaKnowledgeOutcome(outcome.GetError());
    }
}

void VodClient::ImportMediaKnowledgeAsync(const ImportMediaKnowledgeRequest& request, const ImportMediaKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportMediaKnowledgeRequest&;
    using Resp = ImportMediaKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "ImportMediaKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ImportMediaKnowledgeOutcomeCallable VodClient::ImportMediaKnowledgeCallable(const ImportMediaKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportMediaKnowledgeOutcome>>();
    ImportMediaKnowledgeAsync(
    request,
    [prom](
        const VodClient*,
        const ImportMediaKnowledgeRequest&,
        ImportMediaKnowledgeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const InspectMediaQualityRequest&;
    using Resp = InspectMediaQualityResponse;

    DoRequestAsync<Req, Resp>(
        "InspectMediaQuality", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::InspectMediaQualityOutcomeCallable VodClient::InspectMediaQualityCallable(const InspectMediaQualityRequest &request)
{
    const auto prom = std::make_shared<std::promise<InspectMediaQualityOutcome>>();
    InspectMediaQualityAsync(
    request,
    [prom](
        const VodClient*,
        const InspectMediaQualityRequest&,
        InspectMediaQualityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const LiveRealTimeClipRequest&;
    using Resp = LiveRealTimeClipResponse;

    DoRequestAsync<Req, Resp>(
        "LiveRealTimeClip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::LiveRealTimeClipOutcomeCallable VodClient::LiveRealTimeClipCallable(const LiveRealTimeClipRequest &request)
{
    const auto prom = std::make_shared<std::promise<LiveRealTimeClipOutcome>>();
    LiveRealTimeClipAsync(
    request,
    [prom](
        const VodClient*,
        const LiveRealTimeClipRequest&,
        LiveRealTimeClipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ManageTaskRequest&;
    using Resp = ManageTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ManageTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ManageTaskOutcomeCallable VodClient::ManageTaskCallable(const ManageTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ManageTaskOutcome>>();
    ManageTaskAsync(
    request,
    [prom](
        const VodClient*,
        const ManageTaskRequest&,
        ManageTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAIAnalysisTemplateRequest&;
    using Resp = ModifyAIAnalysisTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAIAnalysisTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyAIAnalysisTemplateOutcomeCallable VodClient::ModifyAIAnalysisTemplateCallable(const ModifyAIAnalysisTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAIAnalysisTemplateOutcome>>();
    ModifyAIAnalysisTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyAIAnalysisTemplateRequest&,
        ModifyAIAnalysisTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAIRecognitionTemplateRequest&;
    using Resp = ModifyAIRecognitionTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAIRecognitionTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyAIRecognitionTemplateOutcomeCallable VodClient::ModifyAIRecognitionTemplateCallable(const ModifyAIRecognitionTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAIRecognitionTemplateOutcome>>();
    ModifyAIRecognitionTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyAIRecognitionTemplateRequest&,
        ModifyAIRecognitionTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAdaptiveDynamicStreamingTemplateRequest&;
    using Resp = ModifyAdaptiveDynamicStreamingTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAdaptiveDynamicStreamingTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyAdaptiveDynamicStreamingTemplateOutcomeCallable VodClient::ModifyAdaptiveDynamicStreamingTemplateCallable(const ModifyAdaptiveDynamicStreamingTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAdaptiveDynamicStreamingTemplateOutcome>>();
    ModifyAdaptiveDynamicStreamingTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyAdaptiveDynamicStreamingTemplateRequest&,
        ModifyAdaptiveDynamicStreamingTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAnimatedGraphicsTemplateRequest&;
    using Resp = ModifyAnimatedGraphicsTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAnimatedGraphicsTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyAnimatedGraphicsTemplateOutcomeCallable VodClient::ModifyAnimatedGraphicsTemplateCallable(const ModifyAnimatedGraphicsTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAnimatedGraphicsTemplateOutcome>>();
    ModifyAnimatedGraphicsTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyAnimatedGraphicsTemplateRequest&,
        ModifyAnimatedGraphicsTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyClassRequest&;
    using Resp = ModifyClassResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyClassOutcomeCallable VodClient::ModifyClassCallable(const ModifyClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClassOutcome>>();
    ModifyClassAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyClassRequest&,
        ModifyClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyContentReviewTemplateRequest&;
    using Resp = ModifyContentReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContentReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyContentReviewTemplateOutcomeCallable VodClient::ModifyContentReviewTemplateCallable(const ModifyContentReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContentReviewTemplateOutcome>>();
    ModifyContentReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyContentReviewTemplateRequest&,
        ModifyContentReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDefaultDistributionConfigRequest&;
    using Resp = ModifyDefaultDistributionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDefaultDistributionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyDefaultDistributionConfigOutcomeCallable VodClient::ModifyDefaultDistributionConfigCallable(const ModifyDefaultDistributionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDefaultDistributionConfigOutcome>>();
    ModifyDefaultDistributionConfigAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyDefaultDistributionConfigRequest&,
        ModifyDefaultDistributionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDefaultStorageRegionRequest&;
    using Resp = ModifyDefaultStorageRegionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDefaultStorageRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyDefaultStorageRegionOutcomeCallable VodClient::ModifyDefaultStorageRegionCallable(const ModifyDefaultStorageRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDefaultStorageRegionOutcome>>();
    ModifyDefaultStorageRegionAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyDefaultStorageRegionRequest&,
        ModifyDefaultStorageRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyEnhanceMediaTemplateRequest&;
    using Resp = ModifyEnhanceMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnhanceMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyEnhanceMediaTemplateOutcomeCallable VodClient::ModifyEnhanceMediaTemplateCallable(const ModifyEnhanceMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnhanceMediaTemplateOutcome>>();
    ModifyEnhanceMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyEnhanceMediaTemplateRequest&,
        ModifyEnhanceMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyEventConfigRequest&;
    using Resp = ModifyEventConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEventConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyEventConfigOutcomeCallable VodClient::ModifyEventConfigCallable(const ModifyEventConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEventConfigOutcome>>();
    ModifyEventConfigAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyEventConfigRequest&,
        ModifyEventConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHeadTailTemplateRequest&;
    using Resp = ModifyHeadTailTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHeadTailTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyHeadTailTemplateOutcomeCallable VodClient::ModifyHeadTailTemplateCallable(const ModifyHeadTailTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHeadTailTemplateOutcome>>();
    ModifyHeadTailTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyHeadTailTemplateRequest&,
        ModifyHeadTailTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyImageSpriteTemplateRequest&;
    using Resp = ModifyImageSpriteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyImageSpriteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyImageSpriteTemplateOutcomeCallable VodClient::ModifyImageSpriteTemplateCallable(const ModifyImageSpriteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyImageSpriteTemplateOutcome>>();
    ModifyImageSpriteTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyImageSpriteTemplateRequest&,
        ModifyImageSpriteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyJustInTimeTranscodeTemplateRequest&;
    using Resp = ModifyJustInTimeTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJustInTimeTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyJustInTimeTranscodeTemplateOutcomeCallable VodClient::ModifyJustInTimeTranscodeTemplateCallable(const ModifyJustInTimeTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJustInTimeTranscodeTemplateOutcome>>();
    ModifyJustInTimeTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyJustInTimeTranscodeTemplateRequest&,
        ModifyJustInTimeTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::ModifyMPSTemplateOutcome VodClient::ModifyMPSTemplate(const ModifyMPSTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMPSTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMPSTemplateResponse rsp = ModifyMPSTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMPSTemplateOutcome(rsp);
        else
            return ModifyMPSTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyMPSTemplateOutcome(outcome.GetError());
    }
}

void VodClient::ModifyMPSTemplateAsync(const ModifyMPSTemplateRequest& request, const ModifyMPSTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMPSTemplateRequest&;
    using Resp = ModifyMPSTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMPSTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyMPSTemplateOutcomeCallable VodClient::ModifyMPSTemplateCallable(const ModifyMPSTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMPSTemplateOutcome>>();
    ModifyMPSTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyMPSTemplateRequest&,
        ModifyMPSTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMediaInfoRequest&;
    using Resp = ModifyMediaInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMediaInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyMediaInfoOutcomeCallable VodClient::ModifyMediaInfoCallable(const ModifyMediaInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMediaInfoOutcome>>();
    ModifyMediaInfoAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyMediaInfoRequest&,
        ModifyMediaInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyMediaStorageClassRequest&;
    using Resp = ModifyMediaStorageClassResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMediaStorageClass", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyMediaStorageClassOutcomeCallable VodClient::ModifyMediaStorageClassCallable(const ModifyMediaStorageClassRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMediaStorageClassOutcome>>();
    ModifyMediaStorageClassAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyMediaStorageClassRequest&,
        ModifyMediaStorageClassOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyPersonSampleRequest&;
    using Resp = ModifyPersonSampleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPersonSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyPersonSampleOutcomeCallable VodClient::ModifyPersonSampleCallable(const ModifyPersonSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPersonSampleOutcome>>();
    ModifyPersonSampleAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyPersonSampleRequest&,
        ModifyPersonSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyQualityInspectTemplateRequest&;
    using Resp = ModifyQualityInspectTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQualityInspectTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyQualityInspectTemplateOutcomeCallable VodClient::ModifyQualityInspectTemplateCallable(const ModifyQualityInspectTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQualityInspectTemplateOutcome>>();
    ModifyQualityInspectTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyQualityInspectTemplateRequest&,
        ModifyQualityInspectTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRebuildMediaTemplateRequest&;
    using Resp = ModifyRebuildMediaTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRebuildMediaTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyRebuildMediaTemplateOutcomeCallable VodClient::ModifyRebuildMediaTemplateCallable(const ModifyRebuildMediaTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRebuildMediaTemplateOutcome>>();
    ModifyRebuildMediaTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyRebuildMediaTemplateRequest&,
        ModifyRebuildMediaTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyReviewTemplateRequest&;
    using Resp = ModifyReviewTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReviewTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyReviewTemplateOutcomeCallable VodClient::ModifyReviewTemplateCallable(const ModifyReviewTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReviewTemplateOutcome>>();
    ModifyReviewTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyReviewTemplateRequest&,
        ModifyReviewTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRoundPlayRequest&;
    using Resp = ModifyRoundPlayResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoundPlay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyRoundPlayOutcomeCallable VodClient::ModifyRoundPlayCallable(const ModifyRoundPlayRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoundPlayOutcome>>();
    ModifyRoundPlayAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyRoundPlayRequest&,
        ModifyRoundPlayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySampleSnapshotTemplateRequest&;
    using Resp = ModifySampleSnapshotTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySampleSnapshotTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifySampleSnapshotTemplateOutcomeCallable VodClient::ModifySampleSnapshotTemplateCallable(const ModifySampleSnapshotTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySampleSnapshotTemplateOutcome>>();
    ModifySampleSnapshotTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifySampleSnapshotTemplateRequest&,
        ModifySampleSnapshotTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySnapshotByTimeOffsetTemplateRequest&;
    using Resp = ModifySnapshotByTimeOffsetTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySnapshotByTimeOffsetTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifySnapshotByTimeOffsetTemplateOutcomeCallable VodClient::ModifySnapshotByTimeOffsetTemplateCallable(const ModifySnapshotByTimeOffsetTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySnapshotByTimeOffsetTemplateOutcome>>();
    ModifySnapshotByTimeOffsetTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifySnapshotByTimeOffsetTemplateRequest&,
        ModifySnapshotByTimeOffsetTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySubAppIdInfoRequest&;
    using Resp = ModifySubAppIdInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubAppIdInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifySubAppIdInfoOutcomeCallable VodClient::ModifySubAppIdInfoCallable(const ModifySubAppIdInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubAppIdInfoOutcome>>();
    ModifySubAppIdInfoAsync(
    request,
    [prom](
        const VodClient*,
        const ModifySubAppIdInfoRequest&,
        ModifySubAppIdInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySubAppIdStatusRequest&;
    using Resp = ModifySubAppIdStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubAppIdStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifySubAppIdStatusOutcomeCallable VodClient::ModifySubAppIdStatusCallable(const ModifySubAppIdStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubAppIdStatusOutcome>>();
    ModifySubAppIdStatusAsync(
    request,
    [prom](
        const VodClient*,
        const ModifySubAppIdStatusRequest&,
        ModifySubAppIdStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifySuperPlayerConfigRequest&;
    using Resp = ModifySuperPlayerConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySuperPlayerConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifySuperPlayerConfigOutcomeCallable VodClient::ModifySuperPlayerConfigCallable(const ModifySuperPlayerConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySuperPlayerConfigOutcome>>();
    ModifySuperPlayerConfigAsync(
    request,
    [prom](
        const VodClient*,
        const ModifySuperPlayerConfigRequest&,
        ModifySuperPlayerConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTranscodeTemplateRequest&;
    using Resp = ModifyTranscodeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTranscodeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyTranscodeTemplateOutcomeCallable VodClient::ModifyTranscodeTemplateCallable(const ModifyTranscodeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTranscodeTemplateOutcome>>();
    ModifyTranscodeTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyTranscodeTemplateRequest&,
        ModifyTranscodeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyVodDomainAccelerateConfigRequest&;
    using Resp = ModifyVodDomainAccelerateConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVodDomainAccelerateConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyVodDomainAccelerateConfigOutcomeCallable VodClient::ModifyVodDomainAccelerateConfigCallable(const ModifyVodDomainAccelerateConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVodDomainAccelerateConfigOutcome>>();
    ModifyVodDomainAccelerateConfigAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyVodDomainAccelerateConfigRequest&,
        ModifyVodDomainAccelerateConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyVodDomainConfigRequest&;
    using Resp = ModifyVodDomainConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVodDomainConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyVodDomainConfigOutcomeCallable VodClient::ModifyVodDomainConfigCallable(const ModifyVodDomainConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVodDomainConfigOutcome>>();
    ModifyVodDomainConfigAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyVodDomainConfigRequest&,
        ModifyVodDomainConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyWatermarkTemplateRequest&;
    using Resp = ModifyWatermarkTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWatermarkTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyWatermarkTemplateOutcomeCallable VodClient::ModifyWatermarkTemplateCallable(const ModifyWatermarkTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWatermarkTemplateOutcome>>();
    ModifyWatermarkTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyWatermarkTemplateRequest&,
        ModifyWatermarkTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyWordSampleRequest&;
    using Resp = ModifyWordSampleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWordSample", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyWordSampleOutcomeCallable VodClient::ModifyWordSampleCallable(const ModifyWordSampleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWordSampleOutcome>>();
    ModifyWordSampleAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyWordSampleRequest&,
        ModifyWordSampleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ParseStreamingManifestRequest&;
    using Resp = ParseStreamingManifestResponse;

    DoRequestAsync<Req, Resp>(
        "ParseStreamingManifest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ParseStreamingManifestOutcomeCallable VodClient::ParseStreamingManifestCallable(const ParseStreamingManifestRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseStreamingManifestOutcome>>();
    ParseStreamingManifestAsync(
    request,
    [prom](
        const VodClient*,
        const ParseStreamingManifestRequest&,
        ParseStreamingManifestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessImageRequest&;
    using Resp = ProcessImageResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ProcessImageOutcomeCallable VodClient::ProcessImageCallable(const ProcessImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessImageOutcome>>();
    ProcessImageAsync(
    request,
    [prom](
        const VodClient*,
        const ProcessImageRequest&,
        ProcessImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMediaRequest&;
    using Resp = ProcessMediaResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ProcessMediaOutcomeCallable VodClient::ProcessMediaCallable(const ProcessMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMediaOutcome>>();
    ProcessMediaAsync(
    request,
    [prom](
        const VodClient*,
        const ProcessMediaRequest&,
        ProcessMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::ProcessMediaByMPSOutcome VodClient::ProcessMediaByMPS(const ProcessMediaByMPSRequest &request)
{
    auto outcome = MakeRequest(request, "ProcessMediaByMPS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProcessMediaByMPSResponse rsp = ProcessMediaByMPSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProcessMediaByMPSOutcome(rsp);
        else
            return ProcessMediaByMPSOutcome(o.GetError());
    }
    else
    {
        return ProcessMediaByMPSOutcome(outcome.GetError());
    }
}

void VodClient::ProcessMediaByMPSAsync(const ProcessMediaByMPSRequest& request, const ProcessMediaByMPSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ProcessMediaByMPSRequest&;
    using Resp = ProcessMediaByMPSResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMediaByMPS", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ProcessMediaByMPSOutcomeCallable VodClient::ProcessMediaByMPSCallable(const ProcessMediaByMPSRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMediaByMPSOutcome>>();
    ProcessMediaByMPSAsync(
    request,
    [prom](
        const VodClient*,
        const ProcessMediaByMPSRequest&,
        ProcessMediaByMPSOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMediaByProcedureRequest&;
    using Resp = ProcessMediaByProcedureResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMediaByProcedure", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ProcessMediaByProcedureOutcomeCallable VodClient::ProcessMediaByProcedureCallable(const ProcessMediaByProcedureRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMediaByProcedureOutcome>>();
    ProcessMediaByProcedureAsync(
    request,
    [prom](
        const VodClient*,
        const ProcessMediaByProcedureRequest&,
        ProcessMediaByProcedureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ProcessMediaByUrlRequest&;
    using Resp = ProcessMediaByUrlResponse;

    DoRequestAsync<Req, Resp>(
        "ProcessMediaByUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ProcessMediaByUrlOutcomeCallable VodClient::ProcessMediaByUrlCallable(const ProcessMediaByUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ProcessMediaByUrlOutcome>>();
    ProcessMediaByUrlAsync(
    request,
    [prom](
        const VodClient*,
        const ProcessMediaByUrlRequest&,
        ProcessMediaByUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullEventsRequest&;
    using Resp = PullEventsResponse;

    DoRequestAsync<Req, Resp>(
        "PullEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::PullEventsOutcomeCallable VodClient::PullEventsCallable(const PullEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullEventsOutcome>>();
    PullEventsAsync(
    request,
    [prom](
        const VodClient*,
        const PullEventsRequest&,
        PullEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PullUploadRequest&;
    using Resp = PullUploadResponse;

    DoRequestAsync<Req, Resp>(
        "PullUpload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::PullUploadOutcomeCallable VodClient::PullUploadCallable(const PullUploadRequest &request)
{
    const auto prom = std::make_shared<std::promise<PullUploadOutcome>>();
    PullUploadAsync(
    request,
    [prom](
        const VodClient*,
        const PullUploadRequest&,
        PullUploadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PushUrlCacheRequest&;
    using Resp = PushUrlCacheResponse;

    DoRequestAsync<Req, Resp>(
        "PushUrlCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::PushUrlCacheOutcomeCallable VodClient::PushUrlCacheCallable(const PushUrlCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<PushUrlCacheOutcome>>();
    PushUrlCacheAsync(
    request,
    [prom](
        const VodClient*,
        const PushUrlCacheRequest&,
        PushUrlCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RebuildMediaRequest&;
    using Resp = RebuildMediaResponse;

    DoRequestAsync<Req, Resp>(
        "RebuildMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::RebuildMediaOutcomeCallable VodClient::RebuildMediaCallable(const RebuildMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebuildMediaOutcome>>();
    RebuildMediaAsync(
    request,
    [prom](
        const VodClient*,
        const RebuildMediaRequest&,
        RebuildMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RebuildMediaByTemplateRequest&;
    using Resp = RebuildMediaByTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "RebuildMediaByTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::RebuildMediaByTemplateOutcomeCallable VodClient::RebuildMediaByTemplateCallable(const RebuildMediaByTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RebuildMediaByTemplateOutcome>>();
    RebuildMediaByTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const RebuildMediaByTemplateRequest&,
        RebuildMediaByTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RefreshUrlCacheRequest&;
    using Resp = RefreshUrlCacheResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshUrlCache", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::RefreshUrlCacheOutcomeCallable VodClient::RefreshUrlCacheCallable(const RefreshUrlCacheRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshUrlCacheOutcome>>();
    RefreshUrlCacheAsync(
    request,
    [prom](
        const VodClient*,
        const RefreshUrlCacheRequest&,
        RefreshUrlCacheOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RemoveWatermarkRequest&;
    using Resp = RemoveWatermarkResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveWatermark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::RemoveWatermarkOutcomeCallable VodClient::RemoveWatermarkCallable(const RemoveWatermarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveWatermarkOutcome>>();
    RemoveWatermarkAsync(
    request,
    [prom](
        const VodClient*,
        const RemoveWatermarkRequest&,
        RemoveWatermarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ResetProcedureTemplateRequest&;
    using Resp = ResetProcedureTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ResetProcedureTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ResetProcedureTemplateOutcomeCallable VodClient::ResetProcedureTemplateCallable(const ResetProcedureTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetProcedureTemplateOutcome>>();
    ResetProcedureTemplateAsync(
    request,
    [prom](
        const VodClient*,
        const ResetProcedureTemplateRequest&,
        ResetProcedureTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RestoreMediaRequest&;
    using Resp = RestoreMediaResponse;

    DoRequestAsync<Req, Resp>(
        "RestoreMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::RestoreMediaOutcomeCallable VodClient::RestoreMediaCallable(const RestoreMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestoreMediaOutcome>>();
    RestoreMediaAsync(
    request,
    [prom](
        const VodClient*,
        const RestoreMediaRequest&,
        RestoreMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReviewAudioVideoRequest&;
    using Resp = ReviewAudioVideoResponse;

    DoRequestAsync<Req, Resp>(
        "ReviewAudioVideo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ReviewAudioVideoOutcomeCallable VodClient::ReviewAudioVideoCallable(const ReviewAudioVideoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReviewAudioVideoOutcome>>();
    ReviewAudioVideoAsync(
    request,
    [prom](
        const VodClient*,
        const ReviewAudioVideoRequest&,
        ReviewAudioVideoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ReviewImageRequest&;
    using Resp = ReviewImageResponse;

    DoRequestAsync<Req, Resp>(
        "ReviewImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ReviewImageOutcomeCallable VodClient::ReviewImageCallable(const ReviewImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReviewImageOutcome>>();
    ReviewImageAsync(
    request,
    [prom](
        const VodClient*,
        const ReviewImageRequest&,
        ReviewImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SearchMediaRequest&;
    using Resp = SearchMediaResponse;

    DoRequestAsync<Req, Resp>(
        "SearchMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SearchMediaOutcomeCallable VodClient::SearchMediaCallable(const SearchMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchMediaOutcome>>();
    SearchMediaAsync(
    request,
    [prom](
        const VodClient*,
        const SearchMediaRequest&,
        SearchMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::SearchMediaBySemanticsOutcome VodClient::SearchMediaBySemantics(const SearchMediaBySemanticsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchMediaBySemantics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchMediaBySemanticsResponse rsp = SearchMediaBySemanticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchMediaBySemanticsOutcome(rsp);
        else
            return SearchMediaBySemanticsOutcome(o.GetError());
    }
    else
    {
        return SearchMediaBySemanticsOutcome(outcome.GetError());
    }
}

void VodClient::SearchMediaBySemanticsAsync(const SearchMediaBySemanticsRequest& request, const SearchMediaBySemanticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchMediaBySemanticsRequest&;
    using Resp = SearchMediaBySemanticsResponse;

    DoRequestAsync<Req, Resp>(
        "SearchMediaBySemantics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SearchMediaBySemanticsOutcomeCallable VodClient::SearchMediaBySemanticsCallable(const SearchMediaBySemanticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchMediaBySemanticsOutcome>>();
    SearchMediaBySemanticsAsync(
    request,
    [prom](
        const VodClient*,
        const SearchMediaBySemanticsRequest&,
        SearchMediaBySemanticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetCLSPushTargetRequest&;
    using Resp = SetCLSPushTargetResponse;

    DoRequestAsync<Req, Resp>(
        "SetCLSPushTarget", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SetCLSPushTargetOutcomeCallable VodClient::SetCLSPushTargetCallable(const SetCLSPushTargetRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetCLSPushTargetOutcome>>();
    SetCLSPushTargetAsync(
    request,
    [prom](
        const VodClient*,
        const SetCLSPushTargetRequest&,
        SetCLSPushTargetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetDrmKeyProviderInfoRequest&;
    using Resp = SetDrmKeyProviderInfoResponse;

    DoRequestAsync<Req, Resp>(
        "SetDrmKeyProviderInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SetDrmKeyProviderInfoOutcomeCallable VodClient::SetDrmKeyProviderInfoCallable(const SetDrmKeyProviderInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetDrmKeyProviderInfoOutcome>>();
    SetDrmKeyProviderInfoAsync(
    request,
    [prom](
        const VodClient*,
        const SetDrmKeyProviderInfoRequest&,
        SetDrmKeyProviderInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SetVodDomainCertificateRequest&;
    using Resp = SetVodDomainCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "SetVodDomainCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SetVodDomainCertificateOutcomeCallable VodClient::SetVodDomainCertificateCallable(const SetVodDomainCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetVodDomainCertificateOutcome>>();
    SetVodDomainCertificateAsync(
    request,
    [prom](
        const VodClient*,
        const SetVodDomainCertificateRequest&,
        SetVodDomainCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SimpleHlsClipRequest&;
    using Resp = SimpleHlsClipResponse;

    DoRequestAsync<Req, Resp>(
        "SimpleHlsClip", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SimpleHlsClipOutcomeCallable VodClient::SimpleHlsClipCallable(const SimpleHlsClipRequest &request)
{
    const auto prom = std::make_shared<std::promise<SimpleHlsClipOutcome>>();
    SimpleHlsClipAsync(
    request,
    [prom](
        const VodClient*,
        const SimpleHlsClipRequest&,
        SimpleHlsClipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SplitMediaRequest&;
    using Resp = SplitMediaResponse;

    DoRequestAsync<Req, Resp>(
        "SplitMedia", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::SplitMediaOutcomeCallable VodClient::SplitMediaCallable(const SplitMediaRequest &request)
{
    const auto prom = std::make_shared<std::promise<SplitMediaOutcome>>();
    SplitMediaAsync(
    request,
    [prom](
        const VodClient*,
        const SplitMediaRequest&,
        SplitMediaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const VerifyDomainRecordRequest&;
    using Resp = VerifyDomainRecordResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyDomainRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::VerifyDomainRecordOutcomeCallable VodClient::VerifyDomainRecordCallable(const VerifyDomainRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyDomainRecordOutcome>>();
    VerifyDomainRecordAsync(
    request,
    [prom](
        const VodClient*,
        const VerifyDomainRecordRequest&,
        VerifyDomainRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const WeChatMiniProgramPublishRequest&;
    using Resp = WeChatMiniProgramPublishResponse;

    DoRequestAsync<Req, Resp>(
        "WeChatMiniProgramPublish", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::WeChatMiniProgramPublishOutcomeCallable VodClient::WeChatMiniProgramPublishCallable(const WeChatMiniProgramPublishRequest &request)
{
    const auto prom = std::make_shared<std::promise<WeChatMiniProgramPublishOutcome>>();
    WeChatMiniProgramPublishAsync(
    request,
    [prom](
        const VodClient*,
        const WeChatMiniProgramPublishRequest&,
        WeChatMiniProgramPublishOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

