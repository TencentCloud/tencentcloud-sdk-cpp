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

#include <tencentcloud/waf/v20180125/model/SearchAttackLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SearchAttackLogRequest::SearchAttackLogRequest() :
    m_domainHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_countHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

string SearchAttackLogRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryString.c_str(), allocator).Move(), allocator);
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

    if (m_pageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Page";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_page, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchAttackLogRequest::GetDomain() const
{
    return m_domain;
}

void SearchAttackLogRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SearchAttackLogRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SearchAttackLogRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchAttackLogRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchAttackLogRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchAttackLogRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchAttackLogRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchAttackLogRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchAttackLogRequest::GetContext() const
{
    return m_context;
}

void SearchAttackLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool SearchAttackLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string SearchAttackLogRequest::GetQueryString() const
{
    return m_queryString;
}

void SearchAttackLogRequest::SetQueryString(const string& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool SearchAttackLogRequest::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

int64_t SearchAttackLogRequest::GetCount() const
{
    return m_count;
}

void SearchAttackLogRequest::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SearchAttackLogRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string SearchAttackLogRequest::GetSort() const
{
    return m_sort;
}

void SearchAttackLogRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchAttackLogRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t SearchAttackLogRequest::GetPage() const
{
    return m_page;
}

void SearchAttackLogRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool SearchAttackLogRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}


