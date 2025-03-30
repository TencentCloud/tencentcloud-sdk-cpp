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

#include <tencentcloud/trtc/v20190722/model/StartAIConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StartAIConversationRequest::StartAIConversationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_avatarConfigHasBeenSet(false),
    m_experimentalParamsHasBeenSet(false)
{
}

string StartAIConversationRequest::ToJsonString() const
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

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_sTTConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "STTConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sTTConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_lLMConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LLMConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lLMConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tTSConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatarConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_experimentalParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExperimentalParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_experimentalParams.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t StartAIConversationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void StartAIConversationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool StartAIConversationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string StartAIConversationRequest::GetRoomId() const
{
    return m_roomId;
}

void StartAIConversationRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool StartAIConversationRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

AgentConfig StartAIConversationRequest::GetAgentConfig() const
{
    return m_agentConfig;
}

void StartAIConversationRequest::SetAgentConfig(const AgentConfig& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool StartAIConversationRequest::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string StartAIConversationRequest::GetSessionId() const
{
    return m_sessionId;
}

void StartAIConversationRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool StartAIConversationRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

uint64_t StartAIConversationRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void StartAIConversationRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool StartAIConversationRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

STTConfig StartAIConversationRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void StartAIConversationRequest::SetSTTConfig(const STTConfig& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool StartAIConversationRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

string StartAIConversationRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void StartAIConversationRequest::SetLLMConfig(const string& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool StartAIConversationRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

string StartAIConversationRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void StartAIConversationRequest::SetTTSConfig(const string& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool StartAIConversationRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

string StartAIConversationRequest::GetAvatarConfig() const
{
    return m_avatarConfig;
}

void StartAIConversationRequest::SetAvatarConfig(const string& _avatarConfig)
{
    m_avatarConfig = _avatarConfig;
    m_avatarConfigHasBeenSet = true;
}

bool StartAIConversationRequest::AvatarConfigHasBeenSet() const
{
    return m_avatarConfigHasBeenSet;
}

string StartAIConversationRequest::GetExperimentalParams() const
{
    return m_experimentalParams;
}

void StartAIConversationRequest::SetExperimentalParams(const string& _experimentalParams)
{
    m_experimentalParams = _experimentalParams;
    m_experimentalParamsHasBeenSet = true;
}

bool StartAIConversationRequest::ExperimentalParamsHasBeenSet() const
{
    return m_experimentalParamsHasBeenSet;
}


