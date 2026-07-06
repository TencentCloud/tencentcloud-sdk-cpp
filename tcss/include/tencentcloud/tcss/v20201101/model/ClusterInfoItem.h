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
                     * 获取<p>集群id</p>
                     * @return ClusterId <p>集群id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _clusterId <p>集群id</p>
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
                     * 获取<p>集群ca证书md5值</p>
                     * @return ClusterCAMD5 <p>集群ca证书md5值</p>
                     * 
                     */
                    std::string GetClusterCAMD5() const;

                    /**
                     * 设置<p>集群ca证书md5值</p>
                     * @param _clusterCAMD5 <p>集群ca证书md5值</p>
                     * 
                     */
                    void SetClusterCAMD5(const std::string& _clusterCAMD5);

                    /**
                     * 判断参数 ClusterCAMD5 是否已赋值
                     * @return ClusterCAMD5 是否已赋值
                     * 
                     */
                    bool ClusterCAMD5HasBeenSet() const;

                    /**
                     * 获取<p>集群名字</p>
                     * @return ClusterName <p>集群名字</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名字</p>
                     * @param _clusterName <p>集群名字</p>
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
                     * 获取<p>集群版本</p>
                     * @return ClusterVersion <p>集群版本</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>集群版本</p>
                     * @param _clusterVersion <p>集群版本</p>
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
                     * 获取<p>集群操作系统</p>
                     * @return ClusterOs <p>集群操作系统</p>
                     * 
                     */
                    std::string GetClusterOs() const;

                    /**
                     * 设置<p>集群操作系统</p>
                     * @param _clusterOs <p>集群操作系统</p>
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
                     * 获取<p>集群类型</p>
                     * @return ClusterType <p>集群类型</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _clusterType <p>集群类型</p>
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
                     * 获取<p>集群节点数</p>
                     * @return ClusterNodeNum <p>集群节点数</p>
                     * 
                     */
                    uint64_t GetClusterNodeNum() const;

                    /**
                     * 设置<p>集群节点数</p>
                     * @param _clusterNodeNum <p>集群节点数</p>
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
                     * 获取<p>集群区域</p>
                     * @return Region <p>集群区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>集群区域</p>
                     * @param _region <p>集群区域</p>
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
                     * 获取<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended<br>部分防护: PartDefened</p>
                     * @return DefenderStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended<br>部分防护: PartDefened</p>
                     * 
                     */
                    std::string GetDefenderStatus() const;

                    /**
                     * 设置<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended<br>部分防护: PartDefened</p>
                     * @param _defenderStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended<br>部分防护: PartDefened</p>
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
                     * 获取<p>集群状态</p>
                     * @return ClusterStatus <p>集群状态</p>
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置<p>集群状态</p>
                     * @param _clusterStatus <p>集群状态</p>
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
                     * 获取<p>集群运行子状态</p>
                     * @return ClusterSubStatus <p>集群运行子状态</p>
                     * 
                     */
                    std::string GetClusterSubStatus() const;

                    /**
                     * 设置<p>集群运行子状态</p>
                     * @param _clusterSubStatus <p>集群运行子状态</p>
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
                     * 获取<p>集群的检测模式，为Cluster_Normal或者Cluster_Actived.</p>
                     * @return ClusterCheckMode <p>集群的检测模式，为Cluster_Normal或者Cluster_Actived.</p>
                     * 
                     */
                    std::string GetClusterCheckMode() const;

                    /**
                     * 设置<p>集群的检测模式，为Cluster_Normal或者Cluster_Actived.</p>
                     * @param _clusterCheckMode <p>集群的检测模式，为Cluster_Normal或者Cluster_Actived.</p>
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
                     * 获取<p>是否自动定期检测</p>
                     * @return ClusterAutoCheck <p>是否自动定期检测</p>
                     * 
                     */
                    bool GetClusterAutoCheck() const;

                    /**
                     * 设置<p>是否自动定期检测</p>
                     * @param _clusterAutoCheck <p>是否自动定期检测</p>
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
                     * 获取<p>防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成&quot;N个节点防御容器为就绪&quot;，其他错误直接展示</p>
                     * @return DefenderErrorReason <p>防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成&quot;N个节点防御容器为就绪&quot;，其他错误直接展示</p>
                     * 
                     */
                    std::string GetDefenderErrorReason() const;

                    /**
                     * 设置<p>防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成&quot;N个节点防御容器为就绪&quot;，其他错误直接展示</p>
                     * @param _defenderErrorReason <p>防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成&quot;N个节点防御容器为就绪&quot;，其他错误直接展示</p>
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
                     * 获取<p>防御容器没有ready状态的节点数量</p>
                     * @return UnreadyNodeNum <p>防御容器没有ready状态的节点数量</p>
                     * 
                     */
                    uint64_t GetUnreadyNodeNum() const;

                    /**
                     * 设置<p>防御容器没有ready状态的节点数量</p>
                     * @param _unreadyNodeNum <p>防御容器没有ready状态的节点数量</p>
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
                     * 获取<p>严重风险检查项的数量</p>
                     * @return SeriousRiskCount <p>严重风险检查项的数量</p>
                     * 
                     */
                    int64_t GetSeriousRiskCount() const;

                    /**
                     * 设置<p>严重风险检查项的数量</p>
                     * @param _seriousRiskCount <p>严重风险检查项的数量</p>
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
                     * 获取<p>高风险检查项的数量</p>
                     * @return HighRiskCount <p>高风险检查项的数量</p>
                     * 
                     */
                    int64_t GetHighRiskCount() const;

                    /**
                     * 设置<p>高风险检查项的数量</p>
                     * @param _highRiskCount <p>高风险检查项的数量</p>
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
                     * 获取<p>中风险检查项的数量</p>
                     * @return MiddleRiskCount <p>中风险检查项的数量</p>
                     * 
                     */
                    int64_t GetMiddleRiskCount() const;

                    /**
                     * 设置<p>中风险检查项的数量</p>
                     * @param _middleRiskCount <p>中风险检查项的数量</p>
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
                     * 获取<p>提示风险检查项的数量</p>
                     * @return HintRiskCount <p>提示风险检查项的数量</p>
                     * 
                     */
                    int64_t GetHintRiskCount() const;

                    /**
                     * 设置<p>提示风险检查项的数量</p>
                     * @param _hintRiskCount <p>提示风险检查项的数量</p>
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
                     * 获取<p>检查失败原因</p>
                     * @return CheckFailReason <p>检查失败原因</p>
                     * 
                     */
                    std::string GetCheckFailReason() const;

                    /**
                     * 设置<p>检查失败原因</p>
                     * @param _checkFailReason <p>检查失败原因</p>
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
                     * 获取<p>检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error</p>
                     * @return CheckStatus <p>检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error</p>
                     * 
                     */
                    std::string GetCheckStatus() const;

                    /**
                     * 设置<p>检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error</p>
                     * @param _checkStatus <p>检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error</p>
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
                     * 获取<p>任务创建时间,检查时间</p>
                     * @return TaskCreateTime <p>任务创建时间,检查时间</p>
                     * 
                     */
                    std::string GetTaskCreateTime() const;

                    /**
                     * 设置<p>任务创建时间,检查时间</p>
                     * @param _taskCreateTime <p>任务创建时间,检查时间</p>
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
                     * 获取<p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * @return AccessedStatus <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置<p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * @param _accessedStatus <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
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
                     * 获取<p>接入失败原因</p>
                     * @return AccessedSubStatus <p>接入失败原因</p>
                     * 
                     */
                    std::string GetAccessedSubStatus() const;

                    /**
                     * 设置<p>接入失败原因</p>
                     * @param _accessedSubStatus <p>接入失败原因</p>
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
                     * 获取<p>接入/卸载失败原因</p>
                     * @return AccessedErrorReason <p>接入/卸载失败原因</p>
                     * 
                     */
                    std::string GetAccessedErrorReason() const;

                    /**
                     * 设置<p>接入/卸载失败原因</p>
                     * @param _accessedErrorReason <p>接入/卸载失败原因</p>
                     * 
                     */
                    void SetAccessedErrorReason(const std::string& _accessedErrorReason);

                    /**
                     * 判断参数 AccessedErrorReason 是否已赋值
                     * @return AccessedErrorReason 是否已赋值
                     * 
                     */
                    bool AccessedErrorReasonHasBeenSet() const;

                    /**
                     * 获取<p>节点总数</p>
                     * @return NodeCount <p>节点总数</p>
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置<p>节点总数</p>
                     * @param _nodeCount <p>节点总数</p>
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
                     * 获取<p>离线节点数</p>
                     * @return OffLineNodeCount <p>离线节点数</p>
                     * 
                     */
                    uint64_t GetOffLineNodeCount() const;

                    /**
                     * 设置<p>离线节点数</p>
                     * @param _offLineNodeCount <p>离线节点数</p>
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
                     * 获取<p>未安装agent节点数</p>
                     * @return UnInstallAgentNodeCount <p>未安装agent节点数</p>
                     * 
                     */
                    uint64_t GetUnInstallAgentNodeCount() const;

                    /**
                     * 设置<p>未安装agent节点数</p>
                     * @param _unInstallAgentNodeCount <p>未安装agent节点数</p>
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
                     * 获取<p>计费核数(弹性计费核数+普通计费核数)</p>
                     * @return ChargeCoresCnt <p>计费核数(弹性计费核数+普通计费核数)</p>
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置<p>计费核数(弹性计费核数+普通计费核数)</p>
                     * @param _chargeCoresCnt <p>计费核数(弹性计费核数+普通计费核数)</p>
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
                     * 获取<p>master 地址列表</p>
                     * @return MasterAddresses <p>master 地址列表</p>
                     * 
                     */
                    std::vector<std::string> GetMasterAddresses() const;

                    /**
                     * 设置<p>master 地址列表</p>
                     * @param _masterAddresses <p>master 地址列表</p>
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
                     * 获取<p>核数</p>
                     * @return CoresCnt <p>核数</p>
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置<p>核数</p>
                     * @param _coresCnt <p>核数</p>
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
                     * 获取<p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * @return ClusterAuditStatus <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * 
                     */
                    std::string GetClusterAuditStatus() const;

                    /**
                     * 设置<p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * @param _clusterAuditStatus <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
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
                     * 获取<p>集群审计开关失败信息</p>
                     * @return ClusterAuditFailedInfo <p>集群审计开关失败信息</p>
                     * 
                     */
                    std::string GetClusterAuditFailedInfo() const;

                    /**
                     * 设置<p>集群审计开关失败信息</p>
                     * @param _clusterAuditFailedInfo <p>集群审计开关失败信息</p>
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
                     * 获取<p>所有者名称</p>
                     * @return OwnerName <p>所有者名称</p>
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置<p>所有者名称</p>
                     * @param _ownerName <p>所有者名称</p>
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
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群ca证书md5值</p>
                     */
                    std::string m_clusterCAMD5;
                    bool m_clusterCAMD5HasBeenSet;

                    /**
                     * <p>集群名字</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群版本</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>集群操作系统</p>
                     */
                    std::string m_clusterOs;
                    bool m_clusterOsHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群节点数</p>
                     */
                    uint64_t m_clusterNodeNum;
                    bool m_clusterNodeNumHasBeenSet;

                    /**
                     * <p>集群区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended<br>部分防护: PartDefened</p>
                     */
                    std::string m_defenderStatus;
                    bool m_defenderStatusHasBeenSet;

                    /**
                     * <p>集群状态</p>
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * <p>集群运行子状态</p>
                     */
                    std::string m_clusterSubStatus;
                    bool m_clusterSubStatusHasBeenSet;

                    /**
                     * <p>集群的检测模式，为Cluster_Normal或者Cluster_Actived.</p>
                     */
                    std::string m_clusterCheckMode;
                    bool m_clusterCheckModeHasBeenSet;

                    /**
                     * <p>是否自动定期检测</p>
                     */
                    bool m_clusterAutoCheck;
                    bool m_clusterAutoCheckHasBeenSet;

                    /**
                     * <p>防护容器部署失败原因，为UserDaemonSetNotReady时,和UnreadyNodeNum转成&quot;N个节点防御容器为就绪&quot;，其他错误直接展示</p>
                     */
                    std::string m_defenderErrorReason;
                    bool m_defenderErrorReasonHasBeenSet;

                    /**
                     * <p>防御容器没有ready状态的节点数量</p>
                     */
                    uint64_t m_unreadyNodeNum;
                    bool m_unreadyNodeNumHasBeenSet;

                    /**
                     * <p>严重风险检查项的数量</p>
                     */
                    int64_t m_seriousRiskCount;
                    bool m_seriousRiskCountHasBeenSet;

                    /**
                     * <p>高风险检查项的数量</p>
                     */
                    int64_t m_highRiskCount;
                    bool m_highRiskCountHasBeenSet;

                    /**
                     * <p>中风险检查项的数量</p>
                     */
                    int64_t m_middleRiskCount;
                    bool m_middleRiskCountHasBeenSet;

                    /**
                     * <p>提示风险检查项的数量</p>
                     */
                    int64_t m_hintRiskCount;
                    bool m_hintRiskCountHasBeenSet;

                    /**
                     * <p>检查失败原因</p>
                     */
                    std::string m_checkFailReason;
                    bool m_checkFailReasonHasBeenSet;

                    /**
                     * <p>检查状态,为Task_Running, NoRisk, HasRisk, Uncheck, Task_Error</p>
                     */
                    std::string m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * <p>任务创建时间,检查时间</p>
                     */
                    std::string m_taskCreateTime;
                    bool m_taskCreateTimeHasBeenSet;

                    /**
                     * <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                    /**
                     * <p>接入失败原因</p>
                     */
                    std::string m_accessedSubStatus;
                    bool m_accessedSubStatusHasBeenSet;

                    /**
                     * <p>接入/卸载失败原因</p>
                     */
                    std::string m_accessedErrorReason;
                    bool m_accessedErrorReasonHasBeenSet;

                    /**
                     * <p>节点总数</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>离线节点数</p>
                     */
                    uint64_t m_offLineNodeCount;
                    bool m_offLineNodeCountHasBeenSet;

                    /**
                     * <p>未安装agent节点数</p>
                     */
                    uint64_t m_unInstallAgentNodeCount;
                    bool m_unInstallAgentNodeCountHasBeenSet;

                    /**
                     * <p>计费核数(弹性计费核数+普通计费核数)</p>
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * <p>master 地址列表</p>
                     */
                    std::vector<std::string> m_masterAddresses;
                    bool m_masterAddressesHasBeenSet;

                    /**
                     * <p>核数</p>
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                    /**
                     * <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     */
                    std::string m_clusterAuditStatus;
                    bool m_clusterAuditStatusHasBeenSet;

                    /**
                     * <p>集群审计开关失败信息</p>
                     */
                    std::string m_clusterAuditFailedInfo;
                    bool m_clusterAuditFailedInfoHasBeenSet;

                    /**
                     * <p>所有者名称</p>
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERINFOITEM_H_
