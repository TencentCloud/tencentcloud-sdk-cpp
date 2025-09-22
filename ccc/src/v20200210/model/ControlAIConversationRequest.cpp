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

#include <tencentcloud/ccc/v20200210/model/ControlAIConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ControlAIConversationRequest::ControlAIConversationRequest() :
    m_sessionIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_serverPushTextHasBeenSet(false),
    m_invokeLLMHasBeenSet(false)
{
}

string ControlAIConversationRequest::ToJsonString() const
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

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_serverPushTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPushText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serverPushText.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_invokeLLMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLLM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLLM.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ControlAIConversationRequest::GetSessionId() const
{
    return m_sessionId;
}

void ControlAIConversationRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ControlAIConversationRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t ControlAIConversationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ControlAIConversationRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ControlAIConversationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ControlAIConversationRequest::GetCommand() const
{
    return m_command;
}

void ControlAIConversationRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ControlAIConversationRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

ServerPushText ControlAIConversationRequest::GetServerPushText() const
{
    return m_serverPushText;
}

void ControlAIConversationRequest::SetServerPushText(const ServerPushText& _serverPushText)
{
    m_serverPushText = _serverPushText;
    m_serverPushTextHasBeenSet = true;
}

bool ControlAIConversationRequest::ServerPushTextHasBeenSet() const
{
    return m_serverPushTextHasBeenSet;
}

InvokeLLM ControlAIConversationRequest::GetInvokeLLM() const
{
    return m_invokeLLM;
}

void ControlAIConversationRequest::SetInvokeLLM(const InvokeLLM& _invokeLLM)
{
    m_invokeLLM = _invokeLLM;
    m_invokeLLMHasBeenSet = true;
}

bool ControlAIConversationRequest::InvokeLLMHasBeenSet() const
{
    return m_invokeLLMHasBeenSet;
}


