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

#include <tencentcloud/cdb/v20170320/model/DeleteRotationPasswordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DeleteRotationPasswordRequest::DeleteRotationPasswordRequest() :
    m_instanceIdHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_encryptMethodHasBeenSet(false)
{
}

string DeleteRotationPasswordRequest::ToJsonString() const
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

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
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

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteRotationPasswordRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteRotationPasswordRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteRotationPasswordRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteRotationPasswordRequest::GetUser() const
{
    return m_user;
}

void DeleteRotationPasswordRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DeleteRotationPasswordRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DeleteRotationPasswordRequest::GetHost() const
{
    return m_host;
}

void DeleteRotationPasswordRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DeleteRotationPasswordRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DeleteRotationPasswordRequest::GetPassword() const
{
    return m_password;
}

void DeleteRotationPasswordRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool DeleteRotationPasswordRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string DeleteRotationPasswordRequest::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void DeleteRotationPasswordRequest::SetEncryptMethod(const string& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool DeleteRotationPasswordRequest::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}


