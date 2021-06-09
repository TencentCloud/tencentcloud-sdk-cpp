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

#include <tencentcloud/kms/v20190118/model/VerifyByAsymmetricKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

VerifyByAsymmetricKeyRequest::VerifyByAsymmetricKeyRequest() :
    m_keyIdHasBeenSet(false),
    m_signatureValueHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_algorithmHasBeenSet(false),
    m_messageTypeHasBeenSet(false)
{
}

string VerifyByAsymmetricKeyRequest::ToJsonString() const
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

    if (m_algorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Algorithm";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_algorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyByAsymmetricKeyRequest::GetKeyId() const
{
    return m_keyId;
}

void VerifyByAsymmetricKeyRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool VerifyByAsymmetricKeyRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string VerifyByAsymmetricKeyRequest::GetSignatureValue() const
{
    return m_signatureValue;
}

void VerifyByAsymmetricKeyRequest::SetSignatureValue(const string& _signatureValue)
{
    m_signatureValue = _signatureValue;
    m_signatureValueHasBeenSet = true;
}

bool VerifyByAsymmetricKeyRequest::SignatureValueHasBeenSet() const
{
    return m_signatureValueHasBeenSet;
}

string VerifyByAsymmetricKeyRequest::GetMessage() const
{
    return m_message;
}

void VerifyByAsymmetricKeyRequest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool VerifyByAsymmetricKeyRequest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string VerifyByAsymmetricKeyRequest::GetAlgorithm() const
{
    return m_algorithm;
}

void VerifyByAsymmetricKeyRequest::SetAlgorithm(const string& _algorithm)
{
    m_algorithm = _algorithm;
    m_algorithmHasBeenSet = true;
}

bool VerifyByAsymmetricKeyRequest::AlgorithmHasBeenSet() const
{
    return m_algorithmHasBeenSet;
}

string VerifyByAsymmetricKeyRequest::GetMessageType() const
{
    return m_messageType;
}

void VerifyByAsymmetricKeyRequest::SetMessageType(const string& _messageType)
{
    m_messageType = _messageType;
    m_messageTypeHasBeenSet = true;
}

bool VerifyByAsymmetricKeyRequest::MessageTypeHasBeenSet() const
{
    return m_messageTypeHasBeenSet;
}


