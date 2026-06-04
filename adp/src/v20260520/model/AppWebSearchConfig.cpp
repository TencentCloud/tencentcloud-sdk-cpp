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

#include <tencentcloud/adp/v20260520/model/AppWebSearchConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppWebSearchConfig::AppWebSearchConfig() :
    m_apiKeyHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_topNHasBeenSet(false)
{
}

CoreInternalOutcome AppWebSearchConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppWebSearchConfig.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppWebSearchConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppWebSearchConfig.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("TopN") && !value["TopN"].IsNull())
    {
        if (!value["TopN"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppWebSearchConfig.TopN` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topN = value["TopN"].GetUint64();
        m_topNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppWebSearchConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topN, allocator);
    }

}


string AppWebSearchConfig::GetApiKey() const
{
    return m_apiKey;
}

void AppWebSearchConfig::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool AppWebSearchConfig::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

bool AppWebSearchConfig::GetEnabled() const
{
    return m_enabled;
}

void AppWebSearchConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AppWebSearchConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string AppWebSearchConfig::GetProvider() const
{
    return m_provider;
}

void AppWebSearchConfig::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool AppWebSearchConfig::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

uint64_t AppWebSearchConfig::GetTopN() const
{
    return m_topN;
}

void AppWebSearchConfig::SetTopN(const uint64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool AppWebSearchConfig::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

