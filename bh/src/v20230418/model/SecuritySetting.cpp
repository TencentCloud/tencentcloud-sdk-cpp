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

#include <tencentcloud/bh/v20230418/model/SecuritySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SecuritySetting::SecuritySetting() :
    m_authModeHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_loginHasBeenSet(false),
    m_lDAPHasBeenSet(false),
    m_oAuthHasBeenSet(false),
    m_authModeGMHasBeenSet(false),
    m_reconnectionHasBeenSet(false),
    m_envInternetAccessHasBeenSet(false)
{
}

CoreInternalOutcome SecuritySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthMode") && !value["AuthMode"].IsNull())
    {
        if (!value["AuthMode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.AuthMode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authMode.Deserialize(value["AuthMode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authModeHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.Password` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_password.Deserialize(value["Password"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("Login") && !value["Login"].IsNull())
    {
        if (!value["Login"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.Login` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_login.Deserialize(value["Login"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginHasBeenSet = true;
    }

    if (value.HasMember("LDAP") && !value["LDAP"].IsNull())
    {
        if (!value["LDAP"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.LDAP` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lDAP.Deserialize(value["LDAP"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lDAPHasBeenSet = true;
    }

    if (value.HasMember("OAuth") && !value["OAuth"].IsNull())
    {
        if (!value["OAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.OAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oAuth.Deserialize(value["OAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oAuthHasBeenSet = true;
    }

    if (value.HasMember("AuthModeGM") && !value["AuthModeGM"].IsNull())
    {
        if (!value["AuthModeGM"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.AuthModeGM` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authModeGM.Deserialize(value["AuthModeGM"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authModeGMHasBeenSet = true;
    }

    if (value.HasMember("Reconnection") && !value["Reconnection"].IsNull())
    {
        if (!value["Reconnection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.Reconnection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_reconnection.Deserialize(value["Reconnection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_reconnectionHasBeenSet = true;
    }

    if (value.HasMember("EnvInternetAccess") && !value["EnvInternetAccess"].IsNull())
    {
        if (!value["EnvInternetAccess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecuritySetting.EnvInternetAccess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_envInternetAccess.Deserialize(value["EnvInternetAccess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_envInternetAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecuritySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authMode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_password.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_loginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Login";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_login.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lDAPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LDAP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lDAP.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authModeGMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthModeGM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authModeGM.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reconnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reconnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reconnection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_envInternetAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvInternetAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envInternetAccess.ToJsonObject(value[key.c_str()], allocator);
    }

}


AuthModeSetting SecuritySetting::GetAuthMode() const
{
    return m_authMode;
}

void SecuritySetting::SetAuthMode(const AuthModeSetting& _authMode)
{
    m_authMode = _authMode;
    m_authModeHasBeenSet = true;
}

bool SecuritySetting::AuthModeHasBeenSet() const
{
    return m_authModeHasBeenSet;
}

PasswordSetting SecuritySetting::GetPassword() const
{
    return m_password;
}

void SecuritySetting::SetPassword(const PasswordSetting& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool SecuritySetting::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

LoginSetting SecuritySetting::GetLogin() const
{
    return m_login;
}

void SecuritySetting::SetLogin(const LoginSetting& _login)
{
    m_login = _login;
    m_loginHasBeenSet = true;
}

bool SecuritySetting::LoginHasBeenSet() const
{
    return m_loginHasBeenSet;
}

LDAPSetting SecuritySetting::GetLDAP() const
{
    return m_lDAP;
}

void SecuritySetting::SetLDAP(const LDAPSetting& _lDAP)
{
    m_lDAP = _lDAP;
    m_lDAPHasBeenSet = true;
}

bool SecuritySetting::LDAPHasBeenSet() const
{
    return m_lDAPHasBeenSet;
}

OAuthSetting SecuritySetting::GetOAuth() const
{
    return m_oAuth;
}

void SecuritySetting::SetOAuth(const OAuthSetting& _oAuth)
{
    m_oAuth = _oAuth;
    m_oAuthHasBeenSet = true;
}

bool SecuritySetting::OAuthHasBeenSet() const
{
    return m_oAuthHasBeenSet;
}

AuthModeSetting SecuritySetting::GetAuthModeGM() const
{
    return m_authModeGM;
}

void SecuritySetting::SetAuthModeGM(const AuthModeSetting& _authModeGM)
{
    m_authModeGM = _authModeGM;
    m_authModeGMHasBeenSet = true;
}

bool SecuritySetting::AuthModeGMHasBeenSet() const
{
    return m_authModeGMHasBeenSet;
}

ReconnectionSetting SecuritySetting::GetReconnection() const
{
    return m_reconnection;
}

void SecuritySetting::SetReconnection(const ReconnectionSetting& _reconnection)
{
    m_reconnection = _reconnection;
    m_reconnectionHasBeenSet = true;
}

bool SecuritySetting::ReconnectionHasBeenSet() const
{
    return m_reconnectionHasBeenSet;
}

EnvInternetAccessSetting SecuritySetting::GetEnvInternetAccess() const
{
    return m_envInternetAccess;
}

void SecuritySetting::SetEnvInternetAccess(const EnvInternetAccessSetting& _envInternetAccess)
{
    m_envInternetAccess = _envInternetAccess;
    m_envInternetAccessHasBeenSet = true;
}

bool SecuritySetting::EnvInternetAccessHasBeenSet() const
{
    return m_envInternetAccessHasBeenSet;
}

