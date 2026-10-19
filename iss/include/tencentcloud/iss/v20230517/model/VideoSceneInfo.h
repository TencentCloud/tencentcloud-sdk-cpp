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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 视频场景配置
                */
                class VideoSceneInfo : public AbstractModel
                {
                public:
                    VideoSceneInfo();
                    ~VideoSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分析周期（秒）：每隔多少秒从云端录像中截取一个视频片段进行分析。例如 Interval=3600、Duration=600，表示每隔1小时 取一个 10 分钟的视频片段进行分析。需满足 Duration ≤ Interval，否则相邻片段将重叠。取值范围［5,86400］。</p>
                     * @return Interval <p>分析周期（秒）：每隔多少秒从云端录像中截取一个视频片段进行分析。例如 Interval=3600、Duration=600，表示每隔1小时 取一个 10 分钟的视频片段进行分析。需满足 Duration ≤ Interval，否则相邻片段将重叠。取值范围［5,86400］。</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>分析周期（秒）：每隔多少秒从云端录像中截取一个视频片段进行分析。例如 Interval=3600、Duration=600，表示每隔1小时 取一个 10 分钟的视频片段进行分析。需满足 Duration ≤ Interval，否则相邻片段将重叠。取值范围［5,86400］。</p>
                     * @param _interval <p>分析周期（秒）：每隔多少秒从云端录像中截取一个视频片段进行分析。例如 Interval=3600、Duration=600，表示每隔1小时 取一个 10 分钟的视频片段进行分析。需满足 Duration ≤ Interval，否则相邻片段将重叠。取值范围［5,86400］。</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>分析片段时长（秒）：每次分析截取的视频片段长度，即单次分析覆盖的视频时长。取值范围［5,12800］。</p>
                     * @return Duration <p>分析片段时长（秒）：每次分析截取的视频片段长度，即单次分析覆盖的视频时长。取值范围［5,12800］。</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>分析片段时长（秒）：每次分析截取的视频片段长度，即单次分析覆盖的视频时长。取值范围［5,12800］。</p>
                     * @param _duration <p>分析片段时长（秒）：每次分析截取的视频片段长度，即单次分析覆盖的视频时长。取值范围［5,12800］。</p>
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
                     * 获取<p>抽帧率（FPS）：在片段内每隔1/Fps 秒截取一帧进行分析。取值越大，分析越精细，单次分析的帧数越多。默认值1，取值范围［0.1,1</p>
                     * @return Fps <p>抽帧率（FPS）：在片段内每隔1/Fps 秒截取一帧进行分析。取值越大，分析越精细，单次分析的帧数越多。默认值1，取值范围［0.1,1</p>
                     * 
                     */
                    double GetFps() const;

                    /**
                     * 设置<p>抽帧率（FPS）：在片段内每隔1/Fps 秒截取一帧进行分析。取值越大，分析越精细，单次分析的帧数越多。默认值1，取值范围［0.1,1</p>
                     * @param _fps <p>抽帧率（FPS）：在片段内每隔1/Fps 秒截取一帧进行分析。取值越大，分析越精细，单次分析的帧数越多。默认值1，取值范围［0.1,1</p>
                     * 
                     */
                    void SetFps(const double& _fps);

                    /**
                     * 判断参数 Fps 是否已赋值
                     * @return Fps 是否已赋值
                     * 
                     */
                    bool FpsHasBeenSet() const;

                private:

                    /**
                     * <p>分析周期（秒）：每隔多少秒从云端录像中截取一个视频片段进行分析。例如 Interval=3600、Duration=600，表示每隔1小时 取一个 10 分钟的视频片段进行分析。需满足 Duration ≤ Interval，否则相邻片段将重叠。取值范围［5,86400］。</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>分析片段时长（秒）：每次分析截取的视频片段长度，即单次分析覆盖的视频时长。取值范围［5,12800］。</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>抽帧率（FPS）：在片段内每隔1/Fps 秒截取一帧进行分析。取值越大，分析越精细，单次分析的帧数越多。默认值1，取值范围［0.1,1</p>
                     */
                    double m_fps;
                    bool m_fpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSCENEINFO_H_
