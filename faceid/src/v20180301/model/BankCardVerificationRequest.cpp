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

#include <tencentcloud/faceid/v20180301/model/BankCardVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

BankCardVerificationRequest::BankCardVerificationRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bankCardHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

string BankCardVerificationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bankCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankCard.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certType, allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BankCardVerificationRequest::GetIdCard() const
{
    return m_idCard;
}

void BankCardVerificationRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool BankCardVerificationRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string BankCardVerificationRequest::GetName() const
{
    return m_name;
}

void BankCardVerificationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BankCardVerificationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BankCardVerificationRequest::GetBankCard() const
{
    return m_bankCard;
}

void BankCardVerificationRequest::SetBankCard(const string& _bankCard)
{
    m_bankCard = _bankCard;
    m_bankCardHasBeenSet = true;
}

bool BankCardVerificationRequest::BankCardHasBeenSet() const
{
    return m_bankCardHasBeenSet;
}

int64_t BankCardVerificationRequest::GetCertType() const
{
    return m_certType;
}

void BankCardVerificationRequest::SetCertType(const int64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool BankCardVerificationRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

Encryption BankCardVerificationRequest::GetEncryption() const
{
    return m_encryption;
}

void BankCardVerificationRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool BankCardVerificationRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}


