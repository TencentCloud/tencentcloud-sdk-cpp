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

#include <tencentcloud/mps/v20190612/model/CloneVoiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CloneVoiceRequest::CloneVoiceRequest() :
    m_audioDataHasBeenSet(false),
    m_audioUrlHasBeenSet(false),
    m_audioLangHasBeenSet(false),
    m_voiceProfileHasBeenSet(false),
    m_textHasBeenSet(false),
    m_textLangHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string CloneVoiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_audioLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioLang.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceProfile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceProfile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_textLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textLang.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
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


string CloneVoiceRequest::GetAudioData() const
{
    return m_audioData;
}

void CloneVoiceRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool CloneVoiceRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

string CloneVoiceRequest::GetAudioUrl() const
{
    return m_audioUrl;
}

void CloneVoiceRequest::SetAudioUrl(const string& _audioUrl)
{
    m_audioUrl = _audioUrl;
    m_audioUrlHasBeenSet = true;
}

bool CloneVoiceRequest::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}

string CloneVoiceRequest::GetAudioLang() const
{
    return m_audioLang;
}

void CloneVoiceRequest::SetAudioLang(const string& _audioLang)
{
    m_audioLang = _audioLang;
    m_audioLangHasBeenSet = true;
}

bool CloneVoiceRequest::AudioLangHasBeenSet() const
{
    return m_audioLangHasBeenSet;
}

VoiceProfile CloneVoiceRequest::GetVoiceProfile() const
{
    return m_voiceProfile;
}

void CloneVoiceRequest::SetVoiceProfile(const VoiceProfile& _voiceProfile)
{
    m_voiceProfile = _voiceProfile;
    m_voiceProfileHasBeenSet = true;
}

bool CloneVoiceRequest::VoiceProfileHasBeenSet() const
{
    return m_voiceProfileHasBeenSet;
}

string CloneVoiceRequest::GetText() const
{
    return m_text;
}

void CloneVoiceRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CloneVoiceRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string CloneVoiceRequest::GetTextLang() const
{
    return m_textLang;
}

void CloneVoiceRequest::SetTextLang(const string& _textLang)
{
    m_textLang = _textLang;
    m_textLangHasBeenSet = true;
}

bool CloneVoiceRequest::TextLangHasBeenSet() const
{
    return m_textLangHasBeenSet;
}

SyncDubbingOutputOption CloneVoiceRequest::GetOutput() const
{
    return m_output;
}

void CloneVoiceRequest::SetOutput(const SyncDubbingOutputOption& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool CloneVoiceRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string CloneVoiceRequest::GetExtParam() const
{
    return m_extParam;
}

void CloneVoiceRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool CloneVoiceRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


