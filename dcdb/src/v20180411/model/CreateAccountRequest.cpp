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

#include <tencentcloud/dcdb/v20180411/model/CreateAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

CreateAccountRequest::CreateAccountRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_delayThreshHasBeenSet(false),
    m_slaveConstHasBeenSet(false),
    m_maxUserConnectionsHasBeenSet(false),
    m_encryptedPasswordHasBeenSet(false)
{
}

string CreateAccountRequest::ToJsonString() const
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

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_delayThreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayThresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayThresh, allocator);
    }

    if (m_slaveConstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveConst";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_slaveConst, allocator);
    }

    if (m_maxUserConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxUserConnections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxUserConnections, allocator);
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


string CreateAccountRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAccountRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAccountRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAccountRequest::GetUserName() const
{
    return m_userName;
}

void CreateAccountRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateAccountRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateAccountRequest::GetHost() const
{
    return m_host;
}

void CreateAccountRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateAccountRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CreateAccountRequest::GetPassword() const
{
    return m_password;
}

void CreateAccountRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateAccountRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t CreateAccountRequest::GetReadOnly() const
{
    return m_readOnly;
}

void CreateAccountRequest::SetReadOnly(const int64_t& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool CreateAccountRequest::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string CreateAccountRequest::GetDescription() const
{
    return m_description;
}

void CreateAccountRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAccountRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateAccountRequest::GetDelayThresh() const
{
    return m_delayThresh;
}

void CreateAccountRequest::SetDelayThresh(const int64_t& _delayThresh)
{
    m_delayThresh = _delayThresh;
    m_delayThreshHasBeenSet = true;
}

bool CreateAccountRequest::DelayThreshHasBeenSet() const
{
    return m_delayThreshHasBeenSet;
}

int64_t CreateAccountRequest::GetSlaveConst() const
{
    return m_slaveConst;
}

void CreateAccountRequest::SetSlaveConst(const int64_t& _slaveConst)
{
    m_slaveConst = _slaveConst;
    m_slaveConstHasBeenSet = true;
}

bool CreateAccountRequest::SlaveConstHasBeenSet() const
{
    return m_slaveConstHasBeenSet;
}

uint64_t CreateAccountRequest::GetMaxUserConnections() const
{
    return m_maxUserConnections;
}

void CreateAccountRequest::SetMaxUserConnections(const uint64_t& _maxUserConnections)
{
    m_maxUserConnections = _maxUserConnections;
    m_maxUserConnectionsHasBeenSet = true;
}

bool CreateAccountRequest::MaxUserConnectionsHasBeenSet() const
{
    return m_maxUserConnectionsHasBeenSet;
}

string CreateAccountRequest::GetEncryptedPassword() const
{
    return m_encryptedPassword;
}

void CreateAccountRequest::SetEncryptedPassword(const string& _encryptedPassword)
{
    m_encryptedPassword = _encryptedPassword;
    m_encryptedPasswordHasBeenSet = true;
}

bool CreateAccountRequest::EncryptedPasswordHasBeenSet() const
{
    return m_encryptedPasswordHasBeenSet;
}


