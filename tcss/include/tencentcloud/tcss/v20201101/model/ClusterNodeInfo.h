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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERNODEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERNODEINFO_H_

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
                * 集群的节点信息
                */
                class ClusterNodeInfo : public AbstractModel
                {
                public:
                    ClusterNodeInfo();
                    ~ClusterNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取内网ip地址
                     * @return PrivateIpAddresses 内网ip地址
                     * 
                     */
                    std::string GetPrivateIpAddresses() const;

                    /**
                     * 设置内网ip地址
                     * @param _privateIpAddresses 内网ip地址
                     * 
                     */
                    void SetPrivateIpAddresses(const std::string& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取节点的角色，Master、Work等
                     * @return InstanceRole 节点的角色，Master、Work等
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置节点的角色，Master、Work等
                     * @param _instanceRole 节点的角色，Master、Work等
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * @return InstanceState 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * @param _instanceState 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

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
                     * 获取agent安装状态
                     * @return AgentStatus agent安装状态
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置agent安装状态
                     * @param _agentStatus agent安装状态
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
                     * 获取公网ip
                     * @return PublicIP 公网ip
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置公网ip
                     * @param _publicIP 公网ip
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return HostID 节点ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置节点ID
                     * @param _hostID 节点ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机类型(普通节点情况)
                     * @return MachineType 主机类型(普通节点情况)
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置主机类型(普通节点情况)
                     * @param _machineType 主机类型(普通节点情况)
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取节点类型(
NORMAL: 普通节点
SUPER:超级节点
)
                     * @return NodeType 节点类型(
NORMAL: 普通节点
SUPER:超级节点
)
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型(
NORMAL: 普通节点
SUPER:超级节点
)
                     * @param _nodeType 节点类型(
NORMAL: 普通节点
SUPER:超级节点
)
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
                     * 获取uuid
                     * @return UUID uuid
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置uuid
                     * @param _uUID uuid
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

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
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 内网ip地址
                     */
                    std::string m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * 节点的角色，Master、Work等
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 实例的状态（running 运行中，initializing 初始化中，failed 异常）
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * agent安装状态
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 公网ip
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机类型(普通节点情况)
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 节点类型(
NORMAL: 普通节点
SUPER:超级节点
)
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * uuid
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERNODEINFO_H_
