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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_

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
                * 录制音频转码参数。
                */
                class AudioParams : public AbstractModel
                {
                public:
                    AudioParams();
                    ~AudioParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频采样率枚举值:(注意1 代表48000HZ, 2 代表44100HZ, 3 代表16000HZ)
1：48000Hz（默认）;
2：44100Hz
3：16000Hz。
                     * @return SampleRate 音频采样率枚举值:(注意1 代表48000HZ, 2 代表44100HZ, 3 代表16000HZ)
1：48000Hz（默认）;
2：44100Hz
3：16000Hz。
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置音频采样率枚举值:(注意1 代表48000HZ, 2 代表44100HZ, 3 代表16000HZ)
1：48000Hz（默认）;
2：44100Hz
3：16000Hz。
                     * @param _sampleRate 音频采样率枚举值:(注意1 代表48000HZ, 2 代表44100HZ, 3 代表16000HZ)
1：48000Hz（默认）;
2：44100Hz
3：16000Hz。
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
                     * 获取声道数枚举值:
1：单声道;
2：双声道（默认）。
                     * @return Channel 声道数枚举值:
1：单声道;
2：双声道（默认）。
                     * 
                     */
                    uint64_t GetChannel() const;

                    /**
                     * 设置声道数枚举值:
1：单声道;
2：双声道（默认）。
                     * @param _channel 声道数枚举值:
1：单声道;
2：双声道（默认）。
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
                     * 获取音频码率: 取值范围[32000, 128000] ，单位bps，默认64000bps。
                     * @return BitRate 音频码率: 取值范围[32000, 128000] ，单位bps，默认64000bps。
                     * 
                     */
                    uint64_t GetBitRate() const;

                    /**
                     * 设置音频码率: 取值范围[32000, 128000] ，单位bps，默认64000bps。
                     * @param _bitRate 音频码率: 取值范围[32000, 128000] ，单位bps，默认64000bps。
                     * 
                     */
                    void SetBitRate(const uint64_t& _bitRate);

                    /**
                     * 判断参数 BitRate 是否已赋值
                     * @return BitRate 是否已赋值
                     * 
                     */
                    bool BitRateHasBeenSet() const;

                private:

                    /**
                     * 音频采样率枚举值:(注意1 代表48000HZ, 2 代表44100HZ, 3 代表16000HZ)
1：48000Hz（默认）;
2：44100Hz
3：16000Hz。
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 声道数枚举值:
1：单声道;
2：双声道（默认）。
                     */
                    uint64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 音频码率: 取值范围[32000, 128000] ，单位bps，默认64000bps。
                     */
                    uint64_t m_bitRate;
                    bool m_bitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOPARAMS_H_
