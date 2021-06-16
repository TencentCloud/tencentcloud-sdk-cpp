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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTtsTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TtsClient::CreateTtsTaskOutcomeCallable TtsClient::CreateTtsTaskCallable(const CreateTtsTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTtsTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTtsTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTtsTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TtsClient::DescribeTtsTaskStatusOutcomeCallable TtsClient::DescribeTtsTaskStatusCallable(const DescribeTtsTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTtsTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTtsTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToVoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TtsClient::TextToVoiceOutcomeCallable TtsClient::TextToVoiceCallable(const TextToVoiceRequest &request)
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

