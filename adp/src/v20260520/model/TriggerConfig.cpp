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

#include <tencentcloud/adp/v20260520/model/TriggerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TriggerConfig::TriggerConfig() :
    m_scheduledConfigHasBeenSet(false),
    m_webhookConfigHasBeenSet(false)
{
}

CoreInternalOutcome TriggerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledConfig") && !value["ScheduledConfig"].IsNull())
    {
        if (!value["ScheduledConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerConfig.ScheduledConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduledConfig.Deserialize(value["ScheduledConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduledConfigHasBeenSet = true;
    }

    if (value.HasMember("WebhookConfig") && !value["WebhookConfig"].IsNull())
    {
        if (!value["WebhookConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerConfig.WebhookConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webhookConfig.Deserialize(value["WebhookConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webhookConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webhookConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webhookConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppTriggerScheduleConfig TriggerConfig::GetScheduledConfig() const
{
    return m_scheduledConfig;
}

void TriggerConfig::SetScheduledConfig(const AppTriggerScheduleConfig& _scheduledConfig)
{
    m_scheduledConfig = _scheduledConfig;
    m_scheduledConfigHasBeenSet = true;
}

bool TriggerConfig::ScheduledConfigHasBeenSet() const
{
    return m_scheduledConfigHasBeenSet;
}

AppTriggerWebhookConfig TriggerConfig::GetWebhookConfig() const
{
    return m_webhookConfig;
}

void TriggerConfig::SetWebhookConfig(const AppTriggerWebhookConfig& _webhookConfig)
{
    m_webhookConfig = _webhookConfig;
    m_webhookConfigHasBeenSet = true;
}

bool TriggerConfig::WebhookConfigHasBeenSet() const
{
    return m_webhookConfigHasBeenSet;
}

