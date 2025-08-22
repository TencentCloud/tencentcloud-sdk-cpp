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

#include <tencentcloud/tione/v20211111/model/ResourceGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ResourceGroupInfo::ResourceGroupInfo() :
    m_resourceGroupIdHasBeenSet(false),
    m_resourceGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupName") && !value["ResourceGroupName"].IsNull())
    {
        if (!value["ResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGroupInfo.ResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupName = string(value["ResourceGroupName"].GetString());
        m_resourceGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string ResourceGroupInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void ResourceGroupInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool ResourceGroupInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string ResourceGroupInfo::GetResourceGroupName() const
{
    return m_resourceGroupName;
}

void ResourceGroupInfo::SetResourceGroupName(const string& _resourceGroupName)
{
    m_resourceGroupName = _resourceGroupName;
    m_resourceGroupNameHasBeenSet = true;
}

bool ResourceGroupInfo::ResourceGroupNameHasBeenSet() const
{
    return m_resourceGroupNameHasBeenSet;
}

