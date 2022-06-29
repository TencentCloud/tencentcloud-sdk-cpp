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

#include <tencentcloud/faceid/v20180301/model/PhoneVerificationCTCCRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhoneVerificationCTCCRequest::PhoneVerificationCTCCRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

string PhoneVerificationCTCCRequest::ToJsonString() const
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

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
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


string PhoneVerificationCTCCRequest::GetIdCard() const
{
    return m_idCard;
}

void PhoneVerificationCTCCRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool PhoneVerificationCTCCRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string PhoneVerificationCTCCRequest::GetName() const
{
    return m_name;
}

void PhoneVerificationCTCCRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PhoneVerificationCTCCRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PhoneVerificationCTCCRequest::GetPhone() const
{
    return m_phone;
}

void PhoneVerificationCTCCRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool PhoneVerificationCTCCRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

Encryption PhoneVerificationCTCCRequest::GetEncryption() const
{
    return m_encryption;
}

void PhoneVerificationCTCCRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool PhoneVerificationCTCCRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}


