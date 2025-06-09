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

#include <tencentcloud/lke/v20231130/model/ListQARequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListQARequest::ListQARequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_acceptStatusHasBeenSet(false),
    m_releaseStatusHasBeenSet(false),
    m_docBizIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_queryAnswerHasBeenSet(false),
    m_cateBizIdHasBeenSet(false),
    m_qaBizIdsHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_showCurrCateHasBeenSet(false)
{
}

string ListQARequest::ToJsonString() const
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

    if (m_acceptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_acceptStatus.begin(); itr != m_acceptStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_releaseStatus.begin(); itr != m_releaseStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_queryAnswerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAnswer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryAnswer.c_str(), allocator).Move(), allocator);
    }

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_qaBizIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QaBizIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qaBizIds.begin(); itr != m_qaBizIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
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


string ListQARequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListQARequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListQARequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

int64_t ListQARequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListQARequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListQARequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListQARequest::GetPageSize() const
{
    return m_pageSize;
}

void ListQARequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListQARequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListQARequest::GetQuery() const
{
    return m_query;
}

void ListQARequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListQARequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

vector<int64_t> ListQARequest::GetAcceptStatus() const
{
    return m_acceptStatus;
}

void ListQARequest::SetAcceptStatus(const vector<int64_t>& _acceptStatus)
{
    m_acceptStatus = _acceptStatus;
    m_acceptStatusHasBeenSet = true;
}

bool ListQARequest::AcceptStatusHasBeenSet() const
{
    return m_acceptStatusHasBeenSet;
}

vector<int64_t> ListQARequest::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ListQARequest::SetReleaseStatus(const vector<int64_t>& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ListQARequest::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}

string ListQARequest::GetDocBizId() const
{
    return m_docBizId;
}

void ListQARequest::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool ListQARequest::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

int64_t ListQARequest::GetSource() const
{
    return m_source;
}

void ListQARequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ListQARequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ListQARequest::GetQueryAnswer() const
{
    return m_queryAnswer;
}

void ListQARequest::SetQueryAnswer(const string& _queryAnswer)
{
    m_queryAnswer = _queryAnswer;
    m_queryAnswerHasBeenSet = true;
}

bool ListQARequest::QueryAnswerHasBeenSet() const
{
    return m_queryAnswerHasBeenSet;
}

string ListQARequest::GetCateBizId() const
{
    return m_cateBizId;
}

void ListQARequest::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool ListQARequest::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

vector<string> ListQARequest::GetQaBizIds() const
{
    return m_qaBizIds;
}

void ListQARequest::SetQaBizIds(const vector<string>& _qaBizIds)
{
    m_qaBizIds = _qaBizIds;
    m_qaBizIdsHasBeenSet = true;
}

bool ListQARequest::QaBizIdsHasBeenSet() const
{
    return m_qaBizIdsHasBeenSet;
}

string ListQARequest::GetQueryType() const
{
    return m_queryType;
}

void ListQARequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool ListQARequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

uint64_t ListQARequest::GetShowCurrCate() const
{
    return m_showCurrCate;
}

void ListQARequest::SetShowCurrCate(const uint64_t& _showCurrCate)
{
    m_showCurrCate = _showCurrCate;
    m_showCurrCateHasBeenSet = true;
}

bool ListQARequest::ShowCurrCateHasBeenSet() const
{
    return m_showCurrCateHasBeenSet;
}


