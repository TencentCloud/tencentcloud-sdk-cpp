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

#include <tencentcloud/cam/v20190116/model/AddUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

AddUserRequest::AddUserRequest() :
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_consoleLoginHasBeenSet(false),
    m_useApiHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_needResetPasswordHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

string AddUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_consoleLogin, allocator);
    }

    if (m_useApiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseApi";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useApi, allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_needResetPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedResetPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needResetPassword, allocator);
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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddUserRequest::GetName() const
{
    return m_name;
}

void AddUserRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AddUserRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AddUserRequest::GetRemark() const
{
    return m_remark;
}

void AddUserRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddUserRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AddUserRequest::GetConsoleLogin() const
{
    return m_consoleLogin;
}

void AddUserRequest::SetConsoleLogin(const uint64_t& _consoleLogin)
{
    m_consoleLogin = _consoleLogin;
    m_consoleLoginHasBeenSet = true;
}

bool AddUserRequest::ConsoleLoginHasBeenSet() const
{
    return m_consoleLoginHasBeenSet;
}

uint64_t AddUserRequest::GetUseApi() const
{
    return m_useApi;
}

void AddUserRequest::SetUseApi(const uint64_t& _useApi)
{
    m_useApi = _useApi;
    m_useApiHasBeenSet = true;
}

bool AddUserRequest::UseApiHasBeenSet() const
{
    return m_useApiHasBeenSet;
}

string AddUserRequest::GetPassword() const
{
    return m_password;
}

void AddUserRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AddUserRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t AddUserRequest::GetNeedResetPassword() const
{
    return m_needResetPassword;
}

void AddUserRequest::SetNeedResetPassword(const uint64_t& _needResetPassword)
{
    m_needResetPassword = _needResetPassword;
    m_needResetPasswordHasBeenSet = true;
}

bool AddUserRequest::NeedResetPasswordHasBeenSet() const
{
    return m_needResetPasswordHasBeenSet;
}

string AddUserRequest::GetPhoneNum() const
{
    return m_phoneNum;
}

void AddUserRequest::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool AddUserRequest::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

string AddUserRequest::GetCountryCode() const
{
    return m_countryCode;
}

void AddUserRequest::SetCountryCode(const string& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool AddUserRequest::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

string AddUserRequest::GetEmail() const
{
    return m_email;
}

void AddUserRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool AddUserRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}


