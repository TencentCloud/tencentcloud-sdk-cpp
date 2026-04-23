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

#include <tencentcloud/mps/v20190612/model/TextToSpeechAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TextToSpeechAsyncRequest::TextToSpeechAsyncRequest() :
    m_textHasBeenSet(false),
    m_voiceIdHasBeenSet(false),
    m_textLangHasBeenSet(false),
    m_extParamHasBeenSet(false)
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

    if (m_textLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_textLang.c_str(), allocator).Move(), allocator);
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

string TextToSpeechAsyncRequest::GetTextLang() const
{
    return m_textLang;
}

void TextToSpeechAsyncRequest::SetTextLang(const string& _textLang)
{
    m_textLang = _textLang;
    m_textLangHasBeenSet = true;
}

bool TextToSpeechAsyncRequest::TextLangHasBeenSet() const
{
    return m_textLangHasBeenSet;
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


