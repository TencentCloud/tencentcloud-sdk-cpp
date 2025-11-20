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
    using Req = const ChatRequest&;
    using Resp = ChatResponse;

    DoRequestAsync<Req, Resp>(
        "Chat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AaiClient::ChatOutcomeCallable AaiClient::ChatCallable(const ChatRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatOutcome>>();
    ChatAsync(
    request,
    [prom](
        const AaiClient*,
        const ChatRequest&,
        ChatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SentenceRecognitionRequest&;
    using Resp = SentenceRecognitionResponse;

    DoRequestAsync<Req, Resp>(
        "SentenceRecognition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AaiClient::SentenceRecognitionOutcomeCallable AaiClient::SentenceRecognitionCallable(const SentenceRecognitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SentenceRecognitionOutcome>>();
    SentenceRecognitionAsync(
    request,
    [prom](
        const AaiClient*,
        const SentenceRecognitionRequest&,
        SentenceRecognitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const SimultaneousInterpretingRequest&;
    using Resp = SimultaneousInterpretingResponse;

    DoRequestAsync<Req, Resp>(
        "SimultaneousInterpreting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AaiClient::SimultaneousInterpretingOutcomeCallable AaiClient::SimultaneousInterpretingCallable(const SimultaneousInterpretingRequest &request)
{
    const auto prom = std::make_shared<std::promise<SimultaneousInterpretingOutcome>>();
    SimultaneousInterpretingAsync(
    request,
    [prom](
        const AaiClient*,
        const SimultaneousInterpretingRequest&,
        SimultaneousInterpretingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const TextToVoiceRequest&;
    using Resp = TextToVoiceResponse;

    DoRequestAsync<Req, Resp>(
        "TextToVoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AaiClient::TextToVoiceOutcomeCallable AaiClient::TextToVoiceCallable(const TextToVoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToVoiceOutcome>>();
    TextToVoiceAsync(
    request,
    [prom](
        const AaiClient*,
        const TextToVoiceRequest&,
        TextToVoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

