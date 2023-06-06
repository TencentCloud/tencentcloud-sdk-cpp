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

#include <tencentcloud/wedata/v20210820/model/InstanceList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceList::InstanceList() :
    m_costTimeHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_doFlagHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_lastLogHasBeenSet(false),
    m_schedulerDescHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_tryLimitHasBeenSet(false)
{
}

CoreInternalOutcome InstanceList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("DoFlag") && !value["DoFlag"].IsNull())
    {
        if (!value["DoFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.DoFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doFlag = value["DoFlag"].GetInt64();
        m_doFlagHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("LastLog") && !value["LastLog"].IsNull())
    {
        if (!value["LastLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.LastLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLog = string(value["LastLog"].GetString());
        m_lastLogHasBeenSet = true;
    }

    if (value.HasMember("SchedulerDesc") && !value["SchedulerDesc"].IsNull())
    {
        if (!value["SchedulerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.SchedulerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schedulerDesc = string(value["SchedulerDesc"].GetString());
        m_schedulerDescHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TryLimit") && !value["TryLimit"].IsNull())
    {
        if (!value["TryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceList.TryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryLimit = value["TryLimit"].GetInt64();
        m_tryLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_doFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doFlag, allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLog.c_str(), allocator).Move(), allocator);
    }

    if (m_schedulerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schedulerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

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

    if (m_tryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryLimit, allocator);
    }

}


string InstanceList::GetCostTime() const
{
    return m_costTime;
}

void InstanceList::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceList::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string InstanceList::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceList::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceList::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceList::GetCycleType() const
{
    return m_cycleType;
}

void InstanceList::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool InstanceList::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t InstanceList::GetDoFlag() const
{
    return m_doFlag;
}

void InstanceList::SetDoFlag(const int64_t& _doFlag)
{
    m_doFlag = _doFlag;
    m_doFlagHasBeenSet = true;
}

bool InstanceList::DoFlagHasBeenSet() const
{
    return m_doFlagHasBeenSet;
}

string InstanceList::GetInCharge() const
{
    return m_inCharge;
}

void InstanceList::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool InstanceList::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string InstanceList::GetLastLog() const
{
    return m_lastLog;
}

void InstanceList::SetLastLog(const string& _lastLog)
{
    m_lastLog = _lastLog;
    m_lastLogHasBeenSet = true;
}

bool InstanceList::LastLogHasBeenSet() const
{
    return m_lastLogHasBeenSet;
}

string InstanceList::GetSchedulerDesc() const
{
    return m_schedulerDesc;
}

void InstanceList::SetSchedulerDesc(const string& _schedulerDesc)
{
    m_schedulerDesc = _schedulerDesc;
    m_schedulerDescHasBeenSet = true;
}

bool InstanceList::SchedulerDescHasBeenSet() const
{
    return m_schedulerDescHasBeenSet;
}

string InstanceList::GetStartTime() const
{
    return m_startTime;
}

void InstanceList::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceList::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceList::GetState() const
{
    return m_state;
}

void InstanceList::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool InstanceList::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string InstanceList::GetTaskId() const
{
    return m_taskId;
}

void InstanceList::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceList::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceList::GetTaskName() const
{
    return m_taskName;
}

void InstanceList::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceList::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t InstanceList::GetTryLimit() const
{
    return m_tryLimit;
}

void InstanceList::SetTryLimit(const int64_t& _tryLimit)
{
    m_tryLimit = _tryLimit;
    m_tryLimitHasBeenSet = true;
}

bool InstanceList::TryLimitHasBeenSet() const
{
    return m_tryLimitHasBeenSet;
}

