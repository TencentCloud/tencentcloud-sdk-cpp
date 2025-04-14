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

#include <tencentcloud/wedata/v20210820/model/ListInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ListInstancesRequest::ListInstancesRequest() :
    m_projectIdHasBeenSet(false),
    m_scheduleTimeFromHasBeenSet(false),
    m_scheduleTimeToHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortColumnHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStateListHasBeenSet(false),
    m_taskTypeIdListHasBeenSet(false),
    m_taskCycleListHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_inChargeListHasBeenSet(false),
    m_taskFolderIdListHasBeenSet(false),
    m_workflowIdListHasBeenSet(false),
    m_executorGroupIdListHasBeenSet(false),
    m_startTimeFromHasBeenSet(false),
    m_startTimeToHasBeenSet(false),
    m_scheduleTimeZoneHasBeenSet(false)
{
}

string ListInstancesRequest::ToJsonString() const
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceStateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceStateList.begin(); itr != m_instanceStateList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_taskTypeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypeIdList.begin(); itr != m_taskTypeIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_taskCycleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskCycleList.begin(); itr != m_taskCycleList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inChargeList.begin(); itr != m_inChargeList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskFolderIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFolderIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskFolderIdList.begin(); itr != m_taskFolderIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_workflowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_workflowIdList.begin(); itr != m_workflowIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_executorGroupIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executorGroupIdList.begin(); itr != m_executorGroupIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_scheduleTimeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduleTimeZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduleTimeZone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListInstancesRequest::GetProjectId() const
{
    return m_projectId;
}

void ListInstancesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ListInstancesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ListInstancesRequest::GetScheduleTimeFrom() const
{
    return m_scheduleTimeFrom;
}

void ListInstancesRequest::SetScheduleTimeFrom(const string& _scheduleTimeFrom)
{
    m_scheduleTimeFrom = _scheduleTimeFrom;
    m_scheduleTimeFromHasBeenSet = true;
}

bool ListInstancesRequest::ScheduleTimeFromHasBeenSet() const
{
    return m_scheduleTimeFromHasBeenSet;
}

string ListInstancesRequest::GetScheduleTimeTo() const
{
    return m_scheduleTimeTo;
}

void ListInstancesRequest::SetScheduleTimeTo(const string& _scheduleTimeTo)
{
    m_scheduleTimeTo = _scheduleTimeTo;
    m_scheduleTimeToHasBeenSet = true;
}

bool ListInstancesRequest::ScheduleTimeToHasBeenSet() const
{
    return m_scheduleTimeToHasBeenSet;
}

int64_t ListInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListInstancesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListInstancesRequest::GetSortColumn() const
{
    return m_sortColumn;
}

void ListInstancesRequest::SetSortColumn(const string& _sortColumn)
{
    m_sortColumn = _sortColumn;
    m_sortColumnHasBeenSet = true;
}

bool ListInstancesRequest::SortColumnHasBeenSet() const
{
    return m_sortColumnHasBeenSet;
}

string ListInstancesRequest::GetSortType() const
{
    return m_sortType;
}

void ListInstancesRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool ListInstancesRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

uint64_t ListInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ListInstancesRequest::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ListInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<uint64_t> ListInstancesRequest::GetInstanceStateList() const
{
    return m_instanceStateList;
}

void ListInstancesRequest::SetInstanceStateList(const vector<uint64_t>& _instanceStateList)
{
    m_instanceStateList = _instanceStateList;
    m_instanceStateListHasBeenSet = true;
}

bool ListInstancesRequest::InstanceStateListHasBeenSet() const
{
    return m_instanceStateListHasBeenSet;
}

vector<uint64_t> ListInstancesRequest::GetTaskTypeIdList() const
{
    return m_taskTypeIdList;
}

void ListInstancesRequest::SetTaskTypeIdList(const vector<uint64_t>& _taskTypeIdList)
{
    m_taskTypeIdList = _taskTypeIdList;
    m_taskTypeIdListHasBeenSet = true;
}

