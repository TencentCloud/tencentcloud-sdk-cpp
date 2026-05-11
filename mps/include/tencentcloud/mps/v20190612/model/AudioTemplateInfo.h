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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AudioTrackChannelInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 音频流配置参数
                */
                class AudioTemplateInfo : public AbstractModel
                {
                public:
                    AudioTemplateInfo();
                    ~AudioTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>音频流的编码格式。<br>当不需要对音频进行转码时，可选值为：</p><li>copy。</li>当外层参数 Container 为 mp3 时，可选值为：<li>mp3。</li>当外层参数 Container 为 ogg 或 flac 时，可选值为：<li>flac。</li>当外层参数 Container 为 m4a 时，可选值为：<li>aac；</li><li>ac3。</li>当外层参数 Container 为 mp4 或 flv 时，可选值为：<li>aac：更适合 mp4；</li><li>mp3：更适合 flv；</li><li>mp2。</li>当外层参数 Container 为 hls 时，可选值为：<li>aac；</li><li>mp3;</li><li>eac3：自适应转码音轨合并时使用。</li>当外层参数 Container 为 wav时，可选值为：<li>pcm16, pcm24；</li>
                     * @return Codec <p>音频流的编码格式。<br>当不需要对音频进行转码时，可选值为：</p><li>copy。</li>当外层参数 Container 为 mp3 时，可选值为：<li>mp3。</li>当外层参数 Container 为 ogg 或 flac 时，可选值为：<li>flac。</li>当外层参数 Container 为 m4a 时，可选值为：<li>aac；</li><li>ac3。</li>当外层参数 Container 为 mp4 或 flv 时，可选值为：<li>aac：更适合 mp4；</li><li>mp3：更适合 flv；</li><li>mp2。</li>当外层参数 Container 为 hls 时，可选值为：<li>aac；</li><li>mp3;</li><li>eac3：自适应转码音轨合并时使用。</li>当外层参数 Container 为 wav时，可选值为：<li>pcm16, pcm24；</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>音频流的编码格式。<br>当不需要对音频进行转码时，可选值为：</p><li>copy。</li>当外层参数 Container 为 mp3 时，可选值为：<li>mp3。</li>当外层参数 Container 为 ogg 或 flac 时，可选值为：<li>flac。</li>当外层参数 Container 为 m4a 时，可选值为：<li>aac；</li><li>ac3。</li>当外层参数 Container 为 mp4 或 flv 时，可选值为：<li>aac：更适合 mp4；</li><li>mp3：更适合 flv；</li><li>mp2。</li>当外层参数 Container 为 hls 时，可选值为：<li>aac；</li><li>mp3;</li><li>eac3：自适应转码音轨合并时使用。</li>当外层参数 Container 为 wav时，可选值为：<li>pcm16, pcm24；</li>
                     * @param _codec <p>音频流的编码格式。<br>当不需要对音频进行转码时，可选值为：</p><li>copy。</li>当外层参数 Container 为 mp3 时，可选值为：<li>mp3。</li>当外层参数 Container 为 ogg 或 flac 时，可选值为：<li>flac。</li>当外层参数 Container 为 m4a 时，可选值为：<li>aac；</li><li>ac3。</li>当外层参数 Container 为 mp4 或 flv 时，可选值为：<li>aac：更适合 mp4；</li><li>mp3：更适合 flv；</li><li>mp2。</li>当外层参数 Container 为 hls 时，可选值为：<li>aac；</li><li>mp3;</li><li>eac3：自适应转码音轨合并时使用。</li>当外层参数 Container 为 wav时，可选值为：<li>pcm16, pcm24；</li>
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
                     * 获取<p>音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。<br>当取值为 0，表示音频码率和原始音频保持一致。<br>注意：如果使用自适应转码音轨合并TrackChannelInfo参数，取值范围：<br>1）、不能填0；<br>2）、Codec为：aac时，取值范围：[26, 256];<br>3）、Codec为：ac3时，取值范围：[26, 640];<br>4)、Codec为：eac3时，取值范围：[26, 6144]，备注：当SampleRate为44100HZ，最大值为：5644，当SampleRate为48000HZ，最大值为：6144，</p>
                     * @return Bitrate <p>音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。<br>当取值为 0，表示音频码率和原始音频保持一致。<br>注意：如果使用自适应转码音轨合并TrackChannelInfo参数，取值范围：<br>1）、不能填0；<br>2）、Codec为：aac时，取值范围：[26, 256];<br>3）、Codec为：ac3时，取值范围：[26, 640];<br>4)、Codec为：eac3时，取值范围：[26, 6144]，备注：当SampleRate为44100HZ，最大值为：5644，当SampleRate为48000HZ，最大值为：6144，</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。<br>当取值为 0，表示音频码率和原始音频保持一致。<br>注意：如果使用自适应转码音轨合并TrackChannelInfo参数，取值范围：<br>1）、不能填0；<br>2）、Codec为：aac时，取值范围：[26, 256];<br>3）、Codec为：ac3时，取值范围：[26, 640];<br>4)、Codec为：eac3时，取值范围：[26, 6144]，备注：当SampleRate为44100HZ，最大值为：5644，当SampleRate为48000HZ，最大值为：6144，</p>
                     * @param _bitrate <p>音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。<br>当取值为 0，表示音频码率和原始音频保持一致。<br>注意：如果使用自适应转码音轨合并TrackChannelInfo参数，取值范围：<br>1）、不能填0；<br>2）、Codec为：aac时，取值范围：[26, 256];<br>3）、Codec为：ac3时，取值范围：[26, 640];<br>4)、Codec为：eac3时，取值范围：[26, 6144]，备注：当SampleRate为44100HZ，最大值为：5644，当SampleRate为48000HZ，最大值为：6144，</p>
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
                     * 获取<p>音频流的采样率，不同编码标准支持的采样率选项不同。填0代表使用源音频的采样率数值。<br>详细参考<a href="https://cloud.tencent.com/document/product/862/77166#f3b039f1-d817-4a96-b4e4-90132d31cd53">音频采样率支持范围文档</a><br>单位：Hz<br>注意：请确保源音频流的采样率在上述选项范围内，否则可能导致转码失败！</p>
                     * @return SampleRate <p>音频流的采样率，不同编码标准支持的采样率选项不同。填0代表使用源音频的采样率数值。<br>详细参考<a href="https://cloud.tencent.com/document/product/862/77166#f3b039f1-d817-4a96-b4e4-90132d31cd53">音频采样率支持范围文档</a><br>单位：Hz<br>注意：请确保源音频流的采样率在上述选项范围内，否则可能导致转码失败！</p>
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置<p>音频流的采样率，不同编码标准支持的采样率选项不同。填0代表使用源音频的采样率数值。<br>详细参考<a href="https://cloud.tencent.com/document/product/862/77166#f3b039f1-d817-4a96-b4e4-90132d31cd53">音频采样率支持范围文档</a><br>单位：Hz<br>注意：请确保源音频流的采样率在上述选项范围内，否则可能导致转码失败！</p>
                     * @param _sampleRate <p>音频流的采样率，不同编码标准支持的采样率选项不同。填0代表使用源音频的采样率数值。<br>详细参考<a href="https://cloud.tencent.com/document/product/862/77166#f3b039f1-d817-4a96-b4e4-90132d31cd53">音频采样率支持范围文档</a><br>单位：Hz<br>注意：请确保源音频流的采样率在上述选项范围内，否则可能导致转码失败！</p>
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
                     * 获取<p>音频通道方式，可选值：</p><li>0：声道数随源</li><li>1：单通道</li><li>2：双通道</li><li>6：5.1声道</li>当媒体的封装格式是音频格式（mp3）时，声道数不允许设为5.1声道。<p>默认值：2。<br>注意：设置音频声道随源时，如果转码音频编码格式不支持当前声道，转码任务可能会失败。</p>
                     * @return AudioChannel <p>音频通道方式，可选值：</p><li>0：声道数随源</li><li>1：单通道</li><li>2：双通道</li><li>6：5.1声道</li>当媒体的封装格式是音频格式（mp3）时，声道数不允许设为5.1声道。<p>默认值：2。<br>注意：设置音频声道随源时，如果转码音频编码格式不支持当前声道，转码任务可能会失败。</p>
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置<p>音频通道方式，可选值：</p><li>0：声道数随源</li><li>1：单通道</li><li>2：双通道</li><li>6：5.1声道</li>当媒体的封装格式是音频格式（mp3）时，声道数不允许设为5.1声道。<p>默认值：2。<br>注意：设置音频声道随源时，如果转码音频编码格式不支持当前声道，转码任务可能会失败。</p>
                     * @param _audioChannel <p>音频通道方式，可选值：</p><li>0：声道数随源</li><li>1：单通道</li><li>2：双通道</li><li>6：5.1声道</li>当媒体的封装格式是音频格式（mp3）时，声道数不允许设为5.1声道。<p>默认值：2。<br>注意：设置音频声道随源时，如果转码音频编码格式不支持当前声道，转码任务可能会失败。</p>
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
                     * 获取<p>合并音轨信息。<br>注意：此字段只是自适应转码生效，</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrackChannelInfo <p>合并音轨信息。<br>注意：此字段只是自适应转码生效，</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AudioTrackChannelInfo GetTrackChannelInfo() const;

                    /**
                     * 设置<p>合并音轨信息。<br>注意：此字段只是自适应转码生效，</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trackChannelInfo <p>合并音轨信息。<br>注意：此字段只是自适应转码生效，</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrackChannelInfo(const AudioTrackChannelInfo& _trackChannelInfo);

                    /**
                     * 判断参数 TrackChannelInfo 是否已赋值
                     * @return TrackChannelInfo 是否已赋值
                     * 
                     */
                    bool TrackChannelInfoHasBeenSet() const;

                private:

                    /**
                     * <p>音频流的编码格式。<br>当不需要对音频进行转码时，可选值为：</p><li>copy。</li>当外层参数 Container 为 mp3 时，可选值为：<li>mp3。</li>当外层参数 Container 为 ogg 或 flac 时，可选值为：<li>flac。</li>当外层参数 Container 为 m4a 时，可选值为：<li>aac；</li><li>ac3。</li>当外层参数 Container 为 mp4 或 flv 时，可选值为：<li>aac：更适合 mp4；</li><li>mp3：更适合 flv；</li><li>mp2。</li>当外层参数 Container 为 hls 时，可选值为：<li>aac；</li><li>mp3;</li><li>eac3：自适应转码音轨合并时使用。</li>当外层参数 Container 为 wav时，可选值为：<li>pcm16, pcm24；</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * <p>音频流的码率，取值范围：0 和 [26, 256]，单位：kbps。<br>当取值为 0，表示音频码率和原始音频保持一致。<br>注意：如果使用自适应转码音轨合并TrackChannelInfo参数，取值范围：<br>1）、不能填0；<br>2）、Codec为：aac时，取值范围：[26, 256];<br>3）、Codec为：ac3时，取值范围：[26, 640];<br>4)、Codec为：eac3时，取值范围：[26, 6144]，备注：当SampleRate为44100HZ，最大值为：5644，当SampleRate为48000HZ，最大值为：6144，</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>音频流的采样率，不同编码标准支持的采样率选项不同。填0代表使用源音频的采样率数值。<br>详细参考<a href="https://cloud.tencent.com/document/product/862/77166#f3b039f1-d817-4a96-b4e4-90132d31cd53">音频采样率支持范围文档</a><br>单位：Hz<br>注意：请确保源音频流的采样率在上述选项范围内，否则可能导致转码失败！</p>
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * <p>音频通道方式，可选值：</p><li>0：声道数随源</li><li>1：单通道</li><li>2：双通道</li><li>6：5.1声道</li>当媒体的封装格式是音频格式（mp3）时，声道数不允许设为5.1声道。<p>默认值：2。<br>注意：设置音频声道随源时，如果转码音频编码格式不支持当前声道，转码任务可能会失败。</p>
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * <p>合并音轨信息。<br>注意：此字段只是自适应转码生效，</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AudioTrackChannelInfo m_trackChannelInfo;
                    bool m_trackChannelInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFO_H_
