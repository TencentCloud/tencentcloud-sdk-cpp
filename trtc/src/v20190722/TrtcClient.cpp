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

#include <tencentcloud/trtc/v20190722/TrtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trtc::V20190722;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-22";
    const string ENDPOINT = "trtc.tencentcloudapi.com";
}

TrtcClient::TrtcClient(const Credential &credential, const string &region) :
    TrtcClient(credential, region, ClientProfile())
{
}

TrtcClient::TrtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrtcClient::ControlAIConversationOutcome TrtcClient::ControlAIConversation(const ControlAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "ControlAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlAIConversationResponse rsp = ControlAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlAIConversationOutcome(rsp);
        else
            return ControlAIConversationOutcome(o.GetError());
    }
    else
    {
        return ControlAIConversationOutcome(outcome.GetError());
    }
}

void TrtcClient::ControlAIConversationAsync(const ControlAIConversationRequest& request, const ControlAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlAIConversationRequest&;
    using Resp = ControlAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "ControlAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::ControlAIConversationOutcomeCallable TrtcClient::ControlAIConversationCallable(const ControlAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlAIConversationOutcome>>();
    ControlAIConversationAsync(
    request,
    [prom](
        const TrtcClient*,
        const ControlAIConversationRequest&,
        ControlAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::CreateBasicModerationOutcome TrtcClient::CreateBasicModeration(const CreateBasicModerationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBasicModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBasicModerationResponse rsp = CreateBasicModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBasicModerationOutcome(rsp);
        else
            return CreateBasicModerationOutcome(o.GetError());
    }
    else
    {
        return CreateBasicModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateBasicModerationAsync(const CreateBasicModerationRequest& request, const CreateBasicModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBasicModerationRequest&;
    using Resp = CreateBasicModerationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBasicModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::CreateBasicModerationOutcomeCallable TrtcClient::CreateBasicModerationCallable(const CreateBasicModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBasicModerationOutcome>>();
    CreateBasicModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const CreateBasicModerationRequest&,
        CreateBasicModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::CreateCloudModerationOutcome TrtcClient::CreateCloudModeration(const CreateCloudModerationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudModerationResponse rsp = CreateCloudModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudModerationOutcome(rsp);
        else
            return CreateCloudModerationOutcome(o.GetError());
    }
    else
    {
        return CreateCloudModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudModerationAsync(const CreateCloudModerationRequest& request, const CreateCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudModerationRequest&;
    using Resp = CreateCloudModerationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::CreateCloudModerationOutcomeCallable TrtcClient::CreateCloudModerationCallable(const CreateCloudModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudModerationOutcome>>();
    CreateCloudModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const CreateCloudModerationRequest&,
        CreateCloudModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::CreateCloudRecordingOutcome TrtcClient::CreateCloudRecording(const CreateCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudRecordingResponse rsp = CreateCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudRecordingOutcome(rsp);
        else
            return CreateCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return CreateCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudRecordingAsync(const CreateCloudRecordingRequest& request, const CreateCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudRecordingRequest&;
    using Resp = CreateCloudRecordingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudRecording", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::CreateCloudRecordingOutcomeCallable TrtcClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudRecordingOutcome>>();
    CreateCloudRecordingAsync(
    request,
    [prom](
        const TrtcClient*,
        const CreateCloudRecordingRequest&,
        CreateCloudRecordingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::CreateCloudSliceTaskOutcome TrtcClient::CreateCloudSliceTask(const CreateCloudSliceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudSliceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudSliceTaskResponse rsp = CreateCloudSliceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudSliceTaskOutcome(rsp);
        else
            return CreateCloudSliceTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCloudSliceTaskOutcome(outcome.GetError());
    }
}

void TrtcClient::CreateCloudSliceTaskAsync(const CreateCloudSliceTaskRequest& request, const CreateCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudSliceTaskRequest&;
    using Resp = CreateCloudSliceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudSliceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::CreateCloudSliceTaskOutcomeCallable TrtcClient::CreateCloudSliceTaskCallable(const CreateCloudSliceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudSliceTaskOutcome>>();
    CreateCloudSliceTaskAsync(
    request,
    [prom](
        const TrtcClient*,
        const CreateCloudSliceTaskRequest&,
        CreateCloudSliceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::CreatePictureOutcome TrtcClient::CreatePicture(const CreatePictureRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePictureResponse rsp = CreatePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePictureOutcome(rsp);
        else
            return CreatePictureOutcome(o.GetError());
    }
    else
    {
        return CreatePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::CreatePictureAsync(const CreatePictureRequest& request, const CreatePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePictureRequest&;
    using Resp = CreatePictureResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePicture", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::CreatePictureOutcomeCallable TrtcClient::CreatePictureCallable(const CreatePictureRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePictureOutcome>>();
    CreatePictureAsync(
    request,
    [prom](
        const TrtcClient*,
        const CreatePictureRequest&,
        CreatePictureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeleteBasicModerationOutcome TrtcClient::DeleteBasicModeration(const DeleteBasicModerationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBasicModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBasicModerationResponse rsp = DeleteBasicModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBasicModerationOutcome(rsp);
        else
            return DeleteBasicModerationOutcome(o.GetError());
    }
    else
    {
        return DeleteBasicModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteBasicModerationAsync(const DeleteBasicModerationRequest& request, const DeleteBasicModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBasicModerationRequest&;
    using Resp = DeleteBasicModerationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBasicModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeleteBasicModerationOutcomeCallable TrtcClient::DeleteBasicModerationCallable(const DeleteBasicModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBasicModerationOutcome>>();
    DeleteBasicModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeleteBasicModerationRequest&,
        DeleteBasicModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeleteCloudModerationOutcome TrtcClient::DeleteCloudModeration(const DeleteCloudModerationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudModerationResponse rsp = DeleteCloudModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudModerationOutcome(rsp);
        else
            return DeleteCloudModerationOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudModerationAsync(const DeleteCloudModerationRequest& request, const DeleteCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudModerationRequest&;
    using Resp = DeleteCloudModerationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeleteCloudModerationOutcomeCallable TrtcClient::DeleteCloudModerationCallable(const DeleteCloudModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudModerationOutcome>>();
    DeleteCloudModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeleteCloudModerationRequest&,
        DeleteCloudModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeleteCloudRecordingOutcome TrtcClient::DeleteCloudRecording(const DeleteCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudRecordingResponse rsp = DeleteCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudRecordingOutcome(rsp);
        else
            return DeleteCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudRecordingAsync(const DeleteCloudRecordingRequest& request, const DeleteCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudRecordingRequest&;
    using Resp = DeleteCloudRecordingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudRecording", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeleteCloudRecordingOutcomeCallable TrtcClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudRecordingOutcome>>();
    DeleteCloudRecordingAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeleteCloudRecordingRequest&,
        DeleteCloudRecordingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeleteCloudSliceTaskOutcome TrtcClient::DeleteCloudSliceTask(const DeleteCloudSliceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudSliceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudSliceTaskResponse rsp = DeleteCloudSliceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudSliceTaskOutcome(rsp);
        else
            return DeleteCloudSliceTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudSliceTaskOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteCloudSliceTaskAsync(const DeleteCloudSliceTaskRequest& request, const DeleteCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudSliceTaskRequest&;
    using Resp = DeleteCloudSliceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudSliceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeleteCloudSliceTaskOutcomeCallable TrtcClient::DeleteCloudSliceTaskCallable(const DeleteCloudSliceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudSliceTaskOutcome>>();
    DeleteCloudSliceTaskAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeleteCloudSliceTaskRequest&,
        DeleteCloudSliceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeletePictureOutcome TrtcClient::DeletePicture(const DeletePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePictureResponse rsp = DeletePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePictureOutcome(rsp);
        else
            return DeletePictureOutcome(o.GetError());
    }
    else
    {
        return DeletePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DeletePictureAsync(const DeletePictureRequest& request, const DeletePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePictureRequest&;
    using Resp = DeletePictureResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePicture", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeletePictureOutcomeCallable TrtcClient::DeletePictureCallable(const DeletePictureRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePictureOutcome>>();
    DeletePictureAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeletePictureRequest&,
        DeletePictureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DeleteVoicePrintOutcome TrtcClient::DeleteVoicePrint(const DeleteVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteVoicePrintResponse rsp = DeleteVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteVoicePrintOutcome(rsp);
        else
            return DeleteVoicePrintOutcome(o.GetError());
    }
    else
    {
        return DeleteVoicePrintOutcome(outcome.GetError());
    }
}

void TrtcClient::DeleteVoicePrintAsync(const DeleteVoicePrintRequest& request, const DeleteVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteVoicePrintRequest&;
    using Resp = DeleteVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DeleteVoicePrintOutcomeCallable TrtcClient::DeleteVoicePrintCallable(const DeleteVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteVoicePrintOutcome>>();
    DeleteVoicePrintAsync(
    request,
    [prom](
        const TrtcClient*,
        const DeleteVoicePrintRequest&,
        DeleteVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeAIConversationOutcome TrtcClient::DescribeAIConversation(const DescribeAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIConversationResponse rsp = DescribeAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIConversationOutcome(rsp);
        else
            return DescribeAIConversationOutcome(o.GetError());
    }
    else
    {
        return DescribeAIConversationOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeAIConversationAsync(const DescribeAIConversationRequest& request, const DescribeAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIConversationRequest&;
    using Resp = DescribeAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeAIConversationOutcomeCallable TrtcClient::DescribeAIConversationCallable(const DescribeAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIConversationOutcome>>();
    DescribeAIConversationAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeAIConversationRequest&,
        DescribeAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeAITranscriptionOutcome TrtcClient::DescribeAITranscription(const DescribeAITranscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAITranscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAITranscriptionResponse rsp = DescribeAITranscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAITranscriptionOutcome(rsp);
        else
            return DescribeAITranscriptionOutcome(o.GetError());
    }
    else
    {
        return DescribeAITranscriptionOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeAITranscriptionAsync(const DescribeAITranscriptionRequest& request, const DescribeAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAITranscriptionRequest&;
    using Resp = DescribeAITranscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAITranscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeAITranscriptionOutcomeCallable TrtcClient::DescribeAITranscriptionCallable(const DescribeAITranscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAITranscriptionOutcome>>();
    DescribeAITranscriptionAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeAITranscriptionRequest&,
        DescribeAITranscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeCallDetailInfoOutcome TrtcClient::DescribeCallDetailInfo(const DescribeCallDetailInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallDetailInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallDetailInfoResponse rsp = DescribeCallDetailInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallDetailInfoOutcome(rsp);
        else
            return DescribeCallDetailInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCallDetailInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCallDetailInfoAsync(const DescribeCallDetailInfoRequest& request, const DescribeCallDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCallDetailInfoRequest&;
    using Resp = DescribeCallDetailInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallDetailInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeCallDetailInfoOutcomeCallable TrtcClient::DescribeCallDetailInfoCallable(const DescribeCallDetailInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallDetailInfoOutcome>>();
    DescribeCallDetailInfoAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeCallDetailInfoRequest&,
        DescribeCallDetailInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeCloudModerationOutcome TrtcClient::DescribeCloudModeration(const DescribeCloudModerationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudModerationResponse rsp = DescribeCloudModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudModerationOutcome(rsp);
        else
            return DescribeCloudModerationOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudModerationAsync(const DescribeCloudModerationRequest& request, const DescribeCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudModerationRequest&;
    using Resp = DescribeCloudModerationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeCloudModerationOutcomeCallable TrtcClient::DescribeCloudModerationCallable(const DescribeCloudModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudModerationOutcome>>();
    DescribeCloudModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeCloudModerationRequest&,
        DescribeCloudModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeCloudRecordingOutcome TrtcClient::DescribeCloudRecording(const DescribeCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudRecordingResponse rsp = DescribeCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudRecordingOutcome(rsp);
        else
            return DescribeCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudRecordingAsync(const DescribeCloudRecordingRequest& request, const DescribeCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudRecordingRequest&;
    using Resp = DescribeCloudRecordingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudRecording", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeCloudRecordingOutcomeCallable TrtcClient::DescribeCloudRecordingCallable(const DescribeCloudRecordingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudRecordingOutcome>>();
    DescribeCloudRecordingAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeCloudRecordingRequest&,
        DescribeCloudRecordingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeCloudSliceTaskOutcome TrtcClient::DescribeCloudSliceTask(const DescribeCloudSliceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudSliceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudSliceTaskResponse rsp = DescribeCloudSliceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudSliceTaskOutcome(rsp);
        else
            return DescribeCloudSliceTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudSliceTaskOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeCloudSliceTaskAsync(const DescribeCloudSliceTaskRequest& request, const DescribeCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudSliceTaskRequest&;
    using Resp = DescribeCloudSliceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudSliceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeCloudSliceTaskOutcomeCallable TrtcClient::DescribeCloudSliceTaskCallable(const DescribeCloudSliceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudSliceTaskOutcome>>();
    DescribeCloudSliceTaskAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeCloudSliceTaskRequest&,
        DescribeCloudSliceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeMixTranscodingUsageOutcome TrtcClient::DescribeMixTranscodingUsage(const DescribeMixTranscodingUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMixTranscodingUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMixTranscodingUsageResponse rsp = DescribeMixTranscodingUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMixTranscodingUsageOutcome(rsp);
        else
            return DescribeMixTranscodingUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeMixTranscodingUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeMixTranscodingUsageAsync(const DescribeMixTranscodingUsageRequest& request, const DescribeMixTranscodingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMixTranscodingUsageRequest&;
    using Resp = DescribeMixTranscodingUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMixTranscodingUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeMixTranscodingUsageOutcomeCallable TrtcClient::DescribeMixTranscodingUsageCallable(const DescribeMixTranscodingUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMixTranscodingUsageOutcome>>();
    DescribeMixTranscodingUsageAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeMixTranscodingUsageRequest&,
        DescribeMixTranscodingUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribePictureOutcome TrtcClient::DescribePicture(const DescribePictureRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePictureResponse rsp = DescribePictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePictureOutcome(rsp);
        else
            return DescribePictureOutcome(o.GetError());
    }
    else
    {
        return DescribePictureOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribePictureAsync(const DescribePictureRequest& request, const DescribePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePictureRequest&;
    using Resp = DescribePictureResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePicture", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribePictureOutcomeCallable TrtcClient::DescribePictureCallable(const DescribePictureRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePictureOutcome>>();
    DescribePictureAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribePictureRequest&,
        DescribePictureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeRecordStatisticOutcome TrtcClient::DescribeRecordStatistic(const DescribeRecordStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStatisticResponse rsp = DescribeRecordStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStatisticOutcome(rsp);
        else
            return DescribeRecordStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStatisticOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRecordStatisticAsync(const DescribeRecordStatisticRequest& request, const DescribeRecordStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordStatisticRequest&;
    using Resp = DescribeRecordStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeRecordStatisticOutcomeCallable TrtcClient::DescribeRecordStatisticCallable(const DescribeRecordStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordStatisticOutcome>>();
    DescribeRecordStatisticAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeRecordStatisticRequest&,
        DescribeRecordStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeRecordingUsageOutcome TrtcClient::DescribeRecordingUsage(const DescribeRecordingUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordingUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordingUsageResponse rsp = DescribeRecordingUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordingUsageOutcome(rsp);
        else
            return DescribeRecordingUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordingUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRecordingUsageAsync(const DescribeRecordingUsageRequest& request, const DescribeRecordingUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecordingUsageRequest&;
    using Resp = DescribeRecordingUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecordingUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeRecordingUsageOutcomeCallable TrtcClient::DescribeRecordingUsageCallable(const DescribeRecordingUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecordingUsageOutcome>>();
    DescribeRecordingUsageAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeRecordingUsageRequest&,
        DescribeRecordingUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeRelayUsageOutcome TrtcClient::DescribeRelayUsage(const DescribeRelayUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelayUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelayUsageResponse rsp = DescribeRelayUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelayUsageOutcome(rsp);
        else
            return DescribeRelayUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeRelayUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRelayUsageAsync(const DescribeRelayUsageRequest& request, const DescribeRelayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRelayUsageRequest&;
    using Resp = DescribeRelayUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelayUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeRelayUsageOutcomeCallable TrtcClient::DescribeRelayUsageCallable(const DescribeRelayUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRelayUsageOutcome>>();
    DescribeRelayUsageAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeRelayUsageRequest&,
        DescribeRelayUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeRoomInfoOutcome TrtcClient::DescribeRoomInfo(const DescribeRoomInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomInfoResponse rsp = DescribeRoomInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomInfoOutcome(rsp);
        else
            return DescribeRoomInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeRoomInfoAsync(const DescribeRoomInfoRequest& request, const DescribeRoomInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRoomInfoRequest&;
    using Resp = DescribeRoomInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoomInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeRoomInfoOutcomeCallable TrtcClient::DescribeRoomInfoCallable(const DescribeRoomInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRoomInfoOutcome>>();
    DescribeRoomInfoAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeRoomInfoRequest&,
        DescribeRoomInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeScaleInfoOutcome TrtcClient::DescribeScaleInfo(const DescribeScaleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScaleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScaleInfoResponse rsp = DescribeScaleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScaleInfoOutcome(rsp);
        else
            return DescribeScaleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeScaleInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeScaleInfoAsync(const DescribeScaleInfoRequest& request, const DescribeScaleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScaleInfoRequest&;
    using Resp = DescribeScaleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScaleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeScaleInfoOutcomeCallable TrtcClient::DescribeScaleInfoCallable(const DescribeScaleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScaleInfoOutcome>>();
    DescribeScaleInfoAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeScaleInfoRequest&,
        DescribeScaleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeStreamIngestOutcome TrtcClient::DescribeStreamIngest(const DescribeStreamIngestRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStreamIngest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStreamIngestResponse rsp = DescribeStreamIngestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStreamIngestOutcome(rsp);
        else
            return DescribeStreamIngestOutcome(o.GetError());
    }
    else
    {
        return DescribeStreamIngestOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeStreamIngestAsync(const DescribeStreamIngestRequest& request, const DescribeStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStreamIngestRequest&;
    using Resp = DescribeStreamIngestResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStreamIngest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeStreamIngestOutcomeCallable TrtcClient::DescribeStreamIngestCallable(const DescribeStreamIngestRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStreamIngestOutcome>>();
    DescribeStreamIngestAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeStreamIngestRequest&,
        DescribeStreamIngestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTRTCMarketQualityDataOutcome TrtcClient::DescribeTRTCMarketQualityData(const DescribeTRTCMarketQualityDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCMarketQualityData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCMarketQualityDataResponse rsp = DescribeTRTCMarketQualityDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCMarketQualityDataOutcome(rsp);
        else
            return DescribeTRTCMarketQualityDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCMarketQualityDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCMarketQualityDataAsync(const DescribeTRTCMarketQualityDataRequest& request, const DescribeTRTCMarketQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTRTCMarketQualityDataRequest&;
    using Resp = DescribeTRTCMarketQualityDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTRTCMarketQualityData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTRTCMarketQualityDataOutcomeCallable TrtcClient::DescribeTRTCMarketQualityDataCallable(const DescribeTRTCMarketQualityDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTRTCMarketQualityDataOutcome>>();
    DescribeTRTCMarketQualityDataAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTRTCMarketQualityDataRequest&,
        DescribeTRTCMarketQualityDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTRTCMarketScaleDataOutcome TrtcClient::DescribeTRTCMarketScaleData(const DescribeTRTCMarketScaleDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCMarketScaleData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCMarketScaleDataResponse rsp = DescribeTRTCMarketScaleDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCMarketScaleDataOutcome(rsp);
        else
            return DescribeTRTCMarketScaleDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCMarketScaleDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCMarketScaleDataAsync(const DescribeTRTCMarketScaleDataRequest& request, const DescribeTRTCMarketScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTRTCMarketScaleDataRequest&;
    using Resp = DescribeTRTCMarketScaleDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTRTCMarketScaleData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTRTCMarketScaleDataOutcomeCallable TrtcClient::DescribeTRTCMarketScaleDataCallable(const DescribeTRTCMarketScaleDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTRTCMarketScaleDataOutcome>>();
    DescribeTRTCMarketScaleDataAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTRTCMarketScaleDataRequest&,
        DescribeTRTCMarketScaleDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTRTCMarketScaleMetricDataOutcome TrtcClient::DescribeTRTCMarketScaleMetricData(const DescribeTRTCMarketScaleMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCMarketScaleMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCMarketScaleMetricDataResponse rsp = DescribeTRTCMarketScaleMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCMarketScaleMetricDataOutcome(rsp);
        else
            return DescribeTRTCMarketScaleMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCMarketScaleMetricDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCMarketScaleMetricDataAsync(const DescribeTRTCMarketScaleMetricDataRequest& request, const DescribeTRTCMarketScaleMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTRTCMarketScaleMetricDataRequest&;
    using Resp = DescribeTRTCMarketScaleMetricDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTRTCMarketScaleMetricData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTRTCMarketScaleMetricDataOutcomeCallable TrtcClient::DescribeTRTCMarketScaleMetricDataCallable(const DescribeTRTCMarketScaleMetricDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTRTCMarketScaleMetricDataOutcome>>();
    DescribeTRTCMarketScaleMetricDataAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTRTCMarketScaleMetricDataRequest&,
        DescribeTRTCMarketScaleMetricDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTRTCRealTimeQualityDataOutcome TrtcClient::DescribeTRTCRealTimeQualityData(const DescribeTRTCRealTimeQualityDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCRealTimeQualityData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCRealTimeQualityDataResponse rsp = DescribeTRTCRealTimeQualityDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCRealTimeQualityDataOutcome(rsp);
        else
            return DescribeTRTCRealTimeQualityDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCRealTimeQualityDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCRealTimeQualityDataAsync(const DescribeTRTCRealTimeQualityDataRequest& request, const DescribeTRTCRealTimeQualityDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTRTCRealTimeQualityDataRequest&;
    using Resp = DescribeTRTCRealTimeQualityDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTRTCRealTimeQualityData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTRTCRealTimeQualityDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeQualityDataCallable(const DescribeTRTCRealTimeQualityDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTRTCRealTimeQualityDataOutcome>>();
    DescribeTRTCRealTimeQualityDataAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTRTCRealTimeQualityDataRequest&,
        DescribeTRTCRealTimeQualityDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTRTCRealTimeScaleDataOutcome TrtcClient::DescribeTRTCRealTimeScaleData(const DescribeTRTCRealTimeScaleDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCRealTimeScaleData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCRealTimeScaleDataResponse rsp = DescribeTRTCRealTimeScaleDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCRealTimeScaleDataOutcome(rsp);
        else
            return DescribeTRTCRealTimeScaleDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCRealTimeScaleDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCRealTimeScaleDataAsync(const DescribeTRTCRealTimeScaleDataRequest& request, const DescribeTRTCRealTimeScaleDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTRTCRealTimeScaleDataRequest&;
    using Resp = DescribeTRTCRealTimeScaleDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTRTCRealTimeScaleData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTRTCRealTimeScaleDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeScaleDataCallable(const DescribeTRTCRealTimeScaleDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTRTCRealTimeScaleDataOutcome>>();
    DescribeTRTCRealTimeScaleDataAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTRTCRealTimeScaleDataRequest&,
        DescribeTRTCRealTimeScaleDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcome TrtcClient::DescribeTrtcMcuTranscodeTime(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcMcuTranscodeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcMcuTranscodeTimeResponse rsp = DescribeTrtcMcuTranscodeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcMcuTranscodeTimeOutcome(rsp);
        else
            return DescribeTrtcMcuTranscodeTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcMcuTranscodeTimeOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcMcuTranscodeTimeAsync(const DescribeTrtcMcuTranscodeTimeRequest& request, const DescribeTrtcMcuTranscodeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrtcMcuTranscodeTimeRequest&;
    using Resp = DescribeTrtcMcuTranscodeTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrtcMcuTranscodeTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcomeCallable TrtcClient::DescribeTrtcMcuTranscodeTimeCallable(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrtcMcuTranscodeTimeOutcome>>();
    DescribeTrtcMcuTranscodeTimeAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTrtcMcuTranscodeTimeRequest&,
        DescribeTrtcMcuTranscodeTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTrtcRoomUsageOutcome TrtcClient::DescribeTrtcRoomUsage(const DescribeTrtcRoomUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcRoomUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcRoomUsageResponse rsp = DescribeTrtcRoomUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcRoomUsageOutcome(rsp);
        else
            return DescribeTrtcRoomUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcRoomUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcRoomUsageAsync(const DescribeTrtcRoomUsageRequest& request, const DescribeTrtcRoomUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrtcRoomUsageRequest&;
    using Resp = DescribeTrtcRoomUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrtcRoomUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTrtcRoomUsageOutcomeCallable TrtcClient::DescribeTrtcRoomUsageCallable(const DescribeTrtcRoomUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrtcRoomUsageOutcome>>();
    DescribeTrtcRoomUsageAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTrtcRoomUsageRequest&,
        DescribeTrtcRoomUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeTrtcUsageOutcome TrtcClient::DescribeTrtcUsage(const DescribeTrtcUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrtcUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrtcUsageResponse rsp = DescribeTrtcUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrtcUsageOutcome(rsp);
        else
            return DescribeTrtcUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeTrtcUsageOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTrtcUsageAsync(const DescribeTrtcUsageRequest& request, const DescribeTrtcUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrtcUsageRequest&;
    using Resp = DescribeTrtcUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrtcUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeTrtcUsageOutcomeCallable TrtcClient::DescribeTrtcUsageCallable(const DescribeTrtcUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrtcUsageOutcome>>();
    DescribeTrtcUsageAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeTrtcUsageRequest&,
        DescribeTrtcUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeUnusualEventOutcome TrtcClient::DescribeUnusualEvent(const DescribeUnusualEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnusualEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnusualEventResponse rsp = DescribeUnusualEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnusualEventOutcome(rsp);
        else
            return DescribeUnusualEventOutcome(o.GetError());
    }
    else
    {
        return DescribeUnusualEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUnusualEventAsync(const DescribeUnusualEventRequest& request, const DescribeUnusualEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnusualEventRequest&;
    using Resp = DescribeUnusualEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnusualEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeUnusualEventOutcomeCallable TrtcClient::DescribeUnusualEventCallable(const DescribeUnusualEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnusualEventOutcome>>();
    DescribeUnusualEventAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeUnusualEventRequest&,
        DescribeUnusualEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeUserEventOutcome TrtcClient::DescribeUserEvent(const DescribeUserEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserEventResponse rsp = DescribeUserEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserEventOutcome(rsp);
        else
            return DescribeUserEventOutcome(o.GetError());
    }
    else
    {
        return DescribeUserEventOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUserEventAsync(const DescribeUserEventRequest& request, const DescribeUserEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserEventRequest&;
    using Resp = DescribeUserEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeUserEventOutcomeCallable TrtcClient::DescribeUserEventCallable(const DescribeUserEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserEventOutcome>>();
    DescribeUserEventAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeUserEventRequest&,
        DescribeUserEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeUserInfoOutcome TrtcClient::DescribeUserInfo(const DescribeUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserInfoResponse rsp = DescribeUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserInfoOutcome(rsp);
        else
            return DescribeUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUserInfoOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeUserInfoAsync(const DescribeUserInfoRequest& request, const DescribeUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserInfoRequest&;
    using Resp = DescribeUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeUserInfoOutcomeCallable TrtcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserInfoOutcome>>();
    DescribeUserInfoAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeUserInfoRequest&,
        DescribeUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeVoicePrintOutcome TrtcClient::DescribeVoicePrint(const DescribeVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVoicePrintResponse rsp = DescribeVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVoicePrintOutcome(rsp);
        else
            return DescribeVoicePrintOutcome(o.GetError());
    }
    else
    {
        return DescribeVoicePrintOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeVoicePrintAsync(const DescribeVoicePrintRequest& request, const DescribeVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVoicePrintRequest&;
    using Resp = DescribeVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeVoicePrintOutcomeCallable TrtcClient::DescribeVoicePrintCallable(const DescribeVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVoicePrintOutcome>>();
    DescribeVoicePrintAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeVoicePrintRequest&,
        DescribeVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DescribeWebRecordOutcome TrtcClient::DescribeWebRecord(const DescribeWebRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebRecordResponse rsp = DescribeWebRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebRecordOutcome(rsp);
        else
            return DescribeWebRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeWebRecordOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeWebRecordAsync(const DescribeWebRecordRequest& request, const DescribeWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebRecordRequest&;
    using Resp = DescribeWebRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DescribeWebRecordOutcomeCallable TrtcClient::DescribeWebRecordCallable(const DescribeWebRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebRecordOutcome>>();
    DescribeWebRecordAsync(
    request,
    [prom](
        const TrtcClient*,
        const DescribeWebRecordRequest&,
        DescribeWebRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DismissRoomOutcome TrtcClient::DismissRoom(const DismissRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomResponse rsp = DismissRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomOutcome(rsp);
        else
            return DismissRoomOutcome(o.GetError());
    }
    else
    {
        return DismissRoomOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomAsync(const DismissRoomRequest& request, const DismissRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DismissRoomRequest&;
    using Resp = DismissRoomResponse;

    DoRequestAsync<Req, Resp>(
        "DismissRoom", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    const auto prom = std::make_shared<std::promise<DismissRoomOutcome>>();
    DismissRoomAsync(
    request,
    [prom](
        const TrtcClient*,
        const DismissRoomRequest&,
        DismissRoomOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::DismissRoomByStrRoomIdOutcome TrtcClient::DismissRoomByStrRoomId(const DismissRoomByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "DismissRoomByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismissRoomByStrRoomIdResponse rsp = DismissRoomByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismissRoomByStrRoomIdOutcome(rsp);
        else
            return DismissRoomByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return DismissRoomByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::DismissRoomByStrRoomIdAsync(const DismissRoomByStrRoomIdRequest& request, const DismissRoomByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DismissRoomByStrRoomIdRequest&;
    using Resp = DismissRoomByStrRoomIdResponse;

    DoRequestAsync<Req, Resp>(
        "DismissRoomByStrRoomId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DismissRoomByStrRoomIdOutcome>>();
    DismissRoomByStrRoomIdAsync(
    request,
    [prom](
        const TrtcClient*,
        const DismissRoomByStrRoomIdRequest&,
        DismissRoomByStrRoomIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::ModifyCloudModerationOutcome TrtcClient::ModifyCloudModeration(const ModifyCloudModerationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudModerationResponse rsp = ModifyCloudModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudModerationOutcome(rsp);
        else
            return ModifyCloudModerationOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudModerationOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudModerationAsync(const ModifyCloudModerationRequest& request, const ModifyCloudModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudModerationRequest&;
    using Resp = ModifyCloudModerationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::ModifyCloudModerationOutcomeCallable TrtcClient::ModifyCloudModerationCallable(const ModifyCloudModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudModerationOutcome>>();
    ModifyCloudModerationAsync(
    request,
    [prom](
        const TrtcClient*,
        const ModifyCloudModerationRequest&,
        ModifyCloudModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::ModifyCloudRecordingOutcome TrtcClient::ModifyCloudRecording(const ModifyCloudRecordingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudRecording");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudRecordingResponse rsp = ModifyCloudRecordingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudRecordingOutcome(rsp);
        else
            return ModifyCloudRecordingOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudRecordingOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudRecordingAsync(const ModifyCloudRecordingRequest& request, const ModifyCloudRecordingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudRecordingRequest&;
    using Resp = ModifyCloudRecordingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudRecording", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::ModifyCloudRecordingOutcomeCallable TrtcClient::ModifyCloudRecordingCallable(const ModifyCloudRecordingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudRecordingOutcome>>();
    ModifyCloudRecordingAsync(
    request,
    [prom](
        const TrtcClient*,
        const ModifyCloudRecordingRequest&,
        ModifyCloudRecordingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::ModifyCloudSliceTaskOutcome TrtcClient::ModifyCloudSliceTask(const ModifyCloudSliceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudSliceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudSliceTaskResponse rsp = ModifyCloudSliceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudSliceTaskOutcome(rsp);
        else
            return ModifyCloudSliceTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudSliceTaskOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyCloudSliceTaskAsync(const ModifyCloudSliceTaskRequest& request, const ModifyCloudSliceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudSliceTaskRequest&;
    using Resp = ModifyCloudSliceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudSliceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::ModifyCloudSliceTaskOutcomeCallable TrtcClient::ModifyCloudSliceTaskCallable(const ModifyCloudSliceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudSliceTaskOutcome>>();
    ModifyCloudSliceTaskAsync(
    request,
    [prom](
        const TrtcClient*,
        const ModifyCloudSliceTaskRequest&,
        ModifyCloudSliceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::ModifyPictureOutcome TrtcClient::ModifyPicture(const ModifyPictureRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPicture");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPictureResponse rsp = ModifyPictureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPictureOutcome(rsp);
        else
            return ModifyPictureOutcome(o.GetError());
    }
    else
    {
        return ModifyPictureOutcome(outcome.GetError());
    }
}

void TrtcClient::ModifyPictureAsync(const ModifyPictureRequest& request, const ModifyPictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPictureRequest&;
    using Resp = ModifyPictureResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPicture", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::ModifyPictureOutcomeCallable TrtcClient::ModifyPictureCallable(const ModifyPictureRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPictureOutcome>>();
    ModifyPictureAsync(
    request,
    [prom](
        const TrtcClient*,
        const ModifyPictureRequest&,
        ModifyPictureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::RegisterVoicePrintOutcome TrtcClient::RegisterVoicePrint(const RegisterVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterVoicePrintResponse rsp = RegisterVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterVoicePrintOutcome(rsp);
        else
            return RegisterVoicePrintOutcome(o.GetError());
    }
    else
    {
        return RegisterVoicePrintOutcome(outcome.GetError());
    }
}

void TrtcClient::RegisterVoicePrintAsync(const RegisterVoicePrintRequest& request, const RegisterVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterVoicePrintRequest&;
    using Resp = RegisterVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::RegisterVoicePrintOutcomeCallable TrtcClient::RegisterVoicePrintCallable(const RegisterVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterVoicePrintOutcome>>();
    RegisterVoicePrintAsync(
    request,
    [prom](
        const TrtcClient*,
        const RegisterVoicePrintRequest&,
        RegisterVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::RemoveUserOutcome TrtcClient::RemoveUser(const RemoveUserRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserResponse rsp = RemoveUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserOutcome(rsp);
        else
            return RemoveUserOutcome(o.GetError());
    }
    else
    {
        return RemoveUserOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserAsync(const RemoveUserRequest& request, const RemoveUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveUserRequest&;
    using Resp = RemoveUserResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserOutcome>>();
    RemoveUserAsync(
    request,
    [prom](
        const TrtcClient*,
        const RemoveUserRequest&,
        RemoveUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::RemoveUserByStrRoomIdOutcome TrtcClient::RemoveUserByStrRoomId(const RemoveUserByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserByStrRoomIdResponse rsp = RemoveUserByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserByStrRoomIdOutcome(rsp);
        else
            return RemoveUserByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return RemoveUserByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::RemoveUserByStrRoomIdAsync(const RemoveUserByStrRoomIdRequest& request, const RemoveUserByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveUserByStrRoomIdRequest&;
    using Resp = RemoveUserByStrRoomIdResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveUserByStrRoomId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveUserByStrRoomIdOutcome>>();
    RemoveUserByStrRoomIdAsync(
    request,
    [prom](
        const TrtcClient*,
        const RemoveUserByStrRoomIdRequest&,
        RemoveUserByStrRoomIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartAIConversationOutcome TrtcClient::StartAIConversation(const StartAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "StartAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAIConversationResponse rsp = StartAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAIConversationOutcome(rsp);
        else
            return StartAIConversationOutcome(o.GetError());
    }
    else
    {
        return StartAIConversationOutcome(outcome.GetError());
    }
}

void TrtcClient::StartAIConversationAsync(const StartAIConversationRequest& request, const StartAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAIConversationRequest&;
    using Resp = StartAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "StartAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartAIConversationOutcomeCallable TrtcClient::StartAIConversationCallable(const StartAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAIConversationOutcome>>();
    StartAIConversationAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartAIConversationRequest&,
        StartAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartAITranscriptionOutcome TrtcClient::StartAITranscription(const StartAITranscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "StartAITranscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAITranscriptionResponse rsp = StartAITranscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAITranscriptionOutcome(rsp);
        else
            return StartAITranscriptionOutcome(o.GetError());
    }
    else
    {
        return StartAITranscriptionOutcome(outcome.GetError());
    }
}

void TrtcClient::StartAITranscriptionAsync(const StartAITranscriptionRequest& request, const StartAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartAITranscriptionRequest&;
    using Resp = StartAITranscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "StartAITranscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartAITranscriptionOutcomeCallable TrtcClient::StartAITranscriptionCallable(const StartAITranscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartAITranscriptionOutcome>>();
    StartAITranscriptionAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartAITranscriptionRequest&,
        StartAITranscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartMCUMixTranscodeOutcome TrtcClient::StartMCUMixTranscode(const StartMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeResponse rsp = StartMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeOutcome(rsp);
        else
            return StartMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeAsync(const StartMCUMixTranscodeRequest& request, const StartMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMCUMixTranscodeRequest&;
    using Resp = StartMCUMixTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "StartMCUMixTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartMCUMixTranscodeOutcomeCallable TrtcClient::StartMCUMixTranscodeCallable(const StartMCUMixTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMCUMixTranscodeOutcome>>();
    StartMCUMixTranscodeAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartMCUMixTranscodeRequest&,
        StartMCUMixTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StartMCUMixTranscodeByStrRoomId(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StartMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMCUMixTranscodeByStrRoomIdResponse rsp = StartMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StartMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StartMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StartMCUMixTranscodeByStrRoomIdAsync(const StartMCUMixTranscodeByStrRoomIdRequest& request, const StartMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMCUMixTranscodeByStrRoomIdRequest&;
    using Resp = StartMCUMixTranscodeByStrRoomIdResponse;

    DoRequestAsync<Req, Resp>(
        "StartMCUMixTranscodeByStrRoomId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StartMCUMixTranscodeByStrRoomIdCallable(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMCUMixTranscodeByStrRoomIdOutcome>>();
    StartMCUMixTranscodeByStrRoomIdAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartMCUMixTranscodeByStrRoomIdRequest&,
        StartMCUMixTranscodeByStrRoomIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartPublishCdnStreamOutcome TrtcClient::StartPublishCdnStream(const StartPublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StartPublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartPublishCdnStreamResponse rsp = StartPublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartPublishCdnStreamOutcome(rsp);
        else
            return StartPublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return StartPublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::StartPublishCdnStreamAsync(const StartPublishCdnStreamRequest& request, const StartPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartPublishCdnStreamRequest&;
    using Resp = StartPublishCdnStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StartPublishCdnStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartPublishCdnStreamOutcomeCallable TrtcClient::StartPublishCdnStreamCallable(const StartPublishCdnStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartPublishCdnStreamOutcome>>();
    StartPublishCdnStreamAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartPublishCdnStreamRequest&,
        StartPublishCdnStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartStreamIngestOutcome TrtcClient::StartStreamIngest(const StartStreamIngestRequest &request)
{
    auto outcome = MakeRequest(request, "StartStreamIngest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartStreamIngestResponse rsp = StartStreamIngestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartStreamIngestOutcome(rsp);
        else
            return StartStreamIngestOutcome(o.GetError());
    }
    else
    {
        return StartStreamIngestOutcome(outcome.GetError());
    }
}

void TrtcClient::StartStreamIngestAsync(const StartStreamIngestRequest& request, const StartStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartStreamIngestRequest&;
    using Resp = StartStreamIngestResponse;

    DoRequestAsync<Req, Resp>(
        "StartStreamIngest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartStreamIngestOutcomeCallable TrtcClient::StartStreamIngestCallable(const StartStreamIngestRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartStreamIngestOutcome>>();
    StartStreamIngestAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartStreamIngestRequest&,
        StartStreamIngestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StartWebRecordOutcome TrtcClient::StartWebRecord(const StartWebRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartWebRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartWebRecordResponse rsp = StartWebRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartWebRecordOutcome(rsp);
        else
            return StartWebRecordOutcome(o.GetError());
    }
    else
    {
        return StartWebRecordOutcome(outcome.GetError());
    }
}

void TrtcClient::StartWebRecordAsync(const StartWebRecordRequest& request, const StartWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartWebRecordRequest&;
    using Resp = StartWebRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StartWebRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StartWebRecordOutcomeCallable TrtcClient::StartWebRecordCallable(const StartWebRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartWebRecordOutcome>>();
    StartWebRecordAsync(
    request,
    [prom](
        const TrtcClient*,
        const StartWebRecordRequest&,
        StartWebRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopAIConversationOutcome TrtcClient::StopAIConversation(const StopAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "StopAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAIConversationResponse rsp = StopAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAIConversationOutcome(rsp);
        else
            return StopAIConversationOutcome(o.GetError());
    }
    else
    {
        return StopAIConversationOutcome(outcome.GetError());
    }
}

void TrtcClient::StopAIConversationAsync(const StopAIConversationRequest& request, const StopAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAIConversationRequest&;
    using Resp = StopAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "StopAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopAIConversationOutcomeCallable TrtcClient::StopAIConversationCallable(const StopAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAIConversationOutcome>>();
    StopAIConversationAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopAIConversationRequest&,
        StopAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopAITranscriptionOutcome TrtcClient::StopAITranscription(const StopAITranscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "StopAITranscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAITranscriptionResponse rsp = StopAITranscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAITranscriptionOutcome(rsp);
        else
            return StopAITranscriptionOutcome(o.GetError());
    }
    else
    {
        return StopAITranscriptionOutcome(outcome.GetError());
    }
}

void TrtcClient::StopAITranscriptionAsync(const StopAITranscriptionRequest& request, const StopAITranscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAITranscriptionRequest&;
    using Resp = StopAITranscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "StopAITranscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopAITranscriptionOutcomeCallable TrtcClient::StopAITranscriptionCallable(const StopAITranscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAITranscriptionOutcome>>();
    StopAITranscriptionAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopAITranscriptionRequest&,
        StopAITranscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopMCUMixTranscodeOutcome TrtcClient::StopMCUMixTranscode(const StopMCUMixTranscodeRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeResponse rsp = StopMCUMixTranscodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeOutcome(rsp);
        else
            return StopMCUMixTranscodeOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeAsync(const StopMCUMixTranscodeRequest& request, const StopMCUMixTranscodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMCUMixTranscodeRequest&;
    using Resp = StopMCUMixTranscodeResponse;

    DoRequestAsync<Req, Resp>(
        "StopMCUMixTranscode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopMCUMixTranscodeOutcomeCallable TrtcClient::StopMCUMixTranscodeCallable(const StopMCUMixTranscodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMCUMixTranscodeOutcome>>();
    StopMCUMixTranscodeAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopMCUMixTranscodeRequest&,
        StopMCUMixTranscodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcome TrtcClient::StopMCUMixTranscodeByStrRoomId(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto outcome = MakeRequest(request, "StopMCUMixTranscodeByStrRoomId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMCUMixTranscodeByStrRoomIdResponse rsp = StopMCUMixTranscodeByStrRoomIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMCUMixTranscodeByStrRoomIdOutcome(rsp);
        else
            return StopMCUMixTranscodeByStrRoomIdOutcome(o.GetError());
    }
    else
    {
        return StopMCUMixTranscodeByStrRoomIdOutcome(outcome.GetError());
    }
}

void TrtcClient::StopMCUMixTranscodeByStrRoomIdAsync(const StopMCUMixTranscodeByStrRoomIdRequest& request, const StopMCUMixTranscodeByStrRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMCUMixTranscodeByStrRoomIdRequest&;
    using Resp = StopMCUMixTranscodeByStrRoomIdResponse;

    DoRequestAsync<Req, Resp>(
        "StopMCUMixTranscodeByStrRoomId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StopMCUMixTranscodeByStrRoomIdCallable(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMCUMixTranscodeByStrRoomIdOutcome>>();
    StopMCUMixTranscodeByStrRoomIdAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopMCUMixTranscodeByStrRoomIdRequest&,
        StopMCUMixTranscodeByStrRoomIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopPublishCdnStreamOutcome TrtcClient::StopPublishCdnStream(const StopPublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "StopPublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopPublishCdnStreamResponse rsp = StopPublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopPublishCdnStreamOutcome(rsp);
        else
            return StopPublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return StopPublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::StopPublishCdnStreamAsync(const StopPublishCdnStreamRequest& request, const StopPublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopPublishCdnStreamRequest&;
    using Resp = StopPublishCdnStreamResponse;

    DoRequestAsync<Req, Resp>(
        "StopPublishCdnStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopPublishCdnStreamOutcomeCallable TrtcClient::StopPublishCdnStreamCallable(const StopPublishCdnStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopPublishCdnStreamOutcome>>();
    StopPublishCdnStreamAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopPublishCdnStreamRequest&,
        StopPublishCdnStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopStreamIngestOutcome TrtcClient::StopStreamIngest(const StopStreamIngestRequest &request)
{
    auto outcome = MakeRequest(request, "StopStreamIngest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopStreamIngestResponse rsp = StopStreamIngestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopStreamIngestOutcome(rsp);
        else
            return StopStreamIngestOutcome(o.GetError());
    }
    else
    {
        return StopStreamIngestOutcome(outcome.GetError());
    }
}

void TrtcClient::StopStreamIngestAsync(const StopStreamIngestRequest& request, const StopStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopStreamIngestRequest&;
    using Resp = StopStreamIngestResponse;

    DoRequestAsync<Req, Resp>(
        "StopStreamIngest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopStreamIngestOutcomeCallable TrtcClient::StopStreamIngestCallable(const StopStreamIngestRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopStreamIngestOutcome>>();
    StopStreamIngestAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopStreamIngestRequest&,
        StopStreamIngestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::StopWebRecordOutcome TrtcClient::StopWebRecord(const StopWebRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopWebRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopWebRecordResponse rsp = StopWebRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopWebRecordOutcome(rsp);
        else
            return StopWebRecordOutcome(o.GetError());
    }
    else
    {
        return StopWebRecordOutcome(outcome.GetError());
    }
}

void TrtcClient::StopWebRecordAsync(const StopWebRecordRequest& request, const StopWebRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopWebRecordRequest&;
    using Resp = StopWebRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopWebRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::StopWebRecordOutcomeCallable TrtcClient::StopWebRecordCallable(const StopWebRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopWebRecordOutcome>>();
    StopWebRecordAsync(
    request,
    [prom](
        const TrtcClient*,
        const StopWebRecordRequest&,
        StopWebRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::TextToSpeechOutcome TrtcClient::TextToSpeech(const TextToSpeechRequest &request)
{
    auto outcome = MakeRequest(request, "TextToSpeech");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToSpeechResponse rsp = TextToSpeechResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToSpeechOutcome(rsp);
        else
            return TextToSpeechOutcome(o.GetError());
    }
    else
    {
        return TextToSpeechOutcome(outcome.GetError());
    }
}

void TrtcClient::TextToSpeechAsync(const TextToSpeechRequest& request, const TextToSpeechAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextToSpeechRequest&;
    using Resp = TextToSpeechResponse;

    DoRequestAsync<Req, Resp>(
        "TextToSpeech", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::TextToSpeechOutcomeCallable TrtcClient::TextToSpeechCallable(const TextToSpeechRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToSpeechOutcome>>();
    TextToSpeechAsync(
    request,
    [prom](
        const TrtcClient*,
        const TextToSpeechRequest&,
        TextToSpeechOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::TextToSpeechSSEOutcome TrtcClient::TextToSpeechSSE(const TextToSpeechSSERequest &request)
{
    auto outcome = MakeRequest(request, "TextToSpeechSSE");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToSpeechSSEResponse rsp = TextToSpeechSSEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToSpeechSSEOutcome(rsp);
        else
            return TextToSpeechSSEOutcome(o.GetError());
    }
    else
    {
        return TextToSpeechSSEOutcome(outcome.GetError());
    }
}

void TrtcClient::TextToSpeechSSEAsync(const TextToSpeechSSERequest& request, const TextToSpeechSSEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextToSpeechSSERequest&;
    using Resp = TextToSpeechSSEResponse;

    DoRequestAsync<Req, Resp>(
        "TextToSpeechSSE", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::TextToSpeechSSEOutcomeCallable TrtcClient::TextToSpeechSSECallable(const TextToSpeechSSERequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToSpeechSSEOutcome>>();
    TextToSpeechSSEAsync(
    request,
    [prom](
        const TrtcClient*,
        const TextToSpeechSSERequest&,
        TextToSpeechSSEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::UpdateAIConversationOutcome TrtcClient::UpdateAIConversation(const UpdateAIConversationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAIConversation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAIConversationResponse rsp = UpdateAIConversationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAIConversationOutcome(rsp);
        else
            return UpdateAIConversationOutcome(o.GetError());
    }
    else
    {
        return UpdateAIConversationOutcome(outcome.GetError());
    }
}

void TrtcClient::UpdateAIConversationAsync(const UpdateAIConversationRequest& request, const UpdateAIConversationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAIConversationRequest&;
    using Resp = UpdateAIConversationResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAIConversation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::UpdateAIConversationOutcomeCallable TrtcClient::UpdateAIConversationCallable(const UpdateAIConversationRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAIConversationOutcome>>();
    UpdateAIConversationAsync(
    request,
    [prom](
        const TrtcClient*,
        const UpdateAIConversationRequest&,
        UpdateAIConversationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::UpdatePublishCdnStreamOutcome TrtcClient::UpdatePublishCdnStream(const UpdatePublishCdnStreamRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePublishCdnStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePublishCdnStreamResponse rsp = UpdatePublishCdnStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePublishCdnStreamOutcome(rsp);
        else
            return UpdatePublishCdnStreamOutcome(o.GetError());
    }
    else
    {
        return UpdatePublishCdnStreamOutcome(outcome.GetError());
    }
}

void TrtcClient::UpdatePublishCdnStreamAsync(const UpdatePublishCdnStreamRequest& request, const UpdatePublishCdnStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePublishCdnStreamRequest&;
    using Resp = UpdatePublishCdnStreamResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePublishCdnStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::UpdatePublishCdnStreamOutcomeCallable TrtcClient::UpdatePublishCdnStreamCallable(const UpdatePublishCdnStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePublishCdnStreamOutcome>>();
    UpdatePublishCdnStreamAsync(
    request,
    [prom](
        const TrtcClient*,
        const UpdatePublishCdnStreamRequest&,
        UpdatePublishCdnStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::UpdateStreamIngestOutcome TrtcClient::UpdateStreamIngest(const UpdateStreamIngestRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateStreamIngest");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateStreamIngestResponse rsp = UpdateStreamIngestResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateStreamIngestOutcome(rsp);
        else
            return UpdateStreamIngestOutcome(o.GetError());
    }
    else
    {
        return UpdateStreamIngestOutcome(outcome.GetError());
    }
}

void TrtcClient::UpdateStreamIngestAsync(const UpdateStreamIngestRequest& request, const UpdateStreamIngestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateStreamIngestRequest&;
    using Resp = UpdateStreamIngestResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateStreamIngest", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::UpdateStreamIngestOutcomeCallable TrtcClient::UpdateStreamIngestCallable(const UpdateStreamIngestRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateStreamIngestOutcome>>();
    UpdateStreamIngestAsync(
    request,
    [prom](
        const TrtcClient*,
        const UpdateStreamIngestRequest&,
        UpdateStreamIngestOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::UpdateVoicePrintOutcome TrtcClient::UpdateVoicePrint(const UpdateVoicePrintRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateVoicePrint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateVoicePrintResponse rsp = UpdateVoicePrintResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateVoicePrintOutcome(rsp);
        else
            return UpdateVoicePrintOutcome(o.GetError());
    }
    else
    {
        return UpdateVoicePrintOutcome(outcome.GetError());
    }
}

void TrtcClient::UpdateVoicePrintAsync(const UpdateVoicePrintRequest& request, const UpdateVoicePrintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateVoicePrintRequest&;
    using Resp = UpdateVoicePrintResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateVoicePrint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::UpdateVoicePrintOutcomeCallable TrtcClient::UpdateVoicePrintCallable(const UpdateVoicePrintRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateVoicePrintOutcome>>();
    UpdateVoicePrintAsync(
    request,
    [prom](
        const TrtcClient*,
        const UpdateVoicePrintRequest&,
        UpdateVoicePrintOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TrtcClient::VoiceCloneOutcome TrtcClient::VoiceClone(const VoiceCloneRequest &request)
{
    auto outcome = MakeRequest(request, "VoiceClone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoiceCloneResponse rsp = VoiceCloneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoiceCloneOutcome(rsp);
        else
            return VoiceCloneOutcome(o.GetError());
    }
    else
    {
        return VoiceCloneOutcome(outcome.GetError());
    }
}

void TrtcClient::VoiceCloneAsync(const VoiceCloneRequest& request, const VoiceCloneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VoiceCloneRequest&;
    using Resp = VoiceCloneResponse;

    DoRequestAsync<Req, Resp>(
        "VoiceClone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrtcClient::VoiceCloneOutcomeCallable TrtcClient::VoiceCloneCallable(const VoiceCloneRequest &request)
{
    const auto prom = std::make_shared<std::promise<VoiceCloneOutcome>>();
    VoiceCloneAsync(
    request,
    [prom](
        const TrtcClient*,
        const VoiceCloneRequest&,
        VoiceCloneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

