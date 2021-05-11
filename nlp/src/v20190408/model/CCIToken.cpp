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

#include <tencentcloud/nlp/v20190408/model/CCIToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

CCIToken::CCIToken() :
    m_wordHasBeenSet(false),
    m_beginOffsetHasBeenSet(false),
    m_correctWordHasBeenSet(false)
{
}

CoreInternalOutcome CCIToken::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Error("response `CCIToken.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("BeginOffset") && !value["BeginOffset"].IsNull())
    {
        if (!value["BeginOffset"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CCIToken.BeginOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginOffset = value["BeginOffset"].GetUint64();
        m_beginOffsetHasBeenSet = true;
    }

    if (value.HasMember("CorrectWord") && !value["CorrectWord"].IsNull())
    {
        if (!value["CorrectWord"].IsString())
        {
            return CoreInternalOutcome(Error("response `CCIToken.CorrectWord` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_correctWord = string(value["CorrectWord"].GetString());
        m_correctWordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCIToken::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_beginOffsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BeginOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginOffset, allocator);
    }

    if (m_correctWordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CorrectWord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_correctWord.c_str(), allocator).Move(), allocator);
    }

}


string CCIToken::GetWord() const
{
    return m_word;
}

void CCIToken::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool CCIToken::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

uint64_t CCIToken::GetBeginOffset() const
{
    return m_beginOffset;
}

void CCIToken::SetBeginOffset(const uint64_t& _beginOffset)
{
    m_beginOffset = _beginOffset;
    m_beginOffsetHasBeenSet = true;
}

bool CCIToken::BeginOffsetHasBeenSet() const
{
    return m_beginOffsetHasBeenSet;
}

string CCIToken::GetCorrectWord() const
{
    return m_correctWord;
}

void CCIToken::SetCorrectWord(const string& _correctWord)
{
    m_correctWord = _correctWord;
    m_correctWordHasBeenSet = true;
}

bool CCIToken::CorrectWordHasBeenSet() const
{
    return m_correctWordHasBeenSet;
}

