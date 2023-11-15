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

#include <tencentcloud/weilingwith/v20230427/model/ElementProfileTreeRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ElementProfileTreeRes::ElementProfileTreeRes() :
    m_buildingIdHasBeenSet(false),
    m_parentElementIdHasBeenSet(false),
    m_rootHasBeenSet(false)
{
}

CoreInternalOutcome ElementProfileTreeRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BuildingId") && !value["BuildingId"].IsNull())
    {
        if (!value["BuildingId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfileTreeRes.BuildingId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildingId = string(value["BuildingId"].GetString());
        m_buildingIdHasBeenSet = true;
    }

    if (value.HasMember("ParentElementId") && !value["ParentElementId"].IsNull())
    {
        if (!value["ParentElementId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfileTreeRes.ParentElementId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentElementId = string(value["ParentElementId"].GetString());
        m_parentElementIdHasBeenSet = true;
    }

    if (value.HasMember("Root") && !value["Root"].IsNull())
    {
        if (!value["Root"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ElementProfileTreeRes.Root` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_root.Deserialize(value["Root"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rootHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElementProfileTreeRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_buildingIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildingId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildingId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentElementIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentElementId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentElementId.c_str(), allocator).Move(), allocator);
    }

    if (m_rootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Root";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_root.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ElementProfileTreeRes::GetBuildingId() const
{
    return m_buildingId;
}

void ElementProfileTreeRes::SetBuildingId(const string& _buildingId)
{
    m_buildingId = _buildingId;
    m_buildingIdHasBeenSet = true;
}

bool ElementProfileTreeRes::BuildingIdHasBeenSet() const
{
    return m_buildingIdHasBeenSet;
}

string ElementProfileTreeRes::GetParentElementId() const
{
    return m_parentElementId;
}

void ElementProfileTreeRes::SetParentElementId(const string& _parentElementId)
{
    m_parentElementId = _parentElementId;
    m_parentElementIdHasBeenSet = true;
}

bool ElementProfileTreeRes::ParentElementIdHasBeenSet() const
{
    return m_parentElementIdHasBeenSet;
}

ElementProfileTreeNode ElementProfileTreeRes::GetRoot() const
{
    return m_root;
}

void ElementProfileTreeRes::SetRoot(const ElementProfileTreeNode& _root)
{
    m_root = _root;
    m_rootHasBeenSet = true;
}

bool ElementProfileTreeRes::RootHasBeenSet() const
{
    return m_rootHasBeenSet;
}

