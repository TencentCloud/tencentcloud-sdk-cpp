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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_POSTTEXTREQUEST_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_POSTTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbp
    {
        namespace V20190311
        {
            namespace Model
            {
                /**
                * PostText请求参数结构体
                */
                class PostTextRequest : public AbstractModel
                {
                public:
                    PostTextRequest();
                    ~PostTextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机器人标识
                     * @return BotId 机器人标识
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置机器人标识
                     * @param BotId 机器人标识
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取请求的文本
                     * @return InputText 请求的文本
                     */
                    std::string GetInputText() const;

                    /**
                     * 设置请求的文本
                     * @param InputText 请求的文本
                     */
                    void SetInputText(const std::string& _inputText);

                    /**
                     * 判断参数 InputText 是否已赋值
                     * @return InputText 是否已赋值
                     */
                    bool InputTextHasBeenSet() const;

                    /**
                     * 获取子账户id，每个终端对应一个
                     * @return UserId 子账户id，每个终端对应一个
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置子账户id，每个终端对应一个
                     * @param UserId 子账户id，每个终端对应一个
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @return BotVersion 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string GetBotVersion() const;

                    /**
                     * 设置机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @param BotVersion 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    void SetBotVersion(const std::string& _botVersion);

                    /**
                     * 判断参数 BotVersion 是否已赋值
                     * @return BotVersion 是否已赋值
                     */
                    bool BotVersionHasBeenSet() const;

                    /**
                     * 获取透传字段，传递给后台
                     * @return SessionAttributes 透传字段，传递给后台
                     */
                    std::string GetSessionAttributes() const;

                    /**
                     * 设置透传字段，传递给后台
                     * @param SessionAttributes 透传字段，传递给后台
                     */
                    void SetSessionAttributes(const std::string& _sessionAttributes);

                    /**
                     * 判断参数 SessionAttributes 是否已赋值
                     * @return SessionAttributes 是否已赋值
                     */
                    bool SessionAttributesHasBeenSet() const;

                    /**
                     * 获取是否将机器人回答合成音频并返回url
                     * @return NeedTts 是否将机器人回答合成音频并返回url
                     */
                    bool GetNeedTts() const;

                    /**
                     * 设置是否将机器人回答合成音频并返回url
                     * @param NeedTts 是否将机器人回答合成音频并返回url
                     */
                    void SetNeedTts(const bool& _needTts);

                    /**
                     * 判断参数 NeedTts 是否已赋值
                     * @return NeedTts 是否已赋值
                     */
                    bool NeedTtsHasBeenSet() const;

                    /**
                     * 获取音量大小，范围：[0，10]。默认值为0，代表正常音量
                     * @return Volume 音量大小，范围：[0，10]。默认值为0，代表正常音量
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置音量大小，范围：[0，10]。默认值为0，代表正常音量
                     * @param Volume 音量大小，范围：[0，10]。默认值为0，代表正常音量
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取语速，范围：[-2，2]。0代表1.0倍
                     * @return Speed 语速，范围：[-2，2]。0代表1.0倍
                     */
                    int64_t GetSpeed() const;

                    /**
                     * 设置语速，范围：[-2，2]。0代表1.0倍
                     * @param Speed 语速，范围：[-2，2]。0代表1.0倍
                     */
                    void SetSpeed(const int64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取音色,{0：女声,1:男声}
                     * @return VoiceType 音色,{0：女声,1:男声}
                     */
                    int64_t GetVoiceType() const;

                    /**
                     * 设置音色,{0：女声,1:男声}
                     * @param VoiceType 音色,{0：女声,1:男声}
                     */
                    void SetVoiceType(const int64_t& _voiceType);

                    /**
                     * 判断参数 VoiceType 是否已赋值
                     * @return VoiceType 是否已赋值
                     */
                    bool VoiceTypeHasBeenSet() const;

                    /**
                     * 获取返回音频的采样率{8k,16k}。默认16k
                     * @return SampleRate 返回音频的采样率{8k,16k}。默认16k
                     */
                    std::string GetSampleRate() const;

                    /**
                     * 设置返回音频的采样率{8k,16k}。默认16k
                     * @param SampleRate 返回音频的采样率{8k,16k}。默认16k
                     */
                    void SetSampleRate(const std::string& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @return BotEnv 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string GetBotEnv() const;

                    /**
                     * 设置机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     * @param BotEnv 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    void SetBotEnv(const std::string& _botEnv);

                    /**
                     * 判断参数 BotEnv 是否已赋值
                     * @return BotEnv 是否已赋值
                     */
                    bool BotEnvHasBeenSet() const;

                    /**
                     * 获取TTS合成音频格式，{0：wav}。该字段在当前版本仅支持取值为0。
                     * @return TtsVoiceFormat TTS合成音频格式，{0：wav}。该字段在当前版本仅支持取值为0。
                     */
                    uint64_t GetTtsVoiceFormat() const;

                    /**
                     * 设置TTS合成音频格式，{0：wav}。该字段在当前版本仅支持取值为0。
                     * @param TtsVoiceFormat TTS合成音频格式，{0：wav}。该字段在当前版本仅支持取值为0。
                     */
                    void SetTtsVoiceFormat(const uint64_t& _ttsVoiceFormat);

                    /**
                     * 判断参数 TtsVoiceFormat 是否已赋值
                     * @return TtsVoiceFormat 是否已赋值
                     */
                    bool TtsVoiceFormatHasBeenSet() const;

                private:

                    /**
                     * 机器人标识
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 请求的文本
                     */
                    std::string m_inputText;
                    bool m_inputTextHasBeenSet;

                    /**
                     * 子账户id，每个终端对应一个
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 机器人版本号。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string m_botVersion;
                    bool m_botVersionHasBeenSet;

                    /**
                     * 透传字段，传递给后台
                     */
                    std::string m_sessionAttributes;
                    bool m_sessionAttributesHasBeenSet;

                    /**
                     * 是否将机器人回答合成音频并返回url
                     */
                    bool m_needTts;
                    bool m_needTtsHasBeenSet;

                    /**
                     * 音量大小，范围：[0，10]。默认值为0，代表正常音量
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 语速，范围：[-2，2]。0代表1.0倍
                     */
                    int64_t m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 音色,{0：女声,1:男声}
                     */
                    int64_t m_voiceType;
                    bool m_voiceTypeHasBeenSet;

                    /**
                     * 返回音频的采样率{8k,16k}。默认16k
                     */
                    std::string m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 机器人环境{dev:测试;release:线上}。BotVersion/BotEnv二选一：二者均填，仅BotVersion有效；二者均不填，默认BotEnv=dev
                     */
                    std::string m_botEnv;
                    bool m_botEnvHasBeenSet;

                    /**
                     * TTS合成音频格式，{0：wav}。该字段在当前版本仅支持取值为0。
                     */
                    uint64_t m_ttsVoiceFormat;
                    bool m_ttsVoiceFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_POSTTEXTREQUEST_H_
