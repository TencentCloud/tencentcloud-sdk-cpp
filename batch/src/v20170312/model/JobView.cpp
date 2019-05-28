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

#include <tencentcloud/batch/v20170312/model/JobView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace rapidjson;
using namespace std;

JobView::JobView() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_jobStateHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskMetricsHasBeenSet(false)
{
}

CoreInternalOutcome JobView::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobView.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobView.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("JobState") && !value["JobState"].IsNull())
    {
        if (!value["JobState"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobView.JobState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobState = string(value["JobState"].GetString());
        m_jobStateHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `JobView.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `JobView.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobView.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `JobView.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskMetrics") && !value["TaskMetrics"].IsNull())
    {
        if (!value["TaskMetrics"].IsObject())
        {
            return CoreInternalOutcome(Error("response `JobView.TaskMetrics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taskMetrics.Deserialize(value["TaskMetrics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taskMetricsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobView::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_jobStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobState.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskMetricsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_taskMetrics.ToJsonObject(value[key.c_str()], allocator);
    }

}


string JobView::GetJobId() const
{
    return m_jobId;
}

void JobView::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool JobView::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string JobView::GetJobName() const
{
    return m_jobName;
}

void JobView::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool JobView::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string JobView::GetJobState() const
{
    return m_jobState;
}

void JobView::SetJobState(const string& _jobState)
{
    m_jobState = _jobState;
    m_jobStateHasBeenSet = true;
}

bool JobView::JobStateHasBeenSet() const
{
    return m_jobStateHasBeenSet;
}

int64_t JobView::GetPriority() const
{
    return m_priority;
}

void JobView::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool JobView::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

Placement JobView::GetPlacement() const
{
    return m_placement;
}

void JobView::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool JobView::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string JobView::GetCreateTime() const
{
    return m_createTime;
}

void JobView::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JobView::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JobView::GetEndTime() const
{
    return m_endTime;
}

void JobView::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool JobView::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

TaskMetrics JobView::GetTaskMetrics() const
{
    return m_taskMetrics;
}

void JobView::SetTaskMetrics(const TaskMetrics& _taskMetrics)
{
    m_taskMetrics = _taskMetrics;
    m_taskMetricsHasBeenSet = true;
}

bool JobView::TaskMetricsHasBeenSet() const
{
    return m_taskMetricsHasBeenSet;
}

