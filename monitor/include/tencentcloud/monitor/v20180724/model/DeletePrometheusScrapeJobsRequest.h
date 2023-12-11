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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSSCRAPEJOBSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSSCRAPEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeletePrometheusScrapeJobs请求参数结构体
                */
                class DeletePrometheusScrapeJobsRequest : public AbstractModel
                {
                public:
                    DeletePrometheusScrapeJobsRequest();
                    ~DeletePrometheusScrapeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Agent ID(可通过 DescribePrometheusAgents 接口获取)
                     * @return AgentId Agent ID(可通过 DescribePrometheusAgents 接口获取)
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID(可通过 DescribePrometheusAgents 接口获取)
                     * @param _agentId Agent ID(可通过 DescribePrometheusAgents 接口获取)
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
                     * 获取任务 ID 列表(可通过 DescribePrometheusScrapeJobs 接口获取)
                     * @return JobIds 任务 ID 列表(可通过 DescribePrometheusScrapeJobs 接口获取)
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置任务 ID 列表(可通过 DescribePrometheusScrapeJobs 接口获取)
                     * @param _jobIds 任务 ID 列表(可通过 DescribePrometheusScrapeJobs 接口获取)
                     * 
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent ID(可通过 DescribePrometheusAgents 接口获取)
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 任务 ID 列表(可通过 DescribePrometheusScrapeJobs 接口获取)
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSSCRAPEJOBSREQUEST_H_
