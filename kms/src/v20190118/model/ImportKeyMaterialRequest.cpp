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

#include <tencentcloud/kms/v20190118/model/ImportKeyMaterialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ImportKeyMaterialRequest::ImportKeyMaterialRequest() :
    m_encryptedKeyMaterialHasBeenSet(false),
    m_importTokenHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_validToHasBeenSet(false)
{
}

string ImportKeyMaterialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_encryptedKeyMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptedKeyMaterial";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptedKeyMaterial.c_str(), allocator).Move(), allocator);
    }

    if (m_importTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_importToken.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_validToHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidTo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validTo, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportKeyMaterialRequest::GetEncryptedKeyMaterial() const
{
    return m_encryptedKeyMaterial;
}

void ImportKeyMaterialRequest::SetEncryptedKeyMaterial(const string& _encryptedKeyMaterial)
{
    m_encryptedKeyMaterial = _encryptedKeyMaterial;
    m_encryptedKeyMaterialHasBeenSet = true;
}

bool ImportKeyMaterialRequest::EncryptedKeyMaterialHasBeenSet() const
{
    return m_encryptedKeyMaterialHasBeenSet;
}

string ImportKeyMaterialRequest::GetImportToken() const
{
    return m_importToken;
}

void ImportKeyMaterialRequest::SetImportToken(const string& _importToken)
{
    m_importToken = _importToken;
    m_importTokenHasBeenSet = true;
}

bool ImportKeyMaterialRequest::ImportTokenHasBeenSet() const
{
    return m_importTokenHasBeenSet;
}

string ImportKeyMaterialRequest::GetKeyId() const
{
    return m_keyId;
}

void ImportKeyMaterialRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ImportKeyMaterialRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

uint64_t ImportKeyMaterialRequest::GetValidTo() const
{
    return m_validTo;
}

void ImportKeyMaterialRequest::SetValidTo(const uint64_t& _validTo)
{
    m_validTo = _validTo;
    m_validToHasBeenSet = true;
}

bool ImportKeyMaterialRequest::ValidToHasBeenSet() const
{
    return m_validToHasBeenSet;
}


