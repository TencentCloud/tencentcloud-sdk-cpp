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

#include <tencentcloud/weilingwith/v20230427/model/ElementProfile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ElementProfile::ElementProfile() :
    m_buildingIdHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_bottomHeightHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_spaceCodeHasBeenSet(false),
    m_spaceTypeCodeHasBeenSet(false),
    m_spaceTypeNameHasBeenSet(false),
    m_parentElementIdHasBeenSet(false),
    m_spacePoiIdHasBeenSet(false),
    m_elementDescHasBeenSet(false),
    m_isDeleteHasBeenSet(false)
{
}

CoreInternalOutcome ElementProfile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingId") && !value["BuildingId"].IsNull())
    {
        if (!value["BuildingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.BuildingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingId = string(value["BuildingId"].GetString());
        m_buildingIdHasBeenSet = true;
    }

    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.EntityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = string(value["EntityType"].GetString());
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("BottomHeight") && !value["BottomHeight"].IsNull())
    {
        if (!value["BottomHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.BottomHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bottomHeight = value["BottomHeight"].GetInt64();
        m_bottomHeightHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.Sort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetUint64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("SpaceCode") && !value["SpaceCode"].IsNull())
    {
        if (!value["SpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.SpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceCode = string(value["SpaceCode"].GetString());
        m_spaceCodeHasBeenSet = true;
    }

    if (value.HasMember("SpaceTypeCode") && !value["SpaceTypeCode"].IsNull())
    {
        if (!value["SpaceTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.SpaceTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceTypeCode = string(value["SpaceTypeCode"].GetString());
        m_spaceTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("SpaceTypeName") && !value["SpaceTypeName"].IsNull())
    {
        if (!value["SpaceTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.SpaceTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceTypeName = string(value["SpaceTypeName"].GetString());
        m_spaceTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ParentElementId") && !value["ParentElementId"].IsNull())
    {
        if (!value["ParentElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.ParentElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentElementId = string(value["ParentElementId"].GetString());
        m_parentElementIdHasBeenSet = true;
    }

    if (value.HasMember("SpacePoiId") && !value["SpacePoiId"].IsNull())
    {
        if (!value["SpacePoiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.SpacePoiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spacePoiId = string(value["SpacePoiId"].GetString());
        m_spacePoiIdHasBeenSet = true;
    }

    if (value.HasMember("ElementDesc") && !value["ElementDesc"].IsNull())
    {
        if (!value["ElementDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.ElementDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementDesc = string(value["ElementDesc"].GetString());
        m_elementDescHasBeenSet = true;
    }

    if (value.HasMember("IsDelete") && !value["IsDelete"].IsNull())
    {
        if (!value["IsDelete"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfile.IsDelete` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelete = value["IsDelete"].GetUint64();
        m_isDeleteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElementProfile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_spaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentElementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentElementId.c_str(), allocator).Move(), allocator);
    }

    if (m_spacePoiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpacePoiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spacePoiId.c_str(), allocator).Move(), allocator);
    }

    if (m_elementDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelete, allocator);
    }

}


string ElementProfile::GetBuildingId() const
{
    return m_buildingId;
}

void ElementProfile::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool ElementProfile::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string ElementProfile::GetElementId() const
{
    return m_elementId;
}

void ElementProfile::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool ElementProfile::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string ElementProfile::GetEntityType() const
{
    return m_entityType;
}

void ElementProfile::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool ElementProfile::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string ElementProfile::GetElementName() const
{
    return m_elementName;
}

void ElementProfile::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool ElementProfile::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

uint64_t ElementProfile::GetLevel() const
{
    return m_level;
}

void ElementProfile::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ElementProfile::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t ElementProfile::GetBottomHeight() const
{
    return m_bottomHeight;
}

void ElementProfile::SetBottomHeight(const int64_t& _bottomHeight)
{
    m_bottomHeight = _bottomHeight;
    m_bottomHeightHasBeenSet = true;
}

bool ElementProfile::BottomHeightHasBeenSet() const
{
    return m_bottomHeightHasBeenSet;
}

uint64_t ElementProfile::GetSort() const
{
    return m_sort;
}

void ElementProfile::SetSort(const uint64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool ElementProfile::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string ElementProfile::GetSpaceCode() const
{
    return m_spaceCode;
}

void ElementProfile::SetSpaceCode(const string& _spaceCode)
{
    m_spaceCode = _spaceCode;
    m_spaceCodeHasBeenSet = true;
}

bool ElementProfile::SpaceCodeHasBeenSet() const
{
    return m_spaceCodeHasBeenSet;
}

string ElementProfile::GetSpaceTypeCode() const
{
    return m_spaceTypeCode;
}

void ElementProfile::SetSpaceTypeCode(const string& _spaceTypeCode)
{
    m_spaceTypeCode = _spaceTypeCode;
    m_spaceTypeCodeHasBeenSet = true;
}

bool ElementProfile::SpaceTypeCodeHasBeenSet() const
{
    return m_spaceTypeCodeHasBeenSet;
}

string ElementProfile::GetSpaceTypeName() const
{
    return m_spaceTypeName;
}

void ElementProfile::SetSpaceTypeName(const string& _spaceTypeName)
{
    m_spaceTypeName = _spaceTypeName;
    m_spaceTypeNameHasBeenSet = true;
}

bool ElementProfile::SpaceTypeNameHasBeenSet() const
{
    return m_spaceTypeNameHasBeenSet;
}

string ElementProfile::GetParentElementId() const
{
    return m_parentElementId;
}

void ElementProfile::SetParentElementId(const string& _parentElementId)
{
    m_parentElementId = _parentElementId;
    m_parentElementIdHasBeenSet = true;
}

bool ElementProfile::ParentElementIdHasBeenSet() const
{
    return m_parentElementIdHasBeenSet;
}

string ElementProfile::GetSpacePoiId() const
{
    return m_spacePoiId;
}

void ElementProfile::SetSpacePoiId(const string& _spacePoiId)
{
    m_spacePoiId = _spacePoiId;
    m_spacePoiIdHasBeenSet = true;
}

bool ElementProfile::SpacePoiIdHasBeenSet() const
{
    return m_spacePoiIdHasBeenSet;
}

string ElementProfile::GetElementDesc() const
{
    return m_elementDesc;
}

void ElementProfile::SetElementDesc(const string& _elementDesc)
{
    m_elementDesc = _elementDesc;
    m_elementDescHasBeenSet = true;
}

bool ElementProfile::ElementDescHasBeenSet() const
{
    return m_elementDescHasBeenSet;
}

uint64_t ElementProfile::GetIsDelete() const
{
    return m_isDelete;
}

void ElementProfile::SetIsDelete(const uint64_t& _isDelete)
{
    m_isDelete = _isDelete;
    m_isDeleteHasBeenSet = true;
}

bool ElementProfile::IsDeleteHasBeenSet() const
{
    return m_isDeleteHasBeenSet;
}

