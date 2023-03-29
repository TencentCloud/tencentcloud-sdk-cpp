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

#include <tencentcloud/tts/v20190823/model/Subtitle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tts::V20190823::Model;
using namespace std;

Subtitle::Subtitle() :
    m_textHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_beginIndexHasBeenSet(false),
    m_endIndexHasBeenSet(false),
    m_phonemeHasBeenSet(false)
{
}

CoreInternalOutcome Subtitle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("BeginIndex") && !value["BeginIndex"].IsNull())
    {
        if (!value["BeginIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.BeginIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginIndex = value["BeginIndex"].GetInt64();
        m_beginIndexHasBeenSet = true;
    }

    if (value.HasMember("EndIndex") && !value["EndIndex"].IsNull())
    {
        if (!value["EndIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.EndIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endIndex = value["EndIndex"].GetInt64();
        m_endIndexHasBeenSet = true;
    }

    if (value.HasMember("Phoneme") && !value["Phoneme"].IsNull())
    {
        if (!value["Phoneme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Subtitle.Phoneme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneme = string(value["Phoneme"].GetString());
        m_phonemeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Subtitle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_beginIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginIndex, allocator);
    }

    if (m_endIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endIndex, allocator);
    }

    if (m_phonemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phoneme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneme.c_str(), allocator).Move(), allocator);
    }

}


string Subtitle::GetText() const
{
    return m_text;
}

void Subtitle::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Subtitle::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

int64_t Subtitle::GetBeginTime() const
{
    return m_beginTime;
}

void Subtitle::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool Subtitle::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t Subtitle::GetEndTime() const
{
    return m_endTime;
}

void Subtitle::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Subtitle::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t Subtitle::GetBeginIndex() const
{
    return m_beginIndex;
}

void Subtitle::SetBeginIndex(const int64_t& _beginIndex)
{
    m_beginIndex = _beginIndex;
    m_beginIndexHasBeenSet = true;
}

bool Subtitle::BeginIndexHasBeenSet() const
{
    return m_beginIndexHasBeenSet;
}

int64_t Subtitle::GetEndIndex() const
{
    return m_endIndex;
}

void Subtitle::SetEndIndex(const int64_t& _endIndex)
{
    m_endIndex = _endIndex;
    m_endIndexHasBeenSet = true;
}

bool Subtitle::EndIndexHasBeenSet() const
{
    return m_endIndexHasBeenSet;
}

string Subtitle::GetPhoneme() const
{
    return m_phoneme;
}

void Subtitle::SetPhoneme(const string& _phoneme)
{
    m_phoneme = _phoneme;
    m_phonemeHasBeenSet = true;
}

bool Subtitle::PhonemeHasBeenSet() const
{
    return m_phonemeHasBeenSet;
}

