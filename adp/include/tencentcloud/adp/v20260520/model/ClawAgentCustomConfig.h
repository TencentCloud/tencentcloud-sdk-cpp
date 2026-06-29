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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCUSTOMCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCUSTOMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ClawAgent调用方自定义配置开关集合
                */
                class ClawAgentCustomConfig : public AbstractModel
                {
                public:
                    ClawAgentCustomConfig();
                    ~ClawAgentCustomConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否允许C端用户在对话时动态传入自定义Agent配置</p>
                     * @return Enabled <p>是否允许C端用户在对话时动态传入自定义Agent配置</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否允许C端用户在对话时动态传入自定义Agent配置</p>
                     * @param _enabled <p>是否允许C端用户在对话时动态传入自定义Agent配置</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>是否允许C端用户在对话时动态传入自定义Agent配置</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CLAWAGENTCUSTOMCONFIG_H_
