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

#include <tencentcloud/dcdb/v20180411/model/ShardBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ShardBriefInfo::ShardBriefInfo() :
    m_shardSerialIdHasBeenSet(false),
    m_shardInstanceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_logDiskHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_storageUsageHasBeenSet(false),
    m_proxyVersionHasBeenSet(false),
    m_shardMasterZoneHasBeenSet(false),
    m_shardSlaveZonesHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_nodesInfoHasBeenSet(false)
{
}

CoreInternalOutcome ShardBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShardSerialId") && !value["ShardSerialId"].IsNull())
    {
        if (!value["ShardSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.ShardSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardSerialId = string(value["ShardSerialId"].GetString());
        m_shardSerialIdHasBeenSet = true;
    }

    if (value.HasMember("ShardInstanceId") && !value["ShardInstanceId"].IsNull())
    {
        if (!value["ShardInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.ShardInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardInstanceId = string(value["ShardInstanceId"].GetString());
        m_shardInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("LogDisk") && !value["LogDisk"].IsNull())
    {
        if (!value["LogDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.LogDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logDisk = value["LogDisk"].GetInt64();
        m_logDiskHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("StorageUsage") && !value["StorageUsage"].IsNull())
    {
        if (!value["StorageUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.StorageUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = value["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }

    if (value.HasMember("ProxyVersion") && !value["ProxyVersion"].IsNull())
    {
        if (!value["ProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.ProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyVersion = string(value["ProxyVersion"].GetString());
        m_proxyVersionHasBeenSet = true;
    }

    if (value.HasMember("ShardMasterZone") && !value["ShardMasterZone"].IsNull())
    {
        if (!value["ShardMasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.ShardMasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shardMasterZone = string(value["ShardMasterZone"].GetString());
        m_shardMasterZoneHasBeenSet = true;
    }

    if (value.HasMember("ShardSlaveZones") && !value["ShardSlaveZones"].IsNull())
    {
        if (!value["ShardSlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.ShardSlaveZones` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("NodesInfo") && !value["NodesInfo"].IsNull())
    {
        if (!value["NodesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShardBriefInfo.NodesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["NodesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodesInfo.push_back(item);
        }
        m_nodesInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShardBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_logDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logDisk, allocator);
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

    if (m_proxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyVersion.c_str(), allocator).Move(), allocator);
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

    if (m_nodesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodesInfo.begin(); itr != m_nodesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ShardBriefInfo::GetShardSerialId() const
{
    return m_shardSerialId;
}

void ShardBriefInfo::SetShardSerialId(const string& _shardSerialId)
{
    m_shardSerialId = _shardSerialId;
    m_shardSerialIdHasBeenSet = true;
}

bool ShardBriefInfo::ShardSerialIdHasBeenSet() const
{
    return m_shardSerialIdHasBeenSet;
}

string ShardBriefInfo::GetShardInstanceId() const
{
    return m_shardInstanceId;
}

void ShardBriefInfo::SetShardInstanceId(const string& _shardInstanceId)
{
    m_shardInstanceId = _shardInstanceId;
    m_shardInstanceIdHasBeenSet = true;
}

bool ShardBriefInfo::ShardInstanceIdHasBeenSet() const
{
    return m_shardInstanceIdHasBeenSet;
}

int64_t ShardBriefInfo::GetStatus() const
{
    return m_status;
}

void ShardBriefInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ShardBriefInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ShardBriefInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void ShardBriefInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ShardBriefInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ShardBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void ShardBriefInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShardBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t ShardBriefInfo::GetMemory() const
{
    return m_memory;
}

void ShardBriefInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ShardBriefInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t ShardBriefInfo::GetStorage() const
{
    return m_storage;
}

void ShardBriefInfo::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ShardBriefInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t ShardBriefInfo::GetLogDisk() const
{
    return m_logDisk;
}

void ShardBriefInfo::SetLogDisk(const int64_t& _logDisk)
{
    m_logDisk = _logDisk;
    m_logDiskHasBeenSet = true;
}

bool ShardBriefInfo::LogDiskHasBeenSet() const
{
    return m_logDiskHasBeenSet;
}

int64_t ShardBriefInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void ShardBriefInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ShardBriefInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

double ShardBriefInfo::GetStorageUsage() const
{
    return m_storageUsage;
}

void ShardBriefInfo::SetStorageUsage(const double& _storageUsage)
{
    m_storageUsage = _storageUsage;
    m_storageUsageHasBeenSet = true;
}

bool ShardBriefInfo::StorageUsageHasBeenSet() const
{
    return m_storageUsageHasBeenSet;
}

string ShardBriefInfo::GetProxyVersion() const
{
    return m_proxyVersion;
}

void ShardBriefInfo::SetProxyVersion(const string& _proxyVersion)
{
    m_proxyVersion = _proxyVersion;
    m_proxyVersionHasBeenSet = true;
}

bool ShardBriefInfo::ProxyVersionHasBeenSet() const
{
    return m_proxyVersionHasBeenSet;
}

string ShardBriefInfo::GetShardMasterZone() const
{
    return m_shardMasterZone;
}

void ShardBriefInfo::SetShardMasterZone(const string& _shardMasterZone)
{
    m_shardMasterZone = _shardMasterZone;
    m_shardMasterZoneHasBeenSet = true;
}

bool ShardBriefInfo::ShardMasterZoneHasBeenSet() const
{
    return m_shardMasterZoneHasBeenSet;
}

vector<string> ShardBriefInfo::GetShardSlaveZones() const
{
    return m_shardSlaveZones;
}

void ShardBriefInfo::SetShardSlaveZones(const vector<string>& _shardSlaveZones)
{
    m_shardSlaveZones = _shardSlaveZones;
    m_shardSlaveZonesHasBeenSet = true;
}

bool ShardBriefInfo::ShardSlaveZonesHasBeenSet() const
{
    return m_shardSlaveZonesHasBeenSet;
}

int64_t ShardBriefInfo::GetCpu() const
{
    return m_cpu;
}

void ShardBriefInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ShardBriefInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

vector<NodeInfo> ShardBriefInfo::GetNodesInfo() const
{
    return m_nodesInfo;
}

void ShardBriefInfo::SetNodesInfo(const vector<NodeInfo>& _nodesInfo)
{
    m_nodesInfo = _nodesInfo;
    m_nodesInfoHasBeenSet = true;
}

bool ShardBriefInfo::NodesInfoHasBeenSet() const
{
    return m_nodesInfoHasBeenSet;
}

