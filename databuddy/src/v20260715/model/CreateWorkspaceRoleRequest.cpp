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

#include <tencentcloud/databuddy/v20260715/model/CreateWorkspaceRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateWorkspaceRoleRequest::CreateWorkspaceRoleRequest() :
    m_workspaceIdHasBeenSet(false),
    m_basicInfoHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

string CreateWorkspaceRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr, ++i)
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


string CreateWorkspaceRoleRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateWorkspaceRoleRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateWorkspaceRoleRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

RoleBasicInfo CreateWorkspaceRoleRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void CreateWorkspaceRoleRequest::SetBasicInfo(const RoleBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool CreateWorkspaceRoleRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

vector<RolePermission> CreateWorkspaceRoleRequest::GetPermissions() const
{
    return m_permissions;
}

void CreateWorkspaceRoleRequest::SetPermissions(const vector<RolePermission>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool CreateWorkspaceRoleRequest::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}


