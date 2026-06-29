/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>Agent 名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>Agent 名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent 名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>Agent 名</p>
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
                     * 获取<p>Agent ID</p>
                     * @return AgentId <p>Agent ID</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID</p>
                     * @param _agentId <p>Agent ID</p>
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
                     * 获取<p>实例 ID</p>
                     * @return InstanceId <p>实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID</p>
                     * @param _instanceId <p>实例 ID</p>
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
                     * 获取<p>Agent IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ipv4 <p>Agent IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpv4() const;

                    /**
                     * 设置<p>Agent IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipv4 <p>Agent IP</p>
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
                     * 获取<p>心跳时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeartbeatTime <p>心跳时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeartbeatTime() const;

                    /**
                     * 设置<p>心跳时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heartbeatTime <p>心跳时间</p>
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
                     * 获取<p>最近一次错误</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastError <p>最近一次错误</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastError() const;

                    /**
                     * 设置<p>最近一次错误</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastError <p>最近一次错误</p>
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
                     * 获取<p>Agent 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentVersion <p>Agent 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置<p>Agent 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentVersion <p>Agent 版本</p>
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
                     * 获取<p>Agent 状态</p>
                     * @return Status <p>Agent 状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Agent 状态</p>
                     * @param _status <p>Agent 状态</p>
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
                     * <p>Agent 名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Agent ID</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Agent IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipv4;
                    bool m_ipv4HasBeenSet;

                    /**
                     * <p>心跳时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_heartbeatTime;
                    bool m_heartbeatTimeHasBeenSet;

                    /**
                     * <p>最近一次错误</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastError;
                    bool m_lastErrorHasBeenSet;

                    /**
                     * <p>Agent 版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                    /**
                     * <p>Agent 状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSAGENT_H_
