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

#include <tencentcloud/dnspod/v20210323/model/DescribeDomainAnalyticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DescribeDomainAnalyticsRequest::DescribeDomainAnalyticsRequest() :
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_dnsFormatHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

string DescribeDomainAnalyticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_domainId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDomainAnalyticsRequest::GetDomain() const
{
    return m_domain;
}

void DescribeDomainAnalyticsRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeDomainAnalyticsRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeDomainAnalyticsRequest::GetStartDate() const
{
    return m_startDate;
}

void DescribeDomainAnalyticsRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DescribeDomainAnalyticsRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DescribeDomainAnalyticsRequest::GetEndDate() const
{
    return m_endDate;
}

void DescribeDomainAnalyticsRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DescribeDomainAnalyticsRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string DescribeDomainAnalyticsRequest::GetDnsFormat() const
{
    return m_dnsFormat;
}

void DescribeDomainAnalyticsRequest::SetDnsFormat(const string& _dnsFormat)
{
    m_dnsFormat = _dnsFormat;
    m_dnsFormatHasBeenSet = true;
}

bool DescribeDomainAnalyticsRequest::DnsFormatHasBeenSet() const
{
    return m_dnsFormatHasBeenSet;
}

uint64_t DescribeDomainAnalyticsRequest::GetDomainId() const
{
    return m_domainId;
}

void DescribeDomainAnalyticsRequest::SetDomainId(const uint64_t& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool DescribeDomainAnalyticsRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}


