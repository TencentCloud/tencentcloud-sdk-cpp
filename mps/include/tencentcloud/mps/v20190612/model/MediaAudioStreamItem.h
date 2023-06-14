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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_

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
                * 点播文件音频流信息
                */
                class MediaAudioStreamItem : public AbstractModel
                {
                public:
                    MediaAudioStreamItem();
                    ~MediaAudioStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的码率，单位：bps。
                     * @return Bitrate 音频流的码率，单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置音频流的码率，单位：bps。
                     * @param _bitrate 音频流的码率，单位：bps。
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
                     * @return SamplingRate 音频流的采样率，单位：hz。
                     * 
                     */
                    int64_t GetSamplingRate() const;

                    /**
                     * 设置音频流的采样率，单位：hz。
                     * @param _samplingRate 音频流的采样率，单位：hz。
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
                     * @return Codec 音频流的编码格式，例如 aac。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置音频流的编码格式，例如 aac。
                     * @param _codec 音频流的编码格式，例如 aac。
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
                     * 获取音频声道数，例如 2。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 音频声道数，例如 2。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置音频声道数，例如 2。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel 音频声道数，例如 2。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取音频Codecs。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Codecs 音频Codecs。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodecs() const;

                    /**
                     * 设置音频Codecs。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codecs 音频Codecs。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodecs(const std::string& _codecs);

                    /**
                     * 判断参数 Codecs 是否已赋值
                     * @return Codecs 是否已赋值
                     * 
                     */
                    bool CodecsHasBeenSet() const;

                    /**
                     * 获取音频响度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Loudness 音频响度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLoudness() const;

                    /**
                     * 设置音频响度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loudness 音频响度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoudness(const double& _loudness);

                    /**
                     * 判断参数 Loudness 是否已赋值
                     * @return Loudness 是否已赋值
                     * 
                     */
                    bool LoudnessHasBeenSet() const;

                private:

                    /**
                     * 音频流的码率，单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频流的采样率，单位：hz。
                     */
                    int64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * 音频流的编码格式，例如 aac。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 音频声道数，例如 2。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 音频Codecs。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codecs;
                    bool m_codecsHasBeenSet;

                    /**
                     * 音频响度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_loudness;
                    bool m_loudnessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAUDIOSTREAMITEM_H_
