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

#include <tencentcloud/vod/v20180717/model/DesignVoiceAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DesignVoiceAsyncRequest::DesignVoiceAsyncRequest() :
    m_promptHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_voiceSettingsHasBeenSet(false),
    m_previewTextHasBeenSet(false),
    m_extParamHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string DesignVoiceAsyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceSettings.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_previewTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_previewText.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DesignVoiceAsyncRequest::GetPrompt() const
{
    return m_prompt;
}

void DesignVoiceAsyncRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string DesignVoiceAsyncRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DesignVoiceAsyncRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

VoiceSettings DesignVoiceAsyncRequest::GetVoiceSettings() const
{
    return m_voiceSettings;
}

void DesignVoiceAsyncRequest::SetVoiceSettings(const VoiceSettings& _voiceSettings)
{
    m_voiceSettings = _voiceSettings;
    m_voiceSettingsHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::VoiceSettingsHasBeenSet() const
{
    return m_voiceSettingsHasBeenSet;
}

string DesignVoiceAsyncRequest::GetPreviewText() const
{
    return m_previewText;
}

void DesignVoiceAsyncRequest::SetPreviewText(const string& _previewText)
{
    m_previewText = _previewText;
    m_previewTextHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::PreviewTextHasBeenSet() const
{
    return m_previewTextHasBeenSet;
}

string DesignVoiceAsyncRequest::GetExtParam() const
{
    return m_extParam;
}

void DesignVoiceAsyncRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}

string DesignVoiceAsyncRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void DesignVoiceAsyncRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string DesignVoiceAsyncRequest::GetSessionId() const
{
    return m_sessionId;
}

void DesignVoiceAsyncRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool DesignVoiceAsyncRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


