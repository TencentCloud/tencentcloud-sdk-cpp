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

#include <tencentcloud/tcb/v20180608/model/ProviderRequestParametersMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ProviderRequestParametersMap::ProviderRequestParametersMap() :
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_redirectUriHasBeenSet(false),
    m_registerUserRoleIdHasBeenSet(false),
    m_registerUserAutoLicenseHasBeenSet(false),
    m_authPositionHasBeenSet(false),
    m_grantTypeHasBeenSet(false),
    m_clientCredentialsHasBeenSet(false),
    m_accessTokenHasBeenSet(false),
    m_expiresInHasBeenSet(false),
    m_registerUserTypeHasBeenSet(false)
{
}

CoreInternalOutcome ProviderRequestParametersMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }

    if (value.HasMember("RedirectUri") && !value["RedirectUri"].IsNull())
    {
        if (!value["RedirectUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.RedirectUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUri = string(value["RedirectUri"].GetString());
        m_redirectUriHasBeenSet = true;
    }

    if (value.HasMember("RegisterUserRoleId") && !value["RegisterUserRoleId"].IsNull())
    {
        if (!value["RegisterUserRoleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.RegisterUserRoleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerUserRoleId = string(value["RegisterUserRoleId"].GetString());
        m_registerUserRoleIdHasBeenSet = true;
    }

    if (value.HasMember("RegisterUserAutoLicense") && !value["RegisterUserAutoLicense"].IsNull())
    {
        if (!value["RegisterUserAutoLicense"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.RegisterUserAutoLicense` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerUserAutoLicense = string(value["RegisterUserAutoLicense"].GetString());
        m_registerUserAutoLicenseHasBeenSet = true;
    }

    if (value.HasMember("AuthPosition") && !value["AuthPosition"].IsNull())
    {
        if (!value["AuthPosition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.AuthPosition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authPosition = string(value["AuthPosition"].GetString());
        m_authPositionHasBeenSet = true;
    }

    if (value.HasMember("GrantType") && !value["GrantType"].IsNull())
    {
        if (!value["GrantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.GrantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grantType = string(value["GrantType"].GetString());
        m_grantTypeHasBeenSet = true;
    }

    if (value.HasMember("ClientCredentials") && !value["ClientCredentials"].IsNull())
    {
        if (!value["ClientCredentials"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.ClientCredentials` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientCredentials = string(value["ClientCredentials"].GetString());
        m_clientCredentialsHasBeenSet = true;
    }

    if (value.HasMember("AccessToken") && !value["AccessToken"].IsNull())
    {
        if (!value["AccessToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.AccessToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessToken = string(value["AccessToken"].GetString());
        m_accessTokenHasBeenSet = true;
    }

    if (value.HasMember("ExpiresIn") && !value["ExpiresIn"].IsNull())
    {
        if (!value["ExpiresIn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.ExpiresIn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiresIn = string(value["ExpiresIn"].GetString());
        m_expiresInHasBeenSet = true;
    }

    if (value.HasMember("RegisterUserType") && !value["RegisterUserType"].IsNull())
    {
        if (!value["RegisterUserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderRequestParametersMap.RegisterUserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerUserType = string(value["RegisterUserType"].GetString());
        m_registerUserTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderRequestParametersMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redirectUri.c_str(), allocator).Move(), allocator);
    }

    if (m_registerUserRoleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterUserRoleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerUserRoleId.c_str(), allocator).Move(), allocator);
    }

    if (m_registerUserAutoLicenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterUserAutoLicense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerUserAutoLicense.c_str(), allocator).Move(), allocator);
    }

    if (m_authPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authPosition.c_str(), allocator).Move(), allocator);
    }

    if (m_grantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grantType.c_str(), allocator).Move(), allocator);
    }

    if (m_clientCredentialsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientCredentials";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientCredentials.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessToken.c_str(), allocator).Move(), allocator);
    }

    if (m_expiresInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiresIn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiresIn.c_str(), allocator).Move(), allocator);
    }

    if (m_registerUserTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterUserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerUserType.c_str(), allocator).Move(), allocator);
    }

}


string ProviderRequestParametersMap::GetClientId() const
{
    return m_clientId;
}

