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

#include <tencentcloud/redis/v20180412/model/DescribeInstanceEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

DescribeInstanceEventsRequest::DescribeInstanceEventsRequest() :
    m_executionStartDateHasBeenSet(false),
    m_executionEndDateHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventTypesHasBeenSet(false),
    m_gradesHasBeenSet(false)
{
}

string DescribeInstanceEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_executionStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionStartDate.c_str(), allocator).Move(), allocator);
    }

    if (m_executionEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionEndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_executionEndDate.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventTypes.begin(); itr != m_eventTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gradesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grades";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_grades.begin(); itr != m_grades.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInstanceEventsRequest::GetExecutionStartDate() const
{
    return m_executionStartDate;
}

void DescribeInstanceEventsRequest::SetExecutionStartDate(const string& _executionStartDate)
{
    m_executionStartDate = _executionStartDate;
    m_executionStartDateHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::ExecutionStartDateHasBeenSet() const
{
    return m_executionStartDateHasBeenSet;
}

string DescribeInstanceEventsRequest::GetExecutionEndDate() const
{
    return m_executionEndDate;
}

void DescribeInstanceEventsRequest::SetExecutionEndDate(const string& _executionEndDate)
{
    m_executionEndDate = _executionEndDate;
    m_executionEndDateHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::ExecutionEndDateHasBeenSet() const
{
    return m_executionEndDateHasBeenSet;
}

string DescribeInstanceEventsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInstanceEventsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeInstanceEventsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeInstanceEventsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeInstanceEventsRequest::GetPageNo() const
{
    return m_pageNo;
}

void DescribeInstanceEventsRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

vector<string> DescribeInstanceEventsRequest::GetStatus() const
{
    return m_status;
}

void DescribeInstanceEventsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeInstanceEventsRequest::GetEventTypes() const
{
    return m_eventTypes;
}

void DescribeInstanceEventsRequest::SetEventTypes(const vector<string>& _eventTypes)
{
    m_eventTypes = _eventTypes;
    m_eventTypesHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::EventTypesHasBeenSet() const
{
    return m_eventTypesHasBeenSet;
}

vector<string> DescribeInstanceEventsRequest::GetGrades() const
{
    return m_grades;
}

void DescribeInstanceEventsRequest::SetGrades(const vector<string>& _grades)
{
    m_grades = _grades;
    m_gradesHasBeenSet = true;
}

bool DescribeInstanceEventsRequest::GradesHasBeenSet() const
{
    return m_gradesHasBeenSet;
}


