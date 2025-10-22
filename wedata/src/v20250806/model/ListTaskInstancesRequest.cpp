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

#include <tencentcloud/wedata/v20250806/model/ListTaskInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ListTaskInstancesRequest::ListTaskInstancesRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_taskTypeIdHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_scheduleTimeFromHasBeenSet(false),
    m_scheduleTimeToHasBeenSet(false),
    m_startTimeFromHasBeenSet(false),
    m_startTimeToHasBeenSet(false),
    m_lastUpdateTimeFromHasBeenSet(false),
    m_lastUpdateTimeToHasBeenSet(false),
    m_sortColumnHasBeenSet(false),
    m_sortTypeHasBeenSet(false)
{
}

string ListTaskInstancesRequest::ToJsonString() const
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskTypeId, allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_scheduleTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTimeFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastUpdateTimeFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTimeTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lastUpdateTimeTo.c_str(), allocator).Move(), allocator);
    }

    if (m_sortColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortColumn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortColumn.c_str(), allocator).Move(), allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListTaskInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void ListTaskInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListTaskInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ListTaskInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListTaskInstancesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListTaskInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListTaskInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListTaskInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListTaskInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListTaskInstancesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListTaskInstancesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListTaskInstancesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string ListTaskInstancesRequest::GetTimeZone() const
{
    return m_timeZone;
}

void ListTaskInstancesRequest::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool ListTaskInstancesRequest::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

uint64_t ListTaskInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ListTaskInstancesRequest::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ListTaskInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ListTaskInstancesRequest::GetInstanceState() const
{
    return m_instanceState;
}

void ListTaskInstancesRequest::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool ListTaskInstancesRequest::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t ListTaskInstancesRequest::GetTaskTypeId() const
{
    return m_taskTypeId;
}

void ListTaskInstancesRequest::SetTaskTypeId(const uint64_t& _taskTypeId)
{
    m_taskTypeId = _taskTypeId;
    m_taskTypeIdHasBeenSet = true;
}

bool ListTaskInstancesRequest::TaskTypeIdHasBeenSet() const
{
    return m_taskTypeIdHasBeenSet;
}

string ListTaskInstancesRequest::GetCycleType() const
{
    return m_cycleType;
}

void ListTaskInstancesRequest::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool ListTaskInstancesRequest::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string ListTaskInstancesRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void ListTaskInstancesRequest::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ListTaskInstancesRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string ListTaskInstancesRequest::GetFolderId() const
{
    return m_folderId;
}

void ListTaskInstancesRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool ListTaskInstancesRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string ListTaskInstancesRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ListTaskInstancesRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ListTaskInstancesRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ListTaskInstancesRequest::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void ListTaskInstancesRequest::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool ListTaskInstancesRequest::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string ListTaskInstancesRequest::GetScheduleTimeFrom() const
{
    return m_scheduleTimeFrom;
}

void ListTaskInstancesRequest::SetScheduleTimeFrom(const string& _scheduleTimeFrom)
{
    m_scheduleTimeFrom = _scheduleTimeFrom;
    m_scheduleTimeFromHasBeenSet = true;
}

bool ListTaskInstancesRequest::ScheduleTimeFromHasBeenSet() const
{
    return m_scheduleTimeFromHasBeenSet;
}

string ListTaskInstancesRequest::GetScheduleTimeTo() const
{
    return m_scheduleTimeTo;
}

void ListTaskInstancesRequest::SetScheduleTimeTo(const string& _scheduleTimeTo)
{
    m_scheduleTimeTo = _scheduleTimeTo;
    m_scheduleTimeToHasBeenSet = true;
}

bool ListTaskInstancesRequest::ScheduleTimeToHasBeenSet() const
{
    return m_scheduleTimeToHasBeenSet;
}

string ListTaskInstancesRequest::GetStartTimeFrom() const
{
    return m_startTimeFrom;
}

void ListTaskInstancesRequest::SetStartTimeFrom(const string& _startTimeFrom)
{
    m_startTimeFrom = _startTimeFrom;
    m_startTimeFromHasBeenSet = true;
}

bool ListTaskInstancesRequest::StartTimeFromHasBeenSet() const
{
    return m_startTimeFromHasBeenSet;
}

string ListTaskInstancesRequest::GetStartTimeTo() const
{
    return m_startTimeTo;
}

void ListTaskInstancesRequest::SetStartTimeTo(const string& _startTimeTo)
{
    m_startTimeTo = _startTimeTo;
    m_startTimeToHasBeenSet = true;
}

bool ListTaskInstancesRequest::StartTimeToHasBeenSet() const
{
    return m_startTimeToHasBeenSet;
}

string ListTaskInstancesRequest::GetLastUpdateTimeFrom() const
{
    return m_lastUpdateTimeFrom;
}

void ListTaskInstancesRequest::SetLastUpdateTimeFrom(const string& _lastUpdateTimeFrom)
{
    m_lastUpdateTimeFrom = _lastUpdateTimeFrom;
    m_lastUpdateTimeFromHasBeenSet = true;
}

bool ListTaskInstancesRequest::LastUpdateTimeFromHasBeenSet() const
{
    return m_lastUpdateTimeFromHasBeenSet;
}

string ListTaskInstancesRequest::GetLastUpdateTimeTo() const
{
    return m_lastUpdateTimeTo;
}

void ListTaskInstancesRequest::SetLastUpdateTimeTo(const string& _lastUpdateTimeTo)
{
    m_lastUpdateTimeTo = _lastUpdateTimeTo;
    m_lastUpdateTimeToHasBeenSet = true;
}

bool ListTaskInstancesRequest::LastUpdateTimeToHasBeenSet() const
{
    return m_lastUpdateTimeToHasBeenSet;
}

string ListTaskInstancesRequest::GetSortColumn() const
{
    return m_sortColumn;
}

void ListTaskInstancesRequest::SetSortColumn(const string& _sortColumn)
{
    m_sortColumn = _sortColumn;
    m_sortColumnHasBeenSet = true;
}

bool ListTaskInstancesRequest::SortColumnHasBeenSet() const
{
    return m_sortColumnHasBeenSet;
}

string ListTaskInstancesRequest::GetSortType() const
{
    return m_sortType;
}

void ListTaskInstancesRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListTaskInstancesRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}


