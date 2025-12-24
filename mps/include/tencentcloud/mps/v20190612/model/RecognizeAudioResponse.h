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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIORESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RecognizeAudioSentence.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * RecognizeAudio返回参数结构体
                */
                class RecognizeAudioResponse : public AbstractModel
                {
                public:
                    RecognizeAudioResponse();
                    ~RecognizeAudioResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取整段音频的识别结果
                     * @return Text 整段音频的识别结果
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取音频长度，单位秒
                     * @return AudioLength 音频长度，单位秒
                     * 
                     */
                    double GetAudioLength() const;

                    /**
                     * 判断参数 AudioLength 是否已赋值
                     * @return AudioLength 是否已赋值
                     * 
                     */
                    bool AudioLengthHasBeenSet() const;

                    /**
                     * 获取分句的识别结果
                     * @return Sentence 分句的识别结果
                     * 
                     */
                    std::vector<RecognizeAudioSentence> GetSentence() const;

                    /**
                     * 判断参数 Sentence 是否已赋值
                     * @return Sentence 是否已赋值
                     * 
                     */
                    bool SentenceHasBeenSet() const;

                private:

                    /**
                     * 整段音频的识别结果
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 音频长度，单位秒
                     */
                    double m_audioLength;
                    bool m_audioLengthHasBeenSet;

                    /**
                     * 分句的识别结果
                     */
                    std::vector<RecognizeAudioSentence> m_sentence;
                    bool m_sentenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIORESPONSE_H_
