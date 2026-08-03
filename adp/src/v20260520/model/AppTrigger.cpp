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

#include <tencentcloud/adp/v20260520/model/AppTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTrigger::AppTrigger() :
    m_appIdHasBeenSet(false),
    m_executeConfigHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_pushConfigHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_triggerConfigHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_triggerStatusHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome AppTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ExecuteConfig") && !value["ExecuteConfig"].IsNull())
    {
        if (!value["ExecuteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.ExecuteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executeConfig.Deserialize(value["ExecuteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executeConfigHasBeenSet = true;
    }

    if (value.HasMember("ExecuteType") && !value["ExecuteType"].IsNull())
    {
        if (!value["ExecuteType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.ExecuteType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executeType = value["ExecuteType"].GetInt64();
        m_executeTypeHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.FailedCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = string(value["FailedCount"].GetString());
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("PushConfig") && !value["PushConfig"].IsNull())
    {
        if (!value["PushConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.PushConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pushConfig.Deserialize(value["PushConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pushConfigHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.Scope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetInt64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.SuccessCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = string(value["SuccessCount"].GetString());
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("TriggerConfig") && !value["TriggerConfig"].IsNull())
    {
        if (!value["TriggerConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.TriggerConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerConfig.Deserialize(value["TriggerConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerConfigHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerStatus") && !value["TriggerStatus"].IsNull())
    {
        if (!value["TriggerStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.TriggerStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerStatus.Deserialize(value["TriggerStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerStatusHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTrigger.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_executeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_executeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executeType, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedCount.c_str(), allocator).Move(), allocator);
    }

    if (m_pushConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pushConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successCount.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerId.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerType, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


string AppTrigger::GetAppId() const
{
    return m_appId;
}

void AppTrigger::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppTrigger::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

ExecuteConfig AppTrigger::GetExecuteConfig() const
{
    return m_executeConfig;
}

void AppTrigger::SetExecuteConfig(const ExecuteConfig& _executeConfig)
{
    m_executeConfig = _executeConfig;
    m_executeConfigHasBeenSet = true;
}

bool AppTrigger::ExecuteConfigHasBeenSet() const
{
    return m_executeConfigHasBeenSet;
}

int64_t AppTrigger::GetExecuteType() const
{
    return m_executeType;
}

void AppTrigger::SetExecuteType(const int64_t& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool AppTrigger::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

string AppTrigger::GetFailedCount() const
{
    return m_failedCount;
}

void AppTrigger::SetFailedCount(const string& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool AppTrigger::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

TimerPushConfig AppTrigger::GetPushConfig() const
{
    return m_pushConfig;
}

void AppTrigger::SetPushConfig(const TimerPushConfig& _pushConfig)
{
    m_pushConfig = _pushConfig;
    m_pushConfigHasBeenSet = true;
}

bool AppTrigger::PushConfigHasBeenSet() const
{
    return m_pushConfigHasBeenSet;
}

int64_t AppTrigger::GetScope() const
{
    return m_scope;
}

void AppTrigger::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool AppTrigger::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

int64_t AppTrigger::GetStatus() const
{
    return m_status;
}

void AppTrigger::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppTrigger::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AppTrigger::GetSuccessCount() const
{
    return m_successCount;
}

void AppTrigger::SetSuccessCount(const string& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool AppTrigger::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

TriggerConfig AppTrigger::GetTriggerConfig() const
{
    return m_triggerConfig;
}

void AppTrigger::SetTriggerConfig(const TriggerConfig& _triggerConfig)
{
    m_triggerConfig = _triggerConfig;
    m_triggerConfigHasBeenSet = true;
}

bool AppTrigger::TriggerConfigHasBeenSet() const
{
    return m_triggerConfigHasBeenSet;
}

string AppTrigger::GetTriggerId() const
{
    return m_triggerId;
}

void AppTrigger::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AppTrigger::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string AppTrigger::GetTriggerName() const
{
    return m_triggerName;
}

void AppTrigger::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool AppTrigger::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

TriggerStatus AppTrigger::GetTriggerStatus() const
{
    return m_triggerStatus;
}

void AppTrigger::SetTriggerStatus(const TriggerStatus& _triggerStatus)
{
    m_triggerStatus = _triggerStatus;
    m_triggerStatusHasBeenSet = true;
}

bool AppTrigger::TriggerStatusHasBeenSet() const
{
    return m_triggerStatusHasBeenSet;
}

int64_t AppTrigger::GetTriggerType() const
{
    return m_triggerType;
}

void AppTrigger::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AppTrigger::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string AppTrigger::GetUserId() const
{
    return m_userId;
}

void AppTrigger::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AppTrigger::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

