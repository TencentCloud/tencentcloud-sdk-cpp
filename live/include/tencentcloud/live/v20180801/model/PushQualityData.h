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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 某条流的推流质量详情数据。
                */
                class PushQualityData : public AbstractModel
                {
                public:
                    PushQualityData();
                    ~PushQualityData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     * @return Time 数据时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    std::string GetTime() const;

                    /**
                     * 设置数据时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     * @param Time 数据时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取推流域名。
                     * @return PushDomain 推流域名。
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置推流域名。
                     * @param PushDomain 推流域名。
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param AppName 推流路径。
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取推流客户端ip。
                     * @return ClientIp 推流客户端ip。
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置推流客户端ip。
                     * @param ClientIp 推流客户端ip。
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取开始推流时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     * @return BeginPushTime 开始推流时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    std::string GetBeginPushTime() const;

                    /**
                     * 设置开始推流时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     * @param BeginPushTime 开始推流时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    void SetBeginPushTime(const std::string& _beginPushTime);

                    /**
                     * 判断参数 BeginPushTime 是否已赋值
                     * @return BeginPushTime 是否已赋值
                     */
                    bool BeginPushTimeHasBeenSet() const;

                    /**
                     * 获取分辨率信息。
                     * @return Resolution 分辨率信息。
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率信息。
                     * @param Resolution 分辨率信息。
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取视频编码格式。
                     * @return VCodec 视频编码格式。
                     */
                    std::string GetVCodec() const;

                    /**
                     * 设置视频编码格式。
                     * @param VCodec 视频编码格式。
                     */
                    void SetVCodec(const std::string& _vCodec);

                    /**
                     * 判断参数 VCodec 是否已赋值
                     * @return VCodec 是否已赋值
                     */
                    bool VCodecHasBeenSet() const;

                    /**
                     * 获取音频编码格式。
                     * @return ACodec 音频编码格式。
                     */
                    std::string GetACodec() const;

                    /**
                     * 设置音频编码格式。
                     * @param ACodec 音频编码格式。
                     */
                    void SetACodec(const std::string& _aCodec);

                    /**
                     * 判断参数 ACodec 是否已赋值
                     * @return ACodec 是否已赋值
                     */
                    bool ACodecHasBeenSet() const;

                    /**
                     * 获取推流序列号，用来唯一的标志一次推流。
                     * @return Sequence 推流序列号，用来唯一的标志一次推流。
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置推流序列号，用来唯一的标志一次推流。
                     * @param Sequence 推流序列号，用来唯一的标志一次推流。
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     */
                    bool SequenceHasBeenSet() const;

                    /**
                     * 获取视频帧率。
                     * @return VideoFps 视频帧率。
                     */
                    uint64_t GetVideoFps() const;

                    /**
                     * 设置视频帧率。
                     * @param VideoFps 视频帧率。
                     */
                    void SetVideoFps(const uint64_t& _videoFps);

                    /**
                     * 判断参数 VideoFps 是否已赋值
                     * @return VideoFps 是否已赋值
                     */
                    bool VideoFpsHasBeenSet() const;

                    /**
                     * 获取视频码率，单位是bps。
                     * @return VideoRate 视频码率，单位是bps。
                     */
                    uint64_t GetVideoRate() const;

                    /**
                     * 设置视频码率，单位是bps。
                     * @param VideoRate 视频码率，单位是bps。
                     */
                    void SetVideoRate(const uint64_t& _videoRate);

                    /**
                     * 判断参数 VideoRate 是否已赋值
                     * @return VideoRate 是否已赋值
                     */
                    bool VideoRateHasBeenSet() const;

                    /**
                     * 获取音频帧率。
                     * @return AudioFps 音频帧率。
                     */
                    uint64_t GetAudioFps() const;

                    /**
                     * 设置音频帧率。
                     * @param AudioFps 音频帧率。
                     */
                    void SetAudioFps(const uint64_t& _audioFps);

                    /**
                     * 判断参数 AudioFps 是否已赋值
                     * @return AudioFps 是否已赋值
                     */
                    bool AudioFpsHasBeenSet() const;

                    /**
                     * 获取音频码率，单位是bps。
                     * @return AudioRate 音频码率，单位是bps。
                     */
                    uint64_t GetAudioRate() const;

                    /**
                     * 设置音频码率，单位是bps。
                     * @param AudioRate 音频码率，单位是bps。
                     */
                    void SetAudioRate(const uint64_t& _audioRate);

                    /**
                     * 判断参数 AudioRate 是否已赋值
                     * @return AudioRate 是否已赋值
                     */
                    bool AudioRateHasBeenSet() const;

                    /**
                     * 获取本地流逝时间，单位是ms，音视频流逝时间与本地流逝时间的差距越大表示推流质量越差，上行卡顿越严重。
                     * @return LocalTs 本地流逝时间，单位是ms，音视频流逝时间与本地流逝时间的差距越大表示推流质量越差，上行卡顿越严重。
                     */
                    uint64_t GetLocalTs() const;

                    /**
                     * 设置本地流逝时间，单位是ms，音视频流逝时间与本地流逝时间的差距越大表示推流质量越差，上行卡顿越严重。
                     * @param LocalTs 本地流逝时间，单位是ms，音视频流逝时间与本地流逝时间的差距越大表示推流质量越差，上行卡顿越严重。
                     */
                    void SetLocalTs(const uint64_t& _localTs);

                    /**
                     * 判断参数 LocalTs 是否已赋值
                     * @return LocalTs 是否已赋值
                     */
                    bool LocalTsHasBeenSet() const;

                    /**
                     * 获取视频流逝时间，单位是ms。
                     * @return VideoTs 视频流逝时间，单位是ms。
                     */
                    uint64_t GetVideoTs() const;

                    /**
                     * 设置视频流逝时间，单位是ms。
                     * @param VideoTs 视频流逝时间，单位是ms。
                     */
                    void SetVideoTs(const uint64_t& _videoTs);

                    /**
                     * 判断参数 VideoTs 是否已赋值
                     * @return VideoTs 是否已赋值
                     */
                    bool VideoTsHasBeenSet() const;

                    /**
                     * 获取音频流逝时间，单位是ms。
                     * @return AudioTs 音频流逝时间，单位是ms。
                     */
                    uint64_t GetAudioTs() const;

                    /**
                     * 设置音频流逝时间，单位是ms。
                     * @param AudioTs 音频流逝时间，单位是ms。
                     */
                    void SetAudioTs(const uint64_t& _audioTs);

                    /**
                     * 判断参数 AudioTs 是否已赋值
                     * @return AudioTs 是否已赋值
                     */
                    bool AudioTsHasBeenSet() const;

                    /**
                     * 获取metadata中的视频码率，单位是kbps。
                     * @return MetaVideoRate metadata中的视频码率，单位是kbps。
                     */
                    uint64_t GetMetaVideoRate() const;

                    /**
                     * 设置metadata中的视频码率，单位是kbps。
                     * @param MetaVideoRate metadata中的视频码率，单位是kbps。
                     */
                    void SetMetaVideoRate(const uint64_t& _metaVideoRate);

                    /**
                     * 判断参数 MetaVideoRate 是否已赋值
                     * @return MetaVideoRate 是否已赋值
                     */
                    bool MetaVideoRateHasBeenSet() const;

                    /**
                     * 获取metadata中的音频码率，单位是kbps。
                     * @return MetaAudioRate metadata中的音频码率，单位是kbps。
                     */
                    uint64_t GetMetaAudioRate() const;

                    /**
                     * 设置metadata中的音频码率，单位是kbps。
                     * @param MetaAudioRate metadata中的音频码率，单位是kbps。
                     */
                    void SetMetaAudioRate(const uint64_t& _metaAudioRate);

                    /**
                     * 判断参数 MetaAudioRate 是否已赋值
                     * @return MetaAudioRate 是否已赋值
                     */
                    bool MetaAudioRateHasBeenSet() const;

                    /**
                     * 获取metadata中的帧率。
                     * @return MateFps metadata中的帧率。
                     */
                    uint64_t GetMateFps() const;

                    /**
                     * 设置metadata中的帧率。
                     * @param MateFps metadata中的帧率。
                     */
                    void SetMateFps(const uint64_t& _mateFps);

                    /**
                     * 判断参数 MateFps 是否已赋值
                     * @return MateFps 是否已赋值
                     */
                    bool MateFpsHasBeenSet() const;

                private:

                    /**
                     * 数据时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 推流客户端ip。
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 开始推流时间，格式是%Y-%m-%d %H:%M:%S.%ms，精确到毫秒级。
                     */
                    std::string m_beginPushTime;
                    bool m_beginPushTimeHasBeenSet;

                    /**
                     * 分辨率信息。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 视频编码格式。
                     */
                    std::string m_vCodec;
                    bool m_vCodecHasBeenSet;

                    /**
                     * 音频编码格式。
                     */
                    std::string m_aCodec;
                    bool m_aCodecHasBeenSet;

                    /**
                     * 推流序列号，用来唯一的标志一次推流。
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                    /**
                     * 视频帧率。
                     */
                    uint64_t m_videoFps;
                    bool m_videoFpsHasBeenSet;

                    /**
                     * 视频码率，单位是bps。
                     */
                    uint64_t m_videoRate;
                    bool m_videoRateHasBeenSet;

                    /**
                     * 音频帧率。
                     */
                    uint64_t m_audioFps;
                    bool m_audioFpsHasBeenSet;

                    /**
                     * 音频码率，单位是bps。
                     */
                    uint64_t m_audioRate;
                    bool m_audioRateHasBeenSet;

                    /**
                     * 本地流逝时间，单位是ms，音视频流逝时间与本地流逝时间的差距越大表示推流质量越差，上行卡顿越严重。
                     */
                    uint64_t m_localTs;
                    bool m_localTsHasBeenSet;

                    /**
                     * 视频流逝时间，单位是ms。
                     */
                    uint64_t m_videoTs;
                    bool m_videoTsHasBeenSet;

                    /**
                     * 音频流逝时间，单位是ms。
                     */
                    uint64_t m_audioTs;
                    bool m_audioTsHasBeenSet;

                    /**
                     * metadata中的视频码率，单位是kbps。
                     */
                    uint64_t m_metaVideoRate;
                    bool m_metaVideoRateHasBeenSet;

                    /**
                     * metadata中的音频码率，单位是kbps。
                     */
                    uint64_t m_metaAudioRate;
                    bool m_metaAudioRateHasBeenSet;

                    /**
                     * metadata中的帧率。
                     */
                    uint64_t m_mateFps;
                    bool m_mateFpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PUSHQUALITYDATA_H_
