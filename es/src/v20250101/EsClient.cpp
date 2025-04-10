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

#include <tencentcloud/es/v20250101/EsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Es::V20250101;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-01-01";
    const string ENDPOINT = "es.tencentcloudapi.com";
}

EsClient::EsClient(const Credential &credential, const string &region) :
    EsClient(credential, region, ClientProfile())
{
}

EsClient::EsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EsClient::ChatCompletionsOutcome EsClient::ChatCompletions(const ChatCompletionsRequest &request)
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

void EsClient::ChatCompletionsAsync(const ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatCompletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ChatCompletionsOutcomeCallable EsClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
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

EsClient::ChunkDocumentOutcome EsClient::ChunkDocument(const ChunkDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "ChunkDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChunkDocumentResponse rsp = ChunkDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChunkDocumentOutcome(rsp);
        else
            return ChunkDocumentOutcome(o.GetError());
    }
    else
    {
        return ChunkDocumentOutcome(outcome.GetError());
    }
}

void EsClient::ChunkDocumentAsync(const ChunkDocumentRequest& request, const ChunkDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChunkDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ChunkDocumentOutcomeCallable EsClient::ChunkDocumentCallable(const ChunkDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChunkDocumentOutcome()>>(
        [this, request]()
        {
            return this->ChunkDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::ChunkDocumentAsyncOutcome EsClient::ChunkDocumentAsync(const ChunkDocumentAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "ChunkDocumentAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChunkDocumentAsyncResponse rsp = ChunkDocumentAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChunkDocumentAsyncOutcome(rsp);
        else
            return ChunkDocumentAsyncOutcome(o.GetError());
    }
    else
    {
        return ChunkDocumentAsyncOutcome(outcome.GetError());
    }
}

void EsClient::ChunkDocumentAsyncAsync(const ChunkDocumentAsyncRequest& request, const ChunkDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChunkDocumentAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ChunkDocumentAsyncOutcomeCallable EsClient::ChunkDocumentAsyncCallable(const ChunkDocumentAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChunkDocumentAsyncOutcome()>>(
        [this, request]()
        {
            return this->ChunkDocumentAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetDocumentChunkResultOutcome EsClient::GetDocumentChunkResult(const GetDocumentChunkResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetDocumentChunkResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDocumentChunkResultResponse rsp = GetDocumentChunkResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDocumentChunkResultOutcome(rsp);
        else
            return GetDocumentChunkResultOutcome(o.GetError());
    }
    else
    {
        return GetDocumentChunkResultOutcome(outcome.GetError());
    }
}

void EsClient::GetDocumentChunkResultAsync(const GetDocumentChunkResultRequest& request, const GetDocumentChunkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDocumentChunkResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetDocumentChunkResultOutcomeCallable EsClient::GetDocumentChunkResultCallable(const GetDocumentChunkResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDocumentChunkResultOutcome()>>(
        [this, request]()
        {
            return this->GetDocumentChunkResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetDocumentParseResultOutcome EsClient::GetDocumentParseResult(const GetDocumentParseResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetDocumentParseResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDocumentParseResultResponse rsp = GetDocumentParseResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDocumentParseResultOutcome(rsp);
        else
            return GetDocumentParseResultOutcome(o.GetError());
    }
    else
    {
        return GetDocumentParseResultOutcome(outcome.GetError());
    }
}

void EsClient::GetDocumentParseResultAsync(const GetDocumentParseResultRequest& request, const GetDocumentParseResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDocumentParseResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetDocumentParseResultOutcomeCallable EsClient::GetDocumentParseResultCallable(const GetDocumentParseResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDocumentParseResultOutcome()>>(
        [this, request]()
        {
            return this->GetDocumentParseResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::GetTextEmbeddingOutcome EsClient::GetTextEmbedding(const GetTextEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "GetTextEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTextEmbeddingResponse rsp = GetTextEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTextEmbeddingOutcome(rsp);
        else
            return GetTextEmbeddingOutcome(o.GetError());
    }
    else
    {
        return GetTextEmbeddingOutcome(outcome.GetError());
    }
}

void EsClient::GetTextEmbeddingAsync(const GetTextEmbeddingRequest& request, const GetTextEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTextEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::GetTextEmbeddingOutcomeCallable EsClient::GetTextEmbeddingCallable(const GetTextEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTextEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->GetTextEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::ParseDocumentOutcome EsClient::ParseDocument(const ParseDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "ParseDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseDocumentResponse rsp = ParseDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseDocumentOutcome(rsp);
        else
            return ParseDocumentOutcome(o.GetError());
    }
    else
    {
        return ParseDocumentOutcome(outcome.GetError());
    }
}

void EsClient::ParseDocumentAsync(const ParseDocumentRequest& request, const ParseDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ParseDocumentOutcomeCallable EsClient::ParseDocumentCallable(const ParseDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseDocumentOutcome()>>(
        [this, request]()
        {
            return this->ParseDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::ParseDocumentAsyncOutcome EsClient::ParseDocumentAsync(const ParseDocumentAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "ParseDocumentAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseDocumentAsyncResponse rsp = ParseDocumentAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseDocumentAsyncOutcome(rsp);
        else
            return ParseDocumentAsyncOutcome(o.GetError());
    }
    else
    {
        return ParseDocumentAsyncOutcome(outcome.GetError());
    }
}

void EsClient::ParseDocumentAsyncAsync(const ParseDocumentAsyncRequest& request, const ParseDocumentAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseDocumentAsync(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::ParseDocumentAsyncOutcomeCallable EsClient::ParseDocumentAsyncCallable(const ParseDocumentAsyncRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseDocumentAsyncOutcome()>>(
        [this, request]()
        {
            return this->ParseDocumentAsync(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

EsClient::RunRerankOutcome EsClient::RunRerank(const RunRerankRequest &request)
{
    auto outcome = MakeRequest(request, "RunRerank");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunRerankResponse rsp = RunRerankResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunRerankOutcome(rsp);
        else
            return RunRerankOutcome(o.GetError());
    }
    else
    {
        return RunRerankOutcome(outcome.GetError());
    }
}

void EsClient::RunRerankAsync(const RunRerankRequest& request, const RunRerankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunRerank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

EsClient::RunRerankOutcomeCallable EsClient::RunRerankCallable(const RunRerankRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunRerankOutcome()>>(
        [this, request]()
        {
            return this->RunRerank(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

