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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TOOLCONFIGDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TOOLCONFIGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/BindMcpSecurityRuleDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 工具级别配置
                */
                class ToolConfigDTO : public AbstractModel
                {
                public:
                    ToolConfigDTO();
                    ~ToolConfigDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolName 工具名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置工具名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolName 工具名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取是否开启限流配置
                     * @return InvokeLimitConfigStatus 是否开启限流配置
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置是否开启限流配置
                     * @param _invokeLimitConfigStatus 是否开启限流配置
                     * 
                     */
                    void SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus);

                    /**
                     * 判断参数 InvokeLimitConfigStatus 是否已赋值
                     * @return InvokeLimitConfigStatus 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigStatusHasBeenSet() const;

                    /**
                     * 获取限流配置
                     * @return InvokeLimitConfig 限流配置
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置限流配置
                     * @param _invokeLimitConfig 限流配置
                     * 
                     */
                    void SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig);

                    /**
                     * 判断参数 InvokeLimitConfig 是否已赋值
                     * @return InvokeLimitConfig 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigHasBeenSet() const;

                    /**
                     * 获取绑定安全规则
                     * @return McpSecurityRules 绑定安全规则
                     * 
                     */
                    std::vector<BindMcpSecurityRuleDTO> GetMcpSecurityRules() const;

                    /**
                     * 设置绑定安全规则
                     * @param _mcpSecurityRules 绑定安全规则
                     * 
                     */
                    void SetMcpSecurityRules(const std::vector<BindMcpSecurityRuleDTO>& _mcpSecurityRules);

                    /**
                     * 判断参数 McpSecurityRules 是否已赋值
                     * @return McpSecurityRules 是否已赋值
                     * 
                     */
                    bool McpSecurityRulesHasBeenSet() const;

                private:

                    /**
                     * 工具名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 是否开启限流配置
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * 限流配置
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * 绑定安全规则
                     */
                    std::vector<BindMcpSecurityRuleDTO> m_mcpSecurityRules;
                    bool m_mcpSecurityRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TOOLCONFIGDTO_H_
