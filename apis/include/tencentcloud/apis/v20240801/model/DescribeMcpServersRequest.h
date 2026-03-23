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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeMcpServers请求参数结构体
                */
                class DescribeMcpServersRequest : public AbstractModel
                {
                public:
                    DescribeMcpServersRequest();
                    ~DescribeMcpServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取状态数组：normal正常状态，disabled下线状态
                     * @return Statuses 状态数组：normal正常状态，disabled下线状态
                     * 
                     */
                    std::vector<std::string> GetStatuses() const;

                    /**
                     * 设置状态数组：normal正常状态，disabled下线状态
                     * @param _statuses 状态数组：normal正常状态，disabled下线状态
                     * 
                     */
                    void SetStatuses(const std::vector<std::string>& _statuses);

                    /**
                     * 判断参数 Statuses 是否已赋值
                     * @return Statuses 是否已赋值
                     * 
                     */
                    bool StatusesHasBeenSet() const;

                    /**
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取服务ID数组
                     * @return IDs 服务ID数组
                     * 
                     */
                    std::vector<std::string> GetIDs() const;

                    /**
                     * 设置服务ID数组
                     * @param _iDs 服务ID数组
                     * 
                     */
                    void SetIDs(const std::vector<std::string>& _iDs);

                    /**
                     * 判断参数 IDs 是否已赋值
                     * @return IDs 是否已赋值
                     * 
                     */
                    bool IDsHasBeenSet() const;

                    /**
                     * 获取模式：proxy代理模式； wrap封装模式；
                     * @return Modes 模式：proxy代理模式； wrap封装模式；
                     * 
                     */
                    std::vector<std::string> GetModes() const;

                    /**
                     * 设置模式：proxy代理模式； wrap封装模式；
                     * @param _modes 模式：proxy代理模式； wrap封装模式；
                     * 
                     */
                    void SetModes(const std::vector<std::string>& _modes);

                    /**
                     * 判断参数 Modes 是否已赋值
                     * @return Modes 是否已赋值
                     * 
                     */
                    bool ModesHasBeenSet() const;

                    /**
                     * 获取绑定的安全规则ID
                     * @return McpSecurityRuleID 绑定的安全规则ID
                     * 
                     */
                    std::string GetMcpSecurityRuleID() const;

                    /**
                     * 设置绑定的安全规则ID
                     * @param _mcpSecurityRuleID 绑定的安全规则ID
                     * 
                     */
                    void SetMcpSecurityRuleID(const std::string& _mcpSecurityRuleID);

                    /**
                     * 判断参数 McpSecurityRuleID 是否已赋值
                     * @return McpSecurityRuleID 是否已赋值
                     * 
                     */
                    bool McpSecurityRuleIDHasBeenSet() const;

                    /**
                     * 获取绑定安全规则的处置动作（填写时McpSecurityRuleID得必填）
                     * @return McpSecurityRuleAct 绑定安全规则的处置动作（填写时McpSecurityRuleID得必填）
                     * 
                     */
                    std::string GetMcpSecurityRuleAct() const;

                    /**
                     * 设置绑定安全规则的处置动作（填写时McpSecurityRuleID得必填）
                     * @param _mcpSecurityRuleAct 绑定安全规则的处置动作（填写时McpSecurityRuleID得必填）
                     * 
                     */
                    void SetMcpSecurityRuleAct(const std::string& _mcpSecurityRuleAct);

                    /**
                     * 判断参数 McpSecurityRuleAct 是否已赋值
                     * @return McpSecurityRuleAct 是否已赋值
                     * 
                     */
                    bool McpSecurityRuleActHasBeenSet() const;

                    /**
                     * 获取已绑定插件id
                     * @return PluginID 已绑定插件id
                     * 
                     */
                    std::string GetPluginID() const;

                    /**
                     * 设置已绑定插件id
                     * @param _pluginID 已绑定插件id
                     * 
                     */
                    void SetPluginID(const std::string& _pluginID);

                    /**
                     * 判断参数 PluginID 是否已赋值
                     * @return PluginID 是否已赋值
                     * 
                     */
                    bool PluginIDHasBeenSet() const;

                private:

                    /**
                     * 分页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 状态数组：normal正常状态，disabled下线状态
                     */
                    std::vector<std::string> m_statuses;
                    bool m_statusesHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 服务ID数组
                     */
                    std::vector<std::string> m_iDs;
                    bool m_iDsHasBeenSet;

                    /**
                     * 模式：proxy代理模式； wrap封装模式；
                     */
                    std::vector<std::string> m_modes;
                    bool m_modesHasBeenSet;

                    /**
                     * 绑定的安全规则ID
                     */
                    std::string m_mcpSecurityRuleID;
                    bool m_mcpSecurityRuleIDHasBeenSet;

                    /**
                     * 绑定安全规则的处置动作（填写时McpSecurityRuleID得必填）
                     */
                    std::string m_mcpSecurityRuleAct;
                    bool m_mcpSecurityRuleActHasBeenSet;

                    /**
                     * 已绑定插件id
                     */
                    std::string m_pluginID;
                    bool m_pluginIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEMCPSERVERSREQUEST_H_
