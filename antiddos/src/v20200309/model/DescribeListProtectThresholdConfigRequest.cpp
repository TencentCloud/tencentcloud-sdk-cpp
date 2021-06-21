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

#include <tencentcloud/antiddos/v20200309/model/DescribeListProtectThresholdConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeListProtectThresholdConfigRequest::DescribeListProtectThresholdConfigRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterInstanceIdHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterDomainHasBeenSet(false),
    m_filterProtocolHasBeenSet(false)
{
}

string DescribeListProtectThresholdConfigRequest::ToJsonString() const
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


uint64_t DescribeListProtectThresholdConfigRequest::GetOffset() const
{
    return m_offset;
}

void DescribeListProtectThresholdConfigRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeListProtectThresholdConfigRequest::GetLimit() const
{
    return m_limit;
}

void DescribeListProtectThresholdConfigRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeListProtectThresholdConfigRequest::GetFilterInstanceId() const
{
    return m_filterInstanceId;
}

void DescribeListProtectThresholdConfigRequest::SetFilterInstanceId(const string& _filterInstanceId)
{
    m_filterInstanceId = _filterInstanceId;
    m_filterInstanceIdHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::FilterInstanceIdHasBeenSet() const
{
    return m_filterInstanceIdHasBeenSet;
}

string DescribeListProtectThresholdConfigRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeListProtectThresholdConfigRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeListProtectThresholdConfigRequest::GetFilterDomain() const
{
    return m_filterDomain;
}

void DescribeListProtectThresholdConfigRequest::SetFilterDomain(const string& _filterDomain)
{
    m_filterDomain = _filterDomain;
    m_filterDomainHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::FilterDomainHasBeenSet() const
{
    return m_filterDomainHasBeenSet;
}

string DescribeListProtectThresholdConfigRequest::GetFilterProtocol() const
{
    return m_filterProtocol;
}

void DescribeListProtectThresholdConfigRequest::SetFilterProtocol(const string& _filterProtocol)
{
    m_filterProtocol = _filterProtocol;
    m_filterProtocolHasBeenSet = true;
}

bool DescribeListProtectThresholdConfigRequest::FilterProtocolHasBeenSet() const
{
    return m_filterProtocolHasBeenSet;
}


