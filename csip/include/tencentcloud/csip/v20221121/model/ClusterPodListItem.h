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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterContainerListItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群pod列表项
                */
                class ClusterPodListItem : public AbstractModel
                {
                public:
                    ClusterPodListItem();
                    ~ClusterPodListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>pod唯一id</p>
                     * @return PodUid <p>pod唯一id</p>
                     * 
                     */
                    std::string GetPodUid() const;

                    /**
                     * 设置<p>pod唯一id</p>
                     * @param _podUid <p>pod唯一id</p>
                     * 
                     */
                    void SetPodUid(const std::string& _podUid);

                    /**
                     * 判断参数 PodUid 是否已赋值
                     * @return PodUid 是否已赋值
                     * 
                     */
                    bool PodUidHasBeenSet() const;

                    /**
                     * 获取<p>pod名称</p>
                     * @return PodName <p>pod名称</p>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>pod名称</p>
                     * @param _podName <p>pod名称</p>
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
                     * 获取<p>podip数组</p>
                     * @return PodIPs <p>podip数组</p>
                     * 
                     */
                    std::vector<std::string> GetPodIPs() const;

                    /**
                     * 设置<p>podip数组</p>
                     * @param _podIPs <p>podip数组</p>
                     * 
                     */
                    void SetPodIPs(const std::vector<std::string>& _podIPs);

                    /**
                     * 判断参数 PodIPs 是否已赋值
                     * @return PodIPs 是否已赋值
                     * 
                     */
                    bool PodIPsHasBeenSet() const;

                    /**
                     * 获取<p>pod状态</p>
                     * @return RunStatus <p>pod状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>pod状态</p>
                     * @param _runStatus <p>pod状态</p>
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
                     * 获取<p>防护核数</p>
                     * @return DefendCoresCount <p>防护核数</p>
                     * @deprecated
                     */
                    int64_t GetDefendCoresCount() const;

                    /**
                     * 设置<p>防护核数</p>
                     * @param _defendCoresCount <p>防护核数</p>
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
                     * 获取<p>节点id</p>
                     * @return NodeId <p>节点id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点id</p>
                     * @param _nodeId <p>节点id</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
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
                     * 获取<p>负载名称</p>
                     * @return WorkloadName <p>负载名称</p>
                     * 
                     */
                    std::string GetWorkloadName() const;

                    /**
                     * 设置<p>负载名称</p>
                     * @param _workloadName <p>负载名称</p>
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
                     * 获取<p>负载类型</p>
                     * @return WorkloadType <p>负载类型</p>
                     * 
                     */
                    std::string GetWorkloadType() const;

                    /**
                     * 设置<p>负载类型</p>
                     * @param _workloadType <p>负载类型</p>
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
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Pod唯一标识ID</p>
                     * @return UniqueID <p>Pod唯一标识ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置<p>Pod唯一标识ID</p>
                     * @param _uniqueID <p>Pod唯一标识ID</p>
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>严重风险数量</p>
                     * @return RiskEventCriticalCount <p>严重风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventCriticalCount() const;

                    /**
                     * 设置<p>严重风险数量</p>
                     * @param _riskEventCriticalCount <p>严重风险数量</p>
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
                     * 获取<p>高危风险数量</p>
                     * @return RiskEventHighCount <p>高危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventHighCount() const;

                    /**
                     * 设置<p>高危风险数量</p>
                     * @param _riskEventHighCount <p>高危风险数量</p>
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
                     * 获取<p>中危风险数量</p>
                     * @return RiskEventMiddleCount <p>中危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventMiddleCount() const;

                    /**
                     * 设置<p>中危风险数量</p>
                     * @param _riskEventMiddleCount <p>中危风险数量</p>
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
                     * 获取<p>低危风险数量</p>
                     * @return RiskEventLowCount <p>低危风险数量</p>
                     * @deprecated
                     */
                    uint64_t GetRiskEventLowCount() const;

                    /**
                     * 设置<p>低危风险数量</p>
                     * @param _riskEventLowCount <p>低危风险数量</p>
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
                     * 获取<p>严重告警数量</p>
                     * @return AlarmEventCriticalCount <p>严重告警数量</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventCriticalCount() const;

                    /**
                     * 设置<p>严重告警数量</p>
                     * @param _alarmEventCriticalCount <p>严重告警数量</p>
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
                     * 获取<p>高危告警数量</p>
                     * @return AlarmEventHighCount <p>高危告警数量</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventHighCount() const;

                    /**
                     * 设置<p>高危告警数量</p>
                     * @param _alarmEventHighCount <p>高危告警数量</p>
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
                     * 获取<p>中危告警数量</p>
                     * @return AlarmEventMiddleCount <p>中危告警数量</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventMiddleCount() const;

                    /**
                     * 设置<p>中危告警数量</p>
                     * @param _alarmEventMiddleCount <p>中危告警数量</p>
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
                     * 获取<p>低危告警数量</p>
                     * @return AlarmEventLowCount <p>低危告警数量</p>
                     * @deprecated
                     */
                    uint64_t GetAlarmEventLowCount() const;

                    /**
                     * 设置<p>低危告警数量</p>
                     * @param _alarmEventLowCount <p>低危告警数量</p>
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
                     * 获取<p>关联容器列表</p>
                     * @return ContainerList <p>关联容器列表</p>
                     * 
                     */
                    std::vector<ClusterContainerListItem> GetContainerList() const;

                    /**
                     * 设置<p>关联容器列表</p>
                     * @param _containerList <p>关联容器列表</p>
                     * 
                     */
                    void SetContainerList(const std::vector<ClusterContainerListItem>& _containerList);

                    /**
                     * 判断参数 ContainerList 是否已赋值
                     * @return ContainerList 是否已赋值
                     * 
                     */
                    bool ContainerListHasBeenSet() const;

                    /**
                     * 获取<p>关联告警数</p>
                     * @return AlarmCount <p>关联告警数</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>关联告警数</p>
                     * @param _alarmCount <p>关联告警数</p>
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取<p>核数</p><p>单位：毫核</p>
                     * @return CoresCount <p>核数</p><p>单位：毫核</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 设置<p>核数</p><p>单位：毫核</p>
                     * @param _coresCount <p>核数</p><p>单位：毫核</p>
                     * 
                     */
                    void SetCoresCount(const int64_t& _coresCount);

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                private:

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>pod唯一id</p>
                     */
                    std::string m_podUid;
                    bool m_podUidHasBeenSet;

                    /**
                     * <p>pod名称</p>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>podip数组</p>
                     */
                    std::vector<std::string> m_podIPs;
                    bool m_podIPsHasBeenSet;

                    /**
                     * <p>pod状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>防护核数</p>
                     */
                    int64_t m_defendCoresCount;
                    bool m_defendCoresCountHasBeenSet;

                    /**
                     * <p>节点id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>负载名称</p>
                     */
                    std::string m_workloadName;
                    bool m_workloadNameHasBeenSet;

                    /**
                     * <p>负载类型</p>
                     */
                    std::string m_workloadType;
                    bool m_workloadTypeHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Pod唯一标识ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>严重风险数量</p>
                     */
                    uint64_t m_riskEventCriticalCount;
                    bool m_riskEventCriticalCountHasBeenSet;

                    /**
                     * <p>高危风险数量</p>
                     */
                    uint64_t m_riskEventHighCount;
                    bool m_riskEventHighCountHasBeenSet;

                    /**
                     * <p>中危风险数量</p>
                     */
                    uint64_t m_riskEventMiddleCount;
                    bool m_riskEventMiddleCountHasBeenSet;

                    /**
                     * <p>低危风险数量</p>
                     */
                    uint64_t m_riskEventLowCount;
                    bool m_riskEventLowCountHasBeenSet;

                    /**
                     * <p>严重告警数量</p>
                     */
                    uint64_t m_alarmEventCriticalCount;
                    bool m_alarmEventCriticalCountHasBeenSet;

                    /**
                     * <p>高危告警数量</p>
                     */
                    uint64_t m_alarmEventHighCount;
                    bool m_alarmEventHighCountHasBeenSet;

                    /**
                     * <p>中危告警数量</p>
                     */
                    uint64_t m_alarmEventMiddleCount;
                    bool m_alarmEventMiddleCountHasBeenSet;

                    /**
                     * <p>低危告警数量</p>
                     */
                    uint64_t m_alarmEventLowCount;
                    bool m_alarmEventLowCountHasBeenSet;

                    /**
                     * <p>关联容器列表</p>
                     */
                    std::vector<ClusterContainerListItem> m_containerList;
                    bool m_containerListHasBeenSet;

                    /**
                     * <p>关联告警数</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>核数</p><p>单位：毫核</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERPODLISTITEM_H_
