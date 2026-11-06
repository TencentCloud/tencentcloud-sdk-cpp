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

#include <tencentcloud/trtc/v20190722/model/CreateVoiceConversationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

CreateVoiceConversationRequest::CreateVoiceConversationRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_roomIdTypeHasBeenSet(false),
    m_agentConfigHasBeenSet(false),
    m_conversationModeHasBeenSet(false),
    m_s2SConfigHasBeenSet(false),
    m_sTTConfigHasBeenSet(false),
    m_lLMConfigHasBeenSet(false),
    m_tTSConfigHasBeenSet(false),
    m_dialogConfigHasBeenSet(false),
    m_visionConfigHasBeenSet(false)
{
}

string CreateVoiceConversationRequest::ToJsonString() const
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

    if (m_roomIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomIdType, allocator);
    }

    if (m_agentConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_conversationModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conversationMode.c_str(), allocator).Move(), allocator);
    }

    if (m_s2SConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "S2SConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_s2SConfig.ToJsonObject(d[key.c_str()], allocator);
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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lLMConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tTSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dialogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dialogConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_visionConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisionConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_visionConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateVoiceConversationRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateVoiceConversationRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateVoiceConversationRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateVoiceConversationRequest::GetRoomId() const
{
    return m_roomId;
}

void CreateVoiceConversationRequest::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool CreateVoiceConversationRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t CreateVoiceConversationRequest::GetRoomIdType() const
{
    return m_roomIdType;
}

void CreateVoiceConversationRequest::SetRoomIdType(const uint64_t& _roomIdType)
{
    m_roomIdType = _roomIdType;
    m_roomIdTypeHasBeenSet = true;
}

bool CreateVoiceConversationRequest::RoomIdTypeHasBeenSet() const
{
    return m_roomIdTypeHasBeenSet;
}

VoiceConversationConfig CreateVoiceConversationRequest::GetAgentConfig() const
{
    return m_agentConfig;
}

void CreateVoiceConversationRequest::SetAgentConfig(const VoiceConversationConfig& _agentConfig)
{
    m_agentConfig = _agentConfig;
    m_agentConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::AgentConfigHasBeenSet() const
{
    return m_agentConfigHasBeenSet;
}

string CreateVoiceConversationRequest::GetConversationMode() const
{
    return m_conversationMode;
}

void CreateVoiceConversationRequest::SetConversationMode(const string& _conversationMode)
{
    m_conversationMode = _conversationMode;
    m_conversationModeHasBeenSet = true;
}

bool CreateVoiceConversationRequest::ConversationModeHasBeenSet() const
{
    return m_conversationModeHasBeenSet;
}

VoiceConversationS2SConfig CreateVoiceConversationRequest::GetS2SConfig() const
{
    return m_s2SConfig;
}

void CreateVoiceConversationRequest::SetS2SConfig(const VoiceConversationS2SConfig& _s2SConfig)
{
    m_s2SConfig = _s2SConfig;
    m_s2SConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::S2SConfigHasBeenSet() const
{
    return m_s2SConfigHasBeenSet;
}

VoiceConversationSTTConfig CreateVoiceConversationRequest::GetSTTConfig() const
{
    return m_sTTConfig;
}

void CreateVoiceConversationRequest::SetSTTConfig(const VoiceConversationSTTConfig& _sTTConfig)
{
    m_sTTConfig = _sTTConfig;
    m_sTTConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::STTConfigHasBeenSet() const
{
    return m_sTTConfigHasBeenSet;
}

VoiceConversationLLMConfig CreateVoiceConversationRequest::GetLLMConfig() const
{
    return m_lLMConfig;
}

void CreateVoiceConversationRequest::SetLLMConfig(const VoiceConversationLLMConfig& _lLMConfig)
{
    m_lLMConfig = _lLMConfig;
    m_lLMConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::LLMConfigHasBeenSet() const
{
    return m_lLMConfigHasBeenSet;
}

VoiceConversationTTSConfig CreateVoiceConversationRequest::GetTTSConfig() const
{
    return m_tTSConfig;
}

void CreateVoiceConversationRequest::SetTTSConfig(const VoiceConversationTTSConfig& _tTSConfig)
{
    m_tTSConfig = _tTSConfig;
    m_tTSConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::TTSConfigHasBeenSet() const
{
    return m_tTSConfigHasBeenSet;
}

VoiceConversationDialogConfig CreateVoiceConversationRequest::GetDialogConfig() const
{
    return m_dialogConfig;
}

void CreateVoiceConversationRequest::SetDialogConfig(const VoiceConversationDialogConfig& _dialogConfig)
{
    m_dialogConfig = _dialogConfig;
    m_dialogConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::DialogConfigHasBeenSet() const
{
    return m_dialogConfigHasBeenSet;
}

VoiceConversationVisionConfig CreateVoiceConversationRequest::GetVisionConfig() const
{
    return m_visionConfig;
}

void CreateVoiceConversationRequest::SetVisionConfig(const VoiceConversationVisionConfig& _visionConfig)
{
    m_visionConfig = _visionConfig;
    m_visionConfigHasBeenSet = true;
}

bool CreateVoiceConversationRequest::VisionConfigHasBeenSet() const
{
    return m_visionConfigHasBeenSet;
}


