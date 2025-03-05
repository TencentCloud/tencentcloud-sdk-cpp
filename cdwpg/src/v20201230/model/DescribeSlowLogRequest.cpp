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

#include <tencentcloud/cdwpg/v20201230/model/DescribeSlowLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeSlowLogRequest::DescribeSlowLogRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_orderByTypeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

string DescribeSlowLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderByType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderByType.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSlowLogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeSlowLogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeSlowLogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSlowLogRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeSlowLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeSlowLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeSlowLogRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSlowLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSlowLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeSlowLogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSlowLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSlowLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeSlowLogRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSlowLogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSlowLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeSlowLogRequest::GetDatabase() const
{
    return m_database;
}

void DescribeSlowLogRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool DescribeSlowLogRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string DescribeSlowLogRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeSlowLogRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeSlowLogRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

string DescribeSlowLogRequest::GetOrderByType() const
{
    return m_orderByType;
}

void DescribeSlowLogRequest::SetOrderByType(const string& _orderByType)
{
    m_orderByType = _orderByType;
    m_orderByTypeHasBeenSet = true;
}

bool DescribeSlowLogRequest::OrderByTypeHasBeenSet() const
{
    return m_orderByTypeHasBeenSet;
}

double DescribeSlowLogRequest::GetDuration() const
{
    return m_duration;
}

void DescribeSlowLogRequest::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool DescribeSlowLogRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}


