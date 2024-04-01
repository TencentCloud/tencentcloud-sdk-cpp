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

#include <tencentcloud/tts/v20190823/model/CreateTtsTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tts::V20190823::Model;
using namespace std;

CreateTtsTaskRequest::CreateTtsTaskRequest() :
    m_textHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_primaryLanguageHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_enableSubtitleHasBeenSet(false),
    m_voiceoverDialogueSplitHasBeenSet(false),
    m_emotionCategoryHasBeenSet(false),
    m_emotionIntensityHasBeenSet(false)
{
}

string CreateTtsTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_volume, allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_speed, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modelType, allocator);
    }

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_primaryLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_primaryLanguage, allocator);
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

    if (m_enableSubtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSubtitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSubtitle, allocator);
    }

    if (m_voiceoverDialogueSplitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceoverDialogueSplit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_voiceoverDialogueSplit, allocator);
    }

    if (m_emotionCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmotionCategory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_emotionCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_emotionIntensityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmotionIntensity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_emotionIntensity, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTtsTaskRequest::GetText() const
{
    return m_text;
}

void CreateTtsTaskRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CreateTtsTaskRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

double CreateTtsTaskRequest::GetVolume() const
{
    return m_volume;
}

void CreateTtsTaskRequest::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool CreateTtsTaskRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

double CreateTtsTaskRequest::GetSpeed() const
{
    return m_speed;
}

void CreateTtsTaskRequest::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool CreateTtsTaskRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t CreateTtsTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateTtsTaskRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateTtsTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateTtsTaskRequest::GetModelType() const
{
    return m_modelType;
}

void CreateTtsTaskRequest::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool CreateTtsTaskRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

int64_t CreateTtsTaskRequest::GetVoiceType() const
{
    return m_voiceType;
}

void CreateTtsTaskRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool CreateTtsTaskRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

int64_t CreateTtsTaskRequest::GetPrimaryLanguage() const
{
    return m_primaryLanguage;
}

void CreateTtsTaskRequest::SetPrimaryLanguage(const int64_t& _primaryLanguage)
{
    m_primaryLanguage = _primaryLanguage;
    m_primaryLanguageHasBeenSet = true;
}

bool CreateTtsTaskRequest::PrimaryLanguageHasBeenSet() const
{
    return m_primaryLanguageHasBeenSet;
}

uint64_t CreateTtsTaskRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void CreateTtsTaskRequest::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool CreateTtsTaskRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string CreateTtsTaskRequest::GetCodec() const
{
    return m_codec;
}

void CreateTtsTaskRequest::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool CreateTtsTaskRequest::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

string CreateTtsTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateTtsTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateTtsTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

bool CreateTtsTaskRequest::GetEnableSubtitle() const
{
    return m_enableSubtitle;
}

void CreateTtsTaskRequest::SetEnableSubtitle(const bool& _enableSubtitle)
{
    m_enableSubtitle = _enableSubtitle;
    m_enableSubtitleHasBeenSet = true;
}

bool CreateTtsTaskRequest::EnableSubtitleHasBeenSet() const
{
    return m_enableSubtitleHasBeenSet;
}

bool CreateTtsTaskRequest::GetVoiceoverDialogueSplit() const
{
    return m_voiceoverDialogueSplit;
}

void CreateTtsTaskRequest::SetVoiceoverDialogueSplit(const bool& _voiceoverDialogueSplit)
{
    m_voiceoverDialogueSplit = _voiceoverDialogueSplit;
    m_voiceoverDialogueSplitHasBeenSet = true;
}

bool CreateTtsTaskRequest::VoiceoverDialogueSplitHasBeenSet() const
{
    return m_voiceoverDialogueSplitHasBeenSet;
}

string CreateTtsTaskRequest::GetEmotionCategory() const
{
    return m_emotionCategory;
}

void CreateTtsTaskRequest::SetEmotionCategory(const string& _emotionCategory)
{
    m_emotionCategory = _emotionCategory;
    m_emotionCategoryHasBeenSet = true;
}

bool CreateTtsTaskRequest::EmotionCategoryHasBeenSet() const
{
    return m_emotionCategoryHasBeenSet;
}

int64_t CreateTtsTaskRequest::GetEmotionIntensity() const
{
    return m_emotionIntensity;
}

void CreateTtsTaskRequest::SetEmotionIntensity(const int64_t& _emotionIntensity)
{
    m_emotionIntensity = _emotionIntensity;
    m_emotionIntensityHasBeenSet = true;
}

bool CreateTtsTaskRequest::EmotionIntensityHasBeenSet() const
{
    return m_emotionIntensityHasBeenSet;
}


