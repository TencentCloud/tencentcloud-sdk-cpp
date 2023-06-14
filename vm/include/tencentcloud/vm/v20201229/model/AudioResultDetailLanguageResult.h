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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_

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
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 音频语言种类检测结果
                */
                class AudioResultDetailLanguageResult : public AbstractModel
                {
                public:
                    AudioResultDetailLanguageResult();
                    ~AudioResultDetailLanguageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回对应的语言种类信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 该字段用于返回对应的语言种类信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回对应的语言种类信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 该字段用于返回对应的语言种类信息。
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
                     * 获取该参数用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于当前返回的语种标签；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 该参数用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于当前返回的语种标签；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该参数用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于当前返回的语种标签；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 该参数用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于当前返回的语种标签；
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubLabelCode *内测中，敬请期待*
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置*内测中，敬请期待*
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subLabelCode *内测中，敬请期待*
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回对应的语言种类信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该参数用于返回当前标签下的置信度，取值范围：0（**置信度最低**）-100（**置信度最高**），越高代表音频越有可能属于当前返回的语种标签；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该参数用于返回对应语种标签的片段在音频文件内的开始时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 该参数用于返回对应语种标签的片段在音频文件内的结束时间，单位为毫秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * *内测中，敬请期待*
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
