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

#include <tencentcloud/vod/v20180717/model/CreateAigcAudioCloneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcAudioCloneRequest::CreateAigcAudioCloneRequest() :
    m_subAppIdHasBeenSet(false),
    m_audioFileInfoHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_promptAudioFileInfoHasBeenSet(false),
    m_promptTextHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

string CreateAigcAudioCloneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_audioFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioFileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_promptAudioFileInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptAudioFileInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptAudioFileInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_promptTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promptText.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcAudioCloneRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcAudioCloneRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

AigcAudioCloneInputFileInfo CreateAigcAudioCloneRequest::GetAudioFileInfo() const
{
    return m_audioFileInfo;
}

void CreateAigcAudioCloneRequest::SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo)
{
    m_audioFileInfo = _audioFileInfo;
    m_audioFileInfoHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::AudioFileInfoHasBeenSet() const
{
    return m_audioFileInfoHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetVoiceId() const
{
    return m_voiceId;
}

void CreateAigcAudioCloneRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetText() const
{
    return m_text;
}

void CreateAigcAudioCloneRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

AigcAudioCloneInputFileInfo CreateAigcAudioCloneRequest::GetPromptAudioFileInfo() const
{
    return m_promptAudioFileInfo;
}

void CreateAigcAudioCloneRequest::SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo)
{
    m_promptAudioFileInfo = _promptAudioFileInfo;
    m_promptAudioFileInfoHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::PromptAudioFileInfoHasBeenSet() const
{
    return m_promptAudioFileInfoHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetPromptText() const
{
    return m_promptText;
}

void CreateAigcAudioCloneRequest::SetPromptText(const string& _promptText)
{
    m_promptText = _promptText;
    m_promptTextHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::PromptTextHasBeenSet() const
{
    return m_promptTextHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetPayload() const
{
    return m_payload;
}

void CreateAigcAudioCloneRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcAudioCloneRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcAudioCloneRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcAudioCloneRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcAudioCloneRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}

string CreateAigcAudioCloneRequest::GetExtInfo() const
{
    return m_extInfo;
}

void CreateAigcAudioCloneRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool CreateAigcAudioCloneRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}


