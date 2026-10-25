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

#include <tencentcloud/rum/v20210622/model/DescribeMiniProgramReplayPacksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeMiniProgramReplayPacksRequest::DescribeMiniProgramReplayPacksRequest() :
    m_appIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cursorHasBeenSet(false)
{
}

string DescribeMiniProgramReplayPacksRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMiniProgramReplayPacksRequest::GetAppId() const
{
    return m_appId;
}

void DescribeMiniProgramReplayPacksRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeMiniProgramReplayPacksRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeMiniProgramReplayPacksRequest::GetStatus() const
{
    return m_status;
}

void DescribeMiniProgramReplayPacksRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMiniProgramReplayPacksRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeMiniProgramReplayPacksRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMiniProgramReplayPacksRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMiniProgramReplayPacksRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeMiniProgramReplayPacksRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeMiniProgramReplayPacksRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeMiniProgramReplayPacksRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}


