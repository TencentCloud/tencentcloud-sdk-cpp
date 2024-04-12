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

#include <tencentcloud/lke/v20231130/model/ListRejectedQuestionPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListRejectedQuestionPreviewRequest::ListRejectedQuestionPreviewRequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_releaseBizIdHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ListRejectedQuestionPreviewRequest::ToJsonString() const
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

    if (m_releaseBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_releaseBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_actions.begin(); itr != m_actions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListRejectedQuestionPreviewRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListRejectedQuestionPreviewRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListRejectedQuestionPreviewRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListRejectedQuestionPreviewRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListRejectedQuestionPreviewRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListRejectedQuestionPreviewRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListRejectedQuestionPreviewRequest::GetQuery() const
{
    return m_query;
}

void ListRejectedQuestionPreviewRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string ListRejectedQuestionPreviewRequest::GetReleaseBizId() const
{
    return m_releaseBizId;
}

void ListRejectedQuestionPreviewRequest::SetReleaseBizId(const string& _releaseBizId)
{
    m_releaseBizId = _releaseBizId;
    m_releaseBizIdHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::ReleaseBizIdHasBeenSet() const
{
    return m_releaseBizIdHasBeenSet;
}

vector<uint64_t> ListRejectedQuestionPreviewRequest::GetActions() const
{
    return m_actions;
}

void ListRejectedQuestionPreviewRequest::SetActions(const vector<uint64_t>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string ListRejectedQuestionPreviewRequest::GetStartTime() const
{
    return m_startTime;
}

void ListRejectedQuestionPreviewRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListRejectedQuestionPreviewRequest::GetEndTime() const
{
    return m_endTime;
}

void ListRejectedQuestionPreviewRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListRejectedQuestionPreviewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


