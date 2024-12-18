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

#include <tencentcloud/wedata/v20210820/model/RuntimeInstanceCntTop.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuntimeInstanceCntTop::RuntimeInstanceCntTop() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_runTimeHasBeenSet(false),
    m_curRunTimeHasBeenSet(false),
    m_waitScheduleTimeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome RuntimeInstanceCntTop::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("CycleUnit") && !value["CycleUnit"].IsNull())
    {
        if (!value["CycleUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.CycleUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleUnit = string(value["CycleUnit"].GetString());
        m_cycleUnitHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("RunTime") && !value["RunTime"].IsNull())
    {
        if (!value["RunTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.RunTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runTime = value["RunTime"].GetUint64();
        m_runTimeHasBeenSet = true;
    }

    if (value.HasMember("CurRunTime") && !value["CurRunTime"].IsNull())
    {
        if (!value["CurRunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.CurRunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunTime = string(value["CurRunTime"].GetString());
        m_curRunTimeHasBeenSet = true;
    }

    if (value.HasMember("WaitScheduleTime") && !value["WaitScheduleTime"].IsNull())
    {
        if (!value["WaitScheduleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.WaitScheduleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_waitScheduleTime = value["WaitScheduleTime"].GetUint64();
        m_waitScheduleTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuntimeInstanceCntTop.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuntimeInstanceCntTop::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_runTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runTime, allocator);
    }

    if (m_curRunTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunTime.c_str(), allocator).Move(), allocator);
    }

    if (m_waitScheduleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitScheduleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_waitScheduleTime, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


string RuntimeInstanceCntTop::GetTaskId() const
{
    return m_taskId;
}

void RuntimeInstanceCntTop::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RuntimeInstanceCntTop::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RuntimeInstanceCntTop::GetTaskName() const
{
    return m_taskName;
}

void RuntimeInstanceCntTop::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool RuntimeInstanceCntTop::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string RuntimeInstanceCntTop::GetInCharge() const
{
    return m_inCharge;
}

void RuntimeInstanceCntTop::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool RuntimeInstanceCntTop::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string RuntimeInstanceCntTop::GetCycleUnit() const
{
    return m_cycleUnit;
}

void RuntimeInstanceCntTop::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool RuntimeInstanceCntTop::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string RuntimeInstanceCntTop::GetState() const
{
    return m_state;
}

void RuntimeInstanceCntTop::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool RuntimeInstanceCntTop::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

uint64_t RuntimeInstanceCntTop::GetRunTime() const
{
    return m_runTime;
}

void RuntimeInstanceCntTop::SetRunTime(const uint64_t& _runTime)
{
    m_runTime = _runTime;
    m_runTimeHasBeenSet = true;
}

bool RuntimeInstanceCntTop::RunTimeHasBeenSet() const
{
    return m_runTimeHasBeenSet;
}

string RuntimeInstanceCntTop::GetCurRunTime() const
{
    return m_curRunTime;
}

void RuntimeInstanceCntTop::SetCurRunTime(const string& _curRunTime)
{
    m_curRunTime = _curRunTime;
    m_curRunTimeHasBeenSet = true;
}

bool RuntimeInstanceCntTop::CurRunTimeHasBeenSet() const
{
    return m_curRunTimeHasBeenSet;
}

uint64_t RuntimeInstanceCntTop::GetWaitScheduleTime() const
{
    return m_waitScheduleTime;
}

void RuntimeInstanceCntTop::SetWaitScheduleTime(const uint64_t& _waitScheduleTime)
{
    m_waitScheduleTime = _waitScheduleTime;
    m_waitScheduleTimeHasBeenSet = true;
}

bool RuntimeInstanceCntTop::WaitScheduleTimeHasBeenSet() const
{
    return m_waitScheduleTimeHasBeenSet;
}

string RuntimeInstanceCntTop::GetProjectId() const
{
    return m_projectId;
}

void RuntimeInstanceCntTop::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RuntimeInstanceCntTop::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RuntimeInstanceCntTop::GetProjectName() const
{
    return m_projectName;
}

void RuntimeInstanceCntTop::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RuntimeInstanceCntTop::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

