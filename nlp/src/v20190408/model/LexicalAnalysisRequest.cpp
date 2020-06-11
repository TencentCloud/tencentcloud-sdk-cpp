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

#include <tencentcloud/nlp/v20190408/model/LexicalAnalysisRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

LexicalAnalysisRequest::LexicalAnalysisRequest() :
    m_textHasBeenSet(false),
    m_dictIdHasBeenSet(false),
    m_flagHasBeenSet(false)
{
}

string LexicalAnalysisRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_dictIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DictId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dictId.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string LexicalAnalysisRequest::GetText() const
{
    return m_text;
}

void LexicalAnalysisRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool LexicalAnalysisRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string LexicalAnalysisRequest::GetDictId() const
{
    return m_dictId;
}

void LexicalAnalysisRequest::SetDictId(const string& _dictId)
{
    m_dictId = _dictId;
    m_dictIdHasBeenSet = true;
}

bool LexicalAnalysisRequest::DictIdHasBeenSet() const
{
    return m_dictIdHasBeenSet;
}

uint64_t LexicalAnalysisRequest::GetFlag() const
{
    return m_flag;
}

void LexicalAnalysisRequest::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool LexicalAnalysisRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}


