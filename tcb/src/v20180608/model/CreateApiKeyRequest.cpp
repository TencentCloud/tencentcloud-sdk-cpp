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

#include <tencentcloud/tcb/v20180608/model/CreateApiKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateApiKeyRequest::CreateApiKeyRequest() :
    m_envIdHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_expireInHasBeenSet(false)
{
}

string CreateApiKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiKeyRequest::GetEnvId() const
{
    return m_envId;
}

void CreateApiKeyRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateApiKeyRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateApiKeyRequest::GetKeyType() const
{
    return m_keyType;
}

void CreateApiKeyRequest::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool CreateApiKeyRequest::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string CreateApiKeyRequest::GetKeyName() const
{
    return m_keyName;
}

void CreateApiKeyRequest::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool CreateApiKeyRequest::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

int64_t CreateApiKeyRequest::GetExpireIn() const
{
    return m_expireIn;
}

void CreateApiKeyRequest::SetExpireIn(const int64_t& _expireIn)
{
    m_expireIn = _expireIn;
    m_expireInHasBeenSet = true;
}

bool CreateApiKeyRequest::ExpireInHasBeenSet() const
{
    return m_expireInHasBeenSet;
}


