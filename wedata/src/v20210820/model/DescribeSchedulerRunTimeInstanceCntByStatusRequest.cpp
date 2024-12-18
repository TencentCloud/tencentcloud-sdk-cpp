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

#include <tencentcloud/wedata/v20210820/model/DescribeSchedulerRunTimeInstanceCntByStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeSchedulerRunTimeInstanceCntByStatusRequest::DescribeSchedulerRunTimeInstanceCntByStatusRequest() :
    m_projectIdHasBeenSet(false),
    m_cycleUnitHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_projectIdsHasBeenSet(false)
{
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::ToJsonString() const
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

    if (m_cycleUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
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

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_sortItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortItem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortItem.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetCycleUnit() const
{
    return m_cycleUnit;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetCycleUnit(const string& _cycleUnit)
{
    m_cycleUnit = _cycleUnit;
    m_cycleUnitHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::CycleUnitHasBeenSet() const
{
    return m_cycleUnitHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetInCharge() const
{
    return m_inCharge;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

vector<string> DescribeSchedulerRunTimeInstanceCntByStatusRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeSchedulerRunTimeInstanceCntByStatusRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeSchedulerRunTimeInstanceCntByStatusRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}


