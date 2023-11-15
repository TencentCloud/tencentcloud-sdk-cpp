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

#include <tencentcloud/weilingwith/v20230427/model/ElementPropertyRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ElementPropertyRes::ElementPropertyRes() :
    m_buildingIdHasBeenSet(false),
    m_elementIdHasBeenSet(false),
    m_propertySetHasBeenSet(false),
    m_coordinatesHasBeenSet(false),
    m_translateHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_entityTypeCodeHasBeenSet(false),
    m_entityTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome ElementPropertyRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingId") && !value["BuildingId"].IsNull())
    {
        if (!value["BuildingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.BuildingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingId = string(value["BuildingId"].GetString());
        m_buildingIdHasBeenSet = true;
    }

    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("PropertySet") && !value["PropertySet"].IsNull())
    {
        if (!value["PropertySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.PropertySet` is not array type"));

        const rapidjson::Value &tmpValue = value["PropertySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ElementProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propertySet.push_back(item);
        }
        m_propertySetHasBeenSet = true;
    }

    if (value.HasMember("Coordinates") && !value["Coordinates"].IsNull())
    {
        if (!value["Coordinates"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.Coordinates` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coordinates.Deserialize(value["Coordinates"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coordinatesHasBeenSet = true;
    }

    if (value.HasMember("Translate") && !value["Translate"].IsNull())
    {
        if (!value["Translate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.Translate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_translate.Deserialize(value["Translate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_translateHasBeenSet = true;
    }

    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("EntityTypeCode") && !value["EntityTypeCode"].IsNull())
    {
        if (!value["EntityTypeCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.EntityTypeCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityTypeCode = string(value["EntityTypeCode"].GetString());
        m_entityTypeCodeHasBeenSet = true;
    }

    if (value.HasMember("EntityTypeName") && !value["EntityTypeName"].IsNull())
    {
        if (!value["EntityTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementPropertyRes.EntityTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityTypeName = string(value["EntityTypeName"].GetString());
        m_entityTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElementPropertyRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_propertySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propertySet.begin(); itr != m_propertySet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_coordinatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Coordinates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coordinates.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_translateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Translate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_elementNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementName.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityTypeCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityTypeCode.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityTypeName.c_str(), allocator).Move(), allocator);
    }

}


string ElementPropertyRes::GetBuildingId() const
{
    return m_buildingId;
}

void ElementPropertyRes::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool ElementPropertyRes::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string ElementPropertyRes::GetElementId() const
{
    return m_elementId;
}

void ElementPropertyRes::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool ElementPropertyRes::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

vector<ElementProperty> ElementPropertyRes::GetPropertySet() const
{
    return m_propertySet;
}

void ElementPropertyRes::SetPropertySet(const vector<ElementProperty>& _propertySet)
{
    m_propertySet = _propertySet;
    m_propertySetHasBeenSet = true;
}

bool ElementPropertyRes::PropertySetHasBeenSet() const
{
    return m_propertySetHasBeenSet;
}

ElementCoordinates ElementPropertyRes::GetCoordinates() const
{
    return m_coordinates;
}

void ElementPropertyRes::SetCoordinates(const ElementCoordinates& _coordinates)
{
    m_coordinates = _coordinates;
    m_coordinatesHasBeenSet = true;
}

bool ElementPropertyRes::CoordinatesHasBeenSet() const
{
    return m_coordinatesHasBeenSet;
}

ElementTranslate ElementPropertyRes::GetTranslate() const
{
    return m_translate;
}

void ElementPropertyRes::SetTranslate(const ElementTranslate& _translate)
{
    m_translate = _translate;
    m_translateHasBeenSet = true;
}

bool ElementPropertyRes::TranslateHasBeenSet() const
{
    return m_translateHasBeenSet;
}

string ElementPropertyRes::GetElementName() const
{
    return m_elementName;
}

void ElementPropertyRes::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool ElementPropertyRes::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

string ElementPropertyRes::GetEntityTypeCode() const
{
    return m_entityTypeCode;
}

void ElementPropertyRes::SetEntityTypeCode(const string& _entityTypeCode)
{
    m_entityTypeCode = _entityTypeCode;
    m_entityTypeCodeHasBeenSet = true;
}

bool ElementPropertyRes::EntityTypeCodeHasBeenSet() const
{
    return m_entityTypeCodeHasBeenSet;
}

string ElementPropertyRes::GetEntityTypeName() const
{
    return m_entityTypeName;
}

void ElementPropertyRes::SetEntityTypeName(const string& _entityTypeName)
{
    m_entityTypeName = _entityTypeName;
    m_entityTypeNameHasBeenSet = true;
}

bool ElementPropertyRes::EntityTypeNameHasBeenSet() const
{
    return m_entityTypeNameHasBeenSet;
}

