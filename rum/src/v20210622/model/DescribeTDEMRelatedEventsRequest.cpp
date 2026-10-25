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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMRelatedEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMRelatedEventsRequest::DescribeTDEMRelatedEventsRequest() :
    m_appIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_pageUrlHasBeenSet(false),
    m_anchorTimestampHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_viewIdHasBeenSet(false)
{
}

string DescribeTDEMRelatedEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_pageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anchorTimestamp, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_viewIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_viewId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTDEMRelatedEventsRequest::GetAppId() const
{
    return m_appId;
}

void DescribeTDEMRelatedEventsRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTDEMRelatedEventsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTDEMRelatedEventsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetMode() const
{
    return m_mode;
}

void DescribeTDEMRelatedEventsRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetSessionId() const
{
    return m_sessionId;
}

void DescribeTDEMRelatedEventsRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetPageUrl() const
{
    return m_pageUrl;
}

void DescribeTDEMRelatedEventsRequest::SetPageUrl(const string& _pageUrl)
{
    m_pageUrl = _pageUrl;
    m_pageUrlHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::PageUrlHasBeenSet() const
{
    return m_pageUrlHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsRequest::GetAnchorTimestamp() const
{
    return m_anchorTimestamp;
}

void DescribeTDEMRelatedEventsRequest::SetAnchorTimestamp(const int64_t& _anchorTimestamp)
{
    m_anchorTimestamp = _anchorTimestamp;
    m_anchorTimestampHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::AnchorTimestampHasBeenSet() const
{
    return m_anchorTimestampHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTDEMRelatedEventsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeTDEMRelatedEventsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTDEMRelatedEventsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetCategory() const
{
    return m_category;
}

void DescribeTDEMRelatedEventsRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeTDEMRelatedEventsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeTDEMRelatedEventsRequest::GetViewId() const
{
    return m_viewId;
}

void DescribeTDEMRelatedEventsRequest::SetViewId(const string& _viewId)
{
    m_viewId = _viewId;
    m_viewIdHasBeenSet = true;
}

bool DescribeTDEMRelatedEventsRequest::ViewIdHasBeenSet() const
{
    return m_viewIdHasBeenSet;
}


