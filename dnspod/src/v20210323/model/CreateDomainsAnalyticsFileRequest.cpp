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

#include <tencentcloud/dnspod/v20210323/model/CreateDomainsAnalyticsFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

CreateDomainsAnalyticsFileRequest::CreateDomainsAnalyticsFileRequest() :
    m_domainsHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_dNSFormatHasBeenSet(false),
    m_endDateHasBeenSet(false)
{
}

string CreateDomainsAnalyticsFileRequest::ToJsonString() const
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

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
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


vector<string> CreateDomainsAnalyticsFileRequest::GetDomains() const
{
    return m_domains;
}

void CreateDomainsAnalyticsFileRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateDomainsAnalyticsFileRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string CreateDomainsAnalyticsFileRequest::GetStartDate() const
{
    return m_startDate;
}

void CreateDomainsAnalyticsFileRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool CreateDomainsAnalyticsFileRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string CreateDomainsAnalyticsFileRequest::GetDNSFormat() const
{
    return m_dNSFormat;
}

void CreateDomainsAnalyticsFileRequest::SetDNSFormat(const string& _dNSFormat)
{
    m_dNSFormat = _dNSFormat;
    m_dNSFormatHasBeenSet = true;
}

bool CreateDomainsAnalyticsFileRequest::DNSFormatHasBeenSet() const
{
    return m_dNSFormatHasBeenSet;
}

string CreateDomainsAnalyticsFileRequest::GetEndDate() const
{
    return m_endDate;
}

void CreateDomainsAnalyticsFileRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool CreateDomainsAnalyticsFileRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}


