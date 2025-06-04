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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_

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
                * 集群资产返回的结构体
                */
                class ClusterInfoItem : public AbstractModel
                {
                public:
                    ClusterInfoItem();
                    ~ClusterInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
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
                     * 获取集群名字
                     * @return ClusterName 集群名字
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名字
                     * @param _clusterName 集群名字
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
                     * 获取集群版本
                     * @return ClusterVersion 集群版本
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
                     * @param _clusterVersion 集群版本
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群操作系统
                     * @return ClusterOs 集群操作系统
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置集群操作系统
                     * @param _clusterOs 集群操作系统
                     * 
                     */
                    void SetClusterOs(const std::string& _clusterOs);

                    /**
                     * 判断参数 ClusterOs 是否已赋值
                     * @return ClusterOs 是否已赋值
                     * 
                     */
                    bool ClusterOsHasBeenSet() const;

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
                     * 获取集群节点数
                     * @return ClusterNodeNum 集群节点数
                     * 
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置集群节点数
                     * @param _clusterNodeNum 集群节点数
                     * 
                     */
                    void SetClusterNodeNum(const uint64_t& _clusterNodeNum);

                    /**
                     * 判断参数 ClusterNodeNum 是否已赋值
                     * @return ClusterNodeNum 是否已赋值
                     * 
                     */
                    bool ClusterNodeNumHasBeenSet() const;

                    /**
                     * 获取集群区域
                     * @return Region 集群区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置集群区域
                     * @param _region 集群区域
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
                     * 获取防护状态: 
已防护: Defended 
未防护: UnDefended
部分防护: PartDefened
                     * @return DefenderStatus 防护状态: 
已防护: Defended 
未防护: UnDefended
部分防护: PartDefened
                     * 
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 设置防护状态: 
已防护: Defended 
未防护: UnDefended
部分防护: PartDefened
                     * @param _defenderStatus 防护状态: 
已防护: Defended 
未防护: UnDefended
部分防护: PartDefened
                     * 
                     */
                    void SetDefenderStatus(const std::string& _defenderStatus);

                    /**
                     * 判断参数 DefenderStatus 是否已赋值
                     * @return DefenderStatus 是否已赋值
                     * 
                     */
                    bool DefenderStatusHasBeenSet() const;

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
                     * 获取集群运行子状态
                     * @return ClusterSubStatus 集群运行子状态
                     * 
                     */
                    std::string GetClusterSubStatus() const;

                    /**
                     * 设置集群运行子状态
                     * @param _clusterSubStatus 集群运行子状态
                     * 
                     */
                    void SetClusterSubStatus(const std::string& _clusterSubStatus);

                    /**
                     * 判断参数 ClusterSubStatus 是否已赋值
                     * @return ClusterSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterSubStatusHasBeenSet() const;

                    /**
                     * 获取集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * @return ClusterCheckMode 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * 
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * @param _clusterCheckMode 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     * 
                     */
                    void SetClusterCheckMode(const std::string& _clusterCheckMode);

                    /**
                     * 判断参数 ClusterCheckMode 是否已赋值
                     * @return ClusterCheckMode 是否已赋值
                     * 
                     */
                    bool ClusterCheckModeHasBeenSet() const;

                    /**
                     * 获取是否自动定期检测
                     * @return ClusterAutoCheck 是否自动定期检测
                     * 
                     */
                    bool GetClusterAutoCheck() const;

                    /**
                     * 设置是否自动定期检测
                     * @param _clusterAutoCheck 是否自动定期检测
                     * 
                     */
                    void SetClusterAutoCheck(const bool& _clusterAutoCheck);

                    /**
                     * 判断参数 ClusterAutoCheck 是否已赋值
                     * @return ClusterAutoCheck 是否已赋值
                     * 
                     */
                    bool ClusterAutoCheckHasBeenSet() const;

                    /**
                     * 获取防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * @return DefenderErrorReason 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * 
                     */
                    std::string GetDefenderErrorReason() const;

                    /**
                     * 设置防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * @param _defenderErrorReason 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     * 
                     */
                    void SetDefenderErrorReason(const std::string& _defenderErrorReason);

                    /**
                     * 判断参数 DefenderErrorReason 是否已赋值
                     * @return DefenderErrorReason 是否已赋值
                     * 
                     */
                    bool DefenderErrorReasonHasBeenSet() const;

                    /**
                     * 获取防御容器没有ready状态的节点数量
                     * @return UnreadyNodeNum 防御容器没有ready状态的节点数量
                     * 
                     */
                    uint64_t GetUnreadyNodeNum() const;

                    /**
                     * 设置防御容器没有ready状态的节点数量
                     * @param _unreadyNodeNum 防御容器没有ready状态的节点数量
                     * 
                     */
                    void SetUnreadyNodeNum(const uint64_t& _unreadyNodeNum);

                    /**
                     * 判断参数 UnreadyNodeNum 是否已赋值
                     * @return UnreadyNodeNum 是否已赋值
                     * 
                     */
                    bool UnreadyNodeNumHasBeenSet() const;

                    /**
                     * 获取严重风险检查项的数量
                     * @return SeriousRiskCount 严重风险检查项的数量
                     * 
                     */
                    int64_t GetSeriousRiskCount() const;

                    /**
                     * 设置严重风险检查项的数量
                     * @param _seriousRiskCount 严重风险检查项的数量
                     * 
                     */
                    void SetSeriousRiskCount(const int64_t& _seriousRiskCount);

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
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置高风险检查项的数量
                     * @param _highRiskCount 高风险检查项的数量
                     * 
                     */
                    void SetHighRiskCount(const int64_t& _highRiskCount);

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
                    int64_t GetMiddleRiskCount() const;

                    /**
                     * 设置中风险检查项的数量
                     * @param _middleRiskCount 中风险检查项的数量
                     * 
                     */
                    void SetMiddleRiskCount(const int64_t& _middleRiskCount);

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
                    int64_t GetHintRiskCount() const;

                    /**
                     * 设置提示风险检查项的数量
                     * @param _hintRiskCount 提示风险检查项的数量
                     * 
                     */
                    void SetHintRiskCount(const int64_t& _hintRiskCount);

                    /**
                     * 判断参数 HintRiskCount 是否已赋值
                     * @return HintRiskCount 是否已赋值
                     * 
                     */
                    bool HintRiskCountHasBeenSet() const;

                    /**
                     * 获取检查失败原因
                     * @return CheckFailReason 检查失败原因
                     * 
                     */
                    std::string GetCheckFailReason() const;

                    /**
                     * 设置检查失败原因
                     * @param _checkFailReason 检查失败原因
                     * 
                     */
                    void SetCheckFailReason(const std::string& _checkFailReason);

                    /**
                     * 判断参数 CheckFailReason 是否已赋值
                     * @return CheckFailReason 是否已赋值
                     * 
                     */
                    bool CheckFailReasonHasBeenSet() const;

                    /**
                     * 获取检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * @return CheckStatus 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * @param _checkStatus 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     * 
                     */
                    void SetCheckStatus(const std::string& _checkStatus);

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取任务创建时间,检查时间
                     * @return TaskCreateTime 任务创建时间,检查时间
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置任务创建时间,检查时间
                     * @param _taskCreateTime 任务创建时间,检查时间
                     * 
                     */
                    void SetTaskCreateTime(const std::string& _taskCreateTime);

                    /**
                     * 判断参数 TaskCreateTime 是否已赋值
                     * @return TaskCreateTime 是否已赋值
                     * 
                     */
                    bool TaskCreateTimeHasBeenSet() const;

                    /**
                     * 获取接入状态:
未接入: AccessedNone
已防护: AccessedDefended
未防护: AccessedInstalled
部分防护: AccessedPartialDefence
接入异常: AccessedException
卸载异常: AccessedUninstallException
接入中: AccessedInstalling
卸载中: AccessedUninstalling
                     * @return AccessedStatus 接入状态:
未接入: AccessedNone
已防护: AccessedDefended
未防护: AccessedInstalled
部分防护: AccessedPartialDefence
接入异常: AccessedException
卸载异常: AccessedUninstallException
接入中: AccessedInstalling
卸载中: AccessedUninstalling
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置接入状态:
未接入: AccessedNone
已防护: AccessedDefended
未防护: AccessedInstalled
部分防护: AccessedPartialDefence
接入异常: AccessedException
卸载异常: AccessedUninstallException
接入中: AccessedInstalling
卸载中: AccessedUninstalling
                     * @param _accessedStatus 接入状态:
未接入: AccessedNone
已防护: AccessedDefended
未防护: AccessedInstalled
部分防护: AccessedPartialDefence
接入异常: AccessedException
卸载异常: AccessedUninstallException
接入中: AccessedInstalling
卸载中: AccessedUninstalling
                     * 
                     */
                    void SetAccessedStatus(const std::string& _accessedStatus);

                    /**
                     * 判断参数 AccessedStatus 是否已赋值
                     * @return AccessedStatus 是否已赋值
                     * 
                     */
                    bool AccessedStatusHasBeenSet() const;

                    /**
                     * 获取接入失败原因
                     * @return AccessedSubStatus 接入失败原因
                     * 
                     */
                    std::string GetAccessedSubStatus() const;

                    /**
                     * 设置接入失败原因
                     * @param _accessedSubStatus 接入失败原因
                     * 
                     */
                    void SetAccessedSubStatus(const std::string& _accessedSubStatus);

                    /**
                     * 判断参数 AccessedSubStatus 是否已赋值
                     * @return AccessedSubStatus 是否已赋值
                     * 
                     */
                    bool AccessedSubStatusHasBeenSet() const;

                    /**
                     * 获取节点总数
                     * @return NodeCount 节点总数
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置节点总数
                     * @param _nodeCount 节点总数
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取离线节点数
                     * @return OffLineNodeCount 离线节点数
                     * 
                     */
                    uint64_t GetOffLineNodeCount() const;

                    /**
                     * 设置离线节点数
                     * @param _offLineNodeCount 离线节点数
                     * 
                     */
                    void SetOffLineNodeCount(const uint64_t& _offLineNodeCount);

                    /**
                     * 判断参数 OffLineNodeCount 是否已赋值
                     * @return OffLineNodeCount 是否已赋值
                     * 
                     */
                    bool OffLineNodeCountHasBeenSet() const;

                    /**
                     * 获取未安装agent节点数
                     * @return UnInstallAgentNodeCount 未安装agent节点数
                     * 
                     */
                    uint64_t GetUnInstallAgentNodeCount() const;

                    /**
                     * 设置未安装agent节点数
                     * @param _unInstallAgentNodeCount 未安装agent节点数
                     * 
                     */
                    void SetUnInstallAgentNodeCount(const uint64_t& _unInstallAgentNodeCount);

                    /**
                     * 判断参数 UnInstallAgentNodeCount 是否已赋值
                     * @return UnInstallAgentNodeCount 是否已赋值
                     * 
                     */
                    bool UnInstallAgentNodeCountHasBeenSet() const;

                    /**
                     * 获取计费核数(弹性计费核数+普通计费核数)
                     * @return ChargeCoresCnt 计费核数(弹性计费核数+普通计费核数)
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置计费核数(弹性计费核数+普通计费核数)
                     * @param _chargeCoresCnt 计费核数(弹性计费核数+普通计费核数)
                     * 
                     */
                    void SetChargeCoresCnt(const uint64_t& _chargeCoresCnt);

                    /**
                     * 判断参数 ChargeCoresCnt 是否已赋值
                     * @return ChargeCoresCnt 是否已赋值
                     * 
                     */
                    bool ChargeCoresCntHasBeenSet() const;

                    /**
                     * 获取master 地址列表
                     * @return MasterAddresses master 地址列表
                     * 
                     */
                    std::vector<std::string> GetMasterAddresses() const;

                    /**
                     * 设置master 地址列表
                     * @param _masterAddresses master 地址列表
                     * 
                     */
                    void SetMasterAddresses(const std::vector<std::string>& _masterAddresses);

                    /**
                     * 判断参数 MasterAddresses 是否已赋值
                     * @return MasterAddresses 是否已赋值
                     * 
                     */
                    bool MasterAddressesHasBeenSet() const;

                    /**
                     * 获取核数
                     * @return CoresCnt 核数
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置核数
                     * @param _coresCnt 核数
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                    /**
                     * 获取集群审计开关状态：
已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed
                     * @return ClusterAuditStatus 集群审计开关状态：
已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed
                     * 
                     */
                    std::string GetClusterAuditStatus() const;

                    /**
                     * 设置集群审计开关状态：
已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed
                     * @param _clusterAuditStatus 集群审计开关状态：
已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed
                     * 
                     */
                    void SetClusterAuditStatus(const std::string& _clusterAuditStatus);

                    /**
                     * 判断参数 ClusterAuditStatus 是否已赋值
                     * @return ClusterAuditStatus 是否已赋值
                     * 
                     */
                    bool ClusterAuditStatusHasBeenSet() const;

                    /**
                     * 获取集群审计开关失败信息
                     * @return ClusterAuditFailedInfo 集群审计开关失败信息
                     * 
                     */
                    std::string GetClusterAuditFailedInfo() const;

                    /**
                     * 设置集群审计开关失败信息
                     * @param _clusterAuditFailedInfo 集群审计开关失败信息
                     * 
                     */
                    void SetClusterAuditFailedInfo(const std::string& _clusterAuditFailedInfo);

                    /**
                     * 判断参数 ClusterAuditFailedInfo 是否已赋值
                     * @return ClusterAuditFailedInfo 是否已赋值
                     * 
                     */
                    bool ClusterAuditFailedInfoHasBeenSet() const;

                    /**
                     * 获取所有者名称
                     * @return OwnerName 所有者名称
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置所有者名称
                     * @param _ownerName 所有者名称
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

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
                     * 集群版本
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群操作系统
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 集群节点数
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * 集群区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 防护状态: 
已防护: Defended 
未防护: UnDefended
部分防护: PartDefened
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * 集群状态
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群运行子状态
                     */
                    std::string m_clusterSubStatus;
                    bool m_clusterSubStatusHasBeenSet;

                    /**
                     * 集群的检测模式，为Cluster_Normal或者Cluster_Actived.
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * 是否自动定期检测
                     */
                    bool m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                    /**
                     * 防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成"N个节点防御容器为就绪"，其他错误直接展示
                     */
                    std::string m_defenderErrorReason;
                    bool m_defenderErrorReasonHasBeenSet;

                    /**
                     * 防御容器没有ready状态的节点数量
                     */
                    uint64_t m_unreadyNodeNum;
                    bool m_unreadyNodeNumHasBeenSet;

                    /**
                     * 严重风险检查项的数量
                     */
                    int64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * 高风险检查项的数量
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * 中风险检查项的数量
                     */
                    int64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * 提示风险检查项的数量
                     */
                    int64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * 检查失败原因
                     */
                    std::string m_checkFailReason;
                    bool m_checkFailReasonHasBeenSet;

                    /**
                     * 检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 任务创建时间,检查时间
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * 接入状态:
未接入: AccessedNone
已防护: AccessedDefended
未防护: AccessedInstalled
部分防护: AccessedPartialDefence
接入异常: AccessedException
卸载异常: AccessedUninstallException
接入中: AccessedInstalling
卸载中: AccessedUninstalling
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                    /**
                     * 接入失败原因
                     */
                    std::string m_accessedSubStatus;
                    bool m_accessedSubStatusHasBeenSet;

                    /**
                     * 节点总数
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 离线节点数
                     */
                    uint64_t m_offLineNodeCount;
                    bool m_offLineNodeCountHasBeenSet;

                    /**
                     * 未安装agent节点数
                     */
                    uint64_t m_unInstallAgentNodeCount;
                    bool m_unInstallAgentNodeCountHasBeenSet;

                    /**
                     * 计费核数(弹性计费核数+普通计费核数)
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * master 地址列表
                     */
                    std::vector<std::string> m_masterAddresses;
                    bool m_masterAddressesHasBeenSet;

                    /**
                     * 核数
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * 集群审计开关状态：
已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed
                     */
                    std::string m_clusterAuditStatus;
                    bool m_clusterAuditStatusHasBeenSet;

                    /**
                     * 集群审计开关失败信息
                     */
                    std::string m_clusterAuditFailedInfo;
                    bool m_clusterAuditFailedInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
