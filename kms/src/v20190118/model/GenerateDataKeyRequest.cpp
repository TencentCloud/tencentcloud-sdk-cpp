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

#include <tencentcloud/kms/v20190118/model/GenerateDataKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

GenerateDataKeyRequest::GenerateDataKeyRequest() :
    m_keyIdHasBeenSet(false),
    m_keySpecHasBeenSet(false),
    m_numberOfBytesHasBeenSet(false),
    m_encryptionContextHasBeenSet(false),
    m_encryptionPublicKeyHasBeenSet(false),
    m_encryptionAlgorithmHasBeenSet(false),
    m_isHostedByKmsHasBeenSet(false),
    m_dataKeyNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false)
{
}

string GenerateDataKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeySpec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keySpec.c_str(), allocator).Move(), allocator);
    }

    if (m_numberOfBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumberOfBytes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numberOfBytes, allocator);
    }

    if (m_encryptionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionPublicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionPublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionPublicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptionAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_isHostedByKmsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHostedByKms";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHostedByKms, allocator);
    }

    if (m_dataKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKeyName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateDataKeyRequest::GetKeyId() const
{
    return m_keyId;
}

void GenerateDataKeyRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool GenerateDataKeyRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string GenerateDataKeyRequest::GetKeySpec() const
{
    return m_keySpec;
}

void GenerateDataKeyRequest::SetKeySpec(const string& _keySpec)
{
    m_keySpec = _keySpec;
    m_keySpecHasBeenSet = true;
}

bool GenerateDataKeyRequest::KeySpecHasBeenSet() const
{
    return m_keySpecHasBeenSet;
}

uint64_t GenerateDataKeyRequest::GetNumberOfBytes() const
{
    return m_numberOfBytes;
}

void GenerateDataKeyRequest::SetNumberOfBytes(const uint64_t& _numberOfBytes)
{
    m_numberOfBytes = _numberOfBytes;
    m_numberOfBytesHasBeenSet = true;
}

bool GenerateDataKeyRequest::NumberOfBytesHasBeenSet() const
{
    return m_numberOfBytesHasBeenSet;
}

string GenerateDataKeyRequest::GetEncryptionContext() const
{
    return m_encryptionContext;
}

void GenerateDataKeyRequest::SetEncryptionContext(const string& _encryptionContext)
{
    m_encryptionContext = _encryptionContext;
    m_encryptionContextHasBeenSet = true;
}

bool GenerateDataKeyRequest::EncryptionContextHasBeenSet() const
{
    return m_encryptionContextHasBeenSet;
}

string GenerateDataKeyRequest::GetEncryptionPublicKey() const
{
    return m_encryptionPublicKey;
}

void GenerateDataKeyRequest::SetEncryptionPublicKey(const string& _encryptionPublicKey)
{
    m_encryptionPublicKey = _encryptionPublicKey;
    m_encryptionPublicKeyHasBeenSet = true;
}

bool GenerateDataKeyRequest::EncryptionPublicKeyHasBeenSet() const
{
    return m_encryptionPublicKeyHasBeenSet;
}

string GenerateDataKeyRequest::GetEncryptionAlgorithm() const
{
    return m_encryptionAlgorithm;
}

void GenerateDataKeyRequest::SetEncryptionAlgorithm(const string& _encryptionAlgorithm)
{
    m_encryptionAlgorithm = _encryptionAlgorithm;
    m_encryptionAlgorithmHasBeenSet = true;
}

bool GenerateDataKeyRequest::EncryptionAlgorithmHasBeenSet() const
{
    return m_encryptionAlgorithmHasBeenSet;
}

uint64_t GenerateDataKeyRequest::GetIsHostedByKms() const
{
    return m_isHostedByKms;
}

void GenerateDataKeyRequest::SetIsHostedByKms(const uint64_t& _isHostedByKms)
{
    m_isHostedByKms = _isHostedByKms;
    m_isHostedByKmsHasBeenSet = true;
}

bool GenerateDataKeyRequest::IsHostedByKmsHasBeenSet() const
{
    return m_isHostedByKmsHasBeenSet;
}

string GenerateDataKeyRequest::GetDataKeyName() const
{
    return m_dataKeyName;
}

void GenerateDataKeyRequest::SetDataKeyName(const string& _dataKeyName)
{
    m_dataKeyName = _dataKeyName;
    m_dataKeyNameHasBeenSet = true;
}

bool GenerateDataKeyRequest::DataKeyNameHasBeenSet() const
{
    return m_dataKeyNameHasBeenSet;
}

string GenerateDataKeyRequest::GetDescription() const
{
    return m_description;
}

void GenerateDataKeyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GenerateDataKeyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GenerateDataKeyRequest::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void GenerateDataKeyRequest::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool GenerateDataKeyRequest::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}


