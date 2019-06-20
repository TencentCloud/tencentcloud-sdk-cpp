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

#include <tencentcloud/nlp/v20190408/model/NerToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

NerToken::NerToken() :
    m_beginOffsetHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_wordHasBeenSet(false)
{
}

CoreInternalOutcome NerToken::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("BeginOffset") && !value["BeginOffset"].IsNull())
    {
        if (!value["BeginOffset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NerToken.BeginOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginOffset = value["BeginOffset"].GetUint64();
        m_beginOffsetHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NerToken.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `NerToken.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Error("response `NerToken.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NerToken::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_beginOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginOffset, allocator);
    }

    if (m_lengthHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_wordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_word.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NerToken::GetBeginOffset() const
{
    return m_beginOffset;
}

void NerToken::SetBeginOffset(const uint64_t& _beginOffset)
{
    m_beginOffset = _beginOffset;
    m_beginOffsetHasBeenSet = true;
}

bool NerToken::BeginOffsetHasBeenSet() const
{
    return m_beginOffsetHasBeenSet;
}

uint64_t NerToken::GetLength() const
{
    return m_length;
}

void NerToken::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool NerToken::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string NerToken::GetType() const
{
    return m_type;
}

void NerToken::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NerToken::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string NerToken::GetWord() const
{
    return m_word;
}

void NerToken::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool NerToken::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

