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

#include <tencentcloud/cwp/v20180228/model/ScreenInvasion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenInvasion::ScreenInvasion() :
    m_createdTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_levelZhHasBeenSet(false),
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome ScreenInvasion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("LevelZh") && !value["LevelZh"].IsNull())
    {
        if (!value["LevelZh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.LevelZh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelZh = string(value["LevelZh"].GetString());
        m_levelZhHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenInvasion.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenInvasion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_levelZhHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelZh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelZh.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


string ScreenInvasion::GetCreatedTime() const
{
    return m_createdTime;
}

void ScreenInvasion::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ScreenInvasion::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

uint64_t ScreenInvasion::GetEventType() const
{
    return m_eventType;
}

void ScreenInvasion::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool ScreenInvasion::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string ScreenInvasion::GetContent() const
{
    return m_content;
}

void ScreenInvasion::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ScreenInvasion::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t ScreenInvasion::GetLevel() const
{
    return m_level;
}

void ScreenInvasion::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ScreenInvasion::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ScreenInvasion::GetLevelZh() const
{
    return m_levelZh;
}

void ScreenInvasion::SetLevelZh(const string& _levelZh)
{
    m_levelZh = _levelZh;
    m_levelZhHasBeenSet = true;
}

bool ScreenInvasion::LevelZhHasBeenSet() const
{
    return m_levelZhHasBeenSet;
}

uint64_t ScreenInvasion::GetId() const
{
    return m_id;
}

void ScreenInvasion::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ScreenInvasion::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ScreenInvasion::GetUuid() const
{
    return m_uuid;
}

void ScreenInvasion::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ScreenInvasion::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

