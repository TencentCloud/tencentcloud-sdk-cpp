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

#include <tencentcloud/tione/v20211111/model/ResourceGroupInWorkspace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceGroupInWorkspace::ResourceGroupInWorkspace() :
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_occupiedHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGroupInWorkspace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInWorkspace.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInWorkspace.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInWorkspace.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Occupied") && !value["Occupied"].IsNull())
    {
        if (!value["Occupied"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInWorkspace.Occupied` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_occupied = value["Occupied"].GetBool();
        m_occupiedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGroupInWorkspace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_occupiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Occupied";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occupied, allocator);
    }

}


string ResourceGroupInWorkspace::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ResourceGroupInWorkspace::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ResourceGroupInWorkspace::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string ResourceGroupInWorkspace::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ResourceGroupInWorkspace::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ResourceGroupInWorkspace::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

string ResourceGroupInWorkspace::GetRegion() const
{
    return m_region;
}

void ResourceGroupInWorkspace::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ResourceGroupInWorkspace::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

bool ResourceGroupInWorkspace::GetOccupied() const
{
    return m_occupied;
}

void ResourceGroupInWorkspace::SetOccupied(const bool& _occupied)
{
    m_occupied = _occupied;
    m_occupiedHasBeenSet = true;
}

bool ResourceGroupInWorkspace::OccupiedHasBeenSet() const
{
    return m_occupiedHasBeenSet;
}

