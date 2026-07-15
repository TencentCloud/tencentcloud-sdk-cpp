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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPServerAuthResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPServerAuthResult::AIGWMCPServerAuthResult() :
    m_authTypeHasBeenSet(false),
    m_jWTAuthConfigHasBeenSet(false),
    m_oAuthAuthConfigHasBeenSet(false),
    m_oIDCAuthConfigHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPServerAuthResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerAuthResult.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("JWTAuthConfig") && !value["JWTAuthConfig"].IsNull())
    {
        if (!value["JWTAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerAuthResult.JWTAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jWTAuthConfig.Deserialize(value["JWTAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jWTAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("OAuthAuthConfig") && !value["OAuthAuthConfig"].IsNull())
    {
        if (!value["OAuthAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerAuthResult.OAuthAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oAuthAuthConfig.Deserialize(value["OAuthAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oAuthAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("OIDCAuthConfig") && !value["OIDCAuthConfig"].IsNull())
    {
        if (!value["OIDCAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPServerAuthResult.OIDCAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oIDCAuthConfig.Deserialize(value["OIDCAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oIDCAuthConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPServerAuthResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_jWTAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JWTAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jWTAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oAuthAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oIDCAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OIDCAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oIDCAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AIGWMCPServerAuthResult::GetAuthType() const
{
    return m_authType;
}

void AIGWMCPServerAuthResult::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AIGWMCPServerAuthResult::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

AIGWJWTAuthPluginConfig AIGWMCPServerAuthResult::GetJWTAuthConfig() const
{
    return m_jWTAuthConfig;
}

void AIGWMCPServerAuthResult::SetJWTAuthConfig(const AIGWJWTAuthPluginConfig& _jWTAuthConfig)
{
    m_jWTAuthConfig = _jWTAuthConfig;
    m_jWTAuthConfigHasBeenSet = true;
}

bool AIGWMCPServerAuthResult::JWTAuthConfigHasBeenSet() const
{
    return m_jWTAuthConfigHasBeenSet;
}

AIGWOAuthAuthPluginConfig AIGWMCPServerAuthResult::GetOAuthAuthConfig() const
{
    return m_oAuthAuthConfig;
}

void AIGWMCPServerAuthResult::SetOAuthAuthConfig(const AIGWOAuthAuthPluginConfig& _oAuthAuthConfig)
{
    m_oAuthAuthConfig = _oAuthAuthConfig;
    m_oAuthAuthConfigHasBeenSet = true;
}

bool AIGWMCPServerAuthResult::OAuthAuthConfigHasBeenSet() const
{
    return m_oAuthAuthConfigHasBeenSet;
}

AIGWOIDCAuthPluginConfig AIGWMCPServerAuthResult::GetOIDCAuthConfig() const
{
    return m_oIDCAuthConfig;
}

void AIGWMCPServerAuthResult::SetOIDCAuthConfig(const AIGWOIDCAuthPluginConfig& _oIDCAuthConfig)
{
    m_oIDCAuthConfig = _oIDCAuthConfig;
    m_oIDCAuthConfigHasBeenSet = true;
}

bool AIGWMCPServerAuthResult::OIDCAuthConfigHasBeenSet() const
{
    return m_oIDCAuthConfigHasBeenSet;
}

