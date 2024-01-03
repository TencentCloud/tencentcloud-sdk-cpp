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

#include <tencentcloud/tcss/v20201101/model/ClusterNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ClusterNodeInfo::ClusterNodeInfo() :
    m_instanceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_chargeCoresCntHasBeenSet(false),
    m_defendStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClusterNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpAddresses") && !value["PrivateIpAddresses"].IsNull())
    {
        if (!value["PrivateIpAddresses"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.PrivateIpAddresses` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpAddresses = string(value["PrivateIpAddresses"].GetString());
        m_privateIpAddressesHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("ChargeCoresCnt") && !value["ChargeCoresCnt"].IsNull())
    {
        if (!value["ChargeCoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.ChargeCoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeCoresCnt = value["ChargeCoresCnt"].GetUint64();
        m_chargeCoresCntHasBeenSet = true;
    }

    if (value.HasMember("DefendStatus") && !value["DefendStatus"].IsNull())
    {
        if (!value["DefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNodeInfo.DefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defendStatus = string(value["DefendStatus"].GetString());
        m_defendStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpAddresses.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeCoresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeCoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeCoresCnt, allocator);
    }

    if (m_defendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defendStatus.c_str(), allocator).Move(), allocator);
    }

}


string ClusterNodeInfo::GetInstanceId() const
{
    return m_instanceId;
}

void ClusterNodeInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClusterNodeInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClusterNodeInfo::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void ClusterNodeInfo::SetPrivateIpAddresses(const string& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool ClusterNodeInfo::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

string ClusterNodeInfo::GetInstanceRole() const
{
    return m_instanceRole;
}

void ClusterNodeInfo::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool ClusterNodeInfo::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string ClusterNodeInfo::GetInstanceState() const
{
    return m_instanceState;
}

void ClusterNodeInfo::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool ClusterNodeInfo::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string ClusterNodeInfo::GetNodeName() const
{
    return m_nodeName;
}

void ClusterNodeInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ClusterNodeInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ClusterNodeInfo::GetAgentStatus() const
{
    return m_agentStatus;
}

void ClusterNodeInfo::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool ClusterNodeInfo::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string ClusterNodeInfo::GetPublicIP() const
{
    return m_publicIP;
}

void ClusterNodeInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool ClusterNodeInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string ClusterNodeInfo::GetHostID() const
{
    return m_hostID;
}

void ClusterNodeInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool ClusterNodeInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string ClusterNodeInfo::GetMachineType() const
{
    return m_machineType;
}

void ClusterNodeInfo::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool ClusterNodeInfo::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string ClusterNodeInfo::GetNodeType() const
{
    return m_nodeType;
}

void ClusterNodeInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ClusterNodeInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ClusterNodeInfo::GetUUID() const
{
    return m_uUID;
}

void ClusterNodeInfo::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool ClusterNodeInfo::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

uint64_t ClusterNodeInfo::GetChargeCoresCnt() const
{
    return m_chargeCoresCnt;
}

void ClusterNodeInfo::SetChargeCoresCnt(const uint64_t& _chargeCoresCnt)
{
    m_chargeCoresCnt = _chargeCoresCnt;
    m_chargeCoresCntHasBeenSet = true;
}

bool ClusterNodeInfo::ChargeCoresCntHasBeenSet() const
{
    return m_chargeCoresCntHasBeenSet;
}

string ClusterNodeInfo::GetDefendStatus() const
{
    return m_defendStatus;
}

void ClusterNodeInfo::SetDefendStatus(const string& _defendStatus)
{
    m_defendStatus = _defendStatus;
    m_defendStatusHasBeenSet = true;
}

bool ClusterNodeInfo::DefendStatusHasBeenSet() const
{
    return m_defendStatusHasBeenSet;
}

