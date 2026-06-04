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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolBasicConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 工具入参
                */
                class AgentToolConfig : public AbstractModel
                {
                public:
                    AgentToolConfig();
                    ~AgentToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工具配置</p>
                     * @return Config <p>工具配置</p>
                     * 
                     */
                    AgentToolBasicConfig GetConfig() const;

                    /**
                     * 设置<p>工具配置</p>
                     * @param _config <p>工具配置</p>
                     * 
                     */
                    void SetConfig(const AgentToolBasicConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>工具配置</p>
                     */
                    AgentToolBasicConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLCONFIG_H_
