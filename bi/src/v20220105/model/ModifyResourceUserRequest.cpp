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

#include <tencentcloud/bi/v20220105/model/ModifyResourceUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ModifyResourceUserRequest::ModifyResourceUserRequest() :
    m_projectIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_entityIdsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

string ModifyResourceUserRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
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


int64_t ModifyResourceUserRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyResourceUserRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyResourceUserRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyResourceUserRequest::GetUserId() const
{
    return m_userId;
}

void ModifyResourceUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyResourceUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

UserResourceDTO ModifyResourceUserRequest::GetResource() const
{
    return m_resource;
}

void ModifyResourceUserRequest::SetResource(const UserResourceDTO& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ModifyResourceUserRequest::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

vector<int64_t> ModifyResourceUserRequest::GetEntityIds() const
{
    return m_entityIds;
}

void ModifyResourceUserRequest::SetEntityIds(const vector<int64_t>& _entityIds)
{
    m_entityIds = _entityIds;
    m_entityIdsHasBeenSet = true;
}

bool ModifyResourceUserRequest::EntityIdsHasBeenSet() const
{
    return m_entityIdsHasBeenSet;
}

string ModifyResourceUserRequest::GetResourceType() const
{
    return m_resourceType;
}

void ModifyResourceUserRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ModifyResourceUserRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}


