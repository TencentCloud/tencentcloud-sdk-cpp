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

#include <tencentcloud/ckafka/v20190819/model/DatahubTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DatahubTaskInfo::DatahubTaskInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceResourceHasBeenSet(false),
    m_targetResourceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_taskProgressHasBeenSet(false),
    m_taskCurrentStepHasBeenSet(false),
    m_datahubIdHasBeenSet(false),
    m_stepListHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DatahubTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceResource") && !value["SourceResource"].IsNull())
    {
        if (!value["SourceResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.SourceResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceResource.Deserialize(value["SourceResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceResourceHasBeenSet = true;
    }

    if (value.HasMember("TargetResource") && !value["TargetResource"].IsNull())
    {
        if (!value["TargetResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TargetResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetResource.Deserialize(value["TargetResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetResourceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("TaskProgress") && !value["TaskProgress"].IsNull())
    {
        if (!value["TaskProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TaskProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskProgress = value["TaskProgress"].GetDouble();
        m_taskProgressHasBeenSet = true;
    }

    if (value.HasMember("TaskCurrentStep") && !value["TaskCurrentStep"].IsNull())
    {
        if (!value["TaskCurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.TaskCurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskCurrentStep = string(value["TaskCurrentStep"].GetString());
        m_taskCurrentStepHasBeenSet = true;
    }

    if (value.HasMember("DatahubId") && !value["DatahubId"].IsNull())
    {
        if (!value["DatahubId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.DatahubId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datahubId = string(value["DatahubId"].GetString());
        m_datahubIdHasBeenSet = true;
    }

    if (value.HasMember("StepList") && !value["StepList"].IsNull())
    {
        if (!value["StepList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.StepList` is not array type"));

        const rapidjson::Value &tmpValue = value["StepList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stepList.push_back((*itr).GetString());
        }
        m_stepListHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatahubTaskInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatahubTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_sourceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_taskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskProgress, allocator);
    }

    if (m_taskCurrentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskCurrentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_datahubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatahubId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datahubId.c_str(), allocator).Move(), allocator);
    }

    if (m_stepListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stepList.begin(); itr != m_stepList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string DatahubTaskInfo::GetTaskId() const
{
    return m_taskId;
}

void DatahubTaskInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DatahubTaskInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DatahubTaskInfo::GetTaskName() const
{
    return m_taskName;
}

void DatahubTaskInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DatahubTaskInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DatahubTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void DatahubTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DatahubTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DatahubTaskInfo::GetStatus() const
{
    return m_status;
}

void DatahubTaskInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DatahubTaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DatahubResource DatahubTaskInfo::GetSourceResource() const
{
    return m_sourceResource;
}

void DatahubTaskInfo::SetSourceResource(const DatahubResource& _sourceResource)
{
    m_sourceResource = _sourceResource;
    m_sourceResourceHasBeenSet = true;
}

bool DatahubTaskInfo::SourceResourceHasBeenSet() const
{
    return m_sourceResourceHasBeenSet;
}

DatahubResource DatahubTaskInfo::GetTargetResource() const
{
    return m_targetResource;
}

void DatahubTaskInfo::SetTargetResource(const DatahubResource& _targetResource)
{
    m_targetResource = _targetResource;
    m_targetResourceHasBeenSet = true;
}

bool DatahubTaskInfo::TargetResourceHasBeenSet() const
{
    return m_targetResourceHasBeenSet;
}

string DatahubTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void DatahubTaskInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DatahubTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DatahubTaskInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void DatahubTaskInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool DatahubTaskInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

double DatahubTaskInfo::GetTaskProgress() const
{
    return m_taskProgress;
}

void DatahubTaskInfo::SetTaskProgress(const double& _taskProgress)
{
    m_taskProgress = _taskProgress;
    m_taskProgressHasBeenSet = true;
}

bool DatahubTaskInfo::TaskProgressHasBeenSet() const
{
    return m_taskProgressHasBeenSet;
}

string DatahubTaskInfo::GetTaskCurrentStep() const
{
    return m_taskCurrentStep;
}

void DatahubTaskInfo::SetTaskCurrentStep(const string& _taskCurrentStep)
{
    m_taskCurrentStep = _taskCurrentStep;
    m_taskCurrentStepHasBeenSet = true;
}

bool DatahubTaskInfo::TaskCurrentStepHasBeenSet() const
{
    return m_taskCurrentStepHasBeenSet;
}

string DatahubTaskInfo::GetDatahubId() const
{
    return m_datahubId;
}

void DatahubTaskInfo::SetDatahubId(const string& _datahubId)
{
    m_datahubId = _datahubId;
    m_datahubIdHasBeenSet = true;
}

bool DatahubTaskInfo::DatahubIdHasBeenSet() const
{
    return m_datahubIdHasBeenSet;
}

vector<string> DatahubTaskInfo::GetStepList() const
{
    return m_stepList;
}

void DatahubTaskInfo::SetStepList(const vector<string>& _stepList)
{
    m_stepList = _stepList;
    m_stepListHasBeenSet = true;
}

bool DatahubTaskInfo::StepListHasBeenSet() const
{
    return m_stepListHasBeenSet;
}

string DatahubTaskInfo::GetDescription() const
{
    return m_description;
}

void DatahubTaskInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DatahubTaskInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

