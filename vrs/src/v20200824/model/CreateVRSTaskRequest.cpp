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

#include <tencentcloud/vrs/v20200824/model/CreateVRSTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

CreateVRSTaskRequest::CreateVRSTaskRequest() :
    m_sessionIdHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_voiceGenderHasBeenSet(false),
    m_voiceLanguageHasBeenSet(false),
    m_audioIdListHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_vPRAudioIdHasBeenSet(false),
    m_enableVoiceEnhanceHasBeenSet(false)
{
}

string CreateVRSTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceGender";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceGender, allocator);
    }

    if (m_voiceLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceLanguage, allocator);
    }

    if (m_audioIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_audioIdList.begin(); itr != m_audioIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_codecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Codec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codec.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelType, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_vPRAudioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPRAudioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vPRAudioId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableVoiceEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableVoiceEnhance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableVoiceEnhance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVRSTaskRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateVRSTaskRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateVRSTaskRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateVRSTaskRequest::GetVoiceName() const
{
    return m_voiceName;
}

void CreateVRSTaskRequest::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool CreateVRSTaskRequest::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

int64_t CreateVRSTaskRequest::GetVoiceGender() const
{
    return m_voiceGender;
}

void CreateVRSTaskRequest::SetVoiceGender(const int64_t& _voiceGender)
{
    m_voiceGender = _voiceGender;
    m_voiceGenderHasBeenSet = true;
}

bool CreateVRSTaskRequest::VoiceGenderHasBeenSet() const
{
    return m_voiceGenderHasBeenSet;
}

int64_t CreateVRSTaskRequest::GetVoiceLanguage() const
{
    return m_voiceLanguage;
}

void CreateVRSTaskRequest::SetVoiceLanguage(const int64_t& _voiceLanguage)
{
    m_voiceLanguage = _voiceLanguage;
    m_voiceLanguageHasBeenSet = true;
}

bool CreateVRSTaskRequest::VoiceLanguageHasBeenSet() const
{
    return m_voiceLanguageHasBeenSet;
}

vector<string> CreateVRSTaskRequest::GetAudioIdList() const
{
    return m_audioIdList;
}

void CreateVRSTaskRequest::SetAudioIdList(const vector<string>& _audioIdList)
{
    m_audioIdList = _audioIdList;
    m_audioIdListHasBeenSet = true;
}

bool CreateVRSTaskRequest::AudioIdListHasBeenSet() const
{
    return m_audioIdListHasBeenSet;
}

int64_t CreateVRSTaskRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void CreateVRSTaskRequest::SetSampleRate(const int64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool CreateVRSTaskRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string CreateVRSTaskRequest::GetCodec() const
{
    return m_codec;
}

void CreateVRSTaskRequest::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool CreateVRSTaskRequest::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

string CreateVRSTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateVRSTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateVRSTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t CreateVRSTaskRequest::GetModelType() const
{
    return m_modelType;
}

void CreateVRSTaskRequest::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool CreateVRSTaskRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

int64_t CreateVRSTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateVRSTaskRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateVRSTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateVRSTaskRequest::GetVPRAudioId() const
{
    return m_vPRAudioId;
}

void CreateVRSTaskRequest::SetVPRAudioId(const string& _vPRAudioId)
{
    m_vPRAudioId = _vPRAudioId;
    m_vPRAudioIdHasBeenSet = true;
}

bool CreateVRSTaskRequest::VPRAudioIdHasBeenSet() const
{
    return m_vPRAudioIdHasBeenSet;
}

uint64_t CreateVRSTaskRequest::GetEnableVoiceEnhance() const
{
    return m_enableVoiceEnhance;
}

void CreateVRSTaskRequest::SetEnableVoiceEnhance(const uint64_t& _enableVoiceEnhance)
{
    m_enableVoiceEnhance = _enableVoiceEnhance;
    m_enableVoiceEnhanceHasBeenSet = true;
}

bool CreateVRSTaskRequest::EnableVoiceEnhanceHasBeenSet() const
{
    return m_enableVoiceEnhanceHasBeenSet;
}


