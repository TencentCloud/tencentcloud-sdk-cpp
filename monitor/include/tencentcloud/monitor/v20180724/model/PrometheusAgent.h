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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * prometheus agent
                */
                class PrometheusAgent : public AbstractModel
                {
                public:
                    PrometheusAgent();
                    ~PrometheusAgent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Agent 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent 名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Agent 名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Agent ID
                     * @return AgentId Agent ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent ID
                     * @param _agentId Agent ID
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
                     * 获取Agent IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv4 Agent IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpv4() const;

                    /**
                     * 设置Agent IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv4 Agent IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpv4(const std::string& _ipv4);

                    /**
                     * 判断参数 Ipv4 是否已赋值
                     * @return Ipv4 是否已赋值
                     * 
                     */
                    bool Ipv4HasBeenSet() const;

                    /**
                     * 获取心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeartbeatTime 心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeartbeatTime() const;

                    /**
                     * 设置心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heartbeatTime 心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeartbeatTime(const std::string& _heartbeatTime);

                    /**
                     * 判断参数 HeartbeatTime 是否已赋值
                     * @return HeartbeatTime 是否已赋值
                     * 
                     */
                    bool HeartbeatTimeHasBeenSet() const;

                    /**
                     * 获取最近一次错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastError 最近一次错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastError() const;

                    /**
                     * 设置最近一次错误
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastError 最近一次错误
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastError(const std::string& _lastError);

                    /**
                     * 判断参数 LastError 是否已赋值
                     * @return LastError 是否已赋值
                     * 
                     */
                    bool LastErrorHasBeenSet() const;

                    /**
                     * 获取Agent 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentVersion Agent 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置Agent 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentVersion Agent 版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                    /**
                     * 获取Agent 状态
                     * @return Status Agent 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Agent 状态
                     * @param _status Agent 状态
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
                     * Agent 名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Agent IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipv4;
                    bool m_ipv4HasBeenSet;

                    /**
                     * 心跳时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_heartbeatTime;
                    bool m_heartbeatTimeHasBeenSet;

                    /**
                     * 最近一次错误
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastError;
                    bool m_lastErrorHasBeenSet;

                    /**
                     * Agent 版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * Agent 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENT_H_
