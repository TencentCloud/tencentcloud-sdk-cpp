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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTBUILTINTOOL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTBUILTINTOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentBuiltinToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 内置工具详情
                */
                class AgentBuiltinTool : public AbstractModel
                {
                public:
                    AgentBuiltinTool();
                    ~AgentBuiltinTool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内置工具基础配置</p>
                     * @return Config <p>内置工具基础配置</p>
                     * 
                     */
                    AgentBuiltinToolConfig GetConfig() const;

                    /**
                     * 设置<p>内置工具基础配置</p>
                     * @param _config <p>内置工具基础配置</p>
                     * 
                     */
                    void SetConfig(const AgentBuiltinToolConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>工具展示名称</p>
                     * @return DisplayName <p>工具展示名称</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>工具展示名称</p>
                     * @param _displayName <p>工具展示名称</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>工具描述</p>
                     * @return Description <p>工具描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>工具描述</p>
                     * @param _description <p>工具描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>计费标识</p><p>枚举值：</p><ul><li>0： 免费</li><li>1： 限时免费</li><li>2： 官方收费</li></ul>
                     * @return BillingType <p>计费标识</p><p>枚举值：</p><ul><li>0： 免费</li><li>1： 限时免费</li><li>2： 官方收费</li></ul>
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置<p>计费标识</p><p>枚举值：</p><ul><li>0： 免费</li><li>1： 限时免费</li><li>2： 官方收费</li></ul>
                     * @param _billingType <p>计费标识</p><p>枚举值：</p><ul><li>0： 免费</li><li>1： 限时免费</li><li>2： 官方收费</li></ul>
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * <p>内置工具基础配置</p>
                     */
                    AgentBuiltinToolConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>工具展示名称</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>工具描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>计费标识</p><p>枚举值：</p><ul><li>0： 免费</li><li>1： 限时免费</li><li>2： 官方收费</li></ul>
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTBUILTINTOOL_H_
