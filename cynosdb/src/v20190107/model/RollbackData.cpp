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

#include <tencentcloud/cynosdb/v20190107/model/RollbackData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackData::RollbackData() :
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_originalClusterIdHasBeenSet(false),
    m_originalClusterNameHasBeenSet(false),
    m_rollbackStrategyHasBeenSet(false),
    m_snapshotTimeHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_snapShotIdHasBeenSet(false),
    m_rollbackDatabasesHasBeenSet(false),
    m_rollbackTablesHasBeenSet(false),
    m_backupFileNameHasBeenSet(false),
    m_rollbackProcessHasBeenSet(false)
{
}

CoreInternalOutcome RollbackData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("OriginalClusterId") && !value["OriginalClusterId"].IsNull())
    {
        if (!value["OriginalClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.OriginalClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalClusterId = string(value["OriginalClusterId"].GetString());
        m_originalClusterIdHasBeenSet = true;
    }

    if (value.HasMember("OriginalClusterName") && !value["OriginalClusterName"].IsNull())
    {
        if (!value["OriginalClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.OriginalClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalClusterName = string(value["OriginalClusterName"].GetString());
        m_originalClusterNameHasBeenSet = true;
    }

    if (value.HasMember("RollbackStrategy") && !value["RollbackStrategy"].IsNull())
    {
        if (!value["RollbackStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.RollbackStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rollbackStrategy = string(value["RollbackStrategy"].GetString());
        m_rollbackStrategyHasBeenSet = true;
    }

    if (value.HasMember("SnapshotTime") && !value["SnapshotTime"].IsNull())
    {
        if (!value["SnapshotTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.SnapshotTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotTime = string(value["SnapshotTime"].GetString());
        m_snapshotTimeHasBeenSet = true;
    }

    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.MinCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetInt64();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.MaxCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetInt64();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("SnapShotId") && !value["SnapShotId"].IsNull())
    {
        if (!value["SnapShotId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.SnapShotId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_snapShotId = value["SnapShotId"].GetUint64();
        m_snapShotIdHasBeenSet = true;
    }

    if (value.HasMember("RollbackDatabases") && !value["RollbackDatabases"].IsNull())
    {
        if (!value["RollbackDatabases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackData.RollbackDatabases` is not array type"));

        const rapidjson::Value &tmpValue = value["RollbackDatabases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackDatabase item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rollbackDatabases.push_back(item);
        }
        m_rollbackDatabasesHasBeenSet = true;
    }

    if (value.HasMember("RollbackTables") && !value["RollbackTables"].IsNull())
    {
        if (!value["RollbackTables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RollbackData.RollbackTables` is not array type"));

        const rapidjson::Value &tmpValue = value["RollbackTables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackTable item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rollbackTables.push_back(item);
        }
        m_rollbackTablesHasBeenSet = true;
    }

    if (value.HasMember("BackupFileName") && !value["BackupFileName"].IsNull())
    {
        if (!value["BackupFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.BackupFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupFileName = string(value["BackupFileName"].GetString());
        m_backupFileNameHasBeenSet = true;
    }

    if (value.HasMember("RollbackProcess") && !value["RollbackProcess"].IsNull())
    {
        if (!value["RollbackProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackData.RollbackProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rollbackProcess.Deserialize(value["RollbackProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rollbackProcessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_originalClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rollbackStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotTime.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_snapShotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapShotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapShotId, allocator);
    }

    if (m_rollbackDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackDatabases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackDatabases.begin(); itr != m_rollbackDatabases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rollbackTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackTables.begin(); itr != m_rollbackTables.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rollbackProcess.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t RollbackData::GetCpu() const
{
    return m_cpu;
}

void RollbackData::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool RollbackData::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t RollbackData::GetMemory() const
{
    return m_memory;
}

void RollbackData::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool RollbackData::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t RollbackData::GetStorageLimit() const
{
    return m_storageLimit;
}

void RollbackData::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool RollbackData::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

string RollbackData::GetOriginalClusterId() const
{
    return m_originalClusterId;
}

void RollbackData::SetOriginalClusterId(const string& _originalClusterId)
{
    m_originalClusterId = _originalClusterId;
    m_originalClusterIdHasBeenSet = true;
}

bool RollbackData::OriginalClusterIdHasBeenSet() const
{
    return m_originalClusterIdHasBeenSet;
}

string RollbackData::GetOriginalClusterName() const
{
    return m_originalClusterName;
}

void RollbackData::SetOriginalClusterName(const string& _originalClusterName)
{
    m_originalClusterName = _originalClusterName;
    m_originalClusterNameHasBeenSet = true;
}

bool RollbackData::OriginalClusterNameHasBeenSet() const
{
    return m_originalClusterNameHasBeenSet;
}

string RollbackData::GetRollbackStrategy() const
{
    return m_rollbackStrategy;
}

void RollbackData::SetRollbackStrategy(const string& _rollbackStrategy)
{
    m_rollbackStrategy = _rollbackStrategy;
    m_rollbackStrategyHasBeenSet = true;
}

bool RollbackData::RollbackStrategyHasBeenSet() const
{
    return m_rollbackStrategyHasBeenSet;
}

string RollbackData::GetSnapshotTime() const
{
    return m_snapshotTime;
}

void RollbackData::SetSnapshotTime(const string& _snapshotTime)
{
    m_snapshotTime = _snapshotTime;
    m_snapshotTimeHasBeenSet = true;
}

bool RollbackData::SnapshotTimeHasBeenSet() const
{
    return m_snapshotTimeHasBeenSet;
}

int64_t RollbackData::GetMinCpu() const
{
    return m_minCpu;
}

void RollbackData::SetMinCpu(const int64_t& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool RollbackData::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

int64_t RollbackData::GetMaxCpu() const
{
    return m_maxCpu;
}

void RollbackData::SetMaxCpu(const int64_t& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool RollbackData::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

uint64_t RollbackData::GetSnapShotId() const
{
    return m_snapShotId;
}

void RollbackData::SetSnapShotId(const uint64_t& _snapShotId)
{
    m_snapShotId = _snapShotId;
    m_snapShotIdHasBeenSet = true;
}

bool RollbackData::SnapShotIdHasBeenSet() const
{
    return m_snapShotIdHasBeenSet;
}

vector<RollbackDatabase> RollbackData::GetRollbackDatabases() const
{
    return m_rollbackDatabases;
}

void RollbackData::SetRollbackDatabases(const vector<RollbackDatabase>& _rollbackDatabases)
{
    m_rollbackDatabases = _rollbackDatabases;
    m_rollbackDatabasesHasBeenSet = true;
}

bool RollbackData::RollbackDatabasesHasBeenSet() const
{
    return m_rollbackDatabasesHasBeenSet;
}

vector<RollbackTable> RollbackData::GetRollbackTables() const
{
    return m_rollbackTables;
}

void RollbackData::SetRollbackTables(const vector<RollbackTable>& _rollbackTables)
{
    m_rollbackTables = _rollbackTables;
    m_rollbackTablesHasBeenSet = true;
}

bool RollbackData::RollbackTablesHasBeenSet() const
{
    return m_rollbackTablesHasBeenSet;
}

string RollbackData::GetBackupFileName() const
{
    return m_backupFileName;
}

void RollbackData::SetBackupFileName(const string& _backupFileName)
{
    m_backupFileName = _backupFileName;
    m_backupFileNameHasBeenSet = true;
}

bool RollbackData::BackupFileNameHasBeenSet() const
{
    return m_backupFileNameHasBeenSet;
}

RollbackProcessInfo RollbackData::GetRollbackProcess() const
{
    return m_rollbackProcess;
}

void RollbackData::SetRollbackProcess(const RollbackProcessInfo& _rollbackProcess)
{
    m_rollbackProcess = _rollbackProcess;
    m_rollbackProcessHasBeenSet = true;
}

bool RollbackData::RollbackProcessHasBeenSet() const
{
    return m_rollbackProcessHasBeenSet;
}

