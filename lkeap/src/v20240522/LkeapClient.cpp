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

#include <tencentcloud/lkeap/v20240522/LkeapClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lkeap::V20240522;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-22";
    const string ENDPOINT = "lkeap.tencentcloudapi.com";
}

LkeapClient::LkeapClient(const Credential &credential, const string &region) :
    LkeapClient(credential, region, ClientProfile())
{
}

LkeapClient::LkeapClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LkeapClient::CancelTaskOutcome LkeapClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void LkeapClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelTaskRequest&;
    using Resp = CancelTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CancelTaskOutcomeCallable LkeapClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTaskOutcome>>();
    CancelTaskAsync(
    request,
    [prom](
        const LkeapClient*,
        const CancelTaskRequest&,
        CancelTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ChatCompletionsOutcome LkeapClient::ChatCompletions(const ChatCompletionsRequest &request)
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

void LkeapClient::ChatCompletionsAsync(const ChatCompletionsRequest& request, const ChatCompletionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeapClient::ChatCompletionsOutcomeCallable LkeapClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChatCompletionsOutcome>>();
    ChatCompletionsAsync(
    request,
    [prom](
        const LkeapClient*,
        const ChatCompletionsRequest&,
        ChatCompletionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::CreateReconstructDocumentFlowOutcome LkeapClient::CreateReconstructDocumentFlow(const CreateReconstructDocumentFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReconstructDocumentFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReconstructDocumentFlowResponse rsp = CreateReconstructDocumentFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReconstructDocumentFlowOutcome(rsp);
        else
            return CreateReconstructDocumentFlowOutcome(o.GetError());
    }
    else
    {
        return CreateReconstructDocumentFlowOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateReconstructDocumentFlowAsync(const CreateReconstructDocumentFlowRequest& request, const CreateReconstructDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReconstructDocumentFlowRequest&;
    using Resp = CreateReconstructDocumentFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReconstructDocumentFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CreateReconstructDocumentFlowOutcomeCallable LkeapClient::CreateReconstructDocumentFlowCallable(const CreateReconstructDocumentFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReconstructDocumentFlowOutcome>>();
    CreateReconstructDocumentFlowAsync(
    request,
    [prom](
        const LkeapClient*,
        const CreateReconstructDocumentFlowRequest&,
        CreateReconstructDocumentFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::CreateSplitDocumentFlowOutcome LkeapClient::CreateSplitDocumentFlow(const CreateSplitDocumentFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSplitDocumentFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSplitDocumentFlowResponse rsp = CreateSplitDocumentFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSplitDocumentFlowOutcome(rsp);
        else
            return CreateSplitDocumentFlowOutcome(o.GetError());
    }
    else
    {
        return CreateSplitDocumentFlowOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateSplitDocumentFlowAsync(const CreateSplitDocumentFlowRequest& request, const CreateSplitDocumentFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSplitDocumentFlowRequest&;
    using Resp = CreateSplitDocumentFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSplitDocumentFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CreateSplitDocumentFlowOutcomeCallable LkeapClient::CreateSplitDocumentFlowCallable(const CreateSplitDocumentFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSplitDocumentFlowOutcome>>();
    CreateSplitDocumentFlowAsync(
    request,
    [prom](
        const LkeapClient*,
        const CreateSplitDocumentFlowRequest&,
        CreateSplitDocumentFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::GetCharacterUsageOutcome LkeapClient::GetCharacterUsage(const GetCharacterUsageRequest &request)
{
    auto outcome = MakeRequest(request, "GetCharacterUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCharacterUsageResponse rsp = GetCharacterUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCharacterUsageOutcome(rsp);
        else
            return GetCharacterUsageOutcome(o.GetError());
    }
    else
    {
        return GetCharacterUsageOutcome(outcome.GetError());
    }
}

void LkeapClient::GetCharacterUsageAsync(const GetCharacterUsageRequest& request, const GetCharacterUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetCharacterUsageRequest&;
    using Resp = GetCharacterUsageResponse;

    DoRequestAsync<Req, Resp>(
        "GetCharacterUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::GetCharacterUsageOutcomeCallable LkeapClient::GetCharacterUsageCallable(const GetCharacterUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetCharacterUsageOutcome>>();
    GetCharacterUsageAsync(
    request,
    [prom](
        const LkeapClient*,
        const GetCharacterUsageRequest&,
        GetCharacterUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::GetEmbeddingOutcome LkeapClient::GetEmbedding(const GetEmbeddingRequest &request)
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

void LkeapClient::GetEmbeddingAsync(const GetEmbeddingRequest& request, const GetEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetEmbeddingRequest&;
    using Resp = GetEmbeddingResponse;

    DoRequestAsync<Req, Resp>(
        "GetEmbedding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::GetEmbeddingOutcomeCallable LkeapClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetEmbeddingOutcome>>();
    GetEmbeddingAsync(
    request,
    [prom](
        const LkeapClient*,
        const GetEmbeddingRequest&,
        GetEmbeddingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::GetReconstructDocumentResultOutcome LkeapClient::GetReconstructDocumentResult(const GetReconstructDocumentResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetReconstructDocumentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetReconstructDocumentResultResponse rsp = GetReconstructDocumentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetReconstructDocumentResultOutcome(rsp);
        else
            return GetReconstructDocumentResultOutcome(o.GetError());
    }
    else
    {
        return GetReconstructDocumentResultOutcome(outcome.GetError());
    }
}

void LkeapClient::GetReconstructDocumentResultAsync(const GetReconstructDocumentResultRequest& request, const GetReconstructDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetReconstructDocumentResultRequest&;
    using Resp = GetReconstructDocumentResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetReconstructDocumentResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::GetReconstructDocumentResultOutcomeCallable LkeapClient::GetReconstructDocumentResultCallable(const GetReconstructDocumentResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetReconstructDocumentResultOutcome>>();
    GetReconstructDocumentResultAsync(
    request,
    [prom](
        const LkeapClient*,
        const GetReconstructDocumentResultRequest&,
        GetReconstructDocumentResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::GetSplitDocumentResultOutcome LkeapClient::GetSplitDocumentResult(const GetSplitDocumentResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetSplitDocumentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSplitDocumentResultResponse rsp = GetSplitDocumentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSplitDocumentResultOutcome(rsp);
        else
            return GetSplitDocumentResultOutcome(o.GetError());
    }
    else
    {
        return GetSplitDocumentResultOutcome(outcome.GetError());
    }
}

void LkeapClient::GetSplitDocumentResultAsync(const GetSplitDocumentResultRequest& request, const GetSplitDocumentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetSplitDocumentResultRequest&;
    using Resp = GetSplitDocumentResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetSplitDocumentResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::GetSplitDocumentResultOutcomeCallable LkeapClient::GetSplitDocumentResultCallable(const GetSplitDocumentResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetSplitDocumentResultOutcome>>();
    GetSplitDocumentResultAsync(
    request,
    [prom](
        const LkeapClient*,
        const GetSplitDocumentResultRequest&,
        GetSplitDocumentResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::QueryRewriteOutcome LkeapClient::QueryRewrite(const QueryRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRewriteResponse rsp = QueryRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRewriteOutcome(rsp);
        else
            return QueryRewriteOutcome(o.GetError());
    }
    else
    {
        return QueryRewriteOutcome(outcome.GetError());
    }
}

void LkeapClient::QueryRewriteAsync(const QueryRewriteRequest& request, const QueryRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryRewriteRequest&;
    using Resp = QueryRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "QueryRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::QueryRewriteOutcomeCallable LkeapClient::QueryRewriteCallable(const QueryRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryRewriteOutcome>>();
    QueryRewriteAsync(
    request,
    [prom](
        const LkeapClient*,
        const QueryRewriteRequest&,
        QueryRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ReconstructDocumentSSEOutcome LkeapClient::ReconstructDocumentSSE(const ReconstructDocumentSSERequest &request)
{
    auto outcome = MakeRequest(request, "ReconstructDocumentSSE");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReconstructDocumentSSEResponse rsp = ReconstructDocumentSSEResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReconstructDocumentSSEOutcome(rsp);
        else
            return ReconstructDocumentSSEOutcome(o.GetError());
    }
    else
    {
        return ReconstructDocumentSSEOutcome(outcome.GetError());
    }
}

void LkeapClient::ReconstructDocumentSSEAsync(const ReconstructDocumentSSERequest& request, const ReconstructDocumentSSEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReconstructDocumentSSERequest&;
    using Resp = ReconstructDocumentSSEResponse;

    DoRequestAsync<Req, Resp>(
        "ReconstructDocumentSSE", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ReconstructDocumentSSEOutcomeCallable LkeapClient::ReconstructDocumentSSECallable(const ReconstructDocumentSSERequest &request)
{
    const auto prom = std::make_shared<std::promise<ReconstructDocumentSSEOutcome>>();
    ReconstructDocumentSSEAsync(
    request,
    [prom](
        const LkeapClient*,
        const ReconstructDocumentSSERequest&,
        ReconstructDocumentSSEOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::RunRerankOutcome LkeapClient::RunRerank(const RunRerankRequest &request)
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

void LkeapClient::RunRerankAsync(const RunRerankRequest& request, const RunRerankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LkeapClient::RunRerankOutcomeCallable LkeapClient::RunRerankCallable(const RunRerankRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunRerankOutcome>>();
    RunRerankAsync(
    request,
    [prom](
        const LkeapClient*,
        const RunRerankRequest&,
        RunRerankOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

