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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTaskDbResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryTaskDbResult::DspaDiscoveryTaskDbResult() :
    m_dbResultIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_resultIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_totalTablesHasBeenSet(false),
    m_sensitiveTablesHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_sensitiveFieldHasBeenSet(false),
    m_totalFieldHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryTaskDbResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DbResultId") && !value["DbResultId"].IsNull())
    {
        if (!value["DbResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.DbResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dbResultId = value["DbResultId"].GetInt64();
        m_dbResultIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.ResultId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = value["ResultId"].GetInt64();
        m_resultIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TotalTables") && !value["TotalTables"].IsNull())
    {
        if (!value["TotalTables"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.TotalTables` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTables = value["TotalTables"].GetInt64();
        m_totalTablesHasBeenSet = true;
    }

    if (value.HasMember("SensitiveTables") && !value["SensitiveTables"].IsNull())
    {
        if (!value["SensitiveTables"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.SensitiveTables` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveTables = value["SensitiveTables"].GetInt64();
        m_sensitiveTablesHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.ErrorInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorInfo = string(value["ErrorInfo"].GetString());
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceRegion") && !value["ResourceRegion"].IsNull())
    {
        if (!value["ResourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.ResourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceRegion = string(value["ResourceRegion"].GetString());
        m_resourceRegionHasBeenSet = true;
    }

    if (value.HasMember("SensitiveField") && !value["SensitiveField"].IsNull())
    {
        if (!value["SensitiveField"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.SensitiveField` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveField = value["SensitiveField"].GetInt64();
        m_sensitiveFieldHasBeenSet = true;
    }

    if (value.HasMember("TotalField") && !value["TotalField"].IsNull())
    {
        if (!value["TotalField"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDbResult.TotalField` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalField = value["TotalField"].GetInt64();
        m_totalFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryTaskDbResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dbResultId, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultId, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTables, allocator);
    }

    if (m_sensitiveTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveTables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveTables, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveField, allocator);
    }

    if (m_totalFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalField, allocator);
    }

}


int64_t DspaDiscoveryTaskDbResult::GetDbResultId() const
{
    return m_dbResultId;
}

void DspaDiscoveryTaskDbResult::SetDbResultId(const int64_t& _dbResultId)
{
    m_dbResultId = _dbResultId;
    m_dbResultIdHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::DbResultIdHasBeenSet() const
{
    return m_dbResultIdHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetTaskId() const
{
    return m_taskId;
}

void DspaDiscoveryTaskDbResult::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetTaskName() const
{
    return m_taskName;
}

void DspaDiscoveryTaskDbResult::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetResultId() const
{
    return m_resultId;
}

void DspaDiscoveryTaskDbResult::SetResultId(const int64_t& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetDataSourceId() const
{
    return m_dataSourceId;
}

void DspaDiscoveryTaskDbResult::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetDbName() const
{
    return m_dbName;
}

void DspaDiscoveryTaskDbResult::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetTotalTables() const
{
    return m_totalTables;
}

void DspaDiscoveryTaskDbResult::SetTotalTables(const int64_t& _totalTables)
{
    m_totalTables = _totalTables;
    m_totalTablesHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::TotalTablesHasBeenSet() const
{
    return m_totalTablesHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetSensitiveTables() const
{
    return m_sensitiveTables;
}

void DspaDiscoveryTaskDbResult::SetSensitiveTables(const int64_t& _sensitiveTables)
{
    m_sensitiveTables = _sensitiveTables;
    m_sensitiveTablesHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::SensitiveTablesHasBeenSet() const
{
    return m_sensitiveTablesHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetEndTime() const
{
    return m_endTime;
}

void DspaDiscoveryTaskDbResult::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetDataSourceName() const
{
    return m_dataSourceName;
}

void DspaDiscoveryTaskDbResult::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetStatus() const
{
    return m_status;
}

void DspaDiscoveryTaskDbResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetErrorInfo() const
{
    return m_errorInfo;
}

void DspaDiscoveryTaskDbResult::SetErrorInfo(const string& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

string DspaDiscoveryTaskDbResult::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DspaDiscoveryTaskDbResult::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetSensitiveField() const
{
    return m_sensitiveField;
}

void DspaDiscoveryTaskDbResult::SetSensitiveField(const int64_t& _sensitiveField)
{
    m_sensitiveField = _sensitiveField;
    m_sensitiveFieldHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::SensitiveFieldHasBeenSet() const
{
    return m_sensitiveFieldHasBeenSet;
}

int64_t DspaDiscoveryTaskDbResult::GetTotalField() const
{
    return m_totalField;
}

void DspaDiscoveryTaskDbResult::SetTotalField(const int64_t& _totalField)
{
    m_totalField = _totalField;
    m_totalFieldHasBeenSet = true;
}

bool DspaDiscoveryTaskDbResult::TotalFieldHasBeenSet() const
{
    return m_totalFieldHasBeenSet;
}

