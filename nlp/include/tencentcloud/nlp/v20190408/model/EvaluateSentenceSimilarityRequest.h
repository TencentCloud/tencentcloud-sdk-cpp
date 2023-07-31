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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/SentencePair.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * EvaluateSentenceSimilarity请求参数结构体
                */
                class EvaluateSentenceSimilarityRequest : public AbstractModel
                {
                public:
                    EvaluateSentenceSimilarityRequest();
                    ~EvaluateSentenceSimilarityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待分析的句子对数组。句子对应不超过1对，仅支持中文文本，原句子与目标句子均应不超过500字符。
                     * @return SentencePairList 待分析的句子对数组。句子对应不超过1对，仅支持中文文本，原句子与目标句子均应不超过500字符。
                     * 
                     */
                    std::vector<SentencePair> GetSentencePairList() const;

                    /**
                     * 设置待分析的句子对数组。句子对应不超过1对，仅支持中文文本，原句子与目标句子均应不超过500字符。
                     * @param _sentencePairList 待分析的句子对数组。句子对应不超过1对，仅支持中文文本，原句子与目标句子均应不超过500字符。
                     * 
                     */
                    void SetSentencePairList(const std::vector<SentencePair>& _sentencePairList);

                    /**
                     * 判断参数 SentencePairList 是否已赋值
                     * @return SentencePairList 是否已赋值
                     * 
                     */
                    bool SentencePairListHasBeenSet() const;

                private:

                    /**
                     * 待分析的句子对数组。句子对应不超过1对，仅支持中文文本，原句子与目标句子均应不超过500字符。
                     */
                    std::vector<SentencePair> m_sentencePairList;
                    bool m_sentencePairListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_EVALUATESENTENCESIMILARITYREQUEST_H_
