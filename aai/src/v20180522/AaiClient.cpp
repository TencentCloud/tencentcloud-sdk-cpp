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

#include <tencentcloud/aai/v20180522/AaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Aai::V20180522;
using namespace TencentCloud::Aai::V20180522::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-05-22";
    const string ENDPOINT = "aai.tencentcloudapi.com";
}

AaiClient::AaiClient(const Credential &credential, const string &region) :
    AaiClient(credential, region, ClientProfile())
{
}

AaiClient::AaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AaiClient::ChatOutcome AaiClient::Chat(const ChatRequest &request)
{
    auto outcome = MakeRequest(request, "Chat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatResponse rsp = ChatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatOutcome(rsp);
        else
            return ChatOutcome(o.GetError());
    }
    else
    {
        return ChatOutcome(outcome.GetError());
    }
}

void AaiClient::ChatAsync(const ChatRequest& request, const ChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Chat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaiClient::ChatOutcomeCallable AaiClient::ChatCallable(const ChatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatOutcome()>>(
        [this, request]()
        {
            return this->Chat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AaiClient::SentenceRecognitionOutcome AaiClient::SentenceRecognition(const SentenceRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceRecognitionResponse rsp = SentenceRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceRecognitionOutcome(rsp);
        else
            return SentenceRecognitionOutcome(o.GetError());
    }
    else
    {
        return SentenceRecognitionOutcome(outcome.GetError());
    }
}

void AaiClient::SentenceRecognitionAsync(const SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentenceRecognition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaiClient::SentenceRecognitionOutcomeCallable AaiClient::SentenceRecognitionCallable(const SentenceRecognitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentenceRecognitionOutcome()>>(
        [this, request]()
        {
            return this->SentenceRecognition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AaiClient::SimultaneousInterpretingOutcome AaiClient::SimultaneousInterpreting(const SimultaneousInterpretingRequest &request)
{
    auto outcome = MakeRequest(request, "SimultaneousInterpreting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SimultaneousInterpretingResponse rsp = SimultaneousInterpretingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SimultaneousInterpretingOutcome(rsp);
        else
            return SimultaneousInterpretingOutcome(o.GetError());
    }
    else
    {
        return SimultaneousInterpretingOutcome(outcome.GetError());
    }
}

void AaiClient::SimultaneousInterpretingAsync(const SimultaneousInterpretingRequest& request, const SimultaneousInterpretingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SimultaneousInterpreting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaiClient::SimultaneousInterpretingOutcomeCallable AaiClient::SimultaneousInterpretingCallable(const SimultaneousInterpretingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SimultaneousInterpretingOutcome()>>(
        [this, request]()
        {
            return this->SimultaneousInterpreting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

AaiClient::TextToVoiceOutcome AaiClient::TextToVoice(const TextToVoiceRequest &request)
{
    auto outcome = MakeRequest(request, "TextToVoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToVoiceResponse rsp = TextToVoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToVoiceOutcome(rsp);
        else
            return TextToVoiceOutcome(o.GetError());
    }
    else
    {
        return TextToVoiceOutcome(outcome.GetError());
    }
}

void AaiClient::TextToVoiceAsync(const TextToVoiceRequest& request, const TextToVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToVoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

AaiClient::TextToVoiceOutcomeCallable AaiClient::TextToVoiceCallable(const TextToVoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToVoiceOutcome()>>(
        [this, request]()
        {
            return this->TextToVoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

