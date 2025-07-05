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

#include <tencentcloud/wav/v20210129/model/QueryClueInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

QueryClueInfoListRequest::QueryClueInfoListRequest() :
    m_cursorHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string QueryClueInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryClueInfoListRequest::GetCursor() const
{
    return m_cursor;
}

void QueryClueInfoListRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool QueryClueInfoListRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}

int64_t QueryClueInfoListRequest::GetLimit() const
{
    return m_limit;
}

void QueryClueInfoListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QueryClueInfoListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t QueryClueInfoListRequest::GetBeginTime() const
{
    return m_beginTime;
}

void QueryClueInfoListRequest::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool QueryClueInfoListRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t QueryClueInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void QueryClueInfoListRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool QueryClueInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


