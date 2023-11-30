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

#include <tencentcloud/wedata/v20210820/model/DescribeEventCasesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeEventCasesRequest::DescribeEventCasesRequest() :
    m_projectIdHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeStartHasBeenSet(false),
    m_creationTimeEndHasBeenSet(false),
    m_eventTriggeredTimeStartHasBeenSet(false),
    m_eventTriggeredTimeEndHasBeenSet(false),
    m_logTimeStartHasBeenSet(false),
    m_logTimeEndHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_sortItemHasBeenSet(false),
    m_sortTypeHasBeenSet(false)
{
}

string DescribeEventCasesRequest::ToJsonString() const
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
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

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBroadcastTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBroadcastType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBroadcastType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creationTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creationTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTriggeredTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTriggeredTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventTriggeredTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTriggeredTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTriggeredTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventTriggeredTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_logTimeStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTimeStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTimeStart.c_str(), allocator).Move(), allocator);
    }

    if (m_logTimeEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTimeEnd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTimeEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeToLive.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEventCasesRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeEventCasesRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeEventCasesRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeEventCasesRequest::GetCategory() const
{
    return m_category;
}

void DescribeEventCasesRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeEventCasesRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

uint64_t DescribeEventCasesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeEventCasesRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeEventCasesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t DescribeEventCasesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeEventCasesRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeEventCasesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeEventCasesRequest::GetEventName() const
{
    return m_eventName;
}

void DescribeEventCasesRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string DescribeEventCasesRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeEventCasesRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeEventCasesRequest::GetEventSubType() const
{
    return m_eventSubType;
}

void DescribeEventCasesRequest::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string DescribeEventCasesRequest::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void DescribeEventCasesRequest::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

string DescribeEventCasesRequest::GetStatus() const
{
    return m_status;
}

void DescribeEventCasesRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeEventCasesRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeEventCasesRequest::GetCreationTimeStart() const
{
    return m_creationTimeStart;
}

void DescribeEventCasesRequest::SetCreationTimeStart(const string& _creationTimeStart)
{
    m_creationTimeStart = _creationTimeStart;
    m_creationTimeStartHasBeenSet = true;
}

bool DescribeEventCasesRequest::CreationTimeStartHasBeenSet() const
{
    return m_creationTimeStartHasBeenSet;
}

string DescribeEventCasesRequest::GetCreationTimeEnd() const
{
    return m_creationTimeEnd;
}

void DescribeEventCasesRequest::SetCreationTimeEnd(const string& _creationTimeEnd)
{
    m_creationTimeEnd = _creationTimeEnd;
    m_creationTimeEndHasBeenSet = true;
}

bool DescribeEventCasesRequest::CreationTimeEndHasBeenSet() const
{
    return m_creationTimeEndHasBeenSet;
}

string DescribeEventCasesRequest::GetEventTriggeredTimeStart() const
{
    return m_eventTriggeredTimeStart;
}

void DescribeEventCasesRequest::SetEventTriggeredTimeStart(const string& _eventTriggeredTimeStart)
{
    m_eventTriggeredTimeStart = _eventTriggeredTimeStart;
    m_eventTriggeredTimeStartHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventTriggeredTimeStartHasBeenSet() const
{
    return m_eventTriggeredTimeStartHasBeenSet;
}

string DescribeEventCasesRequest::GetEventTriggeredTimeEnd() const
{
    return m_eventTriggeredTimeEnd;
}

void DescribeEventCasesRequest::SetEventTriggeredTimeEnd(const string& _eventTriggeredTimeEnd)
{
    m_eventTriggeredTimeEnd = _eventTriggeredTimeEnd;
    m_eventTriggeredTimeEndHasBeenSet = true;
}

bool DescribeEventCasesRequest::EventTriggeredTimeEndHasBeenSet() const
{
    return m_eventTriggeredTimeEndHasBeenSet;
}

string DescribeEventCasesRequest::GetLogTimeStart() const
{
    return m_logTimeStart;
}

void DescribeEventCasesRequest::SetLogTimeStart(const string& _logTimeStart)
{
    m_logTimeStart = _logTimeStart;
    m_logTimeStartHasBeenSet = true;
}

bool DescribeEventCasesRequest::LogTimeStartHasBeenSet() const
{
    return m_logTimeStartHasBeenSet;
}

string DescribeEventCasesRequest::GetLogTimeEnd() const
{
    return m_logTimeEnd;
}

void DescribeEventCasesRequest::SetLogTimeEnd(const string& _logTimeEnd)
{
    m_logTimeEnd = _logTimeEnd;
    m_logTimeEndHasBeenSet = true;
}

bool DescribeEventCasesRequest::LogTimeEndHasBeenSet() const
{
    return m_logTimeEndHasBeenSet;
}

string DescribeEventCasesRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeEventCasesRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeEventCasesRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeEventCasesRequest::GetTimeToLive() const
{
    return m_timeToLive;
}

void DescribeEventCasesRequest::SetTimeToLive(const string& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool DescribeEventCasesRequest::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}

string DescribeEventCasesRequest::GetSortItem() const
{
    return m_sortItem;
}

void DescribeEventCasesRequest::SetSortItem(const string& _sortItem)
{
    m_sortItem = _sortItem;
    m_sortItemHasBeenSet = true;
}

bool DescribeEventCasesRequest::SortItemHasBeenSet() const
{
    return m_sortItemHasBeenSet;
}

string DescribeEventCasesRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeEventCasesRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeEventCasesRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}


