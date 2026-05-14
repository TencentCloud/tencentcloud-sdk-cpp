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

#include <tencentcloud/rum/v20210622/model/DescribeRumLogTotalV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumLogTotalV2Request::DescribeRumLogTotalV2Request() :
    m_orderByHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_lastRowIdHasBeenSet(false)
{
}

string DescribeRumLogTotalV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lastTime, allocator);
    }

    if (m_lastRowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastRowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lastRowId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRumLogTotalV2Request::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeRumLogTotalV2Request::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeRumLogTotalV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeRumLogTotalV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRumLogTotalV2Request::GetFilter() const
{
    return m_filter;
}

void DescribeRumLogTotalV2Request::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeRumLogTotalV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetID() const
{
    return m_iD;
}

void DescribeRumLogTotalV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetLastTime() const
{
    return m_lastTime;
}

void DescribeRumLogTotalV2Request::SetLastTime(const int64_t& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

int64_t DescribeRumLogTotalV2Request::GetLastRowId() const
{
    return m_lastRowId;
}

void DescribeRumLogTotalV2Request::SetLastRowId(const int64_t& _lastRowId)
{
    m_lastRowId = _lastRowId;
    m_lastRowIdHasBeenSet = true;
}

bool DescribeRumLogTotalV2Request::LastRowIdHasBeenSet() const
{
    return m_lastRowIdHasBeenSet;
}


