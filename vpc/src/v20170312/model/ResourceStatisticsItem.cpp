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

#include <tencentcloud/vpc/v20170312/model/ResourceStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResourceStatisticsItem::ResourceStatisticsItem() :
    m_resourceTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceCountHasBeenSet(false)
{
}

CoreInternalOutcome ResourceStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatisticsItem.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatisticsItem.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceCount") && !value["ResourceCount"].IsNull())
    {
        if (!value["ResourceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceStatisticsItem.ResourceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = value["ResourceCount"].GetUint64();
        m_resourceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
    }

}


string ResourceStatisticsItem::GetResourceType() const
{
    return m_resourceType;
}

void ResourceStatisticsItem::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceStatisticsItem::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceStatisticsItem::GetResourceName() const
{
    return m_resourceName;
}

void ResourceStatisticsItem::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceStatisticsItem::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

uint64_t ResourceStatisticsItem::GetResourceCount() const
{
    return m_resourceCount;
}

void ResourceStatisticsItem::SetResourceCount(const uint64_t& _resourceCount)
{
    m_resourceCount = _resourceCount;
    m_resourceCountHasBeenSet = true;
}

bool ResourceStatisticsItem::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}

