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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 音频流信息。
                */
                class ComposeAudioStream : public AbstractModel
                {
                public:
                    ComposeAudioStream();
                    ~ComposeAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的编码方式，可选值：
<li>AAC：AAC 编码（默认），用于容器为 mp4。</li>
<li>MP3：mp3 编码，用于容器为 mp3。</li>
                     * @return Codec 音频流的编码方式，可选值：
<li>AAC：AAC 编码（默认），用于容器为 mp4。</li>
<li>MP3：mp3 编码，用于容器为 mp3。</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频流的编码方式，可选值：
<li>AAC：AAC 编码（默认），用于容器为 mp4。</li>
<li>MP3：mp3 编码，用于容器为 mp3。</li>
                     * @param _codec 音频流的编码方式，可选值：
<li>AAC：AAC 编码（默认），用于容器为 mp4。</li>
<li>MP3：mp3 编码，用于容器为 mp3。</li>
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
                     * 获取音频流的采样率，单位：Hz，可选值：
<li>16000（默认）</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * @return SampleRate 音频流的采样率，单位：Hz，可选值：
<li>16000（默认）</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频流的采样率，单位：Hz，可选值：
<li>16000（默认）</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * @param _sampleRate 音频流的采样率，单位：Hz，可选值：
<li>16000（默认）</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
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
                     * 获取声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道（默认）。</li>
                     * @return AudioChannel 声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道（默认）。</li>
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道（默认）。</li>
                     * @param _audioChannel 声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道（默认）。</li>
                     * 
                     */
                    void SetAudioChannel(const int64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                    /**
                     * 获取参考码率，单位 kbps，范围：26~10000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将根据音频参数自动采用合适的码率。
                     * @return Bitrate 参考码率，单位 kbps，范围：26~10000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将根据音频参数自动采用合适的码率。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置参考码率，单位 kbps，范围：26~10000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将根据音频参数自动采用合适的码率。
                     * @param _bitrate 参考码率，单位 kbps，范围：26~10000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将根据音频参数自动采用合适的码率。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * 音频流的编码方式，可选值：
<li>AAC：AAC 编码（默认），用于容器为 mp4。</li>
<li>MP3：mp3 编码，用于容器为 mp3。</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频流的采样率，单位：Hz，可选值：
<li>16000（默认）</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道（默认）。</li>
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * 参考码率，单位 kbps，范围：26~10000。
如果设置，编码时会尽量按该码率进行编码。
如果不设置，服务将根据音频参数自动采用合适的码率。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_
