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

#include <tencentcloud/ssm/v20190923/model/CreateSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

CreateSecretRequest::CreateSecretRequest() :
    m_secretNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_secretBinaryHasBeenSet(false),
    m_secretStringHasBeenSet(false),
    m_additionalConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_kmsHsmClusterIdHasBeenSet(false)
{
}

string CreateSecretRequest::ToJsonString() const
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

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secretType, allocator);
    }

    if (m_secretBinaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretBinary";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretBinary.c_str(), allocator).Move(), allocator);
    }

    if (m_secretStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretString.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalConfig.c_str(), allocator).Move(), allocator);
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

    if (m_kmsHsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsHsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kmsHsmClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string CreateSecretRequest::GetVersionId() const
{
    return m_versionId;
}

void CreateSecretRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool CreateSecretRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string CreateSecretRequest::GetDescription() const
{
    return m_description;
}

void CreateSecretRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateSecretRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateSecretRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void CreateSecretRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool CreateSecretRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

uint64_t CreateSecretRequest::GetSecretType() const
{
    return m_secretType;
}

void CreateSecretRequest::SetSecretType(const uint64_t& _secretType)
{
    m_secretType = _secretType;
    m_secretTypeHasBeenSet = true;
}

bool CreateSecretRequest::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string CreateSecretRequest::GetSecretBinary() const
{
    return m_secretBinary;
}

void CreateSecretRequest::SetSecretBinary(const string& _secretBinary)
{
    m_secretBinary = _secretBinary;
    m_secretBinaryHasBeenSet = true;
}

bool CreateSecretRequest::SecretBinaryHasBeenSet() const
{
    return m_secretBinaryHasBeenSet;
}

string CreateSecretRequest::GetSecretString() const
{
    return m_secretString;
}

void CreateSecretRequest::SetSecretString(const string& _secretString)
{
    m_secretString = _secretString;
    m_secretStringHasBeenSet = true;
}

bool CreateSecretRequest::SecretStringHasBeenSet() const
{
    return m_secretStringHasBeenSet;
}

string CreateSecretRequest::GetAdditionalConfig() const
{
    return m_additionalConfig;
}

void CreateSecretRequest::SetAdditionalConfig(const string& _additionalConfig)
{
    m_additionalConfig = _additionalConfig;
    m_additionalConfigHasBeenSet = true;
}

bool CreateSecretRequest::AdditionalConfigHasBeenSet() const
{
    return m_additionalConfigHasBeenSet;
}

vector<Tag> CreateSecretRequest::GetTags() const
{
    return m_tags;
}

void CreateSecretRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSecretRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateSecretRequest::GetKmsHsmClusterId() const
{
    return m_kmsHsmClusterId;
}

void CreateSecretRequest::SetKmsHsmClusterId(const string& _kmsHsmClusterId)
{
    m_kmsHsmClusterId = _kmsHsmClusterId;
    m_kmsHsmClusterIdHasBeenSet = true;
}

bool CreateSecretRequest::KmsHsmClusterIdHasBeenSet() const
{
    return m_kmsHsmClusterIdHasBeenSet;
}


