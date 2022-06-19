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

#include <tencentcloud/dnspod/v20210323/model/DomainAnalyticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

DomainAnalyticsInfo::DomainAnalyticsInfo() :
    m_dnsFormatHasBeenSet(false),
    m_dnsTotalHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

CoreInternalOutcome DomainAnalyticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DnsFormat") && !value["DnsFormat"].IsNull())
    {
        if (!value["DnsFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsInfo.DnsFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dnsFormat = string(value["DnsFormat"].GetString());
        m_dnsFormatHasBeenSet = true;
    }

    if (value.HasMember("DnsTotal") && !value["DnsTotal"].IsNull())
    {
        if (!value["DnsTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsInfo.DnsTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsTotal = value["DnsTotal"].GetUint64();
        m_dnsTotalHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("StartDate") && !value["StartDate"].IsNull())
    {
        if (!value["StartDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsInfo.StartDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startDate = string(value["StartDate"].GetString());
        m_startDateHasBeenSet = true;
    }

    if (value.HasMember("EndDate") && !value["EndDate"].IsNull())
    {
        if (!value["EndDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainAnalyticsInfo.EndDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endDate = string(value["EndDate"].GetString());
        m_endDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainAnalyticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DomainAnalyticsInfo::GetDnsFormat() const
{
    return m_dnsFormat;
}

void DomainAnalyticsInfo::SetDnsFormat(const string& _dnsFormat)
{
    m_dnsFormat = _dnsFormat;
    m_dnsFormatHasBeenSet = true;
}

bool DomainAnalyticsInfo::DnsFormatHasBeenSet() const
{
    return m_dnsFormatHasBeenSet;
}

uint64_t DomainAnalyticsInfo::GetDnsTotal() const
{
    return m_dnsTotal;
}

void DomainAnalyticsInfo::SetDnsTotal(const uint64_t& _dnsTotal)
{
    m_dnsTotal = _dnsTotal;
    m_dnsTotalHasBeenSet = true;
}

bool DomainAnalyticsInfo::DnsTotalHasBeenSet() const
{
    return m_dnsTotalHasBeenSet;
}

string DomainAnalyticsInfo::GetDomain() const
{
    return m_domain;
}

void DomainAnalyticsInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DomainAnalyticsInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DomainAnalyticsInfo::GetStartDate() const
{
    return m_startDate;
}

void DomainAnalyticsInfo::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool DomainAnalyticsInfo::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string DomainAnalyticsInfo::GetEndDate() const
{
    return m_endDate;
}

void DomainAnalyticsInfo::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool DomainAnalyticsInfo::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

