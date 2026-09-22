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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTROUTINGREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTROUTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/RoutingItem.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * ModifyAgentRouting请求参数结构体
                */
                class ModifyAgentRoutingRequest : public AbstractModel
                {
                public:
                    ModifyAgentRoutingRequest();
                    ~ModifyAgentRoutingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID
                     * @param _agentId Agent 业务 ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取路由配置，覆盖式写入（与出参 AgentInfo.RoutingSet 命名对齐）
                     * @return RoutingSet 路由配置，覆盖式写入（与出参 AgentInfo.RoutingSet 命名对齐）
                     * 
                     */
                    std::vector<RoutingItem> GetRoutingSet() const;

                    /**
                     * 设置路由配置，覆盖式写入（与出参 AgentInfo.RoutingSet 命名对齐）
                     * @param _routingSet 路由配置，覆盖式写入（与出参 AgentInfo.RoutingSet 命名对齐）
                     * 
                     */
                    void SetRoutingSet(const std::vector<RoutingItem>& _routingSet);

                    /**
                     * 判断参数 RoutingSet 是否已赋值
                     * @return RoutingSet 是否已赋值
                     * 
                     */
                    bool RoutingSetHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 路由配置，覆盖式写入（与出参 AgentInfo.RoutingSet 命名对齐）
                     */
                    std::vector<RoutingItem> m_routingSet;
                    bool m_routingSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTROUTINGREQUEST_H_
