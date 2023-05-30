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

#include <tencentcloud/waf/v20180125/model/SearchAccessLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

SearchAccessLogRequest::SearchAccessLogRequest() :
    m_topicIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_pageHasBeenSet(false)
{
}

string SearchAccessLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_contextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Context";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_context.c_str(), allocator).Move(), allocator);
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


string SearchAccessLogRequest::GetTopicId() const
{
    return m_topicId;
}

void SearchAccessLogRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool SearchAccessLogRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t SearchAccessLogRequest::GetFrom() const
{
    return m_from;
}

void SearchAccessLogRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool SearchAccessLogRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t SearchAccessLogRequest::GetTo() const
{
    return m_to;
}

void SearchAccessLogRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool SearchAccessLogRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string SearchAccessLogRequest::GetQuery() const
{
    return m_query;
}

void SearchAccessLogRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool SearchAccessLogRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

int64_t SearchAccessLogRequest::GetLimit() const
{
    return m_limit;
}

void SearchAccessLogRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchAccessLogRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchAccessLogRequest::GetContext() const
{
    return m_context;
}

void SearchAccessLogRequest::SetContext(const string& _context)
{
    m_context = _context;
    m_contextHasBeenSet = true;
}

bool SearchAccessLogRequest::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

string SearchAccessLogRequest::GetSort() const
{
    return m_sort;
}

void SearchAccessLogRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchAccessLogRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t SearchAccessLogRequest::GetPage() const
{
    return m_page;
}

void SearchAccessLogRequest::SetPage(const int64_t& _page)
{
    m_page = _page;
    m_pageHasBeenSet = true;
}

bool SearchAccessLogRequest::PageHasBeenSet() const
{
    return m_pageHasBeenSet;
}


