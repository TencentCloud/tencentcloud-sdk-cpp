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

#include <tencentcloud/lke/v20231130/model/ListQACateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListQACateRequest::ListQACateRequest() :
    m_botBizIdHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_parentCateBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

string ListQACateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_botBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryType, allocator);
    }

    if (m_parentCateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentCateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentCateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListQACateRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListQACateRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListQACateRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListQACateRequest::GetQueryType() const
{
    return m_queryType;
}

void ListQACateRequest::SetQueryType(const uint64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool ListQACateRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string ListQACateRequest::GetParentCateBizId() const
{
    return m_parentCateBizId;
}

void ListQACateRequest::SetParentCateBizId(const string& _parentCateBizId)
{
    m_parentCateBizId = _parentCateBizId;
    m_parentCateBizIdHasBeenSet = true;
}

bool ListQACateRequest::ParentCateBizIdHasBeenSet() const
{
    return m_parentCateBizIdHasBeenSet;
}

uint64_t ListQACateRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListQACateRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListQACateRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListQACateRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListQACateRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListQACateRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListQACateRequest::GetQuery() const
{
    return m_query;
}

void ListQACateRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListQACateRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


