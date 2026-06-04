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

#include <tencentcloud/adp/v20260520/model/ToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ToolConfig::ToolConfig() :
    m_apiToolConfigHasBeenSet(false),
    m_appToolConfigHasBeenSet(false),
    m_codeToolConfigHasBeenSet(false),
    m_mCPToolConfigHasBeenSet(false)
{
}

CoreInternalOutcome ToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiToolConfig") && !value["ApiToolConfig"].IsNull())
    {
        if (!value["ApiToolConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfig.ApiToolConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_apiToolConfig.Deserialize(value["ApiToolConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_apiToolConfigHasBeenSet = true;
    }

    if (value.HasMember("AppToolConfig") && !value["AppToolConfig"].IsNull())
    {
        if (!value["AppToolConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfig.AppToolConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appToolConfig.Deserialize(value["AppToolConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appToolConfigHasBeenSet = true;
    }

    if (value.HasMember("CodeToolConfig") && !value["CodeToolConfig"].IsNull())
    {
        if (!value["CodeToolConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfig.CodeToolConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeToolConfig.Deserialize(value["CodeToolConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeToolConfigHasBeenSet = true;
    }

    if (value.HasMember("MCPToolConfig") && !value["MCPToolConfig"].IsNull())
    {
        if (!value["MCPToolConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolConfig.MCPToolConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mCPToolConfig.Deserialize(value["MCPToolConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mCPToolConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiToolConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiToolConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_apiToolConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_appToolConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppToolConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appToolConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeToolConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeToolConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeToolConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mCPToolConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPToolConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mCPToolConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


ApiToolConfig ToolConfig::GetApiToolConfig() const
{
    return m_apiToolConfig;
}

void ToolConfig::SetApiToolConfig(const ApiToolConfig& _apiToolConfig)
{
    m_apiToolConfig = _apiToolConfig;
    m_apiToolConfigHasBeenSet = true;
}

bool ToolConfig::ApiToolConfigHasBeenSet() const
{
    return m_apiToolConfigHasBeenSet;
}

AppToolConfig ToolConfig::GetAppToolConfig() const
{
    return m_appToolConfig;
}

void ToolConfig::SetAppToolConfig(const AppToolConfig& _appToolConfig)
{
    m_appToolConfig = _appToolConfig;
    m_appToolConfigHasBeenSet = true;
}

bool ToolConfig::AppToolConfigHasBeenSet() const
{
    return m_appToolConfigHasBeenSet;
}

CodeToolConfig ToolConfig::GetCodeToolConfig() const
{
    return m_codeToolConfig;
}

void ToolConfig::SetCodeToolConfig(const CodeToolConfig& _codeToolConfig)
{
    m_codeToolConfig = _codeToolConfig;
    m_codeToolConfigHasBeenSet = true;
}

bool ToolConfig::CodeToolConfigHasBeenSet() const
{
    return m_codeToolConfigHasBeenSet;
}

MCPToolConfig ToolConfig::GetMCPToolConfig() const
{
    return m_mCPToolConfig;
}

void ToolConfig::SetMCPToolConfig(const MCPToolConfig& _mCPToolConfig)
{
    m_mCPToolConfig = _mCPToolConfig;
    m_mCPToolConfigHasBeenSet = true;
}

bool ToolConfig::MCPToolConfigHasBeenSet() const
{
    return m_mCPToolConfigHasBeenSet;
}

