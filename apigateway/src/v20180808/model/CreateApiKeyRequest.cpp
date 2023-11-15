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
using namespace std;

CreateApiKeyRequest::CreateApiKeyRequest() :
    m_secretNameHasBeenSet(false),
    m_accessKeyTypeHasBeenSet(false),
    m_accessKeyIdHasBeenSet(false),
    m_accessKeySecretHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateApiKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKeyType.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeySecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeySecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKeySecret.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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

vector<Tag> CreateApiKeyRequest::GetTags() const
{
    return m_tags;
}

void CreateApiKeyRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateApiKeyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


