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

#include <tencentcloud/tcb/v20180608/model/ModifyLoginConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyLoginConfigRequest::ModifyLoginConfigRequest() :
    m_envIdHasBeenSet(false),
    m_phoneNumberLoginHasBeenSet(false),
    m_emailLoginHasBeenSet(false),
    m_userNameLoginHasBeenSet(false),
    m_anonymousLoginHasBeenSet(false),
    m_smsVerificationConfigHasBeenSet(false),
    m_mfaConfigHasBeenSet(false),
    m_pwdUpdateStrategyHasBeenSet(false)
{
}

string ModifyLoginConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumberLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_phoneNumberLogin, allocator);
    }

    if (m_emailLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_emailLogin, allocator);
    }

    if (m_userNameLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserNameLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_userNameLogin, allocator);
    }

    if (m_anonymousLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnonymousLogin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_anonymousLogin, allocator);
    }

    if (m_smsVerificationConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsVerificationConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smsVerificationConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_mfaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MfaConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mfaConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pwdUpdateStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PwdUpdateStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pwdUpdateStrategy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoginConfigRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyLoginConfigRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyLoginConfigRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool ModifyLoginConfigRequest::GetPhoneNumberLogin() const
{
    return m_phoneNumberLogin;
}

void ModifyLoginConfigRequest::SetPhoneNumberLogin(const bool& _phoneNumberLogin)
{
    m_phoneNumberLogin = _phoneNumberLogin;
    m_phoneNumberLoginHasBeenSet = true;
}

bool ModifyLoginConfigRequest::PhoneNumberLoginHasBeenSet() const
{
    return m_phoneNumberLoginHasBeenSet;
}

bool ModifyLoginConfigRequest::GetEmailLogin() const
{
    return m_emailLogin;
}

void ModifyLoginConfigRequest::SetEmailLogin(const bool& _emailLogin)
{
    m_emailLogin = _emailLogin;
    m_emailLoginHasBeenSet = true;
}

bool ModifyLoginConfigRequest::EmailLoginHasBeenSet() const
{
    return m_emailLoginHasBeenSet;
}

bool ModifyLoginConfigRequest::GetUserNameLogin() const
{
    return m_userNameLogin;
}

void ModifyLoginConfigRequest::SetUserNameLogin(const bool& _userNameLogin)
{
    m_userNameLogin = _userNameLogin;
    m_userNameLoginHasBeenSet = true;
}

bool ModifyLoginConfigRequest::UserNameLoginHasBeenSet() const
{
    return m_userNameLoginHasBeenSet;
}

bool ModifyLoginConfigRequest::GetAnonymousLogin() const
{
    return m_anonymousLogin;
}

void ModifyLoginConfigRequest::SetAnonymousLogin(const bool& _anonymousLogin)
{
    m_anonymousLogin = _anonymousLogin;
    m_anonymousLoginHasBeenSet = true;
}

bool ModifyLoginConfigRequest::AnonymousLoginHasBeenSet() const
{
    return m_anonymousLoginHasBeenSet;
}

VerificationConfig ModifyLoginConfigRequest::GetSmsVerificationConfig() const
{
    return m_smsVerificationConfig;
}

void ModifyLoginConfigRequest::SetSmsVerificationConfig(const VerificationConfig& _smsVerificationConfig)
{
    m_smsVerificationConfig = _smsVerificationConfig;
    m_smsVerificationConfigHasBeenSet = true;
}

bool ModifyLoginConfigRequest::SmsVerificationConfigHasBeenSet() const
{
    return m_smsVerificationConfigHasBeenSet;
}

MFALoginConfig ModifyLoginConfigRequest::GetMfaConfig() const
{
    return m_mfaConfig;
}

void ModifyLoginConfigRequest::SetMfaConfig(const MFALoginConfig& _mfaConfig)
{
    m_mfaConfig = _mfaConfig;
    m_mfaConfigHasBeenSet = true;
}

bool ModifyLoginConfigRequest::MfaConfigHasBeenSet() const
{
    return m_mfaConfigHasBeenSet;
}

PasswordUpdateLoginConfig ModifyLoginConfigRequest::GetPwdUpdateStrategy() const
{
    return m_pwdUpdateStrategy;
}

void ModifyLoginConfigRequest::SetPwdUpdateStrategy(const PasswordUpdateLoginConfig& _pwdUpdateStrategy)
{
    m_pwdUpdateStrategy = _pwdUpdateStrategy;
    m_pwdUpdateStrategyHasBeenSet = true;
}

bool ModifyLoginConfigRequest::PwdUpdateStrategyHasBeenSet() const
{
    return m_pwdUpdateStrategyHasBeenSet;
}


