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

#include <tencentcloud/dlc/v20210125/model/TaskResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TaskResultInfo::TaskResultInfo() :
    m_taskIdHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_sQLTypeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_dataAmountHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_outputPathHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_outputMessageHasBeenSet(false),
    m_rowAffectInfoHasBeenSet(false),
    m_resultSchemaHasBeenSet(false),
    m_resultSetHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_percentageHasBeenSet(false),
    m_progressDetailHasBeenSet(false),
    m_displayFormatHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_queryResultTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("DatasourceConnectionName") && !value["DatasourceConnectionName"].IsNull())
    {
        if (!value["DatasourceConnectionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.DatasourceConnectionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datasourceConnectionName = string(value["DatasourceConnectionName"].GetString());
        m_datasourceConnectionNameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("SQLType") && !value["SQLType"].IsNull())
    {
        if (!value["SQLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.SQLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLType = string(value["SQLType"].GetString());
        m_sQLTypeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("DataAmount") && !value["DataAmount"].IsNull())
    {
        if (!value["DataAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.DataAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataAmount = value["DataAmount"].GetInt64();
        m_dataAmountHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.UsedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetInt64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("OutputPath") && !value["OutputPath"].IsNull())
    {
        if (!value["OutputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.OutputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputPath = string(value["OutputPath"].GetString());
        m_outputPathHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("OutputMessage") && !value["OutputMessage"].IsNull())
    {
        if (!value["OutputMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.OutputMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMessage = string(value["OutputMessage"].GetString());
        m_outputMessageHasBeenSet = true;
    }

    if (value.HasMember("RowAffectInfo") && !value["RowAffectInfo"].IsNull())
    {
        if (!value["RowAffectInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.RowAffectInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowAffectInfo = string(value["RowAffectInfo"].GetString());
        m_rowAffectInfoHasBeenSet = true;
    }

    if (value.HasMember("ResultSchema") && !value["ResultSchema"].IsNull())
    {
        if (!value["ResultSchema"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.ResultSchema` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultSchema"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Column item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultSchema.push_back(item);
        }
        m_resultSchemaHasBeenSet = true;
    }

    if (value.HasMember("ResultSet") && !value["ResultSet"].IsNull())
    {
        if (!value["ResultSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.ResultSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultSet = string(value["ResultSet"].GetString());
        m_resultSetHasBeenSet = true;
    }

    if (value.HasMember("NextToken") && !value["NextToken"].IsNull())
    {
        if (!value["NextToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(value["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }

    if (value.HasMember("Percentage") && !value["Percentage"].IsNull())
    {
        if (!value["Percentage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.Percentage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percentage = value["Percentage"].GetInt64();
        m_percentageHasBeenSet = true;
    }

    if (value.HasMember("ProgressDetail") && !value["ProgressDetail"].IsNull())
    {
        if (!value["ProgressDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.ProgressDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progressDetail = string(value["ProgressDetail"].GetString());
        m_progressDetailHasBeenSet = true;
    }

    if (value.HasMember("DisplayFormat") && !value["DisplayFormat"].IsNull())
    {
        if (!value["DisplayFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.DisplayFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayFormat = string(value["DisplayFormat"].GetString());
        m_displayFormatHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("QueryResultTime") && !value["QueryResultTime"].IsNull())
    {
        if (!value["QueryResultTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TaskResultInfo.QueryResultTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryResultTime = value["QueryResultTime"].GetDouble();
        m_queryResultTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQL.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLType.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_dataAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataAmount, allocator);
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

    if (m_outputMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_rowAffectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowAffectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowAffectInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_resultSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultSchema.begin(); itr != m_resultSchema.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultSet.c_str(), allocator).Move(), allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_percentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percentage, allocator);
    }

    if (m_progressDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgressDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progressDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_displayFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_queryResultTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryResultTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryResultTime, allocator);
    }

}


string TaskResultInfo::GetTaskId() const
{
    return m_taskId;
}

void TaskResultInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TaskResultInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TaskResultInfo::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void TaskResultInfo::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool TaskResultInfo::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

string TaskResultInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void TaskResultInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool TaskResultInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string TaskResultInfo::GetSQL() const
{
    return m_sQL;
}

void TaskResultInfo::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool TaskResultInfo::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

string TaskResultInfo::GetSQLType() const
{
    return m_sQLType;
}

void TaskResultInfo::SetSQLType(const string& _sQLType)
{
    m_sQLType = _sQLType;
    m_sQLTypeHasBeenSet = true;
}

bool TaskResultInfo::SQLTypeHasBeenSet() const
{
    return m_sQLTypeHasBeenSet;
}

int64_t TaskResultInfo::GetState() const
{
    return m_state;
}

void TaskResultInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool TaskResultInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t TaskResultInfo::GetDataAmount() const
{
    return m_dataAmount;
}

void TaskResultInfo::SetDataAmount(const int64_t& _dataAmount)
{
    m_dataAmount = _dataAmount;
    m_dataAmountHasBeenSet = true;
}

bool TaskResultInfo::DataAmountHasBeenSet() const
{
    return m_dataAmountHasBeenSet;
}

int64_t TaskResultInfo::GetUsedTime() const
{
    return m_usedTime;
}

void TaskResultInfo::SetUsedTime(const int64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool TaskResultInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

string TaskResultInfo::GetOutputPath() const
{
    return m_outputPath;
}

void TaskResultInfo::SetOutputPath(const string& _outputPath)
{
    m_outputPath = _outputPath;
    m_outputPathHasBeenSet = true;
}

bool TaskResultInfo::OutputPathHasBeenSet() const
{
    return m_outputPathHasBeenSet;
}

string TaskResultInfo::GetCreateTime() const
{
    return m_createTime;
}

void TaskResultInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskResultInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskResultInfo::GetOutputMessage() const
{
    return m_outputMessage;
}

void TaskResultInfo::SetOutputMessage(const string& _outputMessage)
{
    m_outputMessage = _outputMessage;
    m_outputMessageHasBeenSet = true;
}

bool TaskResultInfo::OutputMessageHasBeenSet() const
{
    return m_outputMessageHasBeenSet;
}

string TaskResultInfo::GetRowAffectInfo() const
{
    return m_rowAffectInfo;
}

void TaskResultInfo::SetRowAffectInfo(const string& _rowAffectInfo)
{
    m_rowAffectInfo = _rowAffectInfo;
    m_rowAffectInfoHasBeenSet = true;
}

bool TaskResultInfo::RowAffectInfoHasBeenSet() const
{
    return m_rowAffectInfoHasBeenSet;
}

vector<Column> TaskResultInfo::GetResultSchema() const
{
    return m_resultSchema;
}

void TaskResultInfo::SetResultSchema(const vector<Column>& _resultSchema)
{
    m_resultSchema = _resultSchema;
    m_resultSchemaHasBeenSet = true;
}

bool TaskResultInfo::ResultSchemaHasBeenSet() const
{
    return m_resultSchemaHasBeenSet;
}

string TaskResultInfo::GetResultSet() const
{
    return m_resultSet;
}

void TaskResultInfo::SetResultSet(const string& _resultSet)
{
    m_resultSet = _resultSet;
    m_resultSetHasBeenSet = true;
}

bool TaskResultInfo::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

string TaskResultInfo::GetNextToken() const
{
    return m_nextToken;
}

void TaskResultInfo::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool TaskResultInfo::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

int64_t TaskResultInfo::GetPercentage() const
{
    return m_percentage;
}

void TaskResultInfo::SetPercentage(const int64_t& _percentage)
{
    m_percentage = _percentage;
    m_percentageHasBeenSet = true;
}

bool TaskResultInfo::PercentageHasBeenSet() const
{
    return m_percentageHasBeenSet;
}

string TaskResultInfo::GetProgressDetail() const
{
    return m_progressDetail;
}

void TaskResultInfo::SetProgressDetail(const string& _progressDetail)
{
    m_progressDetail = _progressDetail;
    m_progressDetailHasBeenSet = true;
}

bool TaskResultInfo::ProgressDetailHasBeenSet() const
{
    return m_progressDetailHasBeenSet;
}

string TaskResultInfo::GetDisplayFormat() const
{
    return m_displayFormat;
}

void TaskResultInfo::SetDisplayFormat(const string& _displayFormat)
{
    m_displayFormat = _displayFormat;
    m_displayFormatHasBeenSet = true;
}

bool TaskResultInfo::DisplayFormatHasBeenSet() const
{
    return m_displayFormatHasBeenSet;
}

int64_t TaskResultInfo::GetTotalTime() const
{
    return m_totalTime;
}

void TaskResultInfo::SetTotalTime(const int64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool TaskResultInfo::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

double TaskResultInfo::GetQueryResultTime() const
{
    return m_queryResultTime;
}

void TaskResultInfo::SetQueryResultTime(const double& _queryResultTime)
{
    m_queryResultTime = _queryResultTime;
    m_queryResultTimeHasBeenSet = true;
}

bool TaskResultInfo::QueryResultTimeHasBeenSet() const
{
    return m_queryResultTimeHasBeenSet;
}

