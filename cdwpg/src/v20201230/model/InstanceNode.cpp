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

#include <tencentcloud/cdwpg/v20201230/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_nodeIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIpHasBeenSet(false),
    m_privateNetworkIpHasBeenSet(false),
    m_nodeRoleHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_dataDiskCountHasBeenSet(false),
    m_dataDiskSizeHasBeenSet(false),
    m_dataDiskTypeHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = value["NodeId"].GetInt64();
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeIp") && !value["NodeIp"].IsNull())
    {
        if (!value["NodeIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIp = string(value["NodeIp"].GetString());
        m_nodeIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateNetworkIp") && !value["PrivateNetworkIp"].IsNull())
    {
        if (!value["PrivateNetworkIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.PrivateNetworkIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateNetworkIp = string(value["PrivateNetworkIp"].GetString());
        m_privateNetworkIpHasBeenSet = true;
    }

    if (value.HasMember("NodeRole") && !value["NodeRole"].IsNull())
    {
        if (!value["NodeRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRole = string(value["NodeRole"].GetString());
        m_nodeRoleHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("DataDiskCount") && !value["DataDiskCount"].IsNull())
    {
        if (!value["DataDiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DataDiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskCount = value["DataDiskCount"].GetInt64();
        m_dataDiskCountHasBeenSet = true;
    }

    if (value.HasMember("DataDiskSize") && !value["DataDiskSize"].IsNull())
    {
        if (!value["DataDiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DataDiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskSize = value["DataDiskSize"].GetInt64();
        m_dataDiskSizeHasBeenSet = true;
    }

    if (value.HasMember("DataDiskType") && !value["DataDiskType"].IsNull())
    {
        if (!value["DataDiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DataDiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataDiskType = string(value["DataDiskType"].GetString());
        m_dataDiskTypeHasBeenSet = true;
    }

    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeId, allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateNetworkIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateNetworkIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateNetworkIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRole.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_dataDiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskCount, allocator);
    }

    if (m_dataDiskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDiskSize, allocator);
    }

    if (m_dataDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataDiskType.c_str(), allocator).Move(), allocator);
    }

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceNode::GetNodeId() const
{
    return m_nodeId;
}

void InstanceNode::SetNodeId(const int64_t& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InstanceNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string InstanceNode::GetNodeType() const
{
    return m_nodeType;
}

void InstanceNode::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool InstanceNode::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string InstanceNode::GetNodeIp() const
{
    return m_nodeIp;
}

void InstanceNode::SetNodeIp(const string& _nodeIp)
{
    m_nodeIp = _nodeIp;
    m_nodeIpHasBeenSet = true;
}

bool InstanceNode::NodeIpHasBeenSet() const
{
    return m_nodeIpHasBeenSet;
}

string InstanceNode::GetPrivateNetworkIp() const
{
    return m_privateNetworkIp;
}

void InstanceNode::SetPrivateNetworkIp(const string& _privateNetworkIp)
{
    m_privateNetworkIp = _privateNetworkIp;
    m_privateNetworkIpHasBeenSet = true;
}

bool InstanceNode::PrivateNetworkIpHasBeenSet() const
{
    return m_privateNetworkIpHasBeenSet;
}

string InstanceNode::GetNodeRole() const
{
    return m_nodeRole;
}

void InstanceNode::SetNodeRole(const string& _nodeRole)
{
    m_nodeRole = _nodeRole;
    m_nodeRoleHasBeenSet = true;
}

bool InstanceNode::NodeRoleHasBeenSet() const
{
    return m_nodeRoleHasBeenSet;
}

string InstanceNode::GetNodeName() const
{
    return m_nodeName;
}

void InstanceNode::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool InstanceNode::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string InstanceNode::GetSpecName() const
{
    return m_specName;
}

void InstanceNode::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool InstanceNode::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t InstanceNode::GetCpu() const
{
    return m_cpu;
}

void InstanceNode::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceNode::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InstanceNode::GetMemory() const
{
    return m_memory;
}

void InstanceNode::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceNode::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InstanceNode::GetDataDiskCount() const
{
    return m_dataDiskCount;
}

void InstanceNode::SetDataDiskCount(const int64_t& _dataDiskCount)
{
    m_dataDiskCount = _dataDiskCount;
    m_dataDiskCountHasBeenSet = true;
}

bool InstanceNode::DataDiskCountHasBeenSet() const
{
    return m_dataDiskCountHasBeenSet;
}

int64_t InstanceNode::GetDataDiskSize() const
{
    return m_dataDiskSize;
}

void InstanceNode::SetDataDiskSize(const int64_t& _dataDiskSize)
{
    m_dataDiskSize = _dataDiskSize;
    m_dataDiskSizeHasBeenSet = true;
}

bool InstanceNode::DataDiskSizeHasBeenSet() const
{
    return m_dataDiskSizeHasBeenSet;
}

string InstanceNode::GetDataDiskType() const
{
    return m_dataDiskType;
}

void InstanceNode::SetDataDiskType(const string& _dataDiskType)
{
    m_dataDiskType = _dataDiskType;
    m_dataDiskTypeHasBeenSet = true;
}

bool InstanceNode::DataDiskTypeHasBeenSet() const
{
    return m_dataDiskTypeHasBeenSet;
}

string InstanceNode::GetUUID() const
{
    return m_uUID;
}

void InstanceNode::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool InstanceNode::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

string InstanceNode::GetZone() const
{
    return m_zone;
}

void InstanceNode::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceNode::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

