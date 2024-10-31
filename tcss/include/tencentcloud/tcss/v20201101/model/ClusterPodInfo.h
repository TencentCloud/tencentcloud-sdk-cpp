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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERPODINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERPODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 集群的pod详细信息
                */
                class ClusterPodInfo : public AbstractModel
                {
                public:
                    ClusterPodInfo();
                    ~ClusterPodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod名称.
                     * @return PodName Pod名称.
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称.
                     * @param _podName Pod名称.
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Pod状态
                     * @return Status Pod状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Pod状态
                     * @param _status Pod状态
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
                     * 获取Pod IP
                     * @return PodIP Pod IP
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod IP
                     * @param _podIP Pod IP
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取节点内网Ip
                     * @return NodeLanIP 节点内网Ip
                     * 
                     */
                    std::string GetNodeLanIP() const;

                    /**
                     * 设置节点内网Ip
                     * @param _nodeLanIP 节点内网Ip
                     * 
                     */
                    void SetNodeLanIP(const std::string& _nodeLanIP);

                    /**
                     * 判断参数 NodeLanIP 是否已赋值
                     * @return NodeLanIP 是否已赋值
                     * 
                     */
                    bool NodeLanIPHasBeenSet() const;

                    /**
                     * 获取所属的工作负载名字
                     * @return WorkloadName 所属的工作负载名字
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置所属的工作负载名字
                     * @param _workloadName 所属的工作负载名字
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
                     * 获取所属工作负载类型
                     * @return WorkloadKind 所属工作负载类型
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置所属工作负载类型
                     * @param _workloadKind 所属工作负载类型
                     * 
                     */
                    void SetWorkloadKind(const std::string& _workloadKind);

                    /**
                     * 判断参数 WorkloadKind 是否已赋值
                     * @return WorkloadKind 是否已赋值
                     * 
                     */
                    bool WorkloadKindHasBeenSet() const;

                    /**
                     * 获取所属集群名字
                     * @return ClusterName 所属集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置所属集群名字
                     * @param _clusterName 所属集群名字
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取所属集群ID
                     * @return ClusterId 所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置所属集群ID
                     * @param _clusterId 所属集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取所属命名空间
                     * @return Namespace 所属命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置所属命名空间
                     * @param _namespace 所属命名空间
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
                     * 获取所属地域
                     * @return Region 所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地域
                     * @param _region 所属地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取运行时间
                     * @return Age 运行时间
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置运行时间
                     * @param _age 运行时间
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return StartTime 创建时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置创建时间
                     * @param _startTime 创建时间
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
                     * @return Restarts 重启次数
                     * 
                     */
                    uint64_t GetRestarts() const;

                    /**
                     * 设置重启次数
                     * @param _restarts 重启次数
                     * 
                     */
                    void SetRestarts(const uint64_t& _restarts);

                    /**
                     * 判断参数 Restarts 是否已赋值
                     * @return Restarts 是否已赋值
                     * 
                     */
                    bool RestartsHasBeenSet() const;

                    /**
                     * 获取关联的service名字
                     * @return ServiceName 关联的service名字
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置关联的service名字
                     * @param _serviceName 关联的service名字
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取关联的service数量
                     * @return ServiceCount 关联的service数量
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置关联的service数量
                     * @param _serviceCount 关联的service数量
                     * 
                     */
                    void SetServiceCount(const uint64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取关联的容器名字
                     * @return ContainerName 关联的容器名字
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置关联的容器名字
                     * @param _containerName 关联的容器名字
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取关联的容器数量
                     * @return ContainerCount 关联的容器数量
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 设置关联的容器数量
                     * @param _containerCount 关联的容器数量
                     * 
                     */
                    void SetContainerCount(const uint64_t& _containerCount);

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取CPU占用率
                     * @return CPU CPU占用率
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU占用率
                     * @param _cPU CPU占用率
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存占用量
                     * @return Memory 内存占用量
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存占用量
                     * @param _memory 内存占用量
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Pod标签
                     * @return Labels Pod标签
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置Pod标签
                     * @param _labels Pod标签
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取集群状态
                     * @return ClusterStatus 集群状态
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置集群状态
                     * @param _clusterStatus 集群状态
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取工作负载标签
                     * @return WorkloadLabels 工作负载标签
                     * 
                     */
                    std::string GetWorkloadLabels() const;

                    /**
                     * 设置工作负载标签
                     * @param _workloadLabels 工作负载标签
                     * 
                     */
                    void SetWorkloadLabels(const std::string& _workloadLabels);

                    /**
                     * 判断参数 WorkloadLabels 是否已赋值
                     * @return WorkloadLabels 是否已赋值
                     * 
                     */
                    bool WorkloadLabelsHasBeenSet() const;

                    /**
                     * 获取容器Id
                     * @return ContainerId 容器Id
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器Id
                     * @param _containerId 容器Id
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机Id
                     * @return HostId 主机Id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机Id
                     * @param _hostId 主机Id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ClusterType 集群类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型
                     * @param _clusterType 集群类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return NodeName 节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _nodeName 节点名称
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取NORMAL：普通节点 SUPER：超级节点
                     * @return NodeType NORMAL：普通节点 SUPER：超级节点
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置NORMAL：普通节点 SUPER：超级节点
                     * @param _nodeType NORMAL：普通节点 SUPER：超级节点
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取计费核数
                     * @return ChargeCoresCnt 计费核数
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置计费核数
                     * @param _chargeCoresCnt 计费核数
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                private:

                    /**
                     * Pod名称.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Pod状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pod IP
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * 节点内网Ip
                     */
                    std::string m_nodeLanIP;
                    bool m_nodeLanIPHasBeenSet;

                    /**
                     * 所属的工作负载名字
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * 所属工作负载类型
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                    /**
                     * 所属集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 所属命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 运行时间
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 重启次数
                     */
                    uint64_t m_restarts;
                    bool m_restartsHasBeenSet;

                    /**
                     * 关联的service名字
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 关联的service数量
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 关联的容器名字
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 关联的容器数量
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * CPU占用率
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存占用量
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Pod标签
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 工作负载标签
                     */
                    std::string m_workloadLabels;
                    bool m_workloadLabelsHasBeenSet;

                    /**
                     * 容器Id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机Id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * NORMAL：普通节点 SUPER：超级节点
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 计费核数
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERPODINFO_H_
