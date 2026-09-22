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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ConnectorRefInput.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * CreateAgent请求参数结构体
                */
                class CreateAgentRequest : public AbstractModel
                {
                public:
                    CreateAgentRequest();
                    ~CreateAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 名称
                     * @return AgentName Agent 名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent 名称
                     * @param _agentName Agent 名称
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取Agent 描述
                     * @return Description Agent 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Agent 描述
                     * @param _description Agent 描述
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
                     * 获取头像 URL
                     * @return AvatarUrl 头像 URL
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像 URL
                     * @param _avatarUrl 头像 URL
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取模型标识
                     * @return Model 模型标识
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型标识
                     * @param _model 模型标识
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取Manifest v2.0 原文（JSON 字符串），作为 default 版本初始内容。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * @return Manifest Manifest v2.0 原文（JSON 字符串），作为 default 版本初始内容。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置Manifest v2.0 原文（JSON 字符串），作为 default 版本初始内容。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * @param _manifest Manifest v2.0 原文（JSON 字符串），作为 default 版本初始内容。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取该 Agent 最终绑定的连接器集合（全量覆盖语义）：缺省 = 不绑定连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * @return ConnectorSet 该 Agent 最终绑定的连接器集合（全量覆盖语义）：缺省 = 不绑定连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * 
                     */
                    std::vector<ConnectorRefInput> GetConnectorSet() const;

                    /**
                     * 设置该 Agent 最终绑定的连接器集合（全量覆盖语义）：缺省 = 不绑定连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * @param _connectorSet 该 Agent 最终绑定的连接器集合（全量覆盖语义）：缺省 = 不绑定连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     * 
                     */
                    void SetConnectorSet(const std::vector<ConnectorRefInput>& _connectorSet);

                    /**
                     * 判断参数 ConnectorSet 是否已赋值
                     * @return ConnectorSet 是否已赋值
                     * 
                     */
                    bool ConnectorSetHasBeenSet() const;

                    /**
                     * 获取绑定的 OneID 企业账号 ID。非空时必须是当前主账号已在企业授权表（t_managed_agent_enterprise_authorization）中授权的租户，否则返回 UnauthorizedOperation.AccountNotAuthorized。绑定后不可修改。TrimSpace 后长度 1~64 字符
                     * @return AccountId 绑定的 OneID 企业账号 ID。非空时必须是当前主账号已在企业授权表（t_managed_agent_enterprise_authorization）中授权的租户，否则返回 UnauthorizedOperation.AccountNotAuthorized。绑定后不可修改。TrimSpace 后长度 1~64 字符
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置绑定的 OneID 企业账号 ID。非空时必须是当前主账号已在企业授权表（t_managed_agent_enterprise_authorization）中授权的租户，否则返回 UnauthorizedOperation.AccountNotAuthorized。绑定后不可修改。TrimSpace 后长度 1~64 字符
                     * @param _accountId 绑定的 OneID 企业账号 ID。非空时必须是当前主账号已在企业授权表（t_managed_agent_enterprise_authorization）中授权的租户，否则返回 UnauthorizedOperation.AccountNotAuthorized。绑定后不可修改。TrimSpace 后长度 1~64 字符
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * Agent 名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * Agent 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 头像 URL
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 模型标识
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * Manifest v2.0 原文（JSON 字符串），作为 default 版本初始内容。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 该 Agent 最终绑定的连接器集合（全量覆盖语义）：缺省 = 不绑定连接器；非空 = 物化为 manifest v2 mcp_servers 网关条目。ConnectorSet 非空时 Manifest 不可为空，否则返回 InvalidParameter
                     */
                    std::vector<ConnectorRefInput> m_connectorSet;
                    bool m_connectorSetHasBeenSet;

                    /**
                     * 绑定的 OneID 企业账号 ID。非空时必须是当前主账号已在企业授权表（t_managed_agent_enterprise_authorization）中授权的租户，否则返回 UnauthorizedOperation.AccountNotAuthorized。绑定后不可修改。TrimSpace 后长度 1~64 字符
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTREQUEST_H_
