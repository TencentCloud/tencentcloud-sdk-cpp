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

#include <tencentcloud/cfs/v20190719/model/ModifyDataFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

ModifyDataFlowRequest::ModifyDataFlowRequest() :
    m_dataFlowIdHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_dataFlowNameHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_userKafkaTopicHasBeenSet(false),
    m_serverAddrHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_autoRefreshHasBeenSet(false)
{
}

string ModifyDataFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_userKafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserKafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userKafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverAddr.c_str(), allocator).Move(), allocator);
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

    if (m_autoRefreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRefresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRefresh, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDataFlowRequest::GetDataFlowId() const
{
    return m_dataFlowId;
}

void ModifyDataFlowRequest::SetDataFlowId(const string& _dataFlowId)
{
    m_dataFlowId = _dataFlowId;
    m_dataFlowIdHasBeenSet = true;
}

bool ModifyDataFlowRequest::DataFlowIdHasBeenSet() const
{
    return m_dataFlowIdHasBeenSet;
}

string ModifyDataFlowRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void ModifyDataFlowRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool ModifyDataFlowRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string ModifyDataFlowRequest::GetDataFlowName() const
{
    return m_dataFlowName;
}

void ModifyDataFlowRequest::SetDataFlowName(const string& _dataFlowName)
{
    m_dataFlowName = _dataFlowName;
    m_dataFlowNameHasBeenSet = true;
}

bool ModifyDataFlowRequest::DataFlowNameHasBeenSet() const
{
    return m_dataFlowNameHasBeenSet;
}

string ModifyDataFlowRequest::GetSecretId() const
{
    return m_secretId;
}

void ModifyDataFlowRequest::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool ModifyDataFlowRequest::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string ModifyDataFlowRequest::GetSecretKey() const
{
    return m_secretKey;
}

void ModifyDataFlowRequest::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ModifyDataFlowRequest::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string ModifyDataFlowRequest::GetUserKafkaTopic() const
{
    return m_userKafkaTopic;
}

void ModifyDataFlowRequest::SetUserKafkaTopic(const string& _userKafkaTopic)
{
    m_userKafkaTopic = _userKafkaTopic;
    m_userKafkaTopicHasBeenSet = true;
}

bool ModifyDataFlowRequest::UserKafkaTopicHasBeenSet() const
{
    return m_userKafkaTopicHasBeenSet;
}

string ModifyDataFlowRequest::GetServerAddr() const
{
    return m_serverAddr;
}

void ModifyDataFlowRequest::SetServerAddr(const string& _serverAddr)
{
    m_serverAddr = _serverAddr;
    m_serverAddrHasBeenSet = true;
}

bool ModifyDataFlowRequest::ServerAddrHasBeenSet() const
{
    return m_serverAddrHasBeenSet;
}

string ModifyDataFlowRequest::GetUserName() const
{
    return m_userName;
}

void ModifyDataFlowRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyDataFlowRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ModifyDataFlowRequest::GetPassword() const
{
    return m_password;
}

void ModifyDataFlowRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyDataFlowRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t ModifyDataFlowRequest::GetAutoRefresh() const
{
    return m_autoRefresh;
}

void ModifyDataFlowRequest::SetAutoRefresh(const uint64_t& _autoRefresh)
{
    m_autoRefresh = _autoRefresh;
    m_autoRefreshHasBeenSet = true;
}

bool ModifyDataFlowRequest::AutoRefreshHasBeenSet() const
{
    return m_autoRefreshHasBeenSet;
}


