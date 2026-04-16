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

#include <tencentcloud/trtc/v20190722/model/AsyncTextToSpeechRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AsyncTextToSpeechRequest::AsyncTextToSpeechRequest() :
    m_textHasBeenSet(false),
    m_voiceHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_pronunciationDictHasBeenSet(false),
    m_alignmentModeHasBeenSet(false),
    m_languageCodeHasBeenSet(false)
{
}

string AsyncTextToSpeechRequest::ToJsonString() const
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

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_pronunciationDictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PronunciationDict";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pronunciationDict.begin(); itr != m_pronunciationDict.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_alignmentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlignmentMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alignmentMode, allocator);
    }

    if (m_languageCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_languageCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AsyncTextToSpeechRequest::GetText() const
{
    return m_text;
}

void AsyncTextToSpeechRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

Voice AsyncTextToSpeechRequest::GetVoice() const
{
    return m_voice;
}

void AsyncTextToSpeechRequest::SetVoice(const Voice& _voice)
{
    m_voice = _voice;
    m_voiceHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::VoiceHasBeenSet() const
{
    return m_voiceHasBeenSet;
}

uint64_t AsyncTextToSpeechRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void AsyncTextToSpeechRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

AudioFormat AsyncTextToSpeechRequest::GetAudioFormat() const
{
    return m_audioFormat;
}

void AsyncTextToSpeechRequest::SetAudioFormat(const AudioFormat& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string AsyncTextToSpeechRequest::GetModel() const
{
    return m_model;
}

void AsyncTextToSpeechRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<PronunciationDict> AsyncTextToSpeechRequest::GetPronunciationDict() const
{
    return m_pronunciationDict;
}

void AsyncTextToSpeechRequest::SetPronunciationDict(const vector<PronunciationDict>& _pronunciationDict)
{
    m_pronunciationDict = _pronunciationDict;
    m_pronunciationDictHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::PronunciationDictHasBeenSet() const
{
    return m_pronunciationDictHasBeenSet;
}

uint64_t AsyncTextToSpeechRequest::GetAlignmentMode() const
{
    return m_alignmentMode;
}

void AsyncTextToSpeechRequest::SetAlignmentMode(const uint64_t& _alignmentMode)
{
    m_alignmentMode = _alignmentMode;
    m_alignmentModeHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::AlignmentModeHasBeenSet() const
{
    return m_alignmentModeHasBeenSet;
}

string AsyncTextToSpeechRequest::GetLanguageCode() const
{
    return m_languageCode;
}

void AsyncTextToSpeechRequest::SetLanguageCode(const string& _languageCode)
{
    m_languageCode = _languageCode;
    m_languageCodeHasBeenSet = true;
}

bool AsyncTextToSpeechRequest::LanguageCodeHasBeenSet() const
{
    return m_languageCodeHasBeenSet;
}


