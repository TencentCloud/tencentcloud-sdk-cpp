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

#include <tencentcloud/teo/v20220901/model/IPGroupReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPGroupReference::IPGroupReference() :
    m_zoneIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityNameHasBeenSet(false),
    m_subEntityTypeHasBeenSet(false),
    m_subEntityIdHasBeenSet(false),
    m_subEntityNameHasBeenSet(false)
{
}

CoreInternalOutcome IPGroupReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.EntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = string(value["EntityType"].GetString());
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("EntityName") && !value["EntityName"].IsNull())
    {
        if (!value["EntityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.EntityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityName = string(value["EntityName"].GetString());
        m_entityNameHasBeenSet = true;
    }

    if (value.HasMember("SubEntityType") && !value["SubEntityType"].IsNull())
    {
        if (!value["SubEntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.SubEntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subEntityType = string(value["SubEntityType"].GetString());
        m_subEntityTypeHasBeenSet = true;
    }

    if (value.HasMember("SubEntityId") && !value["SubEntityId"].IsNull())
    {
        if (!value["SubEntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.SubEntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subEntityId = string(value["SubEntityId"].GetString());
        m_subEntityIdHasBeenSet = true;
    }

    if (value.HasMember("SubEntityName") && !value["SubEntityName"].IsNull())
    {
        if (!value["SubEntityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroupReference.SubEntityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subEntityName = string(value["SubEntityName"].GetString());
        m_subEntityNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPGroupReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityName.c_str(), allocator).Move(), allocator);
    }

    if (m_subEntityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subEntityType.c_str(), allocator).Move(), allocator);
    }

    if (m_subEntityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subEntityId.c_str(), allocator).Move(), allocator);
    }

    if (m_subEntityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubEntityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subEntityName.c_str(), allocator).Move(), allocator);
    }

}


string IPGroupReference::GetZoneId() const
{
    return m_zoneId;
}

void IPGroupReference::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool IPGroupReference::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string IPGroupReference::GetEntityType() const
{
    return m_entityType;
}

void IPGroupReference::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool IPGroupReference::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string IPGroupReference::GetEntityId() const
{
    return m_entityId;
}

void IPGroupReference::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool IPGroupReference::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string IPGroupReference::GetEntityName() const
{
    return m_entityName;
}

void IPGroupReference::SetEntityName(const string& _entityName)
{
    m_entityName = _entityName;
    m_entityNameHasBeenSet = true;
}

bool IPGroupReference::EntityNameHasBeenSet() const
{
    return m_entityNameHasBeenSet;
}

string IPGroupReference::GetSubEntityType() const
{
    return m_subEntityType;
}

void IPGroupReference::SetSubEntityType(const string& _subEntityType)
{
    m_subEntityType = _subEntityType;
    m_subEntityTypeHasBeenSet = true;
}

bool IPGroupReference::SubEntityTypeHasBeenSet() const
{
    return m_subEntityTypeHasBeenSet;
}

string IPGroupReference::GetSubEntityId() const
{
    return m_subEntityId;
}

void IPGroupReference::SetSubEntityId(const string& _subEntityId)
{
    m_subEntityId = _subEntityId;
    m_subEntityIdHasBeenSet = true;
}

bool IPGroupReference::SubEntityIdHasBeenSet() const
{
    return m_subEntityIdHasBeenSet;
}

string IPGroupReference::GetSubEntityName() const
{
    return m_subEntityName;
}

void IPGroupReference::SetSubEntityName(const string& _subEntityName)
{
    m_subEntityName = _subEntityName;
    m_subEntityNameHasBeenSet = true;
}

bool IPGroupReference::SubEntityNameHasBeenSet() const
{
    return m_subEntityNameHasBeenSet;
}

