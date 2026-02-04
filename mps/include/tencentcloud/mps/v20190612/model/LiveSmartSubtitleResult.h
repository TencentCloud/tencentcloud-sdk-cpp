/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_

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
                * 直播智能字幕结果
                */
                class LiveSmartSubtitleResult : public AbstractModel
                {
                public:
                    LiveSmartSubtitleResult();
                    ~LiveSmartSubtitleResult() = default;
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
                     * @return StartPTSTime 翻译片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetStartPTSTime() const;

                    /**
                     * 设置翻译片段起始的 PTS 时间，单位：秒。
                     * @param _startPTSTime 翻译片段起始的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetStartPTSTime(const double& _startPTSTime);

                    /**
                     * 判断参数 StartPTSTime 是否已赋值
                     * @return StartPTSTime 是否已赋值
                     * 
                     */
                    bool StartPTSTimeHasBeenSet() const;

                    /**
                     * 获取翻译片段终止的 PTS 时间，单位：秒。
                     * @return EndPTSTime 翻译片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    double GetEndPTSTime() const;

                    /**
                     * 设置翻译片段终止的 PTS 时间，单位：秒。
                     * @param _endPTSTime 翻译片段终止的 PTS 时间，单位：秒。
                     * 
                     */
                    void SetEndPTSTime(const double& _endPTSTime);

                    /**
                     * 判断参数 EndPTSTime 是否已赋值
                     * @return EndPTSTime 是否已赋值
                     * 
                     */
                    bool EndPTSTimeHasBeenSet() const;

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

                    /**
                     * 获取websocket与trtc实时翻译的UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId websocket与trtc实时翻译的UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置websocket与trtc实时翻译的UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId websocket与trtc实时翻译的UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 识别文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 翻译片段起始的 PTS 时间，单位：秒。
                     */
                    double m_startPTSTime;
                    bool m_startPTSTimeHasBeenSet;

                    /**
                     * 翻译片段终止的 PTS 时间，单位：秒。
                     */
                    double m_endPTSTime;
                    bool m_endPTSTimeHasBeenSet;

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

                    /**
                     * websocket与trtc实时翻译的UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_
