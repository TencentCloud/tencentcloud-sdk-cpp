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

#include <tencentcloud/dbdc/v20201029/model/DBInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

DBInstanceDetail::DBInstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_shardHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_dbHostsHasBeenSet(false),
    m_hostRoleHasBeenSet(false),
    m_dbEngineHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DBInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("Shard") && !value["Shard"].IsNull())
    {
        if (!value["Shard"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Shard` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shard = value["Shard"].GetInt64();
        m_shardHasBeenSet = true;
    }

    if (value.HasMember("NodeNum") && !value["NodeNum"].IsNull())
    {
        if (!value["NodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.NodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNum = value["NodeNum"].GetInt64();
        m_nodeNumHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Disk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetInt64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.ShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = value["ShardNum"].GetInt64();
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DbHosts") && !value["DbHosts"].IsNull())
    {
        if (!value["DbHosts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.DbHosts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbHosts = string(value["DbHosts"].GetString());
        m_dbHostsHasBeenSet = true;
    }

    if (value.HasMember("HostRole") && !value["HostRole"].IsNull())
    {
        if (!value["HostRole"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.HostRole` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostRole = value["HostRole"].GetInt64();
        m_hostRoleHasBeenSet = true;
    }

    if (value.HasMember("DbEngine") && !value["DbEngine"].IsNull())
    {
        if (!value["DbEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.DbEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbEngine = string(value["DbEngine"].GetString());
        m_dbEngineHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_uniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shard, allocator);
    }

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNum, allocator);
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

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbHosts.c_str(), allocator).Move(), allocator);
    }

    if (m_hostRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostRole, allocator);
    }

    if (m_dbEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string DBInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void DBInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void DBInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DBInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DBInstanceDetail::GetStatus() const
{
    return m_status;
}

void DBInstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DBInstanceDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void DBInstanceDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DBInstanceDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DBInstanceDetail::GetDbVersion() const
{
    return m_dbVersion;
}

void DBInstanceDetail::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool DBInstanceDetail::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string DBInstanceDetail::GetVip() const
{
    return m_vip;
}

void DBInstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DBInstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DBInstanceDetail::GetVport() const
{
    return m_vport;
}

void DBInstanceDetail::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DBInstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DBInstanceDetail::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void DBInstanceDetail::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool DBInstanceDetail::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string DBInstanceDetail::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void DBInstanceDetail::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool DBInstanceDetail::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

int64_t DBInstanceDetail::GetShard() const
{
    return m_shard;
}

void DBInstanceDetail::SetShard(const int64_t& _shard)
{
    m_shard = _shard;
    m_shardHasBeenSet = true;
}

bool DBInstanceDetail::ShardHasBeenSet() const
{
    return m_shardHasBeenSet;
}

int64_t DBInstanceDetail::GetNodeNum() const
{
    return m_nodeNum;
}

void DBInstanceDetail::SetNodeNum(const int64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool DBInstanceDetail::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

int64_t DBInstanceDetail::GetCpu() const
{
    return m_cpu;
}

void DBInstanceDetail::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DBInstanceDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DBInstanceDetail::GetMemory() const
{
    return m_memory;
}

void DBInstanceDetail::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DBInstanceDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DBInstanceDetail::GetDisk() const
{
    return m_disk;
}

void DBInstanceDetail::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool DBInstanceDetail::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

int64_t DBInstanceDetail::GetShardNum() const
{
    return m_shardNum;
}

void DBInstanceDetail::SetShardNum(const int64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool DBInstanceDetail::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

string DBInstanceDetail::GetRegion() const
{
    return m_region;
}

void DBInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBInstanceDetail::GetZone() const
{
    return m_zone;
}

void DBInstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBInstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DBInstanceDetail::GetDbHosts() const
{
    return m_dbHosts;
}

void DBInstanceDetail::SetDbHosts(const string& _dbHosts)
{
    m_dbHosts = _dbHosts;
    m_dbHostsHasBeenSet = true;
}

bool DBInstanceDetail::DbHostsHasBeenSet() const
{
    return m_dbHostsHasBeenSet;
}

int64_t DBInstanceDetail::GetHostRole() const
{
    return m_hostRole;
}

void DBInstanceDetail::SetHostRole(const int64_t& _hostRole)
{
    m_hostRole = _hostRole;
    m_hostRoleHasBeenSet = true;
}

bool DBInstanceDetail::HostRoleHasBeenSet() const
{
    return m_hostRoleHasBeenSet;
}

string DBInstanceDetail::GetDbEngine() const
{
    return m_dbEngine;
}

void DBInstanceDetail::SetDbEngine(const string& _dbEngine)
{
    m_dbEngine = _dbEngine;
    m_dbEngineHasBeenSet = true;
}

bool DBInstanceDetail::DbEngineHasBeenSet() const
{
    return m_dbEngineHasBeenSet;
}

string DBInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void DBInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

