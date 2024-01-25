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

#include <tencentcloud/wedata/v20210820/model/DescribeDsEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDsEventRequest::DescribeDsEventRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_datetimeFormatHasBeenSet(false),
    m_creationTimeStartHasBeenSet(false),
    m_creationTimeEndHasBeenSet(false),
    m_orderFieldsHasBeenSet(false),
    m_ownerNameListHasBeenSet(false),
    m_taskCycleTypeHasBeenSet(false),
    m_timeToLiveHasBeenSet(false)
{
}

string DescribeDsEventRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_datetimeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatetimeFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datetimeFormat.c_str(), allocator).Move(), allocator);
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

    if (m_ownerNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ownerNameList.begin(); itr != m_ownerNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskCycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCycleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskCycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeToLive.begin(); itr != m_timeToLive.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDsEventRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDsEventRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDsEventRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeDsEventRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDsEventRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDsEventRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

string DescribeDsEventRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDsEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDsEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeDsEventRequest::GetEventName() const
{
    return m_eventName;
}

void DescribeDsEventRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DescribeDsEventRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string DescribeDsEventRequest::GetEventType() const
{
    return m_eventType;
}

void DescribeDsEventRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool DescribeDsEventRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeDsEventRequest::GetEventSubType() const
{
    return m_eventSubType;
}

void DescribeDsEventRequest::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool DescribeDsEventRequest::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string DescribeDsEventRequest::GetDatetimeFormat() const
{
    return m_datetimeFormat;
}

void DescribeDsEventRequest::SetDatetimeFormat(const string& _datetimeFormat)
{
    m_datetimeFormat = _datetimeFormat;
    m_datetimeFormatHasBeenSet = true;
}

bool DescribeDsEventRequest::DatetimeFormatHasBeenSet() const
{
    return m_datetimeFormatHasBeenSet;
}

string DescribeDsEventRequest::GetCreationTimeStart() const
{
    return m_creationTimeStart;
}

void DescribeDsEventRequest::SetCreationTimeStart(const string& _creationTimeStart)
{
    m_creationTimeStart = _creationTimeStart;
    m_creationTimeStartHasBeenSet = true;
}

bool DescribeDsEventRequest::CreationTimeStartHasBeenSet() const
{
    return m_creationTimeStartHasBeenSet;
}

string DescribeDsEventRequest::GetCreationTimeEnd() const
{
    return m_creationTimeEnd;
}

void DescribeDsEventRequest::SetCreationTimeEnd(const string& _creationTimeEnd)
{
    m_creationTimeEnd = _creationTimeEnd;
    m_creationTimeEndHasBeenSet = true;
}

bool DescribeDsEventRequest::CreationTimeEndHasBeenSet() const
{
    return m_creationTimeEndHasBeenSet;
}

vector<OrderField> DescribeDsEventRequest::GetOrderFields() const
{
    return m_orderFields;
}

void DescribeDsEventRequest::SetOrderFields(const vector<OrderField>& _orderFields)
{
    m_orderFields = _orderFields;
    m_orderFieldsHasBeenSet = true;
}

bool DescribeDsEventRequest::OrderFieldsHasBeenSet() const
{
    return m_orderFieldsHasBeenSet;
}

vector<string> DescribeDsEventRequest::GetOwnerNameList() const
{
    return m_ownerNameList;
}

void DescribeDsEventRequest::SetOwnerNameList(const vector<string>& _ownerNameList)
{
    m_ownerNameList = _ownerNameList;
    m_ownerNameListHasBeenSet = true;
}

bool DescribeDsEventRequest::OwnerNameListHasBeenSet() const
{
    return m_ownerNameListHasBeenSet;
}

string DescribeDsEventRequest::GetTaskCycleType() const
{
    return m_taskCycleType;
}

void DescribeDsEventRequest::SetTaskCycleType(const string& _taskCycleType)
{
    m_taskCycleType = _taskCycleType;
    m_taskCycleTypeHasBeenSet = true;
}

bool DescribeDsEventRequest::TaskCycleTypeHasBeenSet() const
{
    return m_taskCycleTypeHasBeenSet;
}

vector<int64_t> DescribeDsEventRequest::GetTimeToLive() const
{
    return m_timeToLive;
}

void DescribeDsEventRequest::SetTimeToLive(const vector<int64_t>& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool DescribeDsEventRequest::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}


