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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_

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
                * 音频流配置参数
                */
                class AudioTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    AudioTemplateInfoForUpdate();
                    ~AudioTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的编码格式。
当外层参数 Container 为 mp3 时，可选值为：
<li>libmp3lame。</li>
当外层参数 Container 为 ogg 或 flac 时，可选值为：
<li>flac。</li>
当外层参数 Container 为 m4a 时，可选值为：
<li>libfdk_aac；</li>
<li>libmp3lame；</li>
<li>ac3。</li>
当外层参数 Container 为 mp4 或 flv 时，可选值为：
<li>libfdk_aac：更适合 mp4；</li>
<li>libmp3lame：更适合 flv；</li>
<li>mp2。</li>
当外层参数 Container 为 hls 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Format 为 HLS 或 MPEG-DASH 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Container 为 wav 时，可选值为：
<li>pcm16。</li>
                     * @return Codec 音频流的编码格式。
当外层参数 Container 为 mp3 时，可选值为：
<li>libmp3lame。</li>
当外层参数 Container 为 ogg 或 flac 时，可选值为：
<li>flac。</li>
当外层参数 Container 为 m4a 时，可选值为：
<li>libfdk_aac；</li>
<li>libmp3lame；</li>
<li>ac3。</li>
当外层参数 Container 为 mp4 或 flv 时，可选值为：
<li>libfdk_aac：更适合 mp4；</li>
<li>libmp3lame：更适合 flv；</li>
<li>mp2。</li>
当外层参数 Container 为 hls 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Format 为 HLS 或 MPEG-DASH 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Container 为 wav 时，可选值为：
<li>pcm16。</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频流的编码格式。
当外层参数 Container 为 mp3 时，可选值为：
<li>libmp3lame。</li>
当外层参数 Container 为 ogg 或 flac 时，可选值为：
<li>flac。</li>
当外层参数 Container 为 m4a 时，可选值为：
<li>libfdk_aac；</li>
<li>libmp3lame；</li>
<li>ac3。</li>
当外层参数 Container 为 mp4 或 flv 时，可选值为：
<li>libfdk_aac：更适合 mp4；</li>
<li>libmp3lame：更适合 flv；</li>
<li>mp2。</li>
当外层参数 Container 为 hls 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Format 为 HLS 或 MPEG-DASH 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Container 为 wav 时，可选值为：
<li>pcm16。</li>
                     * @param _codec 音频流的编码格式。
当外层参数 Container 为 mp3 时，可选值为：
<li>libmp3lame。</li>
当外层参数 Container 为 ogg 或 flac 时，可选值为：
<li>flac。</li>
当外层参数 Container 为 m4a 时，可选值为：
<li>libfdk_aac；</li>
<li>libmp3lame；</li>
<li>ac3。</li>
当外层参数 Container 为 mp4 或 flv 时，可选值为：
<li>libfdk_aac：更适合 mp4；</li>
<li>libmp3lame：更适合 flv；</li>
<li>mp2。</li>
当外层参数 Container 为 hls 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Format 为 HLS 或 MPEG-DASH 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Container 为 wav 时，可选值为：
<li>pcm16。</li>
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
                     * 获取音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。 当取值为 0，表示由云点播自动设置码率。
                     * @return Bitrate 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。 当取值为 0，表示由云点播自动设置码率。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。 当取值为 0，表示由云点播自动设置码率。
                     * @param _bitrate 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。 当取值为 0，表示由云点播自动设置码率。
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取音频流的采样率，可选值：
<li>16000，仅当 Codec 为 pcm16 时可选。</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
                     * @return SampleRate 音频流的采样率，可选值：
<li>16000，仅当 Codec 为 pcm16 时可选。</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频流的采样率，可选值：
<li>16000，仅当 Codec 为 pcm16 时可选。</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
                     * @param _sampleRate 音频流的采样率，可选值：
<li>16000，仅当 Codec 为 pcm16 时可选。</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取音频通道，可选值：
<li>1：单通道</li>
<li>2：双通道</li>
<li>6：立体声</li>
<li>0：音频声道数和原始音频保持一致</li>
当媒体的封装格式是音频格式时（flac，ogg，mp3，m4a）时，声道数不允许设为立体声。
                     * @return AudioChannel 音频通道，可选值：
<li>1：单通道</li>
<li>2：双通道</li>
<li>6：立体声</li>
<li>0：音频声道数和原始音频保持一致</li>
当媒体的封装格式是音频格式时（flac，ogg，mp3，m4a）时，声道数不允许设为立体声。
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置音频通道，可选值：
<li>1：单通道</li>
<li>2：双通道</li>
<li>6：立体声</li>
<li>0：音频声道数和原始音频保持一致</li>
当媒体的封装格式是音频格式时（flac，ogg，mp3，m4a）时，声道数不允许设为立体声。
                     * @param _audioChannel 音频通道，可选值：
<li>1：单通道</li>
<li>2：双通道</li>
<li>6：立体声</li>
<li>0：音频声道数和原始音频保持一致</li>
当媒体的封装格式是音频格式时（flac，ogg，mp3，m4a）时，声道数不允许设为立体声。
                     * 
                     */
                    void SetAudioChannel(const int64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                private:

                    /**
                     * 音频流的编码格式。
当外层参数 Container 为 mp3 时，可选值为：
<li>libmp3lame。</li>
当外层参数 Container 为 ogg 或 flac 时，可选值为：
<li>flac。</li>
当外层参数 Container 为 m4a 时，可选值为：
<li>libfdk_aac；</li>
<li>libmp3lame；</li>
<li>ac3。</li>
当外层参数 Container 为 mp4 或 flv 时，可选值为：
<li>libfdk_aac：更适合 mp4；</li>
<li>libmp3lame：更适合 flv；</li>
<li>mp2。</li>
当外层参数 Container 为 hls 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Format 为 HLS 或 MPEG-DASH 时，可选值为：
<li>libfdk_aac。</li>
当外层参数 Container 为 wav 时，可选值为：
<li>pcm16。</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。 当取值为 0，表示由云点播自动设置码率。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频流的采样率，可选值：
<li>16000，仅当 Codec 为 pcm16 时可选。</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频通道，可选值：
<li>1：单通道</li>
<li>2：双通道</li>
<li>6：立体声</li>
<li>0：音频声道数和原始音频保持一致</li>
当媒体的封装格式是音频格式时（flac，ogg，mp3，m4a）时，声道数不允许设为立体声。
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
