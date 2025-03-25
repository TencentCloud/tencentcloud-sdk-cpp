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

#include <tencentcloud/cdwdoris/v20211228/model/SlowQueryRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

SlowQueryRecord::SlowQueryRecord() :
    m_osUserHasBeenSet(false),
    m_initialQueryIdHasBeenSet(false),
    m_sqlHasBeenSet(false),
    m_queryStartTimeHasBeenSet(false),
    m_durationMsHasBeenSet(false),
    m_readRowsHasBeenSet(false),
    m_resultRowsHasBeenSet(false),
    m_resultBytesHasBeenSet(false),
    m_memoryUsageHasBeenSet(false),
    m_initialAddressHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_isQueryHasBeenSet(false),
    m_resultBytesMBHasBeenSet(false),
    m_memoryUsageMBHasBeenSet(false),
    m_durationSecHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_cpuTimeMsHasBeenSet(false),
    m_computeGroupHasBeenSet(false)
{
}

CoreInternalOutcome SlowQueryRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsUser") && !value["OsUser"].IsNull())
    {
        if (!value["OsUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.OsUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osUser = string(value["OsUser"].GetString());
        m_osUserHasBeenSet = true;
    }

    if (value.HasMember("InitialQueryId") && !value["InitialQueryId"].IsNull())
    {
        if (!value["InitialQueryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.InitialQueryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialQueryId = string(value["InitialQueryId"].GetString());
        m_initialQueryIdHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("QueryStartTime") && !value["QueryStartTime"].IsNull())
    {
        if (!value["QueryStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.QueryStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStartTime = string(value["QueryStartTime"].GetString());
        m_queryStartTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("ReadRows") && !value["ReadRows"].IsNull())
    {
        if (!value["ReadRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.ReadRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readRows = value["ReadRows"].GetInt64();
        m_readRowsHasBeenSet = true;
    }

    if (value.HasMember("ResultRows") && !value["ResultRows"].IsNull())
    {
        if (!value["ResultRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.ResultRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultRows = value["ResultRows"].GetInt64();
        m_resultRowsHasBeenSet = true;
    }

    if (value.HasMember("ResultBytes") && !value["ResultBytes"].IsNull())
    {
        if (!value["ResultBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.ResultBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultBytes = value["ResultBytes"].GetUint64();
        m_resultBytesHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.MemoryUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetInt64();
        m_memoryUsageHasBeenSet = true;
    }

    if (value.HasMember("InitialAddress") && !value["InitialAddress"].IsNull())
    {
        if (!value["InitialAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.InitialAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialAddress = string(value["InitialAddress"].GetString());
        m_initialAddressHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("IsQuery") && !value["IsQuery"].IsNull())
    {
        if (!value["IsQuery"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.IsQuery` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isQuery = value["IsQuery"].GetInt64();
        m_isQueryHasBeenSet = true;
    }

    if (value.HasMember("ResultBytesMB") && !value["ResultBytesMB"].IsNull())
    {
        if (!value["ResultBytesMB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.ResultBytesMB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_resultBytesMB = value["ResultBytesMB"].GetDouble();
        m_resultBytesMBHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsageMB") && !value["MemoryUsageMB"].IsNull())
    {
        if (!value["MemoryUsageMB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.MemoryUsageMB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsageMB = value["MemoryUsageMB"].GetDouble();
        m_memoryUsageMBHasBeenSet = true;
    }

    if (value.HasMember("DurationSec") && !value["DurationSec"].IsNull())
    {
        if (!value["DurationSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.DurationSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_durationSec = value["DurationSec"].GetDouble();
        m_durationSecHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("CpuTimeMs") && !value["CpuTimeMs"].IsNull())
    {
        if (!value["CpuTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.CpuTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTimeMs = value["CpuTimeMs"].GetInt64();
        m_cpuTimeMsHasBeenSet = true;
    }

    if (value.HasMember("ComputeGroup") && !value["ComputeGroup"].IsNull())
    {
        if (!value["ComputeGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowQueryRecord.ComputeGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeGroup = string(value["ComputeGroup"].GetString());
        m_computeGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowQueryRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_osUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osUser.c_str(), allocator).Move(), allocator);
    }

    if (m_initialQueryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialQueryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initialQueryId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sql.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationMs, allocator);
    }

    if (m_readRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readRows, allocator);
    }

    if (m_resultRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultRows, allocator);
    }

    if (m_resultBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultBytes, allocator);
    }

    if (m_memoryUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsage, allocator);
    }

    if (m_initialAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_initialAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQuery, allocator);
    }

    if (m_resultBytesMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultBytesMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultBytesMB, allocator);
    }

    if (m_memoryUsageMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUsageMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUsageMB, allocator);
    }

    if (m_durationSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationSec, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTimeMs, allocator);
    }

    if (m_computeGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeGroup.c_str(), allocator).Move(), allocator);
    }

}


string SlowQueryRecord::GetOsUser() const
{
    return m_osUser;
}

void SlowQueryRecord::SetOsUser(const string& _osUser)
{
    m_osUser = _osUser;
    m_osUserHasBeenSet = true;
}

bool SlowQueryRecord::OsUserHasBeenSet() const
{
    return m_osUserHasBeenSet;
}

string SlowQueryRecord::GetInitialQueryId() const
{
    return m_initialQueryId;
}

void SlowQueryRecord::SetInitialQueryId(const string& _initialQueryId)
{
    m_initialQueryId = _initialQueryId;
    m_initialQueryIdHasBeenSet = true;
}

bool SlowQueryRecord::InitialQueryIdHasBeenSet() const
{
    return m_initialQueryIdHasBeenSet;
}

string SlowQueryRecord::GetSql() const
{
    return m_sql;
}

void SlowQueryRecord::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool SlowQueryRecord::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string SlowQueryRecord::GetQueryStartTime() const
{
    return m_queryStartTime;
}

void SlowQueryRecord::SetQueryStartTime(const string& _queryStartTime)
{
    m_queryStartTime = _queryStartTime;
    m_queryStartTimeHasBeenSet = true;
}

bool SlowQueryRecord::QueryStartTimeHasBeenSet() const
{
    return m_queryStartTimeHasBeenSet;
}

int64_t SlowQueryRecord::GetDurationMs() const
{
    return m_durationMs;
}

void SlowQueryRecord::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool SlowQueryRecord::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

int64_t SlowQueryRecord::GetReadRows() const
{
    return m_readRows;
}

void SlowQueryRecord::SetReadRows(const int64_t& _readRows)
{
    m_readRows = _readRows;
    m_readRowsHasBeenSet = true;
}

bool SlowQueryRecord::ReadRowsHasBeenSet() const
{
    return m_readRowsHasBeenSet;
}

int64_t SlowQueryRecord::GetResultRows() const
{
    return m_resultRows;
}

void SlowQueryRecord::SetResultRows(const int64_t& _resultRows)
{
    m_resultRows = _resultRows;
    m_resultRowsHasBeenSet = true;
}

bool SlowQueryRecord::ResultRowsHasBeenSet() const
{
    return m_resultRowsHasBeenSet;
}

uint64_t SlowQueryRecord::GetResultBytes() const
{
    return m_resultBytes;
}

void SlowQueryRecord::SetResultBytes(const uint64_t& _resultBytes)
{
    m_resultBytes = _resultBytes;
    m_resultBytesHasBeenSet = true;
}

bool SlowQueryRecord::ResultBytesHasBeenSet() const
{
    return m_resultBytesHasBeenSet;
}

int64_t SlowQueryRecord::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void SlowQueryRecord::SetMemoryUsage(const int64_t& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool SlowQueryRecord::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

string SlowQueryRecord::GetInitialAddress() const
{
    return m_initialAddress;
}

void SlowQueryRecord::SetInitialAddress(const string& _initialAddress)
{
    m_initialAddress = _initialAddress;
    m_initialAddressHasBeenSet = true;
}

bool SlowQueryRecord::InitialAddressHasBeenSet() const
{
    return m_initialAddressHasBeenSet;
}

string SlowQueryRecord::GetDbName() const
{
    return m_dbName;
}

void SlowQueryRecord::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool SlowQueryRecord::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t SlowQueryRecord::GetIsQuery() const
{
    return m_isQuery;
}

void SlowQueryRecord::SetIsQuery(const int64_t& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool SlowQueryRecord::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}

double SlowQueryRecord::GetResultBytesMB() const
{
    return m_resultBytesMB;
}

void SlowQueryRecord::SetResultBytesMB(const double& _resultBytesMB)
{
    m_resultBytesMB = _resultBytesMB;
    m_resultBytesMBHasBeenSet = true;
}

bool SlowQueryRecord::ResultBytesMBHasBeenSet() const
{
    return m_resultBytesMBHasBeenSet;
}

double SlowQueryRecord::GetMemoryUsageMB() const
{
    return m_memoryUsageMB;
}

void SlowQueryRecord::SetMemoryUsageMB(const double& _memoryUsageMB)
{
    m_memoryUsageMB = _memoryUsageMB;
    m_memoryUsageMBHasBeenSet = true;
}

bool SlowQueryRecord::MemoryUsageMBHasBeenSet() const
{
    return m_memoryUsageMBHasBeenSet;
}

double SlowQueryRecord::GetDurationSec() const
{
    return m_durationSec;
}

void SlowQueryRecord::SetDurationSec(const double& _durationSec)
{
    m_durationSec = _durationSec;
    m_durationSecHasBeenSet = true;
}

bool SlowQueryRecord::DurationSecHasBeenSet() const
{
    return m_durationSecHasBeenSet;
}

string SlowQueryRecord::GetState() const
{
    return m_state;
}

void SlowQueryRecord::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SlowQueryRecord::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string SlowQueryRecord::GetCatalogName() const
{
    return m_catalogName;
}

void SlowQueryRecord::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool SlowQueryRecord::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

int64_t SlowQueryRecord::GetCpuTimeMs() const
{
    return m_cpuTimeMs;
}

void SlowQueryRecord::SetCpuTimeMs(const int64_t& _cpuTimeMs)
{
    m_cpuTimeMs = _cpuTimeMs;
    m_cpuTimeMsHasBeenSet = true;
}

bool SlowQueryRecord::CpuTimeMsHasBeenSet() const
{
    return m_cpuTimeMsHasBeenSet;
}

string SlowQueryRecord::GetComputeGroup() const
{
    return m_computeGroup;
}

void SlowQueryRecord::SetComputeGroup(const string& _computeGroup)
{
    m_computeGroup = _computeGroup;
    m_computeGroupHasBeenSet = true;
}

bool SlowQueryRecord::ComputeGroupHasBeenSet() const
{
    return m_computeGroupHasBeenSet;
}

