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

#include <tencentcloud/adp/v20260520/model/OAuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

OAuthConfig::OAuthConfig() :
    m_authorizationUrlHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_scopeListHasBeenSet(false),
    m_tokenUrlHasBeenSet(false)
{
}

CoreInternalOutcome OAuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthorizationUrl") && !value["AuthorizationUrl"].IsNull())
    {
        if (!value["AuthorizationUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthConfig.AuthorizationUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationUrl = string(value["AuthorizationUrl"].GetString());
        m_authorizationUrlHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthConfig.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientSecret") && !value["ClientSecret"].IsNull())
    {
        if (!value["ClientSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthConfig.ClientSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientSecret = string(value["ClientSecret"].GetString());
        m_clientSecretHasBeenSet = true;
    }

    if (value.HasMember("ScopeList") && !value["ScopeList"].IsNull())
    {
        if (!value["ScopeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OAuthConfig.ScopeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ScopeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopeList.push_back((*itr).GetString());
        }
        m_scopeListHasBeenSet = true;
    }

    if (value.HasMember("TokenUrl") && !value["TokenUrl"].IsNull())
    {
        if (!value["TokenUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OAuthConfig.TokenUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenUrl = string(value["TokenUrl"].GetString());
        m_tokenUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OAuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authorizationUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationUrl.c_str(), allocator).Move(), allocator);
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

    if (m_scopeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopeList.begin(); itr != m_scopeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tokenUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenUrl.c_str(), allocator).Move(), allocator);
    }

}


string OAuthConfig::GetAuthorizationUrl() const
{
    return m_authorizationUrl;
}

void OAuthConfig::SetAuthorizationUrl(const string& _authorizationUrl)
{
    m_authorizationUrl = _authorizationUrl;
    m_authorizationUrlHasBeenSet = true;
}

bool OAuthConfig::AuthorizationUrlHasBeenSet() const
{
    return m_authorizationUrlHasBeenSet;
}

string OAuthConfig::GetClientId() const
{
    return m_clientId;
}

void OAuthConfig::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool OAuthConfig::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string OAuthConfig::GetClientSecret() const
{
    return m_clientSecret;
}

void OAuthConfig::SetClientSecret(const string& _clientSecret)
{
    m_clientSecret = _clientSecret;
    m_clientSecretHasBeenSet = true;
}

bool OAuthConfig::ClientSecretHasBeenSet() const
{
    return m_clientSecretHasBeenSet;
}

vector<string> OAuthConfig::GetScopeList() const
{
    return m_scopeList;
}

void OAuthConfig::SetScopeList(const vector<string>& _scopeList)
{
    m_scopeList = _scopeList;
    m_scopeListHasBeenSet = true;
}

bool OAuthConfig::ScopeListHasBeenSet() const
{
    return m_scopeListHasBeenSet;
}

string OAuthConfig::GetTokenUrl() const
{
    return m_tokenUrl;
}

void OAuthConfig::SetTokenUrl(const string& _tokenUrl)
{
    m_tokenUrl = _tokenUrl;
    m_tokenUrlHasBeenSet = true;
}

bool OAuthConfig::TokenUrlHasBeenSet() const
{
    return m_tokenUrlHasBeenSet;
}

