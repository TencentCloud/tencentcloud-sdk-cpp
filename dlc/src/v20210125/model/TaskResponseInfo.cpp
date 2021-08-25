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

#include <tencentcloud/dlc/v20210125/model/TaskResponseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TaskResponseInfo::TaskResponseInfo() :
    m_databaseNameHasBeenSet(false),
    m_dataAmountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_sQLTypeHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_resultExpiredHasBeenSet(false),
    m_rowAffectInfoHasBeenSet(false),
    m_dataSetHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_outputMessageHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_progressDetailHasBeenSet(false)
{
}

CoreInternalOutcome TaskResponseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DataAmount") && !value["DataAmount"].IsNull())
    {
        if (!value["DataAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DataAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAmount = value["DataAmount"].GetInt64();
        m_dataAmountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.UsedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetInt64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("SQLType") && !value["SQLType"].IsNull())
    {
        if (!value["SQLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.SQLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLType = string(value["SQLType"].GetString());
        m_sQLTypeHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("ResultExpired") && !value["ResultExpired"].IsNull())
    {
        if (!value["ResultExpired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.ResultExpired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resultExpired = value["ResultExpired"].GetBool();
        m_resultExpiredHasBeenSet = true;
    }

    if (value.HasMember("RowAffectInfo") && !value["RowAffectInfo"].IsNull())
    {
        if (!value["RowAffectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.RowAffectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowAffectInfo = string(value["RowAffectInfo"].GetString());
        m_rowAffectInfoHasBeenSet = true;
    }

    if (value.HasMember("DataSet") && !value["DataSet"].IsNull())
    {
        if (!value["DataSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DataSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSet = string(value["DataSet"].GetString());
        m_dataSetHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.Error` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_error = string(value["Error"].GetString());
        m_errorHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.Percentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetInt64();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("OutputMessage") && !value["OutputMessage"].IsNull())
    {
        if (!value["OutputMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.OutputMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMessage = string(value["OutputMessage"].GetString());
        m_outputMessageHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ProgressDetail") && !value["ProgressDetail"].IsNull())
    {
        if (!value["ProgressDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.ProgressDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progressDetail = string(value["ProgressDetail"].GetString());
        m_progressDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskResponseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAmount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTime, allocator);
    }

    if (m_outputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_sQLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLType.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_resultExpiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultExpired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultExpired, allocator);
    }

    if (m_rowAffectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowAffectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowAffectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSet.c_str(), allocator).Move(), allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_error.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_outputMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_progressDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progressDetail.c_str(), allocator).Move(), allocator);
    }

}


string TaskResponseInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskResponseInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskResponseInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

int64_t TaskResponseInfo::GetDataAmount() const
{
    return m_dataAmount;
}

void TaskResponseInfo::SetDataAmount(const int64_t& _dataAmount)
{
    m_dataAmount = _dataAmount;
    m_dataAmountHasBeenSet = true;
}

bool TaskResponseInfo::DataAmountHasBeenSet() const
{
    return m_dataAmountHasBeenSet;
}

string TaskResponseInfo::GetId() const
{
    return m_id;
}

void TaskResponseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TaskResponseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t TaskResponseInfo::GetUsedTime() const
{
    return m_usedTime;
}

void TaskResponseInfo::SetUsedTime(const int64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool TaskResponseInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

string TaskResponseInfo::GetOutputPath() const
{
    return m_outputPath;
}

void TaskResponseInfo::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool TaskResponseInfo::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

string TaskResponseInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskResponseInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskResponseInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t TaskResponseInfo::GetState() const
{
    return m_state;
}

void TaskResponseInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskResponseInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string TaskResponseInfo::GetSQLType() const
{
    return m_sQLType;
}

void TaskResponseInfo::SetSQLType(const string& _sQLType)
{
    m_sQLType = _sQLType;
    m_sQLTypeHasBeenSet = true;
}

bool TaskResponseInfo::SQLTypeHasBeenSet() const
{
    return m_sQLTypeHasBeenSet;
}

string TaskResponseInfo::GetSQL() const
{
    return m_sQL;
}

void TaskResponseInfo::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool TaskResponseInfo::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

bool TaskResponseInfo::GetResultExpired() const
{
    return m_resultExpired;
}

void TaskResponseInfo::SetResultExpired(const bool& _resultExpired)
{
    m_resultExpired = _resultExpired;
    m_resultExpiredHasBeenSet = true;
}

bool TaskResponseInfo::ResultExpiredHasBeenSet() const
{
    return m_resultExpiredHasBeenSet;
}

string TaskResponseInfo::GetRowAffectInfo() const
{
    return m_rowAffectInfo;
}

void TaskResponseInfo::SetRowAffectInfo(const string& _rowAffectInfo)
{
    m_rowAffectInfo = _rowAffectInfo;
    m_rowAffectInfoHasBeenSet = true;
}

bool TaskResponseInfo::RowAffectInfoHasBeenSet() const
{
    return m_rowAffectInfoHasBeenSet;
}

string TaskResponseInfo::GetDataSet() const
{
    return m_dataSet;
}

void TaskResponseInfo::SetDataSet(const string& _dataSet)
{
    m_dataSet = _dataSet;
    m_dataSetHasBeenSet = true;
}

bool TaskResponseInfo::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

string TaskResponseInfo::GetError() const
{
    return m_error;
}

void TaskResponseInfo::SetError(const string& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool TaskResponseInfo::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

int64_t TaskResponseInfo::GetPercentage() const
{
    return m_percentage;
}

void TaskResponseInfo::SetPercentage(const int64_t& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool TaskResponseInfo::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

string TaskResponseInfo::GetOutputMessage() const
{
    return m_outputMessage;
}

void TaskResponseInfo::SetOutputMessage(const string& _outputMessage)
{
    m_outputMessage = _outputMessage;
    m_outputMessageHasBeenSet = true;
}

bool TaskResponseInfo::OutputMessageHasBeenSet() const
{
    return m_outputMessageHasBeenSet;
}

string TaskResponseInfo::GetTaskType() const
{
    return m_taskType;
}

void TaskResponseInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool TaskResponseInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string TaskResponseInfo::GetProgressDetail() const
{
    return m_progressDetail;
}

void TaskResponseInfo::SetProgressDetail(const string& _progressDetail)
{
    m_progressDetail = _progressDetail;
    m_progressDetailHasBeenSet = true;
}

bool TaskResponseInfo::ProgressDetailHasBeenSet() const
{
    return m_progressDetailHasBeenSet;
}

