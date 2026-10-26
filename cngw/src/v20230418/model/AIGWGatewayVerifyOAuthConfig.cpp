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

#include <tencentcloud/cngw/v20230418/model/AIGWGatewayVerifyOAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWGatewayVerifyOAuthConfig::AIGWGatewayVerifyOAuthConfig() :
    m_verifyMethodHasBeenSet(false),
    m_issuerHasBeenSet(false),
    m_jwksUriHasBeenSet(false),
    m_audienceHasBeenSet(false),
    m_jwksCacheTtlHasBeenSet(false),
    m_introspectionEndpointHasBeenSet(false),
    m_introspectionClientIdHasBeenSet(false),
    m_introspectionClientSecretHasBeenSet(false),
    m_introspectionCacheTtlHasBeenSet(false),
    m_scopeWhitelistHasBeenSet(false),
    m_tokenHeaderHasBeenSet(false)
{
}

CoreInternalOutcome AIGWGatewayVerifyOAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VerifyMethod") && !value["VerifyMethod"].IsNull())
    {
        if (!value["VerifyMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.VerifyMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verifyMethod = string(value["VerifyMethod"].GetString());
        m_verifyMethodHasBeenSet = true;
    }

    if (value.HasMember("Issuer") && !value["Issuer"].IsNull())
    {
        if (!value["Issuer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.Issuer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuer = string(value["Issuer"].GetString());
        m_issuerHasBeenSet = true;
    }

    if (value.HasMember("JwksUri") && !value["JwksUri"].IsNull())
    {
        if (!value["JwksUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.JwksUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jwksUri = string(value["JwksUri"].GetString());
        m_jwksUriHasBeenSet = true;
    }

    if (value.HasMember("Audience") && !value["Audience"].IsNull())
    {
        if (!value["Audience"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.Audience` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audience = string(value["Audience"].GetString());
        m_audienceHasBeenSet = true;
    }

    if (value.HasMember("JwksCacheTtl") && !value["JwksCacheTtl"].IsNull())
    {
        if (!value["JwksCacheTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.JwksCacheTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jwksCacheTtl = value["JwksCacheTtl"].GetUint64();
        m_jwksCacheTtlHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionEndpoint") && !value["IntrospectionEndpoint"].IsNull())
    {
        if (!value["IntrospectionEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.IntrospectionEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionEndpoint = string(value["IntrospectionEndpoint"].GetString());
        m_introspectionEndpointHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionClientId") && !value["IntrospectionClientId"].IsNull())
    {
        if (!value["IntrospectionClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.IntrospectionClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionClientId = string(value["IntrospectionClientId"].GetString());
        m_introspectionClientIdHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionClientSecret") && !value["IntrospectionClientSecret"].IsNull())
    {
        if (!value["IntrospectionClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.IntrospectionClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionClientSecret = string(value["IntrospectionClientSecret"].GetString());
        m_introspectionClientSecretHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionCacheTtl") && !value["IntrospectionCacheTtl"].IsNull())
    {
        if (!value["IntrospectionCacheTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.IntrospectionCacheTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionCacheTtl = value["IntrospectionCacheTtl"].GetUint64();
        m_introspectionCacheTtlHasBeenSet = true;
    }

    if (value.HasMember("ScopeWhitelist") && !value["ScopeWhitelist"].IsNull())
    {
        if (!value["ScopeWhitelist"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.ScopeWhitelist` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeWhitelist = string(value["ScopeWhitelist"].GetString());
        m_scopeWhitelistHasBeenSet = true;
    }

    if (value.HasMember("TokenHeader") && !value["TokenHeader"].IsNull())
    {
        if (!value["TokenHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWGatewayVerifyOAuthConfig.TokenHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenHeader = string(value["TokenHeader"].GetString());
        m_tokenHeaderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWGatewayVerifyOAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_verifyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verifyMethod.c_str(), allocator).Move(), allocator);
    }

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

    if (m_audienceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audience";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audience.c_str(), allocator).Move(), allocator);
    }

    if (m_jwksCacheTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JwksCacheTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jwksCacheTtl, allocator);
    }

    if (m_introspectionEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introspectionEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_introspectionClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introspectionClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_introspectionClientSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionClientSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introspectionClientSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_introspectionCacheTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionCacheTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_introspectionCacheTtl, allocator);
    }

    if (m_scopeWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeWhitelist.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenHeader.c_str(), allocator).Move(), allocator);
    }

}


string AIGWGatewayVerifyOAuthConfig::GetVerifyMethod() const
{
    return m_verifyMethod;
}

void AIGWGatewayVerifyOAuthConfig::SetVerifyMethod(const string& _verifyMethod)
{
    m_verifyMethod = _verifyMethod;
    m_verifyMethodHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::VerifyMethodHasBeenSet() const
{
    return m_verifyMethodHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetIssuer() const
{
    return m_issuer;
}

void AIGWGatewayVerifyOAuthConfig::SetIssuer(const string& _issuer)
{
    m_issuer = _issuer;
    m_issuerHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::IssuerHasBeenSet() const
{
    return m_issuerHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetJwksUri() const
{
    return m_jwksUri;
}

void AIGWGatewayVerifyOAuthConfig::SetJwksUri(const string& _jwksUri)
{
    m_jwksUri = _jwksUri;
    m_jwksUriHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::JwksUriHasBeenSet() const
{
    return m_jwksUriHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetAudience() const
{
    return m_audience;
}

void AIGWGatewayVerifyOAuthConfig::SetAudience(const string& _audience)
{
    m_audience = _audience;
    m_audienceHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::AudienceHasBeenSet() const
{
    return m_audienceHasBeenSet;
}

uint64_t AIGWGatewayVerifyOAuthConfig::GetJwksCacheTtl() const
{
    return m_jwksCacheTtl;
}

void AIGWGatewayVerifyOAuthConfig::SetJwksCacheTtl(const uint64_t& _jwksCacheTtl)
{
    m_jwksCacheTtl = _jwksCacheTtl;
    m_jwksCacheTtlHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::JwksCacheTtlHasBeenSet() const
{
    return m_jwksCacheTtlHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetIntrospectionEndpoint() const
{
    return m_introspectionEndpoint;
}

void AIGWGatewayVerifyOAuthConfig::SetIntrospectionEndpoint(const string& _introspectionEndpoint)
{
    m_introspectionEndpoint = _introspectionEndpoint;
    m_introspectionEndpointHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::IntrospectionEndpointHasBeenSet() const
{
    return m_introspectionEndpointHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetIntrospectionClientId() const
{
    return m_introspectionClientId;
}

void AIGWGatewayVerifyOAuthConfig::SetIntrospectionClientId(const string& _introspectionClientId)
{
    m_introspectionClientId = _introspectionClientId;
    m_introspectionClientIdHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::IntrospectionClientIdHasBeenSet() const
{
    return m_introspectionClientIdHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetIntrospectionClientSecret() const
{
    return m_introspectionClientSecret;
}

void AIGWGatewayVerifyOAuthConfig::SetIntrospectionClientSecret(const string& _introspectionClientSecret)
{
    m_introspectionClientSecret = _introspectionClientSecret;
    m_introspectionClientSecretHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::IntrospectionClientSecretHasBeenSet() const
{
    return m_introspectionClientSecretHasBeenSet;
}

uint64_t AIGWGatewayVerifyOAuthConfig::GetIntrospectionCacheTtl() const
{
    return m_introspectionCacheTtl;
}

void AIGWGatewayVerifyOAuthConfig::SetIntrospectionCacheTtl(const uint64_t& _introspectionCacheTtl)
{
    m_introspectionCacheTtl = _introspectionCacheTtl;
    m_introspectionCacheTtlHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::IntrospectionCacheTtlHasBeenSet() const
{
    return m_introspectionCacheTtlHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetScopeWhitelist() const
{
    return m_scopeWhitelist;
}

void AIGWGatewayVerifyOAuthConfig::SetScopeWhitelist(const string& _scopeWhitelist)
{
    m_scopeWhitelist = _scopeWhitelist;
    m_scopeWhitelistHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::ScopeWhitelistHasBeenSet() const
{
    return m_scopeWhitelistHasBeenSet;
}

string AIGWGatewayVerifyOAuthConfig::GetTokenHeader() const
{
    return m_tokenHeader;
}

void AIGWGatewayVerifyOAuthConfig::SetTokenHeader(const string& _tokenHeader)
{
    m_tokenHeader = _tokenHeader;
    m_tokenHeaderHasBeenSet = true;
}

bool AIGWGatewayVerifyOAuthConfig::TokenHeaderHasBeenSet() const
{
    return m_tokenHeaderHasBeenSet;
}

