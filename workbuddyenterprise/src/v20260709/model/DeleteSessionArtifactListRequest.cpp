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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DeleteSessionArtifactListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DeleteSessionArtifactListRequest::DeleteSessionArtifactListRequest() :
    m_sessionIdHasBeenSet(false),
    m_artifactIdsHasBeenSet(false)
{
}

string DeleteSessionArtifactListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_artifactIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_artifactIds.begin(); itr != m_artifactIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSessionArtifactListRequest::GetSessionId() const
{
    return m_sessionId;
}

void DeleteSessionArtifactListRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DeleteSessionArtifactListRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

vector<string> DeleteSessionArtifactListRequest::GetArtifactIds() const
{
    return m_artifactIds;
}

void DeleteSessionArtifactListRequest::SetArtifactIds(const vector<string>& _artifactIds)
{
    m_artifactIds = _artifactIds;
    m_artifactIdsHasBeenSet = true;
}

bool DeleteSessionArtifactListRequest::ArtifactIdsHasBeenSet() const
{
    return m_artifactIdsHasBeenSet;
}


