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

#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListSchedulingDomainRequest::DescribeListSchedulingDomainRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterDomainHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string DescribeListSchedulingDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_filterDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeListSchedulingDomainRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListSchedulingDomainRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListSchedulingDomainRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListSchedulingDomainRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListSchedulingDomainRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListSchedulingDomainRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListSchedulingDomainRequest::GetFilterDomain() const
{
    return m_filterDomain;
}

void DescribeListSchedulingDomainRequest::SetFilterDomain(const string& _filterDomain)
{
    m_filterDomain = _filterDomain;
    m_filterDomainHasBeenSet = true;
}

bool DescribeListSchedulingDomainRequest::FilterDomainHasBeenSet() const
{
    return m_filterDomainHasBeenSet;
}

string DescribeListSchedulingDomainRequest::GetStatus() const
{
    return m_status;
}

void DescribeListSchedulingDomainRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeListSchedulingDomainRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


