/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_VODAUDIOSTREAMITEM_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_VODAUDIOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 文件音频流信息
                */
                class VodAudioStreamItem : public AbstractModel
                {
                public:
                    VodAudioStreamItem();
                    ~VodAudioStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bitrate 音频流的码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置音频流的码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrate 音频流的码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取音频流的采样率，单位：hz。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SamplingRate 音频流的采样率，单位：hz。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSamplingRate() const;

                    /**
                     * 设置音频流的采样率，单位：hz。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _samplingRate 音频流的采样率，单位：hz。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSamplingRate(const int64_t& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取音频流的编码格式，例如 aac。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Codec 音频流的编码格式，例如 aac。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频流的编码格式，例如 aac。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codec 音频流的编码格式，例如 aac。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 音频流的码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频流的采样率，单位：hz。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * 音频流的编码格式，例如 aac。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_VODAUDIOSTREAMITEM_H_
