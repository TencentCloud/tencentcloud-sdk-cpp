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

#include <tencentcloud/adp/v20260520/model/AuthConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AuthConfig::AuthConfig() :
    m_authTypeHasBeenSet(false),
    m_apiKeyAuthConfigHasBeenSet(false),
    m_camAuthConfigHasBeenSet(false),
    m_oAuthConfigHasBeenSet(false)
{
}

CoreInternalOutcome AuthConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthConfig.AuthType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetInt64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiKeyAuthConfig") && !value["ApiKeyAuthConfig"].IsNull())
    {
        if (!value["ApiKeyAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthConfig.ApiKeyAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_apiKeyAuthConfig.Deserialize(value["ApiKeyAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_apiKeyAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("CamAuthConfig") && !value["CamAuthConfig"].IsNull())
    {
        if (!value["CamAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthConfig.CamAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_camAuthConfig.Deserialize(value["CamAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_camAuthConfigHasBeenSet = true;
    }

    if (value.HasMember("OAuthConfig") && !value["OAuthConfig"].IsNull())
    {
        if (!value["OAuthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthConfig.OAuthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oAuthConfig.Deserialize(value["OAuthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oAuthConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_apiKeyAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiKeyAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_camAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_camAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oAuthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OAuthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oAuthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t AuthConfig::GetAuthType() const
{
    return m_authType;
}

void AuthConfig::SetAuthType(const int64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool AuthConfig::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

ApiKeyAuthConfig AuthConfig::GetApiKeyAuthConfig() const
{
    return m_apiKeyAuthConfig;
}

void AuthConfig::SetApiKeyAuthConfig(const ApiKeyAuthConfig& _apiKeyAuthConfig)
{
    m_apiKeyAuthConfig = _apiKeyAuthConfig;
    m_apiKeyAuthConfigHasBeenSet = true;
}

bool AuthConfig::ApiKeyAuthConfigHasBeenSet() const
{
    return m_apiKeyAuthConfigHasBeenSet;
}

CamAuthConfig AuthConfig::GetCamAuthConfig() const
{
    return m_camAuthConfig;
}

void AuthConfig::SetCamAuthConfig(const CamAuthConfig& _camAuthConfig)
{
    m_camAuthConfig = _camAuthConfig;
    m_camAuthConfigHasBeenSet = true;
}

bool AuthConfig::CamAuthConfigHasBeenSet() const
{
    return m_camAuthConfigHasBeenSet;
}

OAuthConfig AuthConfig::GetOAuthConfig() const
{
    return m_oAuthConfig;
}

void AuthConfig::SetOAuthConfig(const OAuthConfig& _oAuthConfig)
{
    m_oAuthConfig = _oAuthConfig;
    m_oAuthConfigHasBeenSet = true;
}

bool AuthConfig::OAuthConfigHasBeenSet() const
{
    return m_oAuthConfigHasBeenSet;
}

