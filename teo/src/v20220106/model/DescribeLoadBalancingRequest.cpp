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

#include <tencentcloud/teo/v20220106/model/DescribeLoadBalancingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DescribeLoadBalancingRequest::DescribeLoadBalancingRequest() :
    m_zoneIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_fuzzyHasBeenSet(false)
{
}

string DescribeLoadBalancingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
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

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_fuzzyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fuzzy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fuzzy, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLoadBalancingRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeLoadBalancingRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeLoadBalancingRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t DescribeLoadBalancingRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLoadBalancingRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLoadBalancingRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeLoadBalancingRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLoadBalancingRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLoadBalancingRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeLoadBalancingRequest::GetHost() const
{
    return m_host;
}

void DescribeLoadBalancingRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeLoadBalancingRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

bool DescribeLoadBalancingRequest::GetFuzzy() const
{
    return m_fuzzy;
}

void DescribeLoadBalancingRequest::SetFuzzy(const bool& _fuzzy)
{
    m_fuzzy = _fuzzy;
    m_fuzzyHasBeenSet = true;
}

bool DescribeLoadBalancingRequest::FuzzyHasBeenSet() const
{
    return m_fuzzyHasBeenSet;
}


