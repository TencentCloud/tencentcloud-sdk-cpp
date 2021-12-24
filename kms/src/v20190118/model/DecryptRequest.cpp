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

#include <tencentcloud/kms/v20190118/model/DecryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DecryptRequest::DecryptRequest() :
    m_ciphertextBlobHasBeenSet(false),
    m_encryptionContextHasBeenSet(false),
    m_encryptionPublicKeyHasBeenSet(false),
    m_encryptionAlgorithmHasBeenSet(false)
{
}

string DecryptRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DecryptRequest::GetCiphertextBlob() const
{
    return m_ciphertextBlob;
}

void DecryptRequest::SetCiphertextBlob(const string& _ciphertextBlob)
{
    m_ciphertextBlob = _ciphertextBlob;
    m_ciphertextBlobHasBeenSet = true;
}

bool DecryptRequest::CiphertextBlobHasBeenSet() const
{
    return m_ciphertextBlobHasBeenSet;
}

string DecryptRequest::GetEncryptionContext() const
{
    return m_encryptionContext;
}

void DecryptRequest::SetEncryptionContext(const string& _encryptionContext)
{
    m_encryptionContext = _encryptionContext;
    m_encryptionContextHasBeenSet = true;
}

bool DecryptRequest::EncryptionContextHasBeenSet() const
{
    return m_encryptionContextHasBeenSet;
}

string DecryptRequest::GetEncryptionPublicKey() const
{
    return m_encryptionPublicKey;
}

void DecryptRequest::SetEncryptionPublicKey(const string& _encryptionPublicKey)
{
    m_encryptionPublicKey = _encryptionPublicKey;
    m_encryptionPublicKeyHasBeenSet = true;
}

bool DecryptRequest::EncryptionPublicKeyHasBeenSet() const
{
    return m_encryptionPublicKeyHasBeenSet;
}

string DecryptRequest::GetEncryptionAlgorithm() const
{
    return m_encryptionAlgorithm;
}

void DecryptRequest::SetEncryptionAlgorithm(const string& _encryptionAlgorithm)
{
    m_encryptionAlgorithm = _encryptionAlgorithm;
    m_encryptionAlgorithmHasBeenSet = true;
}

bool DecryptRequest::EncryptionAlgorithmHasBeenSet() const
{
    return m_encryptionAlgorithmHasBeenSet;
}


