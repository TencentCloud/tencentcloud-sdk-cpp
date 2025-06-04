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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeClusterDetail返回参数结构体
                */
                class DescribeClusterDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterDetailResponse();
                    ~DescribeClusterDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取当前集群扫描任务的进度，100表示扫描完成.
                     * @return ScanTaskProgress 当前集群扫描任务的进度，100表示扫描完成.
                     * 
                     */
                    int64_t GetScanTaskProgress() const;

                    /**
                     * 判断参数 ScanTaskProgress 是否已赋值
                     * @return ScanTaskProgress 是否已赋值
                     * 
                     */
                    bool ScanTaskProgressHasBeenSet() const;

                    /**
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取运行时组件
                     * @return ContainerRuntime 运行时组件
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取集群节点数
                     * @return ClusterNodeNum 集群节点数
                     * 
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取集群状态 (Running 运行中 Creating 创建中 Abnormal 异常 )
                     * @return ClusterStatus 集群状态 (Running 运行中 Creating 创建中 Abnormal 异常 )
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群运行子状态
                     * @return ClusterSubStatus 集群运行子状态
                     * 
                     */
                    std::string GetClusterSubStatus() const;

                    /**
                     * 判断参数 ClusterSubStatus 是否已赋值
                     * @return ClusterSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterSubStatusHasBeenSet() const;

                    /**
                     * 获取集群类型：为托管集群MANAGED_CLUSTER、独立集群INDEPENDENT_CLUSTER
                     * @return ClusterType 集群类型：为托管集群MANAGED_CLUSTER、独立集群INDEPENDENT_CLUSTER
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取集群区域
                     * @return Region 集群区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取严重风险检查项的数量
                     * @return SeriousRiskCount 严重风险检查项的数量
                     * 
                     */
                    uint64_t GetSeriousRiskCount() const;

                    /**
                     * 判断参数 SeriousRiskCount 是否已赋值
                     * @return SeriousRiskCount 是否已赋值
                     * 
                     */
                    bool SeriousRiskCountHasBeenSet() const;

                    /**
                     * 获取高风险检查项的数量
                     * @return HighRiskCount 高风险检查项的数量
                     * 
                     */
                    uint64_t GetHighRiskCount() const;

                    /**
                     * 判断参数 HighRiskCount 是否已赋值
                     * @return HighRiskCount 是否已赋值
                     * 
                     */
                    bool HighRiskCountHasBeenSet() const;

                    /**
                     * 获取中风险检查项的数量
                     * @return MiddleRiskCount 中风险检查项的数量
                     * 
                     */
                    uint64_t GetMiddleRiskCount() const;

                    /**
                     * 判断参数 MiddleRiskCount 是否已赋值
                     * @return MiddleRiskCount 是否已赋值
                     * 
                     */
                    bool MiddleRiskCountHasBeenSet() const;

                    /**
                     * 获取提示风险检查项的数量
                     * @return HintRiskCount 提示风险检查项的数量
                     * 
                     */
                    uint64_t GetHintRiskCount() const;

                    /**
                     * 判断参数 HintRiskCount 是否已赋值
                     * @return HintRiskCount 是否已赋值
                     * 
                     */
                    bool HintRiskCountHasBeenSet() const;

                    /**
                     * 获取检查任务的状态
                     * @return CheckStatus 检查任务的状态
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取防御容器状态
                     * @return DefenderStatus 防御容器状态
                     * 
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 判断参数 DefenderStatus 是否已赋值
                     * @return DefenderStatus 是否已赋值
                     * 
                     */
                    bool DefenderStatusHasBeenSet() const;

                    /**
                     * 获取扫描任务创建时间
                     * @return TaskCreateTime 扫描任务创建时间
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取网络类型.PublicNetwork为公网类型,VPCNetwork为VPC网络
                     * @return NetworkType 网络类型.PublicNetwork为公网类型,VPCNetwork为VPC网络
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取API Server地址
                     * @return ApiServerAddress API Server地址
                     * 
                     */
                    std::string GetApiServerAddress() const;

                    /**
                     * 判断参数 ApiServerAddress 是否已赋值
                     * @return ApiServerAddress 是否已赋值
                     * 
                     */
                    bool ApiServerAddressHasBeenSet() const;

                    /**
                     * 获取节点数
                     * @return NodeCount 节点数
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取命名空间数
                     * @return NamespaceCount 命名空间数
                     * 
                     */
                    uint64_t GetNamespaceCount() const;

                    /**
                     * 判断参数 NamespaceCount 是否已赋值
                     * @return NamespaceCount 是否已赋值
                     * 
                     */
                    bool NamespaceCountHasBeenSet() const;

                    /**
                     * 获取工作负载数
                     * @return WorkloadCount 工作负载数
                     * 
                     */
                    uint64_t GetWorkloadCount() const;

                    /**
                     * 判断参数 WorkloadCount 是否已赋值
                     * @return WorkloadCount 是否已赋值
                     * 
                     */
                    bool WorkloadCountHasBeenSet() const;

                    /**
                     * 获取Pod数量
                     * @return PodCount Pod数量
                     * 
                     */
                    uint64_t GetPodCount() const;

                    /**
                     * 判断参数 PodCount 是否已赋值
                     * @return PodCount 是否已赋值
                     * 
                     */
                    bool PodCountHasBeenSet() const;

                    /**
                     * 获取Service数量
                     * @return ServiceCount Service数量
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取Ingress数量
                     * @return IngressCount Ingress数量
                     * 
                     */
                    uint64_t GetIngressCount() const;

                    /**
                     * 判断参数 IngressCount 是否已赋值
                     * @return IngressCount 是否已赋值
                     * 
                     */
                    bool IngressCountHasBeenSet() const;

                    /**
                     * 获取主节点的ip列表
                     * @return MasterIps 主节点的ip列表
                     * 
                     */
                    std::string GetMasterIps() const;

                    /**
                     * 判断参数 MasterIps 是否已赋值
                     * @return MasterIps 是否已赋值
                     * 
                     */
                    bool MasterIpsHasBeenSet() const;

                    /**
                     * 获取所有者名称
                     * @return OwnerName 所有者名称
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 当前集群扫描任务的进度，100表示扫描完成.
                     */
                    int64_t m_scanTaskProgress;
                    bool m_scanTaskProgressHasBeenSet;

                    /**
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 运行时组件
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * 集群节点数
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * 集群状态 (Running 运行中 Creating 创建中 Abnormal 异常 )
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群运行子状态
                     */
                    std::string m_clusterSubStatus;
                    bool m_clusterSubStatusHasBeenSet;

                    /**
                     * 集群类型：为托管集群MANAGED_CLUSTER、独立集群INDEPENDENT_CLUSTER
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 严重风险检查项的数量
                     */
                    uint64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * 高风险检查项的数量
                     */
                    uint64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 中风险检查项的数量
                     */
                    uint64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * 提示风险检查项的数量
                     */
                    uint64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * 检查任务的状态
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 防御容器状态
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * 扫描任务创建时间
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * 网络类型.PublicNetwork为公网类型,VPCNetwork为VPC网络
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * API Server地址
                     */
                    std::string m_apiServerAddress;
                    bool m_apiServerAddressHasBeenSet;

                    /**
                     * 节点数
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 命名空间数
                     */
                    uint64_t m_namespaceCount;
                    bool m_namespaceCountHasBeenSet;

                    /**
                     * 工作负载数
                     */
                    uint64_t m_workloadCount;
                    bool m_workloadCountHasBeenSet;

                    /**
                     * Pod数量
                     */
                    uint64_t m_podCount;
                    bool m_podCountHasBeenSet;

                    /**
                     * Service数量
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * Ingress数量
                     */
                    uint64_t m_ingressCount;
                    bool m_ingressCountHasBeenSet;

                    /**
                     * 主节点的ip列表
                     */
                    std::string m_masterIps;
                    bool m_masterIpsHasBeenSet;

                    /**
                     * 所有者名称
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECLUSTERDETAILRESPONSE_H_
