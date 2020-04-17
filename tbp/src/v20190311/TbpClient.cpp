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

#include <tencentcloud/tbp/v20190311/TbpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbp::V20190311;
using namespace TencentCloud::Tbp::V20190311::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-11";
    const string ENDPOINT = "tbp.tencentcloudapi.com";
}

TbpClient::TbpClient(const Credential &credential, const string &region) :
    TbpClient(credential, region, ClientProfile())
{
}

TbpClient::TbpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbpClient::CreateBotOutcome TbpClient::CreateBot(const CreateBotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBotResponse rsp = CreateBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBotOutcome(rsp);
        else
            return CreateBotOutcome(o.GetError());
    }
    else
    {
        return CreateBotOutcome(outcome.GetError());
    }
}

void TbpClient::CreateBotAsync(const CreateBotRequest& request, const CreateBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::CreateBotOutcomeCallable TbpClient::CreateBotCallable(const CreateBotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBotOutcome()>>(
        [this, request]()
        {
            return this->CreateBot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbpClient::ResetOutcome TbpClient::Reset(const ResetRequest &request)
{
    auto outcome = MakeRequest(request, "Reset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetResponse rsp = ResetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetOutcome(rsp);
        else
            return ResetOutcome(o.GetError());
    }
    else
    {
        return ResetOutcome(outcome.GetError());
    }
}

void TbpClient::ResetAsync(const ResetRequest& request, const ResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Reset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::ResetOutcomeCallable TbpClient::ResetCallable(const ResetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetOutcome()>>(
        [this, request]()
        {
            return this->Reset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbpClient::TextProcessOutcome TbpClient::TextProcess(const TextProcessRequest &request)
{
    auto outcome = MakeRequest(request, "TextProcess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextProcessResponse rsp = TextProcessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextProcessOutcome(rsp);
        else
            return TextProcessOutcome(o.GetError());
    }
    else
    {
        return TextProcessOutcome(outcome.GetError());
    }
}

void TbpClient::TextProcessAsync(const TextProcessRequest& request, const TextProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextProcess(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::TextProcessOutcomeCallable TbpClient::TextProcessCallable(const TextProcessRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextProcessOutcome()>>(
        [this, request]()
        {
            return this->TextProcess(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TbpClient::TextResetOutcome TbpClient::TextReset(const TextResetRequest &request)
{
    auto outcome = MakeRequest(request, "TextReset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextResetResponse rsp = TextResetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextResetOutcome(rsp);
        else
            return TextResetOutcome(o.GetError());
    }
    else
    {
        return TextResetOutcome(outcome.GetError());
    }
}

void TbpClient::TextResetAsync(const TextResetRequest& request, const TextResetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextReset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TbpClient::TextResetOutcomeCallable TbpClient::TextResetCallable(const TextResetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextResetOutcome()>>(
        [this, request]()
        {
            return this->TextReset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

