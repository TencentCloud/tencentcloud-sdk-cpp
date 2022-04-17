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

#include <tencentcloud/waf/v20180125/model/DescribeDomainWhiteRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeDomainWhiteRulesRequest::DescribeDomainWhiteRulesRequest() :
    m_domainHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_pageHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string DescribeDomainWhiteRulesRequest::ToJsonString() const
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_count, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDomainWhiteRulesRequest::GetDomain() const
{
    return m_domain;
}

void DescribeDomainWhiteRulesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeDomainWhiteRulesRequest::GetUrl() const
{
    return m_url;
}

void DescribeDomainWhiteRulesRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t DescribeDomainWhiteRulesRequest::GetPage() const
{
    return m_page;
}

void DescribeDomainWhiteRulesRequest::SetPage(const uint64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}

uint64_t DescribeDomainWhiteRulesRequest::GetCount() const
{
    return m_count;
}

void DescribeDomainWhiteRulesRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DescribeDomainWhiteRulesRequest::GetSort() const
{
    return m_sort;
}

void DescribeDomainWhiteRulesRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeDomainWhiteRulesRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeDomainWhiteRulesRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeDomainWhiteRulesRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


