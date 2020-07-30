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

#ifndef TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONRESPONSE_H_
#define TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20200713/model/DetailResults.h>
#include <tencentcloud/tms/v20200713/model/RiskDetails.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * TextModeration返回参数结构体
                */
                class TextModerationResponse : public AbstractModel
                {
                public:
                    TextModerationResponse();
                    ~TextModerationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取最终使用的BizType
                     * @return BizType 最终使用的BizType
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取是否恶意 0：正常 1：可疑
                     * @return EvilFlag 是否恶意 0：正常 1：可疑
                     */
                    int64_t GetEvilFlag() const;

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * @return Label 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取建议值,Block：打击,Review：待复审,Normal：正常
                     * @return Suggestion 建议值,Block：打击,Review：待复审,Normal：正常
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取命中的模型分值
                     * @return Score 命中的模型分值
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailResults 返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetailResults> GetDetailResults() const;

                    /**
                     * 判断参数 DetailResults 是否已赋值
                     * @return DetailResults 是否已赋值
                     */
                    bool DetailResultsHasBeenSet() const;

                    /**
                     * 获取账号风险检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskDetails 账号风险检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetails> GetRiskDetails() const;

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取预留字段，不同客户返回结果不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 预留字段，不同客户返回结果不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 最终使用的BizType
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 是否恶意 0：正常 1：可疑
                     */
                    int64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 建议值,Block：打击,Review：待复审,Normal：正常
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 命中的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 命中的模型分值
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetailResults> m_detailResults;
                    bool m_detailResultsHasBeenSet;

                    /**
                     * 账号风险检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetails> m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * 预留字段，不同客户返回结果不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONRESPONSE_H_
