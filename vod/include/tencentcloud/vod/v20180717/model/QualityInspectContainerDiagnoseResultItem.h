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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONTAINERDIAGNOSERESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONTAINERDIAGNOSERESULTITEM_H_

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
                * 音画质检测的格式诊断检出异常项。
                */
                class QualityInspectContainerDiagnoseResultItem : public AbstractModel
                {
                public:
                    QualityInspectContainerDiagnoseResultItem();
                    ~QualityInspectContainerDiagnoseResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>诊断出的异常类别</p><p>枚举值：</p><ul><li>DecodeParamException： 解码参数异常。</li><li>TimeStampException： 时间戳异常。</li><li>FrameException： 帧率异常。</li><li>StreamStatusException： 流状态异常。</li><li>StreamInfo： 流信息异常。</li><li>StreamAbnormalCharacteristics： 流特征异常。</li><li>DecodeException： 解码异常。</li><li>HLSRequirements： HLS 格式异常。</li></ul>
                     * @return Category <p>诊断出的异常类别</p><p>枚举值：</p><ul><li>DecodeParamException： 解码参数异常。</li><li>TimeStampException： 时间戳异常。</li><li>FrameException： 帧率异常。</li><li>StreamStatusException： 流状态异常。</li><li>StreamInfo： 流信息异常。</li><li>StreamAbnormalCharacteristics： 流特征异常。</li><li>DecodeException： 解码异常。</li><li>HLSRequirements： HLS 格式异常。</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>诊断出的异常类别</p><p>枚举值：</p><ul><li>DecodeParamException： 解码参数异常。</li><li>TimeStampException： 时间戳异常。</li><li>FrameException： 帧率异常。</li><li>StreamStatusException： 流状态异常。</li><li>StreamInfo： 流信息异常。</li><li>StreamAbnormalCharacteristics： 流特征异常。</li><li>DecodeException： 解码异常。</li><li>HLSRequirements： HLS 格式异常。</li></ul>
                     * @param _category <p>诊断出的异常类别</p><p>枚举值：</p><ul><li>DecodeParamException： 解码参数异常。</li><li>TimeStampException： 时间戳异常。</li><li>FrameException： 帧率异常。</li><li>StreamStatusException： 流状态异常。</li><li>StreamInfo： 流信息异常。</li><li>StreamAbnormalCharacteristics： 流特征异常。</li><li>DecodeException： 解码异常。</li><li>HLSRequirements： HLS 格式异常。</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>诊断出的具体异常类型。</p><p>枚举值：</p><ul><li>VideoResolutionChanged： 视频分辨率变化。</li><li>AudioSampleRateChanged： 音频采样率变化。</li><li>AudioChannelsChanged： 音频通道数变化。</li><li>ParameterSetsChanged： 流参数集信息发生变化。</li><li>DarOrSarInvalid： 视频的宽高比异常。</li><li>TimestampFallback： DTS时间戳回退。</li><li>DtsJitter： DTS抖动过大。</li><li>PtsJitter： PTS抖动过大。</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理。</li><li>AudioDroppingFrames： 音频丢帧。</li><li>VideoDroppingFrames： 视频丢帧。</li><li>AVTimestampInterleave： 音视频交织不合理。</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts。</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大。</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小。</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大。</li><li>StreamOpenFailed： 流打开失败。</li><li>StreamEnd： 流结束。</li><li>StreamParseFailed： 流解析失败。</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧。</li><li>StreamNALUError： NALU起始码错误。</li><li>TsStreamNoAud： mpegts 的 H26x 流缺失 AUD NALU。</li><li>AudioStreamLack： 无音频流。</li><li>VideoStreamLack： 无视频流。</li><li>LackAudioRecover： 缺失音频流恢复。</li><li>LackVideoRecover： 缺失视频流恢复。</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围。</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围。</li><li>VideoDecodeFailed： 视频解码错误。</li><li>AudioDecodeFailed： 音频解码错误。</li><li>AudioOutOfPhase： 双通道音频相位相反。</li><li>VideoDuplicatedFrame： 视频流中存在重复帧。</li><li>AudioDuplicatedFrame： 音频流中存在重复帧。</li><li>VideoRotation： 视频画面旋转。</li><li>TsMultiPrograms： MPEG2-TS流有多个program。</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求。</li><li>HLSBadM3u8Format： 无效的m3u8文件。</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件。</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件。</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化。</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间 PTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间 DTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li></ul>
                     * @return Type <p>诊断出的具体异常类型。</p><p>枚举值：</p><ul><li>VideoResolutionChanged： 视频分辨率变化。</li><li>AudioSampleRateChanged： 音频采样率变化。</li><li>AudioChannelsChanged： 音频通道数变化。</li><li>ParameterSetsChanged： 流参数集信息发生变化。</li><li>DarOrSarInvalid： 视频的宽高比异常。</li><li>TimestampFallback： DTS时间戳回退。</li><li>DtsJitter： DTS抖动过大。</li><li>PtsJitter： PTS抖动过大。</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理。</li><li>AudioDroppingFrames： 音频丢帧。</li><li>VideoDroppingFrames： 视频丢帧。</li><li>AVTimestampInterleave： 音视频交织不合理。</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts。</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大。</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小。</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大。</li><li>StreamOpenFailed： 流打开失败。</li><li>StreamEnd： 流结束。</li><li>StreamParseFailed： 流解析失败。</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧。</li><li>StreamNALUError： NALU起始码错误。</li><li>TsStreamNoAud： mpegts 的 H26x 流缺失 AUD NALU。</li><li>AudioStreamLack： 无音频流。</li><li>VideoStreamLack： 无视频流。</li><li>LackAudioRecover： 缺失音频流恢复。</li><li>LackVideoRecover： 缺失视频流恢复。</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围。</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围。</li><li>VideoDecodeFailed： 视频解码错误。</li><li>AudioDecodeFailed： 音频解码错误。</li><li>AudioOutOfPhase： 双通道音频相位相反。</li><li>VideoDuplicatedFrame： 视频流中存在重复帧。</li><li>AudioDuplicatedFrame： 音频流中存在重复帧。</li><li>VideoRotation： 视频画面旋转。</li><li>TsMultiPrograms： MPEG2-TS流有多个program。</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求。</li><li>HLSBadM3u8Format： 无效的m3u8文件。</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件。</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件。</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化。</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间 PTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间 DTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>诊断出的具体异常类型。</p><p>枚举值：</p><ul><li>VideoResolutionChanged： 视频分辨率变化。</li><li>AudioSampleRateChanged： 音频采样率变化。</li><li>AudioChannelsChanged： 音频通道数变化。</li><li>ParameterSetsChanged： 流参数集信息发生变化。</li><li>DarOrSarInvalid： 视频的宽高比异常。</li><li>TimestampFallback： DTS时间戳回退。</li><li>DtsJitter： DTS抖动过大。</li><li>PtsJitter： PTS抖动过大。</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理。</li><li>AudioDroppingFrames： 音频丢帧。</li><li>VideoDroppingFrames： 视频丢帧。</li><li>AVTimestampInterleave： 音视频交织不合理。</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts。</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大。</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小。</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大。</li><li>StreamOpenFailed： 流打开失败。</li><li>StreamEnd： 流结束。</li><li>StreamParseFailed： 流解析失败。</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧。</li><li>StreamNALUError： NALU起始码错误。</li><li>TsStreamNoAud： mpegts 的 H26x 流缺失 AUD NALU。</li><li>AudioStreamLack： 无音频流。</li><li>VideoStreamLack： 无视频流。</li><li>LackAudioRecover： 缺失音频流恢复。</li><li>LackVideoRecover： 缺失视频流恢复。</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围。</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围。</li><li>VideoDecodeFailed： 视频解码错误。</li><li>AudioDecodeFailed： 音频解码错误。</li><li>AudioOutOfPhase： 双通道音频相位相反。</li><li>VideoDuplicatedFrame： 视频流中存在重复帧。</li><li>AudioDuplicatedFrame： 音频流中存在重复帧。</li><li>VideoRotation： 视频画面旋转。</li><li>TsMultiPrograms： MPEG2-TS流有多个program。</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求。</li><li>HLSBadM3u8Format： 无效的m3u8文件。</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件。</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件。</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化。</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间 PTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间 DTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li></ul>
                     * @param _type <p>诊断出的具体异常类型。</p><p>枚举值：</p><ul><li>VideoResolutionChanged： 视频分辨率变化。</li><li>AudioSampleRateChanged： 音频采样率变化。</li><li>AudioChannelsChanged： 音频通道数变化。</li><li>ParameterSetsChanged： 流参数集信息发生变化。</li><li>DarOrSarInvalid： 视频的宽高比异常。</li><li>TimestampFallback： DTS时间戳回退。</li><li>DtsJitter： DTS抖动过大。</li><li>PtsJitter： PTS抖动过大。</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理。</li><li>AudioDroppingFrames： 音频丢帧。</li><li>VideoDroppingFrames： 视频丢帧。</li><li>AVTimestampInterleave： 音视频交织不合理。</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts。</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大。</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小。</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大。</li><li>StreamOpenFailed： 流打开失败。</li><li>StreamEnd： 流结束。</li><li>StreamParseFailed： 流解析失败。</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧。</li><li>StreamNALUError： NALU起始码错误。</li><li>TsStreamNoAud： mpegts 的 H26x 流缺失 AUD NALU。</li><li>AudioStreamLack： 无音频流。</li><li>VideoStreamLack： 无视频流。</li><li>LackAudioRecover： 缺失音频流恢复。</li><li>LackVideoRecover： 缺失视频流恢复。</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围。</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围。</li><li>VideoDecodeFailed： 视频解码错误。</li><li>AudioDecodeFailed： 音频解码错误。</li><li>AudioOutOfPhase： 双通道音频相位相反。</li><li>VideoDuplicatedFrame： 视频流中存在重复帧。</li><li>AudioDuplicatedFrame： 音频流中存在重复帧。</li><li>VideoRotation： 视频画面旋转。</li><li>TsMultiPrograms： MPEG2-TS流有多个program。</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求。</li><li>HLSBadM3u8Format： 无效的m3u8文件。</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件。</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件。</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化。</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间 PTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间 DTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li></ul>
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
                     * 获取<p>诊断出的异常级别。</p><p>枚举值：</p><ul><li>Fatal： 影响后续播放和解析。</li><li>Error： 可能会影响播放。</li><li>Warning： 可能会有潜在风险，但不一定会影响播放。</li><li>Notice： 比较重要的流信息。</li><li>Info： 一般性的流信息。</li></ul>
                     * @return SeverityLevel <p>诊断出的异常级别。</p><p>枚举值：</p><ul><li>Fatal： 影响后续播放和解析。</li><li>Error： 可能会影响播放。</li><li>Warning： 可能会有潜在风险，但不一定会影响播放。</li><li>Notice： 比较重要的流信息。</li><li>Info： 一般性的流信息。</li></ul>
                     * 
                     */
                    std::string GetSeverityLevel() const;

                    /**
                     * 设置<p>诊断出的异常级别。</p><p>枚举值：</p><ul><li>Fatal： 影响后续播放和解析。</li><li>Error： 可能会影响播放。</li><li>Warning： 可能会有潜在风险，但不一定会影响播放。</li><li>Notice： 比较重要的流信息。</li><li>Info： 一般性的流信息。</li></ul>
                     * @param _severityLevel <p>诊断出的异常级别。</p><p>枚举值：</p><ul><li>Fatal： 影响后续播放和解析。</li><li>Error： 可能会影响播放。</li><li>Warning： 可能会有潜在风险，但不一定会影响播放。</li><li>Notice： 比较重要的流信息。</li><li>Info： 一般性的流信息。</li></ul>
                     * 
                     */
                    void SetSeverityLevel(const std::string& _severityLevel);

                    /**
                     * 判断参数 SeverityLevel 是否已赋值
                     * @return SeverityLevel 是否已赋值
                     * 
                     */
                    bool SeverityLevelHasBeenSet() const;

                    /**
                     * 获取<p>时间戳。</p>
                     * @return TimestampSet <p>时间戳。</p>
                     * 
                     */
                    std::vector<double> GetTimestampSet() const;

                    /**
                     * 设置<p>时间戳。</p>
                     * @param _timestampSet <p>时间戳。</p>
                     * 
                     */
                    void SetTimestampSet(const std::vector<double>& _timestampSet);

                    /**
                     * 判断参数 TimestampSet 是否已赋值
                     * @return TimestampSet 是否已赋值
                     * 
                     */
                    bool TimestampSetHasBeenSet() const;

                private:

                    /**
                     * <p>诊断出的异常类别</p><p>枚举值：</p><ul><li>DecodeParamException： 解码参数异常。</li><li>TimeStampException： 时间戳异常。</li><li>FrameException： 帧率异常。</li><li>StreamStatusException： 流状态异常。</li><li>StreamInfo： 流信息异常。</li><li>StreamAbnormalCharacteristics： 流特征异常。</li><li>DecodeException： 解码异常。</li><li>HLSRequirements： HLS 格式异常。</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>诊断出的具体异常类型。</p><p>枚举值：</p><ul><li>VideoResolutionChanged： 视频分辨率变化。</li><li>AudioSampleRateChanged： 音频采样率变化。</li><li>AudioChannelsChanged： 音频通道数变化。</li><li>ParameterSetsChanged： 流参数集信息发生变化。</li><li>DarOrSarInvalid： 视频的宽高比异常。</li><li>TimestampFallback： DTS时间戳回退。</li><li>DtsJitter： DTS抖动过大。</li><li>PtsJitter： PTS抖动过大。</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理。</li><li>AudioDroppingFrames： 音频丢帧。</li><li>VideoDroppingFrames： 视频丢帧。</li><li>AVTimestampInterleave： 音视频交织不合理。</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts。</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大。</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小。</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大。</li><li>StreamOpenFailed： 流打开失败。</li><li>StreamEnd： 流结束。</li><li>StreamParseFailed： 流解析失败。</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧。</li><li>StreamNALUError： NALU起始码错误。</li><li>TsStreamNoAud： mpegts 的 H26x 流缺失 AUD NALU。</li><li>AudioStreamLack： 无音频流。</li><li>VideoStreamLack： 无视频流。</li><li>LackAudioRecover： 缺失音频流恢复。</li><li>LackVideoRecover： 缺失视频流恢复。</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围。</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围。</li><li>VideoDecodeFailed： 视频解码错误。</li><li>AudioDecodeFailed： 音频解码错误。</li><li>AudioOutOfPhase： 双通道音频相位相反。</li><li>VideoDuplicatedFrame： 视频流中存在重复帧。</li><li>AudioDuplicatedFrame： 音频流中存在重复帧。</li><li>VideoRotation： 视频画面旋转。</li><li>TsMultiPrograms： MPEG2-TS流有多个program。</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求。</li><li>HLSBadM3u8Format： 无效的m3u8文件。</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件。</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件。</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数。</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化。</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间 PTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间 DTS 跳变且没有 EXT-X-DISCONTINUITY。</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>诊断出的异常级别。</p><p>枚举值：</p><ul><li>Fatal： 影响后续播放和解析。</li><li>Error： 可能会影响播放。</li><li>Warning： 可能会有潜在风险，但不一定会影响播放。</li><li>Notice： 比较重要的流信息。</li><li>Info： 一般性的流信息。</li></ul>
                     */
                    std::string m_severityLevel;
                    bool m_severityLevelHasBeenSet;

                    /**
                     * <p>时间戳。</p>
                     */
                    std::vector<double> m_timestampSet;
                    bool m_timestampSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONTAINERDIAGNOSERESULTITEM_H_
