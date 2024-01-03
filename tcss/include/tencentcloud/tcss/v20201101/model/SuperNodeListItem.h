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
                     * 获取超级节点ID
                     * @return NodeID 超级节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置超级节点ID
                     * @param _nodeID 超级节点ID
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
                     * 获取超级节点名称
                     * @return NodeName 超级节点名称
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置超级节点名称
                     * @param _nodeName 超级节点名称
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
                     * 获取所属集群名
                     * @return ClusterName 所属集群名
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置所属集群名
                     * @param _clusterName 所属集群名
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
                     * @return ClusterID 所属集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置所属集群ID
                     * @param _clusterID 所属集群ID
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
                     * 获取节点状态:Running,Ready,Notready,Initializing,Failed,Error
                     * @return Status 节点状态:Running,Ready,Notready,Initializing,Failed,Error
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置节点状态:Running,Ready,Notready,Initializing,Failed,Error
                     * @param _status 节点状态:Running,Ready,Notready,Initializing,Failed,Error
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
                     * 获取子网ID
                     * @return SubNetID 子网ID
                     * 
                     */
                    std::string GetSubNetID() const;

                    /**
                     * 设置子网ID
                     * @param _subNetID 子网ID
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
                     * 获取子网名称
                     * @return SubNetName 子网名称
                     * 
                     */
                    std::string GetSubNetName() const;

                    /**
                     * 设置子网名称
                     * @param _subNetName 子网名称
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
                     * 获取子网网段
                     * @return SubNetCidr 子网网段
                     * 
                     */
                    std::string GetSubNetCidr() const;

                    /**
                     * 设置子网网段
                     * @param _subNetCidr 子网网段
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
                     * 获取可用区ID
                     * @return ZoneID 可用区ID
                     * 
                     */
                    std::string GetZoneID() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneID 可用区ID
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取关联pod数
                     * @return RelatePodCount 关联pod数
                     * 
                     */
                    uint64_t GetRelatePodCount() const;

                    /**
                     * 设置关联pod数
                     * @param _relatePodCount 关联pod数
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
                     * 获取关联容器数
                     * @return RelateContainerCount 关联容器数
                     * 
                     */
                    uint64_t GetRelateContainerCount() const;

                    /**
                     * 设置关联容器数
                     * @param _relateContainerCount 关联容器数
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
                     * 获取agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;
                     * @return AgentStatus agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;
                     * @param _agentStatus agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;
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
                     * 获取节点唯一id
                     * @return NodeUniqueID 节点唯一id
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置节点唯一id
                     * @param _nodeUniqueID 节点唯一id
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
                     * 获取集群接入状态
                     * @return ClusterAccessedStatus 集群接入状态
                     * 
                     */
                    std::string GetClusterAccessedStatus() const;

                    /**
                     * 设置集群接入状态
                     * @param _clusterAccessedStatus 集群接入状态
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

                    /**
                     * 获取防护状态:
已防护: Defended
未防护: UnDefended
                     * @return DefendStatus 防护状态:
已防护: Defended
未防护: UnDefended
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置防护状态:
已防护: Defended
未防护: UnDefended
                     * @param _defendStatus 防护状态:
已防护: Defended
未防护: UnDefended
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                private:

                    /**
                     * 超级节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * 超级节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 所属集群名
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 所属集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 节点状态:Running,Ready,Notready,Initializing,Failed,Error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subNetID;
                    bool m_subNetIDHasBeenSet;

                    /**
                     * 子网名称
                     */
                    std::string m_subNetName;
                    bool m_subNetNameHasBeenSet;

                    /**
                     * 子网网段
                     */
                    std::string m_subNetCidr;
                    bool m_subNetCidrHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::string m_zoneID;
                    bool m_zoneIDHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 关联pod数
                     */
                    uint64_t m_relatePodCount;
                    bool m_relatePodCountHasBeenSet;

                    /**
                     * 关联容器数
                     */
                    uint64_t m_relateContainerCount;
                    bool m_relateContainerCountHasBeenSet;

                    /**
                     * agent安装状态UNINSTALL:未安装;INSTALLED:已安装;INSTALLING:安装中;
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 节点唯一id
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 集群接入状态
                     */
                    std::string m_clusterAccessedStatus;
                    bool m_clusterAccessedStatusHasBeenSet;

                    /**
                     * 计费核数
                     */
                    uint64_t m_chargeCoresCnt;
                    bool m_chargeCoresCntHasBeenSet;

                    /**
                     * 防护状态:
已防护: Defended
未防护: UnDefended
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SUPERNODELISTITEM_H_
