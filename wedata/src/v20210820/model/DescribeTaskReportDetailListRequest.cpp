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

#include <tencentcloud/wedata/v20210820/model/DescribeTaskReportDetailListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTaskReportDetailListRequest::DescribeTaskReportDetailListRequest() :
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_beginDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_stateListHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeTaskReportDetailListRequest::ToJsonString() const
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

    if (m_beginDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_stateListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_stateList.c_str(), allocator).Move(), allocator);
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

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTaskReportDetailListRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeTaskReportDetailListRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeTaskReportDetailListRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetBeginDate() const
{
    return m_beginDate;
}

void DescribeTaskReportDetailListRequest::SetBeginDate(const string& _beginDate)
{
    m_beginDate = _beginDate;
    m_beginDateHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::BeginDateHasBeenSet() const
{
    return m_beginDateHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeTaskReportDetailListRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetStateList() const
{
    return m_stateList;
}

void DescribeTaskReportDetailListRequest::SetStateList(const string& _stateList)
{
    m_stateList = _stateList;
    m_stateListHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::StateListHasBeenSet() const
{
    return m_stateListHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeTaskReportDetailListRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeTaskReportDetailListRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeTaskReportDetailListRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

uint64_t DescribeTaskReportDetailListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeTaskReportDetailListRequest::SetPageIndex(const uint64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

uint64_t DescribeTaskReportDetailListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeTaskReportDetailListRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeTaskReportDetailListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


