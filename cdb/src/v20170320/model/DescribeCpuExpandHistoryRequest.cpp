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

#include <tencentcloud/cdb/v20170320/model/DescribeCpuExpandHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeCpuExpandHistoryRequest::DescribeCpuExpandHistoryRequest() :
    m_instanceIdHasBeenSet(false),
    m_expandStrategyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeCpuExpandHistoryRequest::ToJsonString() const
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

    if (m_expandStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expandStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCpuExpandHistoryRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCpuExpandHistoryRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeCpuExpandHistoryRequest::GetExpandStrategy() const
{
    return m_expandStrategy;
}

void DescribeCpuExpandHistoryRequest::SetExpandStrategy(const string& _expandStrategy)
{
    m_expandStrategy = _expandStrategy;
    m_expandStrategyHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::ExpandStrategyHasBeenSet() const
{
    return m_expandStrategyHasBeenSet;
}

string DescribeCpuExpandHistoryRequest::GetStatus() const
{
    return m_status;
}

void DescribeCpuExpandHistoryRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeCpuExpandHistoryRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCpuExpandHistoryRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeCpuExpandHistoryRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCpuExpandHistoryRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeCpuExpandHistoryRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCpuExpandHistoryRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCpuExpandHistoryRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCpuExpandHistoryRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCpuExpandHistoryRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


