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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterPodDetail返回参数结构体
                */
                class DescribeClusterPodDetailResponse : public AbstractModel
                {
                public:
                    DescribeClusterPodDetailResponse();
                    ~DescribeClusterPodDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Pod 唯一 ID</p>
                     * @return UniqueID <p>Pod 唯一 ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>主账号 AppID</p>
                     * @return AppID <p>主账号 AppID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Pod 名称</p>
                     * @return PodName <p>Pod 名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取<p>Pod IP 地址</p>
                     * @return PodIP <p>Pod IP 地址</p>
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取<p>Pod 运行状态</p>
                     * @return RunStatus <p>Pod 运行状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>Pod Labels 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels <p>Pod Labels 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetTag> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Pod 启动时间</p>
                     * @return StartTime <p>Pod 启动时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>启动时间（秒）</p>
                     * @return StartupTime <p>启动时间（秒）</p>
                     * 
                     */
                    uint64_t GetStartupTime() const;

                    /**
                     * 判断参数 StartupTime 是否已赋值
                     * @return StartupTime 是否已赋值
                     * 
                     */
                    bool StartupTimeHasBeenSet() const;

                    /**
                     * 获取<p>Pod 重启次数</p>
                     * @return RestartCount <p>Pod 重启次数</p>
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取<p>所属集群名称</p>
                     * @return ClusterName <p>所属集群名称</p>
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
                     * 获取<p>所属集群 ID</p>
                     * @return ClusterID <p>所属集群 ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>所属集群类型</p>
                     * @return ClusterType <p>所属集群类型</p>
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
                     * 获取<p>所属集群运行状态</p>
                     * @return ClusterRunStatus <p>所属集群运行状态</p>
                     * 
                     */
                    std::string GetClusterRunStatus() const;

                    /**
                     * 判断参数 ClusterRunStatus 是否已赋值
                     * @return ClusterRunStatus 是否已赋值
                     * 
                     */
                    bool ClusterRunStatusHasBeenSet() const;

                    /**
                     * 获取<p>所属命名空间</p>
                     * @return Namespace <p>所属命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>所在节点名称</p>
                     * @return NodeName <p>所在节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>所在节点 ID</p>
                     * @return NodeId <p>所在节点 ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>所属 Workload 名称</p>
                     * @return WorkloadName <p>所属 Workload 名称</p>
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 判断参数 WorkloadName 是否已赋值
                     * @return WorkloadName 是否已赋值
                     * 
                     */
                    bool WorkloadNameHasBeenSet() const;

                    /**
                     * 获取<p>所属 Workload 类型</p>
                     * @return WorkloadType <p>所属 Workload 类型</p>
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 判断参数 WorkloadType 是否已赋值
                     * @return WorkloadType 是否已赋值
                     * 
                     */
                    bool WorkloadTypeHasBeenSet() const;

                    /**
                     * 获取<p>严重风险事件数</p>
                     * @return RiskEventCriticalCount <p>严重风险事件数</p>
                     * 
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * 
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高危风险事件数</p>
                     * @return RiskEventHighCount <p>高危风险事件数</p>
                     * 
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * 
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中危风险事件数</p>
                     * @return RiskEventMiddleCount <p>中危风险事件数</p>
                     * 
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * 
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低危风险事件数</p>
                     * @return RiskEventLowCount <p>低危风险事件数</p>
                     * 
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * 
                     */
                    bool RiskEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>严重告警事件数</p>
                     * @return AlarmEventCriticalCount <p>严重告警事件数</p>
                     * 
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 判断参数 AlarmEventCriticalCount 是否已赋值
                     * @return AlarmEventCriticalCount 是否已赋值
                     * 
                     */
                    bool AlarmEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高危告警事件数</p>
                     * @return AlarmEventHighCount <p>高危告警事件数</p>
                     * 
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 判断参数 AlarmEventHighCount 是否已赋值
                     * @return AlarmEventHighCount 是否已赋值
                     * 
                     */
                    bool AlarmEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中危告警事件数</p>
                     * @return AlarmEventMiddleCount <p>中危告警事件数</p>
                     * 
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 判断参数 AlarmEventMiddleCount 是否已赋值
                     * @return AlarmEventMiddleCount 是否已赋值
                     * 
                     */
                    bool AlarmEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低危告警事件数</p>
                     * @return AlarmEventLowCount <p>低危告警事件数</p>
                     * 
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 判断参数 AlarmEventLowCount 是否已赋值
                     * @return AlarmEventLowCount 是否已赋值
                     * 
                     */
                    bool AlarmEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>所属地域</p>
                     * @return Region <p>所属地域</p>
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
                     * 获取<p>节点内网 IP</p>
                     * @return NodeInternalIP <p>节点内网 IP</p>
                     * 
                     */
                    std::string GetNodeInternalIP() const;

                    /**
                     * 判断参数 NodeInternalIP 是否已赋值
                     * @return NodeInternalIP 是否已赋值
                     * 
                     */
                    bool NodeInternalIPHasBeenSet() const;

                    /**
                     * 获取<p>节点外网 IP</p>
                     * @return NodeExternalIP <p>节点外网 IP</p>
                     * 
                     */
                    std::string GetNodeExternalIP() const;

                    /**
                     * 判断参数 NodeExternalIP 是否已赋值
                     * @return NodeExternalIP 是否已赋值
                     * 
                     */
                    bool NodeExternalIPHasBeenSet() const;

                    /**
                     * 获取<p>关联容器数量</p>
                     * @return ContainerCount <p>关联容器数量</p>
                     * 
                     */
                    uint64_t GetContainerCount() const;

                    /**
                     * 判断参数 ContainerCount 是否已赋值
                     * @return ContainerCount 是否已赋值
                     * 
                     */
                    bool ContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>关联服务数量</p>
                     * @return ServiceCount <p>关联服务数量</p>
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
                     * 获取<p>地域中文名</p>
                     * @return RegionName <p>地域中文名</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取<p>地域英文名</p>
                     * @return RegionNameEn <p>地域英文名</p>
                     * 
                     */
                    std::string GetRegionNameEn() const;

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                    /**
                     * 获取<p>告警数量</p>
                     * @return AlarmCount <p>告警数量</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                private:

                    /**
                     * <p>Pod 唯一 ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>主账号 AppID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Pod 名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>Pod IP 地址</p>
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * <p>Pod 运行状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>Pod Labels 列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetTag> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Pod 启动时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>启动时间（秒）</p>
                     */
                    uint64_t m_startupTime;
                    bool m_startupTimeHasBeenSet;

                    /**
                     * <p>Pod 重启次数</p>
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * <p>所属集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>所属集群 ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>所属集群类型</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>所属集群运行状态</p>
                     */
                    std::string m_clusterRunStatus;
                    bool m_clusterRunStatusHasBeenSet;

                    /**
                     * <p>所属命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>所在节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>所在节点 ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>所属 Workload 名称</p>
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * <p>所属 Workload 类型</p>
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * <p>严重风险事件数</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>高危风险事件数</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>中危风险事件数</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>低危风险事件数</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>严重告警事件数</p>
                     */
                    uint64_t m_alarmEventCriticalCount;
                    bool m_alarmEventCriticalCountHasBeenSet;

                    /**
                     * <p>高危告警事件数</p>
                     */
                    uint64_t m_alarmEventHighCount;
                    bool m_alarmEventHighCountHasBeenSet;

                    /**
                     * <p>中危告警事件数</p>
                     */
                    uint64_t m_alarmEventMiddleCount;
                    bool m_alarmEventMiddleCountHasBeenSet;

                    /**
                     * <p>低危告警事件数</p>
                     */
                    uint64_t m_alarmEventLowCount;
                    bool m_alarmEventLowCountHasBeenSet;

                    /**
                     * <p>所属地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>节点内网 IP</p>
                     */
                    std::string m_nodeInternalIP;
                    bool m_nodeInternalIPHasBeenSet;

                    /**
                     * <p>节点外网 IP</p>
                     */
                    std::string m_nodeExternalIP;
                    bool m_nodeExternalIPHasBeenSet;

                    /**
                     * <p>关联容器数量</p>
                     */
                    uint64_t m_containerCount;
                    bool m_containerCountHasBeenSet;

                    /**
                     * <p>关联服务数量</p>
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>地域中文名</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>地域英文名</p>
                     */
                    std::string m_regionNameEn;
                    bool m_regionNameEnHasBeenSet;

                    /**
                     * <p>告警数量</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERPODDETAILRESPONSE_H_
