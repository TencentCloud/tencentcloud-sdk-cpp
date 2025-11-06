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

#include <tencentcloud/trtc/v20190722/model/TextToSpeechRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TextToSpeechRequest::TextToSpeechRequest() :
    m_textHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_aPIKeyHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_languageHasBeenSet(false)
{
}

string TextToSpeechRequest::ToJsonString() const
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

    if (m_voiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Voice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voice.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_audioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioFormat.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aPIKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIKey.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToSpeechRequest::GetText() const
{
    return m_text;
}

void TextToSpeechRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToSpeechRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

Voice TextToSpeechRequest::GetVoice() const
{
    return m_voice;
}

void TextToSpeechRequest::SetVoice(const Voice& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool TextToSpeechRequest::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

uint64_t TextToSpeechRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void TextToSpeechRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool TextToSpeechRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

AudioFormat TextToSpeechRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void TextToSpeechRequest::SetAudioFormat(const AudioFormat& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool TextToSpeechRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string TextToSpeechRequest::GetAPIKey() const
{
    return m_aPIKey;
}

void TextToSpeechRequest::SetAPIKey(const string& _aPIKey)
{
    m_aPIKey = _aPIKey;
    m_aPIKeyHasBeenSet = true;
}

bool TextToSpeechRequest::APIKeyHasBeenSet() const
{
    return m_aPIKeyHasBeenSet;
}

string TextToSpeechRequest::GetModel() const
{
    return m_model;
}

void TextToSpeechRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TextToSpeechRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TextToSpeechRequest::GetLanguage() const
{
    return m_language;
}

void TextToSpeechRequest::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool TextToSpeechRequest::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}


