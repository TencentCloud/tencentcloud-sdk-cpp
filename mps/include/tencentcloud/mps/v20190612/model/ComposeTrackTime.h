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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_

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
                * 视频编辑/合成任务 对应元素在目标视频轨道上的时间信息。
                */
                class ComposeTrackTime : public AbstractModel
                {
                public:
                    ComposeTrackTime();
                    ~ComposeTrackTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元素在轨道上的起始时间，时间点支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
注意：不填则默认为前一个元素的结束时间，此时可以通过 ComposeEmptyItem 元素来进行占位，实现轨道起始时间设置。
                     * @return Start 元素在轨道上的起始时间，时间点支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
注意：不填则默认为前一个元素的结束时间，此时可以通过 ComposeEmptyItem 元素来进行占位，实现轨道起始时间设置。
                     * 
                     */
                    std::string GetStart() const;

                    /**
                     * 设置元素在轨道上的起始时间，时间点支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
注意：不填则默认为前一个元素的结束时间，此时可以通过 ComposeEmptyItem 元素来进行占位，实现轨道起始时间设置。
                     * @param _start 元素在轨道上的起始时间，时间点支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
注意：不填则默认为前一个元素的结束时间，此时可以通过 ComposeEmptyItem 元素来进行占位，实现轨道起始时间设置。
                     * 
                     */
                    void SetStart(const std::string& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
默认：取对应 ComposeSourceMedia 媒体的有效时长（即 EndTime-StartTime），没有 ComposeSourceMedia 则默认为 1 秒。
                     * @return Duration 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
默认：取对应 ComposeSourceMedia 媒体的有效时长（即 EndTime-StartTime），没有 ComposeSourceMedia 则默认为 1 秒。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
默认：取对应 ComposeSourceMedia 媒体的有效时长（即 EndTime-StartTime），没有 ComposeSourceMedia 则默认为 1 秒。
                     * @param _duration 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
默认：取对应 ComposeSourceMedia 媒体的有效时长（即 EndTime-StartTime），没有 ComposeSourceMedia 则默认为 1 秒。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 元素在轨道上的起始时间，时间点支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
注意：不填则默认为前一个元素的结束时间，此时可以通过 ComposeEmptyItem 元素来进行占位，实现轨道起始时间设置。
                     */
                    std::string m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
默认：取对应 ComposeSourceMedia 媒体的有效时长（即 EndTime-StartTime），没有 ComposeSourceMedia 则默认为 1 秒。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRACKTIME_H_
