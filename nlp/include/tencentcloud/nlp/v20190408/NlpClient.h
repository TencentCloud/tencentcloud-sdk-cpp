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
#include <tencentcloud/nlp/v20190408/model/ParseWordsRequest.h>
#include <tencentcloud/nlp/v20190408/model/ParseWordsResponse.h>
#include <tencentcloud/nlp/v20190408/model/SentenceCorrectionRequest.h>
#include <tencentcloud/nlp/v20190408/model/SentenceCorrectionResponse.h>


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
                typedef Outcome<Core::Error, Model::ParseWordsResponse> ParseWordsOutcome;
                typedef std::future<ParseWordsOutcome> ParseWordsOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::ParseWordsRequest&, ParseWordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ParseWordsAsyncHandler;
                typedef Outcome<Core::Error, Model::SentenceCorrectionResponse> SentenceCorrectionOutcome;
                typedef std::future<SentenceCorrectionOutcome> SentenceCorrectionOutcomeCallable;
                typedef std::function<void(const NlpClient*, const Model::SentenceCorrectionRequest&, SentenceCorrectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceCorrectionAsyncHandler;



                /**
                 *情感分析接口能够对带有情感色彩的主观性文本进行分析、处理、归纳和推理，识别出用户的情感倾向，是积极、中性还是消极，并且提供各自概率。
                 * @param req AnalyzeSentimentRequest
                 * @return AnalyzeSentimentOutcome
                 */
                AnalyzeSentimentOutcome AnalyzeSentiment(const Model::AnalyzeSentimentRequest &request);
                void AnalyzeSentimentAsync(const Model::AnalyzeSentimentRequest& request, const AnalyzeSentimentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeSentimentOutcomeCallable AnalyzeSentimentCallable(const Model::AnalyzeSentimentRequest& request);

                /**
                 *通过精准地对文本进行分词、词性标注、命名实体识别等功能，助您更好地理解文本内容，挖掘出潜在的价值信息。
                 * @param req ParseWordsRequest
                 * @return ParseWordsOutcome
                 */
                ParseWordsOutcome ParseWords(const Model::ParseWordsRequest &request);
                void ParseWordsAsync(const Model::ParseWordsRequest& request, const ParseWordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ParseWordsOutcomeCallable ParseWordsCallable(const Model::ParseWordsRequest& request);

                /**
                 *智能识别并纠正句子中的语法、拼写、用词等错误，确保文本的准确性和可读性。
                 * @param req SentenceCorrectionRequest
                 * @return SentenceCorrectionOutcome
                 */
                SentenceCorrectionOutcome SentenceCorrection(const Model::SentenceCorrectionRequest &request);
                void SentenceCorrectionAsync(const Model::SentenceCorrectionRequest& request, const SentenceCorrectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceCorrectionOutcomeCallable SentenceCorrectionCallable(const Model::SentenceCorrectionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_NLPCLIENT_H_
