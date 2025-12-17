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

LkeapClient::CreateAttributeLabelOutcome LkeapClient::CreateAttributeLabel(const CreateAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAttributeLabelResponse rsp = CreateAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAttributeLabelOutcome(rsp);
        else
            return CreateAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return CreateAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateAttributeLabelAsync(const CreateAttributeLabelRequest& request, const CreateAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAttributeLabelRequest&;
    using Resp = CreateAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CreateAttributeLabelOutcomeCallable LkeapClient::CreateAttributeLabelCallable(const CreateAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAttributeLabelOutcome>>();
    CreateAttributeLabelAsync(
    request,
    [prom](
        const LkeapClient*,
        const CreateAttributeLabelRequest&,
        CreateAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::CreateKnowledgeBaseOutcome LkeapClient::CreateKnowledgeBase(const CreateKnowledgeBaseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKnowledgeBase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKnowledgeBaseResponse rsp = CreateKnowledgeBaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKnowledgeBaseOutcome(rsp);
        else
            return CreateKnowledgeBaseOutcome(o.GetError());
    }
    else
    {
        return CreateKnowledgeBaseOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateKnowledgeBaseAsync(const CreateKnowledgeBaseRequest& request, const CreateKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKnowledgeBaseRequest&;
    using Resp = CreateKnowledgeBaseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKnowledgeBase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CreateKnowledgeBaseOutcomeCallable LkeapClient::CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKnowledgeBaseOutcome>>();
    CreateKnowledgeBaseAsync(
    request,
    [prom](
        const LkeapClient*,
        const CreateKnowledgeBaseRequest&,
        CreateKnowledgeBaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::CreateQAOutcome LkeapClient::CreateQA(const CreateQARequest &request)
{
    auto outcome = MakeRequest(request, "CreateQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQAResponse rsp = CreateQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQAOutcome(rsp);
        else
            return CreateQAOutcome(o.GetError());
    }
    else
    {
        return CreateQAOutcome(outcome.GetError());
    }
}

void LkeapClient::CreateQAAsync(const CreateQARequest& request, const CreateQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQARequest&;
    using Resp = CreateQAResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::CreateQAOutcomeCallable LkeapClient::CreateQACallable(const CreateQARequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQAOutcome>>();
    CreateQAAsync(
    request,
    [prom](
        const LkeapClient*,
        const CreateQARequest&,
        CreateQAOutcome resp,
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

LkeapClient::DeleteAttributeLabelsOutcome LkeapClient::DeleteAttributeLabels(const DeleteAttributeLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAttributeLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAttributeLabelsResponse rsp = DeleteAttributeLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAttributeLabelsOutcome(rsp);
        else
            return DeleteAttributeLabelsOutcome(o.GetError());
    }
    else
    {
        return DeleteAttributeLabelsOutcome(outcome.GetError());
    }
}

void LkeapClient::DeleteAttributeLabelsAsync(const DeleteAttributeLabelsRequest& request, const DeleteAttributeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAttributeLabelsRequest&;
    using Resp = DeleteAttributeLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAttributeLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::DeleteAttributeLabelsOutcomeCallable LkeapClient::DeleteAttributeLabelsCallable(const DeleteAttributeLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAttributeLabelsOutcome>>();
    DeleteAttributeLabelsAsync(
    request,
    [prom](
        const LkeapClient*,
        const DeleteAttributeLabelsRequest&,
        DeleteAttributeLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::DeleteDocsOutcome LkeapClient::DeleteDocs(const DeleteDocsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocsResponse rsp = DeleteDocsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocsOutcome(rsp);
        else
            return DeleteDocsOutcome(o.GetError());
    }
    else
    {
        return DeleteDocsOutcome(outcome.GetError());
    }
}

void LkeapClient::DeleteDocsAsync(const DeleteDocsRequest& request, const DeleteDocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDocsRequest&;
    using Resp = DeleteDocsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDocs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::DeleteDocsOutcomeCallable LkeapClient::DeleteDocsCallable(const DeleteDocsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDocsOutcome>>();
    DeleteDocsAsync(
    request,
    [prom](
        const LkeapClient*,
        const DeleteDocsRequest&,
        DeleteDocsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::DeleteKnowledgeBaseOutcome LkeapClient::DeleteKnowledgeBase(const DeleteKnowledgeBaseRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKnowledgeBase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKnowledgeBaseResponse rsp = DeleteKnowledgeBaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKnowledgeBaseOutcome(rsp);
        else
            return DeleteKnowledgeBaseOutcome(o.GetError());
    }
    else
    {
        return DeleteKnowledgeBaseOutcome(outcome.GetError());
    }
}

void LkeapClient::DeleteKnowledgeBaseAsync(const DeleteKnowledgeBaseRequest& request, const DeleteKnowledgeBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKnowledgeBaseRequest&;
    using Resp = DeleteKnowledgeBaseResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKnowledgeBase", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::DeleteKnowledgeBaseOutcomeCallable LkeapClient::DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKnowledgeBaseOutcome>>();
    DeleteKnowledgeBaseAsync(
    request,
    [prom](
        const LkeapClient*,
        const DeleteKnowledgeBaseRequest&,
        DeleteKnowledgeBaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::DeleteQAsOutcome LkeapClient::DeleteQAs(const DeleteQAsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQAs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQAsResponse rsp = DeleteQAsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQAsOutcome(rsp);
        else
            return DeleteQAsOutcome(o.GetError());
    }
    else
    {
        return DeleteQAsOutcome(outcome.GetError());
    }
}

void LkeapClient::DeleteQAsAsync(const DeleteQAsRequest& request, const DeleteQAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQAsRequest&;
    using Resp = DeleteQAsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQAs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::DeleteQAsOutcomeCallable LkeapClient::DeleteQAsCallable(const DeleteQAsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQAsOutcome>>();
    DeleteQAsAsync(
    request,
    [prom](
        const LkeapClient*,
        const DeleteQAsRequest&,
        DeleteQAsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::DescribeDocOutcome LkeapClient::DescribeDoc(const DescribeDocRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocResponse rsp = DescribeDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocOutcome(rsp);
        else
            return DescribeDocOutcome(o.GetError());
    }
    else
    {
        return DescribeDocOutcome(outcome.GetError());
    }
}

void LkeapClient::DescribeDocAsync(const DescribeDocRequest& request, const DescribeDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDocRequest&;
    using Resp = DescribeDocResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::DescribeDocOutcomeCallable LkeapClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDocOutcome>>();
    DescribeDocAsync(
    request,
    [prom](
        const LkeapClient*,
        const DescribeDocRequest&,
        DescribeDocOutcome resp,
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

LkeapClient::ImportQAsOutcome LkeapClient::ImportQAs(const ImportQAsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportQAs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportQAsResponse rsp = ImportQAsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportQAsOutcome(rsp);
        else
            return ImportQAsOutcome(o.GetError());
    }
    else
    {
        return ImportQAsOutcome(outcome.GetError());
    }
}

void LkeapClient::ImportQAsAsync(const ImportQAsRequest& request, const ImportQAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportQAsRequest&;
    using Resp = ImportQAsResponse;

    DoRequestAsync<Req, Resp>(
        "ImportQAs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ImportQAsOutcomeCallable LkeapClient::ImportQAsCallable(const ImportQAsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportQAsOutcome>>();
    ImportQAsAsync(
    request,
    [prom](
        const LkeapClient*,
        const ImportQAsRequest&,
        ImportQAsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ListAttributeLabelsOutcome LkeapClient::ListAttributeLabels(const ListAttributeLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttributeLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttributeLabelsResponse rsp = ListAttributeLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttributeLabelsOutcome(rsp);
        else
            return ListAttributeLabelsOutcome(o.GetError());
    }
    else
    {
        return ListAttributeLabelsOutcome(outcome.GetError());
    }
}

void LkeapClient::ListAttributeLabelsAsync(const ListAttributeLabelsRequest& request, const ListAttributeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAttributeLabelsRequest&;
    using Resp = ListAttributeLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAttributeLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ListAttributeLabelsOutcomeCallable LkeapClient::ListAttributeLabelsCallable(const ListAttributeLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAttributeLabelsOutcome>>();
    ListAttributeLabelsAsync(
    request,
    [prom](
        const LkeapClient*,
        const ListAttributeLabelsRequest&,
        ListAttributeLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ListDocsOutcome LkeapClient::ListDocs(const ListDocsRequest &request)
{
    auto outcome = MakeRequest(request, "ListDocs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDocsResponse rsp = ListDocsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDocsOutcome(rsp);
        else
            return ListDocsOutcome(o.GetError());
    }
    else
    {
        return ListDocsOutcome(outcome.GetError());
    }
}

void LkeapClient::ListDocsAsync(const ListDocsRequest& request, const ListDocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListDocsRequest&;
    using Resp = ListDocsResponse;

    DoRequestAsync<Req, Resp>(
        "ListDocs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ListDocsOutcomeCallable LkeapClient::ListDocsCallable(const ListDocsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListDocsOutcome>>();
    ListDocsAsync(
    request,
    [prom](
        const LkeapClient*,
        const ListDocsRequest&,
        ListDocsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ListQAsOutcome LkeapClient::ListQAs(const ListQAsRequest &request)
{
    auto outcome = MakeRequest(request, "ListQAs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListQAsResponse rsp = ListQAsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListQAsOutcome(rsp);
        else
            return ListQAsOutcome(o.GetError());
    }
    else
    {
        return ListQAsOutcome(outcome.GetError());
    }
}

void LkeapClient::ListQAsAsync(const ListQAsRequest& request, const ListQAsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListQAsRequest&;
    using Resp = ListQAsResponse;

    DoRequestAsync<Req, Resp>(
        "ListQAs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ListQAsOutcomeCallable LkeapClient::ListQAsCallable(const ListQAsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListQAsOutcome>>();
    ListQAsAsync(
    request,
    [prom](
        const LkeapClient*,
        const ListQAsRequest&,
        ListQAsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ModifyAttributeLabelOutcome LkeapClient::ModifyAttributeLabel(const ModifyAttributeLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAttributeLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAttributeLabelResponse rsp = ModifyAttributeLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAttributeLabelOutcome(rsp);
        else
            return ModifyAttributeLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyAttributeLabelOutcome(outcome.GetError());
    }
}

void LkeapClient::ModifyAttributeLabelAsync(const ModifyAttributeLabelRequest& request, const ModifyAttributeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAttributeLabelRequest&;
    using Resp = ModifyAttributeLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAttributeLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ModifyAttributeLabelOutcomeCallable LkeapClient::ModifyAttributeLabelCallable(const ModifyAttributeLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAttributeLabelOutcome>>();
    ModifyAttributeLabelAsync(
    request,
    [prom](
        const LkeapClient*,
        const ModifyAttributeLabelRequest&,
        ModifyAttributeLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LkeapClient::ModifyQAOutcome LkeapClient::ModifyQA(const ModifyQARequest &request)
{
    auto outcome = MakeRequest(request, "ModifyQA");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyQAResponse rsp = ModifyQAResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyQAOutcome(rsp);
        else
            return ModifyQAOutcome(o.GetError());
    }
    else
    {
        return ModifyQAOutcome(outcome.GetError());
    }
}

void LkeapClient::ModifyQAAsync(const ModifyQARequest& request, const ModifyQAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyQARequest&;
    using Resp = ModifyQAResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyQA", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::ModifyQAOutcomeCallable LkeapClient::ModifyQACallable(const ModifyQARequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyQAOutcome>>();
    ModifyQAAsync(
    request,
    [prom](
        const LkeapClient*,
        const ModifyQARequest&,
        ModifyQAOutcome resp,
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

LkeapClient::RetrieveKnowledgeOutcome LkeapClient::RetrieveKnowledge(const RetrieveKnowledgeRequest &request)
{
    auto outcome = MakeRequest(request, "RetrieveKnowledge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetrieveKnowledgeResponse rsp = RetrieveKnowledgeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetrieveKnowledgeOutcome(rsp);
        else
            return RetrieveKnowledgeOutcome(o.GetError());
    }
    else
    {
        return RetrieveKnowledgeOutcome(outcome.GetError());
    }
}

void LkeapClient::RetrieveKnowledgeAsync(const RetrieveKnowledgeRequest& request, const RetrieveKnowledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetrieveKnowledgeRequest&;
    using Resp = RetrieveKnowledgeResponse;

    DoRequestAsync<Req, Resp>(
        "RetrieveKnowledge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::RetrieveKnowledgeOutcomeCallable LkeapClient::RetrieveKnowledgeCallable(const RetrieveKnowledgeRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetrieveKnowledgeOutcome>>();
    RetrieveKnowledgeAsync(
    request,
    [prom](
        const LkeapClient*,
        const RetrieveKnowledgeRequest&,
        RetrieveKnowledgeOutcome resp,
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

LkeapClient::UploadDocOutcome LkeapClient::UploadDoc(const UploadDocRequest &request)
{
    auto outcome = MakeRequest(request, "UploadDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadDocResponse rsp = UploadDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadDocOutcome(rsp);
        else
            return UploadDocOutcome(o.GetError());
    }
    else
    {
        return UploadDocOutcome(outcome.GetError());
    }
}

void LkeapClient::UploadDocAsync(const UploadDocRequest& request, const UploadDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadDocRequest&;
    using Resp = UploadDocResponse;

    DoRequestAsync<Req, Resp>(
        "UploadDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LkeapClient::UploadDocOutcomeCallable LkeapClient::UploadDocCallable(const UploadDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadDocOutcome>>();
    UploadDocAsync(
    request,
    [prom](
        const LkeapClient*,
        const UploadDocRequest&,
        UploadDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

