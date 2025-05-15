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

#include <tencentcloud/lke/v20231130/model/ListAttributeLabelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListAttributeLabelRequest::ListAttributeLabelRequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_loginUinHasBeenSet(false),
    m_loginSubAccountUinHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_labelSizeHasBeenSet(false)
{
}

string ListAttributeLabelRequest::ToJsonString() const
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

    if (m_loginUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginUin.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loginSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_labelSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListAttributeLabelRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListAttributeLabelRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListAttributeLabelRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListAttributeLabelRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListAttributeLabelRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListAttributeLabelRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListAttributeLabelRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListAttributeLabelRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListAttributeLabelRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListAttributeLabelRequest::GetLoginUin() const
{
    return m_loginUin;
}

void ListAttributeLabelRequest::SetLoginUin(const string& _loginUin)
{
    m_loginUin = _loginUin;
    m_loginUinHasBeenSet = true;
}

bool ListAttributeLabelRequest::LoginUinHasBeenSet() const
{
    return m_loginUinHasBeenSet;
}

string ListAttributeLabelRequest::GetLoginSubAccountUin() const
{
    return m_loginSubAccountUin;
}

void ListAttributeLabelRequest::SetLoginSubAccountUin(const string& _loginSubAccountUin)
{
    m_loginSubAccountUin = _loginSubAccountUin;
    m_loginSubAccountUinHasBeenSet = true;
}

bool ListAttributeLabelRequest::LoginSubAccountUinHasBeenSet() const
{
    return m_loginSubAccountUinHasBeenSet;
}

string ListAttributeLabelRequest::GetQuery() const
{
    return m_query;
}

void ListAttributeLabelRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListAttributeLabelRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t ListAttributeLabelRequest::GetLabelSize() const
{
    return m_labelSize;
}

void ListAttributeLabelRequest::SetLabelSize(const uint64_t& _labelSize)
{
    m_labelSize = _labelSize;
    m_labelSizeHasBeenSet = true;
}

bool ListAttributeLabelRequest::LabelSizeHasBeenSet() const
{
    return m_labelSizeHasBeenSet;
}


