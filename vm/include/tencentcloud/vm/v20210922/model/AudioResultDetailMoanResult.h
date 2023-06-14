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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILMOANRESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILMOANRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 音频呻吟审核结果
                */
                class AudioResultDetailMoanResult : public AbstractModel
                {
                public:
                    AudioResultDetailMoanResult();
                    ~AudioResultDetailMoanResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回检测结果需要检测的内容类型，此处固定为**Moan**（呻吟）以调用呻吟检测功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 该字段用于返回检测结果需要检测的内容类型，此处固定为**Moan**（呻吟）以调用呻吟检测功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果需要检测的内容类型，此处固定为**Moan**（呻吟）以调用呻吟检测功能。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 该字段用于返回检测结果需要检测的内容类型，此处固定为**Moan**（呻吟）以调用呻吟检测功能。
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
                     * 获取该字段用于返回呻吟检测的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于呻吟内容。
                     * @return Score 该字段用于返回呻吟检测的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于呻吟内容。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回呻吟检测的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于呻吟内容。
                     * @param _score 该字段用于返回呻吟检测的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于呻吟内容。
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
                     * 获取该字段用于返回对应呻吟标签的片段在音频文件内的开始时间，单位为毫秒。
                     * @return StartTime 该字段用于返回对应呻吟标签的片段在音频文件内的开始时间，单位为毫秒。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置该字段用于返回对应呻吟标签的片段在音频文件内的开始时间，单位为毫秒。
                     * @param _startTime 该字段用于返回对应呻吟标签的片段在音频文件内的开始时间，单位为毫秒。
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
                     * 获取该字段用于返回对应呻吟标签的片段在音频文件内的结束时间，单位为毫秒。
                     * @return EndTime 该字段用于返回对应呻吟标签的片段在音频文件内的结束时间，单位为毫秒。
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置该字段用于返回对应呻吟标签的片段在音频文件内的结束时间，单位为毫秒。
                     * @param _endTime 该字段用于返回对应呻吟标签的片段在音频文件内的结束时间，单位为毫秒。
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
                     * 获取*内测中，敬请期待*
                     * @return SubLabelCode *内测中，敬请期待*
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置*内测中，敬请期待*
                     * @param _subLabelCode *内测中，敬请期待*
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                    /**
                     * 获取该字段用于返回当前标签（Lable）下的二级标签。
                     * @return SubLabel 该字段用于返回当前标签（Lable）下的二级标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回当前标签（Lable）下的二级标签。
                     * @param _subLabel 该字段用于返回当前标签（Lable）下的二级标签。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @return Suggestion 该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * @param _suggestion 该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回检测结果需要检测的内容类型，此处固定为**Moan**（呻吟）以调用呻吟检测功能。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回呻吟检测的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于呻吟内容。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回对应呻吟标签的片段在音频文件内的开始时间，单位为毫秒。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 该字段用于返回对应呻吟标签的片段在音频文件内的结束时间，单位为毫秒。
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * *内测中，敬请期待*
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                    /**
                     * 该字段用于返回当前标签（Lable）下的二级标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 该字段用于返回基于恶意标签的后续操作建议。当您获取到判定结果后，返回值表示系统推荐的后续操作；建议您按照业务所需，对不同违规类型与建议值进行处理。<br>返回值：**Block**：建议屏蔽，**Review** ：建议人工复审，**Pass**：建议通过
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILMOANRESULT_H_
