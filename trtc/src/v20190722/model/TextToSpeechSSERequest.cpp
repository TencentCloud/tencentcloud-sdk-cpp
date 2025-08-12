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

#include <tencentcloud/trtc/v20190722/model/TextToSpeechSSERequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TextToSpeechSSERequest::TextToSpeechSSERequest() :
    m_textHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_aPIKeyHasBeenSet(false)
{
}

string TextToSpeechSSERequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToSpeechSSERequest::GetText() const
{
    return m_text;
}

void TextToSpeechSSERequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToSpeechSSERequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

Voice TextToSpeechSSERequest::GetVoice() const
{
    return m_voice;
}

void TextToSpeechSSERequest::SetVoice(const Voice& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool TextToSpeechSSERequest::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

uint64_t TextToSpeechSSERequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void TextToSpeechSSERequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool TextToSpeechSSERequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

AudioFormat TextToSpeechSSERequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void TextToSpeechSSERequest::SetAudioFormat(const AudioFormat& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool TextToSpeechSSERequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string TextToSpeechSSERequest::GetAPIKey() const
{
    return m_aPIKey;
}

void TextToSpeechSSERequest::SetAPIKey(const string& _aPIKey)
{
    m_aPIKey = _aPIKey;
    m_aPIKeyHasBeenSet = true;
}

bool TextToSpeechSSERequest::APIKeyHasBeenSet() const
{
    return m_aPIKeyHasBeenSet;
}


