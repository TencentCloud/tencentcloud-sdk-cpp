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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_

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
                * 视频编辑/合成任务 空白占位元素信息。
                */
                class ComposeEmptyItem : public AbstractModel
                {
                public:
                    ComposeEmptyItem();
                    ~ComposeEmptyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒。</li>
                     * @return Duration 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒。</li>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒。</li>
                     * @param _duration 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒。</li>
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
                     * 元素时长，时间支持：
<li>以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒。</li>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEEMPTYITEM_H_
