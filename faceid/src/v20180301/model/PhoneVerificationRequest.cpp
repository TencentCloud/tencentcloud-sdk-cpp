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

#include <tencentcloud/faceid/v20180301/model/PhoneVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

PhoneVerificationRequest::PhoneVerificationRequest() :
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_verifyModeHasBeenSet(false),
    m_ciphertextBlobHasBeenSet(false),
    m_encryptListHasBeenSet(false),
    m_ivHasBeenSet(false)
{
}

string PhoneVerificationRequest::ToJsonString() const
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

    if (m_verifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_ciphertextBlobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CiphertextBlob";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ciphertextBlob.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_encryptList.begin(); itr != m_encryptList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ivHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iv";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iv.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PhoneVerificationRequest::GetIdCard() const
{
    return m_idCard;
}

void PhoneVerificationRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool PhoneVerificationRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string PhoneVerificationRequest::GetName() const
{
    return m_name;
}

void PhoneVerificationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PhoneVerificationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PhoneVerificationRequest::GetPhone() const
{
    return m_phone;
}

void PhoneVerificationRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool PhoneVerificationRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string PhoneVerificationRequest::GetVerifyMode() const
{
    return m_verifyMode;
}

void PhoneVerificationRequest::SetVerifyMode(const string& _verifyMode)
{
    m_verifyMode = _verifyMode;
    m_verifyModeHasBeenSet = true;
}

bool PhoneVerificationRequest::VerifyModeHasBeenSet() const
{
    return m_verifyModeHasBeenSet;
}

string PhoneVerificationRequest::GetCiphertextBlob() const
{
    return m_ciphertextBlob;
}

void PhoneVerificationRequest::SetCiphertextBlob(const string& _ciphertextBlob)
{
    m_ciphertextBlob = _ciphertextBlob;
    m_ciphertextBlobHasBeenSet = true;
}

bool PhoneVerificationRequest::CiphertextBlobHasBeenSet() const
{
    return m_ciphertextBlobHasBeenSet;
}

vector<string> PhoneVerificationRequest::GetEncryptList() const
{
    return m_encryptList;
}

void PhoneVerificationRequest::SetEncryptList(const vector<string>& _encryptList)
{
    m_encryptList = _encryptList;
    m_encryptListHasBeenSet = true;
}

bool PhoneVerificationRequest::EncryptListHasBeenSet() const
{
    return m_encryptListHasBeenSet;
}

string PhoneVerificationRequest::GetIv() const
{
    return m_iv;
}

void PhoneVerificationRequest::SetIv(const string& _iv)
{
    m_iv = _iv;
    m_ivHasBeenSet = true;
}

bool PhoneVerificationRequest::IvHasBeenSet() const
{
    return m_ivHasBeenSet;
}


