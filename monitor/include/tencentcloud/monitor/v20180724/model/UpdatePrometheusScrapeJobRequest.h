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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_

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
                * UpdatePrometheusScrapeJob请求参数结构体
                */
                class UpdatePrometheusScrapeJobRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusScrapeJobRequest();
                    ~UpdatePrometheusScrapeJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param InstanceId 实例 ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Agent ID
                     * @return AgentId Agent ID
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID
                     * @param AgentId Agent ID
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取抓取任务 ID
                     * @return JobId 抓取任务 ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置抓取任务 ID
                     * @param JobId 抓取任务 ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取抓取任务配置
                     * @return Config 抓取任务配置
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置抓取任务配置
                     * @param Config 抓取任务配置
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 抓取任务 ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 抓取任务配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSSCRAPEJOBREQUEST_H_
