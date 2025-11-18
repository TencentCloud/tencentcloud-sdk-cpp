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

#include <tencentcloud/postgres/v20170312/model/CloseAccountCAMRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

CloseAccountCAMRequest::CloseAccountCAMRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_passwordEncryptHasBeenSet(false)
{
}

string CloseAccountCAMRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_passwordEncryptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordEncrypt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_passwordEncrypt, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseAccountCAMRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CloseAccountCAMRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CloseAccountCAMRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string CloseAccountCAMRequest::GetUserName() const
{
    return m_userName;
}

void CloseAccountCAMRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CloseAccountCAMRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CloseAccountCAMRequest::GetPassword() const
{
    return m_password;
}

void CloseAccountCAMRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CloseAccountCAMRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool CloseAccountCAMRequest::GetPasswordEncrypt() const
{
    return m_passwordEncrypt;
}

void CloseAccountCAMRequest::SetPasswordEncrypt(const bool& _passwordEncrypt)
{
    m_passwordEncrypt = _passwordEncrypt;
    m_passwordEncryptHasBeenSet = true;
}

bool CloseAccountCAMRequest::PasswordEncryptHasBeenSet() const
{
    return m_passwordEncryptHasBeenSet;
}


