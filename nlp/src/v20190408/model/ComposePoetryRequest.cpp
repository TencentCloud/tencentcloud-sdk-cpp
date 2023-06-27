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

#include <tencentcloud/nlp/v20190408/model/ComposePoetryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

ComposePoetryRequest::ComposePoetryRequest() :
    m_textHasBeenSet(false),
    m_poetryTypeHasBeenSet(false),
    m_genreHasBeenSet(false)
{
}

string ComposePoetryRequest::ToJsonString() const
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

    if (m_poetryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoetryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_poetryType, allocator);
    }

    if (m_genreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Genre";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_genre, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ComposePoetryRequest::GetText() const
{
    return m_text;
}

void ComposePoetryRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ComposePoetryRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t ComposePoetryRequest::GetPoetryType() const
{
    return m_poetryType;
}

void ComposePoetryRequest::SetPoetryType(const int64_t& _poetryType)
{
    m_poetryType = _poetryType;
    m_poetryTypeHasBeenSet = true;
}

bool ComposePoetryRequest::PoetryTypeHasBeenSet() const
{
    return m_poetryTypeHasBeenSet;
}

int64_t ComposePoetryRequest::GetGenre() const
{
    return m_genre;
}

void ComposePoetryRequest::SetGenre(const int64_t& _genre)
{
    m_genre = _genre;
    m_genreHasBeenSet = true;
}

bool ComposePoetryRequest::GenreHasBeenSet() const
{
    return m_genreHasBeenSet;
}


