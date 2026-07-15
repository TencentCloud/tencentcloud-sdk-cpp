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

#include <tencentcloud/es/v20180416/model/ZoneResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ZoneResource::ZoneResource() :
    m_zoneNameHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_nodeTypeListHasBeenSet(false),
    m_availNodeFamiliesHasBeenSet(false)
{
}

CoreInternalOutcome ZoneResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneResource.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("NodeTypeList") && !value["NodeTypeList"].IsNull())
    {
        if (!value["NodeTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneResource.NodeTypeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeTypeResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeTypeList.push_back(item);
        }
        m_nodeTypeListHasBeenSet = true;
    }

    if (value.HasMember("AvailNodeFamilies") && !value["AvailNodeFamilies"].IsNull())
    {
        if (!value["AvailNodeFamilies"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ZoneResource.AvailNodeFamilies` is not array type"));

        const rapidjson::Value &tmpValue = value["AvailNodeFamilies"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_availNodeFamilies.push_back((*itr).GetString());
        }
        m_availNodeFamiliesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_nodeTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeTypeList.begin(); itr != m_nodeTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_availNodeFamiliesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailNodeFamilies";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_availNodeFamilies.begin(); itr != m_availNodeFamilies.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ZoneResource::GetZoneName() const
{
    return m_zoneName;
}

void ZoneResource::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ZoneResource::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

bool ZoneResource::GetAvailable() const
{
    return m_available;
}

void ZoneResource::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool ZoneResource::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

vector<NodeTypeResource> ZoneResource::GetNodeTypeList() const
{
    return m_nodeTypeList;
}

void ZoneResource::SetNodeTypeList(const vector<NodeTypeResource>& _nodeTypeList)
{
    m_nodeTypeList = _nodeTypeList;
    m_nodeTypeListHasBeenSet = true;
}

bool ZoneResource::NodeTypeListHasBeenSet() const
{
    return m_nodeTypeListHasBeenSet;
}

vector<string> ZoneResource::GetAvailNodeFamilies() const
{
    return m_availNodeFamilies;
}

void ZoneResource::SetAvailNodeFamilies(const vector<string>& _availNodeFamilies)
{
    m_availNodeFamilies = _availNodeFamilies;
    m_availNodeFamiliesHasBeenSet = true;
}

bool ZoneResource::AvailNodeFamiliesHasBeenSet() const
{
    return m_availNodeFamiliesHasBeenSet;
}

