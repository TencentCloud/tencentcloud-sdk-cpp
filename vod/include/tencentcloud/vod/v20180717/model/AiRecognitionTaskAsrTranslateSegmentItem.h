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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATESEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATESEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 语音翻译识别片段。
                */
                class AiRecognitionTaskAsrTranslateSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrTranslateSegmentItem();
                    ~AiRecognitionTaskAsrTranslateSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取语音翻译识别片段置信度。取值：0~100。
                     * @return Confidence 语音翻译识别片段置信度。取值：0~100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置语音翻译识别片段置信度。取值：0~100。
                     * @param _confidence 语音翻译识别片段置信度。取值：0~100。
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
                     * 获取语音翻译识别片段起始的偏移时间，单位：秒。
                     * @return StartTimeOffset 语音翻译识别片段起始的偏移时间，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置语音翻译识别片段起始的偏移时间，单位：秒。
                     * @param _startTimeOffset 语音翻译识别片段起始的偏移时间，单位：秒。
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
                     * 获取语音翻译识别片段终止的偏移时间，单位：秒。
                     * @return EndTimeOffset 语音翻译识别片段终止的偏移时间，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置语音翻译识别片段终止的偏移时间，单位：秒。
                     * @param _endTimeOffset 语音翻译识别片段终止的偏移时间，单位：秒。
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
                     * @return Translation 翻译文本。
                     * 
                     */
                    std::string GetTranslation() const;

                    /**
                     * 设置翻译文本。
                     * @param _translation 翻译文本。
                     * 
                     */
                    void SetTranslation(const std::string& _translation);

                    /**
                     * 判断参数 Translation 是否已赋值
                     * @return Translation 是否已赋值
                     * 
                     */
                    bool TranslationHasBeenSet() const;

                private:

                    /**
                     * 语音翻译识别片段置信度。取值：0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 语音翻译识别片段起始的偏移时间，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 语音翻译识别片段终止的偏移时间，单位：秒。
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
                    std::string m_translation;
                    bool m_translationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRTRANSLATESEGMENTITEM_H_
