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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeExternalAgent请求参数结构体
                */
                class DescribeExternalAgentRequest : public AbstractModel
                {
                public:
                    DescribeExternalAgentRequest();
                    ~DescribeExternalAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TMA managed agent 业务 ID（CloudAgentID）</p>
                     * @return AgentId <p>TMA managed agent 业务 ID（CloudAgentID）</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>TMA managed agent 业务 ID（CloudAgentID）</p>
                     * @param _agentId <p>TMA managed agent 业务 ID（CloudAgentID）</p>
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
                     * 获取<p>已绑定的外部 A2A agent ID</p>
                     * @return A2AAgentId <p>已绑定的外部 A2A agent ID</p>
                     * 
                     */
                    std::string GetA2AAgentId() const;

                    /**
                     * 设置<p>已绑定的外部 A2A agent ID</p>
                     * @param _a2AAgentId <p>已绑定的外部 A2A agent ID</p>
                     * 
                     */
                    void SetA2AAgentId(const std::string& _a2AAgentId);

                    /**
                     * 判断参数 A2AAgentId 是否已赋值
                     * @return A2AAgentId 是否已赋值
                     * 
                     */
                    bool A2AAgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>TMA managed agent 业务 ID（CloudAgentID）</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>已绑定的外部 A2A agent ID</p>
                     */
                    std::string m_a2AAgentId;
                    bool m_a2AAgentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTREQUEST_H_
