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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskParentRunTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskParentRunTimeRequest::DescribeTaskParentRunTimeRequest() :
    m_projectIdHasBeenSet(false),
    m_parentConfigsHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_crontabExpressionHasBeenSet(false),
    m_instanceInitStrategyHasBeenSet(false),
    m_taskActionHasBeenSet(false),
    m_executionStartTimeHasBeenSet(false),
    m_executionEndTimeHasBeenSet(false)
{
}

string DescribeTaskParentRunTimeRequest::ToJsonString() const
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

    if (m_parentConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parentConfigs.begin(); itr != m_parentConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_crontabExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabExpression";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_crontabExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceInitStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceInitStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_taskActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskAction.c_str(), allocator).Move(), allocator);
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


string DescribeTaskParentRunTimeRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskParentRunTimeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TaskParentSchedulerDependency> DescribeTaskParentRunTimeRequest::GetParentConfigs() const
{
    return m_parentConfigs;
}

void DescribeTaskParentRunTimeRequest::SetParentConfigs(const vector<TaskParentSchedulerDependency>& _parentConfigs)
{
    m_parentConfigs = _parentConfigs;
    m_parentConfigsHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::ParentConfigsHasBeenSet() const
{
    return m_parentConfigsHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetCycleType() const
{
    return m_cycleType;
}

void DescribeTaskParentRunTimeRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

int64_t DescribeTaskParentRunTimeRequest::GetCycleStep() const
{
    return m_cycleStep;
}

void DescribeTaskParentRunTimeRequest::SetCycleStep(const int64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void DescribeTaskParentRunTimeRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

int64_t DescribeTaskParentRunTimeRequest::GetDelayTime() const
{
    return m_delayTime;
}

void DescribeTaskParentRunTimeRequest::SetDelayTime(const int64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetCrontabExpression() const
{
    return m_crontabExpression;
}

void DescribeTaskParentRunTimeRequest::SetCrontabExpression(const string& _crontabExpression)
{
    m_crontabExpression = _crontabExpression;
    m_crontabExpressionHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::CrontabExpressionHasBeenSet() const
{
    return m_crontabExpressionHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetInstanceInitStrategy() const
{
    return m_instanceInitStrategy;
}

void DescribeTaskParentRunTimeRequest::SetInstanceInitStrategy(const string& _instanceInitStrategy)
{
    m_instanceInitStrategy = _instanceInitStrategy;
    m_instanceInitStrategyHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::InstanceInitStrategyHasBeenSet() const
{
    return m_instanceInitStrategyHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetTaskAction() const
{
    return m_taskAction;
}

void DescribeTaskParentRunTimeRequest::SetTaskAction(const string& _taskAction)
{
    m_taskAction = _taskAction;
    m_taskActionHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::TaskActionHasBeenSet() const
{
    return m_taskActionHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetExecutionStartTime() const
{
    return m_executionStartTime;
}

void DescribeTaskParentRunTimeRequest::SetExecutionStartTime(const string& _executionStartTime)
{
    m_executionStartTime = _executionStartTime;
    m_executionStartTimeHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::ExecutionStartTimeHasBeenSet() const
{
    return m_executionStartTimeHasBeenSet;
}

string DescribeTaskParentRunTimeRequest::GetExecutionEndTime() const
{
    return m_executionEndTime;
}

void DescribeTaskParentRunTimeRequest::SetExecutionEndTime(const string& _executionEndTime)
{
    m_executionEndTime = _executionEndTime;
    m_executionEndTimeHasBeenSet = true;
}

bool DescribeTaskParentRunTimeRequest::ExecutionEndTimeHasBeenSet() const
{
    return m_executionEndTimeHasBeenSet;
}


