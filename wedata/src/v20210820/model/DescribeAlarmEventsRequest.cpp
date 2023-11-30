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

#include <tencentcloud/wedata/v20210820/model/DescribeAlarmEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeAlarmEventsRequest::DescribeAlarmEventsRequest() :
    m_projectIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_orderFieldsHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_monitorTypeHasBeenSet(false)
{
}

string DescribeAlarmEventsRequest::ToJsonString() const
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

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_orderFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_orderFields.begin(); itr != m_orderFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
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

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmEventsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeAlarmEventsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DescribeAlarmEventsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmEventsRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeAlarmEventsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmEventsRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<Filter> DescribeAlarmEventsRequest::GetFilters() const
{
    return m_filters;
}

void DescribeAlarmEventsRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<OrderField> DescribeAlarmEventsRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeAlarmEventsRequest::SetOrderFields(const vector<OrderField>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}

uint64_t DescribeAlarmEventsRequest::GetTaskType() const
{
    return m_taskType;
}

void DescribeAlarmEventsRequest::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string DescribeAlarmEventsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeAlarmEventsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeAlarmEventsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAlarmEventsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeAlarmEventsRequest::GetMonitorType() const
{
    return m_monitorType;
}

void DescribeAlarmEventsRequest::SetMonitorType(const uint64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool DescribeAlarmEventsRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}


