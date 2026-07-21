/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/MCPTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MCPTaskInfo::MCPTaskInfo() :
    m_idHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskKindHasBeenSet(false),
    m_engineTypeDetailHasBeenSet(false),
    m_sQLTypeHasBeenSet(false),
    m_sQLHasBeenSet(false),
    m_isSQLCutOffHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_sparkJobIdHasBeenSet(false),
    m_sparkJobNameHasBeenSet(false),
    m_operateUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_usedTimeHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_outputMessageHasBeenSet(false),
    m_dataSetHasBeenSet(false)
{
}

CoreInternalOutcome MCPTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskKind") && !value["TaskKind"].IsNull())
    {
        if (!value["TaskKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.TaskKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskKind = string(value["TaskKind"].GetString());
        m_taskKindHasBeenSet = true;
    }

    if (value.HasMember("EngineTypeDetail") && !value["EngineTypeDetail"].IsNull())
    {
        if (!value["EngineTypeDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.EngineTypeDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineTypeDetail = string(value["EngineTypeDetail"].GetString());
        m_engineTypeDetailHasBeenSet = true;
    }

    if (value.HasMember("SQLType") && !value["SQLType"].IsNull())
    {
        if (!value["SQLType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.SQLType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLType = string(value["SQLType"].GetString());
        m_sQLTypeHasBeenSet = true;
    }

    if (value.HasMember("SQL") && !value["SQL"].IsNull())
    {
        if (!value["SQL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.SQL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQL = string(value["SQL"].GetString());
        m_sQLHasBeenSet = true;
    }

    if (value.HasMember("IsSQLCutOff") && !value["IsSQLCutOff"].IsNull())
    {
        if (!value["IsSQLCutOff"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.IsSQLCutOff` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSQLCutOff = value["IsSQLCutOff"].GetBool();
        m_isSQLCutOffHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SparkJobId") && !value["SparkJobId"].IsNull())
    {
        if (!value["SparkJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.SparkJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobId = string(value["SparkJobId"].GetString());
        m_sparkJobIdHasBeenSet = true;
    }

    if (value.HasMember("SparkJobName") && !value["SparkJobName"].IsNull())
    {
        if (!value["SparkJobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.SparkJobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkJobName = string(value["SparkJobName"].GetString());
        m_sparkJobNameHasBeenSet = true;
    }

    if (value.HasMember("OperateUin") && !value["OperateUin"].IsNull())
    {
        if (!value["OperateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.OperateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateUin = string(value["OperateUin"].GetString());
        m_operateUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UsedTime") && !value["UsedTime"].IsNull())
    {
        if (!value["UsedTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.UsedTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedTime = value["UsedTime"].GetInt64();
        m_usedTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("OutputMessage") && !value["OutputMessage"].IsNull())
    {
        if (!value["OutputMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.OutputMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputMessage = string(value["OutputMessage"].GetString());
        m_outputMessageHasBeenSet = true;
    }

    if (value.HasMember("DataSet") && !value["DataSet"].IsNull())
    {
        if (!value["DataSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPTaskInfo.DataSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSet = string(value["DataSet"].GetString());
        m_dataSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskKind.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineTypeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineTypeDetail.c_str(), allocator).Move(), allocator);
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

    if (m_isSQLCutOffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSQLCutOff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSQLCutOff, allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkJobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_operateUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateUin.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_usedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedTime, allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_outputMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSet.c_str(), allocator).Move(), allocator);
    }

}


string MCPTaskInfo::GetId() const
{
    return m_id;
}

void MCPTaskInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MCPTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MCPTaskInfo::GetBatchId() const
{
    return m_batchId;
}

void MCPTaskInfo::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool MCPTaskInfo::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

int64_t MCPTaskInfo::GetState() const
{
    return m_state;
}

void MCPTaskInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MCPTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string MCPTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void MCPTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool MCPTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string MCPTaskInfo::GetTaskKind() const
{
    return m_taskKind;
}

void MCPTaskInfo::SetTaskKind(const string& _taskKind)
{
    m_taskKind = _taskKind;
    m_taskKindHasBeenSet = true;
}

bool MCPTaskInfo::TaskKindHasBeenSet() const
{
    return m_taskKindHasBeenSet;
}

string MCPTaskInfo::GetEngineTypeDetail() const
{
    return m_engineTypeDetail;
}

void MCPTaskInfo::SetEngineTypeDetail(const string& _engineTypeDetail)
{
    m_engineTypeDetail = _engineTypeDetail;
    m_engineTypeDetailHasBeenSet = true;
}

bool MCPTaskInfo::EngineTypeDetailHasBeenSet() const
{
    return m_engineTypeDetailHasBeenSet;
}

string MCPTaskInfo::GetSQLType() const
{
    return m_sQLType;
}

void MCPTaskInfo::SetSQLType(const string& _sQLType)
{
    m_sQLType = _sQLType;
    m_sQLTypeHasBeenSet = true;
}

bool MCPTaskInfo::SQLTypeHasBeenSet() const
{
    return m_sQLTypeHasBeenSet;
}

string MCPTaskInfo::GetSQL() const
{
    return m_sQL;
}

void MCPTaskInfo::SetSQL(const string& _sQL)
{
    m_sQL = _sQL;
    m_sQLHasBeenSet = true;
}

bool MCPTaskInfo::SQLHasBeenSet() const
{
    return m_sQLHasBeenSet;
}

bool MCPTaskInfo::GetIsSQLCutOff() const
{
    return m_isSQLCutOff;
}

void MCPTaskInfo::SetIsSQLCutOff(const bool& _isSQLCutOff)
{
    m_isSQLCutOff = _isSQLCutOff;
    m_isSQLCutOffHasBeenSet = true;
}

bool MCPTaskInfo::IsSQLCutOffHasBeenSet() const
{
    return m_isSQLCutOffHasBeenSet;
}

string MCPTaskInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void MCPTaskInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool MCPTaskInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string MCPTaskInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void MCPTaskInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool MCPTaskInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string MCPTaskInfo::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void MCPTaskInfo::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool MCPTaskInfo::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string MCPTaskInfo::GetSparkJobId() const
{
    return m_sparkJobId;
}

void MCPTaskInfo::SetSparkJobId(const string& _sparkJobId)
{
    m_sparkJobId = _sparkJobId;
    m_sparkJobIdHasBeenSet = true;
}

bool MCPTaskInfo::SparkJobIdHasBeenSet() const
{
    return m_sparkJobIdHasBeenSet;
}

string MCPTaskInfo::GetSparkJobName() const
{
    return m_sparkJobName;
}

void MCPTaskInfo::SetSparkJobName(const string& _sparkJobName)
{
    m_sparkJobName = _sparkJobName;
    m_sparkJobNameHasBeenSet = true;
}

bool MCPTaskInfo::SparkJobNameHasBeenSet() const
{
    return m_sparkJobNameHasBeenSet;
}

string MCPTaskInfo::GetOperateUin() const
{
    return m_operateUin;
}

void MCPTaskInfo::SetOperateUin(const string& _operateUin)
{
    m_operateUin = _operateUin;
    m_operateUinHasBeenSet = true;
}

bool MCPTaskInfo::OperateUinHasBeenSet() const
{
    return m_operateUinHasBeenSet;
}

string MCPTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void MCPTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MCPTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MCPTaskInfo::GetStartTime() const
{
    return m_startTime;
}

void MCPTaskInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MCPTaskInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MCPTaskInfo::GetEndTime() const
{
    return m_endTime;
}

void MCPTaskInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MCPTaskInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string MCPTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void MCPTaskInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool MCPTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t MCPTaskInfo::GetUsedTime() const
{
    return m_usedTime;
}

void MCPTaskInfo::SetUsedTime(const int64_t& _usedTime)
{
    m_usedTime = _usedTime;
    m_usedTimeHasBeenSet = true;
}

bool MCPTaskInfo::UsedTimeHasBeenSet() const
{
    return m_usedTimeHasBeenSet;
}

int64_t MCPTaskInfo::GetTotalTime() const
{
    return m_totalTime;
}

void MCPTaskInfo::SetTotalTime(const int64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool MCPTaskInfo::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

int64_t MCPTaskInfo::GetProgress() const
{
    return m_progress;
}

void MCPTaskInfo::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MCPTaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string MCPTaskInfo::GetOutputMessage() const
{
    return m_outputMessage;
}

void MCPTaskInfo::SetOutputMessage(const string& _outputMessage)
{
    m_outputMessage = _outputMessage;
    m_outputMessageHasBeenSet = true;
}

bool MCPTaskInfo::OutputMessageHasBeenSet() const
{
    return m_outputMessageHasBeenSet;
}

string MCPTaskInfo::GetDataSet() const
{
    return m_dataSet;
}

void MCPTaskInfo::SetDataSet(const string& _dataSet)
{
    m_dataSet = _dataSet;
    m_dataSetHasBeenSet = true;
}

bool MCPTaskInfo::DataSetHasBeenSet() const
{
    return m_dataSetHasBeenSet;
}

