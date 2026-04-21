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

#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyResourceUserGroupRequest::ModifyResourceUserGroupRequest() :
    m_projectIdHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_queryChildrenHasBeenSet(false)
{
}

string ModifyResourceUserGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_queryChildrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryChildren";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryChildren, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyResourceUserGroupRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyResourceUserGroupRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyResourceUserGroupRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<int64_t> ModifyResourceUserGroupRequest::GetUserGroupIds() const
{
    return m_userGroupIds;
}

void ModifyResourceUserGroupRequest::SetUserGroupIds(const vector<int64_t>& _userGroupIds)
{
    m_userGroupIds = _userGroupIds;
    m_userGroupIdsHasBeenSet = true;
}

bool ModifyResourceUserGroupRequest::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

ResourceListDTO ModifyResourceUserGroupRequest::GetResource() const
{
    return m_resource;
}

void ModifyResourceUserGroupRequest::SetResource(const ResourceListDTO& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ModifyResourceUserGroupRequest::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ModifyResourceUserGroupRequest::GetResourceType() const
{
    return m_resourceType;
}

void ModifyResourceUserGroupRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ModifyResourceUserGroupRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

bool ModifyResourceUserGroupRequest::GetQueryChildren() const
{
    return m_queryChildren;
}

void ModifyResourceUserGroupRequest::SetQueryChildren(const bool& _queryChildren)
{
    m_queryChildren = _queryChildren;
    m_queryChildrenHasBeenSet = true;
}

bool ModifyResourceUserGroupRequest::QueryChildrenHasBeenSet() const
{
    return m_queryChildrenHasBeenSet;
}


