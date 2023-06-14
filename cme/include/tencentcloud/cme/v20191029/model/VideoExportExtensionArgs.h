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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTEXTENSIONARGS_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTEXTENSIONARGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 视频导出扩展参数
                */
                class VideoExportExtensionArgs : public AbstractModel
                {
                public:
                    VideoExportExtensionArgs();
                    ~VideoExportExtensionArgs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封装格式，可选值：
<li>mp4 </li>
<li>mov </li>
不填则使用视频导出编码配置。
                     * @return Container 封装格式，可选值：
<li>mp4 </li>
<li>mov </li>
不填则使用视频导出编码配置。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置封装格式，可选值：
<li>mp4 </li>
<li>mov </li>
不填则使用视频导出编码配置。
                     * @param _container 封装格式，可选值：
<li>mp4 </li>
<li>mov </li>
不填则使用视频导出编码配置。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例如：项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720</li>
不填则使用视频导出编码配置。
                     * @return ShortEdge 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例如：项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    uint64_t GetShortEdge() const;

                    /**
                     * 设置视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例如：项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720</li>
不填则使用视频导出编码配置。
                     * @param _shortEdge 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例如：项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    void SetShortEdge(const uint64_t& _shortEdge);

                    /**
                     * 判断参数 ShortEdge 是否已赋值
                     * @return ShortEdge 是否已赋值
                     * 
                     */
                    bool ShortEdgeHasBeenSet() const;

                    /**
                     * 获取指定码率，单位 bps。当该参数为 0 时则不强制限定码率。
不填则使用视频导出编码配置。
                     * @return VideoBitrate 指定码率，单位 bps。当该参数为 0 时则不强制限定码率。
不填则使用视频导出编码配置。
                     * 
                     */
                    uint64_t GetVideoBitrate() const;

                    /**
                     * 设置指定码率，单位 bps。当该参数为 0 时则不强制限定码率。
不填则使用视频导出编码配置。
                     * @param _videoBitrate 指定码率，单位 bps。当该参数为 0 时则不强制限定码率。
不填则使用视频导出编码配置。
                     * 
                     */
                    void SetVideoBitrate(const uint64_t& _videoBitrate);

                    /**
                     * 判断参数 VideoBitrate 是否已赋值
                     * @return VideoBitrate 是否已赋值
                     * 
                     */
                    bool VideoBitrateHasBeenSet() const;

                    /**
                     * 获取帧率。取值范围：[15, 60]，不填默认值为 25。
                     * @return FrameRate 帧率。取值范围：[15, 60]，不填默认值为 25。
                     * 
                     */
                    double GetFrameRate() const;

                    /**
                     * 设置帧率。取值范围：[15, 60]，不填默认值为 25。
                     * @param _frameRate 帧率。取值范围：[15, 60]，不填默认值为 25。
                     * 
                     */
                    void SetFrameRate(const double& _frameRate);

                    /**
                     * 判断参数 FrameRate 是否已赋值
                     * @return FrameRate 是否已赋值
                     * 
                     */
                    bool FrameRateHasBeenSet() const;

                    /**
                     * 获取是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * @return RemoveVideo 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    int64_t GetRemoveVideo() const;

                    /**
                     * 设置是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * @param _removeVideo 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    void SetRemoveVideo(const int64_t& _removeVideo);

                    /**
                     * 判断参数 RemoveVideo 是否已赋值
                     * @return RemoveVideo 是否已赋值
                     * 
                     */
                    bool RemoveVideoHasBeenSet() const;

                    /**
                     * 获取是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * @return RemoveAudio 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    int64_t GetRemoveAudio() const;

                    /**
                     * 设置是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * @param _removeAudio 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     * 
                     */
                    void SetRemoveAudio(const int64_t& _removeAudio);

                    /**
                     * 判断参数 RemoveAudio 是否已赋值
                     * @return RemoveAudio 是否已赋值
                     * 
                     */
                    bool RemoveAudioHasBeenSet() const;

                    /**
                     * 获取片段起始时间，单位：毫秒。
                     * @return StartTime 片段起始时间，单位：毫秒。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置片段起始时间，单位：毫秒。
                     * @param _startTime 片段起始时间，单位：毫秒。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取片段结束时间，单位：毫秒。
                     * @return EndTime 片段结束时间，单位：毫秒。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置片段结束时间，单位：毫秒。
                     * @param _endTime 片段结束时间，单位：毫秒。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 封装格式，可选值：
<li>mp4 </li>
<li>mov </li>
不填则使用视频导出编码配置。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 视频短边尺寸，取值范围： [128, 4096]，单位：px。
视频最后的分辨率，根据短边尺寸和宽高比进行计算。
例如：项目的宽高比是 16：9 ：
<li>短边尺寸为 1080，则导出视频的分辨率为 1920 * 1080。</li>
<li>短边尺寸为 720，则导出视频的分辨率为 1280 * 720</li>
不填则使用视频导出编码配置。
                     */
                    uint64_t m_shortEdge;
                    bool m_shortEdgeHasBeenSet;

                    /**
                     * 指定码率，单位 bps。当该参数为 0 时则不强制限定码率。
不填则使用视频导出编码配置。
                     */
                    uint64_t m_videoBitrate;
                    bool m_videoBitrateHasBeenSet;

                    /**
                     * 帧率。取值范围：[15, 60]，不填默认值为 25。
                     */
                    double m_frameRate;
                    bool m_frameRateHasBeenSet;

                    /**
                     * 是否去除视频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     */
                    int64_t m_removeVideo;
                    bool m_removeVideoHasBeenSet;

                    /**
                     * 是否去除音频数据，可选值：
<li>0：保留；</li>
<li>1：去除。</li>
不填则使用视频导出编码配置。
                     */
                    int64_t m_removeAudio;
                    bool m_removeAudioHasBeenSet;

                    /**
                     * 片段起始时间，单位：毫秒。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 片段结束时间，单位：毫秒。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEXPORTEXTENSIONARGS_H_
