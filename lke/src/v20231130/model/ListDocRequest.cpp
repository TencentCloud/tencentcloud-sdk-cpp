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

#include <tencentcloud/lke/v20231130/model/ListDocRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListDocRequest::ListDocRequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_filterFlagHasBeenSet(false),
    m_showCurrCateHasBeenSet(false)
{
}

string ListDocRequest::ToJsonString() const
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

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterFlag.begin(); itr != m_filterFlag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_showCurrCateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowCurrCate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_showCurrCate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListDocRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListDocRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListDocRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListDocRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListDocRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListDocRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListDocRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListDocRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListDocRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListDocRequest::GetQuery() const
{
    return m_query;
}

void ListDocRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListDocRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<int64_t> ListDocRequest::GetStatus() const
{
    return m_status;
}

void ListDocRequest::SetStatus(const vector<int64_t>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListDocRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ListDocRequest::GetQueryType() const
{
    return m_queryType;
}

void ListDocRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool ListDocRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

string ListDocRequest::GetCateBizId() const
{
    return m_cateBizId;
}

void ListDocRequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool ListDocRequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

vector<string> ListDocRequest::GetFileTypes() const
{
    return m_fileTypes;
}

void ListDocRequest::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool ListDocRequest::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

vector<DocFilterFlag> ListDocRequest::GetFilterFlag() const
{
    return m_filterFlag;
}

void ListDocRequest::SetFilterFlag(const vector<DocFilterFlag>& _filterFlag)
{
    m_filterFlag = _filterFlag;
    m_filterFlagHasBeenSet = true;
}

bool ListDocRequest::FilterFlagHasBeenSet() const
{
    return m_filterFlagHasBeenSet;
}

uint64_t ListDocRequest::GetShowCurrCate() const
{
    return m_showCurrCate;
}

void ListDocRequest::SetShowCurrCate(const uint64_t& _showCurrCate)
{
    m_showCurrCate = _showCurrCate;
    m_showCurrCateHasBeenSet = true;
}

bool ListDocRequest::ShowCurrCateHasBeenSet() const
{
    return m_showCurrCateHasBeenSet;
}


