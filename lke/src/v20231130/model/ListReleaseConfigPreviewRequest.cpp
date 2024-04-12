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

#include <tencentcloud/lke/v20231130/model/ListReleaseConfigPreviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ListReleaseConfigPreviewRequest::ListReleaseConfigPreviewRequest() :
    m_botBizIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_releaseBizIdHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_releaseStatusHasBeenSet(false)
{
}

string ListReleaseConfigPreviewRequest::ToJsonString() const
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


string ListReleaseConfigPreviewRequest::GetBotBizId() const
{
    return m_botBizId;
}

void ListReleaseConfigPreviewRequest::SetBotBizId(const string& _botBizId)
{
    m_botBizId = _botBizId;
    m_botBizIdHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::BotBizIdHasBeenSet() const
{
    return m_botBizIdHasBeenSet;
}

uint64_t ListReleaseConfigPreviewRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListReleaseConfigPreviewRequest::SetPageNumber(const uint64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

uint64_t ListReleaseConfigPreviewRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListReleaseConfigPreviewRequest::SetPageSize(const uint64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListReleaseConfigPreviewRequest::GetQuery() const
{
    return m_query;
}

void ListReleaseConfigPreviewRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string ListReleaseConfigPreviewRequest::GetReleaseBizId() const
{
    return m_releaseBizId;
}

void ListReleaseConfigPreviewRequest::SetReleaseBizId(const string& _releaseBizId)
{
    m_releaseBizId = _releaseBizId;
    m_releaseBizIdHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::ReleaseBizIdHasBeenSet() const
{
    return m_releaseBizIdHasBeenSet;
}

vector<uint64_t> ListReleaseConfigPreviewRequest::GetActions() const
{
    return m_actions;
}

void ListReleaseConfigPreviewRequest::SetActions(const vector<uint64_t>& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string ListReleaseConfigPreviewRequest::GetStartTime() const
{
    return m_startTime;
}

void ListReleaseConfigPreviewRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ListReleaseConfigPreviewRequest::GetEndTime() const
{
    return m_endTime;
}

void ListReleaseConfigPreviewRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> ListReleaseConfigPreviewRequest::GetReleaseStatus() const
{
    return m_releaseStatus;
}

void ListReleaseConfigPreviewRequest::SetReleaseStatus(const vector<uint64_t>& _releaseStatus)
{
    m_releaseStatus = _releaseStatus;
    m_releaseStatusHasBeenSet = true;
}

bool ListReleaseConfigPreviewRequest::ReleaseStatusHasBeenSet() const
{
    return m_releaseStatusHasBeenSet;
}


