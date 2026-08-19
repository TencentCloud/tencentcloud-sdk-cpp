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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集群列表项
                */
                class ClusterListItem : public AbstractModel
                {
                public:
                    ClusterListItem();
                    ~ClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>资产id</p>
                     * @return AssetId <p>资产id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产id</p>
                     * @param _assetId <p>资产id</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>集群类型<br>MANAGED_CLUSTER: 托管集群</p>
                     * @return ClusterType <p>集群类型<br>MANAGED_CLUSTER: 托管集群</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型<br>MANAGED_CLUSTER: 托管集群</p>
                     * @param _clusterType <p>集群类型<br>MANAGED_CLUSTER: 托管集群</p>
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
                     * 获取<p>严重告警事件数</p>
                     * @return AlarmEventCriticalCount <p>严重告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 设置<p>严重告警事件数</p>
                     * @param _alarmEventCriticalCount <p>严重告警事件数</p>
                     * @deprecated
                     */
                    void SetAlarmEventCriticalCount(const uint64_t& _alarmEventCriticalCount);

                    /**
                     * 判断参数 AlarmEventCriticalCount 是否已赋值
                     * @return AlarmEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高危告警事件数</p>
                     * @return AlarmEventHighCount <p>高危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 设置<p>高危告警事件数</p>
                     * @param _alarmEventHighCount <p>高危告警事件数</p>
                     * @deprecated
                     */
                    void SetAlarmEventHighCount(const uint64_t& _alarmEventHighCount);

                    /**
                     * 判断参数 AlarmEventHighCount 是否已赋值
                     * @return AlarmEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中危告警事件数</p>
                     * @return AlarmEventMiddleCount <p>中危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 设置<p>中危告警事件数</p>
                     * @param _alarmEventMiddleCount <p>中危告警事件数</p>
                     * @deprecated
                     */
                    void SetAlarmEventMiddleCount(const uint64_t& _alarmEventMiddleCount);

                    /**
                     * 判断参数 AlarmEventMiddleCount 是否已赋值
                     * @return AlarmEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低危告警事件数</p>
                     * @return AlarmEventLowCount <p>低危告警事件数</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 设置<p>低危告警事件数</p>
                     * @param _alarmEventLowCount <p>低危告警事件数</p>
                     * @deprecated
                     */
                    void SetAlarmEventLowCount(const uint64_t& _alarmEventLowCount);

                    /**
                     * 判断参数 AlarmEventLowCount 是否已赋值
                     * @return AlarmEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool AlarmEventLowCountHasBeenSet() const;

                    /**
                     * 获取<p>严重风险事件数</p>
                     * @return RiskEventCriticalCount <p>严重风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>严重风险事件数</p>
                     * @param _riskEventCriticalCount <p>严重风险事件数</p>
                     * @deprecated
                     */
                    void SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount);

                    /**
                     * 判断参数 RiskEventCriticalCount 是否已赋值
                     * @return RiskEventCriticalCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventCriticalCountHasBeenSet() const;

                    /**
                     * 获取<p>高危风险事件数</p>
                     * @return RiskEventHighCount <p>高危风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>高危风险事件数</p>
                     * @param _riskEventHighCount <p>高危风险事件数</p>
                     * @deprecated
                     */
                    void SetRiskEventHighCount(const uint64_t& _riskEventHighCount);

                    /**
                     * 判断参数 RiskEventHighCount 是否已赋值
                     * @return RiskEventHighCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventHighCountHasBeenSet() const;

                    /**
                     * 获取<p>中危风险事件数</p>
                     * @return RiskEventMiddleCount <p>中危风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>中危风险事件数</p>
                     * @param _riskEventMiddleCount <p>中危风险事件数</p>
                     * @deprecated
                     */
                    void SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount);

                    /**
                     * 判断参数 RiskEventMiddleCount 是否已赋值
                     * @return RiskEventMiddleCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventMiddleCountHasBeenSet() const;

                    /**
                     * 获取<p>低危风险事件数</p>
                     * @return RiskEventLowCount <p>低危风险事件数</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>低危风险事件数</p>
                     * @param _riskEventLowCount <p>低危风险事件数</p>
                     * @deprecated
                     */
                    void SetRiskEventLowCount(const uint64_t& _riskEventLowCount);

                    /**
                     * 判断参数 RiskEventLowCount 是否已赋值
                     * @return RiskEventLowCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskEventLowCountHasBeenSet() const;

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
                     * 获取<p>离线节点总数</p>
                     * @return OfflineNodeCount <p>离线节点总数</p>
                     * 
                     */
                    uint64_t GetOfflineNodeCount() const;

                    /**
                     * 设置<p>离线节点总数</p>
                     * @param _offlineNodeCount <p>离线节点总数</p>
                     * 
                     */
                    void SetOfflineNodeCount(const uint64_t& _offlineNodeCount);

                    /**
                     * 判断参数 OfflineNodeCount 是否已赋值
                     * @return OfflineNodeCount 是否已赋值
                     * 
                     */
                    bool OfflineNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>未安装节点总数</p>
                     * @return UninstallNodeCount <p>未安装节点总数</p>
                     * 
                     */
                    uint64_t GetUninstallNodeCount() const;

                    /**
                     * 设置<p>未安装节点总数</p>
                     * @param _uninstallNodeCount <p>未安装节点总数</p>
                     * 
                     */
                    void SetUninstallNodeCount(const uint64_t& _uninstallNodeCount);

                    /**
                     * 判断参数 UninstallNodeCount 是否已赋值
                     * @return UninstallNodeCount 是否已赋值
                     * 
                     */
                    bool UninstallNodeCountHasBeenSet() const;

                    /**
                     * 获取<p>总核数</p>
                     * @return TotalCoresCount <p>总核数</p>
                     * 
                     */
                    int64_t GetTotalCoresCount() const;

                    /**
                     * 设置<p>总核数</p>
                     * @param _totalCoresCount <p>总核数</p>
                     * 
                     */
                    void SetTotalCoresCount(const int64_t& _totalCoresCount);

                    /**
                     * 判断参数 TotalCoresCount 是否已赋值
                     * @return TotalCoresCount 是否已赋值
                     * 
                     */
                    bool TotalCoresCountHasBeenSet() const;

                    /**
                     * 获取<p>已防护核数</p>
                     * @return DefendCoresCount <p>已防护核数</p>
                     * @deprecated
                     */
                    int64_t GetDefendCoresCount() const;

                    /**
                     * 设置<p>已防护核数</p>
                     * @param _defendCoresCount <p>已防护核数</p>
                     * @deprecated
                     */
                    void SetDefendCoresCount(const int64_t& _defendCoresCount);

                    /**
                     * 判断参数 DefendCoresCount 是否已赋值
                     * @return DefendCoresCount 是否已赋值
                     * @deprecated
                     */
                    bool DefendCoresCountHasBeenSet() const;

                    /**
                     * 获取<p>审计日志开关<br>(0:关闭 1:开启 2:开启失败 3:关闭失败)</p>
                     * @return AuditLogSwitchStatus <p>审计日志开关<br>(0:关闭 1:开启 2:开启失败 3:关闭失败)</p>
                     * 
                     */
                    int64_t GetAuditLogSwitchStatus() const;

                    /**
                     * 设置<p>审计日志开关<br>(0:关闭 1:开启 2:开启失败 3:关闭失败)</p>
                     * @param _auditLogSwitchStatus <p>审计日志开关<br>(0:关闭 1:开启 2:开启失败 3:关闭失败)</p>
                     * 
                     */
                    void SetAuditLogSwitchStatus(const int64_t& _auditLogSwitchStatus);

                    /**
                     * 判断参数 AuditLogSwitchStatus 是否已赋值
                     * @return AuditLogSwitchStatus 是否已赋值
                     * 
                     */
                    bool AuditLogSwitchStatusHasBeenSet() const;

                    /**
                     * 获取<p>防护状态<br>已防护: Defended</p>
                     * @return DefendStatus <p>防护状态<br>已防护: Defended</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>防护状态<br>已防护: Defended</p>
                     * @param _defendStatus <p>防护状态<br>已防护: Defended</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群状态</p>
                     * @return RunStatus <p>集群状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>集群状态</p>
                     * @param _runStatus <p>集群状态</p>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>k8s版本</p>
                     * @return Version <p>k8s版本</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>k8s版本</p>
                     * @param _version <p>k8s版本</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>最近资产同步时间</p>
                     * @return LastAssetSyncTime <p>最近资产同步时间</p>
                     * 
                     */
                    std::string GetLastAssetSyncTime() const;

                    /**
                     * 设置<p>最近资产同步时间</p>
                     * @param _lastAssetSyncTime <p>最近资产同步时间</p>
                     * 
                     */
                    void SetLastAssetSyncTime(const std::string& _lastAssetSyncTime);

                    /**
                     * 判断参数 LastAssetSyncTime 是否已赋值
                     * @return LastAssetSyncTime 是否已赋值
                     * 
                     */
                    bool LastAssetSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近风险检查时间</p>
                     * @return LastRiskCheckTime <p>最近风险检查时间</p>
                     * 
                     */
                    std::string GetLastRiskCheckTime() const;

                    /**
                     * 设置<p>最近风险检查时间</p>
                     * @param _lastRiskCheckTime <p>最近风险检查时间</p>
                     * 
                     */
                    void SetLastRiskCheckTime(const std::string& _lastRiskCheckTime);

                    /**
                     * 判断参数 LastRiskCheckTime 是否已赋值
                     * @return LastRiskCheckTime 是否已赋值
                     * 
                     */
                    bool LastRiskCheckTimeHasBeenSet() const;

                    /**
                     * 获取<p>风险状态</p>
                     * @return RiskStatus <p>风险状态</p>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>风险状态</p>
                     * @param _riskStatus <p>风险状态</p>
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<AssetTag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<AssetTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>负责人名称</p>
                     * @return OwnerName <p>负责人名称</p>
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置<p>负责人名称</p>
                     * @param _ownerName <p>负责人名称</p>
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return FailMessage <p>失败原因</p>
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _failMessage <p>失败原因</p>
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取<p>运行子状态</p>
                     * @return RunSubStatus <p>运行子状态</p>
                     * 
                     */
                    std::string GetRunSubStatus() const;

                    /**
                     * 设置<p>运行子状态</p>
                     * @param _runSubStatus <p>运行子状态</p>
                     * 
                     */
                    void SetRunSubStatus(const std::string& _runSubStatus);

                    /**
                     * 判断参数 RunSubStatus 是否已赋值
                     * @return RunSubStatus 是否已赋值
                     * 
                     */
                    bool RunSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群接入状态</p><p>枚举值：</p><ul><li>AccessedNone： 未接入</li><li>AccessedInstalling： 接入中</li><li>AccessedInstalled： 已接入-未防护</li><li>AccessedUninstalling： 卸载中</li><li>AccessedUninstallException： 卸载异常</li><li>AccessedDefended： 已接入-已防护</li><li>AccessedPartialDefence： 已接入-部分防护</li><li>AccessedException： 接入异常</li></ul>
                     * @return AccessedStatus <p>集群接入状态</p><p>枚举值：</p><ul><li>AccessedNone： 未接入</li><li>AccessedInstalling： 接入中</li><li>AccessedInstalled： 已接入-未防护</li><li>AccessedUninstalling： 卸载中</li><li>AccessedUninstallException： 卸载异常</li><li>AccessedDefended： 已接入-已防护</li><li>AccessedPartialDefence： 已接入-部分防护</li><li>AccessedException： 接入异常</li></ul>
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置<p>集群接入状态</p><p>枚举值：</p><ul><li>AccessedNone： 未接入</li><li>AccessedInstalling： 接入中</li><li>AccessedInstalled： 已接入-未防护</li><li>AccessedUninstalling： 卸载中</li><li>AccessedUninstallException： 卸载异常</li><li>AccessedDefended： 已接入-已防护</li><li>AccessedPartialDefence： 已接入-部分防护</li><li>AccessedException： 接入异常</li></ul>
                     * @param _accessedStatus <p>集群接入状态</p><p>枚举值：</p><ul><li>AccessedNone： 未接入</li><li>AccessedInstalling： 接入中</li><li>AccessedInstalled： 已接入-未防护</li><li>AccessedUninstalling： 卸载中</li><li>AccessedUninstallException： 卸载异常</li><li>AccessedDefended： 已接入-已防护</li><li>AccessedPartialDefence： 已接入-部分防护</li><li>AccessedException： 接入异常</li></ul>
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
                     * 获取<p>接入子状态</p>
                     * @return AccessedSubStatus <p>接入子状态</p>
                     * 
                     */
                    std::string GetAccessedSubStatus() const;

                    /**
                     * 设置<p>接入子状态</p>
                     * @param _accessedSubStatus <p>接入子状态</p>
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
                     * 获取<p>集群ca证书md5值，集群唯一标识</p>
                     * @return ClusterCaMD5 <p>集群ca证书md5值，集群唯一标识</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>集群ca证书md5值，集群唯一标识</p>
                     * @param _clusterCaMD5 <p>集群ca证书md5值，集群唯一标识</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>资产同步状态</p><p>枚举值：</p><ul><li>AssetCheckNone： 初始状态</li><li>AssetCheckSync： 同步中</li><li>AssetCheckFinished： 同步完成</li><li>AssetCheckFailed： 同步失败</li></ul>
                     * @return AssetSyncStatus <p>资产同步状态</p><p>枚举值：</p><ul><li>AssetCheckNone： 初始状态</li><li>AssetCheckSync： 同步中</li><li>AssetCheckFinished： 同步完成</li><li>AssetCheckFailed： 同步失败</li></ul>
                     * 
                     */
                    std::string GetAssetSyncStatus() const;

                    /**
                     * 设置<p>资产同步状态</p><p>枚举值：</p><ul><li>AssetCheckNone： 初始状态</li><li>AssetCheckSync： 同步中</li><li>AssetCheckFinished： 同步完成</li><li>AssetCheckFailed： 同步失败</li></ul>
                     * @param _assetSyncStatus <p>资产同步状态</p><p>枚举值：</p><ul><li>AssetCheckNone： 初始状态</li><li>AssetCheckSync： 同步中</li><li>AssetCheckFinished： 同步完成</li><li>AssetCheckFailed： 同步失败</li></ul>
                     * 
                     */
                    void SetAssetSyncStatus(const std::string& _assetSyncStatus);

                    /**
                     * 判断参数 AssetSyncStatus 是否已赋值
                     * @return AssetSyncStatus 是否已赋值
                     * 
                     */
                    bool AssetSyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群配置风险数量</p>
                     * @return RiskConfigCount <p>集群配置风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskConfigCount() const;

                    /**
                     * 设置<p>集群配置风险数量</p>
                     * @param _riskConfigCount <p>集群配置风险数量</p>
                     * @deprecated
                     */
                    void SetRiskConfigCount(const uint64_t& _riskConfigCount);

                    /**
                     * 判断参数 RiskConfigCount 是否已赋值
                     * @return RiskConfigCount 是否已赋值
                     * @deprecated
                     */
                    bool RiskConfigCountHasBeenSet() const;

                    /**
                     * 获取<p>集群接入失败原因</p>
                     * @return AccessFailedMessage <p>集群接入失败原因</p>
                     * @deprecated
                     */
                    std::string GetAccessFailedMessage() const;

                    /**
                     * 设置<p>集群接入失败原因</p>
                     * @param _accessFailedMessage <p>集群接入失败原因</p>
                     * @deprecated
                     */
                    void SetAccessFailedMessage(const std::string& _accessFailedMessage);

                    /**
                     * 判断参数 AccessFailedMessage 是否已赋值
                     * @return AccessFailedMessage 是否已赋值
                     * @deprecated
                     */
                    bool AccessFailedMessageHasBeenSet() const;

                    /**
                     * 获取<p>地域中文名</p>
                     * @return RegionName <p>地域中文名</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域中文名</p>
                     * @param _regionName <p>地域中文名</p>
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

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
                     * 设置<p>地域英文名</p>
                     * @param _regionNameEn <p>地域英文名</p>
                     * 
                     */
                    void SetRegionNameEn(const std::string& _regionNameEn);

                    /**
                     * 判断参数 RegionNameEn 是否已赋值
                     * @return RegionNameEn 是否已赋值
                     * 
                     */
                    bool RegionNameEnHasBeenSet() const;

                    /**
                     * 获取<p>未绑定旗舰版的节点数量</p>
                     * @return UnboundUltimateNodeCount <p>未绑定旗舰版的节点数量</p>
                     * 
                     */
                    uint64_t GetUnboundUltimateNodeCount() const;

                    /**
                     * 设置<p>未绑定旗舰版的节点数量</p>
                     * @param _unboundUltimateNodeCount <p>未绑定旗舰版的节点数量</p>
                     * 
                     */
                    void SetUnboundUltimateNodeCount(const uint64_t& _unboundUltimateNodeCount);

                    /**
                     * 判断参数 UnboundUltimateNodeCount 是否已赋值
                     * @return UnboundUltimateNodeCount 是否已赋值
                     * 
                     */
                    bool UnboundUltimateNodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群类型<br>MANAGED_CLUSTER: 托管集群</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

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
                     * <p>节点总数</p>
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * <p>离线节点总数</p>
                     */
                    uint64_t m_offlineNodeCount;
                    bool m_offlineNodeCountHasBeenSet;

                    /**
                     * <p>未安装节点总数</p>
                     */
                    uint64_t m_uninstallNodeCount;
                    bool m_uninstallNodeCountHasBeenSet;

                    /**
                     * <p>总核数</p>
                     */
                    int64_t m_totalCoresCount;
                    bool m_totalCoresCountHasBeenSet;

                    /**
                     * <p>已防护核数</p>
                     */
                    int64_t m_defendCoresCount;
                    bool m_defendCoresCountHasBeenSet;

                    /**
                     * <p>审计日志开关<br>(0:关闭 1:开启 2:开启失败 3:关闭失败)</p>
                     */
                    int64_t m_auditLogSwitchStatus;
                    bool m_auditLogSwitchStatusHasBeenSet;

                    /**
                     * <p>防护状态<br>已防护: Defended</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>集群状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>k8s版本</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>最近资产同步时间</p>
                     */
                    std::string m_lastAssetSyncTime;
                    bool m_lastAssetSyncTimeHasBeenSet;

                    /**
                     * <p>最近风险检查时间</p>
                     */
                    std::string m_lastRiskCheckTime;
                    bool m_lastRiskCheckTimeHasBeenSet;

                    /**
                     * <p>风险状态</p>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<AssetTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>负责人名称</p>
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * <p>运行子状态</p>
                     */
                    std::string m_runSubStatus;
                    bool m_runSubStatusHasBeenSet;

                    /**
                     * <p>集群接入状态</p><p>枚举值：</p><ul><li>AccessedNone： 未接入</li><li>AccessedInstalling： 接入中</li><li>AccessedInstalled： 已接入-未防护</li><li>AccessedUninstalling： 卸载中</li><li>AccessedUninstallException： 卸载异常</li><li>AccessedDefended： 已接入-已防护</li><li>AccessedPartialDefence： 已接入-部分防护</li><li>AccessedException： 接入异常</li></ul>
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                    /**
                     * <p>接入子状态</p>
                     */
                    std::string m_accessedSubStatus;
                    bool m_accessedSubStatusHasBeenSet;

                    /**
                     * <p>集群ca证书md5值，集群唯一标识</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>资产同步状态</p><p>枚举值：</p><ul><li>AssetCheckNone： 初始状态</li><li>AssetCheckSync： 同步中</li><li>AssetCheckFinished： 同步完成</li><li>AssetCheckFailed： 同步失败</li></ul>
                     */
                    std::string m_assetSyncStatus;
                    bool m_assetSyncStatusHasBeenSet;

                    /**
                     * <p>集群配置风险数量</p>
                     */
                    uint64_t m_riskConfigCount;
                    bool m_riskConfigCountHasBeenSet;

                    /**
                     * <p>集群接入失败原因</p>
                     */
                    std::string m_accessFailedMessage;
                    bool m_accessFailedMessageHasBeenSet;

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
                     * <p>未绑定旗舰版的节点数量</p>
                     */
                    uint64_t m_unboundUltimateNodeCount;
                    bool m_unboundUltimateNodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERLISTITEM_H_
