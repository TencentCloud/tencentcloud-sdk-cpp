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

#include <tencentcloud/rum/v20210622/model/DescribeRumGroupLogV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeRumGroupLogV2Request::DescribeRumGroupLogV2Request() :
    m_orderByHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_lastHasBeenSet(false)
{
}

string DescribeRumGroupLogV2Request::ToJsonString() const
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

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_lastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Last";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_last, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRumGroupLogV2Request::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeRumGroupLogV2Request::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

int64_t DescribeRumGroupLogV2Request::GetStartTime() const
{
    return m_startTime;
}

void DescribeRumGroupLogV2Request::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeRumGroupLogV2Request::GetLimit() const
{
    return m_limit;
}

void DescribeRumGroupLogV2Request::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRumGroupLogV2Request::GetFilter() const
{
    return m_filter;
}

void DescribeRumGroupLogV2Request::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t DescribeRumGroupLogV2Request::GetEndTime() const
{
    return m_endTime;
}

void DescribeRumGroupLogV2Request::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeRumGroupLogV2Request::GetID() const
{
    return m_iD;
}

void DescribeRumGroupLogV2Request::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeRumGroupLogV2Request::GetLabel() const
{
    return m_label;
}

void DescribeRumGroupLogV2Request::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t DescribeRumGroupLogV2Request::GetLast() const
{
    return m_last;
}

void DescribeRumGroupLogV2Request::SetLast(const int64_t& _last)
{
    m_last = _last;
    m_lastHasBeenSet = true;
}

bool DescribeRumGroupLogV2Request::LastHasBeenSet() const
{
    return m_lastHasBeenSet;
}


