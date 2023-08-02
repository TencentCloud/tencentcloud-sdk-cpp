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


NlpClient::AnalyzeSentimentOutcome NlpClient::AnalyzeSentiment(const AnalyzeSentimentRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeSentiment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeSentimentResponse rsp = AnalyzeSentimentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeSentimentOutcome(rsp);
        else
            return AnalyzeSentimentOutcome(o.GetError());
    }
    else
    {
        return AnalyzeSentimentOutcome(outcome.GetError());
    }
}

void NlpClient::AnalyzeSentimentAsync(const AnalyzeSentimentRequest& request, const AnalyzeSentimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AnalyzeSentiment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::AnalyzeSentimentOutcomeCallable NlpClient::AnalyzeSentimentCallable(const AnalyzeSentimentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AnalyzeSentimentOutcome()>>(
        [this, request]()
        {
            return this->AnalyzeSentiment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::ClassifyContentOutcome NlpClient::ClassifyContent(const ClassifyContentRequest &request)
{
    auto outcome = MakeRequest(request, "ClassifyContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClassifyContentResponse rsp = ClassifyContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClassifyContentOutcome(rsp);
        else
            return ClassifyContentOutcome(o.GetError());
    }
    else
    {
        return ClassifyContentOutcome(outcome.GetError());
    }
}

void NlpClient::ClassifyContentAsync(const ClassifyContentRequest& request, const ClassifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClassifyContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ClassifyContentOutcomeCallable NlpClient::ClassifyContentCallable(const ClassifyContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClassifyContentOutcome()>>(
        [this, request]()
        {
            return this->ClassifyContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::ComposeCoupletOutcome NlpClient::ComposeCouplet(const ComposeCoupletRequest &request)
{
    auto outcome = MakeRequest(request, "ComposeCouplet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ComposeCoupletResponse rsp = ComposeCoupletResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ComposeCoupletOutcome(rsp);
        else
            return ComposeCoupletOutcome(o.GetError());
    }
    else
    {
        return ComposeCoupletOutcome(outcome.GetError());
    }
}

void NlpClient::ComposeCoupletAsync(const ComposeCoupletRequest& request, const ComposeCoupletAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ComposeCouplet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ComposeCoupletOutcomeCallable NlpClient::ComposeCoupletCallable(const ComposeCoupletRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ComposeCoupletOutcome()>>(
        [this, request]()
        {
            return this->ComposeCouplet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::ComposePoetryOutcome NlpClient::ComposePoetry(const ComposePoetryRequest &request)
{
    auto outcome = MakeRequest(request, "ComposePoetry");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ComposePoetryResponse rsp = ComposePoetryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ComposePoetryOutcome(rsp);
        else
            return ComposePoetryOutcome(o.GetError());
    }
    else
    {
        return ComposePoetryOutcome(outcome.GetError());
    }
}

void NlpClient::ComposePoetryAsync(const ComposePoetryRequest& request, const ComposePoetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ComposePoetry(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ComposePoetryOutcomeCallable NlpClient::ComposePoetryCallable(const ComposePoetryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ComposePoetryOutcome()>>(
        [this, request]()
        {
            return this->ComposePoetry(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::EvaluateSentenceSimilarityOutcome NlpClient::EvaluateSentenceSimilarity(const EvaluateSentenceSimilarityRequest &request)
{
    auto outcome = MakeRequest(request, "EvaluateSentenceSimilarity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EvaluateSentenceSimilarityResponse rsp = EvaluateSentenceSimilarityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EvaluateSentenceSimilarityOutcome(rsp);
        else
            return EvaluateSentenceSimilarityOutcome(o.GetError());
    }
    else
    {
        return EvaluateSentenceSimilarityOutcome(outcome.GetError());
    }
}

void NlpClient::EvaluateSentenceSimilarityAsync(const EvaluateSentenceSimilarityRequest& request, const EvaluateSentenceSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EvaluateSentenceSimilarity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::EvaluateSentenceSimilarityOutcomeCallable NlpClient::EvaluateSentenceSimilarityCallable(const EvaluateSentenceSimilarityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EvaluateSentenceSimilarityOutcome()>>(
        [this, request]()
        {
            return this->EvaluateSentenceSimilarity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::EvaluateWordSimilarityOutcome NlpClient::EvaluateWordSimilarity(const EvaluateWordSimilarityRequest &request)
{
    auto outcome = MakeRequest(request, "EvaluateWordSimilarity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EvaluateWordSimilarityResponse rsp = EvaluateWordSimilarityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EvaluateWordSimilarityOutcome(rsp);
        else
            return EvaluateWordSimilarityOutcome(o.GetError());
    }
    else
    {
        return EvaluateWordSimilarityOutcome(outcome.GetError());
    }
}

void NlpClient::EvaluateWordSimilarityAsync(const EvaluateWordSimilarityRequest& request, const EvaluateWordSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EvaluateWordSimilarity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::EvaluateWordSimilarityOutcomeCallable NlpClient::EvaluateWordSimilarityCallable(const EvaluateWordSimilarityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EvaluateWordSimilarityOutcome()>>(
        [this, request]()
        {
            return this->EvaluateWordSimilarity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::GenerateKeywordSentenceOutcome NlpClient::GenerateKeywordSentence(const GenerateKeywordSentenceRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateKeywordSentence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateKeywordSentenceResponse rsp = GenerateKeywordSentenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateKeywordSentenceOutcome(rsp);
        else
            return GenerateKeywordSentenceOutcome(o.GetError());
    }
    else
    {
        return GenerateKeywordSentenceOutcome(outcome.GetError());
    }
}

void NlpClient::GenerateKeywordSentenceAsync(const GenerateKeywordSentenceRequest& request, const GenerateKeywordSentenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GenerateKeywordSentence(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::GenerateKeywordSentenceOutcomeCallable NlpClient::GenerateKeywordSentenceCallable(const GenerateKeywordSentenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GenerateKeywordSentenceOutcome()>>(
        [this, request]()
        {
            return this->GenerateKeywordSentence(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::ParseWordsOutcome NlpClient::ParseWords(const ParseWordsRequest &request)
{
    auto outcome = MakeRequest(request, "ParseWords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseWordsResponse rsp = ParseWordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseWordsOutcome(rsp);
        else
            return ParseWordsOutcome(o.GetError());
    }
    else
    {
        return ParseWordsOutcome(outcome.GetError());
    }
}

void NlpClient::ParseWordsAsync(const ParseWordsRequest& request, const ParseWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ParseWords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::ParseWordsOutcomeCallable NlpClient::ParseWordsCallable(const ParseWordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ParseWordsOutcome()>>(
        [this, request]()
        {
            return this->ParseWords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::RetrieveSimilarWordsOutcome NlpClient::RetrieveSimilarWords(const RetrieveSimilarWordsRequest &request)
{
    auto outcome = MakeRequest(request, "RetrieveSimilarWords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetrieveSimilarWordsResponse rsp = RetrieveSimilarWordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetrieveSimilarWordsOutcome(rsp);
        else
            return RetrieveSimilarWordsOutcome(o.GetError());
    }
    else
    {
        return RetrieveSimilarWordsOutcome(outcome.GetError());
    }
}

void NlpClient::RetrieveSimilarWordsAsync(const RetrieveSimilarWordsRequest& request, const RetrieveSimilarWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RetrieveSimilarWords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::RetrieveSimilarWordsOutcomeCallable NlpClient::RetrieveSimilarWordsCallable(const RetrieveSimilarWordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RetrieveSimilarWordsOutcome()>>(
        [this, request]()
        {
            return this->RetrieveSimilarWords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::SentenceCorrectionOutcome NlpClient::SentenceCorrection(const SentenceCorrectionRequest &request)
{
    auto outcome = MakeRequest(request, "SentenceCorrection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SentenceCorrectionResponse rsp = SentenceCorrectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SentenceCorrectionOutcome(rsp);
        else
            return SentenceCorrectionOutcome(o.GetError());
    }
    else
    {
        return SentenceCorrectionOutcome(outcome.GetError());
    }
}

void NlpClient::SentenceCorrectionAsync(const SentenceCorrectionRequest& request, const SentenceCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SentenceCorrection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::SentenceCorrectionOutcomeCallable NlpClient::SentenceCorrectionCallable(const SentenceCorrectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SentenceCorrectionOutcome()>>(
        [this, request]()
        {
            return this->SentenceCorrection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextEmbellishOutcome NlpClient::TextEmbellish(const TextEmbellishRequest &request)
{
    auto outcome = MakeRequest(request, "TextEmbellish");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextEmbellishResponse rsp = TextEmbellishResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextEmbellishOutcome(rsp);
        else
            return TextEmbellishOutcome(o.GetError());
    }
    else
    {
        return TextEmbellishOutcome(outcome.GetError());
    }
}

void NlpClient::TextEmbellishAsync(const TextEmbellishRequest& request, const TextEmbellishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextEmbellish(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextEmbellishOutcomeCallable NlpClient::TextEmbellishCallable(const TextEmbellishRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextEmbellishOutcome()>>(
        [this, request]()
        {
            return this->TextEmbellish(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

NlpClient::TextWritingOutcome NlpClient::TextWriting(const TextWritingRequest &request)
{
    auto outcome = MakeRequest(request, "TextWriting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextWritingResponse rsp = TextWritingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextWritingOutcome(rsp);
        else
            return TextWritingOutcome(o.GetError());
    }
    else
    {
        return TextWritingOutcome(outcome.GetError());
    }
}

void NlpClient::TextWritingAsync(const TextWritingRequest& request, const TextWritingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TextWriting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

NlpClient::TextWritingOutcomeCallable NlpClient::TextWritingCallable(const TextWritingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TextWritingOutcome()>>(
        [this, request]()
        {
            return this->TextWriting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

