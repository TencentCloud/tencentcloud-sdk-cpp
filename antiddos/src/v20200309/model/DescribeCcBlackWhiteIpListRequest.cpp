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

#include <tencentcloud/antiddos/v20200309/model/DescribeCcBlackWhiteIpListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeCcBlackWhiteIpListRequest::DescribeCcBlackWhiteIpListRequest() :
    m_businessHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_filterIpHasBeenSet(false),
    m_filterTypeHasBeenSet(false)
{
}

string DescribeCcBlackWhiteIpListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_filterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCcBlackWhiteIpListRequest::GetBusiness() const
{
    return m_business;
}

void DescribeCcBlackWhiteIpListRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeCcBlackWhiteIpListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeCcBlackWhiteIpListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCcBlackWhiteIpListRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeCcBlackWhiteIpListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCcBlackWhiteIpListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetIp() const
{
    return m_ip;
}

void DescribeCcBlackWhiteIpListRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeCcBlackWhiteIpListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeCcBlackWhiteIpListRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetFilterIp() const
{
    return m_filterIp;
}

void DescribeCcBlackWhiteIpListRequest::SetFilterIp(const string& _filterIp)
{
    m_filterIp = _filterIp;
    m_filterIpHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::FilterIpHasBeenSet() const
{
    return m_filterIpHasBeenSet;
}

string DescribeCcBlackWhiteIpListRequest::GetFilterType() const
{
    return m_filterType;
}

void DescribeCcBlackWhiteIpListRequest::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool DescribeCcBlackWhiteIpListRequest::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}


