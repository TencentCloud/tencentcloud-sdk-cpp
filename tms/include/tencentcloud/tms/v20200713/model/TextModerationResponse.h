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
                    std::string ToJsonString() const;


                    /**
                     * 获取您在入参时所填入的Biztype参数
                     * @return BizType 您在入参时所填入的Biztype参数
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取数据是否属于恶意类型，0：正常 1：可疑
                     * @return EvilFlag 数据是否属于恶意类型，0：正常 1：可疑
                     * 
                     */
                    int64_t GetEvilFlag() const;

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     * 
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库，以及令人反感、不安全或不适宜的内容类型
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库，以及令人反感、不安全或不适宜的内容类型
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取建议您拿到判断结果后的执行操作
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @return Suggestion 建议您拿到判断结果后的执行操作
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取文本命中的关键词信息，用于提示您文本违规的具体原因，可能会返回多个命中的关键词。（如：加我微信）
如返回值为空，Score不为空，即识别结果（Label）是来自于语义模型判断的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 文本命中的关键词信息，用于提示您文本违规的具体原因，可能会返回多个命中的关键词。（如：加我微信）
如返回值为空，Score不为空，即识别结果（Label）是来自于语义模型判断的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     * @return Score 机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取接口识别样本后返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailResults 接口识别样本后返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DetailResults> GetDetailResults() const;

                    /**
                     * 判断参数 DetailResults 是否已赋值
                     * @return DetailResults 是否已赋值
                     * 
                     */
                    bool DetailResultsHasBeenSet() const;

                    /**
                     * 获取接口识别样本中存在违规账号风险的检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskDetails 接口识别样本中存在违规账号风险的检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RiskDetails> GetRiskDetails() const;

                    /**
                     * 判断参数 RiskDetails 是否已赋值
                     * @return RiskDetails 是否已赋值
                     * 
                     */
                    bool RiskDetailsHasBeenSet() const;

                    /**
                     * 获取扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取请求参数中的DataId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataId 请求参数中的DataId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                private:

                    /**
                     * 您在入参时所填入的Biztype参数
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 数据是否属于恶意类型，0：正常 1：可疑
                     */
                    int64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库，以及令人反感、不安全或不适宜的内容类型
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 建议您拿到判断结果后的执行操作
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 文本命中的关键词信息，用于提示您文本违规的具体原因，可能会返回多个命中的关键词。（如：加我微信）
如返回值为空，Score不为空，即识别结果（Label）是来自于语义模型判断的返回值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 机器判断当前分类的置信度，取值范围：0.00~100.00。分数越高，表示越有可能属于当前分类。
（如：色情 99.99，则该样本属于色情的置信度非常高。）
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 接口识别样本后返回的详细结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DetailResults> m_detailResults;
                    bool m_detailResultsHasBeenSet;

                    /**
                     * 接口识别样本中存在违规账号风险的检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetails> m_riskDetails;
                    bool m_riskDetailsHasBeenSet;

                    /**
                     * 扩展字段，用于特定信息返回，不同客户/Biztype下返回信息不同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 请求参数中的DataId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20200713_MODEL_TEXTMODERATIONRESPONSE_H_
