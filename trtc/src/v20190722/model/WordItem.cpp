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

#include <tencentcloud/trtc/v20190722/model/WordItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

WordItem::WordItem() :
    m_wordHasBeenSet(false),
    m_timeBeginMsHasBeenSet(false),
    m_timeEndMsHasBeenSet(false),
    m_wordBeginHasBeenSet(false),
    m_wordEndHasBeenSet(false)
{
}

CoreInternalOutcome WordItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Word") && !value["Word"].IsNull())
    {
        if (!value["Word"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.Word` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_word = string(value["Word"].GetString());
        m_wordHasBeenSet = true;
    }

    if (value.HasMember("TimeBeginMs") && !value["TimeBeginMs"].IsNull())
    {
        if (!value["TimeBeginMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.TimeBeginMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeBeginMs = value["TimeBeginMs"].GetUint64();
        m_timeBeginMsHasBeenSet = true;
    }

    if (value.HasMember("TimeEndMs") && !value["TimeEndMs"].IsNull())
    {
        if (!value["TimeEndMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.TimeEndMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeEndMs = value["TimeEndMs"].GetUint64();
        m_timeEndMsHasBeenSet = true;
    }

    if (value.HasMember("WordBegin") && !value["WordBegin"].IsNull())
    {
        if (!value["WordBegin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.WordBegin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wordBegin = value["WordBegin"].GetUint64();
        m_wordBeginHasBeenSet = true;
    }

    if (value.HasMember("WordEnd") && !value["WordEnd"].IsNull())
    {
        if (!value["WordEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WordItem.WordEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wordEnd = value["WordEnd"].GetUint64();
        m_wordEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WordItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Word";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_word.c_str(), allocator).Move(), allocator);
    }

    if (m_timeBeginMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeBeginMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeBeginMs, allocator);
    }

    if (m_timeEndMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeEndMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeEndMs, allocator);
    }

    if (m_wordBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordBegin, allocator);
    }

    if (m_wordEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordEnd, allocator);
    }

}


string WordItem::GetWord() const
{
    return m_word;
}

void WordItem::SetWord(const string& _word)
{
    m_word = _word;
    m_wordHasBeenSet = true;
}

bool WordItem::WordHasBeenSet() const
{
    return m_wordHasBeenSet;
}

uint64_t WordItem::GetTimeBeginMs() const
{
    return m_timeBeginMs;
}

void WordItem::SetTimeBeginMs(const uint64_t& _timeBeginMs)
{
    m_timeBeginMs = _timeBeginMs;
    m_timeBeginMsHasBeenSet = true;
}

bool WordItem::TimeBeginMsHasBeenSet() const
{
    return m_timeBeginMsHasBeenSet;
}

uint64_t WordItem::GetTimeEndMs() const
{
    return m_timeEndMs;
}

void WordItem::SetTimeEndMs(const uint64_t& _timeEndMs)
{
    m_timeEndMs = _timeEndMs;
    m_timeEndMsHasBeenSet = true;
}

bool WordItem::TimeEndMsHasBeenSet() const
{
    return m_timeEndMsHasBeenSet;
}

uint64_t WordItem::GetWordBegin() const
{
    return m_wordBegin;
}

void WordItem::SetWordBegin(const uint64_t& _wordBegin)
{
    m_wordBegin = _wordBegin;
    m_wordBeginHasBeenSet = true;
}

bool WordItem::WordBeginHasBeenSet() const
{
    return m_wordBeginHasBeenSet;
}

uint64_t WordItem::GetWordEnd() const
{
    return m_wordEnd;
}

void WordItem::SetWordEnd(const uint64_t& _wordEnd)
{
    m_wordEnd = _wordEnd;
    m_wordEndHasBeenSet = true;
}

bool WordItem::WordEndHasBeenSet() const
{
    return m_wordEndHasBeenSet;
}

