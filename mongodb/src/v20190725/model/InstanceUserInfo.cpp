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

#include <tencentcloud/mongodb/v20190725/model/InstanceUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

InstanceUserInfo::InstanceUserInfo() :
    m_userNameHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_authRoleHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_consolePassUpdateTimeHasBeenSet(false),
    m_enablePasswordRotationHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome InstanceUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Database") && !value["Database"].IsNull())
    {
        if (!value["Database"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.Database` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_database = string(value["Database"].GetString());
        m_databaseHasBeenSet = true;
    }

    if (value.HasMember("Roles") && !value["Roles"].IsNull())
    {
        if (!value["Roles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.Roles` is not array type"));

        const rapidjson::Value &tmpValue = value["Roles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Role item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roles.push_back(item);
        }
        m_rolesHasBeenSet = true;
    }

    if (value.HasMember("AuthRole") && !value["AuthRole"].IsNull())
    {
        if (!value["AuthRole"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.AuthRole` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthRole"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Auth item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_authRole.push_back(item);
        }
        m_authRoleHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConsolePassUpdateTime") && !value["ConsolePassUpdateTime"].IsNull())
    {
        if (!value["ConsolePassUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.ConsolePassUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consolePassUpdateTime = string(value["ConsolePassUpdateTime"].GetString());
        m_consolePassUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("EnablePasswordRotation") && !value["EnablePasswordRotation"].IsNull())
    {
        if (!value["EnablePasswordRotation"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.EnablePasswordRotation` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enablePasswordRotation = value["EnablePasswordRotation"].GetInt64();
        m_enablePasswordRotationHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceUserInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authRole.begin(); itr != m_authRole.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consolePassUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsolePassUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consolePassUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePasswordRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePasswordRotation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enablePasswordRotation, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string InstanceUserInfo::GetUserName() const
{
    return m_userName;
}

void InstanceUserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool InstanceUserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string InstanceUserInfo::GetDatabase() const
{
    return m_database;
}

void InstanceUserInfo::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool InstanceUserInfo::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<Role> InstanceUserInfo::GetRoles() const
{
    return m_roles;
}

void InstanceUserInfo::SetRoles(const vector<Role>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool InstanceUserInfo::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

vector<Auth> InstanceUserInfo::GetAuthRole() const
{
    return m_authRole;
}

void InstanceUserInfo::SetAuthRole(const vector<Auth>& _authRole)
{
    m_authRole = _authRole;
    m_authRoleHasBeenSet = true;
}

bool InstanceUserInfo::AuthRoleHasBeenSet() const
{
    return m_authRoleHasBeenSet;
}

string InstanceUserInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceUserInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceUserInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceUserInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void InstanceUserInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InstanceUserInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InstanceUserInfo::GetConsolePassUpdateTime() const
{
    return m_consolePassUpdateTime;
}

void InstanceUserInfo::SetConsolePassUpdateTime(const string& _consolePassUpdateTime)
{
    m_consolePassUpdateTime = _consolePassUpdateTime;
    m_consolePassUpdateTimeHasBeenSet = true;
}

bool InstanceUserInfo::ConsolePassUpdateTimeHasBeenSet() const
{
    return m_consolePassUpdateTimeHasBeenSet;
}

int64_t InstanceUserInfo::GetEnablePasswordRotation() const
{
    return m_enablePasswordRotation;
}

void InstanceUserInfo::SetEnablePasswordRotation(const int64_t& _enablePasswordRotation)
{
    m_enablePasswordRotation = _enablePasswordRotation;
    m_enablePasswordRotationHasBeenSet = true;
}

bool InstanceUserInfo::EnablePasswordRotationHasBeenSet() const
{
    return m_enablePasswordRotationHasBeenSet;
}

string InstanceUserInfo::GetDescription() const
{
    return m_description;
}

void InstanceUserInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InstanceUserInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

