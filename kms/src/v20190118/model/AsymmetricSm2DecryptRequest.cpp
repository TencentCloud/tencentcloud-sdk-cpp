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

#include <tencentcloud/kms/v20190118/model/AsymmetricSm2DecryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

AsymmetricSm2DecryptRequest::AsymmetricSm2DecryptRequest() :
    m_keyIdHasBeenSet(false),
    m_ciphertextHasBeenSet(false)
{
}

string AsymmetricSm2DecryptRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AsymmetricSm2DecryptRequest::GetKeyId() const
{
    return m_keyId;
}

void AsymmetricSm2DecryptRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool AsymmetricSm2DecryptRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string AsymmetricSm2DecryptRequest::GetCiphertext() const
{
    return m_ciphertext;
}

void AsymmetricSm2DecryptRequest::SetCiphertext(const string& _ciphertext)
{
    m_ciphertext = _ciphertext;
    m_ciphertextHasBeenSet = true;
}

bool AsymmetricSm2DecryptRequest::CiphertextHasBeenSet() const
{
    return m_ciphertextHasBeenSet;
}


