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

#include <tencentcloud/faceid/v20180301/model/EncryptedPhoneVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

EncryptedPhoneVerificationRequest::EncryptedPhoneVerificationRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_encryptionModeHasBeenSet(false)
{
}

string EncryptedPhoneVerificationRequest::ToJsonString() const
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

    if (m_encryptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptionMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EncryptedPhoneVerificationRequest::GetIdCard() const
{
    return m_idCard;
}

void EncryptedPhoneVerificationRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool EncryptedPhoneVerificationRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string EncryptedPhoneVerificationRequest::GetName() const
{
    return m_name;
}

void EncryptedPhoneVerificationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EncryptedPhoneVerificationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EncryptedPhoneVerificationRequest::GetPhone() const
{
    return m_phone;
}

void EncryptedPhoneVerificationRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool EncryptedPhoneVerificationRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string EncryptedPhoneVerificationRequest::GetEncryptionMode() const
{
    return m_encryptionMode;
}

void EncryptedPhoneVerificationRequest::SetEncryptionMode(const string& _encryptionMode)
{
    m_encryptionMode = _encryptionMode;
    m_encryptionModeHasBeenSet = true;
}

bool EncryptedPhoneVerificationRequest::EncryptionModeHasBeenSet() const
{
    return m_encryptionModeHasBeenSet;
}


