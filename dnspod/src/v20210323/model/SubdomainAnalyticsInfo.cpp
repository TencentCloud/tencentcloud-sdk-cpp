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

#include <tencentcloud/dnspod/v20210323/model/SubdomainAnalyticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SubdomainAnalyticsInfo::SubdomainAnalyticsInfo() :
    m_dnsFormatHasBeenSet(false),
    m_dnsTotalHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_subdomainHasBeenSet(false)
{
}

CoreInternalOutcome SubdomainAnalyticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsFormat") && !value["DnsFormat"].IsNull())
    {
        if (!value["DnsFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.DnsFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsFormat = string(value["DnsFormat"].GetString());
        m_dnsFormatHasBeenSet = true;
    }

    if (value.HasMember("DnsTotal") && !value["DnsTotal"].IsNull())
    {
        if (!value["DnsTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.DnsTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsTotal = value["DnsTotal"].GetUint64();
        m_dnsTotalHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("Subdomain") && !value["Subdomain"].IsNull())
    {
        if (!value["Subdomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubdomainAnalyticsInfo.Subdomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subdomain = string(value["Subdomain"].GetString());
        m_subdomainHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubdomainAnalyticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dnsFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsTotal, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_subdomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subdomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subdomain.c_str(), allocator).Move(), allocator);
    }

}


string SubdomainAnalyticsInfo::GetDnsFormat() const
{
    return m_dnsFormat;
}

void SubdomainAnalyticsInfo::SetDnsFormat(const string& _dnsFormat)
{
    m_dnsFormat = _dnsFormat;
    m_dnsFormatHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::DnsFormatHasBeenSet() const
{
    return m_dnsFormatHasBeenSet;
}

uint64_t SubdomainAnalyticsInfo::GetDnsTotal() const
{
    return m_dnsTotal;
}

void SubdomainAnalyticsInfo::SetDnsTotal(const uint64_t& _dnsTotal)
{
    m_dnsTotal = _dnsTotal;
    m_dnsTotalHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::DnsTotalHasBeenSet() const
{
    return m_dnsTotalHasBeenSet;
}

string SubdomainAnalyticsInfo::GetDomain() const
{
    return m_domain;
}

void SubdomainAnalyticsInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SubdomainAnalyticsInfo::GetStartDate() const
{
    return m_startDate;
}

void SubdomainAnalyticsInfo::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string SubdomainAnalyticsInfo::GetEndDate() const
{
    return m_endDate;
}

void SubdomainAnalyticsInfo::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string SubdomainAnalyticsInfo::GetSubdomain() const
{
    return m_subdomain;
}

void SubdomainAnalyticsInfo::SetSubdomain(const string& _subdomain)
{
    m_subdomain = _subdomain;
    m_subdomainHasBeenSet = true;
}

bool SubdomainAnalyticsInfo::SubdomainHasBeenSet() const
{
    return m_subdomainHasBeenSet;
}

