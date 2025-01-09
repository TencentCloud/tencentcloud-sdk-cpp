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

#include <tencentcloud/config/v20220802/model/DescribeAggregateDiscoveredResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeAggregateDiscoveredResourceRequest::DescribeAggregateDiscoveredResourceRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_accountGroupIdHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false)
{
}

string DescribeAggregateDiscoveredResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_accountGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceOwnerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceOwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceOwnerId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAggregateDiscoveredResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeAggregateDiscoveredResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeAggregateDiscoveredResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeAggregateDiscoveredResourceRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeAggregateDiscoveredResourceRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeAggregateDiscoveredResourceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DescribeAggregateDiscoveredResourceRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void DescribeAggregateDiscoveredResourceRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool DescribeAggregateDiscoveredResourceRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string DescribeAggregateDiscoveredResourceRequest::GetAccountGroupId() const
{
    return m_accountGroupId;
}

void DescribeAggregateDiscoveredResourceRequest::SetAccountGroupId(const string& _accountGroupId)
{
    m_accountGroupId = _accountGroupId;
    m_accountGroupIdHasBeenSet = true;
}

bool DescribeAggregateDiscoveredResourceRequest::AccountGroupIdHasBeenSet() const
{
    return m_accountGroupIdHasBeenSet;
}

uint64_t DescribeAggregateDiscoveredResourceRequest::GetResourceOwnerId() const
{
    return m_resourceOwnerId;
}

void DescribeAggregateDiscoveredResourceRequest::SetResourceOwnerId(const uint64_t& _resourceOwnerId)
{
    m_resourceOwnerId = _resourceOwnerId;
    m_resourceOwnerIdHasBeenSet = true;
}

bool DescribeAggregateDiscoveredResourceRequest::ResourceOwnerIdHasBeenSet() const
{
    return m_resourceOwnerIdHasBeenSet;
}


