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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/RoutingItem.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/A2AConfig.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * CreateAgent返回参数结构体
                */
                class CreateAgentResponse : public AbstractModel
                {
                public:
                    CreateAgentResponse();
                    ~CreateAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Agent 名称
                     * @return AgentName Agent 名称
                     * 
                     */
                    std::string GetAgentName() const;

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
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取是否调试 Agent
                     * @return IsDebug 是否调试 Agent
                     * 
                     */
                    bool GetIsDebug() const;

                    /**
                     * 判断参数 IsDebug 是否已赋值
                     * @return IsDebug 是否已赋值
                     * 
                     */
                    bool IsDebugHasBeenSet() const;

                    /**
                     * 获取创建时间（RFC3339）
                     * @return CreatedTime 创建时间（RFC3339）
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间（RFC3339）
                     * @return ModifiedTime 更新时间（RFC3339）
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）
                     * @return RoutingSet 流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）
                     * 
                     */
                    std::vector<RoutingItem> GetRoutingSet() const;

                    /**
                     * 判断参数 RoutingSet 是否已赋值
                     * @return RoutingSet 是否已赋值
                     * 
                     */
                    bool RoutingSetHasBeenSet() const;

                    /**
                     * 获取A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）
                     * @return A2AConfig A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）
                     * 
                     */
                    A2AConfig GetA2AConfig() const;

                    /**
                     * 判断参数 A2AConfig 是否已赋值
                     * @return A2AConfig 是否已赋值
                     * 
                     */
                    bool A2AConfigHasBeenSet() const;

                    /**
                     * 获取绑定的 OneID 企业账号 ID。允许为空：未绑定的存量与新建 Agent 该字段缺省，绑定后回显绑定值
                     * @return AccountId 绑定的 OneID 企业账号 ID。允许为空：未绑定的存量与新建 Agent 该字段缺省，绑定后回显绑定值
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

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
                     * 是否调试 Agent
                     */
                    bool m_isDebug;
                    bool m_isDebugHasBeenSet;

                    /**
                     * 创建时间（RFC3339）
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间（RFC3339）
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）
                     */
                    std::vector<RoutingItem> m_routingSet;
                    bool m_routingSetHasBeenSet;

                    /**
                     * A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）
                     */
                    A2AConfig m_a2AConfig;
                    bool m_a2AConfigHasBeenSet;

                    /**
                     * 绑定的 OneID 企业账号 ID。允许为空：未绑定的存量与新建 Agent 该字段缺省，绑定后回显绑定值
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CREATEAGENTRESPONSE_H_
