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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_AUDIOSTREAMINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_AUDIOSTREAMINFO_H_

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
                * 音频流信息。
                */
                class AudioStreamInfo : public AbstractModel
                {
                public:
                    AudioStreamInfo();
                    ~AudioStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取码率，单位：bps。
                     * @return Bitrate 码率，单位：bps。
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置码率，单位：bps。
                     * @param _bitrate 码率，单位：bps。
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
                     * 获取采样率，单位：hz。
                     * @return SamplingRate 采样率，单位：hz。
                     * 
                     */
                    uint64_t GetSamplingRate() const;

                    /**
                     * 设置采样率，单位：hz。
                     * @param _samplingRate 采样率，单位：hz。
                     * 
                     */
                    void SetSamplingRate(const uint64_t& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取编码格式。
                     * @return Codec 编码格式。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置编码格式。
                     * @param _codec 编码格式。
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                private:

                    /**
                     * 码率，单位：bps。
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 采样率，单位：hz。
                     */
                    uint64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * 编码格式。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_AUDIOSTREAMINFO_H_
