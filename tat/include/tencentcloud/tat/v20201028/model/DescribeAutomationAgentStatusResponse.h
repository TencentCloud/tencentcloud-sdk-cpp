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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEAUTOMATIONAGENTSTATUSRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEAUTOMATIONAGENTSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/AutomationAgentInfo.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeAutomationAgentStatus返回参数结构体
                */
                class DescribeAutomationAgentStatusResponse : public AbstractModel
                {
                public:
                    DescribeAutomationAgentStatusResponse();
                    ~DescribeAutomationAgentStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 信息列表。
                     * @return AutomationAgentSet Agent 信息列表。
                     * 
                     */
                    std::vector<AutomationAgentInfo> GetAutomationAgentSet() const;

                    /**
                     * 判断参数 AutomationAgentSet 是否已赋值
                     * @return AutomationAgentSet 是否已赋值
                     * 
                     */
                    bool AutomationAgentSetHasBeenSet() const;

                    /**
                     * 获取符合条件的 Agent 总数。
                     * @return TotalCount 符合条件的 Agent 总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Agent 信息列表。
                     */
                    std::vector<AutomationAgentInfo> m_automationAgentSet;
                    bool m_automationAgentSetHasBeenSet;

                    /**
                     * 符合条件的 Agent 总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEAUTOMATIONAGENTSTATUSRESPONSE_H_
