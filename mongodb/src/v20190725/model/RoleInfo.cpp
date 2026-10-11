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

#include <tencentcloud/mongodb/v20190725/model/RoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

RoleInfo::RoleInfo() :
    m_roleNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_roleTypeHasBeenSet(false),
    m_privilegesHasBeenSet(false),
    m_inheritedRolesHasBeenSet(false)
{
}

CoreInternalOutcome RoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("RoleType") && !value["RoleType"].IsNull())
    {
        if (!value["RoleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleInfo.RoleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleType = string(value["RoleType"].GetString());
        m_roleTypeHasBeenSet = true;
    }

    if (value.HasMember("Privileges") && !value["Privileges"].IsNull())
    {
        if (!value["Privileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleInfo.Privileges` is not array type"));

        const rapidjson::Value &tmpValue = value["Privileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RolePrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privileges.push_back(item);
        }
        m_privilegesHasBeenSet = true;
    }

    if (value.HasMember("InheritedRoles") && !value["InheritedRoles"].IsNull())
    {
        if (!value["InheritedRoles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoleInfo.InheritedRoles` is not array type"));

        const rapidjson::Value &tmpValue = value["InheritedRoles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Role item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inheritedRoles.push_back(item);
        }
        m_inheritedRolesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_roleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleType.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privileges.begin(); itr != m_privileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_inheritedRolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedRoles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inheritedRoles.begin(); itr != m_inheritedRoles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RoleInfo::GetRoleName() const
{
    return m_roleName;
}

void RoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RoleInfo::GetDatabase() const
{
    return m_database;
}

void RoleInfo::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool RoleInfo::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

string RoleInfo::GetRoleType() const
{
    return m_roleType;
}

void RoleInfo::SetRoleType(const string& _roleType)
{
    m_roleType = _roleType;
    m_roleTypeHasBeenSet = true;
}

bool RoleInfo::RoleTypeHasBeenSet() const
{
    return m_roleTypeHasBeenSet;
}

vector<RolePrivilege> RoleInfo::GetPrivileges() const
{
    return m_privileges;
}

void RoleInfo::SetPrivileges(const vector<RolePrivilege>& _privileges)
{
    m_privileges = _privileges;
    m_privilegesHasBeenSet = true;
}

bool RoleInfo::PrivilegesHasBeenSet() const
{
    return m_privilegesHasBeenSet;
}

vector<Role> RoleInfo::GetInheritedRoles() const
{
    return m_inheritedRoles;
}

void RoleInfo::SetInheritedRoles(const vector<Role>& _inheritedRoles)
{
    m_inheritedRoles = _inheritedRoles;
    m_inheritedRolesHasBeenSet = true;
}

bool RoleInfo::InheritedRolesHasBeenSet() const
{
    return m_inheritedRolesHasBeenSet;
}

