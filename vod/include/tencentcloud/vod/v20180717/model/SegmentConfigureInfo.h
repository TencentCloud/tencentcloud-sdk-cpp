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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEGMENTCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEGMENTCONFIGUREINFO_H_

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
                * 视频拆条任务识别控制参数
                */
                class SegmentConfigureInfo : public AbstractModel
                {
                public:
                    SegmentConfigureInfo();
                    ~SegmentConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频拆条识别任务开关，可选值：
<li>ON：开启智能视频拆条识别任务；</li>
<li>OFF：关闭智能视频拆条识别任务。</li>
                     * @return Switch 视频拆条识别任务开关，可选值：
<li>ON：开启智能视频拆条识别任务；</li>
<li>OFF：关闭智能视频拆条识别任务。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置视频拆条识别任务开关，可选值：
<li>ON：开启智能视频拆条识别任务；</li>
<li>OFF：关闭智能视频拆条识别任务。</li>
                     * @param _switch 视频拆条识别任务开关，可选值：
<li>ON：开启智能视频拆条识别任务；</li>
<li>OFF：关闭智能视频拆条识别任务。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 视频拆条识别任务开关，可选值：
<li>ON：开启智能视频拆条识别任务；</li>
<li>OFF：关闭智能视频拆条识别任务。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEGMENTCONFIGUREINFO_H_
