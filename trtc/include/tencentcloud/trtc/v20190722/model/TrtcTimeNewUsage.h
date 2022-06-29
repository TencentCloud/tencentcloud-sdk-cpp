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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCTIMENEWUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCTIMENEWUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 实时音视频用量的某一时间段的统计信息.  
                */
                class TrtcTimeNewUsage : public AbstractModel
                {
                public:
                    TrtcTimeNewUsage();
                    ~TrtcTimeNewUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间点。
                     * @return TimeKey 时间点。
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置时间点。
                     * @param TimeKey 时间点。
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取通话人数。仅供参考。在线人数以仪表盘查询结果为准。
                     * @return VoiceUserNum 通话人数。仅供参考。在线人数以仪表盘查询结果为准。
                     */
                    uint64_t GetVoiceUserNum() const;

                    /**
                     * 设置通话人数。仅供参考。在线人数以仪表盘查询结果为准。
                     * @param VoiceUserNum 通话人数。仅供参考。在线人数以仪表盘查询结果为准。
                     */
                    void SetVoiceUserNum(const uint64_t& _voiceUserNum);

                    /**
                     * 判断参数 VoiceUserNum 是否已赋值
                     * @return VoiceUserNum 是否已赋值
                     */
                    bool VoiceUserNumHasBeenSet() const;

                    /**
                     * 获取音视频通话时长。单位：秒。
                     * @return VideoTime 音视频通话时长。单位：秒。
                     */
                    uint64_t GetVideoTime() const;

                    /**
                     * 设置音视频通话时长。单位：秒。
                     * @param VideoTime 音视频通话时长。单位：秒。
                     */
                    void SetVideoTime(const uint64_t& _videoTime);

                    /**
                     * 判断参数 VideoTime 是否已赋值
                     * @return VideoTime 是否已赋值
                     */
                    bool VideoTimeHasBeenSet() const;

                    /**
                     * 获取标清视频通话时长。单位：秒。
                     * @return Class1VideoTime 标清视频通话时长。单位：秒。
                     */
                    uint64_t GetClass1VideoTime() const;

                    /**
                     * 设置标清视频通话时长。单位：秒。
                     * @param Class1VideoTime 标清视频通话时长。单位：秒。
                     */
                    void SetClass1VideoTime(const uint64_t& _class1VideoTime);

                    /**
                     * 判断参数 Class1VideoTime 是否已赋值
                     * @return Class1VideoTime 是否已赋值
                     */
                    bool Class1VideoTimeHasBeenSet() const;

                    /**
                     * 获取高清视频通话时长。单位：秒。
                     * @return Class2VideoTime 高清视频通话时长。单位：秒。
                     */
                    uint64_t GetClass2VideoTime() const;

                    /**
                     * 设置高清视频通话时长。单位：秒。
                     * @param Class2VideoTime 高清视频通话时长。单位：秒。
                     */
                    void SetClass2VideoTime(const uint64_t& _class2VideoTime);

                    /**
                     * 判断参数 Class2VideoTime 是否已赋值
                     * @return Class2VideoTime 是否已赋值
                     */
                    bool Class2VideoTimeHasBeenSet() const;

                    /**
                     * 获取超高清视频通话时长。单位：秒。
                     * @return Class3VideoTime 超高清视频通话时长。单位：秒。
                     */
                    uint64_t GetClass3VideoTime() const;

                    /**
                     * 设置超高清视频通话时长。单位：秒。
                     * @param Class3VideoTime 超高清视频通话时长。单位：秒。
                     */
                    void SetClass3VideoTime(const uint64_t& _class3VideoTime);

                    /**
                     * 判断参数 Class3VideoTime 是否已赋值
                     * @return Class3VideoTime 是否已赋值
                     */
                    bool Class3VideoTimeHasBeenSet() const;

                    /**
                     * 获取音频通话时长。单位：秒。
                     * @return AudioTime 音频通话时长。单位：秒。
                     */
                    uint64_t GetAudioTime() const;

                    /**
                     * 设置音频通话时长。单位：秒。
                     * @param AudioTime 音频通话时长。单位：秒。
                     */
                    void SetAudioTime(const uint64_t& _audioTime);

                    /**
                     * 判断参数 AudioTime 是否已赋值
                     * @return AudioTime 是否已赋值
                     */
                    bool AudioTimeHasBeenSet() const;

                    /**
                     * 获取带宽。单位：Mbps。
                     * @return Bandwidth 带宽。单位：Mbps。
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置带宽。单位：Mbps。
                     * @param Bandwidth 带宽。单位：Mbps。
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取2k视频通话时长。单位：秒。
                     * @return Video2KTime 2k视频通话时长。单位：秒。
                     */
                    uint64_t GetVideo2KTime() const;

                    /**
                     * 设置2k视频通话时长。单位：秒。
                     * @param Video2KTime 2k视频通话时长。单位：秒。
                     */
                    void SetVideo2KTime(const uint64_t& _video2KTime);

                    /**
                     * 判断参数 Video2KTime 是否已赋值
                     * @return Video2KTime 是否已赋值
                     */
                    bool Video2KTimeHasBeenSet() const;

                    /**
                     * 获取4k视频通话时长。单位：秒。
                     * @return Video4KTime 4k视频通话时长。单位：秒。
                     */
                    uint64_t GetVideo4KTime() const;

                    /**
                     * 设置4k视频通话时长。单位：秒。
                     * @param Video4KTime 4k视频通话时长。单位：秒。
                     */
                    void SetVideo4KTime(const uint64_t& _video4KTime);

                    /**
                     * 判断参数 Video4KTime 是否已赋值
                     * @return Video4KTime 是否已赋值
                     */
                    bool Video4KTimeHasBeenSet() const;

                private:

                    /**
                     * 时间点。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 通话人数。仅供参考。在线人数以仪表盘查询结果为准。
                     */
                    uint64_t m_voiceUserNum;
                    bool m_voiceUserNumHasBeenSet;

                    /**
                     * 音视频通话时长。单位：秒。
                     */
                    uint64_t m_videoTime;
                    bool m_videoTimeHasBeenSet;

                    /**
                     * 标清视频通话时长。单位：秒。
                     */
                    uint64_t m_class1VideoTime;
                    bool m_class1VideoTimeHasBeenSet;

                    /**
                     * 高清视频通话时长。单位：秒。
                     */
                    uint64_t m_class2VideoTime;
                    bool m_class2VideoTimeHasBeenSet;

                    /**
                     * 超高清视频通话时长。单位：秒。
                     */
                    uint64_t m_class3VideoTime;
                    bool m_class3VideoTimeHasBeenSet;

                    /**
                     * 音频通话时长。单位：秒。
                     */
                    uint64_t m_audioTime;
                    bool m_audioTimeHasBeenSet;

                    /**
                     * 带宽。单位：Mbps。
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 2k视频通话时长。单位：秒。
                     */
                    uint64_t m_video2KTime;
                    bool m_video2KTimeHasBeenSet;

                    /**
                     * 4k视频通话时长。单位：秒。
                     */
                    uint64_t m_video4KTime;
                    bool m_video4KTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCTIMENEWUSAGE_H_
