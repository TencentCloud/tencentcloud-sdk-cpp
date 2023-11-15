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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_

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
                * 输出的音频流信息
                */
                class OutputAudioStream : public AbstractModel
                {
                public:
                    OutputAudioStream();
                    ~OutputAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的编码格式，可选值：
<li>libfdk_aac：适合 mp4 文件。</li>
默认值：libfdk_aac。
                     * @return Codec 音频流的编码格式，可选值：
<li>libfdk_aac：适合 mp4 文件。</li>
默认值：libfdk_aac。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频流的编码格式，可选值：
<li>libfdk_aac：适合 mp4 文件。</li>
默认值：libfdk_aac。
                     * @param _codec 音频流的编码格式，可选值：
<li>libfdk_aac：适合 mp4 文件。</li>
默认值：libfdk_aac。
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
                     * 获取音频流的采样率，可选值：
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
默认值：16000。
                     * @return SampleRate 音频流的采样率，可选值：
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
默认值：16000。
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置音频流的采样率，可选值：
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
默认值：16000。
                     * @param _sampleRate 音频流的采样率，可选值：
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
默认值：16000。
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
                     * 获取音频声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道</li>
默认值：2。
                     * @return AudioChannel 音频声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道</li>
默认值：2。
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置音频声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道</li>
默认值：2。
                     * @param _audioChannel 音频声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道</li>
默认值：2。
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
                     * 获取音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。
当取值为 0，将自动设置音频码率。
                     * @return Bitrate 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。
当取值为 0，将自动设置音频码率。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。
当取值为 0，将自动设置音频码率。
                     * @param _bitrate 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。
当取值为 0，将自动设置音频码率。
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
                     * 音频流的编码格式，可选值：
<li>libfdk_aac：适合 mp4 文件。</li>
默认值：libfdk_aac。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频流的采样率，可选值：
<li>16000</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
单位：Hz。
默认值：16000。
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频声道数，可选值：
<li>1：单声道 。</li>
<li>2：双声道</li>
默认值：2。
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * 音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。
当取值为 0，将自动设置音频码率。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_OUTPUTAUDIOSTREAM_H_
