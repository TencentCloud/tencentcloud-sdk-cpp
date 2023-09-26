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

#include <tencentcloud/bi/v20220105/model/UserRoleListDataRoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

UserRoleListDataRoleInfo::UserRoleListDataRoleInfo() :
    m_roleNameHasBeenSet(false),
    m_roleIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_moduleCollectionHasBeenSet(false)
{
}

CoreInternalOutcome UserRoleListDataRoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("RoleId") && !value["RoleId"].IsNull())
    {
        if (!value["RoleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.RoleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roleId = value["RoleId"].GetInt64();
        m_roleIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.ScopeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = value["ScopeType"].GetInt64();
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("ModuleCollection") && !value["ModuleCollection"].IsNull())
    {
        if (!value["ModuleCollection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserRoleListDataRoleInfo.ModuleCollection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moduleCollection = string(value["ModuleCollection"].GetString());
        m_moduleCollectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserRoleListDataRoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_roleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roleId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scopeType, allocator);
    }

    if (m_moduleCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moduleCollection.c_str(), allocator).Move(), allocator);
    }

}


string UserRoleListDataRoleInfo::GetRoleName() const
{
    return m_roleName;
}

void UserRoleListDataRoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

int64_t UserRoleListDataRoleInfo::GetRoleId() const
{
    return m_roleId;
}

void UserRoleListDataRoleInfo::SetRoleId(const int64_t& _roleId)
{
    m_roleId = _roleId;
    m_roleIdHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::RoleIdHasBeenSet() const
{
    return m_roleIdHasBeenSet;
}

int64_t UserRoleListDataRoleInfo::GetProjectId() const
{
    return m_projectId;
}

void UserRoleListDataRoleInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UserRoleListDataRoleInfo::GetProjectName() const
{
    return m_projectName;
}

void UserRoleListDataRoleInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

int64_t UserRoleListDataRoleInfo::GetScopeType() const
{
    return m_scopeType;
}

void UserRoleListDataRoleInfo::SetScopeType(const int64_t& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

string UserRoleListDataRoleInfo::GetModuleCollection() const
{
    return m_moduleCollection;
}

void UserRoleListDataRoleInfo::SetModuleCollection(const string& _moduleCollection)
{
    m_moduleCollection = _moduleCollection;
    m_moduleCollectionHasBeenSet = true;
}

bool UserRoleListDataRoleInfo::ModuleCollectionHasBeenSet() const
{
    return m_moduleCollectionHasBeenSet;
}

