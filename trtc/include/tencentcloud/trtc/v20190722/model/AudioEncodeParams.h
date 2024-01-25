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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 音频转码参数
                */
                class AudioEncodeParams : public AbstractModel
                {
                public:
                    AudioEncodeParams();
                    ~AudioEncodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频采样率，取值为[48000, 44100]，单位是Hz。
                     * @return SampleRate 音频采样率，取值为[48000, 44100]，单位是Hz。
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率，取值为[48000, 44100]，单位是Hz。
                     * @param _sampleRate 音频采样率，取值为[48000, 44100]，单位是Hz。
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
                     * 获取音频声道数，取值范围[1,2]，1表示音频为单声道，2表示音频为双声道。
                     * @return Channel 音频声道数，取值范围[1,2]，1表示音频为单声道，2表示音频为双声道。
                     * 
                     */
                    uint64_t GetChannel() const;

                    /**
                     * 设置音频声道数，取值范围[1,2]，1表示音频为单声道，2表示音频为双声道。
                     * @param _channel 音频声道数，取值范围[1,2]，1表示音频为单声道，2表示音频为双声道。
                     * 
                     */
                    void SetChannel(const uint64_t& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取音频码率，取值范围[8,500]，单位为kbps。
                     * @return BitRate 音频码率，取值范围[8,500]，单位为kbps。
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置音频码率，取值范围[8,500]，单位为kbps。
                     * @param _bitRate 音频码率，取值范围[8,500]，单位为kbps。
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                    /**
                     * 获取音量，取值范围[0,300]。默认100，表示原始音量；0表示静音。
                     * @return Volume 音量，取值范围[0,300]。默认100，表示原始音量；0表示静音。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置音量，取值范围[0,300]。默认100，表示原始音量；0表示静音。
                     * @param _volume 音量，取值范围[0,300]。默认100，表示原始音量；0表示静音。
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 音频采样率，取值为[48000, 44100]，单位是Hz。
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 音频声道数，取值范围[1,2]，1表示音频为单声道，2表示音频为双声道。
                     */
                    uint64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 音频码率，取值范围[8,500]，单位为kbps。
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                    /**
                     * 音量，取值范围[0,300]。默认100，表示原始音量；0表示静音。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOENCODEPARAMS_H_
