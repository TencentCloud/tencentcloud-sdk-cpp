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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILSPEAKERRESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILSPEAKERRESULT_H_

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
                * 音频说话人声纹识别返回结果
                */
                class AudioResultDetailSpeakerResult : public AbstractModel
                {
                public:
                    AudioResultDetailSpeakerResult();
                    ~AudioResultDetailSpeakerResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回检测结果需要检测的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 该字段用于返回检测结果需要检测的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果需要检测的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label 该字段用于返回检测结果需要检测的内容类型。
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
                     * 获取该字段用于返回呻吟检测的置信度，取值范围：0（置信度最低）-100（置信度最高），越高代表音频越有可能属于说话人声纹。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 该字段用于返回呻吟检测的置信度，取值范围：0（置信度最低）-100（置信度最高），越高代表音频越有可能属于说话人声纹。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置该字段用于返回呻吟检测的置信度，取值范围：0（置信度最低）-100（置信度最高），越高代表音频越有可能属于说话人声纹。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 该字段用于返回呻吟检测的置信度，取值范围：0（置信度最低）-100（置信度最高），越高代表音频越有可能属于说话人声纹。
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
                     * 获取该字段用于返回对应说话人的片段在音频文件内的开始时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 该字段用于返回对应说话人的片段在音频文件内的开始时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置该字段用于返回对应说话人的片段在音频文件内的开始时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 该字段用于返回对应说话人的片段在音频文件内的开始时间，单位为秒。
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
                     * 获取该字段用于返回对应说话人的片段在音频文件内的结束时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 该字段用于返回对应说话人的片段在音频文件内的结束时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置该字段用于返回对应说话人的片段在音频文件内的结束时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 该字段用于返回对应说话人的片段在音频文件内的结束时间，单位为秒。
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

                private:

                    /**
                     * 该字段用于返回检测结果需要检测的内容类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回呻吟检测的置信度，取值范围：0（置信度最低）-100（置信度最高），越高代表音频越有可能属于说话人声纹。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该字段用于返回对应说话人的片段在音频文件内的开始时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 该字段用于返回对应说话人的片段在音频文件内的结束时间，单位为秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILSPEAKERRESULT_H_
