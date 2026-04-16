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

#include <tencentcloud/trtc/v20190722/model/AlignmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AlignmentItem::AlignmentItem() :
    m_timeBeginMsHasBeenSet(false),
    m_timeEndMsHasBeenSet(false),
    m_textBeginHasBeenSet(false),
    m_textEndHasBeenSet(false)
{
}

CoreInternalOutcome AlignmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeBeginMs") && !value["TimeBeginMs"].IsNull())
    {
        if (!value["TimeBeginMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlignmentItem.TimeBeginMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeBeginMs = value["TimeBeginMs"].GetUint64();
        m_timeBeginMsHasBeenSet = true;
    }

    if (value.HasMember("TimeEndMs") && !value["TimeEndMs"].IsNull())
    {
        if (!value["TimeEndMs"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlignmentItem.TimeEndMs` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeEndMs = value["TimeEndMs"].GetUint64();
        m_timeEndMsHasBeenSet = true;
    }

    if (value.HasMember("TextBegin") && !value["TextBegin"].IsNull())
    {
        if (!value["TextBegin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlignmentItem.TextBegin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_textBegin = value["TextBegin"].GetUint64();
        m_textBeginHasBeenSet = true;
    }

    if (value.HasMember("TextEnd") && !value["TextEnd"].IsNull())
    {
        if (!value["TextEnd"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlignmentItem.TextEnd` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_textEnd = value["TextEnd"].GetUint64();
        m_textEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlignmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_textBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_textBegin, allocator);
    }

    if (m_textEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_textEnd, allocator);
    }

}


uint64_t AlignmentItem::GetTimeBeginMs() const
{
    return m_timeBeginMs;
}

void AlignmentItem::SetTimeBeginMs(const uint64_t& _timeBeginMs)
{
    m_timeBeginMs = _timeBeginMs;
    m_timeBeginMsHasBeenSet = true;
}

bool AlignmentItem::TimeBeginMsHasBeenSet() const
{
    return m_timeBeginMsHasBeenSet;
}

uint64_t AlignmentItem::GetTimeEndMs() const
{
    return m_timeEndMs;
}

void AlignmentItem::SetTimeEndMs(const uint64_t& _timeEndMs)
{
    m_timeEndMs = _timeEndMs;
    m_timeEndMsHasBeenSet = true;
}

bool AlignmentItem::TimeEndMsHasBeenSet() const
{
    return m_timeEndMsHasBeenSet;
}

uint64_t AlignmentItem::GetTextBegin() const
{
    return m_textBegin;
}

void AlignmentItem::SetTextBegin(const uint64_t& _textBegin)
{
    m_textBegin = _textBegin;
    m_textBeginHasBeenSet = true;
}

bool AlignmentItem::TextBeginHasBeenSet() const
{
    return m_textBeginHasBeenSet;
}

uint64_t AlignmentItem::GetTextEnd() const
{
    return m_textEnd;
}

void AlignmentItem::SetTextEnd(const uint64_t& _textEnd)
{
    m_textEnd = _textEnd;
    m_textEndHasBeenSet = true;
}

bool AlignmentItem::TextEndHasBeenSet() const
{
    return m_textEndHasBeenSet;
}

