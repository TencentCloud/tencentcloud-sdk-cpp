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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAgent.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusAgents返回参数结构体
                */
                class DescribePrometheusAgentsResponse : public AbstractModel
                {
                public:
                    DescribePrometheusAgentsResponse();
                    ~DescribePrometheusAgentsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentSet Agent 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrometheusAgent> GetAgentSet() const;

                    /**
                     * 判断参数 AgentSet 是否已赋值
                     * @return AgentSet 是否已赋值
                     * 
                     */
                    bool AgentSetHasBeenSet() const;

                    /**
                     * 获取Agent 总量
                     * @return TotalCount Agent 总量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Agent 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrometheusAgent> m_agentSet;
                    bool m_agentSetHasBeenSet;

                    /**
                     * Agent 总量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_
