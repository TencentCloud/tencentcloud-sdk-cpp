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

#include <tencentcloud/adp/v20260520/model/PluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginConfig::PluginConfig() :
    m_apiPluginConfigHasBeenSet(false),
    m_appPluginConfigHasBeenSet(false),
    m_mCPPluginConfigHasBeenSet(false)
{
}

CoreInternalOutcome PluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiPluginConfig") && !value["ApiPluginConfig"].IsNull())
    {
        if (!value["ApiPluginConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfig.ApiPluginConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_apiPluginConfig.Deserialize(value["ApiPluginConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_apiPluginConfigHasBeenSet = true;
    }

    if (value.HasMember("AppPluginConfig") && !value["AppPluginConfig"].IsNull())
    {
        if (!value["AppPluginConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfig.AppPluginConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appPluginConfig.Deserialize(value["AppPluginConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appPluginConfigHasBeenSet = true;
    }

    if (value.HasMember("MCPPluginConfig") && !value["MCPPluginConfig"].IsNull())
    {
        if (!value["MCPPluginConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfig.MCPPluginConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mCPPluginConfig.Deserialize(value["MCPPluginConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mCPPluginConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiPluginConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPluginConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiPluginConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appPluginConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPluginConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appPluginConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mCPPluginConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPPluginConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mCPPluginConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


ApiPluginConfig PluginConfig::GetApiPluginConfig() const
{
    return m_apiPluginConfig;
}

void PluginConfig::SetApiPluginConfig(const ApiPluginConfig& _apiPluginConfig)
{
    m_apiPluginConfig = _apiPluginConfig;
    m_apiPluginConfigHasBeenSet = true;
}

bool PluginConfig::ApiPluginConfigHasBeenSet() const
{
    return m_apiPluginConfigHasBeenSet;
}

AppPluginConfig PluginConfig::GetAppPluginConfig() const
{
    return m_appPluginConfig;
}

void PluginConfig::SetAppPluginConfig(const AppPluginConfig& _appPluginConfig)
{
    m_appPluginConfig = _appPluginConfig;
    m_appPluginConfigHasBeenSet = true;
}

bool PluginConfig::AppPluginConfigHasBeenSet() const
{
    return m_appPluginConfigHasBeenSet;
}

MCPPluginConfig PluginConfig::GetMCPPluginConfig() const
{
    return m_mCPPluginConfig;
}

void PluginConfig::SetMCPPluginConfig(const MCPPluginConfig& _mCPPluginConfig)
{
    m_mCPPluginConfig = _mCPPluginConfig;
    m_mCPPluginConfigHasBeenSet = true;
}

bool PluginConfig::MCPPluginConfigHasBeenSet() const
{
    return m_mCPPluginConfigHasBeenSet;
}

