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

#include <tencentcloud/wedata/v20210820/model/DescribeStatisticInstanceStatusTrendOpsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeStatisticInstanceStatusTrendOpsRequest::DescribeStatisticInstanceStatusTrendOpsRequest() :
    m_projectIdHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_executionGroupIdHasBeenSet(false),
    m_executionGroupNameHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_aggregationUnitHasBeenSet(false),
    m_averageWindowSizeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_timePointHasBeenSet(false)
{
}

string DescribeStatisticInstanceStatusTrendOpsRequest::ToJsonString() const
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

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
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

    if (m_executionGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_executionGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stateList.begin(); itr != m_stateList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_aggregationUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aggregationUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_averageWindowSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageWindowSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_averageWindowSize, allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timePointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timePoint, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStatisticInstanceStatusTrendOpsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetTaskTypeId(const string& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetTimeType() const
{
    return m_timeType;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetTypeName() const
{
    return m_typeName;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetExecutionGroupId() const
{
    return m_executionGroupId;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetExecutionGroupId(const string& _executionGroupId)
{
    m_executionGroupId = _executionGroupId;
    m_executionGroupIdHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::ExecutionGroupIdHasBeenSet() const
{
    return m_executionGroupIdHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetExecutionGroupName() const
{
    return m_executionGroupName;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetExecutionGroupName(const string& _executionGroupName)
{
    m_executionGroupName = _executionGroupName;
    m_executionGroupNameHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::ExecutionGroupNameHasBeenSet() const
{
    return m_executionGroupNameHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetInCharge() const
{
    return m_inCharge;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

int64_t DescribeStatisticInstanceStatusTrendOpsRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<int64_t> DescribeStatisticInstanceStatusTrendOpsRequest::GetStateList() const
{
    return m_stateList;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetStateList(const vector<int64_t>& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetAggregationUnit() const
{
    return m_aggregationUnit;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetAggregationUnit(const string& _aggregationUnit)
{
    m_aggregationUnit = _aggregationUnit;
    m_aggregationUnitHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::AggregationUnitHasBeenSet() const
{
    return m_aggregationUnitHasBeenSet;
}

int64_t DescribeStatisticInstanceStatusTrendOpsRequest::GetAverageWindowSize() const
{
    return m_averageWindowSize;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetAverageWindowSize(const int64_t& _averageWindowSize)
{
    m_averageWindowSize = _averageWindowSize;
    m_averageWindowSizeHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::AverageWindowSizeHasBeenSet() const
{
    return m_averageWindowSizeHasBeenSet;
}

string DescribeStatisticInstanceStatusTrendOpsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

vector<string> DescribeStatisticInstanceStatusTrendOpsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

uint64_t DescribeStatisticInstanceStatusTrendOpsRequest::GetTimePoint() const
{
    return m_timePoint;
}

void DescribeStatisticInstanceStatusTrendOpsRequest::SetTimePoint(const uint64_t& _timePoint)
{
    m_timePoint = _timePoint;
    m_timePointHasBeenSet = true;
}

bool DescribeStatisticInstanceStatusTrendOpsRequest::TimePointHasBeenSet() const
{
    return m_timePointHasBeenSet;
}


