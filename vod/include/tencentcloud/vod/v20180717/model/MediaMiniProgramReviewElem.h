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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_

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
                * 小程序音视频审核概要元信息
                */
                class MediaMiniProgramReviewElem : public AbstractModel
                {
                public:
                    MediaMiniProgramReviewElem();
                    ~MediaMiniProgramReviewElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音视频审核类型。 
<li>Porn：画面涉及令人反感的信息，</li>
<li>Porn.Ocr：文字涉及令人反感的信息，</li>
<li>Porn.Asr：声音涉及令人反感的信息，</li>
<li>Terrorism：画面涉及令人不安全的信息，</li>
<li>Political：画面涉及令人不适宜的信息，</li>
<li>Political.Ocr：文字涉及令人不适宜的信息，</li>
<li>Political.Asr：声音涉及令人不适宜的信息。</li>
                     * @return Type 音视频审核类型。 
<li>Porn：画面涉及令人反感的信息，</li>
<li>Porn.Ocr：文字涉及令人反感的信息，</li>
<li>Porn.Asr：声音涉及令人反感的信息，</li>
<li>Terrorism：画面涉及令人不安全的信息，</li>
<li>Political：画面涉及令人不适宜的信息，</li>
<li>Political.Ocr：文字涉及令人不适宜的信息，</li>
<li>Political.Asr：声音涉及令人不适宜的信息。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置音视频审核类型。 
<li>Porn：画面涉及令人反感的信息，</li>
<li>Porn.Ocr：文字涉及令人反感的信息，</li>
<li>Porn.Asr：声音涉及令人反感的信息，</li>
<li>Terrorism：画面涉及令人不安全的信息，</li>
<li>Political：画面涉及令人不适宜的信息，</li>
<li>Political.Ocr：文字涉及令人不适宜的信息，</li>
<li>Political.Asr：声音涉及令人不适宜的信息。</li>
                     * @param _type 音视频审核类型。 
<li>Porn：画面涉及令人反感的信息，</li>
<li>Porn.Ocr：文字涉及令人反感的信息，</li>
<li>Porn.Asr：声音涉及令人反感的信息，</li>
<li>Terrorism：画面涉及令人不安全的信息，</li>
<li>Political：画面涉及令人不适宜的信息，</li>
<li>Political.Ocr：文字涉及令人不适宜的信息，</li>
<li>Political.Asr：声音涉及令人不适宜的信息。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取音视频审核意见。
<li>pass：确认正常，</li>
<li>block：确认违规，</li>
<li>review：疑似违规。</li>
                     * @return Suggestion 音视频审核意见。
<li>pass：确认正常，</li>
<li>block：确认违规，</li>
<li>review：疑似违规。</li>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置音视频审核意见。
<li>pass：确认正常，</li>
<li>block：确认违规，</li>
<li>review：疑似违规。</li>
                     * @param _suggestion 音视频审核意见。
<li>pass：确认正常，</li>
<li>block：确认违规，</li>
<li>review：疑似违规。</li>
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
                     * 获取音视频审核结果置信度。取值 0~100。
                     * @return Confidence 音视频审核结果置信度。取值 0~100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置音视频审核结果置信度。取值 0~100。
                     * @param _confidence 音视频审核结果置信度。取值 0~100。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 音视频审核类型。 
<li>Porn：画面涉及令人反感的信息，</li>
<li>Porn.Ocr：文字涉及令人反感的信息，</li>
<li>Porn.Asr：声音涉及令人反感的信息，</li>
<li>Terrorism：画面涉及令人不安全的信息，</li>
<li>Political：画面涉及令人不适宜的信息，</li>
<li>Political.Ocr：文字涉及令人不适宜的信息，</li>
<li>Political.Asr：声音涉及令人不适宜的信息。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 音视频审核意见。
<li>pass：确认正常，</li>
<li>block：确认违规，</li>
<li>review：疑似违规。</li>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 音视频审核结果置信度。取值 0~100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWELEM_H_
