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

#include <tencentcloud/tcb/v20180608/model/CloudAppTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudAppTrigger::CloudAppTrigger() :
    m_webhookHasBeenSet(false)
{
}

CoreInternalOutcome CloudAppTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Webhook") && !value["Webhook"].IsNull())
    {
        if (!value["Webhook"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAppTrigger.Webhook` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webhook.Deserialize(value["Webhook"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webhookHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAppTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webhookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webhook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webhook.ToJsonObject(value[key.c_str()], allocator);
    }

}


CloudAppWebHook CloudAppTrigger::GetWebhook() const
{
    return m_webhook;
}

void CloudAppTrigger::SetWebhook(const CloudAppWebHook& _webhook)
{
    m_webhook = _webhook;
    m_webhookHasBeenSet = true;
}

bool CloudAppTrigger::WebhookHasBeenSet() const
{
    return m_webhookHasBeenSet;
}

