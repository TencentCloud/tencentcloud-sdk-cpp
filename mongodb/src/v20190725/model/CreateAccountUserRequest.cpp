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

#include <tencentcloud/mongodb/v20190725/model/CreateAccountUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateAccountUserRequest::CreateAccountUserRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_mongoUserPasswordHasBeenSet(false),
    m_userDescHasBeenSet(false),
    m_authRoleHasBeenSet(false)
{
}

string CreateAccountUserRequest::ToJsonString() const
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

    if (m_mongoUserPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoUserPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoUserPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_userDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDesc.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAccountUserRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAccountUserRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAccountUserRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAccountUserRequest::GetUserName() const
{
    return m_userName;
}

void CreateAccountUserRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateAccountUserRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateAccountUserRequest::GetPassword() const
{
    return m_password;
}

void CreateAccountUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateAccountUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateAccountUserRequest::GetMongoUserPassword() const
{
    return m_mongoUserPassword;
}

void CreateAccountUserRequest::SetMongoUserPassword(const string& _mongoUserPassword)
{
    m_mongoUserPassword = _mongoUserPassword;
    m_mongoUserPasswordHasBeenSet = true;
}

bool CreateAccountUserRequest::MongoUserPasswordHasBeenSet() const
{
    return m_mongoUserPasswordHasBeenSet;
}

string CreateAccountUserRequest::GetUserDesc() const
{
    return m_userDesc;
}

void CreateAccountUserRequest::SetUserDesc(const string& _userDesc)
{
    m_userDesc = _userDesc;
    m_userDescHasBeenSet = true;
}

bool CreateAccountUserRequest::UserDescHasBeenSet() const
{
    return m_userDescHasBeenSet;
}

vector<Auth> CreateAccountUserRequest::GetAuthRole() const
{
    return m_authRole;
}

void CreateAccountUserRequest::SetAuthRole(const vector<Auth>& _authRole)
{
    m_authRole = _authRole;
    m_authRoleHasBeenSet = true;
}

bool CreateAccountUserRequest::AuthRoleHasBeenSet() const
{
    return m_authRoleHasBeenSet;
}


