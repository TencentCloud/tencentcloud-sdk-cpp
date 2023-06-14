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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/Denoise.h>
#include <tencentcloud/ie/v20200304/model/LoudnessInfo.h>
#include <tencentcloud/ie/v20200304/model/AudioEnhance.h>
#include <tencentcloud/ie/v20200304/model/RemoveReverb.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 音频参数信息
                */
                class AudioInfo : public AbstractModel
                {
                public:
                    AudioInfo();
                    ~AudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频码率，取值范围：0 和 [26, 256]，单位：kbps。
注意：当取值为 0，表示音频码率和原始音频保持一致。
                     * @return Bitrate 音频码率，取值范围：0 和 [26, 256]，单位：kbps。
注意：当取值为 0，表示音频码率和原始音频保持一致。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置音频码率，取值范围：0 和 [26, 256]，单位：kbps。
注意：当取值为 0，表示音频码率和原始音频保持一致。
                     * @param _bitrate 音频码率，取值范围：0 和 [26, 256]，单位：kbps。
注意：当取值为 0，表示音频码率和原始音频保持一致。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取音频编码器，可选项：aac,mp3,ac3,flac,mp2。
                     * @return Codec 音频编码器，可选项：aac,mp3,ac3,flac,mp2。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频编码器，可选项：aac,mp3,ac3,flac,mp2。
                     * @param _codec 音频编码器，可选项：aac,mp3,ac3,flac,mp2。
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取声道数，可选项：
1：单声道，
2：双声道，
6：立体声。
                     * @return Channel 声道数，可选项：
1：单声道，
2：双声道，
6：立体声。
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置声道数，可选项：
1：单声道，
2：双声道，
6：立体声。
                     * @param _channel 声道数，可选项：
1：单声道，
2：双声道，
6：立体声。
                     * 
                     */
                    void SetChannel(const int64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取采样率，单位：Hz。可选项：32000，44100,48000
                     * @return SampleRate 采样率，单位：Hz。可选项：32000，44100,48000
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率，单位：Hz。可选项：32000，44100,48000
                     * @param _sampleRate 采样率，单位：Hz。可选项：32000，44100,48000
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取音频降噪信息
                     * @return Denoise 音频降噪信息
                     * 
                     */
                    Denoise GetDenoise() const;

                    /**
                     * 设置音频降噪信息
                     * @param _denoise 音频降噪信息
                     * 
                     */
                    void SetDenoise(const Denoise& _denoise);

                    /**
                     * 判断参数 Denoise 是否已赋值
                     * @return Denoise 是否已赋值
                     * 
                     */
                    bool DenoiseHasBeenSet() const;

                    /**
                     * 获取开启添加静音，可选项：
0：不开启，
1：开启，
默认不开启
                     * @return EnableMuteAudio 开启添加静音，可选项：
0：不开启，
1：开启，
默认不开启
                     * 
                     */
                    int64_t GetEnableMuteAudio() const;

                    /**
                     * 设置开启添加静音，可选项：
0：不开启，
1：开启，
默认不开启
                     * @param _enableMuteAudio 开启添加静音，可选项：
0：不开启，
1：开启，
默认不开启
                     * 
                     */
                    void SetEnableMuteAudio(const int64_t& _enableMuteAudio);

                    /**
                     * 判断参数 EnableMuteAudio 是否已赋值
                     * @return EnableMuteAudio 是否已赋值
                     * 
                     */
                    bool EnableMuteAudioHasBeenSet() const;

                    /**
                     * 获取音频响度信息
                     * @return LoudnessInfo 音频响度信息
                     * 
                     */
                    LoudnessInfo GetLoudnessInfo() const;

                    /**
                     * 设置音频响度信息
                     * @param _loudnessInfo 音频响度信息
                     * 
                     */
                    void SetLoudnessInfo(const LoudnessInfo& _loudnessInfo);

                    /**
                     * 判断参数 LoudnessInfo 是否已赋值
                     * @return LoudnessInfo 是否已赋值
                     * 
                     */
                    bool LoudnessInfoHasBeenSet() const;

                    /**
                     * 获取音频音效增强
                     * @return AudioEnhance 音频音效增强
                     * 
                     */
                    AudioEnhance GetAudioEnhance() const;

                    /**
                     * 设置音频音效增强
                     * @param _audioEnhance 音频音效增强
                     * 
                     */
                    void SetAudioEnhance(const AudioEnhance& _audioEnhance);

                    /**
                     * 判断参数 AudioEnhance 是否已赋值
                     * @return AudioEnhance 是否已赋值
                     * 
                     */
                    bool AudioEnhanceHasBeenSet() const;

                    /**
                     * 获取去除混音
                     * @return RemoveReverb 去除混音
                     * 
                     */
                    RemoveReverb GetRemoveReverb() const;

                    /**
                     * 设置去除混音
                     * @param _removeReverb 去除混音
                     * 
                     */
                    void SetRemoveReverb(const RemoveReverb& _removeReverb);

                    /**
                     * 判断参数 RemoveReverb 是否已赋值
                     * @return RemoveReverb 是否已赋值
                     * 
                     */
                    bool RemoveReverbHasBeenSet() const;

                private:

                    /**
                     * 音频码率，取值范围：0 和 [26, 256]，单位：kbps。
注意：当取值为 0，表示音频码率和原始音频保持一致。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频编码器，可选项：aac,mp3,ac3,flac,mp2。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 声道数，可选项：
1：单声道，
2：双声道，
6：立体声。
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 采样率，单位：Hz。可选项：32000，44100,48000
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频降噪信息
                     */
                    Denoise m_denoise;
                    bool m_denoiseHasBeenSet;

                    /**
                     * 开启添加静音，可选项：
0：不开启，
1：开启，
默认不开启
                     */
                    int64_t m_enableMuteAudio;
                    bool m_enableMuteAudioHasBeenSet;

                    /**
                     * 音频响度信息
                     */
                    LoudnessInfo m_loudnessInfo;
                    bool m_loudnessInfoHasBeenSet;

                    /**
                     * 音频音效增强
                     */
                    AudioEnhance m_audioEnhance;
                    bool m_audioEnhanceHasBeenSet;

                    /**
                     * 去除混音
                     */
                    RemoveReverb m_removeReverb;
                    bool m_removeReverbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFO_H_
