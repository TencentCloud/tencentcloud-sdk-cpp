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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_

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
                * 音画质检测的控制参数配置。
                */
                class QualityInspectConfig : public AbstractModel
                {
                public:
                    QualityInspectConfig();
                    ~QualityInspectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测项名称。</p><p>枚举值：</p><ul><li>LowEvaluation： 视频无参考评分（MOS）</li><li>AudioEvaluation： 音频无参考评分（MOS）</li><li>Mosaic： 马赛克检测</li><li>CrashScreen： 花屏检测</li><li>Blur： 模糊检测</li><li>Jitter： 抖动检测</li><li>Noise： 噪点检测</li><li>QRCode： 二维码检测</li><li>BarCode： 条形码检测</li><li>AppletCode： 小程序码检测</li><li>BlackWhiteEdge： 黑白边检测</li><li>SolidColorScreen： 纯色屏检测</li><li>LowLighting： 低光照</li><li>HighLighting： 过曝</li><li>NoVoice： 静音检测</li><li>LowVoice： 低音检测</li><li>HighVoice： 爆音检测</li><li>AudioNoise： 音频噪声检测</li><li>VideoResolutionChanged： 视频分辨率变化</li><li>AudioSampleRateChanged： 音频采样率变化</li><li>AudioChannelsChanged： 音频通道数变化</li><li>ParameterSetsChanged： 流参数集信息发生变化</li><li>DarOrSarInvalid： 视频的宽高比异常</li><li>TimestampFallback： DTS时间戳回退</li><li>DtsJitter： DTS抖动过大</li><li>PtsJitter： PTS抖动过大</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理</li><li>AudioDroppingFrames： 音频丢帧</li><li>VideoDroppingFrames： 视频丢帧</li><li>AVTimestampInterleave： 音视频交织不合理</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大</li><li>StreamOpenFailed： 流打开失败</li><li>StreamEnd： 流结束</li><li>StreamParseFailed： 流解析失败</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧</li><li>StreamNALUError： NALU起始码错误</li><li>TsStreamNoAud： mpegts的H26x流缺失 AUD NALU</li><li>AudioStreamLack： 无音频流</li><li>VideoStreamLack： 无视频流</li><li>LackAudioRecover： 缺失音频流恢复</li><li>LackVideoRecover： 缺失视频流恢复</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围</li><li>VideoDecodeFailed： 视频解码错误</li><li>AudioDecodeFailed： 音频解码错误</li><li>AudioOutOfPhase： 双通道音频相位相反</li><li>VideoDuplicatedFrame： 视频流中存在重复帧</li><li>AudioDuplicatedFrame： 音频流中存在重复帧</li><li>VideoRotation： 视频画面旋转</li><li>TsMultiPrograms： MPEG2-TS流有多个program</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求</li><li>HLSBadM3u8Format： 无效的m3u8文件</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间PTS跳变且没有EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间DTS跳变且没有EXT-X-DISCONTINUITY</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li><li>BodyPoseCheck： 人体姿态异常</li><li>BodyDetailCheck： 人体细节异常</li><li>PhysicRulesCheck： 物理规律违反</li><li>ObjectConsistencyCheck： 物体一致性异常</li><li>FormatCheck： 格式异常</li><li>AudioReverb： 混响程度</li><li>AudioDiscontinuity： 音频不连续</li><li>AudioSpeechQuality： 语音清晰度</li><li>AudioHighLoudness： 响度失真</li><li>AudioLoudnessJitter： 音量变化剧烈</li><li>BackgroundMusic： 存在背景音乐</li><li>NoBackgroundMusic： 不存在背景音乐</li><li>VideoAesthetic： 视频美学评分</li><li>AudioVideoAsync： 音画不同步</li><li>AudioSubtitleAsync： 音频与字幕不同步</li></ul>
                     * @return Type <p>检测项名称。</p><p>枚举值：</p><ul><li>LowEvaluation： 视频无参考评分（MOS）</li><li>AudioEvaluation： 音频无参考评分（MOS）</li><li>Mosaic： 马赛克检测</li><li>CrashScreen： 花屏检测</li><li>Blur： 模糊检测</li><li>Jitter： 抖动检测</li><li>Noise： 噪点检测</li><li>QRCode： 二维码检测</li><li>BarCode： 条形码检测</li><li>AppletCode： 小程序码检测</li><li>BlackWhiteEdge： 黑白边检测</li><li>SolidColorScreen： 纯色屏检测</li><li>LowLighting： 低光照</li><li>HighLighting： 过曝</li><li>NoVoice： 静音检测</li><li>LowVoice： 低音检测</li><li>HighVoice： 爆音检测</li><li>AudioNoise： 音频噪声检测</li><li>VideoResolutionChanged： 视频分辨率变化</li><li>AudioSampleRateChanged： 音频采样率变化</li><li>AudioChannelsChanged： 音频通道数变化</li><li>ParameterSetsChanged： 流参数集信息发生变化</li><li>DarOrSarInvalid： 视频的宽高比异常</li><li>TimestampFallback： DTS时间戳回退</li><li>DtsJitter： DTS抖动过大</li><li>PtsJitter： PTS抖动过大</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理</li><li>AudioDroppingFrames： 音频丢帧</li><li>VideoDroppingFrames： 视频丢帧</li><li>AVTimestampInterleave： 音视频交织不合理</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大</li><li>StreamOpenFailed： 流打开失败</li><li>StreamEnd： 流结束</li><li>StreamParseFailed： 流解析失败</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧</li><li>StreamNALUError： NALU起始码错误</li><li>TsStreamNoAud： mpegts的H26x流缺失 AUD NALU</li><li>AudioStreamLack： 无音频流</li><li>VideoStreamLack： 无视频流</li><li>LackAudioRecover： 缺失音频流恢复</li><li>LackVideoRecover： 缺失视频流恢复</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围</li><li>VideoDecodeFailed： 视频解码错误</li><li>AudioDecodeFailed： 音频解码错误</li><li>AudioOutOfPhase： 双通道音频相位相反</li><li>VideoDuplicatedFrame： 视频流中存在重复帧</li><li>AudioDuplicatedFrame： 音频流中存在重复帧</li><li>VideoRotation： 视频画面旋转</li><li>TsMultiPrograms： MPEG2-TS流有多个program</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求</li><li>HLSBadM3u8Format： 无效的m3u8文件</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间PTS跳变且没有EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间DTS跳变且没有EXT-X-DISCONTINUITY</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li><li>BodyPoseCheck： 人体姿态异常</li><li>BodyDetailCheck： 人体细节异常</li><li>PhysicRulesCheck： 物理规律违反</li><li>ObjectConsistencyCheck： 物体一致性异常</li><li>FormatCheck： 格式异常</li><li>AudioReverb： 混响程度</li><li>AudioDiscontinuity： 音频不连续</li><li>AudioSpeechQuality： 语音清晰度</li><li>AudioHighLoudness： 响度失真</li><li>AudioLoudnessJitter： 音量变化剧烈</li><li>BackgroundMusic： 存在背景音乐</li><li>NoBackgroundMusic： 不存在背景音乐</li><li>VideoAesthetic： 视频美学评分</li><li>AudioVideoAsync： 音画不同步</li><li>AudioSubtitleAsync： 音频与字幕不同步</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>检测项名称。</p><p>枚举值：</p><ul><li>LowEvaluation： 视频无参考评分（MOS）</li><li>AudioEvaluation： 音频无参考评分（MOS）</li><li>Mosaic： 马赛克检测</li><li>CrashScreen： 花屏检测</li><li>Blur： 模糊检测</li><li>Jitter： 抖动检测</li><li>Noise： 噪点检测</li><li>QRCode： 二维码检测</li><li>BarCode： 条形码检测</li><li>AppletCode： 小程序码检测</li><li>BlackWhiteEdge： 黑白边检测</li><li>SolidColorScreen： 纯色屏检测</li><li>LowLighting： 低光照</li><li>HighLighting： 过曝</li><li>NoVoice： 静音检测</li><li>LowVoice： 低音检测</li><li>HighVoice： 爆音检测</li><li>AudioNoise： 音频噪声检测</li><li>VideoResolutionChanged： 视频分辨率变化</li><li>AudioSampleRateChanged： 音频采样率变化</li><li>AudioChannelsChanged： 音频通道数变化</li><li>ParameterSetsChanged： 流参数集信息发生变化</li><li>DarOrSarInvalid： 视频的宽高比异常</li><li>TimestampFallback： DTS时间戳回退</li><li>DtsJitter： DTS抖动过大</li><li>PtsJitter： PTS抖动过大</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理</li><li>AudioDroppingFrames： 音频丢帧</li><li>VideoDroppingFrames： 视频丢帧</li><li>AVTimestampInterleave： 音视频交织不合理</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大</li><li>StreamOpenFailed： 流打开失败</li><li>StreamEnd： 流结束</li><li>StreamParseFailed： 流解析失败</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧</li><li>StreamNALUError： NALU起始码错误</li><li>TsStreamNoAud： mpegts的H26x流缺失 AUD NALU</li><li>AudioStreamLack： 无音频流</li><li>VideoStreamLack： 无视频流</li><li>LackAudioRecover： 缺失音频流恢复</li><li>LackVideoRecover： 缺失视频流恢复</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围</li><li>VideoDecodeFailed： 视频解码错误</li><li>AudioDecodeFailed： 音频解码错误</li><li>AudioOutOfPhase： 双通道音频相位相反</li><li>VideoDuplicatedFrame： 视频流中存在重复帧</li><li>AudioDuplicatedFrame： 音频流中存在重复帧</li><li>VideoRotation： 视频画面旋转</li><li>TsMultiPrograms： MPEG2-TS流有多个program</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求</li><li>HLSBadM3u8Format： 无效的m3u8文件</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间PTS跳变且没有EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间DTS跳变且没有EXT-X-DISCONTINUITY</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li><li>BodyPoseCheck： 人体姿态异常</li><li>BodyDetailCheck： 人体细节异常</li><li>PhysicRulesCheck： 物理规律违反</li><li>ObjectConsistencyCheck： 物体一致性异常</li><li>FormatCheck： 格式异常</li><li>AudioReverb： 混响程度</li><li>AudioDiscontinuity： 音频不连续</li><li>AudioSpeechQuality： 语音清晰度</li><li>AudioHighLoudness： 响度失真</li><li>AudioLoudnessJitter： 音量变化剧烈</li><li>BackgroundMusic： 存在背景音乐</li><li>NoBackgroundMusic： 不存在背景音乐</li><li>VideoAesthetic： 视频美学评分</li><li>AudioVideoAsync： 音画不同步</li><li>AudioSubtitleAsync： 音频与字幕不同步</li></ul>
                     * @param _type <p>检测项名称。</p><p>枚举值：</p><ul><li>LowEvaluation： 视频无参考评分（MOS）</li><li>AudioEvaluation： 音频无参考评分（MOS）</li><li>Mosaic： 马赛克检测</li><li>CrashScreen： 花屏检测</li><li>Blur： 模糊检测</li><li>Jitter： 抖动检测</li><li>Noise： 噪点检测</li><li>QRCode： 二维码检测</li><li>BarCode： 条形码检测</li><li>AppletCode： 小程序码检测</li><li>BlackWhiteEdge： 黑白边检测</li><li>SolidColorScreen： 纯色屏检测</li><li>LowLighting： 低光照</li><li>HighLighting： 过曝</li><li>NoVoice： 静音检测</li><li>LowVoice： 低音检测</li><li>HighVoice： 爆音检测</li><li>AudioNoise： 音频噪声检测</li><li>VideoResolutionChanged： 视频分辨率变化</li><li>AudioSampleRateChanged： 音频采样率变化</li><li>AudioChannelsChanged： 音频通道数变化</li><li>ParameterSetsChanged： 流参数集信息发生变化</li><li>DarOrSarInvalid： 视频的宽高比异常</li><li>TimestampFallback： DTS时间戳回退</li><li>DtsJitter： DTS抖动过大</li><li>PtsJitter： PTS抖动过大</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理</li><li>AudioDroppingFrames： 音频丢帧</li><li>VideoDroppingFrames： 视频丢帧</li><li>AVTimestampInterleave： 音视频交织不合理</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大</li><li>StreamOpenFailed： 流打开失败</li><li>StreamEnd： 流结束</li><li>StreamParseFailed： 流解析失败</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧</li><li>StreamNALUError： NALU起始码错误</li><li>TsStreamNoAud： mpegts的H26x流缺失 AUD NALU</li><li>AudioStreamLack： 无音频流</li><li>VideoStreamLack： 无视频流</li><li>LackAudioRecover： 缺失音频流恢复</li><li>LackVideoRecover： 缺失视频流恢复</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围</li><li>VideoDecodeFailed： 视频解码错误</li><li>AudioDecodeFailed： 音频解码错误</li><li>AudioOutOfPhase： 双通道音频相位相反</li><li>VideoDuplicatedFrame： 视频流中存在重复帧</li><li>AudioDuplicatedFrame： 音频流中存在重复帧</li><li>VideoRotation： 视频画面旋转</li><li>TsMultiPrograms： MPEG2-TS流有多个program</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求</li><li>HLSBadM3u8Format： 无效的m3u8文件</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间PTS跳变且没有EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间DTS跳变且没有EXT-X-DISCONTINUITY</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li><li>BodyPoseCheck： 人体姿态异常</li><li>BodyDetailCheck： 人体细节异常</li><li>PhysicRulesCheck： 物理规律违反</li><li>ObjectConsistencyCheck： 物体一致性异常</li><li>FormatCheck： 格式异常</li><li>AudioReverb： 混响程度</li><li>AudioDiscontinuity： 音频不连续</li><li>AudioSpeechQuality： 语音清晰度</li><li>AudioHighLoudness： 响度失真</li><li>AudioLoudnessJitter： 音量变化剧烈</li><li>BackgroundMusic： 存在背景音乐</li><li>NoBackgroundMusic： 不存在背景音乐</li><li>VideoAesthetic： 视频美学评分</li><li>AudioVideoAsync： 音画不同步</li><li>AudioSubtitleAsync： 音频与字幕不同步</li></ul>
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
                     * 获取<p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启。</li><li>OFF： 关闭。</li></ul><p>默认值：ON</p>
                     * @return Switch <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启。</li><li>OFF： 关闭。</li></ul><p>默认值：ON</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启。</li><li>OFF： 关闭。</li></ul><p>默认值：ON</p>
                     * @param _switch <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启。</li><li>OFF： 关闭。</li></ul><p>默认值：ON</p>
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
                     * 获取<p>采样方式</p><p>枚举值：</p><ul><li>Time： 根据时间间隔采样。</li></ul>
                     * @return Sampling <p>采样方式</p><p>枚举值：</p><ul><li>Time： 根据时间间隔采样。</li></ul>
                     * 
                     */
                    std::string GetSampling() const;

                    /**
                     * 设置<p>采样方式</p><p>枚举值：</p><ul><li>Time： 根据时间间隔采样。</li></ul>
                     * @param _sampling <p>采样方式</p><p>枚举值：</p><ul><li>Time： 根据时间间隔采样。</li></ul>
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
                     * 获取<p>采样间隔时间</p><p>单位：毫秒。</p>
                     * @return IntervalTime <p>采样间隔时间</p><p>单位：毫秒。</p>
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置<p>采样间隔时间</p><p>单位：毫秒。</p>
                     * @param _intervalTime <p>采样间隔时间</p><p>单位：毫秒。</p>
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>异常持续时间。</p><p>单位：毫秒。</p>
                     * @return Duration <p>异常持续时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>异常持续时间。</p><p>单位：毫秒。</p>
                     * @param _duration <p>异常持续时间。</p><p>单位：毫秒。</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>检测项对应的阈值，不同检测项对应阈值不同。</p>
                     * @return Threshold <p>检测项对应的阈值，不同检测项对应阈值不同。</p>
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 设置<p>检测项对应的阈值，不同检测项对应阈值不同。</p>
                     * @param _threshold <p>检测项对应的阈值，不同检测项对应阈值不同。</p>
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
                     * <p>检测项名称。</p><p>枚举值：</p><ul><li>LowEvaluation： 视频无参考评分（MOS）</li><li>AudioEvaluation： 音频无参考评分（MOS）</li><li>Mosaic： 马赛克检测</li><li>CrashScreen： 花屏检测</li><li>Blur： 模糊检测</li><li>Jitter： 抖动检测</li><li>Noise： 噪点检测</li><li>QRCode： 二维码检测</li><li>BarCode： 条形码检测</li><li>AppletCode： 小程序码检测</li><li>BlackWhiteEdge： 黑白边检测</li><li>SolidColorScreen： 纯色屏检测</li><li>LowLighting： 低光照</li><li>HighLighting： 过曝</li><li>NoVoice： 静音检测</li><li>LowVoice： 低音检测</li><li>HighVoice： 爆音检测</li><li>AudioNoise： 音频噪声检测</li><li>VideoResolutionChanged： 视频分辨率变化</li><li>AudioSampleRateChanged： 音频采样率变化</li><li>AudioChannelsChanged： 音频通道数变化</li><li>ParameterSetsChanged： 流参数集信息发生变化</li><li>DarOrSarInvalid： 视频的宽高比异常</li><li>TimestampFallback： DTS时间戳回退</li><li>DtsJitter： DTS抖动过大</li><li>PtsJitter： PTS抖动过大</li><li>AACDurationDeviation： AAC帧时间戳间隔不合理</li><li>AudioDroppingFrames： 音频丢帧</li><li>VideoDroppingFrames： 视频丢帧</li><li>AVTimestampInterleave： 音视频交织不合理</li><li>PtsLessThanDts： 媒体流的 pts 小于 dts</li><li>ReceiveFpsJitter： 网络接收帧率抖动过大</li><li>ReceiveFpsTooSmall： 网络接收视频帧率过小</li><li>FpsJitter： 通过PTS计算得到的流帧率抖动过大</li><li>StreamOpenFailed： 流打开失败</li><li>StreamEnd： 流结束</li><li>StreamParseFailed： 流解析失败</li><li>VideoFirstFrameNotIdr： 首帧不是IDR帧</li><li>StreamNALUError： NALU起始码错误</li><li>TsStreamNoAud： mpegts的H26x流缺失 AUD NALU</li><li>AudioStreamLack： 无音频流</li><li>VideoStreamLack： 无视频流</li><li>LackAudioRecover： 缺失音频流恢复</li><li>LackVideoRecover： 缺失视频流恢复</li><li>VideoBitrateOutofRange： 视频流码率(kbps)超出范围</li><li>AudioBitrateOutofRange： 音频流码率(kbps)超出范围</li><li>VideoDecodeFailed： 视频解码错误</li><li>AudioDecodeFailed： 音频解码错误</li><li>AudioOutOfPhase： 双通道音频相位相反</li><li>VideoDuplicatedFrame： 视频流中存在重复帧</li><li>AudioDuplicatedFrame： 音频流中存在重复帧</li><li>VideoRotation： 视频画面旋转</li><li>TsMultiPrograms： MPEG2-TS流有多个program</li><li>Mp4InvalidCodecFourcc： MP4中codec fourcc不符合Apple HLS要求</li><li>HLSBadM3u8Format： 无效的m3u8文件</li><li>HLSInvalidMasterM3u8： 无效的main m3u8文件</li><li>HLSInvalidMediaM3u8： 无效的media m3u8文件</li><li>HLSMasterM3u8Recommended： main m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8Recommended： media m3u8缺少标准推荐的参数</li><li>HLSMediaM3u8DiscontinuityExist： media m3u8存在EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsStreamNumChange： 切片的流数目发生变化</li><li>HLSMediaSegmentsPTSJitterDeviation： 切片间PTS跳变且没有EXT-X-DISCONTINUITY</li><li>HLSMediaSegmentsDTSJitterDeviation： 切片间DTS跳变且没有EXT-X-DISCONTINUITY</li><li>TimecodeTrackExist： MP4存在tmcd轨道</li><li>BodyPoseCheck： 人体姿态异常</li><li>BodyDetailCheck： 人体细节异常</li><li>PhysicRulesCheck： 物理规律违反</li><li>ObjectConsistencyCheck： 物体一致性异常</li><li>FormatCheck： 格式异常</li><li>AudioReverb： 混响程度</li><li>AudioDiscontinuity： 音频不连续</li><li>AudioSpeechQuality： 语音清晰度</li><li>AudioHighLoudness： 响度失真</li><li>AudioLoudnessJitter： 音量变化剧烈</li><li>BackgroundMusic： 存在背景音乐</li><li>NoBackgroundMusic： 不存在背景音乐</li><li>VideoAesthetic： 视频美学评分</li><li>AudioVideoAsync： 音画不同步</li><li>AudioSubtitleAsync： 音频与字幕不同步</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>能力配置开关。</p><p>枚举值：</p><ul><li>ON： 开启。</li><li>OFF： 关闭。</li></ul><p>默认值：ON</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>采样方式</p><p>枚举值：</p><ul><li>Time： 根据时间间隔采样。</li></ul>
                     */
                    std::string m_sampling;
                    bool m_samplingHasBeenSet;

                    /**
                     * <p>采样间隔时间</p><p>单位：毫秒。</p>
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * <p>异常持续时间。</p><p>单位：毫秒。</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>检测项对应的阈值，不同检测项对应阈值不同。</p>
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTCONFIG_H_
