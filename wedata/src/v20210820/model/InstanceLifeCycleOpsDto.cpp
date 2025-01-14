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

#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLifeCycleOpsDto::InstanceLifeCycleOpsDto() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_lifeRoundHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_instanceLifeDetailDtoListHasBeenSet(false),
    m_runnerStateHasBeenSet(false),
    m_errorDescHasBeenSet(false),
    m_errorCodeLevelHasBeenSet(false),
    m_instanceLogListOpsDtoHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_scheduleRunTypeHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_instanceRunTypeHasBeenSet(false),
    m_totalLifeRoundHasBeenSet(false),
    m_taskTypeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLifeCycleOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("LifeRound") && !value["LifeRound"].IsNull())
    {
        if (!value["LifeRound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.LifeRound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeRound = value["LifeRound"].GetInt64();
        m_lifeRoundHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.Tries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetInt64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("InstanceLifeDetailDtoList") && !value["InstanceLifeDetailDtoList"].IsNull())
    {
        if (!value["InstanceLifeDetailDtoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceLifeDetailDtoList` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceLifeDetailDtoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceLifeDetailDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceLifeDetailDtoList.push_back(item);
        }
        m_instanceLifeDetailDtoListHasBeenSet = true;
    }

    if (value.HasMember("RunnerState") && !value["RunnerState"].IsNull())
    {
        if (!value["RunnerState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.RunnerState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runnerState = string(value["RunnerState"].GetString());
        m_runnerStateHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodeLevel") && !value["ErrorCodeLevel"].IsNull())
    {
        if (!value["ErrorCodeLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ErrorCodeLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCodeLevel = string(value["ErrorCodeLevel"].GetString());
        m_errorCodeLevelHasBeenSet = true;
    }

    if (value.HasMember("InstanceLogListOpsDto") && !value["InstanceLogListOpsDto"].IsNull())
    {
        if (!value["InstanceLogListOpsDto"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceLogListOpsDto` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceLogListOpsDto.Deserialize(value["InstanceLogListOpsDto"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceLogListOpsDtoHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("ScheduleRunType") && !value["ScheduleRunType"].IsNull())
    {
        if (!value["ScheduleRunType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ScheduleRunType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleRunType = value["ScheduleRunType"].GetUint64();
        m_scheduleRunTypeHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRunType") && !value["InstanceRunType"].IsNull())
    {
        if (!value["InstanceRunType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.InstanceRunType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRunType = value["InstanceRunType"].GetUint64();
        m_instanceRunTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalLifeRound") && !value["TotalLifeRound"].IsNull())
    {
        if (!value["TotalLifeRound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.TotalLifeRound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalLifeRound = value["TotalLifeRound"].GetInt64();
        m_totalLifeRoundHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleOpsDto.TaskType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskType.Deserialize(value["TaskType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLifeCycleOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeRound, allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_instanceLifeDetailDtoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLifeDetailDtoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceLifeDetailDtoList.begin(); itr != m_instanceLifeDetailDtoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runnerStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunnerState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runnerState.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodeLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCodeLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLogListOpsDtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLogListOpsDto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceLogListOpsDto.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scheduleRunType, allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceRunType, allocator);
    }

    if (m_totalLifeRoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalLifeRound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalLifeRound, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taskType.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceLifeCycleOpsDto::GetTaskId() const
{
    return m_taskId;
}

void InstanceLifeCycleOpsDto::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetTaskName() const
{
    return m_taskName;
}

void InstanceLifeCycleOpsDto::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceLifeCycleOpsDto::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

int64_t InstanceLifeCycleOpsDto::GetLifeRound() const
{
    return m_lifeRound;
}

void InstanceLifeCycleOpsDto::SetLifeRound(const int64_t& _lifeRound)
{
    m_lifeRound = _lifeRound;
    m_lifeRoundHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::LifeRoundHasBeenSet() const
{
    return m_lifeRoundHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetRunType() const
{
    return m_runType;
}

void InstanceLifeCycleOpsDto::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

int64_t InstanceLifeCycleOpsDto::GetTries() const
{
    return m_tries;
}

void InstanceLifeCycleOpsDto::SetTries(const int64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

vector<InstanceLifeDetailDto> InstanceLifeCycleOpsDto::GetInstanceLifeDetailDtoList() const
{
    return m_instanceLifeDetailDtoList;
}

void InstanceLifeCycleOpsDto::SetInstanceLifeDetailDtoList(const vector<InstanceLifeDetailDto>& _instanceLifeDetailDtoList)
{
    m_instanceLifeDetailDtoList = _instanceLifeDetailDtoList;
    m_instanceLifeDetailDtoListHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceLifeDetailDtoListHasBeenSet() const
{
    return m_instanceLifeDetailDtoListHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetRunnerState() const
{
    return m_runnerState;
}

void InstanceLifeCycleOpsDto::SetRunnerState(const string& _runnerState)
{
    m_runnerState = _runnerState;
    m_runnerStateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::RunnerStateHasBeenSet() const
{
    return m_runnerStateHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetErrorDesc() const
{
    return m_errorDesc;
}

void InstanceLifeCycleOpsDto::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetErrorCodeLevel() const
{
    return m_errorCodeLevel;
}

void InstanceLifeCycleOpsDto::SetErrorCodeLevel(const string& _errorCodeLevel)
{
    m_errorCodeLevel = _errorCodeLevel;
    m_errorCodeLevelHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ErrorCodeLevelHasBeenSet() const
{
    return m_errorCodeLevelHasBeenSet;
}

InstanceLogInfo InstanceLifeCycleOpsDto::GetInstanceLogListOpsDto() const
{
    return m_instanceLogListOpsDto;
}

void InstanceLifeCycleOpsDto::SetInstanceLogListOpsDto(const InstanceLogInfo& _instanceLogListOpsDto)
{
    m_instanceLogListOpsDto = _instanceLogListOpsDto;
    m_instanceLogListOpsDtoHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceLogListOpsDtoHasBeenSet() const
{
    return m_instanceLogListOpsDtoHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceLifeCycleOpsDto::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t InstanceLifeCycleOpsDto::GetScheduleRunType() const
{
    return m_scheduleRunType;
}

void InstanceLifeCycleOpsDto::SetScheduleRunType(const uint64_t& _scheduleRunType)
{
    m_scheduleRunType = _scheduleRunType;
    m_scheduleRunTypeHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ScheduleRunTypeHasBeenSet() const
{
    return m_scheduleRunTypeHasBeenSet;
}

string InstanceLifeCycleOpsDto::GetExecutionJobId() const
{
    return m_executionJobId;
}

void InstanceLifeCycleOpsDto::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

uint64_t InstanceLifeCycleOpsDto::GetInstanceRunType() const
{
    return m_instanceRunType;
}

void InstanceLifeCycleOpsDto::SetInstanceRunType(const uint64_t& _instanceRunType)
{
    m_instanceRunType = _instanceRunType;
    m_instanceRunTypeHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::InstanceRunTypeHasBeenSet() const
{
    return m_instanceRunTypeHasBeenSet;
}

int64_t InstanceLifeCycleOpsDto::GetTotalLifeRound() const
{
    return m_totalLifeRound;
}

void InstanceLifeCycleOpsDto::SetTotalLifeRound(const int64_t& _totalLifeRound)
{
    m_totalLifeRound = _totalLifeRound;
    m_totalLifeRoundHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TotalLifeRoundHasBeenSet() const
{
    return m_totalLifeRoundHasBeenSet;
}

TaskTypeOpsDto InstanceLifeCycleOpsDto::GetTaskType() const
{
    return m_taskType;
}

void InstanceLifeCycleOpsDto::SetTaskType(const TaskTypeOpsDto& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool InstanceLifeCycleOpsDto::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

