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

#include <tencentcloud/dcdb/v20180411/model/DCDBShardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DCDBShardInfo::DCDBShardInfo() :
    m_instanceIdHasBeenSet(false),
    m_shardSerialIdHasBeenSet(false),
    m_shardInstanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_storageUsageHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_shardIdHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_proxyVersionHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_shardMasterZoneHasBeenSet(false),
    m_shardSlaveZonesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

CoreInternalOutcome DCDBShardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ShardSerialId") && !value["ShardSerialId"].IsNull())
    {
        if (!value["ShardSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ShardSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSerialId = string(value["ShardSerialId"].GetString());
        m_shardSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ShardInstanceId") && !value["ShardInstanceId"].IsNull())
    {
        if (!value["ShardInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ShardInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardInstanceId = string(value["ShardInstanceId"].GetString());
        m_shardInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("StorageUsage") && !value["StorageUsage"].IsNull())
    {
        if (!value["StorageUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.StorageUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = value["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.MemoryUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetDouble();
        m_memoryUsageHasBeenSet = true;
    }

    if (value.HasMember("ShardId") && !value["ShardId"].IsNull())
    {
        if (!value["ShardId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ShardId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardId = value["ShardId"].GetInt64();
        m_shardIdHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (value.HasMember("Paymode") && !value["Paymode"].IsNull())
    {
        if (!value["Paymode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Paymode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymode = string(value["Paymode"].GetString());
        m_paymodeHasBeenSet = true;
    }

    if (value.HasMember("ShardMasterZone") && !value["ShardMasterZone"].IsNull())
    {
        if (!value["ShardMasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ShardMasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardMasterZone = string(value["ShardMasterZone"].GetString());
        m_shardMasterZoneHasBeenSet = true;
    }

    if (value.HasMember("ShardSlaveZones") && !value["ShardSlaveZones"].IsNull())
    {
        if (!value["ShardSlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.ShardSlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardSlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shardSlaveZones.push_back((*itr).GetString());
        }
        m_shardSlaveZonesHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Range") && !value["Range"].IsNull())
    {
        if (!value["Range"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBShardInfo.Range` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_range = string(value["Range"].GetString());
        m_rangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DCDBShardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardSerialId.c_str(), allocator).Move(), allocator);
    }

    if (m_shardInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
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

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_storageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsage, allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

    if (m_shardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardId, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_paymodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paymode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymode.c_str(), allocator).Move(), allocator);
    }

    if (m_shardMasterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardMasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shardMasterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_shardSlaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardSlaveZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shardSlaveZones.begin(); itr != m_shardSlaveZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_rangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Range";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_range.c_str(), allocator).Move(), allocator);
    }

}


string DCDBShardInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DCDBShardInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DCDBShardInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DCDBShardInfo::GetShardSerialId() const
{
    return m_shardSerialId;
}

void DCDBShardInfo::SetShardSerialId(const string& _shardSerialId)
{
    m_shardSerialId = _shardSerialId;
    m_shardSerialIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardSerialIdHasBeenSet() const
{
    return m_shardSerialIdHasBeenSet;
}

string DCDBShardInfo::GetShardInstanceId() const
{
    return m_shardInstanceId;
}

void DCDBShardInfo::SetShardInstanceId(const string& _shardInstanceId)
{
    m_shardInstanceId = _shardInstanceId;
    m_shardInstanceIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardInstanceIdHasBeenSet() const
{
    return m_shardInstanceIdHasBeenSet;
}

int64_t DCDBShardInfo::GetStatus() const
{
    return m_status;
}

void DCDBShardInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DCDBShardInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DCDBShardInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void DCDBShardInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DCDBShardInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DCDBShardInfo::GetCreateTime() const
{
    return m_createTime;
}

void DCDBShardInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DCDBShardInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DCDBShardInfo::GetVpcId() const
{
    return m_vpcId;
}

void DCDBShardInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DCDBShardInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DCDBShardInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DCDBShardInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DCDBShardInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DCDBShardInfo::GetProjectId() const
{
    return m_projectId;
}

void DCDBShardInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DCDBShardInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DCDBShardInfo::GetRegion() const
{
    return m_region;
}

void DCDBShardInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DCDBShardInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DCDBShardInfo::GetZone() const
{
    return m_zone;
}

void DCDBShardInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DCDBShardInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DCDBShardInfo::GetMemory() const
{
    return m_memory;
}

void DCDBShardInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DCDBShardInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DCDBShardInfo::GetStorage() const
{
    return m_storage;
}

void DCDBShardInfo::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DCDBShardInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DCDBShardInfo::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DCDBShardInfo::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DCDBShardInfo::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DCDBShardInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void DCDBShardInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool DCDBShardInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

double DCDBShardInfo::GetStorageUsage() const
{
    return m_storageUsage;
}

void DCDBShardInfo::SetStorageUsage(const double& _storageUsage)
{
    m_storageUsage = _storageUsage;
    m_storageUsageHasBeenSet = true;
}

bool DCDBShardInfo::StorageUsageHasBeenSet() const
{
    return m_storageUsageHasBeenSet;
}

double DCDBShardInfo::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void DCDBShardInfo::SetMemoryUsage(const double& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool DCDBShardInfo::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

int64_t DCDBShardInfo::GetShardId() const
{
    return m_shardId;
}

void DCDBShardInfo::SetShardId(const int64_t& _shardId)
{
    m_shardId = _shardId;
    m_shardIdHasBeenSet = true;
}

bool DCDBShardInfo::ShardIdHasBeenSet() const
{
    return m_shardIdHasBeenSet;
}

int64_t DCDBShardInfo::GetPid() const
{
    return m_pid;
}

void DCDBShardInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DCDBShardInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DCDBShardInfo::GetProxyVersion() const
{
    return m_proxyVersion;
}

void DCDBShardInfo::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool DCDBShardInfo::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

string DCDBShardInfo::GetPaymode() const
{
    return m_paymode;
}

void DCDBShardInfo::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool DCDBShardInfo::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

string DCDBShardInfo::GetShardMasterZone() const
{
    return m_shardMasterZone;
}

void DCDBShardInfo::SetShardMasterZone(const string& _shardMasterZone)
{
    m_shardMasterZone = _shardMasterZone;
    m_shardMasterZoneHasBeenSet = true;
}

bool DCDBShardInfo::ShardMasterZoneHasBeenSet() const
{
    return m_shardMasterZoneHasBeenSet;
}

vector<string> DCDBShardInfo::GetShardSlaveZones() const
{
    return m_shardSlaveZones;
}

void DCDBShardInfo::SetShardSlaveZones(const vector<string>& _shardSlaveZones)
{
    m_shardSlaveZones = _shardSlaveZones;
    m_shardSlaveZonesHasBeenSet = true;
}

bool DCDBShardInfo::ShardSlaveZonesHasBeenSet() const
{
    return m_shardSlaveZonesHasBeenSet;
}

int64_t DCDBShardInfo::GetCpu() const
{
    return m_cpu;
}

void DCDBShardInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DCDBShardInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string DCDBShardInfo::GetRange() const
{
    return m_range;
}

void DCDBShardInfo::SetRange(const string& _range)
{
    m_range = _range;
    m_rangeHasBeenSet = true;
}

bool DCDBShardInfo::RangeHasBeenSet() const
{
    return m_rangeHasBeenSet;
}

