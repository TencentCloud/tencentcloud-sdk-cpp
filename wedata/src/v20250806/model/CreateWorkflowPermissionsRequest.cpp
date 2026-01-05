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

#include <tencentcloud/wedata/v20250806/model/CreateWorkflowPermissionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateWorkflowPermissionsRequest::CreateWorkflowPermissionsRequest() :
    m_projectIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_permissionListHasBeenSet(false)
{
}

string CreateWorkflowPermissionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entityType.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissionList.begin(); itr != m_permissionList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateWorkflowPermissionsRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateWorkflowPermissionsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateWorkflowPermissionsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateWorkflowPermissionsRequest::GetEntityId() const
{
    return m_entityId;
}

void CreateWorkflowPermissionsRequest::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool CreateWorkflowPermissionsRequest::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string CreateWorkflowPermissionsRequest::GetEntityType() const
{
    return m_entityType;
}

void CreateWorkflowPermissionsRequest::SetEntityType(const string& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool CreateWorkflowPermissionsRequest::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

vector<WorkflowPermission> CreateWorkflowPermissionsRequest::GetPermissionList() const
{
    return m_permissionList;
}

void CreateWorkflowPermissionsRequest::SetPermissionList(const vector<WorkflowPermission>& _permissionList)
{
    m_permissionList = _permissionList;
    m_permissionListHasBeenSet = true;
}

bool CreateWorkflowPermissionsRequest::PermissionListHasBeenSet() const
{
    return m_permissionListHasBeenSet;
}


