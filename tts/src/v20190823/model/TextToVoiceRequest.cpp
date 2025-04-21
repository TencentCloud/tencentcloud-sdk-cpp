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

#include <tencentcloud/tts/v20190823/model/TextToVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tts::V20190823::Model;
using namespace std;

TextToVoiceRequest::TextToVoiceRequest() :
    m_textHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_voiceTypeHasBeenSet(false),
    m_fastVoiceTypeHasBeenSet(false),
    m_primaryLanguageHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_codecHasBeenSet(false),
    m_enableSubtitleHasBeenSet(false),
    m_segmentRateHasBeenSet(false),
    m_emotionCategoryHasBeenSet(false),
    m_emotionIntensityHasBeenSet(false)
{
}

string TextToVoiceRequest::ToJsonString() const
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

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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

    if (m_fastVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FastVoiceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fastVoiceType.c_str(), allocator).Move(), allocator);
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

    if (m_enableSubtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableSubtitle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableSubtitle, allocator);
    }

    if (m_segmentRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_segmentRate, allocator);
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


string TextToVoiceRequest::GetText() const
{
    return m_text;
}

void TextToVoiceRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToVoiceRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextToVoiceRequest::GetSessionId() const
{
    return m_sessionId;
}

void TextToVoiceRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TextToVoiceRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

double TextToVoiceRequest::GetVolume() const
{
    return m_volume;
}

void TextToVoiceRequest::SetVolume(const double& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool TextToVoiceRequest::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

double TextToVoiceRequest::GetSpeed() const
{
    return m_speed;
}

void TextToVoiceRequest::SetSpeed(const double& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool TextToVoiceRequest::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t TextToVoiceRequest::GetProjectId() const
{
    return m_projectId;
}

void TextToVoiceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextToVoiceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t TextToVoiceRequest::GetModelType() const
{
    return m_modelType;
}

void TextToVoiceRequest::SetModelType(const int64_t& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool TextToVoiceRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

int64_t TextToVoiceRequest::GetVoiceType() const
{
    return m_voiceType;
}

void TextToVoiceRequest::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool TextToVoiceRequest::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string TextToVoiceRequest::GetFastVoiceType() const
{
    return m_fastVoiceType;
}

void TextToVoiceRequest::SetFastVoiceType(const string& _fastVoiceType)
{
    m_fastVoiceType = _fastVoiceType;
    m_fastVoiceTypeHasBeenSet = true;
}

bool TextToVoiceRequest::FastVoiceTypeHasBeenSet() const
{
    return m_fastVoiceTypeHasBeenSet;
}

int64_t TextToVoiceRequest::GetPrimaryLanguage() const
{
    return m_primaryLanguage;
}

void TextToVoiceRequest::SetPrimaryLanguage(const int64_t& _primaryLanguage)
{
    m_primaryLanguage = _primaryLanguage;
    m_primaryLanguageHasBeenSet = true;
}

bool TextToVoiceRequest::PrimaryLanguageHasBeenSet() const
{
    return m_primaryLanguageHasBeenSet;
}

uint64_t TextToVoiceRequest::GetSampleRate() const
{
    return m_sampleRate;
}

void TextToVoiceRequest::SetSampleRate(const uint64_t& _sampleRate)
{
    m_sampleRate = _sampleRate;
    m_sampleRateHasBeenSet = true;
}

bool TextToVoiceRequest::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

string TextToVoiceRequest::GetCodec() const
{
    return m_codec;
}

void TextToVoiceRequest::SetCodec(const string& _codec)
{
    m_codec = _codec;
    m_codecHasBeenSet = true;
}

bool TextToVoiceRequest::CodecHasBeenSet() const
{
    return m_codecHasBeenSet;
}

bool TextToVoiceRequest::GetEnableSubtitle() const
{
    return m_enableSubtitle;
}

void TextToVoiceRequest::SetEnableSubtitle(const bool& _enableSubtitle)
{
    m_enableSubtitle = _enableSubtitle;
    m_enableSubtitleHasBeenSet = true;
}

bool TextToVoiceRequest::EnableSubtitleHasBeenSet() const
{
    return m_enableSubtitleHasBeenSet;
}

uint64_t TextToVoiceRequest::GetSegmentRate() const
{
    return m_segmentRate;
}

void TextToVoiceRequest::SetSegmentRate(const uint64_t& _segmentRate)
{
    m_segmentRate = _segmentRate;
    m_segmentRateHasBeenSet = true;
}

bool TextToVoiceRequest::SegmentRateHasBeenSet() const
{
    return m_segmentRateHasBeenSet;
}

string TextToVoiceRequest::GetEmotionCategory() const
{
    return m_emotionCategory;
}

void TextToVoiceRequest::SetEmotionCategory(const string& _emotionCategory)
{
    m_emotionCategory = _emotionCategory;
    m_emotionCategoryHasBeenSet = true;
}

bool TextToVoiceRequest::EmotionCategoryHasBeenSet() const
{
    return m_emotionCategoryHasBeenSet;
}

int64_t TextToVoiceRequest::GetEmotionIntensity() const
{
    return m_emotionIntensity;
}

void TextToVoiceRequest::SetEmotionIntensity(const int64_t& _emotionIntensity)
{
    m_emotionIntensity = _emotionIntensity;
    m_emotionIntensityHasBeenSet = true;
}

bool TextToVoiceRequest::EmotionIntensityHasBeenSet() const
{
    return m_emotionIntensityHasBeenSet;
}


