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

#include <tencentcloud/ssm/v20190923/model/CreateSSHKeyPairSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

CreateSSHKeyPairSecretRequest::CreateSSHKeyPairSecretRequest() :
    m_secretNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sSHKeyNameHasBeenSet(false),
    m_kmsHsmClusterIdHasBeenSet(false)
{
}

string CreateSSHKeyPairSecretRequest::ToJsonString() const
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_sSHKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSHKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sSHKeyName.c_str(), allocator).Move(), allocator);
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


string CreateSSHKeyPairSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateSSHKeyPairSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

int64_t CreateSSHKeyPairSecretRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSSHKeyPairSecretRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateSSHKeyPairSecretRequest::GetDescription() const
{
    return m_description;
}

void CreateSSHKeyPairSecretRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateSSHKeyPairSecretRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void CreateSSHKeyPairSecretRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

vector<Tag> CreateSSHKeyPairSecretRequest::GetTags() const
{
    return m_tags;
}

void CreateSSHKeyPairSecretRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateSSHKeyPairSecretRequest::GetSSHKeyName() const
{
    return m_sSHKeyName;
}

void CreateSSHKeyPairSecretRequest::SetSSHKeyName(const string& _sSHKeyName)
{
    m_sSHKeyName = _sSHKeyName;
    m_sSHKeyNameHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::SSHKeyNameHasBeenSet() const
{
    return m_sSHKeyNameHasBeenSet;
}

string CreateSSHKeyPairSecretRequest::GetKmsHsmClusterId() const
{
    return m_kmsHsmClusterId;
}

void CreateSSHKeyPairSecretRequest::SetKmsHsmClusterId(const string& _kmsHsmClusterId)
{
    m_kmsHsmClusterId = _kmsHsmClusterId;
    m_kmsHsmClusterIdHasBeenSet = true;
}

bool CreateSSHKeyPairSecretRequest::KmsHsmClusterIdHasBeenSet() const
{
    return m_kmsHsmClusterIdHasBeenSet;
}


