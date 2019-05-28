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

#ifndef TENCENTCLOUD_TBP_V20190311_MODEL_POSTAUDIOREQUEST_H_
#define TENCENTCLOUD_TBP_V20190311_MODEL_POSTAUDIOREQUEST_H_

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
                * PostAudio请求参数结构体
                */
                class PostAudioRequest : public AbstractModel
                {
                public:
                    PostAudioRequest();
                    ~PostAudioRequest() = default;
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
                     * 获取语音识别引擎类型,{8k_0、16k_0、16k_en}
                     * @return EngineModelType 语音识别引擎类型,{8k_0、16k_0、16k_en}
                     */
                    std::string GetEngineModelType() const;

                    /**
                     * 设置语音识别引擎类型,{8k_0、16k_0、16k_en}
                     * @param EngineModelType 语音识别引擎类型,{8k_0、16k_0、16k_en}
                     */
                    void SetEngineModelType(const std::string& _engineModelType);

                    /**
                     * 判断参数 EngineModelType 是否已赋值
                     * @return EngineModelType 是否已赋值
                     */
                    bool EngineModelTypeHasBeenSet() const;

                    /**
                     * 获取输入音频文件编码格式。1：wav(pcm)；4：speex(sp)；6：silk
                     * @return AsrVoiceFormat 输入音频文件编码格式。1：wav(pcm)；4：speex(sp)；6：silk
                     */
                    uint64_t GetAsrVoiceFormat() const;

                    /**
                     * 设置输入音频文件编码格式。1：wav(pcm)；4：speex(sp)；6：silk
                     * @param AsrVoiceFormat 输入音频文件编码格式。1：wav(pcm)；4：speex(sp)；6：silk
                     */
                    void SetAsrVoiceFormat(const uint64_t& _asrVoiceFormat);

                    /**
                     * 判断参数 AsrVoiceFormat 是否已赋值
                     * @return AsrVoiceFormat 是否已赋值
                     */
                    bool AsrVoiceFormatHasBeenSet() const;

                    /**
                     * 获取asr请求Id。长度为16位的字符串，同一句话VoiceId保持一致
                     * @return VoiceId asr请求Id。长度为16位的字符串，同一句话VoiceId保持一致
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置asr请求Id。长度为16位的字符串，同一句话VoiceId保持一致
                     * @param VoiceId asr请求Id。长度为16位的字符串，同一句话VoiceId保持一致
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取语音分片序列号。同一句话必须从0开始，依次递增
                     * @return Seq 语音分片序列号。同一句话必须从0开始，依次递增
                     */
                    uint64_t GetSeq() const;

                    /**
                     * 设置语音分片序列号。同一句话必须从0开始，依次递增
                     * @param Seq 语音分片序列号。同一句话必须从0开始，依次递增
                     */
                    void SetSeq(const uint64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取是否为尾包。传递最后一个语音分片时为true，其他为false
                     * @return IsEnd 是否为尾包。传递最后一个语音分片时为true，其他为false
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置是否为尾包。传递最后一个语音分片时为true，其他为false
                     * @param IsEnd 是否为尾包。传递最后一个语音分片时为true，其他为false
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取待识别音频字节流
                     * @return WaveData 待识别音频字节流
                     */
                    std::string GetWaveData() const;

                    /**
                     * 设置待识别音频字节流
                     * @param WaveData 待识别音频字节流
                     */
                    void SetWaveData(const std::string& _waveData);

                    /**
                     * 判断参数 WaveData 是否已赋值
                     * @return WaveData 是否已赋值
                     */
                    bool WaveDataHasBeenSet() const;

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
                     * 获取识别返回文本编码格式	0：UTF-8（默认）；1：GB2312；2：GBK；3：BIG5
                     * @return ResultTextFormat 识别返回文本编码格式	0：UTF-8（默认）；1：GB2312；2：GBK；3：BIG5
                     */
                    uint64_t GetResultTextFormat() const;

                    /**
                     * 设置识别返回文本编码格式	0：UTF-8（默认）；1：GB2312；2：GBK；3：BIG5
                     * @param ResultTextFormat 识别返回文本编码格式	0：UTF-8（默认）；1：GB2312；2：GBK；3：BIG5
                     */
                    void SetResultTextFormat(const uint64_t& _resultTextFormat);

                    /**
                     * 判断参数 ResultTextFormat 是否已赋值
                     * @return ResultTextFormat 是否已赋值
                     */
                    bool ResultTextFormatHasBeenSet() const;

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
                     * 语音识别引擎类型,{8k_0、16k_0、16k_en}
                     */
                    std::string m_engineModelType;
                    bool m_engineModelTypeHasBeenSet;

                    /**
                     * 输入音频文件编码格式。1：wav(pcm)；4：speex(sp)；6：silk
                     */
                    uint64_t m_asrVoiceFormat;
                    bool m_asrVoiceFormatHasBeenSet;

                    /**
                     * asr请求Id。长度为16位的字符串，同一句话VoiceId保持一致
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * 语音分片序列号。同一句话必须从0开始，依次递增
                     */
                    uint64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 是否为尾包。传递最后一个语音分片时为true，其他为false
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 待识别音频字节流
                     */
                    std::string m_waveData;
                    bool m_waveDataHasBeenSet;

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
                     * 识别返回文本编码格式	0：UTF-8（默认）；1：GB2312；2：GBK；3：BIG5
                     */
                    uint64_t m_resultTextFormat;
                    bool m_resultTextFormatHasBeenSet;

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

#endif // !TENCENTCLOUD_TBP_V20190311_MODEL_POSTAUDIOREQUEST_H_