void ProviderRequestParametersMap::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ProviderRequestParametersMap::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ProviderRequestParametersMap::GetClientSecret() const
{
    return m_clientSecret;
}

void ProviderRequestParametersMap::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool ProviderRequestParametersMap::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

string ProviderRequestParametersMap::GetRedirectUri() const
{
    return m_redirectUri;
}

void ProviderRequestParametersMap::SetRedirectUri(const string& _redirectUri)
{
    m_redirectUri = _redirectUri;
    m_redirectUriHasBeenSet = true;
}

bool ProviderRequestParametersMap::RedirectUriHasBeenSet() const
{
    return m_redirectUriHasBeenSet;
}

string ProviderRequestParametersMap::GetRegisterUserRoleId() const
{
    return m_registerUserRoleId;
}

void ProviderRequestParametersMap::SetRegisterUserRoleId(const string& _registerUserRoleId)
{
    m_registerUserRoleId = _registerUserRoleId;
    m_registerUserRoleIdHasBeenSet = true;
}

bool ProviderRequestParametersMap::RegisterUserRoleIdHasBeenSet() const
{
    return m_registerUserRoleIdHasBeenSet;
}

string ProviderRequestParametersMap::GetRegisterUserAutoLicense() const
{
    return m_registerUserAutoLicense;
}

void ProviderRequestParametersMap::SetRegisterUserAutoLicense(const string& _registerUserAutoLicense)
{
    m_registerUserAutoLicense = _registerUserAutoLicense;
    m_registerUserAutoLicenseHasBeenSet = true;
}

bool ProviderRequestParametersMap::RegisterUserAutoLicenseHasBeenSet() const
{
    return m_registerUserAutoLicenseHasBeenSet;
}

string ProviderRequestParametersMap::GetAuthPosition() const
{
    return m_authPosition;
}

void ProviderRequestParametersMap::SetAuthPosition(const string& _authPosition)
{
    m_authPosition = _authPosition;
    m_authPositionHasBeenSet = true;
}

bool ProviderRequestParametersMap::AuthPositionHasBeenSet() const
{
    return m_authPositionHasBeenSet;
}

string ProviderRequestParametersMap::GetGrantType() const
{
    return m_grantType;
}

void ProviderRequestParametersMap::SetGrantType(const string& _grantType)
{
    m_grantType = _grantType;
    m_grantTypeHasBeenSet = true;
}

bool ProviderRequestParametersMap::GrantTypeHasBeenSet() const
{
    return m_grantTypeHasBeenSet;
}

string ProviderRequestParametersMap::GetClientCredentials() const
{
    return m_clientCredentials;
}

void ProviderRequestParametersMap::SetClientCredentials(const string& _clientCredentials)
{
    m_clientCredentials = _clientCredentials;
    m_clientCredentialsHasBeenSet = true;
}

bool ProviderRequestParametersMap::ClientCredentialsHasBeenSet() const
{
    return m_clientCredentialsHasBeenSet;
}

string ProviderRequestParametersMap::GetAccessToken() const
{
    return m_accessToken;
}

void ProviderRequestParametersMap::SetAccessToken(const string& _accessToken)
{
    m_accessToken = _accessToken;
    m_accessTokenHasBeenSet = true;
}

bool ProviderRequestParametersMap::AccessTokenHasBeenSet() const
{
    return m_accessTokenHasBeenSet;
}

string ProviderRequestParametersMap::GetExpiresIn() const
{
    return m_expiresIn;
}

void ProviderRequestParametersMap::SetExpiresIn(const string& _expiresIn)
{
    m_expiresIn = _expiresIn;
    m_expiresInHasBeenSet = true;
}

bool ProviderRequestParametersMap::ExpiresInHasBeenSet() const
{
    return m_expiresInHasBeenSet;
}

string ProviderRequestParametersMap::GetRegisterUserType() const
{
    return m_registerUserType;
}

void ProviderRequestParametersMap::SetRegisterUserType(const string& _registerUserType)
{
    m_registerUserType = _registerUserType;
    m_registerUserTypeHasBeenSet = true;
}

bool ProviderRequestParametersMap::RegisterUserTypeHasBeenSet() const
{
    return m_registerUserTypeHasBeenSet;
}

