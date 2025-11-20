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
    using Req = const ChatCompletionsRequest&;
    using Resp = ChatCompletionsResponse;

    DoRequestAsync<Req, Resp>(
        "ChatCompletions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ChatCompletionsOutcomeCallable EsClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatCompletionsOutcome>>();
    ChatCompletionsAsync(
    request,
    [prom](
        const EsClient*,
        const ChatCompletionsRequest&,
        ChatCompletionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ChunkDocumentRequest&;
    using Resp = ChunkDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "ChunkDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ChunkDocumentOutcomeCallable EsClient::ChunkDocumentCallable(const ChunkDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChunkDocumentOutcome>>();
    ChunkDocumentAsync(
    request,
    [prom](
        const EsClient*,
        const ChunkDocumentRequest&,
        ChunkDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ChunkDocumentAsyncRequest&;
    using Resp = ChunkDocumentAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "ChunkDocumentAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ChunkDocumentAsyncOutcomeCallable EsClient::ChunkDocumentAsyncCallable(const ChunkDocumentAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChunkDocumentAsyncOutcome>>();
    ChunkDocumentAsyncAsync(
    request,
    [prom](
        const EsClient*,
        const ChunkDocumentAsyncRequest&,
        ChunkDocumentAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetDocumentChunkResultRequest&;
    using Resp = GetDocumentChunkResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetDocumentChunkResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetDocumentChunkResultOutcomeCallable EsClient::GetDocumentChunkResultCallable(const GetDocumentChunkResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDocumentChunkResultOutcome>>();
    GetDocumentChunkResultAsync(
    request,
    [prom](
        const EsClient*,
        const GetDocumentChunkResultRequest&,
        GetDocumentChunkResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetDocumentParseResultRequest&;
    using Resp = GetDocumentParseResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetDocumentParseResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetDocumentParseResultOutcomeCallable EsClient::GetDocumentParseResultCallable(const GetDocumentParseResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDocumentParseResultOutcome>>();
    GetDocumentParseResultAsync(
    request,
    [prom](
        const EsClient*,
        const GetDocumentParseResultRequest&,
        GetDocumentParseResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::GetMultiModalEmbeddingOutcome EsClient::GetMultiModalEmbedding(const GetMultiModalEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "GetMultiModalEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMultiModalEmbeddingResponse rsp = GetMultiModalEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMultiModalEmbeddingOutcome(rsp);
        else
            return GetMultiModalEmbeddingOutcome(o.GetError());
    }
    else
    {
        return GetMultiModalEmbeddingOutcome(outcome.GetError());
    }
}

void EsClient::GetMultiModalEmbeddingAsync(const GetMultiModalEmbeddingRequest& request, const GetMultiModalEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMultiModalEmbeddingRequest&;
    using Resp = GetMultiModalEmbeddingResponse;

    DoRequestAsync<Req, Resp>(
        "GetMultiModalEmbedding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetMultiModalEmbeddingOutcomeCallable EsClient::GetMultiModalEmbeddingCallable(const GetMultiModalEmbeddingRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMultiModalEmbeddingOutcome>>();
    GetMultiModalEmbeddingAsync(
    request,
    [prom](
        const EsClient*,
        const GetMultiModalEmbeddingRequest&,
        GetMultiModalEmbeddingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const GetTextEmbeddingRequest&;
    using Resp = GetTextEmbeddingResponse;

    DoRequestAsync<Req, Resp>(
        "GetTextEmbedding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetTextEmbeddingOutcomeCallable EsClient::GetTextEmbeddingCallable(const GetTextEmbeddingRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTextEmbeddingOutcome>>();
    GetTextEmbeddingAsync(
    request,
    [prom](
        const EsClient*,
        const GetTextEmbeddingRequest&,
        GetTextEmbeddingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ParseDocumentRequest&;
    using Resp = ParseDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "ParseDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ParseDocumentOutcomeCallable EsClient::ParseDocumentCallable(const ParseDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseDocumentOutcome>>();
    ParseDocumentAsync(
    request,
    [prom](
        const EsClient*,
        const ParseDocumentRequest&,
        ParseDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ParseDocumentAsyncRequest&;
    using Resp = ParseDocumentAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "ParseDocumentAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::ParseDocumentAsyncOutcomeCallable EsClient::ParseDocumentAsyncCallable(const ParseDocumentAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseDocumentAsyncOutcome>>();
    ParseDocumentAsyncAsync(
    request,
    [prom](
        const EsClient*,
        const ParseDocumentAsyncRequest&,
        ParseDocumentAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RunRerankRequest&;
    using Resp = RunRerankResponse;

    DoRequestAsync<Req, Resp>(
        "RunRerank", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RunRerankOutcomeCallable EsClient::RunRerankCallable(const RunRerankRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunRerankOutcome>>();
    RunRerankAsync(
    request,
    [prom](
        const EsClient*,
        const RunRerankRequest&,
        RunRerankOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

