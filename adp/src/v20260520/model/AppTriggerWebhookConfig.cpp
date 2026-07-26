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

#include <tencentcloud/adp/v20260520/model/AppTriggerWebhookConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerWebhookConfig::AppTriggerWebhookConfig() :
    m_paramSchemaConfigHasBeenSet(false),
    m_webhookKeyHasBeenSet(false),
    m_webhookTokenHasBeenSet(false),
    m_webhookUrlHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerWebhookConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamSchemaConfig") && !value["ParamSchemaConfig"].IsNull())
    {
        if (!value["ParamSchemaConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfig.ParamSchemaConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_paramSchemaConfig.Deserialize(value["ParamSchemaConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paramSchemaConfigHasBeenSet = true;
    }

    if (value.HasMember("WebhookKey") && !value["WebhookKey"].IsNull())
    {
        if (!value["WebhookKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfig.WebhookKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookKey = string(value["WebhookKey"].GetString());
        m_webhookKeyHasBeenSet = true;
    }

    if (value.HasMember("WebhookToken") && !value["WebhookToken"].IsNull())
    {
        if (!value["WebhookToken"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfig.WebhookToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookToken = string(value["WebhookToken"].GetString());
        m_webhookTokenHasBeenSet = true;
    }

    if (value.HasMember("WebhookUrl") && !value["WebhookUrl"].IsNull())
    {
        if (!value["WebhookUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerWebhookConfig.WebhookUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhookUrl = string(value["WebhookUrl"].GetString());
        m_webhookUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerWebhookConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramSchemaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamSchemaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_paramSchemaConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webhookKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookKey.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookToken.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhookUrl.c_str(), allocator).Move(), allocator);
    }

}


AppTriggerWebhookParamSchemaConfig AppTriggerWebhookConfig::GetParamSchemaConfig() const
{
    return m_paramSchemaConfig;
}

void AppTriggerWebhookConfig::SetParamSchemaConfig(const AppTriggerWebhookParamSchemaConfig& _paramSchemaConfig)
{
    m_paramSchemaConfig = _paramSchemaConfig;
    m_paramSchemaConfigHasBeenSet = true;
}

bool AppTriggerWebhookConfig::ParamSchemaConfigHasBeenSet() const
{
    return m_paramSchemaConfigHasBeenSet;
}

string AppTriggerWebhookConfig::GetWebhookKey() const
{
    return m_webhookKey;
}

void AppTriggerWebhookConfig::SetWebhookKey(const string& _webhookKey)
{
    m_webhookKey = _webhookKey;
    m_webhookKeyHasBeenSet = true;
}

bool AppTriggerWebhookConfig::WebhookKeyHasBeenSet() const
{
    return m_webhookKeyHasBeenSet;
}

string AppTriggerWebhookConfig::GetWebhookToken() const
{
    return m_webhookToken;
}

void AppTriggerWebhookConfig::SetWebhookToken(const string& _webhookToken)
{
    m_webhookToken = _webhookToken;
    m_webhookTokenHasBeenSet = true;
}

bool AppTriggerWebhookConfig::WebhookTokenHasBeenSet() const
{
    return m_webhookTokenHasBeenSet;
}

string AppTriggerWebhookConfig::GetWebhookUrl() const
{
    return m_webhookUrl;
}

void AppTriggerWebhookConfig::SetWebhookUrl(const string& _webhookUrl)
{
    m_webhookUrl = _webhookUrl;
    m_webhookUrlHasBeenSet = true;
}

bool AppTriggerWebhookConfig::WebhookUrlHasBeenSet() const
{
    return m_webhookUrlHasBeenSet;
}

