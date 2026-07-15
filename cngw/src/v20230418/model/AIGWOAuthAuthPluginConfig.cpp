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

#include <tencentcloud/cngw/v20230418/model/AIGWOAuthAuthPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWOAuthAuthPluginConfig::AIGWOAuthAuthPluginConfig() :
    m_headerNamesHasBeenSet(false),
    m_tokenExpirationHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_mandatoryScopeHasBeenSet(false)
{
}

CoreInternalOutcome AIGWOAuthAuthPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderNames") && !value["HeaderNames"].IsNull())
    {
        if (!value["HeaderNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthAuthPluginConfig.HeaderNames` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headerNames.push_back((*itr).GetString());
        }
        m_headerNamesHasBeenSet = true;
    }

    if (value.HasMember("TokenExpiration") && !value["TokenExpiration"].IsNull())
    {
        if (!value["TokenExpiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthAuthPluginConfig.TokenExpiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenExpiration = value["TokenExpiration"].GetInt64();
        m_tokenExpirationHasBeenSet = true;
    }

    if (value.HasMember("Scopes") && !value["Scopes"].IsNull())
    {
        if (!value["Scopes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthAuthPluginConfig.Scopes` is not array type"));

        const rapidjson::Value &tmpValue = value["Scopes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopes.push_back((*itr).GetString());
        }
        m_scopesHasBeenSet = true;
    }

    if (value.HasMember("MandatoryScope") && !value["MandatoryScope"].IsNull())
    {
        if (!value["MandatoryScope"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWOAuthAuthPluginConfig.MandatoryScope` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mandatoryScope = value["MandatoryScope"].GetBool();
        m_mandatoryScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWOAuthAuthPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headerNames.begin(); itr != m_headerNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tokenExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenExpiration, allocator);
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

    if (m_mandatoryScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MandatoryScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mandatoryScope, allocator);
    }

}


vector<string> AIGWOAuthAuthPluginConfig::GetHeaderNames() const
{
    return m_headerNames;
}

void AIGWOAuthAuthPluginConfig::SetHeaderNames(const vector<string>& _headerNames)
{
    m_headerNames = _headerNames;
    m_headerNamesHasBeenSet = true;
}

bool AIGWOAuthAuthPluginConfig::HeaderNamesHasBeenSet() const
{
    return m_headerNamesHasBeenSet;
}

int64_t AIGWOAuthAuthPluginConfig::GetTokenExpiration() const
{
    return m_tokenExpiration;
}

void AIGWOAuthAuthPluginConfig::SetTokenExpiration(const int64_t& _tokenExpiration)
{
    m_tokenExpiration = _tokenExpiration;
    m_tokenExpirationHasBeenSet = true;
}

bool AIGWOAuthAuthPluginConfig::TokenExpirationHasBeenSet() const
{
    return m_tokenExpirationHasBeenSet;
}

vector<string> AIGWOAuthAuthPluginConfig::GetScopes() const
{
    return m_scopes;
}

void AIGWOAuthAuthPluginConfig::SetScopes(const vector<string>& _scopes)
{
    m_scopes = _scopes;
    m_scopesHasBeenSet = true;
}

bool AIGWOAuthAuthPluginConfig::ScopesHasBeenSet() const
{
    return m_scopesHasBeenSet;
}

bool AIGWOAuthAuthPluginConfig::GetMandatoryScope() const
{
    return m_mandatoryScope;
}

void AIGWOAuthAuthPluginConfig::SetMandatoryScope(const bool& _mandatoryScope)
{
    m_mandatoryScope = _mandatoryScope;
    m_mandatoryScopeHasBeenSet = true;
}

bool AIGWOAuthAuthPluginConfig::MandatoryScopeHasBeenSet() const
{
    return m_mandatoryScopeHasBeenSet;
}

