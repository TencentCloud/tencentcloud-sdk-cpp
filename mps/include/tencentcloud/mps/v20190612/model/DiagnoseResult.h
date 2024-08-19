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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_

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
                * 诊断结果项。
                */
                class DiagnoseResult : public AbstractModel
                {
                public:
                    DiagnoseResult();
                    ~DiagnoseResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断出的异常类别，取值范围：
DecodeParamException：解码参数异常
TimeStampException：时间戳异常
FrameException： 帧率异常
StreamStatusException：流状态异常
StreamInfo：流信息异常
StreamAbnormalCharacteristics：流特征异常
DecodeException：解码异常
HLSRequirements：HLS 格式异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 诊断出的异常类别，取值范围：
DecodeParamException：解码参数异常
TimeStampException：时间戳异常
FrameException： 帧率异常
StreamStatusException：流状态异常
StreamInfo：流信息异常
StreamAbnormalCharacteristics：流特征异常
DecodeException：解码异常
HLSRequirements：HLS 格式异常
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置诊断出的异常类别，取值范围：
DecodeParamException：解码参数异常
TimeStampException：时间戳异常
FrameException： 帧率异常
StreamStatusException：流状态异常
StreamInfo：流信息异常
StreamAbnormalCharacteristics：流特征异常
DecodeException：解码异常
HLSRequirements：HLS 格式异常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 诊断出的异常类别，取值范围：
DecodeParamException：解码参数异常
TimeStampException：时间戳异常
FrameException： 帧率异常
StreamStatusException：流状态异常
StreamInfo：流信息异常
StreamAbnormalCharacteristics：流特征异常
DecodeException：解码异常
HLSRequirements：HLS 格式异常
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取诊断出的具体异常类型，取值如下：

VideoResolutionChanged：视频分辨率变化
AudioSampleRateChanged：音频采样率变化
AudioChannelsChanged：音频通道数变化
ParameterSetsChanged：流参数集信息发生变化
DarOrSarInvalid：视频的宽高比异常
TimestampFallback：DTS时间戳回退
DtsJitter：DTS抖动过大
PtsJitter：PTS抖动过大
AACDurationDeviation：AAC帧时间戳间隔不合理
AudioDroppingFrames：音频丢帧
VideoDroppingFrames：视频丢帧
AVTimestampInterleave：音视频交织不合理
PtsLessThanDts：媒体流的 pts 小于 dts
ReceiveFpsJitter：网络接收帧率抖动过大
ReceiveFpsTooSmall：网络接收视频帧率过小
FpsJitter：通过PTS计算得到的流帧率抖动过大
StreamOpenFailed：流打开失败
StreamEnd：流结束
StreamParseFailed：流解析失败
VideoFirstFrameNotIdr：首帧不是IDR帧
StreamNALUError：NALU起始码错误
TsStreamNoAud：mpegts的H26x流缺失 AUD NALU
AudioStreamLack：无音频流
VideoStreamLack：无视频流
LackAudioRecover：缺失音频流恢复
LackVideoRecover：缺失视频流恢复
VideoBitrateOutofRange：视频流码率(kbps)超出范围
AudioBitrateOutofRange：音频流码率(kbps)超出范围
VideoDecodeFailed：视频解码错误
AudioDecodeFailed：音频解码错误
AudioOutOfPhase：双通道音频相位相反
VideoDuplicatedFrame：视频流中存在重复帧
AudioDuplicatedFrame：音频流中存在重复帧
VideoRotation：视频画面旋转
TsMultiPrograms：MPEG2-TS流有多个program
Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求
HLSBadM3u8Format：无效的m3u8文件
HLSInvalidMasterM3u8：无效的main m3u8文件
HLSInvalidMediaM3u8：无效的media m3u8文件
HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数
HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数
HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY
HLSMediaSegmentsStreamNumChange：切片的流数目发生变化
HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY
HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY
TimecodeTrackExist：MP4存在tmcd轨道
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 诊断出的具体异常类型，取值如下：

VideoResolutionChanged：视频分辨率变化
AudioSampleRateChanged：音频采样率变化
AudioChannelsChanged：音频通道数变化
ParameterSetsChanged：流参数集信息发生变化
DarOrSarInvalid：视频的宽高比异常
TimestampFallback：DTS时间戳回退
DtsJitter：DTS抖动过大
PtsJitter：PTS抖动过大
AACDurationDeviation：AAC帧时间戳间隔不合理
AudioDroppingFrames：音频丢帧
VideoDroppingFrames：视频丢帧
AVTimestampInterleave：音视频交织不合理
PtsLessThanDts：媒体流的 pts 小于 dts
ReceiveFpsJitter：网络接收帧率抖动过大
ReceiveFpsTooSmall：网络接收视频帧率过小
FpsJitter：通过PTS计算得到的流帧率抖动过大
StreamOpenFailed：流打开失败
StreamEnd：流结束
StreamParseFailed：流解析失败
VideoFirstFrameNotIdr：首帧不是IDR帧
StreamNALUError：NALU起始码错误
TsStreamNoAud：mpegts的H26x流缺失 AUD NALU
AudioStreamLack：无音频流
VideoStreamLack：无视频流
LackAudioRecover：缺失音频流恢复
LackVideoRecover：缺失视频流恢复
VideoBitrateOutofRange：视频流码率(kbps)超出范围
AudioBitrateOutofRange：音频流码率(kbps)超出范围
VideoDecodeFailed：视频解码错误
AudioDecodeFailed：音频解码错误
AudioOutOfPhase：双通道音频相位相反
VideoDuplicatedFrame：视频流中存在重复帧
AudioDuplicatedFrame：音频流中存在重复帧
VideoRotation：视频画面旋转
TsMultiPrograms：MPEG2-TS流有多个program
Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求
HLSBadM3u8Format：无效的m3u8文件
HLSInvalidMasterM3u8：无效的main m3u8文件
HLSInvalidMediaM3u8：无效的media m3u8文件
HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数
HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数
HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY
HLSMediaSegmentsStreamNumChange：切片的流数目发生变化
HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY
HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY
TimecodeTrackExist：MP4存在tmcd轨道
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置诊断出的具体异常类型，取值如下：

VideoResolutionChanged：视频分辨率变化
AudioSampleRateChanged：音频采样率变化
AudioChannelsChanged：音频通道数变化
ParameterSetsChanged：流参数集信息发生变化
DarOrSarInvalid：视频的宽高比异常
TimestampFallback：DTS时间戳回退
DtsJitter：DTS抖动过大
PtsJitter：PTS抖动过大
AACDurationDeviation：AAC帧时间戳间隔不合理
AudioDroppingFrames：音频丢帧
VideoDroppingFrames：视频丢帧
AVTimestampInterleave：音视频交织不合理
PtsLessThanDts：媒体流的 pts 小于 dts
ReceiveFpsJitter：网络接收帧率抖动过大
ReceiveFpsTooSmall：网络接收视频帧率过小
FpsJitter：通过PTS计算得到的流帧率抖动过大
StreamOpenFailed：流打开失败
StreamEnd：流结束
StreamParseFailed：流解析失败
VideoFirstFrameNotIdr：首帧不是IDR帧
StreamNALUError：NALU起始码错误
TsStreamNoAud：mpegts的H26x流缺失 AUD NALU
AudioStreamLack：无音频流
VideoStreamLack：无视频流
LackAudioRecover：缺失音频流恢复
LackVideoRecover：缺失视频流恢复
VideoBitrateOutofRange：视频流码率(kbps)超出范围
AudioBitrateOutofRange：音频流码率(kbps)超出范围
VideoDecodeFailed：视频解码错误
AudioDecodeFailed：音频解码错误
AudioOutOfPhase：双通道音频相位相反
VideoDuplicatedFrame：视频流中存在重复帧
AudioDuplicatedFrame：音频流中存在重复帧
VideoRotation：视频画面旋转
TsMultiPrograms：MPEG2-TS流有多个program
Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求
HLSBadM3u8Format：无效的m3u8文件
HLSInvalidMasterM3u8：无效的main m3u8文件
HLSInvalidMediaM3u8：无效的media m3u8文件
HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数
HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数
HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY
HLSMediaSegmentsStreamNumChange：切片的流数目发生变化
HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY
HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY
TimecodeTrackExist：MP4存在tmcd轨道
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 诊断出的具体异常类型，取值如下：

VideoResolutionChanged：视频分辨率变化
AudioSampleRateChanged：音频采样率变化
AudioChannelsChanged：音频通道数变化
ParameterSetsChanged：流参数集信息发生变化
DarOrSarInvalid：视频的宽高比异常
TimestampFallback：DTS时间戳回退
DtsJitter：DTS抖动过大
PtsJitter：PTS抖动过大
AACDurationDeviation：AAC帧时间戳间隔不合理
AudioDroppingFrames：音频丢帧
VideoDroppingFrames：视频丢帧
AVTimestampInterleave：音视频交织不合理
PtsLessThanDts：媒体流的 pts 小于 dts
ReceiveFpsJitter：网络接收帧率抖动过大
ReceiveFpsTooSmall：网络接收视频帧率过小
FpsJitter：通过PTS计算得到的流帧率抖动过大
StreamOpenFailed：流打开失败
StreamEnd：流结束
StreamParseFailed：流解析失败
VideoFirstFrameNotIdr：首帧不是IDR帧
StreamNALUError：NALU起始码错误
TsStreamNoAud：mpegts的H26x流缺失 AUD NALU
AudioStreamLack：无音频流
VideoStreamLack：无视频流
LackAudioRecover：缺失音频流恢复
LackVideoRecover：缺失视频流恢复
VideoBitrateOutofRange：视频流码率(kbps)超出范围
AudioBitrateOutofRange：音频流码率(kbps)超出范围
VideoDecodeFailed：视频解码错误
AudioDecodeFailed：音频解码错误
AudioOutOfPhase：双通道音频相位相反
VideoDuplicatedFrame：视频流中存在重复帧
AudioDuplicatedFrame：音频流中存在重复帧
VideoRotation：视频画面旋转
TsMultiPrograms：MPEG2-TS流有多个program
Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求
HLSBadM3u8Format：无效的m3u8文件
HLSInvalidMasterM3u8：无效的main m3u8文件
HLSInvalidMediaM3u8：无效的media m3u8文件
HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数
HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数
HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY
HLSMediaSegmentsStreamNumChange：切片的流数目发生变化
HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY
HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY
TimecodeTrackExist：MP4存在tmcd轨道
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimestamp() const;

                    /**
                     * 设置诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const double& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DateTime 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDateTime() const;

                    /**
                     * 设置诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dateTime 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDateTime(const std::string& _dateTime);

                    /**
                     * 判断参数 DateTime 是否已赋值
                     * @return DateTime 是否已赋值
                     * 
                     */
                    bool DateTimeHasBeenSet() const;

                    /**
                     * 获取诊断出的异常级别，取值范围：
Fatal：影响后续播放和解析，
Error： 可能会影响播放，
Warning： 可能会有潜在风险，但不一定会影响播放，
Notice：比较重要的流信息，
Info：一般性的流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeverityLevel 诊断出的异常级别，取值范围：
Fatal：影响后续播放和解析，
Error： 可能会影响播放，
Warning： 可能会有潜在风险，但不一定会影响播放，
Notice：比较重要的流信息，
Info：一般性的流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeverityLevel() const;

                    /**
                     * 设置诊断出的异常级别，取值范围：
Fatal：影响后续播放和解析，
Error： 可能会影响播放，
Warning： 可能会有潜在风险，但不一定会影响播放，
Notice：比较重要的流信息，
Info：一般性的流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _severityLevel 诊断出的异常级别，取值范围：
Fatal：影响后续播放和解析，
Error： 可能会影响播放，
Warning： 可能会有潜在风险，但不一定会影响播放，
Notice：比较重要的流信息，
Info：一般性的流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeverityLevel(const std::string& _severityLevel);

                    /**
                     * 判断参数 SeverityLevel 是否已赋值
                     * @return SeverityLevel 是否已赋值
                     * 
                     */
                    bool SeverityLevelHasBeenSet() const;

                private:

                    /**
                     * 诊断出的异常类别，取值范围：
DecodeParamException：解码参数异常
TimeStampException：时间戳异常
FrameException： 帧率异常
StreamStatusException：流状态异常
StreamInfo：流信息异常
StreamAbnormalCharacteristics：流特征异常
DecodeException：解码异常
HLSRequirements：HLS 格式异常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 诊断出的具体异常类型，取值如下：

VideoResolutionChanged：视频分辨率变化
AudioSampleRateChanged：音频采样率变化
AudioChannelsChanged：音频通道数变化
ParameterSetsChanged：流参数集信息发生变化
DarOrSarInvalid：视频的宽高比异常
TimestampFallback：DTS时间戳回退
DtsJitter：DTS抖动过大
PtsJitter：PTS抖动过大
AACDurationDeviation：AAC帧时间戳间隔不合理
AudioDroppingFrames：音频丢帧
VideoDroppingFrames：视频丢帧
AVTimestampInterleave：音视频交织不合理
PtsLessThanDts：媒体流的 pts 小于 dts
ReceiveFpsJitter：网络接收帧率抖动过大
ReceiveFpsTooSmall：网络接收视频帧率过小
FpsJitter：通过PTS计算得到的流帧率抖动过大
StreamOpenFailed：流打开失败
StreamEnd：流结束
StreamParseFailed：流解析失败
VideoFirstFrameNotIdr：首帧不是IDR帧
StreamNALUError：NALU起始码错误
TsStreamNoAud：mpegts的H26x流缺失 AUD NALU
AudioStreamLack：无音频流
VideoStreamLack：无视频流
LackAudioRecover：缺失音频流恢复
LackVideoRecover：缺失视频流恢复
VideoBitrateOutofRange：视频流码率(kbps)超出范围
AudioBitrateOutofRange：音频流码率(kbps)超出范围
VideoDecodeFailed：视频解码错误
AudioDecodeFailed：音频解码错误
AudioOutOfPhase：双通道音频相位相反
VideoDuplicatedFrame：视频流中存在重复帧
AudioDuplicatedFrame：音频流中存在重复帧
VideoRotation：视频画面旋转
TsMultiPrograms：MPEG2-TS流有多个program
Mp4InvalidCodecFourcc：MP4中codec fourcc不符合Apple HLS要求
HLSBadM3u8Format：无效的m3u8文件
HLSInvalidMasterM3u8：无效的main m3u8文件
HLSInvalidMediaM3u8：无效的media m3u8文件
HLSMasterM3u8Recommended：main m3u8缺少标准推荐的参数
HLSMediaM3u8Recommended：media m3u8缺少标准推荐的参数
HLSMediaM3u8DiscontinuityExist：media m3u8存在EXT-X-DISCONTINUITY
HLSMediaSegmentsStreamNumChange：切片的流数目发生变化
HLSMediaSegmentsPTSJitterDeviation：切片间PTS跳变且没有EXT-X-DISCONTINUITY
HLSMediaSegmentsDTSJitterDeviation：切片间DTS跳变且没有EXT-X-DISCONTINUITY
TimecodeTrackExist：MP4存在tmcd轨道
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 诊断出异常开始的PTS时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 诊断出的异常描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 诊断到异常的北京时间，采用 ISO 日期格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dateTime;
                    bool m_dateTimeHasBeenSet;

                    /**
                     * 诊断出的异常级别，取值范围：
Fatal：影响后续播放和解析，
Error： 可能会影响播放，
Warning： 可能会有潜在风险，但不一定会影响播放，
Notice：比较重要的流信息，
Info：一般性的流信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_severityLevel;
                    bool m_severityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DIAGNOSERESULT_H_