bool ListInstancesRequest::TaskTypeIdListHasBeenSet() const
{
    return m_taskTypeIdListHasBeenSet;
}

vector<string> ListInstancesRequest::GetTaskCycleList() const
{
    return m_taskCycleList;
}

void ListInstancesRequest::SetTaskCycleList(const vector<string>& _taskCycleList)
{
    m_taskCycleList = _taskCycleList;
    m_taskCycleListHasBeenSet = true;
}

bool ListInstancesRequest::TaskCycleListHasBeenSet() const
{
    return m_taskCycleListHasBeenSet;
}

string ListInstancesRequest::GetKeyword() const
{
    return m_keyword;
}

void ListInstancesRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListInstancesRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

vector<string> ListInstancesRequest::GetInChargeList() const
{
    return m_inChargeList;
}

void ListInstancesRequest::SetInChargeList(const vector<string>& _inChargeList)
{
    m_inChargeList = _inChargeList;
    m_inChargeListHasBeenSet = true;
}

bool ListInstancesRequest::InChargeListHasBeenSet() const
{
    return m_inChargeListHasBeenSet;
}

vector<string> ListInstancesRequest::GetTaskFolderIdList() const
{
    return m_taskFolderIdList;
}

void ListInstancesRequest::SetTaskFolderIdList(const vector<string>& _taskFolderIdList)
{
    m_taskFolderIdList = _taskFolderIdList;
    m_taskFolderIdListHasBeenSet = true;
}

bool ListInstancesRequest::TaskFolderIdListHasBeenSet() const
{
    return m_taskFolderIdListHasBeenSet;
}

vector<string> ListInstancesRequest::GetWorkflowIdList() const
{
    return m_workflowIdList;
}

void ListInstancesRequest::SetWorkflowIdList(const vector<string>& _workflowIdList)
{
    m_workflowIdList = _workflowIdList;
    m_workflowIdListHasBeenSet = true;
}

bool ListInstancesRequest::WorkflowIdListHasBeenSet() const
{
    return m_workflowIdListHasBeenSet;
}

vector<string> ListInstancesRequest::GetExecutorGroupIdList() const
{
    return m_executorGroupIdList;
}

void ListInstancesRequest::SetExecutorGroupIdList(const vector<string>& _executorGroupIdList)
{
    m_executorGroupIdList = _executorGroupIdList;
    m_executorGroupIdListHasBeenSet = true;
}

bool ListInstancesRequest::ExecutorGroupIdListHasBeenSet() const
{
    return m_executorGroupIdListHasBeenSet;
}

string ListInstancesRequest::GetStartTimeFrom() const
{
    return m_startTimeFrom;
}

void ListInstancesRequest::SetStartTimeFrom(const string& _startTimeFrom)
{
    m_startTimeFrom = _startTimeFrom;
    m_startTimeFromHasBeenSet = true;
}

bool ListInstancesRequest::StartTimeFromHasBeenSet() const
{
    return m_startTimeFromHasBeenSet;
}

string ListInstancesRequest::GetStartTimeTo() const
{
    return m_startTimeTo;
}

void ListInstancesRequest::SetStartTimeTo(const string& _startTimeTo)
{
    m_startTimeTo = _startTimeTo;
    m_startTimeToHasBeenSet = true;
}

bool ListInstancesRequest::StartTimeToHasBeenSet() const
{
    return m_startTimeToHasBeenSet;
}

string ListInstancesRequest::GetScheduleTimeZone() const
{
    return m_scheduleTimeZone;
}

void ListInstancesRequest::SetScheduleTimeZone(const string& _scheduleTimeZone)
{
    m_scheduleTimeZone = _scheduleTimeZone;
    m_scheduleTimeZoneHasBeenSet = true;
}

bool ListInstancesRequest::ScheduleTimeZoneHasBeenSet() const
{
    return m_scheduleTimeZoneHasBeenSet;
}


