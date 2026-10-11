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

#include <tencentcloud/mongodb/v20190725/model/CreateInstanceRoleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateInstanceRoleRequest::CreateInstanceRoleRequest() :
    m_instanceIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_inheritedRolesHasBeenSet(false)
{
}

string CreateInstanceRoleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_inheritedRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedRoles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inheritedRoles.begin(); itr != m_inheritedRoles.end(); ++itr, ++i)
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


string CreateInstanceRoleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateInstanceRoleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateInstanceRoleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateInstanceRoleRequest::GetRoleName() const
{
    return m_roleName;
}

void CreateInstanceRoleRequest::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool CreateInstanceRoleRequest::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string CreateInstanceRoleRequest::GetDatabase() const
{
    return m_database;
}

void CreateInstanceRoleRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool CreateInstanceRoleRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<RolePrivilege> CreateInstanceRoleRequest::GetPrivileges() const
{
    return m_privileges;
}

void CreateInstanceRoleRequest::SetPrivileges(const vector<RolePrivilege>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool CreateInstanceRoleRequest::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

vector<Role> CreateInstanceRoleRequest::GetInheritedRoles() const
{
    return m_inheritedRoles;
}

void CreateInstanceRoleRequest::SetInheritedRoles(const vector<Role>& _inheritedRoles)
{
    m_inheritedRoles = _inheritedRoles;
    m_inheritedRolesHasBeenSet = true;
}

bool CreateInstanceRoleRequest::InheritedRolesHasBeenSet() const
{
    return m_inheritedRolesHasBeenSet;
}


