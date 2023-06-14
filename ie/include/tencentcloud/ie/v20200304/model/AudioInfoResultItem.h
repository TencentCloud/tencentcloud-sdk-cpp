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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFORESULTITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFORESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务结束后生成的文件音频信息
                */
                class AudioInfoResultItem : public AbstractModel
                {
                public:
                    AudioInfoResultItem();
                    ~AudioInfoResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频流的流id。
                     * @return Stream 音频流的流id。
                     * 
                     */
                    int64_t GetStream() const;

                    /**
                     * 设置音频流的流id。
                     * @param _stream 音频流的流id。
                     * 
                     */
                    void SetStream(const int64_t& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取音频采样率 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sample 音频采样率 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSample() const;

                    /**
                     * 设置音频采样率 。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sample 音频采样率 。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSample(const int64_t& _sample);

                    /**
                     * 判断参数 Sample 是否已赋值
                     * @return Sample 是否已赋值
                     * 
                     */
                    bool SampleHasBeenSet() const;

                    /**
                     * 获取音频声道数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 音频声道数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChannel() const;

                    /**
                     * 设置音频声道数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel 音频声道数。
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
                     * 获取编码格式，如aac, mp3等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Codec 编码格式，如aac, mp3等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置编码格式，如aac, mp3等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codec 编码格式，如aac, mp3等。
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

                    /**
                     * 获取码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bitrate 码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bitrate 码率，单位：bps。
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
                     * 获取音频时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 音频时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置音频时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 音频时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 音频流的流id。
                     */
                    int64_t m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 音频采样率 。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sample;
                    bool m_sampleHasBeenSet;

                    /**
                     * 音频声道数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 编码格式，如aac, mp3等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 码率，单位：bps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 音频时长，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_AUDIOINFORESULTITEM_H_
