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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播实时翻译结果
                */
                class LiveStreamTransTextRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamTransTextRecognitionResult();
                    ~LiveStreamTransTextRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别文本。
                     * @return Text 识别文本。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置识别文本。
                     * @param _text 识别文本。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取翻译片段起始的 PTS 时间，单位：秒。
                     * @return StartPtsTime 翻译片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置翻译片段起始的 PTS 时间，单位：秒。
                     * @param _startPtsTime 翻译片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取翻译片段终止的 PTS 时间，单位：秒。
                     * @return EndPtsTime 翻译片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置翻译片段终止的 PTS 时间，单位：秒。
                     * @param _endPtsTime 翻译片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取翻译片段置信度。取值：0~100。
                     * @return Confidence 翻译片段置信度。取值：0~100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置翻译片段置信度。取值：0~100。
                     * @param _confidence 翻译片段置信度。取值：0~100。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取翻译文本。
                     * @return Trans 翻译文本。
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置翻译文本。
                     * @param _trans 翻译文本。
                     * 
                     */
                    void SetTrans(const std::string& _trans);

                    /**
                     * 判断参数 Trans 是否已赋值
                     * @return Trans 是否已赋值
                     * 
                     */
                    bool TransHasBeenSet() const;

                    /**
                     * 获取翻译开始UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 翻译开始UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置翻译开始UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 翻译开始UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取翻译结束UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 翻译结束UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置翻译结束UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 翻译结束UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取稳态标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SteadyState 稳态标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSteadyState() const;

                    /**
                     * 设置稳态标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _steadyState 稳态标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSteadyState(const bool& _steadyState);

                    /**
                     * 判断参数 SteadyState 是否已赋值
                     * @return SteadyState 是否已赋值
                     * 
                     */
                    bool SteadyStateHasBeenSet() const;

                private:

                    /**
                     * 识别文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 翻译片段起始的 PTS 时间，单位：秒。
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * 翻译片段终止的 PTS 时间，单位：秒。
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * 翻译片段置信度。取值：0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 翻译文本。
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * 翻译开始UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 翻译结束UTC时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 稳态标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_steadyState;
                    bool m_steadyStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_
