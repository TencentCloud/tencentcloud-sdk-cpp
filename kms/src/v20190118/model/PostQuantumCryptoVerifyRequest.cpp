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

#include <tencentcloud/kms/v20190118/model/PostQuantumCryptoVerifyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

PostQuantumCryptoVerifyRequest::PostQuantumCryptoVerifyRequest() :
    m_keyIdHasBeenSet(false),
    m_signatureValueHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

string PostQuantumCryptoVerifyRequest::ToJsonString() const
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

    if (m_signatureValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_signatureValue.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PostQuantumCryptoVerifyRequest::GetKeyId() const
{
    return m_keyId;
}

void PostQuantumCryptoVerifyRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool PostQuantumCryptoVerifyRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string PostQuantumCryptoVerifyRequest::GetSignatureValue() const
{
    return m_signatureValue;
}

void PostQuantumCryptoVerifyRequest::SetSignatureValue(const string& _signatureValue)
{
    m_signatureValue = _signatureValue;
    m_signatureValueHasBeenSet = true;
}

bool PostQuantumCryptoVerifyRequest::SignatureValueHasBeenSet() const
{
    return m_signatureValueHasBeenSet;
}

string PostQuantumCryptoVerifyRequest::GetMessage() const
{
    return m_message;
}

void PostQuantumCryptoVerifyRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool PostQuantumCryptoVerifyRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}


