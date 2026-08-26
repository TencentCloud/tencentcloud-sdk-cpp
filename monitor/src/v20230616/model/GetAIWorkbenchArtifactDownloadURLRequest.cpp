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

#include <tencentcloud/monitor/v20230616/model/GetAIWorkbenchArtifactDownloadURLRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

GetAIWorkbenchArtifactDownloadURLRequest::GetAIWorkbenchArtifactDownloadURLRequest() :
    m_sessionIdHasBeenSet(false),
    m_artifactIdHasBeenSet(false)
{
}

string GetAIWorkbenchArtifactDownloadURLRequest::ToJsonString() const
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

    if (m_artifactIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_artifactId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetAIWorkbenchArtifactDownloadURLRequest::GetSessionId() const
{
    return m_sessionId;
}

void GetAIWorkbenchArtifactDownloadURLRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool GetAIWorkbenchArtifactDownloadURLRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string GetAIWorkbenchArtifactDownloadURLRequest::GetArtifactId() const
{
    return m_artifactId;
}

void GetAIWorkbenchArtifactDownloadURLRequest::SetArtifactId(const string& _artifactId)
{
    m_artifactId = _artifactId;
    m_artifactIdHasBeenSet = true;
}

bool GetAIWorkbenchArtifactDownloadURLRequest::ArtifactIdHasBeenSet() const
{
    return m_artifactIdHasBeenSet;
}


