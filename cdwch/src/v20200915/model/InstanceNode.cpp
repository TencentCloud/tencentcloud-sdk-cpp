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

#include <tencentcloud/cdwch/v20200915/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_ipHasBeenSet(false),
    m_specHasBeenSet(false),
    m_coreHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_nodeGroupsHasBeenSet(false),
    m_ripHasBeenSet(false),
    m_isCHProxyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_uUIDHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneDescHasBeenSet(false),
    m_realResourceIdHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("Core") && !value["Core"].IsNull())
    {
        if (!value["Core"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Core` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_core = value["Core"].GetInt64();
        m_coreHasBeenSet = true;
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

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("Cluster") && !value["Cluster"].IsNull())
    {
        if (!value["Cluster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Cluster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cluster = string(value["Cluster"].GetString());
        m_clusterHasBeenSet = true;
    }

    if (value.HasMember("NodeGroups") && !value["NodeGroups"].IsNull())
    {
        if (!value["NodeGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeGroups.push_back(item);
        }
        m_nodeGroupsHasBeenSet = true;
    }

    if (value.HasMember("Rip") && !value["Rip"].IsNull())
    {
        if (!value["Rip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Rip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rip = string(value["Rip"].GetString());
        m_ripHasBeenSet = true;
    }

    if (value.HasMember("IsCHProxy") && !value["IsCHProxy"].IsNull())
    {
        if (!value["IsCHProxy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.IsCHProxy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCHProxy = value["IsCHProxy"].GetBool();
        m_isCHProxyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
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

    if (value.HasMember("ZoneDesc") && !value["ZoneDesc"].IsNull())
    {
        if (!value["ZoneDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.ZoneDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneDesc = string(value["ZoneDesc"].GetString());
        m_zoneDescHasBeenSet = true;
    }

    if (value.HasMember("RealResourceId") && !value["RealResourceId"].IsNull())
    {
        if (!value["RealResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.RealResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realResourceId = string(value["RealResourceId"].GetString());
        m_realResourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_coreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Core";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_core, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeGroups.begin(); itr != m_nodeGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ripHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rip.c_str(), allocator).Move(), allocator);
    }

    if (m_isCHProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCHProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCHProxy, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_zoneDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_realResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realResourceId.c_str(), allocator).Move(), allocator);
    }

}


string InstanceNode::GetIp() const
{
    return m_ip;
}

void InstanceNode::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool InstanceNode::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string InstanceNode::GetSpec() const
{
    return m_spec;
}

void InstanceNode::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool InstanceNode::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

int64_t InstanceNode::GetCore() const
{
    return m_core;
}

void InstanceNode::SetCore(const int64_t& _core)
{
    m_core = _core;
    m_coreHasBeenSet = true;
}

bool InstanceNode::CoreHasBeenSet() const
{
    return m_coreHasBeenSet;
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

string InstanceNode::GetDiskType() const
{
    return m_diskType;
}

void InstanceNode::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceNode::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t InstanceNode::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceNode::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceNode::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceNode::GetCluster() const
{
    return m_cluster;
}

void InstanceNode::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool InstanceNode::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

vector<GroupInfo> InstanceNode::GetNodeGroups() const
{
    return m_nodeGroups;
}

void InstanceNode::SetNodeGroups(const vector<GroupInfo>& _nodeGroups)
{
    m_nodeGroups = _nodeGroups;
    m_nodeGroupsHasBeenSet = true;
}

bool InstanceNode::NodeGroupsHasBeenSet() const
{
    return m_nodeGroupsHasBeenSet;
}

string InstanceNode::GetRip() const
{
    return m_rip;
}

void InstanceNode::SetRip(const string& _rip)
{
    m_rip = _rip;
    m_ripHasBeenSet = true;
}

bool InstanceNode::RipHasBeenSet() const
{
    return m_ripHasBeenSet;
}

bool InstanceNode::GetIsCHProxy() const
{
    return m_isCHProxy;
}

void InstanceNode::SetIsCHProxy(const bool& _isCHProxy)
{
    m_isCHProxy = _isCHProxy;
    m_isCHProxyHasBeenSet = true;
}

bool InstanceNode::IsCHProxyHasBeenSet() const
{
    return m_isCHProxyHasBeenSet;
}

string InstanceNode::GetStatus() const
{
    return m_status;
}

void InstanceNode::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceNode::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
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

string InstanceNode::GetZoneDesc() const
{
    return m_zoneDesc;
}

void InstanceNode::SetZoneDesc(const string& _zoneDesc)
{
    m_zoneDesc = _zoneDesc;
    m_zoneDescHasBeenSet = true;
}

bool InstanceNode::ZoneDescHasBeenSet() const
{
    return m_zoneDescHasBeenSet;
}

string InstanceNode::GetRealResourceId() const
{
    return m_realResourceId;
}

void InstanceNode::SetRealResourceId(const string& _realResourceId)
{
    m_realResourceId = _realResourceId;
    m_realResourceIdHasBeenSet = true;
}

bool InstanceNode::RealResourceIdHasBeenSet() const
{
    return m_realResourceIdHasBeenSet;
}

