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

#include <tencentcloud/rum/v20210622/model/DescribeRumStatsLogListV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumStatsLogListV2Request::DescribeRumStatsLogListV2Request() :
    m_startTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

string DescribeRumStatsLogListV2Request::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeRumStatsLogListV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeRumStatsLogListV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRumStatsLogListV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeRumStatsLogListV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeRumStatsLogListV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRumStatsLogListV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRumStatsLogListV2Request::GetFilter() const
{
    return m_filter;
}

void DescribeRumStatsLogListV2Request::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeRumStatsLogListV2Request::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t DescribeRumStatsLogListV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeRumStatsLogListV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRumStatsLogListV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRumStatsLogListV2Request::GetID() const
{
    return m_iD;
}

void DescribeRumStatsLogListV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumStatsLogListV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


