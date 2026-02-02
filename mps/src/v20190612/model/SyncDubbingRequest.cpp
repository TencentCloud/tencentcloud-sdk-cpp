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

#include <tencentcloud/mps/v20190612/model/SyncDubbingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SyncDubbingRequest::SyncDubbingRequest() :
    m_textHasBeenSet(false),
    m_textLangHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_audioDataHasBeenSet(false),
    m_audioLangHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

string SyncDubbingRequest::ToJsonString() const
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

    if (m_textLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textLang.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioData.c_str(), allocator).Move(), allocator);
    }

    if (m_audioLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_audioLang.c_str(), allocator).Move(), allocator);
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


string SyncDubbingRequest::GetText() const
{
    return m_text;
}

void SyncDubbingRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SyncDubbingRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SyncDubbingRequest::GetTextLang() const
{
    return m_textLang;
}

void SyncDubbingRequest::SetTextLang(const string& _textLang)
{
    m_textLang = _textLang;
    m_textLangHasBeenSet = true;
}

bool SyncDubbingRequest::TextLangHasBeenSet() const
{
    return m_textLangHasBeenSet;
}

string SyncDubbingRequest::GetVoiceId() const
{
    return m_voiceId;
}

void SyncDubbingRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool SyncDubbingRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string SyncDubbingRequest::GetAudioData() const
{
    return m_audioData;
}

void SyncDubbingRequest::SetAudioData(const string& _audioData)
{
    m_audioData = _audioData;
    m_audioDataHasBeenSet = true;
}

bool SyncDubbingRequest::AudioDataHasBeenSet() const
{
    return m_audioDataHasBeenSet;
}

string SyncDubbingRequest::GetAudioLang() const
{
    return m_audioLang;
}

void SyncDubbingRequest::SetAudioLang(const string& _audioLang)
{
    m_audioLang = _audioLang;
    m_audioLangHasBeenSet = true;
}

bool SyncDubbingRequest::AudioLangHasBeenSet() const
{
    return m_audioLangHasBeenSet;
}

string SyncDubbingRequest::GetExtParam() const
{
    return m_extParam;
}

void SyncDubbingRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool SyncDubbingRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}


