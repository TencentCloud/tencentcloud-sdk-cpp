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

#include <tencentcloud/ags/v20250920/model/ModifySessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

ModifySessionRequest::ModifySessionRequest() :
    m_spaceIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

string ModifySessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySessionRequest::GetSpaceId() const
{
    return m_spaceId;
}

void ModifySessionRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool ModifySessionRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string ModifySessionRequest::GetUserId() const
{
    return m_userId;
}

void ModifySessionRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifySessionRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ModifySessionRequest::GetSessionId() const
{
    return m_sessionId;
}

void ModifySessionRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ModifySessionRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string ModifySessionRequest::GetTitle() const
{
    return m_title;
}

void ModifySessionRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ModifySessionRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<MetadataVar> ModifySessionRequest::GetMetadata() const
{
    return m_metadata;
}

void ModifySessionRequest::SetMetadata(const vector<MetadataVar>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool ModifySessionRequest::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}


