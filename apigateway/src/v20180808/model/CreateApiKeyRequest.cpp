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

#include <tencentcloud/apigateway/v20180808/model/CreateApiKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace rapidjson;
using namespace std;

CreateApiKeyRequest::CreateApiKeyRequest() :
    m_secretNameHasBeenSet(false),
    m_accessKeyTypeHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_accessKeySecretHasBeenSet(false)
{
}

string CreateApiKeyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secretNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessKeyType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeySecretHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessKeySecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessKeySecret.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApiKeyRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateApiKeyRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateApiKeyRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string CreateApiKeyRequest::GetAccessKeyType() const
{
    return m_accessKeyType;
}

void CreateApiKeyRequest::SetAccessKeyType(const string& _accessKeyType)
{
    m_accessKeyType = _accessKeyType;
    m_accessKeyTypeHasBeenSet = true;
}

bool CreateApiKeyRequest::AccessKeyTypeHasBeenSet() const
{
    return m_accessKeyTypeHasBeenSet;
}

string CreateApiKeyRequest::GetAccessKeyId() const
{
    return m_accessKeyId;
}

void CreateApiKeyRequest::SetAccessKeyId(const string& _accessKeyId)
{
    m_accessKeyId = _accessKeyId;
    m_accessKeyIdHasBeenSet = true;
}

bool CreateApiKeyRequest::AccessKeyIdHasBeenSet() const
{
    return m_accessKeyIdHasBeenSet;
}

string CreateApiKeyRequest::GetAccessKeySecret() const
{
    return m_accessKeySecret;
}

void CreateApiKeyRequest::SetAccessKeySecret(const string& _accessKeySecret)
{
    m_accessKeySecret = _accessKeySecret;
    m_accessKeySecretHasBeenSet = true;
}

bool CreateApiKeyRequest::AccessKeySecretHasBeenSet() const
{
    return m_accessKeySecretHasBeenSet;
}


