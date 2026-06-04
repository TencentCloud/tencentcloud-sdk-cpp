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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ToolBilling.h>
#include <tencentcloud/adp/v20260520/model/ToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 插件的工具信息
                */
                class Tool : public AbstractModel
                {
                public:
                    Tool();
                    ~Tool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具描述信息
                     * @return Description 工具描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工具描述信息
                     * @param _description 工具描述信息
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
                     * 获取工具名称
                     * @return Name 工具名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置工具名称
                     * @param _name 工具名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取插件id
                     * @return PluginId 插件id
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件id
                     * @param _pluginId 插件id
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取工具id
                     * @return ToolId 工具id
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置工具id
                     * @param _toolId 工具id
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取工具计费信息
                     * @return Billing 工具计费信息
                     * 
                     */
                    ToolBilling GetBilling() const;

                    /**
                     * 设置工具计费信息
                     * @param _billing 工具计费信息
                     * 
                     */
                    void SetBilling(const ToolBilling& _billing);

                    /**
                     * 判断参数 Billing 是否已赋值
                     * @return Billing 是否已赋值
                     * 
                     */
                    bool BillingHasBeenSet() const;

                    /**
                     * 获取工具调用次数
                     * @return CallCount 工具调用次数
                     * 
                     */
                    uint64_t GetCallCount() const;

                    /**
                     * 设置工具调用次数
                     * @param _callCount 工具调用次数
                     * 
                     */
                    void SetCallCount(const uint64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： READ_ONLY</li><li>2： WRITE_DELETE</li></ul>
                     * @return ToolAccessMode <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： READ_ONLY</li><li>2： WRITE_DELETE</li></ul>
                     * 
                     */
                    int64_t GetToolAccessMode() const;

                    /**
                     * 设置<p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： READ_ONLY</li><li>2： WRITE_DELETE</li></ul>
                     * @param _toolAccessMode <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： READ_ONLY</li><li>2： WRITE_DELETE</li></ul>
                     * 
                     */
                    void SetToolAccessMode(const int64_t& _toolAccessMode);

                    /**
                     * 判断参数 ToolAccessMode 是否已赋值
                     * @return ToolAccessMode 是否已赋值
                     * 
                     */
                    bool ToolAccessModeHasBeenSet() const;

                    /**
                     * 获取工具配置
                     * @return ToolConfig 工具配置
                     * 
                     */
                    ToolConfig GetToolConfig() const;

                    /**
                     * 设置工具配置
                     * @param _toolConfig 工具配置
                     * 
                     */
                    void SetToolConfig(const ToolConfig& _toolConfig);

                    /**
                     * 判断参数 ToolConfig 是否已赋值
                     * @return ToolConfig 是否已赋值
                     * 
                     */
                    bool ToolConfigHasBeenSet() const;

                private:

                    /**
                     * 工具描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工具名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 插件id
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 工具id
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * 工具计费信息
                     */
                    ToolBilling m_billing;
                    bool m_billingHasBeenSet;

                    /**
                     * 工具调用次数
                     */
                    uint64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>工具访问模式</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： READ_ONLY</li><li>2： WRITE_DELETE</li></ul>
                     */
                    int64_t m_toolAccessMode;
                    bool m_toolAccessModeHasBeenSet;

                    /**
                     * 工具配置
                     */
                    ToolConfig m_toolConfig;
                    bool m_toolConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOL_H_
