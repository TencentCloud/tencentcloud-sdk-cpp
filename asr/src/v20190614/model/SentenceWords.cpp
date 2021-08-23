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

#include <tencentcloud/asr/v20190614/model/SentenceWords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

SentenceWords::SentenceWords() :
    m_wordHasBeenSet(false),
    m_offsetStartMsHasBeenSet(false),
    m_offsetEndMsHasBeenSet(false)
{
}

CoreInternalOutcome SentenceWords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceWords.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("OffsetStartMs") && !value["OffsetStartMs"].IsNull())
    {
        if (!value["OffsetStartMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceWords.OffsetStartMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetStartMs = value["OffsetStartMs"].GetInt64();
        m_offsetStartMsHasBeenSet = true;
    }

    if (value.HasMember("OffsetEndMs") && !value["OffsetEndMs"].IsNull())
    {
        if (!value["OffsetEndMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceWords.OffsetEndMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetEndMs = value["OffsetEndMs"].GetInt64();
        m_offsetEndMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceWords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetStartMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetStartMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetStartMs, allocator);
    }

    if (m_offsetEndMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetEndMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetEndMs, allocator);
    }

}


string SentenceWords::GetWord() const
{
    return m_word;
}

void SentenceWords::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool SentenceWords::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

int64_t SentenceWords::GetOffsetStartMs() const
{
    return m_offsetStartMs;
}

void SentenceWords::SetOffsetStartMs(const int64_t& _offsetStartMs)
{
    m_offsetStartMs = _offsetStartMs;
    m_offsetStartMsHasBeenSet = true;
}

bool SentenceWords::OffsetStartMsHasBeenSet() const
{
    return m_offsetStartMsHasBeenSet;
}

int64_t SentenceWords::GetOffsetEndMs() const
{
    return m_offsetEndMs;
}

void SentenceWords::SetOffsetEndMs(const int64_t& _offsetEndMs)
{
    m_offsetEndMs = _offsetEndMs;
    m_offsetEndMsHasBeenSet = true;
}

bool SentenceWords::OffsetEndMsHasBeenSet() const
{
    return m_offsetEndMsHasBeenSet;
}

