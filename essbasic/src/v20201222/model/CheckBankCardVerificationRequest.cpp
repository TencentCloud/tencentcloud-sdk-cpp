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

#include <tencentcloud/essbasic/v20201222/model/CheckBankCardVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CheckBankCardVerificationRequest::CheckBankCardVerificationRequest() :
    m_callerHasBeenSet(false),
    m_bankCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_idCardTypeHasBeenSet(false)
{
}

string CheckBankCardVerificationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_bankCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bankCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CheckBankCardVerificationRequest::GetCaller() const
{
    return m_caller;
}

void CheckBankCardVerificationRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CheckBankCardVerificationRequest::GetBankCard() const
{
    return m_bankCard;
}

void CheckBankCardVerificationRequest::SetBankCard(const string& _bankCard)
{
    m_bankCard = _bankCard;
    m_bankCardHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::BankCardHasBeenSet() const
{
    return m_bankCardHasBeenSet;
}

string CheckBankCardVerificationRequest::GetName() const
{
    return m_name;
}

void CheckBankCardVerificationRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CheckBankCardVerificationRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CheckBankCardVerificationRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CheckBankCardVerificationRequest::GetMobile() const
{
    return m_mobile;
}

void CheckBankCardVerificationRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CheckBankCardVerificationRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CheckBankCardVerificationRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CheckBankCardVerificationRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}


