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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_MODERATIONDETAIL_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_MODERATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/LabelGrade.h>
#include <tencentcloud/tms/v20201229/model/LibCheckResult.h>
#include <tencentcloud/tms/v20201229/model/ModelResult.h>
#include <tencentcloud/tms/v20201229/model/SentimentDetail.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 文本审核明细结果
                */
                class ModerationDetail : public AbstractModel
                {
                public:
                    ModerationDetail();
                    ~ModerationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核建议，Block表示建议拦截，Review表示建议人工复审，Pass表示建议放行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 审核建议，Block表示建议拦截，Review表示建议人工复审，Pass表示建议放行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置审核建议，Block表示建议拦截，Review表示建议人工复审，Pass表示建议放行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suggestion 审核建议，Block表示建议拦截，Review表示建议人工复审，Pass表示建议放行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取命中标签，含标签码和一二三级标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 命中标签，含标签码和一二三级标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LabelGrade GetLabel() const;

                    /**
                     * 设置命中标签，含标签码和一二三级标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 命中标签，含标签码和一二三级标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const LabelGrade& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取标签得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 标签得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置标签得分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 标签得分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取label对应腾讯侧命中标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcLabelCodes label对应腾讯侧命中标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTcLabelCodes() const;

                    /**
                     * 设置label对应腾讯侧命中标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcLabelCodes label对应腾讯侧命中标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcLabelCodes(const std::vector<std::string>& _tcLabelCodes);

                    /**
                     * 判断参数 TcLabelCodes 是否已赋值
                     * @return TcLabelCodes 是否已赋值
                     * 
                     */
                    bool TcLabelCodesHasBeenSet() const;

                    /**
                     * 获取库检测命中详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LibResults 库检测命中详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LibCheckResult> GetLibResults() const;

                    /**
                     * 设置库检测命中详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _libResults 库检测命中详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLibResults(const std::vector<LibCheckResult>& _libResults);

                    /**
                     * 判断参数 LibResults 是否已赋值
                     * @return LibResults 是否已赋值
                     * 
                     */
                    bool LibResultsHasBeenSet() const;

                    /**
                     * 获取模型检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelResults 模型检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ModelResult> GetModelResults() const;

                    /**
                     * 设置模型检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelResults 模型检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelResults(const std::vector<ModelResult>& _modelResults);

                    /**
                     * 判断参数 ModelResults 是否已赋值
                     * @return ModelResults 是否已赋值
                     * 
                     */
                    bool ModelResultsHasBeenSet() const;

                    /**
                     * 获取情绪正负向检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SentimentResult 情绪正负向检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SentimentDetail GetSentimentResult() const;

                    /**
                     * 设置情绪正负向检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sentimentResult 情绪正负向检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSentimentResult(const SentimentDetail& _sentimentResult);

                    /**
                     * 判断参数 SentimentResult 是否已赋值
                     * @return SentimentResult 是否已赋值
                     * 
                     */
                    bool SentimentResultHasBeenSet() const;

                private:

                    /**
                     * 审核建议，Block表示建议拦截，Review表示建议人工复审，Pass表示建议放行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 命中标签，含标签码和一二三级标签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LabelGrade m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 标签得分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * label对应腾讯侧命中标签码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tcLabelCodes;
                    bool m_tcLabelCodesHasBeenSet;

                    /**
                     * 库检测命中详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LibCheckResult> m_libResults;
                    bool m_libResultsHasBeenSet;

                    /**
                     * 模型检测详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelResult> m_modelResults;
                    bool m_modelResultsHasBeenSet;

                    /**
                     * 情绪正负向检测结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SentimentDetail m_sentimentResult;
                    bool m_sentimentResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_MODERATIONDETAIL_H_
