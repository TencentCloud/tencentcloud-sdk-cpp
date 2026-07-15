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

#include <tencentcloud/cngw/v20230418/model/AIGWOIDCAuthPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWOIDCAuthPluginConfig::AIGWOIDCAuthPluginConfig() :
    m_audienceHasBeenSet(false),
    m_bearerOnlyHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_consumerClaimHasBeenSet(false),
    m_realmHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_tokenEndpointAuthMethodHasBeenSet(false),
    m_introspectionEndpointHasBeenSet(false),
    m_introspectionEndpointAuthMethodHasBeenSet(false),
    m_issuerURLHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false)
{
}

CoreInternalOutcome AIGWOIDCAuthPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Audience") && !value["Audience"].IsNull())
    {
        if (!value["Audience"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.Audience` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audience = string(value["Audience"].GetString());
        m_audienceHasBeenSet = true;
    }

    if (value.HasMember("BearerOnly") && !value["BearerOnly"].IsNull())
    {
        if (!value["BearerOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.BearerOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_bearerOnly = value["BearerOnly"].GetBool();
        m_bearerOnlyHasBeenSet = true;
    }

    if (value.HasMember("Scopes") && !value["Scopes"].IsNull())
    {
        if (!value["Scopes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.Scopes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scopes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopes.push_back((*itr).GetString());
        }
        m_scopesHasBeenSet = true;
    }

    if (value.HasMember("ConsumerClaim") && !value["ConsumerClaim"].IsNull())
    {
        if (!value["ConsumerClaim"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.ConsumerClaim` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerClaim = string(value["ConsumerClaim"].GetString());
        m_consumerClaimHasBeenSet = true;
    }

    if (value.HasMember("Realm") && !value["Realm"].IsNull())
    {
        if (!value["Realm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.Realm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realm = string(value["Realm"].GetString());
        m_realmHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("TokenEndpointAuthMethod") && !value["TokenEndpointAuthMethod"].IsNull())
    {
        if (!value["TokenEndpointAuthMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.TokenEndpointAuthMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenEndpointAuthMethod = string(value["TokenEndpointAuthMethod"].GetString());
        m_tokenEndpointAuthMethodHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionEndpoint") && !value["IntrospectionEndpoint"].IsNull())
    {
        if (!value["IntrospectionEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.IntrospectionEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionEndpoint = string(value["IntrospectionEndpoint"].GetString());
        m_introspectionEndpointHasBeenSet = true;
    }

    if (value.HasMember("IntrospectionEndpointAuthMethod") && !value["IntrospectionEndpointAuthMethod"].IsNull())
    {
        if (!value["IntrospectionEndpointAuthMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.IntrospectionEndpointAuthMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_introspectionEndpointAuthMethod = string(value["IntrospectionEndpointAuthMethod"].GetString());
        m_introspectionEndpointAuthMethodHasBeenSet = true;
    }

    if (value.HasMember("IssuerURL") && !value["IssuerURL"].IsNull())
    {
        if (!value["IssuerURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.IssuerURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerURL = string(value["IssuerURL"].GetString());
        m_issuerURLHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCAuthPluginConfig.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWOIDCAuthPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_audienceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audience";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audience.c_str(), allocator).Move(), allocator);
    }

    if (m_bearerOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BearerOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bearerOnly, allocator);
    }

    if (m_scopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scopes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopes.begin(); itr != m_scopes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_consumerClaimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerClaim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerClaim.c_str(), allocator).Move(), allocator);
    }

    if (m_realmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Realm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realm.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_tokenEndpointAuthMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenEndpointAuthMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenEndpointAuthMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_introspectionEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introspectionEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_introspectionEndpointAuthMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntrospectionEndpointAuthMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_introspectionEndpointAuthMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_issuerURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuerURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuerURL.c_str(), allocator).Move(), allocator);
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

}


string AIGWOIDCAuthPluginConfig::GetAudience() const
{
    return m_audience;
}

void AIGWOIDCAuthPluginConfig::SetAudience(const string& _audience)
{
    m_audience = _audience;
    m_audienceHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::AudienceHasBeenSet() const
{
    return m_audienceHasBeenSet;
}

bool AIGWOIDCAuthPluginConfig::GetBearerOnly() const
{
    return m_bearerOnly;
}

void AIGWOIDCAuthPluginConfig::SetBearerOnly(const bool& _bearerOnly)
{
    m_bearerOnly = _bearerOnly;
    m_bearerOnlyHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::BearerOnlyHasBeenSet() const
{
    return m_bearerOnlyHasBeenSet;
}

vector<string> AIGWOIDCAuthPluginConfig::GetScopes() const
{
    return m_scopes;
}

void AIGWOIDCAuthPluginConfig::SetScopes(const vector<string>& _scopes)
{
    m_scopes = _scopes;
    m_scopesHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::ScopesHasBeenSet() const
{
    return m_scopesHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetConsumerClaim() const
{
    return m_consumerClaim;
}

void AIGWOIDCAuthPluginConfig::SetConsumerClaim(const string& _consumerClaim)
{
    m_consumerClaim = _consumerClaim;
    m_consumerClaimHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::ConsumerClaimHasBeenSet() const
{
    return m_consumerClaimHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetRealm() const
{
    return m_realm;
}

void AIGWOIDCAuthPluginConfig::SetRealm(const string& _realm)
{
    m_realm = _realm;
    m_realmHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::RealmHasBeenSet() const
{
    return m_realmHasBeenSet;
}

uint64_t AIGWOIDCAuthPluginConfig::GetTimeout() const
{
    return m_timeout;
}

void AIGWOIDCAuthPluginConfig::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetTokenEndpointAuthMethod() const
{
    return m_tokenEndpointAuthMethod;
}

void AIGWOIDCAuthPluginConfig::SetTokenEndpointAuthMethod(const string& _tokenEndpointAuthMethod)
{
    m_tokenEndpointAuthMethod = _tokenEndpointAuthMethod;
    m_tokenEndpointAuthMethodHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::TokenEndpointAuthMethodHasBeenSet() const
{
    return m_tokenEndpointAuthMethodHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetIntrospectionEndpoint() const
{
    return m_introspectionEndpoint;
}

void AIGWOIDCAuthPluginConfig::SetIntrospectionEndpoint(const string& _introspectionEndpoint)
{
    m_introspectionEndpoint = _introspectionEndpoint;
    m_introspectionEndpointHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::IntrospectionEndpointHasBeenSet() const
{
    return m_introspectionEndpointHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetIntrospectionEndpointAuthMethod() const
{
    return m_introspectionEndpointAuthMethod;
}

void AIGWOIDCAuthPluginConfig::SetIntrospectionEndpointAuthMethod(const string& _introspectionEndpointAuthMethod)
{
    m_introspectionEndpointAuthMethod = _introspectionEndpointAuthMethod;
    m_introspectionEndpointAuthMethodHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::IntrospectionEndpointAuthMethodHasBeenSet() const
{
    return m_introspectionEndpointAuthMethodHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetIssuerURL() const
{
    return m_issuerURL;
}

void AIGWOIDCAuthPluginConfig::SetIssuerURL(const string& _issuerURL)
{
    m_issuerURL = _issuerURL;
    m_issuerURLHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::IssuerURLHasBeenSet() const
{
    return m_issuerURLHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetClientId() const
{
    return m_clientId;
}

void AIGWOIDCAuthPluginConfig::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string AIGWOIDCAuthPluginConfig::GetClientSecret() const
{
    return m_clientSecret;
}

void AIGWOIDCAuthPluginConfig::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool AIGWOIDCAuthPluginConfig::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

