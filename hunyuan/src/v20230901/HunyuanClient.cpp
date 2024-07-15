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

#include <tencentcloud/hunyuan/v20230901/HunyuanClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hunyuan::V20230901;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-09-01";
    const string ENDPOINT = "hunyuan.tencentcloudapi.com";
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region) :
    HunyuanClient(credential, region, ClientProfile())
{
}

HunyuanClient::HunyuanClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HunyuanClient::ChatCompletionsOutcome HunyuanClient::ChatCompletions(const ChatCompletionsRequest &request)
{
    auto outcome = MakeRequest(request, "ChatCompletions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatCompletionsResponse rsp = ChatCompletionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatCompletionsOutcome(rsp);
        else
            return ChatCompletionsOutcome(o.GetError());
    }
    else
    {
        return ChatCompletionsOutcome(outcome.GetError());
    }
}

void HunyuanClient::ChatCompletionsAsync(const ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatCompletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::ChatCompletionsOutcomeCallable HunyuanClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatCompletionsOutcome()>>(
        [this, request]()
        {
            return this->ChatCompletions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::GetEmbeddingOutcome HunyuanClient::GetEmbedding(const GetEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "GetEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetEmbeddingResponse rsp = GetEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetEmbeddingOutcome(rsp);
        else
            return GetEmbeddingOutcome(o.GetError());
    }
    else
    {
        return GetEmbeddingOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetEmbeddingOutcomeCallable HunyuanClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->GetEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::GetTokenCountOutcome HunyuanClient::GetTokenCount(const GetTokenCountRequest &request)
{
    auto outcome = MakeRequest(request, "GetTokenCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTokenCountResponse rsp = GetTokenCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTokenCountOutcome(rsp);
        else
            return GetTokenCountOutcome(o.GetError());
    }
    else
    {
        return GetTokenCountOutcome(outcome.GetError());
    }
}

void HunyuanClient::GetTokenCountAsync(const GetTokenCountRequest& request, const GetTokenCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTokenCount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::GetTokenCountOutcomeCallable HunyuanClient::GetTokenCountCallable(const GetTokenCountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTokenCountOutcome()>>(
        [this, request]()
        {
            return this->GetTokenCount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::QueryHunyuanImageJobOutcome HunyuanClient::QueryHunyuanImageJob(const QueryHunyuanImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "QueryHunyuanImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryHunyuanImageJobResponse rsp = QueryHunyuanImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryHunyuanImageJobOutcome(rsp);
        else
            return QueryHunyuanImageJobOutcome(o.GetError());
    }
    else
    {
        return QueryHunyuanImageJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::QueryHunyuanImageJobAsync(const QueryHunyuanImageJobRequest& request, const QueryHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryHunyuanImageJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::QueryHunyuanImageJobOutcomeCallable HunyuanClient::QueryHunyuanImageJobCallable(const QueryHunyuanImageJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryHunyuanImageJobOutcome()>>(
        [this, request]()
        {
            return this->QueryHunyuanImageJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::SubmitHunyuanImageJobOutcome HunyuanClient::SubmitHunyuanImageJob(const SubmitHunyuanImageJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitHunyuanImageJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitHunyuanImageJobResponse rsp = SubmitHunyuanImageJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitHunyuanImageJobOutcome(rsp);
        else
            return SubmitHunyuanImageJobOutcome(o.GetError());
    }
    else
    {
        return SubmitHunyuanImageJobOutcome(outcome.GetError());
    }
}

void HunyuanClient::SubmitHunyuanImageJobAsync(const SubmitHunyuanImageJobRequest& request, const SubmitHunyuanImageJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitHunyuanImageJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::SubmitHunyuanImageJobOutcomeCallable HunyuanClient::SubmitHunyuanImageJobCallable(const SubmitHunyuanImageJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitHunyuanImageJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitHunyuanImageJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HunyuanClient::TextToImageLiteOutcome HunyuanClient::TextToImageLite(const TextToImageLiteRequest &request)
{
    auto outcome = MakeRequest(request, "TextToImageLite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextToImageLiteResponse rsp = TextToImageLiteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextToImageLiteOutcome(rsp);
        else
            return TextToImageLiteOutcome(o.GetError());
    }
    else
    {
        return TextToImageLiteOutcome(outcome.GetError());
    }
}

void HunyuanClient::TextToImageLiteAsync(const TextToImageLiteRequest& request, const TextToImageLiteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextToImageLite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HunyuanClient::TextToImageLiteOutcomeCallable HunyuanClient::TextToImageLiteCallable(const TextToImageLiteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextToImageLiteOutcome()>>(
        [this, request]()
        {
            return this->TextToImageLite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

