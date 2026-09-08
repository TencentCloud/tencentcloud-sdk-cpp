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

#include <tencentcloud/tcb/v20180608/model/DescribeHTTPServiceCachePurgeTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeHTTPServiceCachePurgeTaskRequest::DescribeHTTPServiceCachePurgeTaskRequest() :
    m_envIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_cacheTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_purgeTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeHTTPServiceCachePurgeTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cacheType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_purgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurgeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_purgeType.c_str(), allocator).Move(), allocator);
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


string DescribeHTTPServiceCachePurgeTaskRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetDomain() const
{
    return m_domain;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetCacheType() const
{
    return m_cacheType;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetCacheType(const string& _cacheType)
{
    m_cacheType = _cacheType;
    m_cacheTypeHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::CacheTypeHasBeenSet() const
{
    return m_cacheTypeHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetPurgeType() const
{
    return m_purgeType;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetPurgeType(const string& _purgeType)
{
    m_purgeType = _purgeType;
    m_purgeTypeHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::PurgeTypeHasBeenSet() const
{
    return m_purgeTypeHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeHTTPServiceCachePurgeTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeHTTPServiceCachePurgeTaskRequest::GetOffset() const
{
    return m_offset;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeHTTPServiceCachePurgeTaskRequest::GetLimit() const
{
    return m_limit;
}

void DescribeHTTPServiceCachePurgeTaskRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeHTTPServiceCachePurgeTaskRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


