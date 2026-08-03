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

#include <tencentcloud/adp/v20260520/model/TriggerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

TriggerStatus::TriggerStatus() :
    m_scheduledStatusHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_webhookStatusHasBeenSet(false)
{
}

CoreInternalOutcome TriggerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScheduledStatus") && !value["ScheduledStatus"].IsNull())
    {
        if (!value["ScheduledStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStatus.ScheduledStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scheduledStatus.Deserialize(value["ScheduledStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scheduledStatusHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStatus.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStatus.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("WebhookStatus") && !value["WebhookStatus"].IsNull())
    {
        if (!value["WebhookStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStatus.WebhookStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webhookStatus.Deserialize(value["WebhookStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webhookStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scheduledStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScheduledStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scheduledStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_webhookStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebhookStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webhookStatus.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppTriggerScheduleStatus TriggerStatus::GetScheduledStatus() const
{
    return m_scheduledStatus;
}

void TriggerStatus::SetScheduledStatus(const AppTriggerScheduleStatus& _scheduledStatus)
{
    m_scheduledStatus = _scheduledStatus;
    m_scheduledStatusHasBeenSet = true;
}

bool TriggerStatus::ScheduledStatusHasBeenSet() const
{
    return m_scheduledStatusHasBeenSet;
}

int64_t TriggerStatus::GetScope() const
{
    return m_scope;
}

void TriggerStatus::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool TriggerStatus::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string TriggerStatus::GetUserId() const
{
    return m_userId;
}

void TriggerStatus::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TriggerStatus::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

AppTriggerWebhookStatus TriggerStatus::GetWebhookStatus() const
{
    return m_webhookStatus;
}

void TriggerStatus::SetWebhookStatus(const AppTriggerWebhookStatus& _webhookStatus)
{
    m_webhookStatus = _webhookStatus;
    m_webhookStatusHasBeenSet = true;
}

bool TriggerStatus::WebhookStatusHasBeenSet() const
{
    return m_webhookStatusHasBeenSet;
}

