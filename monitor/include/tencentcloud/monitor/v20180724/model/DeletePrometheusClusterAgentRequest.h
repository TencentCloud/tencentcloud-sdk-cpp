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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCLUSTERAGENTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCLUSTERAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusAgentInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeletePrometheusClusterAgent请求参数结构体
                */
                class DeletePrometheusClusterAgentRequest : public AbstractModel
                {
                public:
                    DeletePrometheusClusterAgentRequest();
                    ~DeletePrometheusClusterAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取agent列表
                     * @return Agents agent列表
                     * 
                     */
                    std::vector<PrometheusAgentInfo> GetAgents() const;

                    /**
                     * 设置agent列表
                     * @param _agents agent列表
                     * 
                     */
                    void SetAgents(const std::vector<PrometheusAgentInfo>& _agents);

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     * 
                     */
                    bool AgentsHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * agent列表
                     */
                    std::vector<PrometheusAgentInfo> m_agents;
                    bool m_agentsHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSCLUSTERAGENTREQUEST_H_
