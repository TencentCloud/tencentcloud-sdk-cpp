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

#include <tencentcloud/weilingwith/v20230427/model/DeviceSpaceInfoRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceSpaceInfoRes::DeviceSpaceInfoRes() :
    m_buildingIdHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_bottomHeightHasBeenSet(false),
    m_spaceCodeHasBeenSet(false)
{
}

CoreInternalOutcome DeviceSpaceInfoRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingId") && !value["BuildingId"].IsNull())
    {
        if (!value["BuildingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.BuildingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingId = string(value["BuildingId"].GetString());
        m_buildingIdHasBeenSet = true;
    }

    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.EntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = string(value["EntityType"].GetString());
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("BottomHeight") && !value["BottomHeight"].IsNull())
    {
        if (!value["BottomHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.BottomHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bottomHeight = value["BottomHeight"].GetInt64();
        m_bottomHeightHasBeenSet = true;
    }

    if (value.HasMember("SpaceCode") && !value["SpaceCode"].IsNull())
    {
        if (!value["SpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceSpaceInfoRes.SpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceCode = string(value["SpaceCode"].GetString());
        m_spaceCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceSpaceInfoRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildingId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_elementNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_bottomHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BottomHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bottomHeight, allocator);
    }

    if (m_spaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceCode.c_str(), allocator).Move(), allocator);
    }

}


string DeviceSpaceInfoRes::GetBuildingId() const
{
    return m_buildingId;
}

void DeviceSpaceInfoRes::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool DeviceSpaceInfoRes::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string DeviceSpaceInfoRes::GetElementId() const
{
    return m_elementId;
}

void DeviceSpaceInfoRes::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool DeviceSpaceInfoRes::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string DeviceSpaceInfoRes::GetEntityType() const
{
    return m_entityType;
}

void DeviceSpaceInfoRes::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool DeviceSpaceInfoRes::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string DeviceSpaceInfoRes::GetElementName() const
{
    return m_elementName;
}

void DeviceSpaceInfoRes::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool DeviceSpaceInfoRes::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

uint64_t DeviceSpaceInfoRes::GetLevel() const
{
    return m_level;
}

void DeviceSpaceInfoRes::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DeviceSpaceInfoRes::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DeviceSpaceInfoRes::GetBottomHeight() const
{
    return m_bottomHeight;
}

void DeviceSpaceInfoRes::SetBottomHeight(const int64_t& _bottomHeight)
{
    m_bottomHeight = _bottomHeight;
    m_bottomHeightHasBeenSet = true;
}

bool DeviceSpaceInfoRes::BottomHeightHasBeenSet() const
{
    return m_bottomHeightHasBeenSet;
}

string DeviceSpaceInfoRes::GetSpaceCode() const
{
    return m_spaceCode;
}

void DeviceSpaceInfoRes::SetSpaceCode(const string& _spaceCode)
{
    m_spaceCode = _spaceCode;
    m_spaceCodeHasBeenSet = true;
}

bool DeviceSpaceInfoRes::SpaceCodeHasBeenSet() const
{
    return m_spaceCodeHasBeenSet;
}

