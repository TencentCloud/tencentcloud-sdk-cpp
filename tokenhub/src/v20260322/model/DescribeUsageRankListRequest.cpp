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

#include <tencentcloud/tokenhub/v20260322/model/DescribeUsageRankListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeUsageRankListRequest::DescribeUsageRankListRequest() :
    m_dimensionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_showAllHasBeenSet(false)
{
}

string DescribeUsageRankListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
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

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_showAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUsageRankListRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeUsageRankListRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeUsageRankListRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeUsageRankListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeUsageRankListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeUsageRankListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeUsageRankListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeUsageRankListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeUsageRankListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeUsageRankListRequest::GetMetricType() const
{
    return m_metricType;
}

void DescribeUsageRankListRequest::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool DescribeUsageRankListRequest::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string DescribeUsageRankListRequest::GetTarget() const
{
    return m_target;
}

void DescribeUsageRankListRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool DescribeUsageRankListRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t DescribeUsageRankListRequest::GetPeriod() const
{
    return m_period;
}

void DescribeUsageRankListRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeUsageRankListRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DescribeUsageRankListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUsageRankListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUsageRankListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

bool DescribeUsageRankListRequest::GetShowAll() const
{
    return m_showAll;
}

void DescribeUsageRankListRequest::SetShowAll(const bool& _showAll)
{
    m_showAll = _showAll;
    m_showAllHasBeenSet = true;
}

bool DescribeUsageRankListRequest::ShowAllHasBeenSet() const
{
    return m_showAllHasBeenSet;
}


