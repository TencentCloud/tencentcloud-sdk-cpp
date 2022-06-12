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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMENEWUSAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMENEWUSAGE_H_

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
                * 查询旁路转码计费时长。
查询时间小于等于1天时，返回每5分钟粒度的数据；查询时间大于1天时，返回按天汇总的数据。
                */
                class SdkAppIdTrtcMcuTranscodeTimeNewUsage : public AbstractModel
                {
                public:
                    SdkAppIdTrtcMcuTranscodeTimeNewUsage();
                    ~SdkAppIdTrtcMcuTranscodeTimeNewUsage() = default;
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
                     * 获取视频时长-标清SD，单位：秒。
                     * @return VideoTimeH264SD 视频时长-标清SD，单位：秒。
                     */
                    uint64_t GetVideoTimeH264SD() const;

                    /**
                     * 设置视频时长-标清SD，单位：秒。
                     * @param VideoTimeH264SD 视频时长-标清SD，单位：秒。
                     */
                    void SetVideoTimeH264SD(const uint64_t& _videoTimeH264SD);

                    /**
                     * 判断参数 VideoTimeH264SD 是否已赋值
                     * @return VideoTimeH264SD 是否已赋值
                     */
                    bool VideoTimeH264SDHasBeenSet() const;

                    /**
                     * 获取视频时长-高清HD，单位：秒。
                     * @return VideoTimeH264HD 视频时长-高清HD，单位：秒。
                     */
                    uint64_t GetVideoTimeH264HD() const;

                    /**
                     * 设置视频时长-高清HD，单位：秒。
                     * @param VideoTimeH264HD 视频时长-高清HD，单位：秒。
                     */
                    void SetVideoTimeH264HD(const uint64_t& _videoTimeH264HD);

                    /**
                     * 判断参数 VideoTimeH264HD 是否已赋值
                     * @return VideoTimeH264HD 是否已赋值
                     */
                    bool VideoTimeH264HDHasBeenSet() const;

                    /**
                     * 获取视频时长-全高清FHD，单位：秒。
                     * @return VideoTimeH264FHD 视频时长-全高清FHD，单位：秒。
                     */
                    uint64_t GetVideoTimeH264FHD() const;

                    /**
                     * 设置视频时长-全高清FHD，单位：秒。
                     * @param VideoTimeH264FHD 视频时长-全高清FHD，单位：秒。
                     */
                    void SetVideoTimeH264FHD(const uint64_t& _videoTimeH264FHD);

                    /**
                     * 判断参数 VideoTimeH264FHD 是否已赋值
                     * @return VideoTimeH264FHD 是否已赋值
                     */
                    bool VideoTimeH264FHDHasBeenSet() const;

                    /**
                     * 获取视频时长-带宽，单位：mbps。
                     * @return Flux 视频时长-带宽，单位：mbps。
                     */
                    double GetFlux() const;

                    /**
                     * 设置视频时长-带宽，单位：mbps。
                     * @param Flux 视频时长-带宽，单位：mbps。
                     */
                    void SetFlux(const double& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取视频时长-标清2K，单位：秒。
                     * @return VideoTimeH2642K 视频时长-标清2K，单位：秒。
                     */
                    uint64_t GetVideoTimeH2642K() const;

                    /**
                     * 设置视频时长-标清2K，单位：秒。
                     * @param VideoTimeH2642K 视频时长-标清2K，单位：秒。
                     */
                    void SetVideoTimeH2642K(const uint64_t& _videoTimeH2642K);

                    /**
                     * 判断参数 VideoTimeH2642K 是否已赋值
                     * @return VideoTimeH2642K 是否已赋值
                     */
                    bool VideoTimeH2642KHasBeenSet() const;

                    /**
                     * 获取视频时长-标清4K，单位：秒。
                     * @return VideoTimeH2644K 视频时长-标清4K，单位：秒。
                     */
                    uint64_t GetVideoTimeH2644K() const;

                    /**
                     * 设置视频时长-标清4K，单位：秒。
                     * @param VideoTimeH2644K 视频时长-标清4K，单位：秒。
                     */
                    void SetVideoTimeH2644K(const uint64_t& _videoTimeH2644K);

                    /**
                     * 判断参数 VideoTimeH2644K 是否已赋值
                     * @return VideoTimeH2644K 是否已赋值
                     */
                    bool VideoTimeH2644KHasBeenSet() const;

                    /**
                     * 获取视频时长-标清265SD，单位：秒。
                     * @return VideoTimeH265SD 视频时长-标清265SD，单位：秒。
                     */
                    uint64_t GetVideoTimeH265SD() const;

                    /**
                     * 设置视频时长-标清265SD，单位：秒。
                     * @param VideoTimeH265SD 视频时长-标清265SD，单位：秒。
                     */
                    void SetVideoTimeH265SD(const uint64_t& _videoTimeH265SD);

                    /**
                     * 判断参数 VideoTimeH265SD 是否已赋值
                     * @return VideoTimeH265SD 是否已赋值
                     */
                    bool VideoTimeH265SDHasBeenSet() const;

                    /**
                     * 获取视频时长-高清265HD，单位：秒。
                     * @return VideoTimeH265HD 视频时长-高清265HD，单位：秒。
                     */
                    uint64_t GetVideoTimeH265HD() const;

                    /**
                     * 设置视频时长-高清265HD，单位：秒。
                     * @param VideoTimeH265HD 视频时长-高清265HD，单位：秒。
                     */
                    void SetVideoTimeH265HD(const uint64_t& _videoTimeH265HD);

                    /**
                     * 判断参数 VideoTimeH265HD 是否已赋值
                     * @return VideoTimeH265HD 是否已赋值
                     */
                    bool VideoTimeH265HDHasBeenSet() const;

                    /**
                     * 获取视频时长-全高清265FHD，单位：秒。
                     * @return VideoTimeH265FHD 视频时长-全高清265FHD，单位：秒。
                     */
                    uint64_t GetVideoTimeH265FHD() const;

                    /**
                     * 设置视频时长-全高清265FHD，单位：秒。
                     * @param VideoTimeH265FHD 视频时长-全高清265FHD，单位：秒。
                     */
                    void SetVideoTimeH265FHD(const uint64_t& _videoTimeH265FHD);

                    /**
                     * 判断参数 VideoTimeH265FHD 是否已赋值
                     * @return VideoTimeH265FHD 是否已赋值
                     */
                    bool VideoTimeH265FHDHasBeenSet() const;

                    /**
                     * 获取视频时长-标清2652K，单位：秒。
                     * @return VideoTimeH2652K 视频时长-标清2652K，单位：秒。
                     */
                    uint64_t GetVideoTimeH2652K() const;

                    /**
                     * 设置视频时长-标清2652K，单位：秒。
                     * @param VideoTimeH2652K 视频时长-标清2652K，单位：秒。
                     */
                    void SetVideoTimeH2652K(const uint64_t& _videoTimeH2652K);

                    /**
                     * 判断参数 VideoTimeH2652K 是否已赋值
                     * @return VideoTimeH2652K 是否已赋值
                     */
                    bool VideoTimeH2652KHasBeenSet() const;

                    /**
                     * 获取视频时长-标清265 4K，单位：秒。
                     * @return VideoTimeH2654K 视频时长-标清265 4K，单位：秒。
                     */
                    uint64_t GetVideoTimeH2654K() const;

                    /**
                     * 设置视频时长-标清265 4K，单位：秒。
                     * @param VideoTimeH2654K 视频时长-标清265 4K，单位：秒。
                     */
                    void SetVideoTimeH2654K(const uint64_t& _videoTimeH2654K);

                    /**
                     * 判断参数 VideoTimeH2654K 是否已赋值
                     * @return VideoTimeH2654K 是否已赋值
                     */
                    bool VideoTimeH2654KHasBeenSet() const;

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
                     * 视频时长-标清SD，单位：秒。
                     */
                    uint64_t m_videoTimeH264SD;
                    bool m_videoTimeH264SDHasBeenSet;

                    /**
                     * 视频时长-高清HD，单位：秒。
                     */
                    uint64_t m_videoTimeH264HD;
                    bool m_videoTimeH264HDHasBeenSet;

                    /**
                     * 视频时长-全高清FHD，单位：秒。
                     */
                    uint64_t m_videoTimeH264FHD;
                    bool m_videoTimeH264FHDHasBeenSet;

                    /**
                     * 视频时长-带宽，单位：mbps。
                     */
                    double m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * 视频时长-标清2K，单位：秒。
                     */
                    uint64_t m_videoTimeH2642K;
                    bool m_videoTimeH2642KHasBeenSet;

                    /**
                     * 视频时长-标清4K，单位：秒。
                     */
                    uint64_t m_videoTimeH2644K;
                    bool m_videoTimeH2644KHasBeenSet;

                    /**
                     * 视频时长-标清265SD，单位：秒。
                     */
                    uint64_t m_videoTimeH265SD;
                    bool m_videoTimeH265SDHasBeenSet;

                    /**
                     * 视频时长-高清265HD，单位：秒。
                     */
                    uint64_t m_videoTimeH265HD;
                    bool m_videoTimeH265HDHasBeenSet;

                    /**
                     * 视频时长-全高清265FHD，单位：秒。
                     */
                    uint64_t m_videoTimeH265FHD;
                    bool m_videoTimeH265FHDHasBeenSet;

                    /**
                     * 视频时长-标清2652K，单位：秒。
                     */
                    uint64_t m_videoTimeH2652K;
                    bool m_videoTimeH2652KHasBeenSet;

                    /**
                     * 视频时长-标清265 4K，单位：秒。
                     */
                    uint64_t m_videoTimeH2654K;
                    bool m_videoTimeH2654KHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_SDKAPPIDTRTCMCUTRANSCODETIMENEWUSAGE_H_
