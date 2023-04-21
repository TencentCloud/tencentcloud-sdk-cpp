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

#include <tencentcloud/gme/v20180711/model/CreateAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

CreateAppRequest::CreateAppRequest() :
    m_appNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_engineListHasBeenSet(false),
    m_regionListHasBeenSet(false),
    m_realtimeSpeechConfHasBeenSet(false),
    m_voiceMessageConfHasBeenSet(false),
    m_voiceFilterConfHasBeenSet(false),
    m_asrConfHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_engineListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineList.begin(); itr != m_engineList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_realtimeSpeechConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealtimeSpeechConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realtimeSpeechConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_voiceMessageConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceMessageConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceMessageConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_voiceFilterConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFilterConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceFilterConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAppRequest::GetAppName() const
{
    return m_appName;
}

void CreateAppRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateAppRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t CreateAppRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateAppRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateAppRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> CreateAppRequest::GetEngineList() const
{
    return m_engineList;
}

void CreateAppRequest::SetEngineList(const vector<string>& _engineList)
{
    m_engineList = _engineList;
    m_engineListHasBeenSet = true;
}

bool CreateAppRequest::EngineListHasBeenSet() const
{
    return m_engineListHasBeenSet;
}

vector<string> CreateAppRequest::GetRegionList() const
{
    return m_regionList;
}

void CreateAppRequest::SetRegionList(const vector<string>& _regionList)
{
    m_regionList = _regionList;
    m_regionListHasBeenSet = true;
}

bool CreateAppRequest::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

RealtimeSpeechConf CreateAppRequest::GetRealtimeSpeechConf() const
{
    return m_realtimeSpeechConf;
}

void CreateAppRequest::SetRealtimeSpeechConf(const RealtimeSpeechConf& _realtimeSpeechConf)
{
    m_realtimeSpeechConf = _realtimeSpeechConf;
    m_realtimeSpeechConfHasBeenSet = true;
}

bool CreateAppRequest::RealtimeSpeechConfHasBeenSet() const
{
    return m_realtimeSpeechConfHasBeenSet;
}

VoiceMessageConf CreateAppRequest::GetVoiceMessageConf() const
{
    return m_voiceMessageConf;
}

void CreateAppRequest::SetVoiceMessageConf(const VoiceMessageConf& _voiceMessageConf)
{
    m_voiceMessageConf = _voiceMessageConf;
    m_voiceMessageConfHasBeenSet = true;
}

bool CreateAppRequest::VoiceMessageConfHasBeenSet() const
{
    return m_voiceMessageConfHasBeenSet;
}

VoiceFilterConf CreateAppRequest::GetVoiceFilterConf() const
{
    return m_voiceFilterConf;
}

void CreateAppRequest::SetVoiceFilterConf(const VoiceFilterConf& _voiceFilterConf)
{
    m_voiceFilterConf = _voiceFilterConf;
    m_voiceFilterConfHasBeenSet = true;
}

bool CreateAppRequest::VoiceFilterConfHasBeenSet() const
{
    return m_voiceFilterConfHasBeenSet;
}

AsrConf CreateAppRequest::GetAsrConf() const
{
    return m_asrConf;
}

void CreateAppRequest::SetAsrConf(const AsrConf& _asrConf)
{
    m_asrConf = _asrConf;
    m_asrConfHasBeenSet = true;
}

bool CreateAppRequest::AsrConfHasBeenSet() const
{
    return m_asrConfHasBeenSet;
}

vector<Tag> CreateAppRequest::GetTags() const
{
    return m_tags;
}

void CreateAppRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAppRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


