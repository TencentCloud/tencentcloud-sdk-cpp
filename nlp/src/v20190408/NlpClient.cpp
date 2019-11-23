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

NlpClient::ContentApprovalOutcome NlpClient::ContentApproval(const ContentApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "ContentApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContentApprovalResponse rsp = ContentApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContentApprovalOutcome(rsp);
        else
            return ContentApprovalOutcome(o.GetError());
    }
    else
    {
        return ContentApprovalOutcome(outcome.GetError());
    }
}

void NlpClient::ContentApprovalAsync(const ContentApprovalRequest& request, const ContentApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContentApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ContentApprovalOutcomeCallable NlpClient::ContentApprovalCallable(const ContentApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContentApprovalOutcome()>>(
        [this, request]()
        {
            return this->ContentApproval(request);
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

NlpClient::SensitiveWordsRecognitionOutcome NlpClient::SensitiveWordsRecognition(const SensitiveWordsRecognitionRequest &request)
{
    auto outcome = MakeRequest(request, "SensitiveWordsRecognition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SensitiveWordsRecognitionResponse rsp = SensitiveWordsRecognitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SensitiveWordsRecognitionOutcome(rsp);
        else
            return SensitiveWordsRecognitionOutcome(o.GetError());
    }
    else
    {
        return SensitiveWordsRecognitionOutcome(outcome.GetError());
    }
}

void NlpClient::SensitiveWordsRecognitionAsync(const SensitiveWordsRecognitionRequest& request, const SensitiveWordsRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SensitiveWordsRecognition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SensitiveWordsRecognitionOutcomeCallable NlpClient::SensitiveWordsRecognitionCallable(const SensitiveWordsRecognitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SensitiveWordsRecognitionOutcome()>>(
        [this, request]()
        {
            return this->SensitiveWordsRecognition(request);
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

NlpClient::SentenceSimilarityOutcome NlpClient::SentenceSimilarity(const SentenceSimilarityRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceSimilarity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceSimilarityResponse rsp = SentenceSimilarityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceSimilarityOutcome(rsp);
        else
            return SentenceSimilarityOutcome(o.GetError());
    }
    else
    {
        return SentenceSimilarityOutcome(outcome.GetError());
    }
}

void NlpClient::SentenceSimilarityAsync(const SentenceSimilarityRequest& request, const SentenceSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentenceSimilarity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SentenceSimilarityOutcomeCallable NlpClient::SentenceSimilarityCallable(const SentenceSimilarityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentenceSimilarityOutcome()>>(
        [this, request]()
        {
            return this->SentenceSimilarity(request);
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

NlpClient::TextApprovalOutcome NlpClient::TextApproval(const TextApprovalRequest &request)
{
    auto outcome = MakeRequest(request, "TextApproval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextApprovalResponse rsp = TextApprovalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextApprovalOutcome(rsp);
        else
            return TextApprovalOutcome(o.GetError());
    }
    else
    {
        return TextApprovalOutcome(outcome.GetError());
    }
}

void NlpClient::TextApprovalAsync(const TextApprovalRequest& request, const TextApprovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextApproval(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextApprovalOutcomeCallable NlpClient::TextApprovalCallable(const TextApprovalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextApprovalOutcome()>>(
        [this, request]()
        {
            return this->TextApproval(request);
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

