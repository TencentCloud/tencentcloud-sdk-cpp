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

#include <tencentcloud/nlp/v20190408/model/TextEmbellishRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

TextEmbellishRequest::TextEmbellishRequest() :
    m_textHasBeenSet(false),
    m_sourceLangHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_styleHasBeenSet(false)
{
}

string TextEmbellishRequest::ToJsonString() const
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

    if (m_sourceLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLang";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceLang.c_str(), allocator).Move(), allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextEmbellishRequest::GetText() const
{
    return m_text;
}

void TextEmbellishRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool TextEmbellishRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string TextEmbellishRequest::GetSourceLang() const
{
    return m_sourceLang;
}

void TextEmbellishRequest::SetSourceLang(const string& _sourceLang)
{
    m_sourceLang = _sourceLang;
    m_sourceLangHasBeenSet = true;
}

bool TextEmbellishRequest::SourceLangHasBeenSet() const
{
    return m_sourceLangHasBeenSet;
}

int64_t TextEmbellishRequest::GetNumber() const
{
    return m_number;
}

void TextEmbellishRequest::SetNumber(const int64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool TextEmbellishRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

string TextEmbellishRequest::GetStyle() const
{
    return m_style;
}

void TextEmbellishRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool TextEmbellishRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}


