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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDDNA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDDNA_H_

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
                * 大模型解析DNA解析配置
                */
                class LLMComprehendDNA : public AbstractModel
                {
                public:
                    LLMComprehendDNA();
                    ~LLMComprehendDNA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DNA解析任务开关</p><p>枚举值：</p><ul><li>ON： 开启DNA解析任务</li><li>OFF： 关闭DNA解析任务</li></ul><p>默认值：OFF</p>
                     * @return Switch <p>DNA解析任务开关</p><p>枚举值：</p><ul><li>ON： 开启DNA解析任务</li><li>OFF： 关闭DNA解析任务</li></ul><p>默认值：OFF</p>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>DNA解析任务开关</p><p>枚举值：</p><ul><li>ON： 开启DNA解析任务</li><li>OFF： 关闭DNA解析任务</li></ul><p>默认值：OFF</p>
                     * @param _switch <p>DNA解析任务开关</p><p>枚举值：</p><ul><li>ON： 开启DNA解析任务</li><li>OFF： 关闭DNA解析任务</li></ul><p>默认值：OFF</p>
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
                     * <p>DNA解析任务开关</p><p>枚举值：</p><ul><li>ON： 开启DNA解析任务</li><li>OFF： 关闭DNA解析任务</li></ul><p>默认值：OFF</p>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDDNA_H_
