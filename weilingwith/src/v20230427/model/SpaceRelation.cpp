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

#include <tencentcloud/weilingwith/v20230427/model/SpaceRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

SpaceRelation::SpaceRelation() :
    m_elementIdHasBeenSet(false),
    m_elementNameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_spaceCodeHasBeenSet(false),
    m_parentSpaceCodeHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome SpaceRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElementId") && !value["ElementId"].IsNull())
    {
        if (!value["ElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.ElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementId = string(value["ElementId"].GetString());
        m_elementIdHasBeenSet = true;
    }

    if (value.HasMember("ElementName") && !value["ElementName"].IsNull())
    {
        if (!value["ElementName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.ElementName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elementName = string(value["ElementName"].GetString());
        m_elementNameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("SpaceCode") && !value["SpaceCode"].IsNull())
    {
        if (!value["SpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.SpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceCode = string(value["SpaceCode"].GetString());
        m_spaceCodeHasBeenSet = true;
    }

    if (value.HasMember("ParentSpaceCode") && !value["ParentSpaceCode"].IsNull())
    {
        if (!value["ParentSpaceCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.ParentSpaceCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSpaceCode = string(value["ParentSpaceCode"].GetString());
        m_parentSpaceCodeHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpaceRelation.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpaceRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpaceRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elementId.c_str(), allocator).Move(), allocator);
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

    if (m_spaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_parentSpaceCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentSpaceCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentSpaceCode.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SpaceRelation::GetElementId() const
{
    return m_elementId;
}

void SpaceRelation::SetElementId(const string& _elementId)
{
    m_elementId = _elementId;
    m_elementIdHasBeenSet = true;
}

bool SpaceRelation::ElementIdHasBeenSet() const
{
    return m_elementIdHasBeenSet;
}

string SpaceRelation::GetElementName() const
{
    return m_elementName;
}

void SpaceRelation::SetElementName(const string& _elementName)
{
    m_elementName = _elementName;
    m_elementNameHasBeenSet = true;
}

bool SpaceRelation::ElementNameHasBeenSet() const
{
    return m_elementNameHasBeenSet;
}

uint64_t SpaceRelation::GetLevel() const
{
    return m_level;
}

void SpaceRelation::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SpaceRelation::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SpaceRelation::GetSpaceCode() const
{
    return m_spaceCode;
}

void SpaceRelation::SetSpaceCode(const string& _spaceCode)
{
    m_spaceCode = _spaceCode;
    m_spaceCodeHasBeenSet = true;
}

bool SpaceRelation::SpaceCodeHasBeenSet() const
{
    return m_spaceCodeHasBeenSet;
}

string SpaceRelation::GetParentSpaceCode() const
{
    return m_parentSpaceCode;
}

void SpaceRelation::SetParentSpaceCode(const string& _parentSpaceCode)
{
    m_parentSpaceCode = _parentSpaceCode;
    m_parentSpaceCodeHasBeenSet = true;
}

bool SpaceRelation::ParentSpaceCodeHasBeenSet() const
{
    return m_parentSpaceCodeHasBeenSet;
}

vector<SpaceRelation> SpaceRelation::GetChildren() const
{
    return m_children;
}

void SpaceRelation::SetChildren(const vector<SpaceRelation>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool SpaceRelation::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

