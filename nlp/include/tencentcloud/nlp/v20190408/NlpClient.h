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
#include <tencentcloud/nlp/v20190408/model/AutoSummarizationRequest.h>
#include <tencentcloud/nlp/v20190408/model/AutoSummarizationResponse.h>
#include <tencentcloud/nlp/v20190408/model/ChatBotRequest.h>
#include <tencentcloud/nlp/v20190408/model/ChatBotResponse.h>
#include <tencentcloud/nlp/v20190408/model/CreateDictRequest.h>
#include <tencentcloud/nlp/v20190408/model/CreateDictResponse.h>
#include <tencentcloud/nlp/v20190408/model/CreateWordItemsRequest.h>
#include <tencentcloud/nlp/v20190408/model/CreateWordItemsResponse.h>
#include <tencentcloud/nlp/v20190408/model/DeleteDictRequest.h>
#include <tencentcloud/nlp/v20190408/model/DeleteDictResponse.h>
#include <tencentcloud/nlp/v20190408/model/DeleteWordItemsRequest.h>
#include <tencentcloud/nlp/v20190408/model/DeleteWordItemsResponse.h>
#include <tencentcloud/nlp/v20190408/model/DependencyParsingRequest.h>
#include <tencentcloud/nlp/v20190408/model/DependencyParsingResponse.h>
#include <tencentcloud/nlp/v20190408/model/DescribeDictRequest.h>
#include <tencentcloud/nlp/v20190408/model/DescribeDictResponse.h>
#include <tencentcloud/nlp/v20190408/model/DescribeDictsRequest.h>
#include <tencentcloud/nlp/v20190408/model/DescribeDictsResponse.h>
#include <tencentcloud/nlp/v20190408/model/DescribeWordItemsRequest.h>
#include <tencentcloud/nlp/v20190408/model/DescribeWordItemsResponse.h>
#include <tencentcloud/nlp/v20190408/model/KeywordsExtractionRequest.h>
#include <tencentcloud/nlp/v20190408/model/KeywordsExtractionResponse.h>
#include <tencentcloud/nlp/v20190408/model/LexicalAnalysisRequest.h>
#include <tencentcloud/nlp/v20190408/model/LexicalAnalysisResponse.h>
#include <tencentcloud/nlp/v20190408/model/SearchWordItemsRequest.h>
#include <tencentcloud/nlp/v20190408/model/SearchWordItemsResponse.h>
#include <tencentcloud/nlp/v20190408/model/SentenceEmbeddingRequest.h>
#include <tencentcloud/nlp/v20190408/model/SentenceEmbeddingResponse.h>
#include <tencentcloud/nlp/v20190408/model/SentimentAnalysisRequest.h>
#include <tencentcloud/nlp/v20190408/model/SentimentAnalysisResponse.h>
#include <tencentcloud/nlp/v20190408/model/SimilarWordsRequest.h>
#include <tencentcloud/nlp/v20190408/model/SimilarWordsResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextClassificationRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextClassificationResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextCorrectionRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextCorrectionResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextCorrectionProRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextCorrectionProResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextSimilarityRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextSimilarityResponse.h>
#include <tencentcloud/nlp/v20190408/model/TextSimilarityProRequest.h>
#include <tencentcloud/nlp/v20190408/model/TextSimilarityProResponse.h>
#include <tencentcloud/nlp/v20190408/model/UpdateDictRequest.h>
#include <tencentcloud/nlp/v20190408/model/UpdateDictResponse.h>
#include <tencentcloud/nlp/v20190408/model/WordEmbeddingRequest.h>
#include <tencentcloud/nlp/v20190408/model/WordEmbeddingResponse.h>
#include <tencentcloud/nlp/v20190408/model/WordSimilarityRequest.h>
#include <tencentcloud/nlp/v20190408/model/WordSimilarityResponse.h>


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

                typedef Outcome<Core::Error, Model::AutoSummarizationResponse> AutoSummarizationOutcome;
                typedef std::future<AutoSummarizationOutcome> AutoSummarizationOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::AutoSummarizationRequest&, AutoSummarizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AutoSummarizationAsyncHandler;
                typedef Outcome<Core::Error, Model::ChatBotResponse> ChatBotOutcome;
                typedef std::future<ChatBotOutcome> ChatBotOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ChatBotRequest&, ChatBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChatBotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDictResponse> CreateDictOutcome;
                typedef std::future<CreateDictOutcome> CreateDictOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::CreateDictRequest&, CreateDictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDictAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWordItemsResponse> CreateWordItemsOutcome;
                typedef std::future<CreateWordItemsOutcome> CreateWordItemsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::CreateWordItemsRequest&, CreateWordItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWordItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDictResponse> DeleteDictOutcome;
                typedef std::future<DeleteDictOutcome> DeleteDictOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DeleteDictRequest&, DeleteDictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDictAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWordItemsResponse> DeleteWordItemsOutcome;
                typedef std::future<DeleteWordItemsOutcome> DeleteWordItemsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DeleteWordItemsRequest&, DeleteWordItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWordItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::DependencyParsingResponse> DependencyParsingOutcome;
                typedef std::future<DependencyParsingOutcome> DependencyParsingOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DependencyParsingRequest&, DependencyParsingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DependencyParsingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDictResponse> DescribeDictOutcome;
                typedef std::future<DescribeDictOutcome> DescribeDictOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DescribeDictRequest&, DescribeDictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDictAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDictsResponse> DescribeDictsOutcome;
                typedef std::future<DescribeDictsOutcome> DescribeDictsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DescribeDictsRequest&, DescribeDictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWordItemsResponse> DescribeWordItemsOutcome;
                typedef std::future<DescribeWordItemsOutcome> DescribeWordItemsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::DescribeWordItemsRequest&, DescribeWordItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWordItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::KeywordsExtractionResponse> KeywordsExtractionOutcome;
                typedef std::future<KeywordsExtractionOutcome> KeywordsExtractionOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::KeywordsExtractionRequest&, KeywordsExtractionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> KeywordsExtractionAsyncHandler;
                typedef Outcome<Core::Error, Model::LexicalAnalysisResponse> LexicalAnalysisOutcome;
                typedef std::future<LexicalAnalysisOutcome> LexicalAnalysisOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::LexicalAnalysisRequest&, LexicalAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LexicalAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchWordItemsResponse> SearchWordItemsOutcome;
                typedef std::future<SearchWordItemsOutcome> SearchWordItemsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SearchWordItemsRequest&, SearchWordItemsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchWordItemsAsyncHandler;
                typedef Outcome<Core::Error, Model::SentenceEmbeddingResponse> SentenceEmbeddingOutcome;
                typedef std::future<SentenceEmbeddingOutcome> SentenceEmbeddingOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SentenceEmbeddingRequest&, SentenceEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::SentimentAnalysisResponse> SentimentAnalysisOutcome;
                typedef std::future<SentimentAnalysisOutcome> SentimentAnalysisOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SentimentAnalysisRequest&, SentimentAnalysisOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentimentAnalysisAsyncHandler;
                typedef Outcome<Core::Error, Model::SimilarWordsResponse> SimilarWordsOutcome;
                typedef std::future<SimilarWordsOutcome> SimilarWordsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SimilarWordsRequest&, SimilarWordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SimilarWordsAsyncHandler;
                typedef Outcome<Core::Error, Model::TextClassificationResponse> TextClassificationOutcome;
                typedef std::future<TextClassificationOutcome> TextClassificationOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextClassificationRequest&, TextClassificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextClassificationAsyncHandler;
                typedef Outcome<Core::Error, Model::TextCorrectionResponse> TextCorrectionOutcome;
                typedef std::future<TextCorrectionOutcome> TextCorrectionOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextCorrectionRequest&, TextCorrectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextCorrectionAsyncHandler;
                typedef Outcome<Core::Error, Model::TextCorrectionProResponse> TextCorrectionProOutcome;
                typedef std::future<TextCorrectionProOutcome> TextCorrectionProOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextCorrectionProRequest&, TextCorrectionProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextCorrectionProAsyncHandler;
                typedef Outcome<Core::Error, Model::TextSimilarityResponse> TextSimilarityOutcome;
                typedef std::future<TextSimilarityOutcome> TextSimilarityOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextSimilarityRequest&, TextSimilarityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextSimilarityAsyncHandler;
                typedef Outcome<Core::Error, Model::TextSimilarityProResponse> TextSimilarityProOutcome;
                typedef std::future<TextSimilarityProOutcome> TextSimilarityProOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::TextSimilarityProRequest&, TextSimilarityProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextSimilarityProAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDictResponse> UpdateDictOutcome;
                typedef std::future<UpdateDictOutcome> UpdateDictOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::UpdateDictRequest&, UpdateDictOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDictAsyncHandler;
                typedef Outcome<Core::Error, Model::WordEmbeddingResponse> WordEmbeddingOutcome;
                typedef std::future<WordEmbeddingOutcome> WordEmbeddingOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::WordEmbeddingRequest&, WordEmbeddingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WordEmbeddingAsyncHandler;
                typedef Outcome<Core::Error, Model::WordSimilarityResponse> WordSimilarityOutcome;
                typedef std::future<WordSimilarityOutcome> WordSimilarityOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::WordSimilarityRequest&, WordSimilarityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WordSimilarityAsyncHandler;



                /**
                 *利用人工智能算法，自动抽取文本中的关键信息并生成指定长度的文本摘要。可用于新闻标题生成、科技文献摘要生成和商品评论摘要等。
                 * @param req AutoSummarizationRequest
                 * @return AutoSummarizationOutcome
                 */
                AutoSummarizationOutcome AutoSummarization(const Model::AutoSummarizationRequest &request);
                void AutoSummarizationAsync(const Model::AutoSummarizationRequest& request, const AutoSummarizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AutoSummarizationOutcomeCallable AutoSummarizationCallable(const Model::AutoSummarizationRequest& request);

                /**
                 *闲聊服务基于腾讯领先的NLP引擎能力、数据运算能力和千亿级互联网语料数据的支持，同时集成了广泛的知识问答能力，可实现上百种自定义属性配置，以及儿童语言风格及说话方式，从而让聊天变得更睿智、简单和有趣。


                 * @param req ChatBotRequest
                 * @return ChatBotOutcome
                 */
                ChatBotOutcome ChatBot(const Model::ChatBotRequest &request);
                void ChatBotAsync(const Model::ChatBotRequest& request, const ChatBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChatBotOutcomeCallable ChatBotCallable(const Model::ChatBotRequest& request);

                /**
                 *根据指定的名称、描述创建自定义词库。
                 * @param req CreateDictRequest
                 * @return CreateDictOutcome
                 */
                CreateDictOutcome CreateDict(const Model::CreateDictRequest &request);
                void CreateDictAsync(const Model::CreateDictRequest& request, const CreateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDictOutcomeCallable CreateDictCallable(const Model::CreateDictRequest& request);

                /**
                 *向指定的词库中添加词条。
                 * @param req CreateWordItemsRequest
                 * @return CreateWordItemsOutcome
                 */
                CreateWordItemsOutcome CreateWordItems(const Model::CreateWordItemsRequest &request);
                void CreateWordItemsAsync(const Model::CreateWordItemsRequest& request, const CreateWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWordItemsOutcomeCallable CreateWordItemsCallable(const Model::CreateWordItemsRequest& request);

                /**
                 *删除自定义词库，会附带相应删除词库包含的所有词条。
                 * @param req DeleteDictRequest
                 * @return DeleteDictOutcome
                 */
                DeleteDictOutcome DeleteDict(const Model::DeleteDictRequest &request);
                void DeleteDictAsync(const Model::DeleteDictRequest& request, const DeleteDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDictOutcomeCallable DeleteDictCallable(const Model::DeleteDictRequest& request);

                /**
                 *用于删除自定义词库中的词条。
                 * @param req DeleteWordItemsRequest
                 * @return DeleteWordItemsOutcome
                 */
                DeleteWordItemsOutcome DeleteWordItems(const Model::DeleteWordItemsRequest &request);
                void DeleteWordItemsAsync(const Model::DeleteWordItemsRequest& request, const DeleteWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWordItemsOutcomeCallable DeleteWordItemsCallable(const Model::DeleteWordItemsRequest& request);

                /**
                 *句法依存分析接口能够分析出句子中词与词之间的相互依存关系，并揭示其句法结构，包括主谓关系、动宾关系、核心关系等等，可用于提取句子主干、提取句子核心词等，在机器翻译、自动问答、知识抽取等领域都有很好的应用。
                 * @param req DependencyParsingRequest
                 * @return DependencyParsingOutcome
                 */
                DependencyParsingOutcome DependencyParsing(const Model::DependencyParsingRequest &request);
                void DependencyParsingAsync(const Model::DependencyParsingRequest& request, const DependencyParsingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DependencyParsingOutcomeCallable DependencyParsingCallable(const Model::DependencyParsingRequest& request);

                /**
                 *根据id或名称查询自定义词库信息。
                 * @param req DescribeDictRequest
                 * @return DescribeDictOutcome
                 */
                DescribeDictOutcome DescribeDict(const Model::DescribeDictRequest &request);
                void DescribeDictAsync(const Model::DescribeDictRequest& request, const DescribeDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDictOutcomeCallable DescribeDictCallable(const Model::DescribeDictRequest& request);

                /**
                 *返回属于当前用户的所有自定义词库列表。
                 * @param req DescribeDictsRequest
                 * @return DescribeDictsOutcome
                 */
                DescribeDictsOutcome DescribeDicts(const Model::DescribeDictsRequest &request);
                void DescribeDictsAsync(const Model::DescribeDictsRequest& request, const DescribeDictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDictsOutcomeCallable DescribeDictsCallable(const Model::DescribeDictsRequest& request);

                /**
                 *依据自定义词库的ID，查询对应的词条信息。
                 * @param req DescribeWordItemsRequest
                 * @return DescribeWordItemsOutcome
                 */
                DescribeWordItemsOutcome DescribeWordItems(const Model::DescribeWordItemsRequest &request);
                void DescribeWordItemsAsync(const Model::DescribeWordItemsRequest& request, const DescribeWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWordItemsOutcomeCallable DescribeWordItemsCallable(const Model::DescribeWordItemsRequest& request);

                /**
                 *基于关键词提取平台，通过对文本内容进行深度分析，提取出文本内容中的关键信息，为用户实现诸如新闻内容关键词自动提取、评论关键词提取等提供基础服务。
                 * @param req KeywordsExtractionRequest
                 * @return KeywordsExtractionOutcome
                 */
                KeywordsExtractionOutcome KeywordsExtraction(const Model::KeywordsExtractionRequest &request);
                void KeywordsExtractionAsync(const Model::KeywordsExtractionRequest& request, const KeywordsExtractionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                KeywordsExtractionOutcomeCallable KeywordsExtractionCallable(const Model::KeywordsExtractionRequest& request);

                /**
                 *词法分析接口提供以下三个功能：

1、智能分词：将连续的自然语言文本，切分成具有语义合理性和完整性的词汇序列；

2、词性标注：为每一个词附上对应的词性，例如名词、代词、形容词、动词等；

3、命名实体识别：快速识别文本中的实体，例如人名、地名、机构名等。

所有的功能均基于千亿级大规模互联网语料进行持续迭代更新，以保证效果不断提升，用户无需担心新词发现、歧义消除、调用性能等问题。目前词法分析已经在泛互联网、金融、政务等不同垂直领域提供业务支持，并取得良好的效果。
                 * @param req LexicalAnalysisRequest
                 * @return LexicalAnalysisOutcome
                 */
                LexicalAnalysisOutcome LexicalAnalysis(const Model::LexicalAnalysisRequest &request);
                void LexicalAnalysisAsync(const Model::LexicalAnalysisRequest& request, const LexicalAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LexicalAnalysisOutcomeCallable LexicalAnalysisCallable(const Model::LexicalAnalysisRequest& request);

                /**
                 *查询指定自定义词库中的词条是否存在。
                 * @param req SearchWordItemsRequest
                 * @return SearchWordItemsOutcome
                 */
                SearchWordItemsOutcome SearchWordItems(const Model::SearchWordItemsRequest &request);
                void SearchWordItemsAsync(const Model::SearchWordItemsRequest& request, const SearchWordItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchWordItemsOutcomeCallable SearchWordItemsCallable(const Model::SearchWordItemsRequest& request);

                /**
                 *句向量接口能够将输入的句子映射成一个固定维度的向量，用来表示这个句子的语义特征，可用于文本聚类、文本相似度、文本分类等任务，能够显著提高它们的效果。

该句向量服务由腾讯云自然语言处理团队联合微信智言团队共同打造，基于千亿级大规模互联网语料并采用Bert等领先的深度神经网络模型训练而成，在腾讯内部诸多业务的NLP任务上实测效果显著。
                 * @param req SentenceEmbeddingRequest
                 * @return SentenceEmbeddingOutcome
                 */
                SentenceEmbeddingOutcome SentenceEmbedding(const Model::SentenceEmbeddingRequest &request);
                void SentenceEmbeddingAsync(const Model::SentenceEmbeddingRequest& request, const SentenceEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceEmbeddingOutcomeCallable SentenceEmbeddingCallable(const Model::SentenceEmbeddingRequest& request);

                /**
                 *情感分析接口能够对带有情感色彩的主观性文本进行分析、处理、归纳和推理，识别出用户的情感倾向，是积极还是消极，并且提供各自概率。

该功能基于千亿级大规模互联网语料和LSTM、BERT等深度神经网络模型进行训练，并持续迭代更新，以保证效果不断提升。
                 * @param req SentimentAnalysisRequest
                 * @return SentimentAnalysisOutcome
                 */
                SentimentAnalysisOutcome SentimentAnalysis(const Model::SentimentAnalysisRequest &request);
                void SentimentAnalysisAsync(const Model::SentimentAnalysisRequest& request, const SentimentAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentimentAnalysisOutcomeCallable SentimentAnalysisCallable(const Model::SentimentAnalysisRequest& request);

                /**
                 *相似词接口能够基于同义词库及词向量技术，检索出与输入词语在语义上最相似的若干个词语，可广泛用于检索系统、问答系统、文档归档等场景。
                 * @param req SimilarWordsRequest
                 * @return SimilarWordsOutcome
                 */
                SimilarWordsOutcome SimilarWords(const Model::SimilarWordsRequest &request);
                void SimilarWordsAsync(const Model::SimilarWordsRequest& request, const SimilarWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SimilarWordsOutcomeCallable SimilarWordsCallable(const Model::SimilarWordsRequest& request);

                /**
                 *文本分类接口能够对用户输入的文本进行自动分类，将其映射到具体的类目上，用户只需要提供待分类的文本，而无需关注具体实现。

该功能基于千亿级大规模互联网语料和LSTM、BERT等深度神经网络模型进行训练，并持续迭代更新，以保证效果不断提升。

目前已提供：

- 通用领域分类体系，二级分类，包括14个分类类目，分别是汽车、科技、健康、体育、旅行、教育、职业、文化、房产、娱乐、女性、奥运、财经以及其他，适用于通用的场景。
                 * @param req TextClassificationRequest
                 * @return TextClassificationOutcome
                 */
                TextClassificationOutcome TextClassification(const Model::TextClassificationRequest &request);
                void TextClassificationAsync(const Model::TextClassificationRequest& request, const TextClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextClassificationOutcomeCallable TextClassificationCallable(const Model::TextClassificationRequest& request);

                /**
                 *提供对中文文本的自动纠错功能，能够识别输入文本中的错误片段，定位错误并给出正确的文本结果；支持长度不超过2000字符（含标点符号）的长文本纠错。

此功能是基于千亿级大规模互联网语料和LSTM、BERT等深度神经网络模型进行训练，并持续迭代更新，以保证效果不断提升，是搜索引擎、语音识别、内容审核等功能更好运行的基础之一。 
                 * @param req TextCorrectionRequest
                 * @return TextCorrectionOutcome
                 */
                TextCorrectionOutcome TextCorrection(const Model::TextCorrectionRequest &request);
                void TextCorrectionAsync(const Model::TextCorrectionRequest& request, const TextCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextCorrectionOutcomeCallable TextCorrectionCallable(const Model::TextCorrectionRequest& request);

                /**
                 *提供对中文文本的自动纠错功能，能够识别输入文本中的错误片段，定位错误并给出正确的文本结果；支持长度不超过128字符（含标点符号）的长文本纠错。

此功能是基于千亿级大规模互联网语料和LSTM、BERT等深度神经网络模型进行训练，并持续迭代更新，以保证效果不断提升，是搜索引擎、语音识别、内容审核等功能更好运行的基础之一。
                 * @param req TextCorrectionProRequest
                 * @return TextCorrectionProOutcome
                 */
                TextCorrectionProOutcome TextCorrectionPro(const Model::TextCorrectionProRequest &request);
                void TextCorrectionProAsync(const Model::TextCorrectionProRequest& request, const TextCorrectionProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextCorrectionProOutcomeCallable TextCorrectionProCallable(const Model::TextCorrectionProRequest& request);

                /**
                 *句子相似度接口能够基于深度学习技术来计算一个源句子和多个目标句子的相似度，相似度分值越大的两个句子在语义上越相似。目前仅支持短文本（不超过500字符）的相似度计算，长文本的相似度计算也即将推出。

鉴于句子相似度是一个应用非常广泛的功能，腾讯云自然语言处理团队在Bert等领先的深度神经网络模型的基础上，专门针对文本相似任务进行了优化，并持续迭代更新。基于句子相似度，可以轻松实现诸如文本去重、相似推荐等功能。

接口将以句子数量为单位消耗资源包，而不是调用接口次数为单位。
                 * @param req TextSimilarityRequest
                 * @return TextSimilarityOutcome
                 */
                TextSimilarityOutcome TextSimilarity(const Model::TextSimilarityRequest &request);
                void TextSimilarityAsync(const Model::TextSimilarityRequest& request, const TextSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextSimilarityOutcomeCallable TextSimilarityCallable(const Model::TextSimilarityRequest& request);

                /**
                 *句子相似度接口能够基于深度学习技术来计算一个源句子和多个目标句子的相似度，相似度分值越大的两个句子在语义上越相似。目前仅支持短文本（不超过128字符）的相似度计算，长文本的相似度计算也即将推出。

鉴于句子相似度是一个应用非常广泛的功能，腾讯云自然语言处理团队在Bert等领先的深度神经网络模型的基础上，专门针对文本相似任务进行了优化，并持续迭代更新。基于句子相似度，可以轻松实现诸如文本去重、相似推荐等功能。

接口将以句子数量为单位消耗资源包，而不是调用接口次数为单位。
                 * @param req TextSimilarityProRequest
                 * @return TextSimilarityProOutcome
                 */
                TextSimilarityProOutcome TextSimilarityPro(const Model::TextSimilarityProRequest &request);
                void TextSimilarityProAsync(const Model::TextSimilarityProRequest& request, const TextSimilarityProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextSimilarityProOutcomeCallable TextSimilarityProCallable(const Model::TextSimilarityProRequest& request);

                /**
                 *修改自定义词库元数据信息，包括名称、描述。
                 * @param req UpdateDictRequest
                 * @return UpdateDictOutcome
                 */
                UpdateDictOutcome UpdateDict(const Model::UpdateDictRequest &request);
                void UpdateDictAsync(const Model::UpdateDictRequest& request, const UpdateDictAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDictOutcomeCallable UpdateDictCallable(const Model::UpdateDictRequest& request);

                /**
                 *词向量接口能够将输入的词语映射成一个固定维度的词向量，用来表示这个词语的语义特征。词向量是很多自然语言处理技术的基础，能够显著提高它们的效果。

该词向量服务由腾讯知文自然语言处理团队联合腾讯AI Lab共同打造。使用的词向量基于千亿级大规模互联网语料并采用AI Lab自研的DSG算法训练而成，开源的词向量包含800多万中文词汇，在覆盖率、新鲜度及准确性等三方面性能突出。

腾讯AI Lab词向量相关资料：

https://ai.tencent.com/ailab/zh/news/detial?id=22

https://ai.tencent.com/ailab/nlp/zh/embedding.html
                 * @param req WordEmbeddingRequest
                 * @return WordEmbeddingOutcome
                 */
                WordEmbeddingOutcome WordEmbedding(const Model::WordEmbeddingRequest &request);
                void WordEmbeddingAsync(const Model::WordEmbeddingRequest& request, const WordEmbeddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WordEmbeddingOutcomeCallable WordEmbeddingCallable(const Model::WordEmbeddingRequest& request);

                /**
                 *词相似度接口能够基于词向量技术来计算两个输入词语的余弦相似度，相似度数值越大的两个词语在语义上越相似。
                 * @param req WordSimilarityRequest
                 * @return WordSimilarityOutcome
                 */
                WordSimilarityOutcome WordSimilarity(const Model::WordSimilarityRequest &request);
                void WordSimilarityAsync(const Model::WordSimilarityRequest& request, const WordSimilarityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WordSimilarityOutcomeCallable WordSimilarityCallable(const Model::WordSimilarityRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_NLPCLIENT_H_
