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

#include <tencentcloud/cloudmate/v20251030/model/CloudMateAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cloudmate::V20251030::Model;
using namespace std;

CloudMateAgentRequest::CloudMateAgentRequest() :
    m_workspaceIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_scenarioIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_streamingHasBeenSet(false)
{
}

string CloudMateAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Streaming";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_streaming, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloudMateAgentRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CloudMateAgentRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CloudMateAgentRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CloudMateAgentRequest::GetMessage() const
{
    return m_message;
}

void CloudMateAgentRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CloudMateAgentRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string CloudMateAgentRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void CloudMateAgentRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool CloudMateAgentRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string CloudMateAgentRequest::GetSessionId() const
{
    return m_sessionId;
}

void CloudMateAgentRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CloudMateAgentRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

bool CloudMateAgentRequest::GetStreaming() const
{
    return m_streaming;
}

void CloudMateAgentRequest::SetStreaming(const bool& _streaming)
{
    m_streaming = _streaming;
    m_streamingHasBeenSet = true;
}

bool CloudMateAgentRequest::StreamingHasBeenSet() const
{
    return m_streamingHasBeenSet;
}


