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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WordResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 翻译片段。
                */
                class SmartSubtitleTaskTransTextSegmentItem : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTransTextSegmentItem();
                    ~SmartSubtitleTaskTransTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>识别片段置信度。取值：0~100。</p>
                     * @return Confidence <p>识别片段置信度。取值：0~100。</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>识别片段置信度。取值：0~100。</p>
                     * @param _confidence <p>识别片段置信度。取值：0~100。</p>
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
                     * 获取<p>识别片段起始的偏移时间，单位：秒。</p>
                     * @return StartTimeOffset <p>识别片段起始的偏移时间，单位：秒。</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>识别片段起始的偏移时间，单位：秒。</p>
                     * @param _startTimeOffset <p>识别片段起始的偏移时间，单位：秒。</p>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>识别片段终止的偏移时间，单位：秒。</p>
                     * @return EndTimeOffset <p>识别片段终止的偏移时间，单位：秒。</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>识别片段终止的偏移时间，单位：秒。</p>
                     * @param _endTimeOffset <p>识别片段终止的偏移时间，单位：秒。</p>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>识别文本。</p>
                     * @return Text <p>识别文本。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>识别文本。</p>
                     * @param _text <p>识别文本。</p>
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
                     * 获取<p>翻译文本。</p>
                     * @return Trans <p>翻译文本。</p>
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置<p>翻译文本。</p>
                     * @param _trans <p>翻译文本。</p>
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
                     * 获取<p>字词时间戳信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Wordlist <p>字词时间戳信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WordResult> GetWordlist() const;

                    /**
                     * 设置<p>字词时间戳信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wordlist <p>字词时间戳信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWordlist(const std::vector<WordResult>& _wordlist);

                    /**
                     * 判断参数 Wordlist 是否已赋值
                     * @return Wordlist 是否已赋值
                     * 
                     */
                    bool WordlistHasBeenSet() const;

                    /**
                     * 获取<p>说话人ID（如启用说话人识别）</p>
                     * @return SpeakerId <p>说话人ID（如启用说话人识别）</p>
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置<p>说话人ID（如启用说话人识别）</p>
                     * @param _speakerId <p>说话人ID（如启用说话人识别）</p>
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                private:

                    /**
                     * <p>识别片段置信度。取值：0~100。</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>识别片段起始的偏移时间，单位：秒。</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>识别片段终止的偏移时间，单位：秒。</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>识别文本。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>翻译文本。</p>
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * <p>字词时间戳信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WordResult> m_wordlist;
                    bool m_wordlistHasBeenSet;

                    /**
                     * <p>说话人ID（如启用说话人识别）</p>
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_
