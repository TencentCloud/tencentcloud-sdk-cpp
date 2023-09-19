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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTransitionOperation.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频编辑/合成任务 转场元素信息。
                */
                class ComposeTransitionItem : public AbstractModel
                {
                public:
                    ComposeTransitionItem();
                    ~ComposeTransitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元素时长，时间支持：<li>以 s 结尾，表示时间点单位为秒，如 3s 表示时间点为第3秒。</li>
默认：1s
注意：
<li>必须是整数s，否则向下取整。</li>
<li>转场 前后必须紧挨着两个不为 Empty 的元素。</li>
<li>转场 Duration 必须小于前一个元素的 Duration，同时必须小于后一个元素的 Duration。</li>
<li>进行转场处理的两个元素，第二个元素在轨道上的起始时间会自动调整为前一个元素的结束时间减去转场的 Duration。</li>
                     * @return Duration 元素时长，时间支持：<li>以 s 结尾，表示时间点单位为秒，如 3s 表示时间点为第3秒。</li>
默认：1s
注意：
<li>必须是整数s，否则向下取整。</li>
<li>转场 前后必须紧挨着两个不为 Empty 的元素。</li>
<li>转场 Duration 必须小于前一个元素的 Duration，同时必须小于后一个元素的 Duration。</li>
<li>进行转场处理的两个元素，第二个元素在轨道上的起始时间会自动调整为前一个元素的结束时间减去转场的 Duration。</li>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置元素时长，时间支持：<li>以 s 结尾，表示时间点单位为秒，如 3s 表示时间点为第3秒。</li>
默认：1s
注意：
<li>必须是整数s，否则向下取整。</li>
<li>转场 前后必须紧挨着两个不为 Empty 的元素。</li>
<li>转场 Duration 必须小于前一个元素的 Duration，同时必须小于后一个元素的 Duration。</li>
<li>进行转场处理的两个元素，第二个元素在轨道上的起始时间会自动调整为前一个元素的结束时间减去转场的 Duration。</li>
                     * @param _duration 元素时长，时间支持：<li>以 s 结尾，表示时间点单位为秒，如 3s 表示时间点为第3秒。</li>
默认：1s
注意：
<li>必须是整数s，否则向下取整。</li>
<li>转场 前后必须紧挨着两个不为 Empty 的元素。</li>
<li>转场 Duration 必须小于前一个元素的 Duration，同时必须小于后一个元素的 Duration。</li>
<li>进行转场处理的两个元素，第二个元素在轨道上的起始时间会自动调整为前一个元素的结束时间减去转场的 Duration。</li>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取转场操作列表。
默认：淡入淡出。
注意：图像转场操作和音频转场操作各自最多支持一个。
                     * @return Transitions 转场操作列表。
默认：淡入淡出。
注意：图像转场操作和音频转场操作各自最多支持一个。
                     * 
                     */
                    std::vector<ComposeTransitionOperation> GetTransitions() const;

                    /**
                     * 设置转场操作列表。
默认：淡入淡出。
注意：图像转场操作和音频转场操作各自最多支持一个。
                     * @param _transitions 转场操作列表。
默认：淡入淡出。
注意：图像转场操作和音频转场操作各自最多支持一个。
                     * 
                     */
                    void SetTransitions(const std::vector<ComposeTransitionOperation>& _transitions);

                    /**
                     * 判断参数 Transitions 是否已赋值
                     * @return Transitions 是否已赋值
                     * 
                     */
                    bool TransitionsHasBeenSet() const;

                private:

                    /**
                     * 元素时长，时间支持：<li>以 s 结尾，表示时间点单位为秒，如 3s 表示时间点为第3秒。</li>
默认：1s
注意：
<li>必须是整数s，否则向下取整。</li>
<li>转场 前后必须紧挨着两个不为 Empty 的元素。</li>
<li>转场 Duration 必须小于前一个元素的 Duration，同时必须小于后一个元素的 Duration。</li>
<li>进行转场处理的两个元素，第二个元素在轨道上的起始时间会自动调整为前一个元素的结束时间减去转场的 Duration。</li>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 转场操作列表。
默认：淡入淡出。
注意：图像转场操作和音频转场操作各自最多支持一个。
                     */
                    std::vector<ComposeTransitionOperation> m_transitions;
                    bool m_transitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONITEM_H_
