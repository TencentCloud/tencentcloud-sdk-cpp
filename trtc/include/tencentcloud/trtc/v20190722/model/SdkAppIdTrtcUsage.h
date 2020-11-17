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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCUSAGE_H_

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
                * 查询音视频互动时长的输出数据。
查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
                */
                class SdkAppIdTrtcUsage : public AbstractModel
                {
                public:
                    SdkAppIdTrtcUsage();
                    ~SdkAppIdTrtcUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本组数据对应的时间点，格式如：2020-09-07或2020-09-07 00:05:05。
                     * @return TimeKey 本组数据对应的时间点，格式如：2020-09-07或2020-09-07 00:05:05。
                     */
                    std::string GetTimeKey() const;

                    /**
                     * 设置本组数据对应的时间点，格式如：2020-09-07或2020-09-07 00:05:05。
                     * @param TimeKey 本组数据对应的时间点，格式如：2020-09-07或2020-09-07 00:05:05。
                     */
                    void SetTimeKey(const std::string& _timeKey);

                    /**
                     * 判断参数 TimeKey 是否已赋值
                     * @return TimeKey 是否已赋值
                     */
                    bool TimeKeyHasBeenSet() const;

                    /**
                     * 获取语音时长，单位：秒。
                     * @return AudioTime 语音时长，单位：秒。
                     */
                    uint64_t GetAudioTime() const;

                    /**
                     * 设置语音时长，单位：秒。
                     * @param AudioTime 语音时长，单位：秒。
                     */
                    void SetAudioTime(const uint64_t& _audioTime);

                    /**
                     * 判断参数 AudioTime 是否已赋值
                     * @return AudioTime 是否已赋值
                     */
                    bool AudioTimeHasBeenSet() const;

                    /**
                     * 获取音视频时长，单位：秒。
2019年10月11日前注册，没有变更为 [新计费模式](https://cloud.tencent.com/document/product/647/17157) 的用户才会返回此值。
                     * @return AudioVideoTime 音视频时长，单位：秒。
2019年10月11日前注册，没有变更为 [新计费模式](https://cloud.tencent.com/document/product/647/17157) 的用户才会返回此值。
                     */
                    uint64_t GetAudioVideoTime() const;

                    /**
                     * 设置音视频时长，单位：秒。
2019年10月11日前注册，没有变更为 [新计费模式](https://cloud.tencent.com/document/product/647/17157) 的用户才会返回此值。
                     * @param AudioVideoTime 音视频时长，单位：秒。
2019年10月11日前注册，没有变更为 [新计费模式](https://cloud.tencent.com/document/product/647/17157) 的用户才会返回此值。
                     */
                    void SetAudioVideoTime(const uint64_t& _audioVideoTime);

                    /**
                     * 判断参数 AudioVideoTime 是否已赋值
                     * @return AudioVideoTime 是否已赋值
                     */
                    bool AudioVideoTimeHasBeenSet() const;

                    /**
                     * 获取视频时长-标清SD，单位：秒。
                     * @return VideoTimeSd 视频时长-标清SD，单位：秒。
                     */
                    uint64_t GetVideoTimeSd() const;

                    /**
                     * 设置视频时长-标清SD，单位：秒。
                     * @param VideoTimeSd 视频时长-标清SD，单位：秒。
                     */
                    void SetVideoTimeSd(const uint64_t& _videoTimeSd);

                    /**
                     * 判断参数 VideoTimeSd 是否已赋值
                     * @return VideoTimeSd 是否已赋值
                     */
                    bool VideoTimeSdHasBeenSet() const;

                    /**
                     * 获取视频时长-高清HD，单位：秒。
                     * @return VideoTimeHd 视频时长-高清HD，单位：秒。
                     */
                    uint64_t GetVideoTimeHd() const;

                    /**
                     * 设置视频时长-高清HD，单位：秒。
                     * @param VideoTimeHd 视频时长-高清HD，单位：秒。
                     */
                    void SetVideoTimeHd(const uint64_t& _videoTimeHd);

                    /**
                     * 判断参数 VideoTimeHd 是否已赋值
                     * @return VideoTimeHd 是否已赋值
                     */
                    bool VideoTimeHdHasBeenSet() const;

                    /**
                     * 获取视频时长-超清HD，单位：秒。
                     * @return VideoTimeHdp 视频时长-超清HD，单位：秒。
                     */
                    uint64_t GetVideoTimeHdp() const;

                    /**
                     * 设置视频时长-超清HD，单位：秒。
                     * @param VideoTimeHdp 视频时长-超清HD，单位：秒。
                     */
                    void SetVideoTimeHdp(const uint64_t& _videoTimeHdp);

                    /**
                     * 判断参数 VideoTimeHdp 是否已赋值
                     * @return VideoTimeHdp 是否已赋值
                     */
                    bool VideoTimeHdpHasBeenSet() const;

                private:

                    /**
                     * 本组数据对应的时间点，格式如：2020-09-07或2020-09-07 00:05:05。
                     */
                    std::string m_timeKey;
                    bool m_timeKeyHasBeenSet;

                    /**
                     * 语音时长，单位：秒。
                     */
                    uint64_t m_audioTime;
                    bool m_audioTimeHasBeenSet;

                    /**
                     * 音视频时长，单位：秒。
2019年10月11日前注册，没有变更为 [新计费模式](https://cloud.tencent.com/document/product/647/17157) 的用户才会返回此值。
                     */
                    uint64_t m_audioVideoTime;
                    bool m_audioVideoTimeHasBeenSet;

                    /**
                     * 视频时长-标清SD，单位：秒。
                     */
                    uint64_t m_videoTimeSd;
                    bool m_videoTimeSdHasBeenSet;

                    /**
                     * 视频时长-高清HD，单位：秒。
                     */
                    uint64_t m_videoTimeHd;
                    bool m_videoTimeHdHasBeenSet;

                    /**
                     * 视频时长-超清HD，单位：秒。
                     */
                    uint64_t m_videoTimeHdp;
                    bool m_videoTimeHdpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCUSAGE_H_
