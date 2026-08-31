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

#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TextToSpeechAsyncInput::TextToSpeechAsyncInput() :
    m_voiceIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_languageBoostHasBeenSet(false),
    m_extParamHasBeenSet(false)
{
}

CoreInternalOutcome TextToSpeechAsyncInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceId") && !value["VoiceId"].IsNull())
    {
        if (!value["VoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextToSpeechAsyncInput.VoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceId = string(value["VoiceId"].GetString());
        m_voiceIdHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextToSpeechAsyncInput.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("LanguageBoost") && !value["LanguageBoost"].IsNull())
    {
        if (!value["LanguageBoost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextToSpeechAsyncInput.LanguageBoost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_languageBoost = string(value["LanguageBoost"].GetString());
        m_languageBoostHasBeenSet = true;
    }

    if (value.HasMember("ExtParam") && !value["ExtParam"].IsNull())
    {
        if (!value["ExtParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextToSpeechAsyncInput.ExtParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extParam = string(value["ExtParam"].GetString());
        m_extParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextToSpeechAsyncInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_languageBoostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageBoost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_languageBoost.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }

}


string TextToSpeechAsyncInput::GetVoiceId() const
{
    return m_voiceId;
}

void TextToSpeechAsyncInput::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool TextToSpeechAsyncInput::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string TextToSpeechAsyncInput::GetText() const
{
    return m_text;
}

void TextToSpeechAsyncInput::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToSpeechAsyncInput::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextToSpeechAsyncInput::GetLanguageBoost() const
{
    return m_languageBoost;
}

void TextToSpeechAsyncInput::SetLanguageBoost(const string& _languageBoost)
{
    m_languageBoost = _languageBoost;
    m_languageBoostHasBeenSet = true;
}

bool TextToSpeechAsyncInput::LanguageBoostHasBeenSet() const
{
    return m_languageBoostHasBeenSet;
}

string TextToSpeechAsyncInput::GetExtParam() const
{
    return m_extParam;
}

void TextToSpeechAsyncInput::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool TextToSpeechAsyncInput::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}

