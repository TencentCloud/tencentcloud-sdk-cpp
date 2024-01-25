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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskLatestRunTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskLatestRunTimeRequest::DescribeTaskLatestRunTimeRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_baseTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_selfDependHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_cronTabExpressionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false)
{
}

string DescribeTaskLatestRunTimeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_baseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseTime.c_str(), allocator).Move(), allocator);
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

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_selfDependHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelfDepend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_selfDepend.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_cronTabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronTabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronTabExpression.c_str(), allocator).Move(), allocator);
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


string DescribeTaskLatestRunTimeRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskLatestRunTimeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskLatestRunTimeRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetBaseTime() const
{
    return m_baseTime;
}

void DescribeTaskLatestRunTimeRequest::SetBaseTime(const string& _baseTime)
{
    m_baseTime = _baseTime;
    m_baseTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::BaseTimeHasBeenSet() const
{
    return m_baseTimeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTaskLatestRunTimeRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTaskLatestRunTimeRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetCycleType() const
{
    return m_cycleType;
}

void DescribeTaskLatestRunTimeRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetSelfDepend() const
{
    return m_selfDepend;
}

void DescribeTaskLatestRunTimeRequest::SetSelfDepend(const string& _selfDepend)
{
    m_selfDepend = _selfDepend;
    m_selfDependHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::SelfDependHasBeenSet() const
{
    return m_selfDependHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetTaskAction() const
{
    return m_taskAction;
}

void DescribeTaskLatestRunTimeRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

int64_t DescribeTaskLatestRunTimeRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void DescribeTaskLatestRunTimeRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

int64_t DescribeTaskLatestRunTimeRequest::GetDelayTime() const
{
    return m_delayTime;
}

void DescribeTaskLatestRunTimeRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetCronTabExpression() const
{
    return m_cronTabExpression;
}

void DescribeTaskLatestRunTimeRequest::SetCronTabExpression(const string& _cronTabExpression)
{
    m_cronTabExpression = _cronTabExpression;
    m_cronTabExpressionHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::CronTabExpressionHasBeenSet() const
{
    return m_cronTabExpressionHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void DescribeTaskLatestRunTimeRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string DescribeTaskLatestRunTimeRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void DescribeTaskLatestRunTimeRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool DescribeTaskLatestRunTimeRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}


