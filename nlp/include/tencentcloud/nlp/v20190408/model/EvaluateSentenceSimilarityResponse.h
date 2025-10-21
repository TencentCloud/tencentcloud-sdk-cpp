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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * EvaluateSentenceSimilarity返回参数结构体
                */
                class EvaluateSentenceSimilarityResponse : public AbstractModel
                {
                public:
                    EvaluateSentenceSimilarityResponse();
                    ~EvaluateSentenceSimilarityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取每个句子对的相似度分值。
                     * @return ScoreList 每个句子对的相似度分值。
                     * 
                     */
                    std::vector<double> GetScoreList() const;

                    /**
                     * 判断参数 ScoreList 是否已赋值
                     * @return ScoreList 是否已赋值
                     * 
                     */
                    bool ScoreListHasBeenSet() const;

                private:

                    /**
                     * 每个句子对的相似度分值。
                     */
                    std::vector<double> m_scoreList;
                    bool m_scoreListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYRESPONSE_H_
