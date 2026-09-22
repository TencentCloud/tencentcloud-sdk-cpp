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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGRESPONSE_H_

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
                * ModifyAgentA2AConfig返回参数结构体
                */
                class ModifyAgentA2AConfigResponse : public AbstractModel
                {
                public:
                    ModifyAgentA2AConfigResponse();
                    ~ModifyAgentA2AConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Agent 业务 ID</p>
                     * @return AgentId <p>Agent 业务 ID</p>
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
                     * 获取<p>Agent 名称</p>
                     * @return AgentName <p>Agent 名称</p>
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
                     * 获取<p>Agent 描述</p>
                     * @return Description <p>Agent 描述</p>
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
                     * 获取<p>头像 URL</p>
                     * @return AvatarUrl <p>头像 URL</p>
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
                     * 获取<p>是否调试 Agent</p>
                     * @return IsDebug <p>是否调试 Agent</p>
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
                     * 获取<p>创建时间（RFC3339）</p>
                     * @return CreatedTime <p>创建时间（RFC3339）</p>
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
                     * 获取<p>更新时间（RFC3339）</p>
                     * @return ModifiedTime <p>更新时间（RFC3339）</p>
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
                     * 获取<p>流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）</p>
                     * @return RoutingSet <p>流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）</p>
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
                     * 获取<p>A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）</p>
                     * @return A2AConfig <p>A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）</p>
                     * 
                     */
                    A2AConfig GetA2AConfig() const;

                    /**
                     * 判断参数 A2AConfig 是否已赋值
                     * @return A2AConfig 是否已赋值
                     * 
                     */
                    bool A2AConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Agent 业务 ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>Agent 名称</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>Agent 描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>头像 URL</p>
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * <p>是否调试 Agent</p>
                     */
                    bool m_isDebug;
                    bool m_isDebugHasBeenSet;

                    /**
                     * <p>创建时间（RFC3339）</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>更新时间（RFC3339）</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>流量路由配置（VersionId 恒为字符串，防 JS 精度丢失）</p>
                     */
                    std::vector<RoutingItem> m_routingSet;
                    bool m_routingSetHasBeenSet;

                    /**
                     * <p>A2A 对外互通配置与注册态（只读回显；原四个平铺字段收进结构）</p>
                     */
                    A2AConfig m_a2AConfig;
                    bool m_a2AConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTA2ACONFIGRESPONSE_H_
