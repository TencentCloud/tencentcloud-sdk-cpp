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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatCompletions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ChatCompletionsOutcomeCallable LkeapClient::ChatCompletionsCallable(const ChatCompletionsRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateAttributeLabelOutcomeCallable LkeapClient::CreateAttributeLabelCallable(const CreateAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->CreateAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateKnowledgeBase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateKnowledgeBaseOutcomeCallable LkeapClient::CreateKnowledgeBaseCallable(const CreateKnowledgeBaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateKnowledgeBaseOutcome()>>(
        [this, request]()
        {
            return this->CreateKnowledgeBase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateQAOutcomeCallable LkeapClient::CreateQACallable(const CreateQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateQAOutcome()>>(
        [this, request]()
        {
            return this->CreateQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateReconstructDocumentFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateReconstructDocumentFlowOutcomeCallable LkeapClient::CreateReconstructDocumentFlowCallable(const CreateReconstructDocumentFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateReconstructDocumentFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateReconstructDocumentFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSplitDocumentFlow(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::CreateSplitDocumentFlowOutcomeCallable LkeapClient::CreateSplitDocumentFlowCallable(const CreateSplitDocumentFlowRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSplitDocumentFlowOutcome()>>(
        [this, request]()
        {
            return this->CreateSplitDocumentFlow(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAttributeLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::DeleteAttributeLabelsOutcomeCallable LkeapClient::DeleteAttributeLabelsCallable(const DeleteAttributeLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAttributeLabelsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAttributeLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDocs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::DeleteDocsOutcomeCallable LkeapClient::DeleteDocsCallable(const DeleteDocsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDocsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDocs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteKnowledgeBase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::DeleteKnowledgeBaseOutcomeCallable LkeapClient::DeleteKnowledgeBaseCallable(const DeleteKnowledgeBaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteKnowledgeBaseOutcome()>>(
        [this, request]()
        {
            return this->DeleteKnowledgeBase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQAs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::DeleteQAsOutcomeCallable LkeapClient::DeleteQAsCallable(const DeleteQAsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQAsOutcome()>>(
        [this, request]()
        {
            return this->DeleteQAs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::DescribeDocOutcomeCallable LkeapClient::DescribeDocCallable(const DescribeDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocOutcome()>>(
        [this, request]()
        {
            return this->DescribeDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCharacterUsage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetCharacterUsageOutcomeCallable LkeapClient::GetCharacterUsageCallable(const GetCharacterUsageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCharacterUsageOutcome()>>(
        [this, request]()
        {
            return this->GetCharacterUsage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetEmbeddingOutcomeCallable LkeapClient::GetEmbeddingCallable(const GetEmbeddingRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetReconstructDocumentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetReconstructDocumentResultOutcomeCallable LkeapClient::GetReconstructDocumentResultCallable(const GetReconstructDocumentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetReconstructDocumentResultOutcome()>>(
        [this, request]()
        {
            return this->GetReconstructDocumentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSplitDocumentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::GetSplitDocumentResultOutcomeCallable LkeapClient::GetSplitDocumentResultCallable(const GetSplitDocumentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSplitDocumentResultOutcome()>>(
        [this, request]()
        {
            return this->GetSplitDocumentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportQAs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ImportQAsOutcomeCallable LkeapClient::ImportQAsCallable(const ImportQAsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportQAsOutcome()>>(
        [this, request]()
        {
            return this->ImportQAs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttributeLabels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ListAttributeLabelsOutcomeCallable LkeapClient::ListAttributeLabelsCallable(const ListAttributeLabelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttributeLabelsOutcome()>>(
        [this, request]()
        {
            return this->ListAttributeLabels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDocs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ListDocsOutcomeCallable LkeapClient::ListDocsCallable(const ListDocsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDocsOutcome()>>(
        [this, request]()
        {
            return this->ListDocs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListQAs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ListQAsOutcomeCallable LkeapClient::ListQAsCallable(const ListQAsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListQAsOutcome()>>(
        [this, request]()
        {
            return this->ListQAs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAttributeLabel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ModifyAttributeLabelOutcomeCallable LkeapClient::ModifyAttributeLabelCallable(const ModifyAttributeLabelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAttributeLabelOutcome()>>(
        [this, request]()
        {
            return this->ModifyAttributeLabel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyQA(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ModifyQAOutcomeCallable LkeapClient::ModifyQACallable(const ModifyQARequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyQAOutcome()>>(
        [this, request]()
        {
            return this->ModifyQA(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRewrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::QueryRewriteOutcomeCallable LkeapClient::QueryRewriteCallable(const QueryRewriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRewriteOutcome()>>(
        [this, request]()
        {
            return this->QueryRewrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReconstructDocumentSSE(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::ReconstructDocumentSSEOutcomeCallable LkeapClient::ReconstructDocumentSSECallable(const ReconstructDocumentSSERequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReconstructDocumentSSEOutcome()>>(
        [this, request]()
        {
            return this->ReconstructDocumentSSE(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetrieveKnowledge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::RetrieveKnowledgeOutcomeCallable LkeapClient::RetrieveKnowledgeCallable(const RetrieveKnowledgeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetrieveKnowledgeOutcome()>>(
        [this, request]()
        {
            return this->RetrieveKnowledge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunRerank(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::RunRerankOutcomeCallable LkeapClient::RunRerankCallable(const RunRerankRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadDoc(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LkeapClient::UploadDocOutcomeCallable LkeapClient::UploadDocCallable(const UploadDocRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadDocOutcome()>>(
        [this, request]()
        {
            return this->UploadDoc(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

