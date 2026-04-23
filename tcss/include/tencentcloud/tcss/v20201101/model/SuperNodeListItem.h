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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODELISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODELISTITEM_H_

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
                * 超级节点信息
                */
                class SuperNodeListItem : public AbstractModel
                {
                public:
                    SuperNodeListItem();
                    ~SuperNodeListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>超级节点ID</p>
                     * @return NodeID <p>超级节点ID</p>
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置<p>超级节点ID</p>
                     * @param _nodeID <p>超级节点ID</p>
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取<p>超级节点名称</p>
                     * @return NodeName <p>超级节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>超级节点名称</p>
                     * @param _nodeName <p>超级节点名称</p>
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
                     * 获取<p>所属集群名</p>
                     * @return ClusterName <p>所属集群名</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>所属集群名</p>
                     * @param _clusterName <p>所属集群名</p>
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
                     * 获取<p>所属集群ID</p>
                     * @return ClusterID <p>所属集群ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>所属集群ID</p>
                     * @param _clusterID <p>所属集群ID</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>节点状态:Running,Ready,Notready,Initializing,Failed,Error</p>
                     * @return Status <p>节点状态:Running,Ready,Notready,Initializing,Failed,Error</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>节点状态:Running,Ready,Notready,Initializing,Failed,Error</p>
                     * @param _status <p>节点状态:Running,Ready,Notready,Initializing,Failed,Error</p>
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
                     * 获取<p>子网ID</p>
                     * @return SubNetID <p>子网ID</p>
                     * 
                     */
                    std::string GetSubNetID() const;

                    /**
                     * 设置<p>子网ID</p>
                     * @param _subNetID <p>子网ID</p>
                     * 
                     */
                    void SetSubNetID(const std::string& _subNetID);

                    /**
                     * 判断参数 SubNetID 是否已赋值
                     * @return SubNetID 是否已赋值
                     * 
                     */
                    bool SubNetIDHasBeenSet() const;

                    /**
                     * 获取<p>子网名称</p>
                     * @return SubNetName <p>子网名称</p>
                     * 
                     */
                    std::string GetSubNetName() const;

                    /**
                     * 设置<p>子网名称</p>
                     * @param _subNetName <p>子网名称</p>
                     * 
                     */
                    void SetSubNetName(const std::string& _subNetName);

                    /**
                     * 判断参数 SubNetName 是否已赋值
                     * @return SubNetName 是否已赋值
                     * 
                     */
                    bool SubNetNameHasBeenSet() const;

                    /**
                     * 获取<p>子网网段</p>
                     * @return SubNetCidr <p>子网网段</p>
                     * 
                     */
                    std::string GetSubNetCidr() const;

                    /**
                     * 设置<p>子网网段</p>
                     * @param _subNetCidr <p>子网网段</p>
                     * 
                     */
                    void SetSubNetCidr(const std::string& _subNetCidr);

                    /**
                     * 判断参数 SubNetCidr 是否已赋值
                     * @return SubNetCidr 是否已赋值
                     * 
                     */
                    bool SubNetCidrHasBeenSet() const;

                    /**
                     * 获取<p>可用区ID</p>
                     * @return ZoneID <p>可用区ID</p>
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置<p>可用区ID</p>
                     * @param _zoneID <p>可用区ID</p>
                     * 
                     */
                    void SetZoneID(const std::string& _zoneID);

                    /**
                     * 判断参数 ZoneID 是否已赋值
                     * @return ZoneID 是否已赋值
                     * 
                     */
                    bool ZoneIDHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

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
                     * 获取<p>关联pod数</p>
                     * @return RelatePodCount <p>关联pod数</p>
                     * 
                     */
                    uint64_t GetRelatePodCount() const;

                    /**
                     * 设置<p>关联pod数</p>
                     * @param _relatePodCount <p>关联pod数</p>
                     * 
                     */
                    void SetRelatePodCount(const uint64_t& _relatePodCount);

                    /**
                     * 判断参数 RelatePodCount 是否已赋值
                     * @return RelatePodCount 是否已赋值
                     * 
                     */
                    bool RelatePodCountHasBeenSet() const;

                    /**
                     * 获取<p>关联容器数</p>
                     * @return RelateContainerCount <p>关联容器数</p>
                     * 
                     */
                    uint64_t GetRelateContainerCount() const;

                    /**
                     * 设置<p>关联容器数</p>
                     * @param _relateContainerCount <p>关联容器数</p>
                     * 
                     */
                    void SetRelateContainerCount(const uint64_t& _relateContainerCount);

                    /**
                     * 判断参数 RelateContainerCount 是否已赋值
                     * @return RelateContainerCount 是否已赋值
                     * 
                     */
                    bool RelateContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;</p>
                     * @return AgentStatus <p>agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;</p>
                     * @param _agentStatus <p>agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;</p>
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取<p>节点唯一id</p>
                     * @return NodeUniqueID <p>节点唯一id</p>
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置<p>节点唯一id</p>
                     * @param _nodeUniqueID <p>节点唯一id</p>
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>集群接入状态</p>
                     * @return ClusterAccessedStatus <p>集群接入状态</p>
                     * 
                     */
                    std::string GetClusterAccessedStatus() const;

                    /**
                     * 设置<p>集群接入状态</p>
                     * @param _clusterAccessedStatus <p>集群接入状态</p>
                     * 
                     */
                    void SetClusterAccessedStatus(const std::string& _clusterAccessedStatus);

                    /**
                     * 判断参数 ClusterAccessedStatus 是否已赋值
                     * @return ClusterAccessedStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedStatusHasBeenSet() const;

                    /**
                     * 获取<p>计费核数</p>
                     * @return ChargeCoresCnt <p>计费核数</p>
                     * 
                     */
                    uint64_t GetChargeCoresCnt() const;

                    /**
                     * 设置<p>计费核数</p>
                     * @param _chargeCoresCnt <p>计费核数</p>
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
                     * 获取<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * @return DefendStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     * @param _defendStatus <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
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
                     * 获取<p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * @return ClusterAccessedSubStatus <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * 
                     */
                    std::string GetClusterAccessedSubStatus() const;

                    /**
                     * 设置<p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * @param _clusterAccessedSubStatus <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     * 
                     */
                    void SetClusterAccessedSubStatus(const std::string& _clusterAccessedSubStatus);

                    /**
                     * 判断参数 ClusterAccessedSubStatus 是否已赋值
                     * @return ClusterAccessedSubStatus 是否已赋值
                     * 
                     */
                    bool ClusterAccessedSubStatusHasBeenSet() const;

                    /**
                     * 获取<p>失败具体原因描述</p>
                     * @return ClusterAccessedErrorReason <p>失败具体原因描述</p>
                     * 
                     */
                    std::string GetClusterAccessedErrorReason() const;

                    /**
                     * 设置<p>失败具体原因描述</p>
                     * @param _clusterAccessedErrorReason <p>失败具体原因描述</p>
                     * 
                     */
                    void SetClusterAccessedErrorReason(const std::string& _clusterAccessedErrorReason);

                    /**
                     * 判断参数 ClusterAccessedErrorReason 是否已赋值
                     * @return ClusterAccessedErrorReason 是否已赋值
                     * 
                     */
                    bool ClusterAccessedErrorReasonHasBeenSet() const;

                private:

                    /**
                     * <p>超级节点ID</p>
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * <p>超级节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>所属集群名</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>所属集群ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>节点状态:Running,Ready,Notready,Initializing,Failed,Error</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>子网ID</p>
                     */
                    std::string m_subNetID;
                    bool m_subNetIDHasBeenSet;

                    /**
                     * <p>子网名称</p>
                     */
                    std::string m_subNetName;
                    bool m_subNetNameHasBeenSet;

                    /**
                     * <p>子网网段</p>
                     */
                    std::string m_subNetCidr;
                    bool m_subNetCidrHasBeenSet;

                    /**
                     * <p>可用区ID</p>
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>关联pod数</p>
                     */
                    uint64_t m_relatePodCount;
                    bool m_relatePodCountHasBeenSet;

                    /**
                     * <p>关联容器数</p>
                     */
                    uint64_t m_relateContainerCount;
                    bool m_relateContainerCountHasBeenSet;

                    /**
                     * <p>agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>节点唯一id</p>
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * <p>集群接入状态</p>
                     */
                    std::string m_clusterAccessedStatus;
                    bool m_clusterAccessedStatusHasBeenSet;

                    /**
                     * <p>计费核数</p>
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * <p>防护状态:<br>已防护: Defended<br>未防护: UnDefended</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>集群接入子状态</p><p>枚举值：</p><ul><li>AccessedSubNone： 无</li><li>AccessedSubUninstallException： 卸载异常</li><li>AccessedSubTimeout： 接入超时</li><li>AccessedSubUninstallTimeout： 卸载超时</li><li>AccessedSubResourceException： 集群组件检查异常-Deployment/DaemonSet等异常</li><li>AccessedSubCAMPermissionDenied： CAM权限不够</li></ul>
                     */
                    std::string m_clusterAccessedSubStatus;
                    bool m_clusterAccessedSubStatusHasBeenSet;

                    /**
                     * <p>失败具体原因描述</p>
                     */
                    std::string m_clusterAccessedErrorReason;
                    bool m_clusterAccessedErrorReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODELISTITEM_H_
