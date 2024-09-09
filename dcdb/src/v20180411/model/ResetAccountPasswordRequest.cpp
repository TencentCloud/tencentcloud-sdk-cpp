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

#include <tencentcloud/dcdb/v20180411/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

ResetAccountPasswordRequest::ResetAccountPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_encryptedPasswordHasBeenSet(false)
{
}

string ResetAccountPasswordRequest::ToJsonString() const
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

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetAccountPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResetAccountPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResetAccountPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ResetAccountPasswordRequest::GetUserName() const
{
    return m_userName;
}

void ResetAccountPasswordRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ResetAccountPasswordRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ResetAccountPasswordRequest::GetHost() const
{
    return m_host;
}

void ResetAccountPasswordRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ResetAccountPasswordRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string ResetAccountPasswordRequest::GetPassword() const
{
    return m_password;
}

void ResetAccountPasswordRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ResetAccountPasswordRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string ResetAccountPasswordRequest::GetEncryptedPassword() const
{
    return m_encryptedPassword;
}

void ResetAccountPasswordRequest::SetEncryptedPassword(const string& _encryptedPassword)
{
    m_encryptedPassword = _encryptedPassword;
    m_encryptedPasswordHasBeenSet = true;
}

bool ResetAccountPasswordRequest::EncryptedPasswordHasBeenSet() const
{
    return m_encryptedPasswordHasBeenSet;
}


