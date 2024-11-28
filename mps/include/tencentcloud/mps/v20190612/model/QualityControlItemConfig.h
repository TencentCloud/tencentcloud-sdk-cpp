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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_

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
                * 质检项配置
                */
                class QualityControlItemConfig : public AbstractModel
                {
                public:
                    QualityControlItemConfig();
                    ~QualityControlItemConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取质检项名称。质检项取值如下：
<li>LowEvaluation：无参考打分</li>
<li>Mosaic：马赛克检测</li>
<li>CrashScreen：花屏检测</li>
<li>Blur：模糊检测</li>
<li>BlackWhiteEdge：黑白边检测</li>
<li>SolidColorScreen：纯色屏检测</li>
<li>LowLighting：低光照</li>
<li>HighLighting：过曝</li>
<li>NoVoice：静音检测</li>
<li>LowVoice：低音检测</li>
<li>HighVoice：爆音检测</li>
<li>Jitter：抖动检测</li>
<li>Noise：噪点检测</li>
<li>QRCode：二维码检测</li>
<li>BarCode：条形码检测</li>
<li>AppletCode：小程序码检测</li>
<li>VideoResolutionChanged：视频分辨率变化</li>
<li>AudioSampleRateChanged：音频采样率变化</li>
<li>AudioChannelsChanged：音频通道数变化</li>
<li>ParameterSetsChanged：流参数集信息发生变化</li>
<li>DarOrSarInvalid：视频的宽高比异常</li>
<li>TimestampFallback：DTS时间戳回退</li>
<li>DtsJitter：DTS抖动过大</li>
<li>PtsJitter：PTS抖动过大</li>
<li>AACDurationDeviation：AAC帧时间戳间隔不合理</li>
<li>AudioDroppingFrames：音频丢帧</li>
<li>VideoDroppingFrames：视频丢帧</li>
<li>AVTimestampInterleave：音视频交织不合理</li>
<li>PtsLessThanDts：媒体流的 pts 小于 dts</li>
<li>ReceiveFpsJitter：网络接收帧率抖动过大</li>
<li>ReceiveFpsTooSmall：网络接收视频帧率过小</li>
<li>FpsJitter：通过PTS计算得到的流帧率抖动过大</li>
<li>StreamOpenFailed：流打开失败</li>
<li>StreamEnd：流结束</li>
<li>StreamParseFailed：流解析失败</li>
<li>VideoFirstFrameNotIdr：首帧不是IDR帧</li>
<li>StreamNALUError：NALU起始码错误</li>
<li>TsStreamNoAud：mpegts的H26x流缺失 AUD NALU</li>
<li>AudioStreamLack：无音频流</li>
<li>VideoStreamLack：无视频流</li>
<li>LackAudioRecover：缺失音频流恢复</li>
<li>LackVideoRecover：缺失视频流恢复</li>
<li>VideoBitrateOutofRange：视频流码率(kbps)超出范围</li>
<li>AudioBitrateOutofRange：音频流码率(kbps)超出范围</li>
<li>VideoDecodeFailed：视频解码错误</li>
<li>AudioDecodeFailed：音频解码错误</li>
<li>AudioOutOfPhase：双通道音频相位相反</li>
<li>VideoDuplicatedFrame：视频流中存在重复帧</li>
<li>AudioDuplicatedFrame：音频流中存在重复帧</li>
<li>VideoRotation：视频画面旋转</li>
<li>TsMultiPrograms：MPEG2-TS流有多个program</li>
<li>Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求</li>
<li>HLSBadM3u8Format：无效的m3u8文件</li>
<li>HLSInvalidMasterM3u8：无效的main m3u8文件</li>
<li>HLSInvalidMediaM3u8：无效的media m3u8文件</li>
<li>HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsStreamNumChange：切片的流数目发生变化</li>
<li>HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>TimecodeTrackExist：MP4存在tmcd轨道</li>
                     * @return Type 质检项名称。质检项取值如下：
<li>LowEvaluation：无参考打分</li>
<li>Mosaic：马赛克检测</li>
<li>CrashScreen：花屏检测</li>
<li>Blur：模糊检测</li>
<li>BlackWhiteEdge：黑白边检测</li>
<li>SolidColorScreen：纯色屏检测</li>
<li>LowLighting：低光照</li>
<li>HighLighting：过曝</li>
<li>NoVoice：静音检测</li>
<li>LowVoice：低音检测</li>
<li>HighVoice：爆音检测</li>
<li>Jitter：抖动检测</li>
<li>Noise：噪点检测</li>
<li>QRCode：二维码检测</li>
<li>BarCode：条形码检测</li>
<li>AppletCode：小程序码检测</li>
<li>VideoResolutionChanged：视频分辨率变化</li>
<li>AudioSampleRateChanged：音频采样率变化</li>
<li>AudioChannelsChanged：音频通道数变化</li>
<li>ParameterSetsChanged：流参数集信息发生变化</li>
<li>DarOrSarInvalid：视频的宽高比异常</li>
<li>TimestampFallback：DTS时间戳回退</li>
<li>DtsJitter：DTS抖动过大</li>
<li>PtsJitter：PTS抖动过大</li>
<li>AACDurationDeviation：AAC帧时间戳间隔不合理</li>
<li>AudioDroppingFrames：音频丢帧</li>
<li>VideoDroppingFrames：视频丢帧</li>
<li>AVTimestampInterleave：音视频交织不合理</li>
<li>PtsLessThanDts：媒体流的 pts 小于 dts</li>
<li>ReceiveFpsJitter：网络接收帧率抖动过大</li>
<li>ReceiveFpsTooSmall：网络接收视频帧率过小</li>
<li>FpsJitter：通过PTS计算得到的流帧率抖动过大</li>
<li>StreamOpenFailed：流打开失败</li>
<li>StreamEnd：流结束</li>
<li>StreamParseFailed：流解析失败</li>
<li>VideoFirstFrameNotIdr：首帧不是IDR帧</li>
<li>StreamNALUError：NALU起始码错误</li>
<li>TsStreamNoAud：mpegts的H26x流缺失 AUD NALU</li>
<li>AudioStreamLack：无音频流</li>
<li>VideoStreamLack：无视频流</li>
<li>LackAudioRecover：缺失音频流恢复</li>
<li>LackVideoRecover：缺失视频流恢复</li>
<li>VideoBitrateOutofRange：视频流码率(kbps)超出范围</li>
<li>AudioBitrateOutofRange：音频流码率(kbps)超出范围</li>
<li>VideoDecodeFailed：视频解码错误</li>
<li>AudioDecodeFailed：音频解码错误</li>
<li>AudioOutOfPhase：双通道音频相位相反</li>
<li>VideoDuplicatedFrame：视频流中存在重复帧</li>
<li>AudioDuplicatedFrame：音频流中存在重复帧</li>
<li>VideoRotation：视频画面旋转</li>
<li>TsMultiPrograms：MPEG2-TS流有多个program</li>
<li>Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求</li>
<li>HLSBadM3u8Format：无效的m3u8文件</li>
<li>HLSInvalidMasterM3u8：无效的main m3u8文件</li>
<li>HLSInvalidMediaM3u8：无效的media m3u8文件</li>
<li>HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsStreamNumChange：切片的流数目发生变化</li>
<li>HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>TimecodeTrackExist：MP4存在tmcd轨道</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置质检项名称。质检项取值如下：
<li>LowEvaluation：无参考打分</li>
<li>Mosaic：马赛克检测</li>
<li>CrashScreen：花屏检测</li>
<li>Blur：模糊检测</li>
<li>BlackWhiteEdge：黑白边检测</li>
<li>SolidColorScreen：纯色屏检测</li>
<li>LowLighting：低光照</li>
<li>HighLighting：过曝</li>
<li>NoVoice：静音检测</li>
<li>LowVoice：低音检测</li>
<li>HighVoice：爆音检测</li>
<li>Jitter：抖动检测</li>
<li>Noise：噪点检测</li>
<li>QRCode：二维码检测</li>
<li>BarCode：条形码检测</li>
<li>AppletCode：小程序码检测</li>
<li>VideoResolutionChanged：视频分辨率变化</li>
<li>AudioSampleRateChanged：音频采样率变化</li>
<li>AudioChannelsChanged：音频通道数变化</li>
<li>ParameterSetsChanged：流参数集信息发生变化</li>
<li>DarOrSarInvalid：视频的宽高比异常</li>
<li>TimestampFallback：DTS时间戳回退</li>
<li>DtsJitter：DTS抖动过大</li>
<li>PtsJitter：PTS抖动过大</li>
<li>AACDurationDeviation：AAC帧时间戳间隔不合理</li>
<li>AudioDroppingFrames：音频丢帧</li>
<li>VideoDroppingFrames：视频丢帧</li>
<li>AVTimestampInterleave：音视频交织不合理</li>
<li>PtsLessThanDts：媒体流的 pts 小于 dts</li>
<li>ReceiveFpsJitter：网络接收帧率抖动过大</li>
<li>ReceiveFpsTooSmall：网络接收视频帧率过小</li>
<li>FpsJitter：通过PTS计算得到的流帧率抖动过大</li>
<li>StreamOpenFailed：流打开失败</li>
<li>StreamEnd：流结束</li>
<li>StreamParseFailed：流解析失败</li>
<li>VideoFirstFrameNotIdr：首帧不是IDR帧</li>
<li>StreamNALUError：NALU起始码错误</li>
<li>TsStreamNoAud：mpegts的H26x流缺失 AUD NALU</li>
<li>AudioStreamLack：无音频流</li>
<li>VideoStreamLack：无视频流</li>
<li>LackAudioRecover：缺失音频流恢复</li>
<li>LackVideoRecover：缺失视频流恢复</li>
<li>VideoBitrateOutofRange：视频流码率(kbps)超出范围</li>
<li>AudioBitrateOutofRange：音频流码率(kbps)超出范围</li>
<li>VideoDecodeFailed：视频解码错误</li>
<li>AudioDecodeFailed：音频解码错误</li>
<li>AudioOutOfPhase：双通道音频相位相反</li>
<li>VideoDuplicatedFrame：视频流中存在重复帧</li>
<li>AudioDuplicatedFrame：音频流中存在重复帧</li>
<li>VideoRotation：视频画面旋转</li>
<li>TsMultiPrograms：MPEG2-TS流有多个program</li>
<li>Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求</li>
<li>HLSBadM3u8Format：无效的m3u8文件</li>
<li>HLSInvalidMasterM3u8：无效的main m3u8文件</li>
<li>HLSInvalidMediaM3u8：无效的media m3u8文件</li>
<li>HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsStreamNumChange：切片的流数目发生变化</li>
<li>HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>TimecodeTrackExist：MP4存在tmcd轨道</li>
                     * @param _type 质检项名称。质检项取值如下：
<li>LowEvaluation：无参考打分</li>
<li>Mosaic：马赛克检测</li>
<li>CrashScreen：花屏检测</li>
<li>Blur：模糊检测</li>
<li>BlackWhiteEdge：黑白边检测</li>
<li>SolidColorScreen：纯色屏检测</li>
<li>LowLighting：低光照</li>
<li>HighLighting：过曝</li>
<li>NoVoice：静音检测</li>
<li>LowVoice：低音检测</li>
<li>HighVoice：爆音检测</li>
<li>Jitter：抖动检测</li>
<li>Noise：噪点检测</li>
<li>QRCode：二维码检测</li>
<li>BarCode：条形码检测</li>
<li>AppletCode：小程序码检测</li>
<li>VideoResolutionChanged：视频分辨率变化</li>
<li>AudioSampleRateChanged：音频采样率变化</li>
<li>AudioChannelsChanged：音频通道数变化</li>
<li>ParameterSetsChanged：流参数集信息发生变化</li>
<li>DarOrSarInvalid：视频的宽高比异常</li>
<li>TimestampFallback：DTS时间戳回退</li>
<li>DtsJitter：DTS抖动过大</li>
<li>PtsJitter：PTS抖动过大</li>
<li>AACDurationDeviation：AAC帧时间戳间隔不合理</li>
<li>AudioDroppingFrames：音频丢帧</li>
<li>VideoDroppingFrames：视频丢帧</li>
<li>AVTimestampInterleave：音视频交织不合理</li>
<li>PtsLessThanDts：媒体流的 pts 小于 dts</li>
<li>ReceiveFpsJitter：网络接收帧率抖动过大</li>
<li>ReceiveFpsTooSmall：网络接收视频帧率过小</li>
<li>FpsJitter：通过PTS计算得到的流帧率抖动过大</li>
<li>StreamOpenFailed：流打开失败</li>
<li>StreamEnd：流结束</li>
<li>StreamParseFailed：流解析失败</li>
<li>VideoFirstFrameNotIdr：首帧不是IDR帧</li>
<li>StreamNALUError：NALU起始码错误</li>
<li>TsStreamNoAud：mpegts的H26x流缺失 AUD NALU</li>
<li>AudioStreamLack：无音频流</li>
<li>VideoStreamLack：无视频流</li>
<li>LackAudioRecover：缺失音频流恢复</li>
<li>LackVideoRecover：缺失视频流恢复</li>
<li>VideoBitrateOutofRange：视频流码率(kbps)超出范围</li>
<li>AudioBitrateOutofRange：音频流码率(kbps)超出范围</li>
<li>VideoDecodeFailed：视频解码错误</li>
<li>AudioDecodeFailed：音频解码错误</li>
<li>AudioOutOfPhase：双通道音频相位相反</li>
<li>VideoDuplicatedFrame：视频流中存在重复帧</li>
<li>AudioDuplicatedFrame：音频流中存在重复帧</li>
<li>VideoRotation：视频画面旋转</li>
<li>TsMultiPrograms：MPEG2-TS流有多个program</li>
<li>Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求</li>
<li>HLSBadM3u8Format：无效的m3u8文件</li>
<li>HLSInvalidMasterM3u8：无效的main m3u8文件</li>
<li>HLSInvalidMediaM3u8：无效的media m3u8文件</li>
<li>HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsStreamNumChange：切片的流数目发生变化</li>
<li>HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>TimecodeTrackExist：MP4存在tmcd轨道</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sampling 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampling 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSampling(const std::string& _sampling);

                    /**
                     * 判断参数 Sampling 是否已赋值
                     * @return Sampling 是否已赋值
                     * 
                     */
                    bool SamplingHasBeenSet() const;

                    /**
                     * 获取采样间隔时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalTime 采样间隔时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置采样间隔时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalTime 采样间隔时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取异常持续时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 异常持续时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置异常持续时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 异常持续时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取检测项对应的阈值，不同检测项对应阈值不同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 检测项对应的阈值，不同检测项对应阈值不同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置检测项对应的阈值，不同检测项对应阈值不同。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threshold 检测项对应的阈值，不同检测项对应阈值不同。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreshold(const std::string& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 质检项名称。质检项取值如下：
<li>LowEvaluation：无参考打分</li>
<li>Mosaic：马赛克检测</li>
<li>CrashScreen：花屏检测</li>
<li>Blur：模糊检测</li>
<li>BlackWhiteEdge：黑白边检测</li>
<li>SolidColorScreen：纯色屏检测</li>
<li>LowLighting：低光照</li>
<li>HighLighting：过曝</li>
<li>NoVoice：静音检测</li>
<li>LowVoice：低音检测</li>
<li>HighVoice：爆音检测</li>
<li>Jitter：抖动检测</li>
<li>Noise：噪点检测</li>
<li>QRCode：二维码检测</li>
<li>BarCode：条形码检测</li>
<li>AppletCode：小程序码检测</li>
<li>VideoResolutionChanged：视频分辨率变化</li>
<li>AudioSampleRateChanged：音频采样率变化</li>
<li>AudioChannelsChanged：音频通道数变化</li>
<li>ParameterSetsChanged：流参数集信息发生变化</li>
<li>DarOrSarInvalid：视频的宽高比异常</li>
<li>TimestampFallback：DTS时间戳回退</li>
<li>DtsJitter：DTS抖动过大</li>
<li>PtsJitter：PTS抖动过大</li>
<li>AACDurationDeviation：AAC帧时间戳间隔不合理</li>
<li>AudioDroppingFrames：音频丢帧</li>
<li>VideoDroppingFrames：视频丢帧</li>
<li>AVTimestampInterleave：音视频交织不合理</li>
<li>PtsLessThanDts：媒体流的 pts 小于 dts</li>
<li>ReceiveFpsJitter：网络接收帧率抖动过大</li>
<li>ReceiveFpsTooSmall：网络接收视频帧率过小</li>
<li>FpsJitter：通过PTS计算得到的流帧率抖动过大</li>
<li>StreamOpenFailed：流打开失败</li>
<li>StreamEnd：流结束</li>
<li>StreamParseFailed：流解析失败</li>
<li>VideoFirstFrameNotIdr：首帧不是IDR帧</li>
<li>StreamNALUError：NALU起始码错误</li>
<li>TsStreamNoAud：mpegts的H26x流缺失 AUD NALU</li>
<li>AudioStreamLack：无音频流</li>
<li>VideoStreamLack：无视频流</li>
<li>LackAudioRecover：缺失音频流恢复</li>
<li>LackVideoRecover：缺失视频流恢复</li>
<li>VideoBitrateOutofRange：视频流码率(kbps)超出范围</li>
<li>AudioBitrateOutofRange：音频流码率(kbps)超出范围</li>
<li>VideoDecodeFailed：视频解码错误</li>
<li>AudioDecodeFailed：音频解码错误</li>
<li>AudioOutOfPhase：双通道音频相位相反</li>
<li>VideoDuplicatedFrame：视频流中存在重复帧</li>
<li>AudioDuplicatedFrame：音频流中存在重复帧</li>
<li>VideoRotation：视频画面旋转</li>
<li>TsMultiPrograms：MPEG2-TS流有多个program</li>
<li>Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求</li>
<li>HLSBadM3u8Format：无效的m3u8文件</li>
<li>HLSInvalidMasterM3u8：无效的main m3u8文件</li>
<li>HLSInvalidMediaM3u8：无效的media m3u8文件</li>
<li>HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数</li>
<li>HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsStreamNumChange：切片的流数目发生变化</li>
<li>HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY</li>
<li>TimecodeTrackExist：MP4存在tmcd轨道</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 采样方式，取值范围：
- Time：根据时间间隔采样。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * 采样间隔时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 异常持续时间，单位：ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 检测项对应的阈值，不同检测项对应阈值不同。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEMCONFIG_H_
