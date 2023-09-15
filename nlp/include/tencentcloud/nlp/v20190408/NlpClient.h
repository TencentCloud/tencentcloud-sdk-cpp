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

#ifndef TENCENTCLOUD_NLP_V20190408_NLPCLIENT_H_
#define TENCENTCLOUD_NLP_V20190408_NLPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/nlp/v20190408/model/AnalyzeSentimentRequest.h>
#include <tencentcloud/nlp/v20190408/model/AnalyzeSentimentResponse.h>
#include <tencentcloud/nlp/v20190408/model/ClassifyContentRequest.h>
#include <tencentcloud/nlp/v20190408/model/ClassifyContentResponse.h>
#include <tencentcloud/nlp/v20190408/model/ComposeCoupletRequest.h>
#include <tencentcloud/nlp/v20190408/model/ComposeCoupletResponse.h>
#include <tencentcloud/nlp/v20190408/model/ComposePoetryRequest.h>
#include <tencentcloud/nlp/v20190408/model/ComposePoetryResponse.h>
#include <tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityRequest.h>
#include <tencentcloud/nlp/v20190408/model/EvaluateSentenceSimilarityResponse.h>
#include <tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityRequest.h>
#include <tencentcloud/nlp/v20190408/model/EvaluateWordSimilarityResponse.h>
#include <tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceRequest.h>
#include <tencentcloud/nlp/v20190408/model/GenerateKeywordSentenceResponse.h>
#include <tencentcloud/nlp/v20190408/model/ParseWordsRequest.h>
#include <tencentcloud/nlp/v20190408/model/ParseWordsResponse.h>
#include <tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsRequest.h>
#include <tencentcloud/nlp/v20190408/model/RetrieveSimilarWordsResponse.h>
#include <tencentcloud/nlp/v20190408/model/SentenceCorrectionRequest.h>
#include <tencentcloud/nlp/v20190408/model/SentenceCorrectionResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextEmbellishRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextEmbellishResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextWritingRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextWritingResponse.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            class NlpClient : public AbstractClient
            {
            public:
                NlpClient(const Credential &credential, const std::string &region);
                NlpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AnalyzeSentimentResponse> AnalyzeSentimentOutcome;
                typedef std::future<AnalyzeSentimentOutcome> AnalyzeSentimentOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::AnalyzeSentimentRequest&, AnalyzeSentimentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeSentimentAsyncHandler;
                typedef Outcome<Core::Error, Model::ClassifyContentResponse> ClassifyContentOutcome;
                typedef std::future<ClassifyContentOutcome> ClassifyContentOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ClassifyContentRequest&, ClassifyContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ClassifyContentAsyncHandler;
                typedef Outcome<Core::Error, Model::ComposeCoupletResponse> ComposeCoupletOutcome;
                typedef std::future<ComposeCoupletOutcome> ComposeCoupletOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ComposeCoupletRequest&, ComposeCoupletOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ComposeCoupletAsyncHandler;
                typedef Outcome<Core::Error, Model::ComposePoetryResponse> ComposePoetryOutcome;
                typedef std::future<ComposePoetryOutcome> ComposePoetryOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ComposePoetryRequest&, ComposePoetryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ComposePoetryAsyncHandler;
                typedef Outcome<Core::Error, Model::EvaluateSentenceSimilarityResponse> EvaluateSentenceSimilarityOutcome;
                typedef std::future<EvaluateSentenceSimilarityOutcome> EvaluateSentenceSimilarityOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::EvaluateSentenceSimilarityRequest&, EvaluateSentenceSimilarityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateSentenceSimilarityAsyncHandler;
                typedef Outcome<Core::Error, Model::EvaluateWordSimilarityResponse> EvaluateWordSimilarityOutcome;
                typedef std::future<EvaluateWordSimilarityOutcome> EvaluateWordSimilarityOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::EvaluateWordSimilarityRequest&, EvaluateWordSimilarityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EvaluateWordSimilarityAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateKeywordSentenceResponse> GenerateKeywordSentenceOutcome;
                typedef std::future<GenerateKeywordSentenceOutcome> GenerateKeywordSentenceOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::GenerateKeywordSentenceRequest&, GenerateKeywordSentenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateKeywordSentenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ParseWordsResponse> ParseWordsOutcome;
                typedef std::future<ParseWordsOutcome> ParseWordsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ParseWordsRequest&, ParseWordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseWordsAsyncHandler;
                typedef Outcome<Core::Error, Model::RetrieveSimilarWordsResponse> RetrieveSimilarWordsOutcome;
                typedef std::future<RetrieveSimilarWordsOutcome> RetrieveSimilarWordsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::RetrieveSimilarWordsRequest&, RetrieveSimilarWordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetrieveSimilarWordsAsyncHandler;
                typedef Outcome<Core::Error, Model::SentenceCorrectionResponse> SentenceCorrectionOutcome;
                typedef std::future<SentenceCorrectionOutcome> SentenceCorrectionOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SentenceCorrectionRequest&, SentenceCorrectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceCorrectionAsyncHandler;
                typedef Outcome<Core::Error, Model::TextEmbellishResponse> TextEmbellishOutcome;
                typedef std::future<TextEmbellishOutcome> TextEmbellishOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextEmbellishRequest&, TextEmbellishOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextEmbellishAsyncHandler;
                typedef Outcome<Core::Error, Model::TextWritingResponse> TextWritingOutcome;
                typedef std::future<TextWritingOutcome> TextWritingOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextWritingRequest&, TextWritingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextWritingAsyncHandler;



                /**
                 *情感分析接口能够对带有情感色彩的主观性文本进行分析、处理、归纳和推理，识别出用户的情感倾向，是积极、中性还是消极，并且提供各自概率。
                 * @param req AnalyzeSentimentRequest
                 * @return AnalyzeSentimentOutcome
                 */
                AnalyzeSentimentOutcome AnalyzeSentiment(const Model::AnalyzeSentimentRequest &request);
                void AnalyzeSentimentAsync(const Model::AnalyzeSentimentRequest& request, const AnalyzeSentimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeSentimentOutcomeCallable AnalyzeSentimentCallable(const Model::AnalyzeSentimentRequest& request);

                /**
                 *文本分类接口能够对用户输入的文章进行自动分类，将其映射到具体的类目上，用户只需要提供待分类的文本，而无需关注具体实现。该功能定义了一套较为完备的[三级分类体系](https://cloud.tencent.com/document/product/271/94286)，积累了数百万的语料，经过多轮迭代优化打造了较先进的深度学习模型，以保证效果不断提升。
                 * @param req ClassifyContentRequest
                 * @return ClassifyContentOutcome
                 */
                ClassifyContentOutcome ClassifyContent(const Model::ClassifyContentRequest &request);
                void ClassifyContentAsync(const Model::ClassifyContentRequest& request, const ClassifyContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ClassifyContentOutcomeCallable ClassifyContentCallable(const Model::ClassifyContentRequest& request);

                /**
                 *对联生成接口根据用户输入的命题关键词，智能生成一副完整的春联，包括上联、下联和横批。该接口利用先进的自然语言处理技术，确保生成的春联既符合传统对仗、对韵、对义的要求，又具有新意和创意，为用户提供独特的春节祝福。
                 * @param req ComposeCoupletRequest
                 * @return ComposeCoupletOutcome
                 */
                ComposeCoupletOutcome ComposeCouplet(const Model::ComposeCoupletRequest &request);
                void ComposeCoupletAsync(const Model::ComposeCoupletRequest& request, const ComposeCoupletAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposeCoupletOutcomeCallable ComposeCoupletCallable(const Model::ComposeCoupletRequest& request);

                /**
                 *诗词生成接口利用现代的自然语言处理和深度学习技术，模仿了古代著名诗人的风格，为用户产生独特的诗词。用户只需输入的命题关键词，接口就能自动生成一首七言律诗或五言律诗。
                 * @param req ComposePoetryRequest
                 * @return ComposePoetryOutcome
                 */
                ComposePoetryOutcome ComposePoetry(const Model::ComposePoetryRequest &request);
                void ComposePoetryAsync(const Model::ComposePoetryRequest& request, const ComposePoetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ComposePoetryOutcomeCallable ComposePoetryCallable(const Model::ComposePoetryRequest& request);

                /**
                 *通过计算句子间的语义相似性，帮助您快速找到文本中重复或相似的句子，用于文本聚类、相似问题检索等应用场景。
                 * @param req EvaluateSentenceSimilarityRequest
                 * @return EvaluateSentenceSimilarityOutcome
                 */
                EvaluateSentenceSimilarityOutcome EvaluateSentenceSimilarity(const Model::EvaluateSentenceSimilarityRequest &request);
                void EvaluateSentenceSimilarityAsync(const Model::EvaluateSentenceSimilarityRequest& request, const EvaluateSentenceSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EvaluateSentenceSimilarityOutcomeCallable EvaluateSentenceSimilarityCallable(const Model::EvaluateSentenceSimilarityRequest& request);

                /**
                 *评估两个词语在语义空间的相似程度，为您的场景应用提供有力支持，如关键词过滤、热门话题挖掘等。（目前仅支持中文）
                 * @param req EvaluateWordSimilarityRequest
                 * @return EvaluateWordSimilarityOutcome
                 */
                EvaluateWordSimilarityOutcome EvaluateWordSimilarity(const Model::EvaluateWordSimilarityRequest &request);
                void EvaluateWordSimilarityAsync(const Model::EvaluateWordSimilarityRequest& request, const EvaluateWordSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EvaluateWordSimilarityOutcomeCallable EvaluateWordSimilarityCallable(const Model::EvaluateWordSimilarityRequest& request);

                /**
                 *根据提供的关键词，生成简洁明了的关键句子，便于用户快速获取核心观点。
                 * @param req GenerateKeywordSentenceRequest
                 * @return GenerateKeywordSentenceOutcome
                 */
                GenerateKeywordSentenceOutcome GenerateKeywordSentence(const Model::GenerateKeywordSentenceRequest &request);
                void GenerateKeywordSentenceAsync(const Model::GenerateKeywordSentenceRequest& request, const GenerateKeywordSentenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateKeywordSentenceOutcomeCallable GenerateKeywordSentenceCallable(const Model::GenerateKeywordSentenceRequest& request);

                /**
                 *通过精准地对文本进行分词、词性标注、命名实体识别等功能，助您更好地理解文本内容，挖掘出潜在的价值信息。
                 * @param req ParseWordsRequest
                 * @return ParseWordsOutcome
                 */
                ParseWordsOutcome ParseWords(const Model::ParseWordsRequest &request);
                void ParseWordsAsync(const Model::ParseWordsRequest& request, const ParseWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseWordsOutcomeCallable ParseWordsCallable(const Model::ParseWordsRequest& request);

                /**
                 *基于大数据和深度学习技术，可以快速地找到与给定词语高度相似的其他词语，有助于提高搜索和推荐的准确性。（目前仅支持中文）
                 * @param req RetrieveSimilarWordsRequest
                 * @return RetrieveSimilarWordsOutcome
                 */
                RetrieveSimilarWordsOutcome RetrieveSimilarWords(const Model::RetrieveSimilarWordsRequest &request);
                void RetrieveSimilarWordsAsync(const Model::RetrieveSimilarWordsRequest& request, const RetrieveSimilarWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetrieveSimilarWordsOutcomeCallable RetrieveSimilarWordsCallable(const Model::RetrieveSimilarWordsRequest& request);

                /**
                 *智能识别并纠正句子中的语法、拼写、用词等错误，确保文本的准确性和可读性。
                 * @param req SentenceCorrectionRequest
                 * @return SentenceCorrectionOutcome
                 */
                SentenceCorrectionOutcome SentenceCorrection(const Model::SentenceCorrectionRequest &request);
                void SentenceCorrectionAsync(const Model::SentenceCorrectionRequest& request, const SentenceCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceCorrectionOutcomeCallable SentenceCorrectionCallable(const Model::SentenceCorrectionRequest& request);

                /**
                 *运用先进的自然语言处理技术，对原始文本进行优化润色，提升文本的通顺性、表达力和语言质量。
                 * @param req TextEmbellishRequest
                 * @return TextEmbellishOutcome
                 */
                TextEmbellishOutcome TextEmbellish(const Model::TextEmbellishRequest &request);
                void TextEmbellishAsync(const Model::TextEmbellishRequest& request, const TextEmbellishAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextEmbellishOutcomeCallable TextEmbellishCallable(const Model::TextEmbellishRequest& request);

                /**
                 *通过自动补全文本片段，帮助用户快速生成高质量、连贯的完整文本，提高创作效率。
                 * @param req TextWritingRequest
                 * @return TextWritingOutcome
                 */
                TextWritingOutcome TextWriting(const Model::TextWritingRequest &request);
                void TextWritingAsync(const Model::TextWritingRequest& request, const TextWritingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextWritingOutcomeCallable TextWritingCallable(const Model::TextWritingRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_NLPCLIENT_H_
