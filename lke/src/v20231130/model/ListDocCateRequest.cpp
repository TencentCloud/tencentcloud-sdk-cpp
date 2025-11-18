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

#include <tencentcloud/lke/v20231130/model/ListDocCateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListDocCateRequest::ListDocCateRequest() :
    m_botBizIdHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_parentCateBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false)
{
}

string ListDocCateRequest::ToJsonString() const
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


string ListDocCateRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListDocCateRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListDocCateRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListDocCateRequest::GetQueryType() const
{
    return m_queryType;
}

void ListDocCateRequest::SetQueryType(const uint64_t& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool ListDocCateRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string ListDocCateRequest::GetParentCateBizId() const
{
    return m_parentCateBizId;
}

void ListDocCateRequest::SetParentCateBizId(const string& _parentCateBizId)
{
    m_parentCateBizId = _parentCateBizId;
    m_parentCateBizIdHasBeenSet = true;
}

bool ListDocCateRequest::ParentCateBizIdHasBeenSet() const
{
    return m_parentCateBizIdHasBeenSet;
}

uint64_t ListDocCateRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListDocCateRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListDocCateRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListDocCateRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListDocCateRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListDocCateRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListDocCateRequest::GetQuery() const
{
    return m_query;
}

void ListDocCateRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListDocCateRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}


