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

#include <tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

CreateAccountRequest::CreateAccountRequest() :
    m_accountTypeHasBeenSet(false),
    m_mailHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_confirmPasswordHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_areaHasBeenSet(false),
    m_extendedHasBeenSet(false)
{
}

string CreateAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountType.c_str(), allocator).Move(), allocator);
    }

    if (m_mailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mail.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_confirmPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfirmPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_confirmPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_countryCode.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extended";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extended.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAccountRequest::GetAccountType() const
{
    return m_accountType;
}

void CreateAccountRequest::SetAccountType(const string& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool CreateAccountRequest::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string CreateAccountRequest::GetMail() const
{
    return m_mail;
}

void CreateAccountRequest::SetMail(const string& _mail)
{
    m_mail = _mail;
    m_mailHasBeenSet = true;
}

bool CreateAccountRequest::MailHasBeenSet() const
{
    return m_mailHasBeenSet;
}

string CreateAccountRequest::GetPassword() const
{
    return m_password;
}

void CreateAccountRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateAccountRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateAccountRequest::GetConfirmPassword() const
{
    return m_confirmPassword;
}

void CreateAccountRequest::SetConfirmPassword(const string& _confirmPassword)
{
    m_confirmPassword = _confirmPassword;
    m_confirmPasswordHasBeenSet = true;
}

bool CreateAccountRequest::ConfirmPasswordHasBeenSet() const
{
    return m_confirmPasswordHasBeenSet;
}

string CreateAccountRequest::GetPhoneNum() const
{
    return m_phoneNum;
}

void CreateAccountRequest::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool CreateAccountRequest::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string CreateAccountRequest::GetCountryCode() const
{
    return m_countryCode;
}

void CreateAccountRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool CreateAccountRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string CreateAccountRequest::GetArea() const
{
    return m_area;
}

void CreateAccountRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateAccountRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string CreateAccountRequest::GetExtended() const
{
    return m_extended;
}

void CreateAccountRequest::SetExtended(const string& _extended)
{
    m_extended = _extended;
    m_extendedHasBeenSet = true;
}

bool CreateAccountRequest::ExtendedHasBeenSet() const
{
    return m_extendedHasBeenSet;
}


