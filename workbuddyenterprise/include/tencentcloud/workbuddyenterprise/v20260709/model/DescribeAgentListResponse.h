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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentItem.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeAgentList返回参数结构体
                */
                class DescribeAgentListResponse : public AbstractModel
                {
                public:
                    DescribeAgentListResponse();
                    ~DescribeAgentListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的 Agent 总数
                     * @return TotalCount 符合条件的 Agent 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Agent 列表（分页后）；元素含 A2A / 公网 API 访问开关与地址、创建人 UIN、绑定的企业账号 ID
                     * @return AgentSet Agent 列表（分页后）；元素含 A2A / 公网 API 访问开关与地址、创建人 UIN、绑定的企业账号 ID
                     * 
                     */
                    std::vector<AgentItem> GetAgentSet() const;

                    /**
                     * 判断参数 AgentSet 是否已赋值
                     * @return AgentSet 是否已赋值
                     * 
                     */
                    bool AgentSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的 Agent 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Agent 列表（分页后）；元素含 A2A / 公网 API 访问开关与地址、创建人 UIN、绑定的企业账号 ID
                     */
                    std::vector<AgentItem> m_agentSet;
                    bool m_agentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTLISTRESPONSE_H_
