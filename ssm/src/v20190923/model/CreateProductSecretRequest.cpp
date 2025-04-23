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

#include <tencentcloud/ssm/v20190923/model/CreateProductSecretRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

CreateProductSecretRequest::CreateProductSecretRequest() :
    m_secretNameHasBeenSet(false),
    m_userNamePrefixHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_privilegesListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_rotationBeginTimeHasBeenSet(false),
    m_enableRotationHasBeenSet(false),
    m_rotationFrequencyHasBeenSet(false),
    m_kmsHsmClusterIdHasBeenSet(false)
{
}

string CreateProductSecretRequest::ToJsonString() const
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

    if (m_userNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userNamePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_privilegesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegesList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privilegesList.begin(); itr != m_privilegesList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_rotationBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationBeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rotationBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableRotationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRotation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRotation, allocator);
    }

    if (m_rotationFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationFrequency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rotationFrequency, allocator);
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


string CreateProductSecretRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateProductSecretRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateProductSecretRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string CreateProductSecretRequest::GetUserNamePrefix() const
{
    return m_userNamePrefix;
}

void CreateProductSecretRequest::SetUserNamePrefix(const string& _userNamePrefix)
{
    m_userNamePrefix = _userNamePrefix;
    m_userNamePrefixHasBeenSet = true;
}

bool CreateProductSecretRequest::UserNamePrefixHasBeenSet() const
{
    return m_userNamePrefixHasBeenSet;
}

string CreateProductSecretRequest::GetProductName() const
{
    return m_productName;
}

void CreateProductSecretRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CreateProductSecretRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CreateProductSecretRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateProductSecretRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateProductSecretRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

vector<string> CreateProductSecretRequest::GetDomains() const
{
    return m_domains;
}

void CreateProductSecretRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateProductSecretRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<ProductPrivilegeUnit> CreateProductSecretRequest::GetPrivilegesList() const
{
    return m_privilegesList;
}

void CreateProductSecretRequest::SetPrivilegesList(const vector<ProductPrivilegeUnit>& _privilegesList)
{
    m_privilegesList = _privilegesList;
    m_privilegesListHasBeenSet = true;
}

bool CreateProductSecretRequest::PrivilegesListHasBeenSet() const
{
    return m_privilegesListHasBeenSet;
}

string CreateProductSecretRequest::GetDescription() const
{
    return m_description;
}

void CreateProductSecretRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateProductSecretRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateProductSecretRequest::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

void CreateProductSecretRequest::SetKmsKeyId(const string& _kmsKeyId)
{
    m_kmsKeyId = _kmsKeyId;
    m_kmsKeyIdHasBeenSet = true;
}

bool CreateProductSecretRequest::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

vector<Tag> CreateProductSecretRequest::GetTags() const
{
    return m_tags;
}

void CreateProductSecretRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateProductSecretRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateProductSecretRequest::GetRotationBeginTime() const
{
    return m_rotationBeginTime;
}

void CreateProductSecretRequest::SetRotationBeginTime(const string& _rotationBeginTime)
{
    m_rotationBeginTime = _rotationBeginTime;
    m_rotationBeginTimeHasBeenSet = true;
}

bool CreateProductSecretRequest::RotationBeginTimeHasBeenSet() const
{
    return m_rotationBeginTimeHasBeenSet;
}

bool CreateProductSecretRequest::GetEnableRotation() const
{
    return m_enableRotation;
}

void CreateProductSecretRequest::SetEnableRotation(const bool& _enableRotation)
{
    m_enableRotation = _enableRotation;
    m_enableRotationHasBeenSet = true;
}

bool CreateProductSecretRequest::EnableRotationHasBeenSet() const
{
    return m_enableRotationHasBeenSet;
}

int64_t CreateProductSecretRequest::GetRotationFrequency() const
{
    return m_rotationFrequency;
}

void CreateProductSecretRequest::SetRotationFrequency(const int64_t& _rotationFrequency)
{
    m_rotationFrequency = _rotationFrequency;
    m_rotationFrequencyHasBeenSet = true;
}

bool CreateProductSecretRequest::RotationFrequencyHasBeenSet() const
{
    return m_rotationFrequencyHasBeenSet;
}

string CreateProductSecretRequest::GetKmsHsmClusterId() const
{
    return m_kmsHsmClusterId;
}

void CreateProductSecretRequest::SetKmsHsmClusterId(const string& _kmsHsmClusterId)
{
    m_kmsHsmClusterId = _kmsHsmClusterId;
    m_kmsHsmClusterIdHasBeenSet = true;
}

bool CreateProductSecretRequest::KmsHsmClusterIdHasBeenSet() const
{
    return m_kmsHsmClusterIdHasBeenSet;
}


