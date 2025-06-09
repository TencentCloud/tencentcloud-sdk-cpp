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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ControlAIConversation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ControlAIConversationOutcomeCallable TrtcClient::ControlAIConversationCallable(const ControlAIConversationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ControlAIConversationOutcome()>>(
        [this, request]()
        {
            return this->ControlAIConversation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBasicModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateBasicModerationOutcomeCallable TrtcClient::CreateBasicModerationCallable(const CreateBasicModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBasicModerationOutcome()>>(
        [this, request]()
        {
            return this->CreateBasicModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreateCloudRecordingOutcomeCallable TrtcClient::CreateCloudRecordingCallable(const CreateCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::CreatePictureOutcomeCallable TrtcClient::CreatePictureCallable(const CreatePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePictureOutcome()>>(
        [this, request]()
        {
            return this->CreatePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBasicModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteBasicModerationOutcomeCallable TrtcClient::DeleteBasicModerationCallable(const DeleteBasicModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBasicModerationOutcome()>>(
        [this, request]()
        {
            return this->DeleteBasicModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteCloudRecordingOutcomeCallable TrtcClient::DeleteCloudRecordingCallable(const DeleteCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DeleteCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeletePictureOutcomeCallable TrtcClient::DeletePictureCallable(const DeletePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePictureOutcome()>>(
        [this, request]()
        {
            return this->DeletePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteVoicePrint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DeleteVoicePrintOutcomeCallable TrtcClient::DeleteVoicePrintCallable(const DeleteVoicePrintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteVoicePrintOutcome()>>(
        [this, request]()
        {
            return this->DeleteVoicePrint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAIConversation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeAIConversationOutcomeCallable TrtcClient::DescribeAIConversationCallable(const DescribeAIConversationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAIConversationOutcome()>>(
        [this, request]()
        {
            return this->DescribeAIConversation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAITranscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeAITranscriptionOutcomeCallable TrtcClient::DescribeAITranscriptionCallable(const DescribeAITranscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAITranscriptionOutcome()>>(
        [this, request]()
        {
            return this->DescribeAITranscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCallDetailInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCallDetailInfoOutcomeCallable TrtcClient::DescribeCallDetailInfoCallable(const DescribeCallDetailInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCallDetailInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCallDetailInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeCloudRecordingOutcomeCallable TrtcClient::DescribeCloudRecordingCallable(const DescribeCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->DescribeCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMixTranscodingUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeMixTranscodingUsageOutcomeCallable TrtcClient::DescribeMixTranscodingUsageCallable(const DescribeMixTranscodingUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMixTranscodingUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeMixTranscodingUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribePictureOutcomeCallable TrtcClient::DescribePictureCallable(const DescribePictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePictureOutcome()>>(
        [this, request]()
        {
            return this->DescribePicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRecordStatisticOutcomeCallable TrtcClient::DescribeRecordStatisticCallable(const DescribeRecordStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordingUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRecordingUsageOutcomeCallable TrtcClient::DescribeRecordingUsageCallable(const DescribeRecordingUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordingUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordingUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelayUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRelayUsageOutcomeCallable TrtcClient::DescribeRelayUsageCallable(const DescribeRelayUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelayUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelayUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeRoomInfoOutcomeCallable TrtcClient::DescribeRoomInfoCallable(const DescribeRoomInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScaleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeScaleInfoOutcomeCallable TrtcClient::DescribeScaleInfoCallable(const DescribeScaleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScaleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeScaleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStreamIngest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeStreamIngestOutcomeCallable TrtcClient::DescribeStreamIngestCallable(const DescribeStreamIngestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStreamIngestOutcome()>>(
        [this, request]()
        {
            return this->DescribeStreamIngest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCMarketQualityData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCMarketQualityDataOutcomeCallable TrtcClient::DescribeTRTCMarketQualityDataCallable(const DescribeTRTCMarketQualityDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCMarketQualityDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCMarketQualityData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTRTCMarketQualityMetricDataOutcome TrtcClient::DescribeTRTCMarketQualityMetricData(const DescribeTRTCMarketQualityMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCMarketQualityMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCMarketQualityMetricDataResponse rsp = DescribeTRTCMarketQualityMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCMarketQualityMetricDataOutcome(rsp);
        else
            return DescribeTRTCMarketQualityMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCMarketQualityMetricDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCMarketQualityMetricDataAsync(const DescribeTRTCMarketQualityMetricDataRequest& request, const DescribeTRTCMarketQualityMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCMarketQualityMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCMarketQualityMetricDataOutcomeCallable TrtcClient::DescribeTRTCMarketQualityMetricDataCallable(const DescribeTRTCMarketQualityMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCMarketQualityMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCMarketQualityMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCMarketScaleData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCMarketScaleDataOutcomeCallable TrtcClient::DescribeTRTCMarketScaleDataCallable(const DescribeTRTCMarketScaleDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCMarketScaleDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCMarketScaleData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCMarketScaleMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCMarketScaleMetricDataOutcomeCallable TrtcClient::DescribeTRTCMarketScaleMetricDataCallable(const DescribeTRTCMarketScaleMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCMarketScaleMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCMarketScaleMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCRealTimeQualityData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCRealTimeQualityDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeQualityDataCallable(const DescribeTRTCRealTimeQualityDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCRealTimeQualityDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCRealTimeQualityData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTRTCRealTimeQualityMetricDataOutcome TrtcClient::DescribeTRTCRealTimeQualityMetricData(const DescribeTRTCRealTimeQualityMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCRealTimeQualityMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCRealTimeQualityMetricDataResponse rsp = DescribeTRTCRealTimeQualityMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCRealTimeQualityMetricDataOutcome(rsp);
        else
            return DescribeTRTCRealTimeQualityMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCRealTimeQualityMetricDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCRealTimeQualityMetricDataAsync(const DescribeTRTCRealTimeQualityMetricDataRequest& request, const DescribeTRTCRealTimeQualityMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCRealTimeQualityMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCRealTimeQualityMetricDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeQualityMetricDataCallable(const DescribeTRTCRealTimeQualityMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCRealTimeQualityMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCRealTimeQualityMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCRealTimeScaleData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCRealTimeScaleDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeScaleDataCallable(const DescribeTRTCRealTimeScaleDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCRealTimeScaleDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCRealTimeScaleData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrtcClient::DescribeTRTCRealTimeScaleMetricDataOutcome TrtcClient::DescribeTRTCRealTimeScaleMetricData(const DescribeTRTCRealTimeScaleMetricDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTRTCRealTimeScaleMetricData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTRTCRealTimeScaleMetricDataResponse rsp = DescribeTRTCRealTimeScaleMetricDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTRTCRealTimeScaleMetricDataOutcome(rsp);
        else
            return DescribeTRTCRealTimeScaleMetricDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTRTCRealTimeScaleMetricDataOutcome(outcome.GetError());
    }
}

void TrtcClient::DescribeTRTCRealTimeScaleMetricDataAsync(const DescribeTRTCRealTimeScaleMetricDataRequest& request, const DescribeTRTCRealTimeScaleMetricDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTRTCRealTimeScaleMetricData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTRTCRealTimeScaleMetricDataOutcomeCallable TrtcClient::DescribeTRTCRealTimeScaleMetricDataCallable(const DescribeTRTCRealTimeScaleMetricDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTRTCRealTimeScaleMetricDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTRTCRealTimeScaleMetricData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcMcuTranscodeTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcMcuTranscodeTimeOutcomeCallable TrtcClient::DescribeTrtcMcuTranscodeTimeCallable(const DescribeTrtcMcuTranscodeTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcMcuTranscodeTimeOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcMcuTranscodeTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcRoomUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcRoomUsageOutcomeCallable TrtcClient::DescribeTrtcRoomUsageCallable(const DescribeTrtcRoomUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcRoomUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcRoomUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrtcUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeTrtcUsageOutcomeCallable TrtcClient::DescribeTrtcUsageCallable(const DescribeTrtcUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrtcUsageOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrtcUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnusualEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUnusualEventOutcomeCallable TrtcClient::DescribeUnusualEventCallable(const DescribeUnusualEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnusualEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnusualEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUserEventOutcomeCallable TrtcClient::DescribeUserEventCallable(const DescribeUserEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeUserInfoOutcomeCallable TrtcClient::DescribeUserInfoCallable(const DescribeUserInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVoicePrint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeVoicePrintOutcomeCallable TrtcClient::DescribeVoicePrintCallable(const DescribeVoicePrintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVoicePrintOutcome()>>(
        [this, request]()
        {
            return this->DescribeVoicePrint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWebRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DescribeWebRecordOutcomeCallable TrtcClient::DescribeWebRecordCallable(const DescribeWebRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWebRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeWebRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomOutcomeCallable TrtcClient::DismissRoomCallable(const DismissRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomOutcome()>>(
        [this, request]()
        {
            return this->DismissRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismissRoomByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::DismissRoomByStrRoomIdOutcomeCallable TrtcClient::DismissRoomByStrRoomIdCallable(const DismissRoomByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismissRoomByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->DismissRoomByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCloudRecording(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyCloudRecordingOutcomeCallable TrtcClient::ModifyCloudRecordingCallable(const ModifyCloudRecordingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCloudRecordingOutcome()>>(
        [this, request]()
        {
            return this->ModifyCloudRecording(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPicture(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::ModifyPictureOutcomeCallable TrtcClient::ModifyPictureCallable(const ModifyPictureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPictureOutcome()>>(
        [this, request]()
        {
            return this->ModifyPicture(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterVoicePrint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RegisterVoicePrintOutcomeCallable TrtcClient::RegisterVoicePrintCallable(const RegisterVoicePrintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterVoicePrintOutcome()>>(
        [this, request]()
        {
            return this->RegisterVoicePrint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserOutcomeCallable TrtcClient::RemoveUserCallable(const RemoveUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserOutcome()>>(
        [this, request]()
        {
            return this->RemoveUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::RemoveUserByStrRoomIdOutcomeCallable TrtcClient::RemoveUserByStrRoomIdCallable(const RemoveUserByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAIConversation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartAIConversationOutcomeCallable TrtcClient::StartAIConversationCallable(const StartAIConversationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAIConversationOutcome()>>(
        [this, request]()
        {
            return this->StartAIConversation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAITranscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartAITranscriptionOutcomeCallable TrtcClient::StartAITranscriptionCallable(const StartAITranscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAITranscriptionOutcome()>>(
        [this, request]()
        {
            return this->StartAITranscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeOutcomeCallable TrtcClient::StartMCUMixTranscodeCallable(const StartMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StartMCUMixTranscodeByStrRoomIdCallable(const StartMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StartMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartPublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartPublishCdnStreamOutcomeCallable TrtcClient::StartPublishCdnStreamCallable(const StartPublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartPublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->StartPublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartStreamIngest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartStreamIngestOutcomeCallable TrtcClient::StartStreamIngestCallable(const StartStreamIngestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartStreamIngestOutcome()>>(
        [this, request]()
        {
            return this->StartStreamIngest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartWebRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StartWebRecordOutcomeCallable TrtcClient::StartWebRecordCallable(const StartWebRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartWebRecordOutcome()>>(
        [this, request]()
        {
            return this->StartWebRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAIConversation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopAIConversationOutcomeCallable TrtcClient::StopAIConversationCallable(const StopAIConversationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAIConversationOutcome()>>(
        [this, request]()
        {
            return this->StopAIConversation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopAITranscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopAITranscriptionOutcomeCallable TrtcClient::StopAITranscriptionCallable(const StopAITranscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopAITranscriptionOutcome()>>(
        [this, request]()
        {
            return this->StopAITranscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeOutcomeCallable TrtcClient::StopMCUMixTranscodeCallable(const StopMCUMixTranscodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopMCUMixTranscodeByStrRoomId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopMCUMixTranscodeByStrRoomIdOutcomeCallable TrtcClient::StopMCUMixTranscodeByStrRoomIdCallable(const StopMCUMixTranscodeByStrRoomIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopMCUMixTranscodeByStrRoomIdOutcome()>>(
        [this, request]()
        {
            return this->StopMCUMixTranscodeByStrRoomId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopPublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopPublishCdnStreamOutcomeCallable TrtcClient::StopPublishCdnStreamCallable(const StopPublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopPublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->StopPublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopStreamIngest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopStreamIngestOutcomeCallable TrtcClient::StopStreamIngestCallable(const StopStreamIngestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopStreamIngestOutcome()>>(
        [this, request]()
        {
            return this->StopStreamIngest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopWebRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::StopWebRecordOutcomeCallable TrtcClient::StopWebRecordCallable(const StopWebRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopWebRecordOutcome()>>(
        [this, request]()
        {
            return this->StopWebRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAIConversation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::UpdateAIConversationOutcomeCallable TrtcClient::UpdateAIConversationCallable(const UpdateAIConversationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAIConversationOutcome()>>(
        [this, request]()
        {
            return this->UpdateAIConversation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePublishCdnStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::UpdatePublishCdnStreamOutcomeCallable TrtcClient::UpdatePublishCdnStreamCallable(const UpdatePublishCdnStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePublishCdnStreamOutcome()>>(
        [this, request]()
        {
            return this->UpdatePublishCdnStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateStreamIngest(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::UpdateStreamIngestOutcomeCallable TrtcClient::UpdateStreamIngestCallable(const UpdateStreamIngestRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateStreamIngestOutcome()>>(
        [this, request]()
        {
            return this->UpdateStreamIngest(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateVoicePrint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrtcClient::UpdateVoicePrintOutcomeCallable TrtcClient::UpdateVoicePrintCallable(const UpdateVoicePrintRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateVoicePrintOutcome()>>(
        [this, request]()
        {
            return this->UpdateVoicePrint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

