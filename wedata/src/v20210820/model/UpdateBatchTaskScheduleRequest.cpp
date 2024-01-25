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

#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskScheduleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateBatchTaskScheduleRequest::UpdateBatchTaskScheduleRequest() :
    m_taskIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false)
{
}

string UpdateBatchTaskScheduleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionEndTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateBatchTaskScheduleRequest::GetTaskIds() const
{
    return m_taskIds;
}

void UpdateBatchTaskScheduleRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateBatchTaskScheduleRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetSelfDepend() const
{
    return m_selfDepend;
}

void UpdateBatchTaskScheduleRequest::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetStartTime() const
{
    return m_startTime;
}

void UpdateBatchTaskScheduleRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetEndTime() const
{
    return m_endTime;
}

void UpdateBatchTaskScheduleRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t UpdateBatchTaskScheduleRequest::GetDelayTime() const
{
    return m_delayTime;
}

void UpdateBatchTaskScheduleRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetTaskAction() const
{
    return m_taskAction;
}

void UpdateBatchTaskScheduleRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetCycleType() const
{
    return m_cycleType;
}

void UpdateBatchTaskScheduleRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t UpdateBatchTaskScheduleRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void UpdateBatchTaskScheduleRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void UpdateBatchTaskScheduleRequest::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void UpdateBatchTaskScheduleRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string UpdateBatchTaskScheduleRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void UpdateBatchTaskScheduleRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool UpdateBatchTaskScheduleRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}


