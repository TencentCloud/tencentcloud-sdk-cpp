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

#include <tencentcloud/nlp/v20190408/NlpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Nlp::V20190408;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-08";
    const string ENDPOINT = "nlp.tencentcloudapi.com";
}

NlpClient::NlpClient(const Credential &credential, const string &region) :
    NlpClient(credential, region, ClientProfile())
{
}

NlpClient::NlpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


NlpClient::AutoSummarizationOutcome NlpClient::AutoSummarization(const AutoSummarizationRequest &request)
{
    auto outcome = MakeRequest(request, "AutoSummarization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AutoSummarizationResponse rsp = AutoSummarizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AutoSummarizationOutcome(rsp);
        else
            return AutoSummarizationOutcome(o.GetError());
    }
    else
    {
        return AutoSummarizationOutcome(outcome.GetError());
    }
}

void NlpClient::AutoSummarizationAsync(const AutoSummarizationRequest& request, const AutoSummarizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AutoSummarization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::AutoSummarizationOutcomeCallable NlpClient::AutoSummarizationCallable(const AutoSummarizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AutoSummarizationOutcome()>>(
        [this, request]()
        {
            return this->AutoSummarization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::ChatBotOutcome NlpClient::ChatBot(const ChatBotRequest &request)
{
    auto outcome = MakeRequest(request, "ChatBot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChatBotResponse rsp = ChatBotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChatBotOutcome(rsp);
        else
            return ChatBotOutcome(o.GetError());
    }
    else
    {
        return ChatBotOutcome(outcome.GetError());
    }
}

void NlpClient::ChatBotAsync(const ChatBotRequest& request, const ChatBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ChatBot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ChatBotOutcomeCallable NlpClient::ChatBotCallable(const ChatBotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ChatBotOutcome()>>(
        [this, request]()
        {
            return this->ChatBot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::CreateDictOutcome NlpClient::CreateDict(const CreateDictRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDictResponse rsp = CreateDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDictOutcome(rsp);
        else
            return CreateDictOutcome(o.GetError());
    }
    else
    {
        return CreateDictOutcome(outcome.GetError());
    }
}

void NlpClient::CreateDictAsync(const CreateDictRequest& request, const CreateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::CreateDictOutcomeCallable NlpClient::CreateDictCallable(const CreateDictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDictOutcome()>>(
        [this, request]()
        {
            return this->CreateDict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::CreateWordItemsOutcome NlpClient::CreateWordItems(const CreateWordItemsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWordItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWordItemsResponse rsp = CreateWordItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWordItemsOutcome(rsp);
        else
            return CreateWordItemsOutcome(o.GetError());
    }
    else
    {
        return CreateWordItemsOutcome(outcome.GetError());
    }
}

void NlpClient::CreateWordItemsAsync(const CreateWordItemsRequest& request, const CreateWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateWordItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::CreateWordItemsOutcomeCallable NlpClient::CreateWordItemsCallable(const CreateWordItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateWordItemsOutcome()>>(
        [this, request]()
        {
            return this->CreateWordItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DeleteDictOutcome NlpClient::DeleteDict(const DeleteDictRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDictResponse rsp = DeleteDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDictOutcome(rsp);
        else
            return DeleteDictOutcome(o.GetError());
    }
    else
    {
        return DeleteDictOutcome(outcome.GetError());
    }
}

void NlpClient::DeleteDictAsync(const DeleteDictRequest& request, const DeleteDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DeleteDictOutcomeCallable NlpClient::DeleteDictCallable(const DeleteDictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDictOutcome()>>(
        [this, request]()
        {
            return this->DeleteDict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DeleteWordItemsOutcome NlpClient::DeleteWordItems(const DeleteWordItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWordItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWordItemsResponse rsp = DeleteWordItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWordItemsOutcome(rsp);
        else
            return DeleteWordItemsOutcome(o.GetError());
    }
    else
    {
        return DeleteWordItemsOutcome(outcome.GetError());
    }
}

void NlpClient::DeleteWordItemsAsync(const DeleteWordItemsRequest& request, const DeleteWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWordItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DeleteWordItemsOutcomeCallable NlpClient::DeleteWordItemsCallable(const DeleteWordItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWordItemsOutcome()>>(
        [this, request]()
        {
            return this->DeleteWordItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DependencyParsingOutcome NlpClient::DependencyParsing(const DependencyParsingRequest &request)
{
    auto outcome = MakeRequest(request, "DependencyParsing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DependencyParsingResponse rsp = DependencyParsingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DependencyParsingOutcome(rsp);
        else
            return DependencyParsingOutcome(o.GetError());
    }
    else
    {
        return DependencyParsingOutcome(outcome.GetError());
    }
}

void NlpClient::DependencyParsingAsync(const DependencyParsingRequest& request, const DependencyParsingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DependencyParsing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DependencyParsingOutcomeCallable NlpClient::DependencyParsingCallable(const DependencyParsingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DependencyParsingOutcome()>>(
        [this, request]()
        {
            return this->DependencyParsing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeDictOutcome NlpClient::DescribeDict(const DescribeDictRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDictResponse rsp = DescribeDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDictOutcome(rsp);
        else
            return DescribeDictOutcome(o.GetError());
    }
    else
    {
        return DescribeDictOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeDictAsync(const DescribeDictRequest& request, const DescribeDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeDictOutcomeCallable NlpClient::DescribeDictCallable(const DescribeDictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDictOutcome()>>(
        [this, request]()
        {
            return this->DescribeDict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeDictsOutcome NlpClient::DescribeDicts(const DescribeDictsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDicts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDictsResponse rsp = DescribeDictsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDictsOutcome(rsp);
        else
            return DescribeDictsOutcome(o.GetError());
    }
    else
    {
        return DescribeDictsOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeDictsAsync(const DescribeDictsRequest& request, const DescribeDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDicts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeDictsOutcomeCallable NlpClient::DescribeDictsCallable(const DescribeDictsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDictsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDicts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeEntityOutcome NlpClient::DescribeEntity(const DescribeEntityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEntity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEntityResponse rsp = DescribeEntityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEntityOutcome(rsp);
        else
            return DescribeEntityOutcome(o.GetError());
    }
    else
    {
        return DescribeEntityOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeEntityAsync(const DescribeEntityRequest& request, const DescribeEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEntity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeEntityOutcomeCallable NlpClient::DescribeEntityCallable(const DescribeEntityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEntityOutcome()>>(
        [this, request]()
        {
            return this->DescribeEntity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeRelationOutcome NlpClient::DescribeRelation(const DescribeRelationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelationResponse rsp = DescribeRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelationOutcome(rsp);
        else
            return DescribeRelationOutcome(o.GetError());
    }
    else
    {
        return DescribeRelationOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeRelationAsync(const DescribeRelationRequest& request, const DescribeRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRelation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeRelationOutcomeCallable NlpClient::DescribeRelationCallable(const DescribeRelationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRelationOutcome()>>(
        [this, request]()
        {
            return this->DescribeRelation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeTripleOutcome NlpClient::DescribeTriple(const DescribeTripleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTriple");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTripleResponse rsp = DescribeTripleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTripleOutcome(rsp);
        else
            return DescribeTripleOutcome(o.GetError());
    }
    else
    {
        return DescribeTripleOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeTripleAsync(const DescribeTripleRequest& request, const DescribeTripleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTriple(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeTripleOutcomeCallable NlpClient::DescribeTripleCallable(const DescribeTripleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTripleOutcome()>>(
        [this, request]()
        {
            return this->DescribeTriple(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::DescribeWordItemsOutcome NlpClient::DescribeWordItems(const DescribeWordItemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWordItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWordItemsResponse rsp = DescribeWordItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWordItemsOutcome(rsp);
        else
            return DescribeWordItemsOutcome(o.GetError());
    }
    else
    {
        return DescribeWordItemsOutcome(outcome.GetError());
    }
}

void NlpClient::DescribeWordItemsAsync(const DescribeWordItemsRequest& request, const DescribeWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWordItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::DescribeWordItemsOutcomeCallable NlpClient::DescribeWordItemsCallable(const DescribeWordItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWordItemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWordItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::KeywordsExtractionOutcome NlpClient::KeywordsExtraction(const KeywordsExtractionRequest &request)
{
    auto outcome = MakeRequest(request, "KeywordsExtraction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KeywordsExtractionResponse rsp = KeywordsExtractionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KeywordsExtractionOutcome(rsp);
        else
            return KeywordsExtractionOutcome(o.GetError());
    }
    else
    {
        return KeywordsExtractionOutcome(outcome.GetError());
    }
}

void NlpClient::KeywordsExtractionAsync(const KeywordsExtractionRequest& request, const KeywordsExtractionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KeywordsExtraction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::KeywordsExtractionOutcomeCallable NlpClient::KeywordsExtractionCallable(const KeywordsExtractionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KeywordsExtractionOutcome()>>(
        [this, request]()
        {
            return this->KeywordsExtraction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::LexicalAnalysisOutcome NlpClient::LexicalAnalysis(const LexicalAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "LexicalAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LexicalAnalysisResponse rsp = LexicalAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LexicalAnalysisOutcome(rsp);
        else
            return LexicalAnalysisOutcome(o.GetError());
    }
    else
    {
        return LexicalAnalysisOutcome(outcome.GetError());
    }
}

void NlpClient::LexicalAnalysisAsync(const LexicalAnalysisRequest& request, const LexicalAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LexicalAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::LexicalAnalysisOutcomeCallable NlpClient::LexicalAnalysisCallable(const LexicalAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LexicalAnalysisOutcome()>>(
        [this, request]()
        {
            return this->LexicalAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::SearchWordItemsOutcome NlpClient::SearchWordItems(const SearchWordItemsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchWordItems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchWordItemsResponse rsp = SearchWordItemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchWordItemsOutcome(rsp);
        else
            return SearchWordItemsOutcome(o.GetError());
    }
    else
    {
        return SearchWordItemsOutcome(outcome.GetError());
    }
}

void NlpClient::SearchWordItemsAsync(const SearchWordItemsRequest& request, const SearchWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchWordItems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SearchWordItemsOutcomeCallable NlpClient::SearchWordItemsCallable(const SearchWordItemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchWordItemsOutcome()>>(
        [this, request]()
        {
            return this->SearchWordItems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::SentenceEmbeddingOutcome NlpClient::SentenceEmbedding(const SentenceEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceEmbeddingResponse rsp = SentenceEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceEmbeddingOutcome(rsp);
        else
            return SentenceEmbeddingOutcome(o.GetError());
    }
    else
    {
        return SentenceEmbeddingOutcome(outcome.GetError());
    }
}

void NlpClient::SentenceEmbeddingAsync(const SentenceEmbeddingRequest& request, const SentenceEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentenceEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SentenceEmbeddingOutcomeCallable NlpClient::SentenceEmbeddingCallable(const SentenceEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentenceEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->SentenceEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::SentimentAnalysisOutcome NlpClient::SentimentAnalysis(const SentimentAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "SentimentAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentimentAnalysisResponse rsp = SentimentAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentimentAnalysisOutcome(rsp);
        else
            return SentimentAnalysisOutcome(o.GetError());
    }
    else
    {
        return SentimentAnalysisOutcome(outcome.GetError());
    }
}

void NlpClient::SentimentAnalysisAsync(const SentimentAnalysisRequest& request, const SentimentAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentimentAnalysis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SentimentAnalysisOutcomeCallable NlpClient::SentimentAnalysisCallable(const SentimentAnalysisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentimentAnalysisOutcome()>>(
        [this, request]()
        {
            return this->SentimentAnalysis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::SimilarWordsOutcome NlpClient::SimilarWords(const SimilarWordsRequest &request)
{
    auto outcome = MakeRequest(request, "SimilarWords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SimilarWordsResponse rsp = SimilarWordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SimilarWordsOutcome(rsp);
        else
            return SimilarWordsOutcome(o.GetError());
    }
    else
    {
        return SimilarWordsOutcome(outcome.GetError());
    }
}

void NlpClient::SimilarWordsAsync(const SimilarWordsRequest& request, const SimilarWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SimilarWords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SimilarWordsOutcomeCallable NlpClient::SimilarWordsCallable(const SimilarWordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SimilarWordsOutcome()>>(
        [this, request]()
        {
            return this->SimilarWords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextClassificationOutcome NlpClient::TextClassification(const TextClassificationRequest &request)
{
    auto outcome = MakeRequest(request, "TextClassification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextClassificationResponse rsp = TextClassificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextClassificationOutcome(rsp);
        else
            return TextClassificationOutcome(o.GetError());
    }
    else
    {
        return TextClassificationOutcome(outcome.GetError());
    }
}

void NlpClient::TextClassificationAsync(const TextClassificationRequest& request, const TextClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextClassification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextClassificationOutcomeCallable NlpClient::TextClassificationCallable(const TextClassificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextClassificationOutcome()>>(
        [this, request]()
        {
            return this->TextClassification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextCorrectionOutcome NlpClient::TextCorrection(const TextCorrectionRequest &request)
{
    auto outcome = MakeRequest(request, "TextCorrection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextCorrectionResponse rsp = TextCorrectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextCorrectionOutcome(rsp);
        else
            return TextCorrectionOutcome(o.GetError());
    }
    else
    {
        return TextCorrectionOutcome(outcome.GetError());
    }
}

void NlpClient::TextCorrectionAsync(const TextCorrectionRequest& request, const TextCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextCorrection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextCorrectionOutcomeCallable NlpClient::TextCorrectionCallable(const TextCorrectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextCorrectionOutcome()>>(
        [this, request]()
        {
            return this->TextCorrection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextCorrectionProOutcome NlpClient::TextCorrectionPro(const TextCorrectionProRequest &request)
{
    auto outcome = MakeRequest(request, "TextCorrectionPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextCorrectionProResponse rsp = TextCorrectionProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextCorrectionProOutcome(rsp);
        else
            return TextCorrectionProOutcome(o.GetError());
    }
    else
    {
        return TextCorrectionProOutcome(outcome.GetError());
    }
}

void NlpClient::TextCorrectionProAsync(const TextCorrectionProRequest& request, const TextCorrectionProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextCorrectionPro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextCorrectionProOutcomeCallable NlpClient::TextCorrectionProCallable(const TextCorrectionProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextCorrectionProOutcome()>>(
        [this, request]()
        {
            return this->TextCorrectionPro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextSimilarityOutcome NlpClient::TextSimilarity(const TextSimilarityRequest &request)
{
    auto outcome = MakeRequest(request, "TextSimilarity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextSimilarityResponse rsp = TextSimilarityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextSimilarityOutcome(rsp);
        else
            return TextSimilarityOutcome(o.GetError());
    }
    else
    {
        return TextSimilarityOutcome(outcome.GetError());
    }
}

void NlpClient::TextSimilarityAsync(const TextSimilarityRequest& request, const TextSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextSimilarity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextSimilarityOutcomeCallable NlpClient::TextSimilarityCallable(const TextSimilarityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextSimilarityOutcome()>>(
        [this, request]()
        {
            return this->TextSimilarity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextSimilarityProOutcome NlpClient::TextSimilarityPro(const TextSimilarityProRequest &request)
{
    auto outcome = MakeRequest(request, "TextSimilarityPro");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextSimilarityProResponse rsp = TextSimilarityProResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextSimilarityProOutcome(rsp);
        else
            return TextSimilarityProOutcome(o.GetError());
    }
    else
    {
        return TextSimilarityProOutcome(outcome.GetError());
    }
}

void NlpClient::TextSimilarityProAsync(const TextSimilarityProRequest& request, const TextSimilarityProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextSimilarityPro(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextSimilarityProOutcomeCallable NlpClient::TextSimilarityProCallable(const TextSimilarityProRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextSimilarityProOutcome()>>(
        [this, request]()
        {
            return this->TextSimilarityPro(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::UpdateDictOutcome NlpClient::UpdateDict(const UpdateDictRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDict");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDictResponse rsp = UpdateDictResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDictOutcome(rsp);
        else
            return UpdateDictOutcome(o.GetError());
    }
    else
    {
        return UpdateDictOutcome(outcome.GetError());
    }
}

void NlpClient::UpdateDictAsync(const UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDict(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::UpdateDictOutcomeCallable NlpClient::UpdateDictCallable(const UpdateDictRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDictOutcome()>>(
        [this, request]()
        {
            return this->UpdateDict(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::WordEmbeddingOutcome NlpClient::WordEmbedding(const WordEmbeddingRequest &request)
{
    auto outcome = MakeRequest(request, "WordEmbedding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WordEmbeddingResponse rsp = WordEmbeddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WordEmbeddingOutcome(rsp);
        else
            return WordEmbeddingOutcome(o.GetError());
    }
    else
    {
        return WordEmbeddingOutcome(outcome.GetError());
    }
}

void NlpClient::WordEmbeddingAsync(const WordEmbeddingRequest& request, const WordEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WordEmbedding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::WordEmbeddingOutcomeCallable NlpClient::WordEmbeddingCallable(const WordEmbeddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WordEmbeddingOutcome()>>(
        [this, request]()
        {
            return this->WordEmbedding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::WordSimilarityOutcome NlpClient::WordSimilarity(const WordSimilarityRequest &request)
{
    auto outcome = MakeRequest(request, "WordSimilarity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WordSimilarityResponse rsp = WordSimilarityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WordSimilarityOutcome(rsp);
        else
            return WordSimilarityOutcome(o.GetError());
    }
    else
    {
        return WordSimilarityOutcome(outcome.GetError());
    }
}

void NlpClient::WordSimilarityAsync(const WordSimilarityRequest& request, const WordSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WordSimilarity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::WordSimilarityOutcomeCallable NlpClient::WordSimilarityCallable(const WordSimilarityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WordSimilarityOutcome()>>(
        [this, request]()
        {
            return this->WordSimilarity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

