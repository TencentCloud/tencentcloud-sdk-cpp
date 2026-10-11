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

#include <tencentcloud/mongodb/v20190725/model/CreateInstanceUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateInstanceUserRequest::CreateInstanceUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_encryptedPasswordHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_authRoleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enablePasswordRotationHasBeenSet(false)
{
}

string CreateInstanceUserRequest::ToJsonString() const
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptedPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Database";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_database.c_str(), allocator).Move(), allocator);
    }

    if (m_rolesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roles.begin(); itr != m_roles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_authRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRole";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_authRole.begin(); itr != m_authRole.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enablePasswordRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePasswordRotation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enablePasswordRotation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateInstanceUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateInstanceUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateInstanceUserRequest::GetUserName() const
{
    return m_userName;
}

void CreateInstanceUserRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateInstanceUserRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateInstanceUserRequest::GetPassword() const
{
    return m_password;
}

void CreateInstanceUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateInstanceUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateInstanceUserRequest::GetEncryptedPassword() const
{
    return m_encryptedPassword;
}

void CreateInstanceUserRequest::SetEncryptedPassword(const string& _encryptedPassword)
{
    m_encryptedPassword = _encryptedPassword;
    m_encryptedPasswordHasBeenSet = true;
}

bool CreateInstanceUserRequest::EncryptedPasswordHasBeenSet() const
{
    return m_encryptedPasswordHasBeenSet;
}

string CreateInstanceUserRequest::GetDatabase() const
{
    return m_database;
}

void CreateInstanceUserRequest::SetDatabase(const string& _database)
{
    m_database = _database;
    m_databaseHasBeenSet = true;
}

bool CreateInstanceUserRequest::DatabaseHasBeenSet() const
{
    return m_databaseHasBeenSet;
}

vector<Role> CreateInstanceUserRequest::GetRoles() const
{
    return m_roles;
}

void CreateInstanceUserRequest::SetRoles(const vector<Role>& _roles)
{
    m_roles = _roles;
    m_rolesHasBeenSet = true;
}

bool CreateInstanceUserRequest::RolesHasBeenSet() const
{
    return m_rolesHasBeenSet;
}

vector<Auth> CreateInstanceUserRequest::GetAuthRole() const
{
    return m_authRole;
}

void CreateInstanceUserRequest::SetAuthRole(const vector<Auth>& _authRole)
{
    m_authRole = _authRole;
    m_authRoleHasBeenSet = true;
}

bool CreateInstanceUserRequest::AuthRoleHasBeenSet() const
{
    return m_authRoleHasBeenSet;
}

string CreateInstanceUserRequest::GetDescription() const
{
    return m_description;
}

void CreateInstanceUserRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateInstanceUserRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateInstanceUserRequest::GetEnablePasswordRotation() const
{
    return m_enablePasswordRotation;
}

void CreateInstanceUserRequest::SetEnablePasswordRotation(const int64_t& _enablePasswordRotation)
{
    m_enablePasswordRotation = _enablePasswordRotation;
    m_enablePasswordRotationHasBeenSet = true;
}

bool CreateInstanceUserRequest::EnablePasswordRotationHasBeenSet() const
{
    return m_enablePasswordRotationHasBeenSet;
}


