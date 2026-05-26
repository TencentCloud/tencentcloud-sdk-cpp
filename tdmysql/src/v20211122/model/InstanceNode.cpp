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

#include <tencentcloud/tdmysql/v20211122/model/InstanceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

InstanceNode::InstanceNode() :
    m_iDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_portHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_localDNSHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_logDiskHasBeenSet(false),
    m_dataDiskHasBeenSet(false),
    m_zoneIDHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_replicasHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_dataReplicasHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("EniIp") && !value["EniIp"].IsNull())
    {
        if (!value["EniIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.EniIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eniIp = string(value["EniIp"].GetString());
        m_eniIpHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("SpecCode") && !value["SpecCode"].IsNull())
    {
        if (!value["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(value["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
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

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Disk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetInt64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
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

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
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

    if (value.HasMember("LocalDNS") && !value["LocalDNS"].IsNull())
    {
        if (!value["LocalDNS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.LocalDNS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localDNS = string(value["LocalDNS"].GetString());
        m_localDNSHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogDisk") && !value["LogDisk"].IsNull())
    {
        if (!value["LogDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.LogDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDisk = value["LogDisk"].GetInt64();
        m_logDiskHasBeenSet = true;
    }

    if (value.HasMember("DataDisk") && !value["DataDisk"].IsNull())
    {
        if (!value["DataDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DataDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataDisk = value["DataDisk"].GetInt64();
        m_dataDiskHasBeenSet = true;
    }

    if (value.HasMember("ZoneID") && !value["ZoneID"].IsNull())
    {
        if (!value["ZoneID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.ZoneID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneID = string(value["ZoneID"].GetString());
        m_zoneIDHasBeenSet = true;
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

    if (value.HasMember("Replicas") && !value["Replicas"].IsNull())
    {
        if (!value["Replicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Replicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replicas = value["Replicas"].GetInt64();
        m_replicasHasBeenSet = true;
    }

    if (value.HasMember("Shards") && !value["Shards"].IsNull())
    {
        if (!value["Shards"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Shards` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shards = value["Shards"].GetInt64();
        m_shardsHasBeenSet = true;
    }

    if (value.HasMember("DataReplicas") && !value["DataReplicas"].IsNull())
    {
        if (!value["DataReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.DataReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataReplicas = value["DataReplicas"].GetInt64();
        m_dataReplicasHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.Params` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_params = string(value["Params"].GetString());
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNode.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_eniIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EniIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eniIp.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_localDNSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalDNS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localDNS.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_logDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDisk, allocator);
    }

    if (m_dataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataDisk, allocator);
    }

    if (m_zoneIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneID.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_replicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicas, allocator);
    }

    if (m_shardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shards, allocator);
    }

    if (m_dataReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataReplicas, allocator);
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceNode::GetID() const
{
    return m_iD;
}

void InstanceNode::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool InstanceNode::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string InstanceNode::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceNode::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceNode::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceNode::GetNodeId() const
{
    return m_nodeId;
}

void InstanceNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool InstanceNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
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

string InstanceNode::GetEniIp() const
{
    return m_eniIp;
}

void InstanceNode::SetEniIp(const string& _eniIp)
{
    m_eniIp = _eniIp;
    m_eniIpHasBeenSet = true;
}

bool InstanceNode::EniIpHasBeenSet() const
{
    return m_eniIpHasBeenSet;
}

int64_t InstanceNode::GetPort() const
{
    return m_port;
}

void InstanceNode::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool InstanceNode::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string InstanceNode::GetSpecCode() const
{
    return m_specCode;
}

void InstanceNode::SetSpecCode(const string& _specCode)
{
    m_specCode = _specCode;
    m_specCodeHasBeenSet = true;
}

bool InstanceNode::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
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

int64_t InstanceNode::GetMem() const
{
    return m_mem;
}

void InstanceNode::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool InstanceNode::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

int64_t InstanceNode::GetDisk() const
{
    return m_disk;
}

void InstanceNode::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool InstanceNode::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

string InstanceNode::GetType() const
{
    return m_type;
}

void InstanceNode::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceNode::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
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

string InstanceNode::GetVersion() const
{
    return m_version;
}

void InstanceNode::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceNode::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
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

string InstanceNode::GetLocalDNS() const
{
    return m_localDNS;
}

void InstanceNode::SetLocalDNS(const string& _localDNS)
{
    m_localDNS = _localDNS;
    m_localDNSHasBeenSet = true;
}

bool InstanceNode::LocalDNSHasBeenSet() const
{
    return m_localDNSHasBeenSet;
}

string InstanceNode::GetRegion() const
{
    return m_region;
}

void InstanceNode::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceNode::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t InstanceNode::GetLogDisk() const
{
    return m_logDisk;
}

void InstanceNode::SetLogDisk(const int64_t& _logDisk)
{
    m_logDisk = _logDisk;
    m_logDiskHasBeenSet = true;
}

bool InstanceNode::LogDiskHasBeenSet() const
{
    return m_logDiskHasBeenSet;
}

int64_t InstanceNode::GetDataDisk() const
{
    return m_dataDisk;
}

void InstanceNode::SetDataDisk(const int64_t& _dataDisk)
{
    m_dataDisk = _dataDisk;
    m_dataDiskHasBeenSet = true;
}

bool InstanceNode::DataDiskHasBeenSet() const
{
    return m_dataDiskHasBeenSet;
}

string InstanceNode::GetZoneID() const
{
    return m_zoneID;
}

void InstanceNode::SetZoneID(const string& _zoneID)
{
    m_zoneID = _zoneID;
    m_zoneIDHasBeenSet = true;
}

bool InstanceNode::ZoneIDHasBeenSet() const
{
    return m_zoneIDHasBeenSet;
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

int64_t InstanceNode::GetReplicas() const
{
    return m_replicas;
}

void InstanceNode::SetReplicas(const int64_t& _replicas)
{
    m_replicas = _replicas;
    m_replicasHasBeenSet = true;
}

bool InstanceNode::ReplicasHasBeenSet() const
{
    return m_replicasHasBeenSet;
}

int64_t InstanceNode::GetShards() const
{
    return m_shards;
}

void InstanceNode::SetShards(const int64_t& _shards)
{
    m_shards = _shards;
    m_shardsHasBeenSet = true;
}

bool InstanceNode::ShardsHasBeenSet() const
{
    return m_shardsHasBeenSet;
}

int64_t InstanceNode::GetDataReplicas() const
{
    return m_dataReplicas;
}

void InstanceNode::SetDataReplicas(const int64_t& _dataReplicas)
{
    m_dataReplicas = _dataReplicas;
    m_dataReplicasHasBeenSet = true;
}

bool InstanceNode::DataReplicasHasBeenSet() const
{
    return m_dataReplicasHasBeenSet;
}

string InstanceNode::GetParams() const
{
    return m_params;
}

void InstanceNode::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool InstanceNode::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

string InstanceNode::GetStorageType() const
{
    return m_storageType;
}

void InstanceNode::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool InstanceNode::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

