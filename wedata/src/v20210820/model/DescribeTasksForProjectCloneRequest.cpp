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

#include <tencentcloud/wedata/v20210820/model/DescribeTasksForProjectCloneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTasksForProjectCloneRequest::DescribeTasksForProjectCloneRequest() :
    m_projectIdHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_filterTaskNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeTasksForProjectCloneRequest::ToJsonString() const
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

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_size, allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTasksForProjectCloneRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTasksForProjectCloneRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeTasksForProjectCloneRequest::GetPage() const
{
    return m_page;
}

void DescribeTasksForProjectCloneRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeTasksForProjectCloneRequest::GetSize() const
{
    return m_size;
}

void DescribeTasksForProjectCloneRequest::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetOrder() const
{
    return m_order;
}

void DescribeTasksForProjectCloneRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetFilterTaskName() const
{
    return m_filterTaskName;
}

void DescribeTasksForProjectCloneRequest::SetFilterTaskName(const string& _filterTaskName)
{
    m_filterTaskName = _filterTaskName;
    m_filterTaskNameHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::FilterTaskNameHasBeenSet() const
{
    return m_filterTaskNameHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetOwnerName() const
{
    return m_ownerName;
}

void DescribeTasksForProjectCloneRequest::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetWorkflowName() const
{
    return m_workflowName;
}

void DescribeTasksForProjectCloneRequest::SetWorkflowName(const string& _workflowName)
{
    m_workflowName = _workflowName;
    m_workflowNameHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::WorkflowNameHasBeenSet() const
{
    return m_workflowNameHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetTaskStatus() const
{
    return m_taskStatus;
}

void DescribeTasksForProjectCloneRequest::SetTaskStatus(const string& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTasksForProjectCloneRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTasksForProjectCloneRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTasksForProjectCloneRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTasksForProjectCloneRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


