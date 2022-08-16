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

#include <tencentcloud/es/v20180416/model/UpdateIndexRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateIndexRequest::UpdateIndexRequest() :
    m_instanceIdHasBeenSet(false),
    m_indexTypeHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_updateMetaJsonHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_rolloverBackingIndexHasBeenSet(false)
{
}

string UpdateIndexRequest::ToJsonString() const
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

    if (m_indexTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexType.c_str(), allocator).Move(), allocator);
    }

    if (m_indexNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_indexName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateMetaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateMetaJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_updateMetaJson.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_rolloverBackingIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RolloverBackingIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rolloverBackingIndex, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateIndexRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateIndexRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateIndexRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateIndexRequest::GetIndexType() const
{
    return m_indexType;
}

void UpdateIndexRequest::SetIndexType(const string& _indexType)
{
    m_indexType = _indexType;
    m_indexTypeHasBeenSet = true;
}

bool UpdateIndexRequest::IndexTypeHasBeenSet() const
{
    return m_indexTypeHasBeenSet;
}

string UpdateIndexRequest::GetIndexName() const
{
    return m_indexName;
}

void UpdateIndexRequest::SetIndexName(const string& _indexName)
{
    m_indexName = _indexName;
    m_indexNameHasBeenSet = true;
}

bool UpdateIndexRequest::IndexNameHasBeenSet() const
{
    return m_indexNameHasBeenSet;
}

string UpdateIndexRequest::GetUpdateMetaJson() const
{
    return m_updateMetaJson;
}

void UpdateIndexRequest::SetUpdateMetaJson(const string& _updateMetaJson)
{
    m_updateMetaJson = _updateMetaJson;
    m_updateMetaJsonHasBeenSet = true;
}

bool UpdateIndexRequest::UpdateMetaJsonHasBeenSet() const
{
    return m_updateMetaJsonHasBeenSet;
}

string UpdateIndexRequest::GetUsername() const
{
    return m_username;
}

void UpdateIndexRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool UpdateIndexRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string UpdateIndexRequest::GetPassword() const
{
    return m_password;
}

void UpdateIndexRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpdateIndexRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

bool UpdateIndexRequest::GetRolloverBackingIndex() const
{
    return m_rolloverBackingIndex;
}

void UpdateIndexRequest::SetRolloverBackingIndex(const bool& _rolloverBackingIndex)
{
    m_rolloverBackingIndex = _rolloverBackingIndex;
    m_rolloverBackingIndexHasBeenSet = true;
}

bool UpdateIndexRequest::RolloverBackingIndexHasBeenSet() const
{
    return m_rolloverBackingIndexHasBeenSet;
}


