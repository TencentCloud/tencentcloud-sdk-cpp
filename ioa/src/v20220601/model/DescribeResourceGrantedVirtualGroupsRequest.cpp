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

#include <tencentcloud/ioa/v20220601/model/DescribeResourceGrantedVirtualGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeResourceGrantedVirtualGroupsRequest::DescribeResourceGrantedVirtualGroupsRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

string DescribeResourceGrantedVirtualGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceId, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeResourceGrantedVirtualGroupsRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeResourceGrantedVirtualGroupsRequest::SetResourceId(const uint64_t& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeResourceGrantedVirtualGroupsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t DescribeResourceGrantedVirtualGroupsRequest::GetResourceType() const
{
    return m_resourceType;
}

void DescribeResourceGrantedVirtualGroupsRequest::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DescribeResourceGrantedVirtualGroupsRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}


