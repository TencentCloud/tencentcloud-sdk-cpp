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

#include <tencentcloud/wedata/v20250806/model/QualityProdSchedulerTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityProdSchedulerTask::QualityProdSchedulerTask() :
    m_workflowIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false),
    m_inChargeIdListHasBeenSet(false),
    m_inChargeNameListHasBeenSet(false)
{
}

CoreInternalOutcome QualityProdSchedulerTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.CycleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = value["CycleType"].GetInt64();
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("ScheduleTimeZone") && !value["ScheduleTimeZone"].IsNull())
    {
        if (!value["ScheduleTimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.ScheduleTimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduleTimeZone = string(value["ScheduleTimeZone"].GetString());
        m_scheduleTimeZoneHasBeenSet = true;
    }

    if (value.HasMember("InChargeIdList") && !value["InChargeIdList"].IsNull())
    {
        if (!value["InChargeIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.InChargeIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["InChargeIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inChargeIdList.push_back((*itr).GetString());
        }
        m_inChargeIdListHasBeenSet = true;
    }

    if (value.HasMember("InChargeNameList") && !value["InChargeNameList"].IsNull())
    {
        if (!value["InChargeNameList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityProdSchedulerTask.InChargeNameList` is not array type"));

        const rapidjson::Value &tmpValue = value["InChargeNameList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inChargeNameList.push_back((*itr).GetString());
        }
        m_inChargeNameListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityProdSchedulerTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleType, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeIdList.begin(); itr != m_inChargeIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inChargeNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeNameList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeNameList.begin(); itr != m_inChargeNameList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string QualityProdSchedulerTask::GetWorkflowId() const
{
    return m_workflowId;
}

void QualityProdSchedulerTask::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool QualityProdSchedulerTask::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string QualityProdSchedulerTask::GetTaskId() const
{
    return m_taskId;
}

void QualityProdSchedulerTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool QualityProdSchedulerTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string QualityProdSchedulerTask::GetTaskName() const
{
    return m_taskName;
}

void QualityProdSchedulerTask::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool QualityProdSchedulerTask::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

int64_t QualityProdSchedulerTask::GetCycleType() const
{
    return m_cycleType;
}

void QualityProdSchedulerTask::SetCycleType(const int64_t& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool QualityProdSchedulerTask::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string QualityProdSchedulerTask::GetTaskType() const
{
    return m_taskType;
}

void QualityProdSchedulerTask::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool QualityProdSchedulerTask::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string QualityProdSchedulerTask::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void QualityProdSchedulerTask::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool QualityProdSchedulerTask::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}

vector<string> QualityProdSchedulerTask::GetInChargeIdList() const
{
    return m_inChargeIdList;
}

void QualityProdSchedulerTask::SetInChargeIdList(const vector<string>& _inChargeIdList)
{
    m_inChargeIdList = _inChargeIdList;
    m_inChargeIdListHasBeenSet = true;
}

bool QualityProdSchedulerTask::InChargeIdListHasBeenSet() const
{
    return m_inChargeIdListHasBeenSet;
}

vector<string> QualityProdSchedulerTask::GetInChargeNameList() const
{
    return m_inChargeNameList;
}

void QualityProdSchedulerTask::SetInChargeNameList(const vector<string>& _inChargeNameList)
{
    m_inChargeNameList = _inChargeNameList;
    m_inChargeNameListHasBeenSet = true;
}

bool QualityProdSchedulerTask::InChargeNameListHasBeenSet() const
{
    return m_inChargeNameListHasBeenSet;
}

