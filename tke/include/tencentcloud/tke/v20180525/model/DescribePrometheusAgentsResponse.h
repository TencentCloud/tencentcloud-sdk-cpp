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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAgentOverview.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
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
                     * 获取被关联集群信息
                     * @return Agents 被关联集群信息
                     * 
                     */
                    std::vector<PrometheusAgentOverview> GetAgents() const;

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     * 
                     */
                    bool AgentsHasBeenSet() const;

                    /**
                     * 获取被关联集群总量
                     * @return Total 被关联集群总量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 被关联集群信息
                     */
                    std::vector<PrometheusAgentOverview> m_agents;
                    bool m_agentsHasBeenSet;

                    /**
                     * 被关联集群总量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEPROMETHEUSAGENTSRESPONSE_H_
