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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_

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
                * UpdatePrometheusAgentStatus请求参数结构体
                */
                class UpdatePrometheusAgentStatusRequest : public AbstractModel
                {
                public:
                    UpdatePrometheusAgentStatusRequest();
                    ~UpdatePrometheusAgentStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param _instanceId Prometheus 实例 ID
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
                     * 获取Agent ID 列表，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * @return AgentIds Agent ID 列表，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * 
                     */
                    std::vector<std::string> GetAgentIds() const;

                    /**
                     * 设置Agent ID 列表，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * @param _agentIds Agent ID 列表，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     * 
                     */
                    void SetAgentIds(const std::vector<std::string>& _agentIds);

                    /**
                     * 判断参数 AgentIds 是否已赋值
                     * @return AgentIds 是否已赋值
                     * 
                     */
                    bool AgentIdsHasBeenSet() const;

                    /**
                     * 获取要更新的状态
<li> 1= 开启 </li>
<li> 2= 关闭 </li>
                     * @return Status 要更新的状态
<li> 1= 开启 </li>
<li> 2= 关闭 </li>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置要更新的状态
<li> 1= 开启 </li>
<li> 2= 关闭 </li>
                     * @param _status 要更新的状态
<li> 1= 开启 </li>
<li> 2= 关闭 </li>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent ID 列表，例如：agent-abcd1234，可在控制台 Agent 管理中获取
                     */
                    std::vector<std::string> m_agentIds;
                    bool m_agentIdsHasBeenSet;

                    /**
                     * 要更新的状态
<li> 1= 开启 </li>
<li> 2= 关闭 </li>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEPROMETHEUSAGENTSTATUSREQUEST_H_
