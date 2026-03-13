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

#include <tencentcloud/vod/v20180717/model/CreateAigcCustomVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcCustomVoiceRequest::CreateAigcCustomVoiceRequest() :
    m_subAppIdHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_voiceUrlHasBeenSet(false),
    m_videoIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string CreateAigcCustomVoiceRequest::ToJsonString() const
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

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_videoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcCustomVoiceRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcCustomVoiceRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAigcCustomVoiceRequest::GetVoiceName() const
{
    return m_voiceName;
}

void CreateAigcCustomVoiceRequest::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

string CreateAigcCustomVoiceRequest::GetVoiceUrl() const
{
    return m_voiceUrl;
}

void CreateAigcCustomVoiceRequest::SetVoiceUrl(const string& _voiceUrl)
{
    m_voiceUrl = _voiceUrl;
    m_voiceUrlHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::VoiceUrlHasBeenSet() const
{
    return m_voiceUrlHasBeenSet;
}

string CreateAigcCustomVoiceRequest::GetVideoId() const
{
    return m_videoId;
}

void CreateAigcCustomVoiceRequest::SetVideoId(const string& _videoId)
{
    m_videoId = _videoId;
    m_videoIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::VideoIdHasBeenSet() const
{
    return m_videoIdHasBeenSet;
}

string CreateAigcCustomVoiceRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcCustomVoiceRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcCustomVoiceRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcCustomVoiceRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcCustomVoiceRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcCustomVoiceRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcCustomVoiceRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


