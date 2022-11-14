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

#include <tencentcloud/wedata/v20210820/model/RuleGroupSchedulerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleGroupSchedulerInfo::RuleGroupSchedulerInfo() :
    m_idHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_cycleDescHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_cycleTaskIdHasBeenSet(false),
    m_associateTaskIdsHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupSchedulerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.MonitorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetInt64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.CycleStep` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetInt64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("CycleDesc") && !value["CycleDesc"].IsNull())
    {
        if (!value["CycleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.CycleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleDesc = string(value["CycleDesc"].GetString());
        m_cycleDescHasBeenSet = true;
    }

    if (value.HasMember("TaskAction") && !value["TaskAction"].IsNull())
    {
        if (!value["TaskAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.TaskAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskAction = string(value["TaskAction"].GetString());
        m_taskActionHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.DelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetInt64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("CycleTaskId") && !value["CycleTaskId"].IsNull())
    {
        if (!value["CycleTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.CycleTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleTaskId = string(value["CycleTaskId"].GetString());
        m_cycleTaskIdHasBeenSet = true;
    }

    if (value.HasMember("AssociateTaskIds") && !value["AssociateTaskIds"].IsNull())
    {
        if (!value["AssociateTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupSchedulerInfo.AssociateTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociateTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_associateTaskIds.push_back((*itr).GetString());
        }
        m_associateTaskIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupSchedulerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_cycleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_cycleTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_associateTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociateTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_associateTaskIds.begin(); itr != m_associateTaskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t RuleGroupSchedulerInfo::GetId() const
{
    return m_id;
}

void RuleGroupSchedulerInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t RuleGroupSchedulerInfo::GetMonitorType() const
{
    return m_monitorType;
}

void RuleGroupSchedulerInfo::SetMonitorType(const int64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string RuleGroupSchedulerInfo::GetStartTime() const
{
    return m_startTime;
}

void RuleGroupSchedulerInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RuleGroupSchedulerInfo::GetEndTime() const
{
    return m_endTime;
}

void RuleGroupSchedulerInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RuleGroupSchedulerInfo::GetCycleType() const
{
    return m_cycleType;
}

void RuleGroupSchedulerInfo::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t RuleGroupSchedulerInfo::GetCycleStep() const
{
    return m_cycleStep;
}

void RuleGroupSchedulerInfo::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string RuleGroupSchedulerInfo::GetCycleDesc() const
{
    return m_cycleDesc;
}

void RuleGroupSchedulerInfo::SetCycleDesc(const string& _cycleDesc)
{
    m_cycleDesc = _cycleDesc;
    m_cycleDescHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::CycleDescHasBeenSet() const
{
    return m_cycleDescHasBeenSet;
}

string RuleGroupSchedulerInfo::GetTaskAction() const
{
    return m_taskAction;
}

void RuleGroupSchedulerInfo::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t RuleGroupSchedulerInfo::GetDelayTime() const
{
    return m_delayTime;
}

void RuleGroupSchedulerInfo::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string RuleGroupSchedulerInfo::GetCycleTaskId() const
{
    return m_cycleTaskId;
}

void RuleGroupSchedulerInfo::SetCycleTaskId(const string& _cycleTaskId)
{
    m_cycleTaskId = _cycleTaskId;
    m_cycleTaskIdHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::CycleTaskIdHasBeenSet() const
{
    return m_cycleTaskIdHasBeenSet;
}

vector<string> RuleGroupSchedulerInfo::GetAssociateTaskIds() const
{
    return m_associateTaskIds;
}

void RuleGroupSchedulerInfo::SetAssociateTaskIds(const vector<string>& _associateTaskIds)
{
    m_associateTaskIds = _associateTaskIds;
    m_associateTaskIdsHasBeenSet = true;
}

bool RuleGroupSchedulerInfo::AssociateTaskIdsHasBeenSet() const
{
    return m_associateTaskIdsHasBeenSet;
}

