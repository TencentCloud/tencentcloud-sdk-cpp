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
    m_progressDetailHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_dataEngineNameHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputConfHasBeenSet(false),
    m_dataNumberHasBeenSet(false),
    m_canDownloadHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_sparkJobNameHasBeenSet(false),
    m_sparkJobIdHasBeenSet(false),
    m_sparkJobFileHasBeenSet(false),
    m_uiUrlHasBeenSet(false)
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

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputConf") && !value["InputConf"].IsNull())
    {
        if (!value["InputConf"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.InputConf` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputConf = string(value["InputConf"].GetString());
        m_inputConfHasBeenSet = true;
    }

    if (value.HasMember("DataNumber") && !value["DataNumber"].IsNull())
    {
        if (!value["DataNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.DataNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataNumber = value["DataNumber"].GetInt64();
        m_dataNumberHasBeenSet = true;
    }

    if (value.HasMember("CanDownload") && !value["CanDownload"].IsNull())
    {
        if (!value["CanDownload"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.CanDownload` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDownload = value["CanDownload"].GetBool();
        m_canDownloadHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("SparkJobName") && !value["SparkJobName"].IsNull())
    {
        if (!value["SparkJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.SparkJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobName = string(value["SparkJobName"].GetString());
        m_sparkJobNameHasBeenSet = true;
    }

    if (value.HasMember("SparkJobId") && !value["SparkJobId"].IsNull())
    {
        if (!value["SparkJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.SparkJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobId = string(value["SparkJobId"].GetString());
        m_sparkJobIdHasBeenSet = true;
    }

    if (value.HasMember("SparkJobFile") && !value["SparkJobFile"].IsNull())
    {
        if (!value["SparkJobFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.SparkJobFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobFile = string(value["SparkJobFile"].GetString());
        m_sparkJobFileHasBeenSet = true;
    }

    if (value.HasMember("UiUrl") && !value["UiUrl"].IsNull())
    {
        if (!value["UiUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResponseInfo.UiUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uiUrl = string(value["UiUrl"].GetString());
        m_uiUrlHasBeenSet = true;
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputConf.c_str(), allocator).Move(), allocator);
    }

    if (m_dataNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataNumber, allocator);
    }

    if (m_canDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDownload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDownload, allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobFile.c_str(), allocator).Move(), allocator);
    }

    if (m_uiUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UiUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uiUrl.c_str(), allocator).Move(), allocator);
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

string TaskResponseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TaskResponseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TaskResponseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TaskResponseInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void TaskResponseInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool TaskResponseInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string TaskResponseInfo::GetOperateUin() const
{
    return m_operateUin;
}

void TaskResponseInfo::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool TaskResponseInfo::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string TaskResponseInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void TaskResponseInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool TaskResponseInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string TaskResponseInfo::GetInputType() const
{
    return m_inputType;
}

void TaskResponseInfo::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool TaskResponseInfo::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string TaskResponseInfo::GetInputConf() const
{
    return m_inputConf;
}

void TaskResponseInfo::SetInputConf(const string& _inputConf)
{
    m_inputConf = _inputConf;
    m_inputConfHasBeenSet = true;
}

bool TaskResponseInfo::InputConfHasBeenSet() const
{
    return m_inputConfHasBeenSet;
}

int64_t TaskResponseInfo::GetDataNumber() const
{
    return m_dataNumber;
}

void TaskResponseInfo::SetDataNumber(const int64_t& _dataNumber)
{
    m_dataNumber = _dataNumber;
    m_dataNumberHasBeenSet = true;
}

bool TaskResponseInfo::DataNumberHasBeenSet() const
{
    return m_dataNumberHasBeenSet;
}

bool TaskResponseInfo::GetCanDownload() const
{
    return m_canDownload;
}

void TaskResponseInfo::SetCanDownload(const bool& _canDownload)
{
    m_canDownload = _canDownload;
    m_canDownloadHasBeenSet = true;
}

bool TaskResponseInfo::CanDownloadHasBeenSet() const
{
    return m_canDownloadHasBeenSet;
}

string TaskResponseInfo::GetUserAlias() const
{
    return m_userAlias;
}

void TaskResponseInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool TaskResponseInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

string TaskResponseInfo::GetSparkJobName() const
{
    return m_sparkJobName;
}

void TaskResponseInfo::SetSparkJobName(const string& _sparkJobName)
{
    m_sparkJobName = _sparkJobName;
    m_sparkJobNameHasBeenSet = true;
}

bool TaskResponseInfo::SparkJobNameHasBeenSet() const
{
    return m_sparkJobNameHasBeenSet;
}

string TaskResponseInfo::GetSparkJobId() const
{
    return m_sparkJobId;
}

void TaskResponseInfo::SetSparkJobId(const string& _sparkJobId)
{
    m_sparkJobId = _sparkJobId;
    m_sparkJobIdHasBeenSet = true;
}

bool TaskResponseInfo::SparkJobIdHasBeenSet() const
{
    return m_sparkJobIdHasBeenSet;
}

string TaskResponseInfo::GetSparkJobFile() const
{
    return m_sparkJobFile;
}

void TaskResponseInfo::SetSparkJobFile(const string& _sparkJobFile)
{
    m_sparkJobFile = _sparkJobFile;
    m_sparkJobFileHasBeenSet = true;
}

bool TaskResponseInfo::SparkJobFileHasBeenSet() const
{
    return m_sparkJobFileHasBeenSet;
}

string TaskResponseInfo::GetUiUrl() const
{
    return m_uiUrl;
}

void TaskResponseInfo::SetUiUrl(const string& _uiUrl)
{
    m_uiUrl = _uiUrl;
    m_uiUrlHasBeenSet = true;
}

bool TaskResponseInfo::UiUrlHasBeenSet() const
{
    return m_uiUrlHasBeenSet;
}

