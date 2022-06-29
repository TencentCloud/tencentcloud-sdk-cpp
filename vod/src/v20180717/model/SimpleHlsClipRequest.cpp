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

#include <tencentcloud/vod/v20180717/model/SimpleHlsClipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SimpleHlsClipRequest::SimpleHlsClipRequest() :
    m_urlHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_isPersistenceHasBeenSet(false)
{
}

string SimpleHlsClipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_isPersistenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPersistence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPersistence, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SimpleHlsClipRequest::GetUrl() const
{
    return m_url;
}

void SimpleHlsClipRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SimpleHlsClipRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t SimpleHlsClipRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SimpleHlsClipRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SimpleHlsClipRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

double SimpleHlsClipRequest::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void SimpleHlsClipRequest::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool SimpleHlsClipRequest::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double SimpleHlsClipRequest::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void SimpleHlsClipRequest::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool SimpleHlsClipRequest::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

int64_t SimpleHlsClipRequest::GetIsPersistence() const
{
    return m_isPersistence;
}

void SimpleHlsClipRequest::SetIsPersistence(const int64_t& _isPersistence)
{
    m_isPersistence = _isPersistence;
    m_isPersistenceHasBeenSet = true;
}

bool SimpleHlsClipRequest::IsPersistenceHasBeenSet() const
{
    return m_isPersistenceHasBeenSet;
}


