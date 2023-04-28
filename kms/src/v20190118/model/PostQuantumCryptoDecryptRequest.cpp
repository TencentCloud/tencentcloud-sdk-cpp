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

#include <tencentcloud/kms/v20190118/model/PostQuantumCryptoDecryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

PostQuantumCryptoDecryptRequest::PostQuantumCryptoDecryptRequest() :
    m_ciphertextBlobHasBeenSet(false),
    m_encryptionPublicKeyHasBeenSet(false),
    m_encryptionAlgorithmHasBeenSet(false)
{
}

string PostQuantumCryptoDecryptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ciphertextBlobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiphertextBlob";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ciphertextBlob.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PostQuantumCryptoDecryptRequest::GetCiphertextBlob() const
{
    return m_ciphertextBlob;
}

void PostQuantumCryptoDecryptRequest::SetCiphertextBlob(const string& _ciphertextBlob)
{
    m_ciphertextBlob = _ciphertextBlob;
    m_ciphertextBlobHasBeenSet = true;
}

bool PostQuantumCryptoDecryptRequest::CiphertextBlobHasBeenSet() const
{
    return m_ciphertextBlobHasBeenSet;
}

string PostQuantumCryptoDecryptRequest::GetEncryptionPublicKey() const
{
    return m_encryptionPublicKey;
}

void PostQuantumCryptoDecryptRequest::SetEncryptionPublicKey(const string& _encryptionPublicKey)
{
    m_encryptionPublicKey = _encryptionPublicKey;
    m_encryptionPublicKeyHasBeenSet = true;
}

bool PostQuantumCryptoDecryptRequest::EncryptionPublicKeyHasBeenSet() const
{
    return m_encryptionPublicKeyHasBeenSet;
}

string PostQuantumCryptoDecryptRequest::GetEncryptionAlgorithm() const
{
    return m_encryptionAlgorithm;
}

void PostQuantumCryptoDecryptRequest::SetEncryptionAlgorithm(const string& _encryptionAlgorithm)
{
    m_encryptionAlgorithm = _encryptionAlgorithm;
    m_encryptionAlgorithmHasBeenSet = true;
}

bool PostQuantumCryptoDecryptRequest::EncryptionAlgorithmHasBeenSet() const
{
    return m_encryptionAlgorithmHasBeenSet;
}


