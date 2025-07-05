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

#include <tencentcloud/kms/v20190118/model/AsymmetricRsaDecryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

AsymmetricRsaDecryptRequest::AsymmetricRsaDecryptRequest() :
    m_keyIdHasBeenSet(false),
    m_ciphertextHasBeenSet(false),
    m_algorithmHasBeenSet(false)
{
}

string AsymmetricRsaDecryptRequest::ToJsonString() const
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

    if (m_ciphertextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphertext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ciphertext.c_str(), allocator).Move(), allocator);
    }

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AsymmetricRsaDecryptRequest::GetKeyId() const
{
    return m_keyId;
}

void AsymmetricRsaDecryptRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool AsymmetricRsaDecryptRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string AsymmetricRsaDecryptRequest::GetCiphertext() const
{
    return m_ciphertext;
}

void AsymmetricRsaDecryptRequest::SetCiphertext(const string& _ciphertext)
{
    m_ciphertext = _ciphertext;
    m_ciphertextHasBeenSet = true;
}

bool AsymmetricRsaDecryptRequest::CiphertextHasBeenSet() const
{
    return m_ciphertextHasBeenSet;
}

string AsymmetricRsaDecryptRequest::GetAlgorithm() const
{
    return m_algorithm;
}

void AsymmetricRsaDecryptRequest::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool AsymmetricRsaDecryptRequest::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}


