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

#include <tencentcloud/vod/v20180717/model/CreateAigcSubjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcSubjectRequest::CreateAigcSubjectRequest() :
    m_subAppIdHasBeenSet(false),
    m_subjectNameHasBeenSet(false),
    m_subjectImagesHasBeenSet(false),
    m_subjectVideosHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string CreateAigcSubjectRequest::ToJsonString() const
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

    if (m_subjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectImages.begin(); itr != m_subjectImages.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subjectVideosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectVideos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectVideos.begin(); itr != m_subjectVideos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
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


uint64_t CreateAigcSubjectRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcSubjectRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAigcSubjectRequest::GetSubjectName() const
{
    return m_subjectName;
}

void CreateAigcSubjectRequest::SetSubjectName(const string& _subjectName)
{
    m_subjectName = _subjectName;
    m_subjectNameHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SubjectNameHasBeenSet() const
{
    return m_subjectNameHasBeenSet;
}

vector<string> CreateAigcSubjectRequest::GetSubjectImages() const
{
    return m_subjectImages;
}

void CreateAigcSubjectRequest::SetSubjectImages(const vector<string>& _subjectImages)
{
    m_subjectImages = _subjectImages;
    m_subjectImagesHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SubjectImagesHasBeenSet() const
{
    return m_subjectImagesHasBeenSet;
}

vector<string> CreateAigcSubjectRequest::GetSubjectVideos() const
{
    return m_subjectVideos;
}

void CreateAigcSubjectRequest::SetSubjectVideos(const vector<string>& _subjectVideos)
{
    m_subjectVideos = _subjectVideos;
    m_subjectVideosHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SubjectVideosHasBeenSet() const
{
    return m_subjectVideosHasBeenSet;
}

string CreateAigcSubjectRequest::GetVoiceId() const
{
    return m_voiceId;
}

void CreateAigcSubjectRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool CreateAigcSubjectRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string CreateAigcSubjectRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcSubjectRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcSubjectRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcSubjectRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcSubjectRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcSubjectRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcSubjectRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcSubjectRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


