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

#include <tencentcloud/tse/v20201207/model/AIGWOIDCCredentialConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AIGWOIDCCredentialConfig::AIGWOIDCCredentialConfig() :
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_issuerURLHasBeenSet(false),
    m_consumerClaimValueHasBeenSet(false)
{
}

CoreInternalOutcome AIGWOIDCCredentialConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCCredentialConfig.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCCredentialConfig.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }

    if (value.HasMember("IssuerURL") && !value["IssuerURL"].IsNull())
    {
        if (!value["IssuerURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCCredentialConfig.IssuerURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuerURL = string(value["IssuerURL"].GetString());
        m_issuerURLHasBeenSet = true;
    }

    if (value.HasMember("ConsumerClaimValue") && !value["ConsumerClaimValue"].IsNull())
    {
        if (!value["ConsumerClaimValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOIDCCredentialConfig.ConsumerClaimValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerClaimValue = string(value["ConsumerClaimValue"].GetString());
        m_consumerClaimValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWOIDCCredentialConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_issuerURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuerURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuerURL.c_str(), allocator).Move(), allocator);
    }

    if (m_consumerClaimValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerClaimValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerClaimValue.c_str(), allocator).Move(), allocator);
    }

}


string AIGWOIDCCredentialConfig::GetClientId() const
{
    return m_clientId;
}

void AIGWOIDCCredentialConfig::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool AIGWOIDCCredentialConfig::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string AIGWOIDCCredentialConfig::GetClientSecret() const
{
    return m_clientSecret;
}

void AIGWOIDCCredentialConfig::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool AIGWOIDCCredentialConfig::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

string AIGWOIDCCredentialConfig::GetIssuerURL() const
{
    return m_issuerURL;
}

void AIGWOIDCCredentialConfig::SetIssuerURL(const string& _issuerURL)
{
    m_issuerURL = _issuerURL;
    m_issuerURLHasBeenSet = true;
}

bool AIGWOIDCCredentialConfig::IssuerURLHasBeenSet() const
{
    return m_issuerURLHasBeenSet;
}

string AIGWOIDCCredentialConfig::GetConsumerClaimValue() const
{
    return m_consumerClaimValue;
}

void AIGWOIDCCredentialConfig::SetConsumerClaimValue(const string& _consumerClaimValue)
{
    m_consumerClaimValue = _consumerClaimValue;
    m_consumerClaimValueHasBeenSet = true;
}

bool AIGWOIDCCredentialConfig::ConsumerClaimValueHasBeenSet() const
{
    return m_consumerClaimValueHasBeenSet;
}

