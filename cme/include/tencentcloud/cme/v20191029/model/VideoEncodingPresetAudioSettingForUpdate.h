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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETAUDIOSETTINGFORUPDATE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETAUDIOSETTINGFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频编码配置中的音频设置更新信息
                */
                class VideoEncodingPresetAudioSettingForUpdate : public AbstractModel
                {
                public:
                    VideoEncodingPresetAudioSettingForUpdate();
                    ~VideoEncodingPresetAudioSettingForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频码率，单位：bps。
不填则不修改。
                     * @return Bitrate 音频码率，单位：bps。
不填则不修改。
                     * 
                     */
                    std::string GetBitrate() const;

                    /**
                     * 设置音频码率，单位：bps。
不填则不修改。
                     * @param _bitrate 音频码率，单位：bps。
不填则不修改。
                     * 
                     */
                    void SetBitrate(const std::string& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取音频声道数，可选值： 
<li>1：单声道；</li>
<li>2：双声道。</li> 
不填则不修改。
                     * @return Channels 音频声道数，可选值： 
<li>1：单声道；</li>
<li>2：双声道。</li> 
不填则不修改。
                     * 
                     */
                    uint64_t GetChannels() const;

                    /**
                     * 设置音频声道数，可选值： 
<li>1：单声道；</li>
<li>2：双声道。</li> 
不填则不修改。
                     * @param _channels 音频声道数，可选值： 
<li>1：单声道；</li>
<li>2：双声道。</li> 
不填则不修改。
                     * 
                     */
                    void SetChannels(const uint64_t& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                    /**
                     * 获取音频流的采样率，目前仅支持： 16000； 32000； 44100； 48000。单位：Hz。
不填则不修改。
                     * @return SampleRate 音频流的采样率，目前仅支持： 16000； 32000； 44100； 48000。单位：Hz。
不填则不修改。
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频流的采样率，目前仅支持： 16000； 32000； 44100； 48000。单位：Hz。
不填则不修改。
                     * @param _sampleRate 音频流的采样率，目前仅支持： 16000； 32000； 44100； 48000。单位：Hz。
不填则不修改。
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                private:

                    /**
                     * 音频码率，单位：bps。
不填则不修改。
                     */
                    std::string m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频声道数，可选值： 
<li>1：单声道；</li>
<li>2：双声道。</li> 
不填则不修改。
                     */
                    uint64_t m_channels;
                    bool m_channelsHasBeenSet;

                    /**
                     * 音频流的采样率，目前仅支持： 16000； 32000； 44100； 48000。单位：Hz。
不填则不修改。
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOENCODINGPRESETAUDIOSETTINGFORUPDATE_H_
