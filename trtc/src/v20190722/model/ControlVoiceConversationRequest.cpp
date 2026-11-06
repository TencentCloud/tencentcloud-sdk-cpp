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

#include <tencentcloud/trtc/v20190722/model/ControlVoiceConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

ControlVoiceConversationRequest::ControlVoiceConversationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_invokeLLMHasBeenSet(false),
    m_invokeTTSHasBeenSet(false)
{
}

string ControlVoiceConversationRequest::ToJsonString() const
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

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLLMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLLM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLLM.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_invokeTTSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTTS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeTTS.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ControlVoiceConversationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ControlVoiceConversationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ControlVoiceConversationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string ControlVoiceConversationRequest::GetTaskId() const
{
    return m_taskId;
}

void ControlVoiceConversationRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ControlVoiceConversationRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ControlVoiceConversationRequest::GetCommand() const
{
    return m_command;
}

void ControlVoiceConversationRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ControlVoiceConversationRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

VoiceConversationInvokeLLM ControlVoiceConversationRequest::GetInvokeLLM() const
{
    return m_invokeLLM;
}

void ControlVoiceConversationRequest::SetInvokeLLM(const VoiceConversationInvokeLLM& _invokeLLM)
{
    m_invokeLLM = _invokeLLM;
    m_invokeLLMHasBeenSet = true;
}

bool ControlVoiceConversationRequest::InvokeLLMHasBeenSet() const
{
    return m_invokeLLMHasBeenSet;
}

VoiceConversationInvokeTTS ControlVoiceConversationRequest::GetInvokeTTS() const
{
    return m_invokeTTS;
}

void ControlVoiceConversationRequest::SetInvokeTTS(const VoiceConversationInvokeTTS& _invokeTTS)
{
    m_invokeTTS = _invokeTTS;
    m_invokeTTSHasBeenSet = true;
}

bool ControlVoiceConversationRequest::InvokeTTSHasBeenSet() const
{
    return m_invokeTTSHasBeenSet;
}


