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

#include <tencentcloud/iss/v20230517/model/ListVLPlanResultsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListVLPlanResultsRequest::ListVLPlanResultsRequest() :
    m_startHasBeenSet(false),
    m_endHasBeenSet(false),
    m_vLPlanIdHasBeenSet(false),
    m_channelIdsHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_analysisModeHasBeenSet(false)
{
}

string ListVLPlanResultsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Start";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_start, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_end, allocator);
    }

    if (m_vLPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vLPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelIds.begin(); itr != m_channelIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_analysisModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_analysisMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListVLPlanResultsRequest::GetStart() const
{
    return m_start;
}

void ListVLPlanResultsRequest::SetStart(const int64_t& _start)
{
    m_start = _start;
    m_startHasBeenSet = true;
}

bool ListVLPlanResultsRequest::StartHasBeenSet() const
{
    return m_startHasBeenSet;
}

int64_t ListVLPlanResultsRequest::GetEnd() const
{
    return m_end;
}

void ListVLPlanResultsRequest::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool ListVLPlanResultsRequest::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

string ListVLPlanResultsRequest::GetVLPlanId() const
{
    return m_vLPlanId;
}

void ListVLPlanResultsRequest::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool ListVLPlanResultsRequest::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

vector<string> ListVLPlanResultsRequest::GetChannelIds() const
{
    return m_channelIds;
}

void ListVLPlanResultsRequest::SetChannelIds(const vector<string>& _channelIds)
{
    m_channelIds = _channelIds;
    m_channelIdsHasBeenSet = true;
}

bool ListVLPlanResultsRequest::ChannelIdsHasBeenSet() const
{
    return m_channelIdsHasBeenSet;
}

int64_t ListVLPlanResultsRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void ListVLPlanResultsRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool ListVLPlanResultsRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t ListVLPlanResultsRequest::GetPageSize() const
{
    return m_pageSize;
}

void ListVLPlanResultsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool ListVLPlanResultsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string ListVLPlanResultsRequest::GetAnalysisMode() const
{
    return m_analysisMode;
}

void ListVLPlanResultsRequest::SetAnalysisMode(const string& _analysisMode)
{
    m_analysisMode = _analysisMode;
    m_analysisModeHasBeenSet = true;
}

bool ListVLPlanResultsRequest::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}


