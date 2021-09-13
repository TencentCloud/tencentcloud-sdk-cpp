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

#include <tencentcloud/rum/v20210622/model/DescribeLogListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeLogListRequest::DescribeLogListRequest() :
    m_sortHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeLogListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
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


string DescribeLogListRequest::GetSort() const
{
    return m_sort;
}

void DescribeLogListRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeLogListRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeLogListRequest::GetActionType() const
{
    return m_actionType;
}

void DescribeLogListRequest::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DescribeLogListRequest::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

int64_t DescribeLogListRequest::GetID() const
{
    return m_iD;
}

void DescribeLogListRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeLogListRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeLogListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeLogListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeLogListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeLogListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLogListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLogListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeLogListRequest::GetContext() const
{
    return m_context;
}

void DescribeLogListRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool DescribeLogListRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string DescribeLogListRequest::GetQuery() const
{
    return m_query;
}

void DescribeLogListRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool DescribeLogListRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string DescribeLogListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeLogListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeLogListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


