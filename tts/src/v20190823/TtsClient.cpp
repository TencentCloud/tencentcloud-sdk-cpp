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

#include <tencentcloud/tts/v20190823/TtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tts::V20190823;
using namespace TencentCloud::Tts::V20190823::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-23";
    const string ENDPOINT = "tts.tencentcloudapi.com";
}

TtsClient::TtsClient(const Credential &credential, const string &region) :
    TtsClient(credential, region, ClientProfile())
{
}

TtsClient::TtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TtsClient::CreateTtsTaskOutcome TtsClient::CreateTtsTask(const CreateTtsTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTtsTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTtsTaskResponse rsp = CreateTtsTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTtsTaskOutcome(rsp);
        else
            return CreateTtsTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTtsTaskOutcome(outcome.GetError());
    }
}

void TtsClient::CreateTtsTaskAsync(const CreateTtsTaskRequest& request, const CreateTtsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTtsTaskRequest&;
    using Resp = CreateTtsTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTtsTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TtsClient::CreateTtsTaskOutcomeCallable TtsClient::CreateTtsTaskCallable(const CreateTtsTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTtsTaskOutcome>>();
    CreateTtsTaskAsync(
    request,
    [prom](
        const TtsClient*,
        const CreateTtsTaskRequest&,
        CreateTtsTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TtsClient::DescribeTtsTaskStatusOutcome TtsClient::DescribeTtsTaskStatus(const DescribeTtsTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTtsTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTtsTaskStatusResponse rsp = DescribeTtsTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTtsTaskStatusOutcome(rsp);
        else
            return DescribeTtsTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTtsTaskStatusOutcome(outcome.GetError());
    }
}

void TtsClient::DescribeTtsTaskStatusAsync(const DescribeTtsTaskStatusRequest& request, const DescribeTtsTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTtsTaskStatusRequest&;
    using Resp = DescribeTtsTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTtsTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TtsClient::DescribeTtsTaskStatusOutcomeCallable TtsClient::DescribeTtsTaskStatusCallable(const DescribeTtsTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTtsTaskStatusOutcome>>();
    DescribeTtsTaskStatusAsync(
    request,
    [prom](
        const TtsClient*,
        const DescribeTtsTaskStatusRequest&,
        DescribeTtsTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TtsClient::TextToVoiceOutcome TtsClient::TextToVoice(const TextToVoiceRequest &request)
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

void TtsClient::TextToVoiceAsync(const TextToVoiceRequest& request, const TextToVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TtsClient::TextToVoiceOutcomeCallable TtsClient::TextToVoiceCallable(const TextToVoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextToVoiceOutcome>>();
    TextToVoiceAsync(
    request,
    [prom](
        const TtsClient*,
        const TextToVoiceRequest&,
        TextToVoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

