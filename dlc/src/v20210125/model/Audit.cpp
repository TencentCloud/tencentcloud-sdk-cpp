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

#include <tencentcloud/dlc/v20210125/model/Audit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Audit::Audit() :
    m_creatorHasBeenSet(false),
    m_lastModifierHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome Audit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("LastModifier") && !value["LastModifier"].IsNull())
    {
        if (!value["LastModifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.LastModifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifier = string(value["LastModifier"].GetString());
        m_lastModifierHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.CreatedAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetUint64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedAt") && !value["LastModifiedAt"].IsNull())
    {
        if (!value["LastModifiedAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.LastModifiedAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedAt = value["LastModifiedAt"].GetUint64();
        m_lastModifiedAtHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Audit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifier.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_lastModifiedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedAt, allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string Audit::GetCreator() const
{
    return m_creator;
}

void Audit::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Audit::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string Audit::GetLastModifier() const
{
    return m_lastModifier;
}

void Audit::SetLastModifier(const string& _lastModifier)
{
    m_lastModifier = _lastModifier;
    m_lastModifierHasBeenSet = true;
}

bool Audit::LastModifierHasBeenSet() const
{
    return m_lastModifierHasBeenSet;
}

uint64_t Audit::GetCreatedAt() const
{
    return m_createdAt;
}

void Audit::SetCreatedAt(const uint64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Audit::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

uint64_t Audit::GetLastModifiedAt() const
{
    return m_lastModifiedAt;
}

void Audit::SetLastModifiedAt(const uint64_t& _lastModifiedAt)
{
    m_lastModifiedAt = _lastModifiedAt;
    m_lastModifiedAtHasBeenSet = true;
}

bool Audit::LastModifiedAtHasBeenSet() const
{
    return m_lastModifiedAtHasBeenSet;
}

string Audit::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void Audit::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool Audit::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string Audit::GetCreatedTime() const
{
    return m_createdTime;
}

void Audit::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Audit::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

