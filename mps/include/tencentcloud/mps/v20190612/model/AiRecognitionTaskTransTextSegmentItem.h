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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_

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
                class AiRecognitionTaskTransTextSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskTransTextSegmentItem();
                    ~AiRecognitionTaskTransTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别片段置信度。取值：0~100。
                     * @return Confidence 识别片段置信度。取值：0~100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置识别片段置信度。取值：0~100。
                     * @param _confidence 识别片段置信度。取值：0~100。
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
                     * 获取识别片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 识别片段起始的偏移时间，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置识别片段起始的偏移时间，单位：秒。
                     * @param _startTimeOffset 识别片段起始的偏移时间，单位：秒。
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
                     * 获取识别片段终止的偏移时间，单位：秒。
                     * @return EndTimeOffset 识别片段终止的偏移时间，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置识别片段终止的偏移时间，单位：秒。
                     * @param _endTimeOffset 识别片段终止的偏移时间，单位：秒。
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
                     * 获取字词时间戳信息。
                     * @return Wordlist 字词时间戳信息。
                     * 
                     */
                    std::vector<WordResult> GetWordlist() const;

                    /**
                     * 设置字词时间戳信息。
                     * @param _wordlist 字词时间戳信息。
                     * 
                     */
                    void SetWordlist(const std::vector<WordResult>& _wordlist);

                    /**
                     * 判断参数 Wordlist 是否已赋值
                     * @return Wordlist 是否已赋值
                     * 
                     */
                    bool WordlistHasBeenSet() const;

                private:

                    /**
                     * 识别片段置信度。取值：0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 识别片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 识别片段终止的偏移时间，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 识别文本。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 翻译文本。
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * 字词时间戳信息。
                     */
                    std::vector<WordResult> m_wordlist;
                    bool m_wordlistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_
