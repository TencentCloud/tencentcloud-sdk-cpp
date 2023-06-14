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

#ifndef TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICERESPONSE_H_
#define TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tts/v20190823/model/Subtitle.h>


namespace TencentCloud
{
    namespace Tts
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * TextToVoice返回参数结构体
                */
                class TextToVoiceResponse : public AbstractModel
                {
                public:
                    TextToVoiceResponse();
                    ~TextToVoiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取base64编码的wav/mp3音频数据
                     * @return Audio base64编码的wav/mp3音频数据
                     * 
                     */
                    std::string GetAudio() const;

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取一次请求对应一个SessionId
                     * @return SessionId 一次请求对应一个SessionId
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取时间戳信息，若未开启时间戳，则返回空数组。
                     * @return Subtitles 时间戳信息，若未开启时间戳，则返回空数组。
                     * 
                     */
                    std::vector<Subtitle> GetSubtitles() const;

                    /**
                     * 判断参数 Subtitles 是否已赋值
                     * @return Subtitles 是否已赋值
                     * 
                     */
                    bool SubtitlesHasBeenSet() const;

                private:

                    /**
                     * base64编码的wav/mp3音频数据
                     */
                    std::string m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * 一次请求对应一个SessionId
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 时间戳信息，若未开启时间戳，则返回空数组。
                     */
                    std::vector<Subtitle> m_subtitles;
                    bool m_subtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TTS_V20190823_MODEL_TEXTTOVOICERESPONSE_H_
