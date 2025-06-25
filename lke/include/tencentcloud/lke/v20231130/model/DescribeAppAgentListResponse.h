/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPAGENTLISTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPAGENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Agent.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeAppAgentList返回参数结构体
                */
                class DescribeAppAgentListResponse : public AbstractModel
                {
                public:
                    DescribeAppAgentListResponse();
                    ~DescribeAppAgentListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取入口启动AgentID
                     * @return StaringAgentId 入口启动AgentID
                     * 
                     */
                    std::string GetStaringAgentId() const;

                    /**
                     * 判断参数 StaringAgentId 是否已赋值
                     * @return StaringAgentId 是否已赋值
                     * 
                     */
                    bool StaringAgentIdHasBeenSet() const;

                    /**
                     * 获取应用Agent信息列表
                     * @return Agents 应用Agent信息列表
                     * 
                     */
                    std::vector<Agent> GetAgents() const;

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     * 
                     */
                    bool AgentsHasBeenSet() const;

                private:

                    /**
                     * 入口启动AgentID
                     */
                    std::string m_staringAgentId;
                    bool m_staringAgentIdHasBeenSet;

                    /**
                     * 应用Agent信息列表
                     */
                    std::vector<Agent> m_agents;
                    bool m_agentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPAGENTLISTRESPONSE_H_
