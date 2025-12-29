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

#include <tencentcloud/ccc/v20200210/model/PlaySoundCallRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

PlaySoundCallRequest::PlaySoundCallRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_playTimesHasBeenSet(false)
{
}

string PlaySoundCallRequest::ToJsonString() const
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileId, allocator);
    }

    if (m_playTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_playTimes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t PlaySoundCallRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void PlaySoundCallRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool PlaySoundCallRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string PlaySoundCallRequest::GetSessionId() const
{
    return m_sessionId;
}

void PlaySoundCallRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool PlaySoundCallRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

int64_t PlaySoundCallRequest::GetFileId() const
{
    return m_fileId;
}

void PlaySoundCallRequest::SetFileId(const int64_t& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool PlaySoundCallRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t PlaySoundCallRequest::GetPlayTimes() const
{
    return m_playTimes;
}

void PlaySoundCallRequest::SetPlayTimes(const int64_t& _playTimes)
{
    m_playTimes = _playTimes;
    m_playTimesHasBeenSet = true;
}

bool PlaySoundCallRequest::PlayTimesHasBeenSet() const
{
    return m_playTimesHasBeenSet;
}


