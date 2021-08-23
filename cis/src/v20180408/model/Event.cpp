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

#include <tencentcloud/cis/v20180408/model/Event.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cis::V20180408::Model;
using namespace std;

Event::Event() :
    m_firstSeenHasBeenSet(false),
    m_lastSeenHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_countHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome Event::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstSeen") && !value["FirstSeen"].IsNull())
    {
        if (!value["FirstSeen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.FirstSeen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstSeen = string(value["FirstSeen"].GetString());
        m_firstSeenHasBeenSet = true;
    }

    if (value.HasMember("LastSeen") && !value["LastSeen"].IsNull())
    {
        if (!value["LastSeen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.LastSeen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSeen = string(value["LastSeen"].GetString());
        m_lastSeenHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Count` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_count = string(value["Count"].GetString());
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Event.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Event::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstSeenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstSeen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstSeen.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSeenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSeen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSeen.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_count.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string Event::GetFirstSeen() const
{
    return m_firstSeen;
}

void Event::SetFirstSeen(const string& _firstSeen)
{
    m_firstSeen = _firstSeen;
    m_firstSeenHasBeenSet = true;
}

bool Event::FirstSeenHasBeenSet() const
{
    return m_firstSeenHasBeenSet;
}

string Event::GetLastSeen() const
{
    return m_lastSeen;
}

void Event::SetLastSeen(const string& _lastSeen)
{
    m_lastSeen = _lastSeen;
    m_lastSeenHasBeenSet = true;
}

bool Event::LastSeenHasBeenSet() const
{
    return m_lastSeenHasBeenSet;
}

string Event::GetLevel() const
{
    return m_level;
}

void Event::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Event::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string Event::GetCount() const
{
    return m_count;
}

void Event::SetCount(const string& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool Event::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string Event::GetReason() const
{
    return m_reason;
}

void Event::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool Event::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string Event::GetMessage() const
{
    return m_message;
}

void Event::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool Event::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

