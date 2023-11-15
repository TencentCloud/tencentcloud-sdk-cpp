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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_MOANRESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_MOANRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 呻吟低俗检测结果
                */
                class MoanResult : public AbstractModel
                {
                public:
                    MoanResult();
                    ~MoanResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取固定取值为Moan（呻吟/娇喘），如音频中无复杂类型「MoanResult」的返回则代表该音频中无呻吟/娇喘相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 固定取值为Moan（呻吟/娇喘），如音频中无复杂类型「MoanResult」的返回则代表该音频中无呻吟/娇喘相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置固定取值为Moan（呻吟/娇喘），如音频中无复杂类型「MoanResult」的返回则代表该音频中无呻吟/娇喘相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 固定取值为Moan（呻吟/娇喘），如音频中无复杂类型「MoanResult」的返回则代表该音频中无呻吟/娇喘相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Moan 99，则该样本属于呻吟/娇喘的置信度非常高。）
                     * @return Score 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Moan 99，则该样本属于呻吟/娇喘的置信度非常高。）
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Moan 99，则该样本属于呻吟/娇喘的置信度非常高。）
                     * @param _score 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Moan 99，则该样本属于呻吟/娇喘的置信度非常高。）
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @return Suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     * @param _suggestion 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
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
                     * 获取违规事件开始时间，单位为秒（s）；
                     * @return StartTime 违规事件开始时间，单位为秒（s）；
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置违规事件开始时间，单位为秒（s）；
                     * @param _startTime 违规事件开始时间，单位为秒（s）；
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取违规事件结束时间，单位为秒（s）；
                     * @return EndTime 违规事件结束时间，单位为秒（s）；
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置违规事件结束时间，单位为秒（s）；
                     * @param _endTime 违规事件结束时间，单位为秒（s）；
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabel 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * 固定取值为Moan（呻吟/娇喘），如音频中无复杂类型「MoanResult」的返回则代表该音频中无呻吟/娇喘相关违规内容；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 机器判断当前分类的置信度，取值范围：0~100。分数越高，表示越有可能属于当前分类。
（如：Moan 99，则该样本属于呻吟/娇喘的置信度非常高。）
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 建议您拿到判断结果后的执行操作。
建议值，Block：建议屏蔽，Review：建议复审，Pass：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 违规事件开始时间，单位为秒（s）；
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 违规事件结束时间，单位为秒（s）；
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Lable）下的二级标签。
注意：此字段可能返回null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_MOANRESULT_H_
