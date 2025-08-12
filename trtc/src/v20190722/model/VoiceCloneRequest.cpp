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

#include <tencentcloud/trtc/v20190722/model/VoiceCloneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceCloneRequest::VoiceCloneRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_promptAudioHasBeenSet(false),
    m_promptTextHasBeenSet(false)
{
}

string VoiceCloneRequest::ToJsonString() const
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

    if (m_aPIKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIKey.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_promptAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptAudio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptAudio.c_str(), allocator).Move(), allocator);
    }

    if (m_promptTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptText.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t VoiceCloneRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void VoiceCloneRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool VoiceCloneRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string VoiceCloneRequest::GetAPIKey() const
{
    return m_aPIKey;
}

void VoiceCloneRequest::SetAPIKey(const string& _aPIKey)
{
    m_aPIKey = _aPIKey;
    m_aPIKeyHasBeenSet = true;
}

bool VoiceCloneRequest::APIKeyHasBeenSet() const
{
    return m_aPIKeyHasBeenSet;
}

string VoiceCloneRequest::GetVoiceName() const
{
    return m_voiceName;
}

void VoiceCloneRequest::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool VoiceCloneRequest::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

string VoiceCloneRequest::GetPromptAudio() const
{
    return m_promptAudio;
}

void VoiceCloneRequest::SetPromptAudio(const string& _promptAudio)
{
    m_promptAudio = _promptAudio;
    m_promptAudioHasBeenSet = true;
}

bool VoiceCloneRequest::PromptAudioHasBeenSet() const
{
    return m_promptAudioHasBeenSet;
}

string VoiceCloneRequest::GetPromptText() const
{
    return m_promptText;
}

void VoiceCloneRequest::SetPromptText(const string& _promptText)
{
    m_promptText = _promptText;
    m_promptTextHasBeenSet = true;
}

bool VoiceCloneRequest::PromptTextHasBeenSet() const
{
    return m_promptTextHasBeenSet;
}


