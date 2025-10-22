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

#include <tencentcloud/dnspod/v20210323/model/ResolveCountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

ResolveCountInfo::ResolveCountInfo() :
    m_dnsTotalHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_dnsFormatHasBeenSet(false)
{
}

CoreInternalOutcome ResolveCountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsTotal") && !value["DnsTotal"].IsNull())
    {
        if (!value["DnsTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.DnsTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsTotal = value["DnsTotal"].GetUint64();
        m_dnsTotalHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }

    if (value.HasMember("SubDomain") && !value["SubDomain"].IsNull())
    {
        if (!value["SubDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.SubDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subDomain = string(value["SubDomain"].GetString());
        m_subDomainHasBeenSet = true;
    }

    if (value.HasMember("DnsFormat") && !value["DnsFormat"].IsNull())
    {
        if (!value["DnsFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResolveCountInfo.DnsFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsFormat = string(value["DnsFormat"].GetString());
        m_dnsFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResolveCountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_subDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dnsFormat.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ResolveCountInfo::GetDnsTotal() const
{
    return m_dnsTotal;
}

void ResolveCountInfo::SetDnsTotal(const uint64_t& _dnsTotal)
{
    m_dnsTotal = _dnsTotal;
    m_dnsTotalHasBeenSet = true;
}

bool ResolveCountInfo::DnsTotalHasBeenSet() const
{
    return m_dnsTotalHasBeenSet;
}

string ResolveCountInfo::GetDomain() const
{
    return m_domain;
}

void ResolveCountInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ResolveCountInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ResolveCountInfo::GetStartDate() const
{
    return m_startDate;
}

void ResolveCountInfo::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool ResolveCountInfo::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string ResolveCountInfo::GetEndDate() const
{
    return m_endDate;
}

void ResolveCountInfo::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool ResolveCountInfo::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string ResolveCountInfo::GetSubDomain() const
{
    return m_subDomain;
}

void ResolveCountInfo::SetSubDomain(const string& _subDomain)
{
    m_subDomain = _subDomain;
    m_subDomainHasBeenSet = true;
}

bool ResolveCountInfo::SubDomainHasBeenSet() const
{
    return m_subDomainHasBeenSet;
}

string ResolveCountInfo::GetDnsFormat() const
{
    return m_dnsFormat;
}

void ResolveCountInfo::SetDnsFormat(const string& _dnsFormat)
{
    m_dnsFormat = _dnsFormat;
    m_dnsFormatHasBeenSet = true;
}

bool ResolveCountInfo::DnsFormatHasBeenSet() const
{
    return m_dnsFormatHasBeenSet;
}

