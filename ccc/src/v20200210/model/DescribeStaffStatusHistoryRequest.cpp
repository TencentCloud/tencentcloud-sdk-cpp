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

#include <tencentcloud/ccc/v20200210/model/DescribeStaffStatusHistoryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeStaffStatusHistoryRequest::DescribeStaffStatusHistoryRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_staffUserIdHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_cursorHasBeenSet(false),
    m_pageSizeHasBeenSet(false)
{
}

string DescribeStaffStatusHistoryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_staffUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staffUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimestamp, allocator);
    }

    if (m_endTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimestamp, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeStaffStatusHistoryRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeStaffStatusHistoryRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string DescribeStaffStatusHistoryRequest::GetStaffUserId() const
{
    return m_staffUserId;
}

void DescribeStaffStatusHistoryRequest::SetStaffUserId(const string& _staffUserId)
{
    m_staffUserId = _staffUserId;
    m_staffUserIdHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::StaffUserIdHasBeenSet() const
{
    return m_staffUserIdHasBeenSet;
}

int64_t DescribeStaffStatusHistoryRequest::GetStartTimestamp() const
{
    return m_startTimestamp;
}

void DescribeStaffStatusHistoryRequest::SetStartTimestamp(const int64_t& _startTimestamp)
{
    m_startTimestamp = _startTimestamp;
    m_startTimestampHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::StartTimestampHasBeenSet() const
{
    return m_startTimestampHasBeenSet;
}

int64_t DescribeStaffStatusHistoryRequest::GetEndTimestamp() const
{
    return m_endTimestamp;
}

void DescribeStaffStatusHistoryRequest::SetEndTimestamp(const int64_t& _endTimestamp)
{
    m_endTimestamp = _endTimestamp;
    m_endTimestampHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::EndTimestampHasBeenSet() const
{
    return m_endTimestampHasBeenSet;
}

string DescribeStaffStatusHistoryRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeStaffStatusHistoryRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t DescribeStaffStatusHistoryRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeStaffStatusHistoryRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeStaffStatusHistoryRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}


