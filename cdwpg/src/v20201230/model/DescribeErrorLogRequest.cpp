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

#include <tencentcloud/cdwpg/v20201230/model/DescribeErrorLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeErrorLogRequest::DescribeErrorLogRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeErrorLogRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeErrorLogRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeErrorLogRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeErrorLogRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeErrorLogRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeErrorLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeErrorLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeErrorLogRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeErrorLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeErrorLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeErrorLogRequest::GetLimit() const
{
    return m_limit;
}

void DescribeErrorLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeErrorLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeErrorLogRequest::GetOffset() const
{
    return m_offset;
}

void DescribeErrorLogRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeErrorLogRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


