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

#include <tencentcloud/tcb/v20180608/model/ProviderConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ProviderConfig::ProviderConfig() :
    m_issuerHasBeenSet(false),
    m_jwksUriHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_redirectUriHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_tokenEndpointHasBeenSet(false),
    m_userinfoEndpointHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_signoutEndpointHasBeenSet(false),
    m_tokenEndpointAuthMethodHasBeenSet(false),
    m_samlMetadataHasBeenSet(false),
    m_requestParametersMapHasBeenSet(false),
    m_responseParametersMapHasBeenSet(false)
{
}

CoreInternalOutcome ProviderConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("JwksUri") && !value["JwksUri"].IsNull())
    {
        if (!value["JwksUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.JwksUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jwksUri = string(value["JwksUri"].GetString());
        m_jwksUriHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }

    if (value.HasMember("RedirectUri") && !value["RedirectUri"].IsNull())
    {
        if (!value["RedirectUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.RedirectUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redirectUri = string(value["RedirectUri"].GetString());
        m_redirectUriHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationEndpoint") && !value["AuthorizationEndpoint"].IsNull())
    {
        if (!value["AuthorizationEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.AuthorizationEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEndpoint = string(value["AuthorizationEndpoint"].GetString());
        m_authorizationEndpointHasBeenSet = true;
    }

    if (value.HasMember("TokenEndpoint") && !value["TokenEndpoint"].IsNull())
    {
        if (!value["TokenEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.TokenEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenEndpoint = string(value["TokenEndpoint"].GetString());
        m_tokenEndpointHasBeenSet = true;
    }

    if (value.HasMember("UserinfoEndpoint") && !value["UserinfoEndpoint"].IsNull())
    {
        if (!value["UserinfoEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.UserinfoEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userinfoEndpoint = string(value["UserinfoEndpoint"].GetString());
        m_userinfoEndpointHasBeenSet = true;
    }

    if (value.HasMember("ResponseType") && !value["ResponseType"].IsNull())
    {
        if (!value["ResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.ResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseType = string(value["ResponseType"].GetString());
        m_responseTypeHasBeenSet = true;
    }

    if (value.HasMember("SignoutEndpoint") && !value["SignoutEndpoint"].IsNull())
    {
        if (!value["SignoutEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.SignoutEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signoutEndpoint = string(value["SignoutEndpoint"].GetString());
        m_signoutEndpointHasBeenSet = true;
    }

    if (value.HasMember("TokenEndpointAuthMethod") && !value["TokenEndpointAuthMethod"].IsNull())
    {
        if (!value["TokenEndpointAuthMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.TokenEndpointAuthMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenEndpointAuthMethod = string(value["TokenEndpointAuthMethod"].GetString());
        m_tokenEndpointAuthMethodHasBeenSet = true;
    }

    if (value.HasMember("SamlMetadata") && !value["SamlMetadata"].IsNull())
    {
        if (!value["SamlMetadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.SamlMetadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_samlMetadata = string(value["SamlMetadata"].GetString());
        m_samlMetadataHasBeenSet = true;
    }

    if (value.HasMember("RequestParametersMap") && !value["RequestParametersMap"].IsNull())
    {
        if (!value["RequestParametersMap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.RequestParametersMap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_requestParametersMap.Deserialize(value["RequestParametersMap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_requestParametersMapHasBeenSet = true;
    }

    if (value.HasMember("ResponseParametersMap") && !value["ResponseParametersMap"].IsNull())
    {
        if (!value["ResponseParametersMap"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderConfig.ResponseParametersMap` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseParametersMap.Deserialize(value["ResponseParametersMap"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseParametersMapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProviderConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issuerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Issuer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuer.c_str(), allocator).Move(), allocator);
    }

    if (m_jwksUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JwksUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jwksUri.c_str(), allocator).Move(), allocator);
    }

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

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_userinfoEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserinfoEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userinfoEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_signoutEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignoutEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signoutEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenEndpointAuthMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenEndpointAuthMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenEndpointAuthMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_samlMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamlMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_samlMetadata.c_str(), allocator).Move(), allocator);
    }

    if (m_requestParametersMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParametersMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_requestParametersMap.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseParametersMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParametersMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseParametersMap.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProviderConfig::GetIssuer() const
{
    return m_issuer;
}

void ProviderConfig::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool ProviderConfig::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string ProviderConfig::GetJwksUri() const
{
    return m_jwksUri;
}

void ProviderConfig::SetJwksUri(const string& _jwksUri)
{
    m_jwksUri = _jwksUri;
    m_jwksUriHasBeenSet = true;
}

bool ProviderConfig::JwksUriHasBeenSet() const
{
    return m_jwksUriHasBeenSet;
}

string ProviderConfig::GetClientId() const
{
    return m_clientId;
}

void ProviderConfig::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool ProviderConfig::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string ProviderConfig::GetClientSecret() const
{
    return m_clientSecret;
}

void ProviderConfig::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool ProviderConfig::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

string ProviderConfig::GetRedirectUri() const
{
    return m_redirectUri;
}

void ProviderConfig::SetRedirectUri(const string& _redirectUri)
{
    m_redirectUri = _redirectUri;
    m_redirectUriHasBeenSet = true;
}

bool ProviderConfig::RedirectUriHasBeenSet() const
{
    return m_redirectUriHasBeenSet;
}

string ProviderConfig::GetScope() const
{
    return m_scope;
}

void ProviderConfig::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ProviderConfig::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string ProviderConfig::GetAuthorizationEndpoint() const
{
    return m_authorizationEndpoint;
}

void ProviderConfig::SetAuthorizationEndpoint(const string& _authorizationEndpoint)
{
    m_authorizationEndpoint = _authorizationEndpoint;
    m_authorizationEndpointHasBeenSet = true;
}

bool ProviderConfig::AuthorizationEndpointHasBeenSet() const
{
    return m_authorizationEndpointHasBeenSet;
}

string ProviderConfig::GetTokenEndpoint() const
{
    return m_tokenEndpoint;
}

void ProviderConfig::SetTokenEndpoint(const string& _tokenEndpoint)
{
    m_tokenEndpoint = _tokenEndpoint;
    m_tokenEndpointHasBeenSet = true;
}

bool ProviderConfig::TokenEndpointHasBeenSet() const
{
    return m_tokenEndpointHasBeenSet;
}

string ProviderConfig::GetUserinfoEndpoint() const
{
    return m_userinfoEndpoint;
}

void ProviderConfig::SetUserinfoEndpoint(const string& _userinfoEndpoint)
{
    m_userinfoEndpoint = _userinfoEndpoint;
    m_userinfoEndpointHasBeenSet = true;
}

bool ProviderConfig::UserinfoEndpointHasBeenSet() const
{
    return m_userinfoEndpointHasBeenSet;
}

string ProviderConfig::GetResponseType() const
{
    return m_responseType;
}

void ProviderConfig::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool ProviderConfig::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string ProviderConfig::GetSignoutEndpoint() const
{
    return m_signoutEndpoint;
}

void ProviderConfig::SetSignoutEndpoint(const string& _signoutEndpoint)
{
    m_signoutEndpoint = _signoutEndpoint;
    m_signoutEndpointHasBeenSet = true;
}

bool ProviderConfig::SignoutEndpointHasBeenSet() const
{
    return m_signoutEndpointHasBeenSet;
}

string ProviderConfig::GetTokenEndpointAuthMethod() const
{
    return m_tokenEndpointAuthMethod;
}

void ProviderConfig::SetTokenEndpointAuthMethod(const string& _tokenEndpointAuthMethod)
{
    m_tokenEndpointAuthMethod = _tokenEndpointAuthMethod;
    m_tokenEndpointAuthMethodHasBeenSet = true;
}

bool ProviderConfig::TokenEndpointAuthMethodHasBeenSet() const
{
    return m_tokenEndpointAuthMethodHasBeenSet;
}

string ProviderConfig::GetSamlMetadata() const
{
    return m_samlMetadata;
}

void ProviderConfig::SetSamlMetadata(const string& _samlMetadata)
{
    m_samlMetadata = _samlMetadata;
    m_samlMetadataHasBeenSet = true;
}

bool ProviderConfig::SamlMetadataHasBeenSet() const
{
    return m_samlMetadataHasBeenSet;
}

ProviderRequestParametersMap ProviderConfig::GetRequestParametersMap() const
{
    return m_requestParametersMap;
}

void ProviderConfig::SetRequestParametersMap(const ProviderRequestParametersMap& _requestParametersMap)
{
    m_requestParametersMap = _requestParametersMap;
    m_requestParametersMapHasBeenSet = true;
}

bool ProviderConfig::RequestParametersMapHasBeenSet() const
{
    return m_requestParametersMapHasBeenSet;
}

ProviderResponseParametersMap ProviderConfig::GetResponseParametersMap() const
{
    return m_responseParametersMap;
}

void ProviderConfig::SetResponseParametersMap(const ProviderResponseParametersMap& _responseParametersMap)
{
    m_responseParametersMap = _responseParametersMap;
    m_responseParametersMapHasBeenSet = true;
}

bool ProviderConfig::ResponseParametersMapHasBeenSet() const
{
    return m_responseParametersMapHasBeenSet;
}

