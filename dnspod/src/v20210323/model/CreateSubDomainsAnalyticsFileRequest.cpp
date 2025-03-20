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

#include <tencentcloud/dnspod/v20210323/model/CreateSubDomainsAnalyticsFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateSubDomainsAnalyticsFileRequest::CreateSubDomainsAnalyticsFileRequest() :
    m_domainsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_subDomainTypeHasBeenSet(false),
    m_dNSFormatHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

string CreateSubDomainsAnalyticsFileRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_subDomainTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubDomainType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subDomainType, allocator);
    }

    if (m_dNSFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DNSFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dNSFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SubDomainsAnalyticsParamsItem> CreateSubDomainsAnalyticsFileRequest::GetDomains() const
{
    return m_domains;
}

void CreateSubDomainsAnalyticsFileRequest::SetDomains(const vector<SubDomainsAnalyticsParamsItem>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateSubDomainsAnalyticsFileRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string CreateSubDomainsAnalyticsFileRequest::GetStartDate() const
{
    return m_startDate;
}

void CreateSubDomainsAnalyticsFileRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool CreateSubDomainsAnalyticsFileRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

uint64_t CreateSubDomainsAnalyticsFileRequest::GetSubDomainType() const
{
    return m_subDomainType;
}

void CreateSubDomainsAnalyticsFileRequest::SetSubDomainType(const uint64_t& _subDomainType)
{
    m_subDomainType = _subDomainType;
    m_subDomainTypeHasBeenSet = true;
}

bool CreateSubDomainsAnalyticsFileRequest::SubDomainTypeHasBeenSet() const
{
    return m_subDomainTypeHasBeenSet;
}

string CreateSubDomainsAnalyticsFileRequest::GetDNSFormat() const
{
    return m_dNSFormat;
}

void CreateSubDomainsAnalyticsFileRequest::SetDNSFormat(const string& _dNSFormat)
{
    m_dNSFormat = _dNSFormat;
    m_dNSFormatHasBeenSet = true;
}

bool CreateSubDomainsAnalyticsFileRequest::DNSFormatHasBeenSet() const
{
    return m_dNSFormatHasBeenSet;
}

string CreateSubDomainsAnalyticsFileRequest::GetEndDate() const
{
    return m_endDate;
}

void CreateSubDomainsAnalyticsFileRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool CreateSubDomainsAnalyticsFileRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}


