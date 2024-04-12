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

#include <tencentcloud/lke/v20231130/model/ListReleaseQAPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListReleaseQAPreviewRequest::ListReleaseQAPreviewRequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_releaseBizIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_releaseStatusHasBeenSet(false)
{
}

string ListReleaseQAPreviewRequest::ToJsonString() const
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

    if (m_releaseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_releaseStatus.begin(); itr != m_releaseStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListReleaseQAPreviewRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListReleaseQAPreviewRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListReleaseQAPreviewRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListReleaseQAPreviewRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListReleaseQAPreviewRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListReleaseQAPreviewRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListReleaseQAPreviewRequest::GetQuery() const
{
    return m_query;
}

void ListReleaseQAPreviewRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string ListReleaseQAPreviewRequest::GetReleaseBizId() const
{
    return m_releaseBizId;
}

void ListReleaseQAPreviewRequest::SetReleaseBizId(const string& _releaseBizId)
{
    m_releaseBizId = _releaseBizId;
    m_releaseBizIdHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::ReleaseBizIdHasBeenSet() const
{
    return m_releaseBizIdHasBeenSet;
}

string ListReleaseQAPreviewRequest::GetStartTime() const
{
    return m_startTime;
}

void ListReleaseQAPreviewRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListReleaseQAPreviewRequest::GetEndTime() const
{
    return m_endTime;
}

void ListReleaseQAPreviewRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> ListReleaseQAPreviewRequest::GetActions() const
{
    return m_actions;
}

void ListReleaseQAPreviewRequest::SetActions(const vector<uint64_t>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

vector<uint64_t> ListReleaseQAPreviewRequest::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ListReleaseQAPreviewRequest::SetReleaseStatus(const vector<uint64_t>& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ListReleaseQAPreviewRequest::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}


