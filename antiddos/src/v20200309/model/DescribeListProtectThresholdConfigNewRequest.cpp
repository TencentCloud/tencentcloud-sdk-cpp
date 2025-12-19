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

#include <tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListProtectThresholdConfigNewRequest::DescribeListProtectThresholdConfigNewRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterDomainHasBeenSet(false),
    m_filterProtocolHasBeenSet(false)
{
}

string DescribeListProtectThresholdConfigNewRequest::ToJsonString() const
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

    if (m_filterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_filterDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_filterProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterProtocol.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeListProtectThresholdConfigNewRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListProtectThresholdConfigNewRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListProtectThresholdConfigNewRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListProtectThresholdConfigNewRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListProtectThresholdConfigNewRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListProtectThresholdConfigNewRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

string DescribeListProtectThresholdConfigNewRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListProtectThresholdConfigNewRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListProtectThresholdConfigNewRequest::GetFilterDomain() const
{
    return m_filterDomain;
}

void DescribeListProtectThresholdConfigNewRequest::SetFilterDomain(const string& _filterDomain)
{
    m_filterDomain = _filterDomain;
    m_filterDomainHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::FilterDomainHasBeenSet() const
{
    return m_filterDomainHasBeenSet;
}

string DescribeListProtectThresholdConfigNewRequest::GetFilterProtocol() const
{
    return m_filterProtocol;
}

void DescribeListProtectThresholdConfigNewRequest::SetFilterProtocol(const string& _filterProtocol)
{
    m_filterProtocol = _filterProtocol;
    m_filterProtocolHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigNewRequest::FilterProtocolHasBeenSet() const
{
    return m_filterProtocolHasBeenSet;
}


