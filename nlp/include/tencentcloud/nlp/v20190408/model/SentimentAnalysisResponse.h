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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISRESPONSE_H_

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
                * SentimentAnalysis返回参数结构体
                */
                class SentimentAnalysisResponse : public AbstractModel
                {
                public:
                    SentimentAnalysisResponse();
                    ~SentimentAnalysisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取正面情感概率
                     * @return Positive 正面情感概率
                     */
                    double GetPositive() const;

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取中性情感概率，当输入参数Mode取值为3class时有效，否则值为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Neutral 中性情感概率，当输入参数Mode取值为3class时有效，否则值为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetNeutral() const;

                    /**
                     * 判断参数 Neutral 是否已赋值
                     * @return Neutral 是否已赋值
                     */
                    bool NeutralHasBeenSet() const;

                    /**
                     * 获取负面情感概率
                     * @return Negative 负面情感概率
                     */
                    double GetNegative() const;

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     */
                    bool NegativeHasBeenSet() const;

                    /**
                     * 获取情感分类结果：
1、positive，表示正面情感
2、negative，表示负面情感
3、neutral，表示中性、无情感
                     * @return Sentiment 情感分类结果：
1、positive，表示正面情感
2、negative，表示负面情感
3、neutral，表示中性、无情感
                     */
                    std::string GetSentiment() const;

                    /**
                     * 判断参数 Sentiment 是否已赋值
                     * @return Sentiment 是否已赋值
                     */
                    bool SentimentHasBeenSet() const;

                private:

                    /**
                     * 正面情感概率
                     */
                    double m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * 中性情感概率，当输入参数Mode取值为3class时有效，否则值为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_neutral;
                    bool m_neutralHasBeenSet;

                    /**
                     * 负面情感概率
                     */
                    double m_negative;
                    bool m_negativeHasBeenSet;

                    /**
                     * 情感分类结果：
1、positive，表示正面情感
2、negative，表示负面情感
3、neutral，表示中性、无情感
                     */
                    std::string m_sentiment;
                    bool m_sentimentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_SENTIMENTANALYSISRESPONSE_H_
