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

#include <tencentcloud/bi/v20220105/model/ModifyResourceUserGroupResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyResourceUserGroupResourceRequest::ModifyResourceUserGroupResourceRequest() :
    m_projectIdHasBeenSet(false),
    m_userGroupIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_entityIdsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

string ModifyResourceUserGroupResourceRequest::ToJsonString() const
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

    if (m_userGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userGroupId, allocator);
    }

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_entityIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entityIds.begin(); itr != m_entityIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyResourceUserGroupResourceRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyResourceUserGroupResourceRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyResourceUserGroupResourceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ModifyResourceUserGroupResourceRequest::GetUserGroupId() const
{
    return m_userGroupId;
}

void ModifyResourceUserGroupResourceRequest::SetUserGroupId(const int64_t& _userGroupId)
{
    m_userGroupId = _userGroupId;
    m_userGroupIdHasBeenSet = true;
}

bool ModifyResourceUserGroupResourceRequest::UserGroupIdHasBeenSet() const
{
    return m_userGroupIdHasBeenSet;
}

UserResourceDTO ModifyResourceUserGroupResourceRequest::GetResource() const
{
    return m_resource;
}

void ModifyResourceUserGroupResourceRequest::SetResource(const UserResourceDTO& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ModifyResourceUserGroupResourceRequest::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<int64_t> ModifyResourceUserGroupResourceRequest::GetEntityIds() const
{
    return m_entityIds;
}

void ModifyResourceUserGroupResourceRequest::SetEntityIds(const vector<int64_t>& _entityIds)
{
    m_entityIds = _entityIds;
    m_entityIdsHasBeenSet = true;
}

bool ModifyResourceUserGroupResourceRequest::EntityIdsHasBeenSet() const
{
    return m_entityIdsHasBeenSet;
}

string ModifyResourceUserGroupResourceRequest::GetResourceType() const
{
    return m_resourceType;
}

void ModifyResourceUserGroupResourceRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ModifyResourceUserGroupResourceRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}


