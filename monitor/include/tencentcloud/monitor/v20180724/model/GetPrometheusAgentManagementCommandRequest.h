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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDREQUEST_H_

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
                * GetPrometheusAgentManagementCommand请求参数结构体
                */
                class GetPrometheusAgentManagementCommandRequest : public AbstractModel
                {
                public:
                    GetPrometheusAgentManagementCommandRequest();
                    ~GetPrometheusAgentManagementCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param InstanceId Prometheus 实例 ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Prometheus Agent ID
                     * @return AgentId Prometheus Agent ID
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Prometheus Agent ID
                     * @param AgentId Prometheus Agent ID
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Prometheus Agent ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GETPROMETHEUSAGENTMANAGEMENTCOMMANDREQUEST_H_
