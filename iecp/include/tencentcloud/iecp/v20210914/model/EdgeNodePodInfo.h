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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 边缘节点Pod信息
                */
                class EdgeNodePodInfo : public AbstractModel
                {
                public:
                    EdgeNodePodInfo();
                    ~EdgeNodePodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Pod名称
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
                     * 获取Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取所在节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeIp 所在节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置所在节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeIp 所在节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                    /**
                     * 获取实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryRequest Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryRequest Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemoryRequest(const std::string& _memoryRequest);

                    /**
                     * 判断参数 MemoryRequest 是否已赋值
                     * @return MemoryRequest 是否已赋值
                     * 
                     */
                    bool MemoryRequestHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取工作负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkloadType 工作负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 设置工作负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workloadType 工作负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkloadType(const std::string& _workloadType);

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkloadName 工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workloadName 工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkloadName(const std::string& _workloadName);

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const uint64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                private:

                    /**
                     * Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Pod状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 所在节点IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                    /**
                     * 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 工作负载类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * 工作负载名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODINFO_H_
