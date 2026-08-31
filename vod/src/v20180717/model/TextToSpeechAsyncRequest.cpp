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

#include <tencentcloud/vod/v20180717/model/TextToSpeechAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TextToSpeechAsyncRequest::TextToSpeechAsyncRequest() :
    m_textHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_languageBoostHasBeenSet(false),
    m_extParamHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string TextToSpeechAsyncRequest::ToJsonString() const
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

    if (m_voiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_voiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_languageBoostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageBoost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_languageBoost.c_str(), allocator).Move(), allocator);
    }

    if (m_extParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extParam.c_str(), allocator).Move(), allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextToSpeechAsyncRequest::GetText() const
{
    return m_text;
}

void TextToSpeechAsyncRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextToSpeechAsyncRequest::GetVoiceId() const
{
    return m_voiceId;
}

void TextToSpeechAsyncRequest::SetVoiceId(const string& _voiceId)
{
    m_voiceId = _voiceId;
    m_voiceIdHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::VoiceIdHasBeenSet() const
{
    return m_voiceIdHasBeenSet;
}

string TextToSpeechAsyncRequest::GetSubAppId() const
{
    return m_subAppId;
}

void TextToSpeechAsyncRequest::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string TextToSpeechAsyncRequest::GetLanguageBoost() const
{
    return m_languageBoost;
}

void TextToSpeechAsyncRequest::SetLanguageBoost(const string& _languageBoost)
{
    m_languageBoost = _languageBoost;
    m_languageBoostHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::LanguageBoostHasBeenSet() const
{
    return m_languageBoostHasBeenSet;
}

string TextToSpeechAsyncRequest::GetExtParam() const
{
    return m_extParam;
}

void TextToSpeechAsyncRequest::SetExtParam(const string& _extParam)
{
    m_extParam = _extParam;
    m_extParamHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::ExtParamHasBeenSet() const
{
    return m_extParamHasBeenSet;
}

TextToSpeechAsyncOutputOption TextToSpeechAsyncRequest::GetOutput() const
{
    return m_output;
}

void TextToSpeechAsyncRequest::SetOutput(const TextToSpeechAsyncOutputOption& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string TextToSpeechAsyncRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void TextToSpeechAsyncRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string TextToSpeechAsyncRequest::GetSessionId() const
{
    return m_sessionId;
}

void TextToSpeechAsyncRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


