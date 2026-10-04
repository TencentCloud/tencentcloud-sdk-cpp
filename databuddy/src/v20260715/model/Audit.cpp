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

#include <tencentcloud/databuddy/v20260715/model/Audit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

Audit::Audit() :
    m_creatorHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastModifierHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_creatorNameHasBeenSet(false),
    m_lastModifierNameHasBeenSet(false)
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

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
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

    if (value.HasMember("LastModifiedAt") && !value["LastModifiedAt"].IsNull())
    {
        if (!value["LastModifiedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.LastModifiedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedAt = string(value["LastModifiedAt"].GetString());
        m_lastModifiedAtHasBeenSet = true;
    }

    if (value.HasMember("CreatorName") && !value["CreatorName"].IsNull())
    {
        if (!value["CreatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.CreatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorName = string(value["CreatorName"].GetString());
        m_creatorNameHasBeenSet = true;
    }

    if (value.HasMember("LastModifierName") && !value["LastModifierName"].IsNull())
    {
        if (!value["LastModifierName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Audit.LastModifierName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifierName = string(value["LastModifierName"].GetString());
        m_lastModifierNameHasBeenSet = true;
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

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifier.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifiedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifierNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifierName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifierName.c_str(), allocator).Move(), allocator);
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

string Audit::GetCreatedAt() const
{
    return m_createdAt;
}

void Audit::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Audit::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
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

string Audit::GetLastModifiedAt() const
{
    return m_lastModifiedAt;
}

void Audit::SetLastModifiedAt(const string& _lastModifiedAt)
{
    m_lastModifiedAt = _lastModifiedAt;
    m_lastModifiedAtHasBeenSet = true;
}

bool Audit::LastModifiedAtHasBeenSet() const
{
    return m_lastModifiedAtHasBeenSet;
}

string Audit::GetCreatorName() const
{
    return m_creatorName;
}

void Audit::SetCreatorName(const string& _creatorName)
{
    m_creatorName = _creatorName;
    m_creatorNameHasBeenSet = true;
}

bool Audit::CreatorNameHasBeenSet() const
{
    return m_creatorNameHasBeenSet;
}

string Audit::GetLastModifierName() const
{
    return m_lastModifierName;
}

void Audit::SetLastModifierName(const string& _lastModifierName)
{
    m_lastModifierName = _lastModifierName;
    m_lastModifierNameHasBeenSet = true;
}

bool Audit::LastModifierNameHasBeenSet() const
{
    return m_lastModifierNameHasBeenSet;
}

