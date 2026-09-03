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

#include <tencentcloud/vod/v20180717/model/CloneVoiceSyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CloneVoiceSyncRequest::CloneVoiceSyncRequest() :
    m_subAppIdHasBeenSet(false),
    m_audioDataHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_audioFileIdHasBeenSet(false),
    m_languageBoostHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string CloneVoiceSyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioData.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_languageBoostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageBoost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_languageBoost.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneVoiceSyncRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CloneVoiceSyncRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CloneVoiceSyncRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CloneVoiceSyncRequest::GetAudioData() const
{
    return m_audioData;
}

void CloneVoiceSyncRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool CloneVoiceSyncRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

string CloneVoiceSyncRequest::GetAudioUrl() const
{
    return m_audioUrl;
}

void CloneVoiceSyncRequest::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool CloneVoiceSyncRequest::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string CloneVoiceSyncRequest::GetAudioFileId() const
{
    return m_audioFileId;
}

void CloneVoiceSyncRequest::SetAudioFileId(const string& _audioFileId)
{
    m_audioFileId = _audioFileId;
    m_audioFileIdHasBeenSet = true;
}

bool CloneVoiceSyncRequest::AudioFileIdHasBeenSet() const
{
    return m_audioFileIdHasBeenSet;
}

string CloneVoiceSyncRequest::GetLanguageBoost() const
{
    return m_languageBoost;
}

void CloneVoiceSyncRequest::SetLanguageBoost(const string& _languageBoost)
{
    m_languageBoost = _languageBoost;
    m_languageBoostHasBeenSet = true;
}

bool CloneVoiceSyncRequest::LanguageBoostHasBeenSet() const
{
    return m_languageBoostHasBeenSet;
}

string CloneVoiceSyncRequest::GetExtParam() const
{
    return m_extParam;
}

void CloneVoiceSyncRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool CloneVoiceSyncRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


