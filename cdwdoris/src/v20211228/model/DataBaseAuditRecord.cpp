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

#include <tencentcloud/cdwdoris/v20211228/model/DataBaseAuditRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DataBaseAuditRecord::DataBaseAuditRecord() :
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
    m_sqlTypeHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_isQueryHasBeenSet(false),
    m_computeGroupHasBeenSet(false)
{
}

CoreInternalOutcome DataBaseAuditRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsUser") && !value["OsUser"].IsNull())
    {
        if (!value["OsUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.OsUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osUser = string(value["OsUser"].GetString());
        m_osUserHasBeenSet = true;
    }

    if (value.HasMember("InitialQueryId") && !value["InitialQueryId"].IsNull())
    {
        if (!value["InitialQueryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.InitialQueryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialQueryId = string(value["InitialQueryId"].GetString());
        m_initialQueryIdHasBeenSet = true;
    }

    if (value.HasMember("Sql") && !value["Sql"].IsNull())
    {
        if (!value["Sql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.Sql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sql = string(value["Sql"].GetString());
        m_sqlHasBeenSet = true;
    }

    if (value.HasMember("QueryStartTime") && !value["QueryStartTime"].IsNull())
    {
        if (!value["QueryStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.QueryStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryStartTime = string(value["QueryStartTime"].GetString());
        m_queryStartTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationMs") && !value["DurationMs"].IsNull())
    {
        if (!value["DurationMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.DurationMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationMs = value["DurationMs"].GetInt64();
        m_durationMsHasBeenSet = true;
    }

    if (value.HasMember("ReadRows") && !value["ReadRows"].IsNull())
    {
        if (!value["ReadRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.ReadRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readRows = value["ReadRows"].GetInt64();
        m_readRowsHasBeenSet = true;
    }

    if (value.HasMember("ResultRows") && !value["ResultRows"].IsNull())
    {
        if (!value["ResultRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.ResultRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultRows = value["ResultRows"].GetInt64();
        m_resultRowsHasBeenSet = true;
    }

    if (value.HasMember("ResultBytes") && !value["ResultBytes"].IsNull())
    {
        if (!value["ResultBytes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.ResultBytes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultBytes = value["ResultBytes"].GetUint64();
        m_resultBytesHasBeenSet = true;
    }

    if (value.HasMember("MemoryUsage") && !value["MemoryUsage"].IsNull())
    {
        if (!value["MemoryUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.MemoryUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUsage = value["MemoryUsage"].GetInt64();
        m_memoryUsageHasBeenSet = true;
    }

    if (value.HasMember("InitialAddress") && !value["InitialAddress"].IsNull())
    {
        if (!value["InitialAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.InitialAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initialAddress = string(value["InitialAddress"].GetString());
        m_initialAddressHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("Catalog") && !value["Catalog"].IsNull())
    {
        if (!value["Catalog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.Catalog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalog = string(value["Catalog"].GetString());
        m_catalogHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("IsQuery") && !value["IsQuery"].IsNull())
    {
        if (!value["IsQuery"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.IsQuery` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isQuery = value["IsQuery"].GetBool();
        m_isQueryHasBeenSet = true;
    }

    if (value.HasMember("ComputeGroup") && !value["ComputeGroup"].IsNull())
    {
        if (!value["ComputeGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBaseAuditRecord.ComputeGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeGroup = string(value["ComputeGroup"].GetString());
        m_computeGroupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataBaseAuditRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_isQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isQuery, allocator);
    }

    if (m_computeGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeGroup.c_str(), allocator).Move(), allocator);
    }

}


string DataBaseAuditRecord::GetOsUser() const
{
    return m_osUser;
}

void DataBaseAuditRecord::SetOsUser(const string& _osUser)
{
    m_osUser = _osUser;
    m_osUserHasBeenSet = true;
}

bool DataBaseAuditRecord::OsUserHasBeenSet() const
{
    return m_osUserHasBeenSet;
}

string DataBaseAuditRecord::GetInitialQueryId() const
{
    return m_initialQueryId;
}

void DataBaseAuditRecord::SetInitialQueryId(const string& _initialQueryId)
{
    m_initialQueryId = _initialQueryId;
    m_initialQueryIdHasBeenSet = true;
}

bool DataBaseAuditRecord::InitialQueryIdHasBeenSet() const
{
    return m_initialQueryIdHasBeenSet;
}

string DataBaseAuditRecord::GetSql() const
{
    return m_sql;
}

void DataBaseAuditRecord::SetSql(const string& _sql)
{
    m_sql = _sql;
    m_sqlHasBeenSet = true;
}

bool DataBaseAuditRecord::SqlHasBeenSet() const
{
    return m_sqlHasBeenSet;
}

string DataBaseAuditRecord::GetQueryStartTime() const
{
    return m_queryStartTime;
}

void DataBaseAuditRecord::SetQueryStartTime(const string& _queryStartTime)
{
    m_queryStartTime = _queryStartTime;
    m_queryStartTimeHasBeenSet = true;
}

bool DataBaseAuditRecord::QueryStartTimeHasBeenSet() const
{
    return m_queryStartTimeHasBeenSet;
}

int64_t DataBaseAuditRecord::GetDurationMs() const
{
    return m_durationMs;
}

void DataBaseAuditRecord::SetDurationMs(const int64_t& _durationMs)
{
    m_durationMs = _durationMs;
    m_durationMsHasBeenSet = true;
}

bool DataBaseAuditRecord::DurationMsHasBeenSet() const
{
    return m_durationMsHasBeenSet;
}

int64_t DataBaseAuditRecord::GetReadRows() const
{
    return m_readRows;
}

void DataBaseAuditRecord::SetReadRows(const int64_t& _readRows)
{
    m_readRows = _readRows;
    m_readRowsHasBeenSet = true;
}

bool DataBaseAuditRecord::ReadRowsHasBeenSet() const
{
    return m_readRowsHasBeenSet;
}

int64_t DataBaseAuditRecord::GetResultRows() const
{
    return m_resultRows;
}

void DataBaseAuditRecord::SetResultRows(const int64_t& _resultRows)
{
    m_resultRows = _resultRows;
    m_resultRowsHasBeenSet = true;
}

bool DataBaseAuditRecord::ResultRowsHasBeenSet() const
{
    return m_resultRowsHasBeenSet;
}

uint64_t DataBaseAuditRecord::GetResultBytes() const
{
    return m_resultBytes;
}

void DataBaseAuditRecord::SetResultBytes(const uint64_t& _resultBytes)
{
    m_resultBytes = _resultBytes;
    m_resultBytesHasBeenSet = true;
}

bool DataBaseAuditRecord::ResultBytesHasBeenSet() const
{
    return m_resultBytesHasBeenSet;
}

int64_t DataBaseAuditRecord::GetMemoryUsage() const
{
    return m_memoryUsage;
}

void DataBaseAuditRecord::SetMemoryUsage(const int64_t& _memoryUsage)
{
    m_memoryUsage = _memoryUsage;
    m_memoryUsageHasBeenSet = true;
}

bool DataBaseAuditRecord::MemoryUsageHasBeenSet() const
{
    return m_memoryUsageHasBeenSet;
}

string DataBaseAuditRecord::GetInitialAddress() const
{
    return m_initialAddress;
}

void DataBaseAuditRecord::SetInitialAddress(const string& _initialAddress)
{
    m_initialAddress = _initialAddress;
    m_initialAddressHasBeenSet = true;
}

bool DataBaseAuditRecord::InitialAddressHasBeenSet() const
{
    return m_initialAddressHasBeenSet;
}

string DataBaseAuditRecord::GetDbName() const
{
    return m_dbName;
}

void DataBaseAuditRecord::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DataBaseAuditRecord::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DataBaseAuditRecord::GetSqlType() const
{
    return m_sqlType;
}

void DataBaseAuditRecord::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool DataBaseAuditRecord::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

string DataBaseAuditRecord::GetCatalog() const
{
    return m_catalog;
}

void DataBaseAuditRecord::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DataBaseAuditRecord::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string DataBaseAuditRecord::GetState() const
{
    return m_state;
}

void DataBaseAuditRecord::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DataBaseAuditRecord::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

bool DataBaseAuditRecord::GetIsQuery() const
{
    return m_isQuery;
}

void DataBaseAuditRecord::SetIsQuery(const bool& _isQuery)
{
    m_isQuery = _isQuery;
    m_isQueryHasBeenSet = true;
}

bool DataBaseAuditRecord::IsQueryHasBeenSet() const
{
    return m_isQueryHasBeenSet;
}

string DataBaseAuditRecord::GetComputeGroup() const
{
    return m_computeGroup;
}

void DataBaseAuditRecord::SetComputeGroup(const string& _computeGroup)
{
    m_computeGroup = _computeGroup;
    m_computeGroupHasBeenSet = true;
}

bool DataBaseAuditRecord::ComputeGroupHasBeenSet() const
{
    return m_computeGroupHasBeenSet;
}

