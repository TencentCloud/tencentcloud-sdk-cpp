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

#include <tencentcloud/tms/v20201229/TmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tms::V20201229;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-29";
    const string ENDPOINT = "tms.tencentcloudapi.com";
}

TmsClient::TmsClient(const Credential &credential, const string &region) :
    TmsClient(credential, region, ClientProfile())
{
}

TmsClient::TmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TmsClient::AnswerQuestionOutcome TmsClient::AnswerQuestion(const AnswerQuestionRequest &request)
{
    auto outcome = MakeRequest(request, "AnswerQuestion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnswerQuestionResponse rsp = AnswerQuestionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnswerQuestionOutcome(rsp);
        else
            return AnswerQuestionOutcome(o.GetError());
    }
    else
    {
        return AnswerQuestionOutcome(outcome.GetError());
    }
}

void TmsClient::AnswerQuestionAsync(const AnswerQuestionRequest& request, const AnswerQuestionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AnswerQuestion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmsClient::AnswerQuestionOutcomeCallable TmsClient::AnswerQuestionCallable(const AnswerQuestionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AnswerQuestionOutcome()>>(
        [this, request]()
        {
            return this->AnswerQuestion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TmsClient::ModerateTextOutcome TmsClient::ModerateText(const ModerateTextRequest &request)
{
    auto outcome = MakeRequest(request, "ModerateText");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModerateTextResponse rsp = ModerateTextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModerateTextOutcome(rsp);
        else
            return ModerateTextOutcome(o.GetError());
    }
    else
    {
        return ModerateTextOutcome(outcome.GetError());
    }
}

void TmsClient::ModerateTextAsync(const ModerateTextRequest& request, const ModerateTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModerateText(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmsClient::ModerateTextOutcomeCallable TmsClient::ModerateTextCallable(const ModerateTextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModerateTextOutcome()>>(
        [this, request]()
        {
            return this->ModerateText(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TmsClient::TextModerationOutcome TmsClient::TextModeration(const TextModerationRequest &request)
{
    auto outcome = MakeRequest(request, "TextModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextModerationResponse rsp = TextModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextModerationOutcome(rsp);
        else
            return TextModerationOutcome(o.GetError());
    }
    else
    {
        return TextModerationOutcome(outcome.GetError());
    }
}

void TmsClient::TextModerationAsync(const TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextModeration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TmsClient::TextModerationOutcomeCallable TmsClient::TextModerationCallable(const TextModerationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextModerationOutcome()>>(
        [this, request]()
        {
            return this->TextModeration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

