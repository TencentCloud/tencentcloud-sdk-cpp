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

#include <tencentcloud/adp/v20260520/model/AppTriggerSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppTriggerSummary::AppTriggerSummary() :
    m_appIdHasBeenSet(false),
    m_executeTypeHasBeenSet(false),
    m_failedCountHasBeenSet(false),
    m_lastSessionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_triggerIdHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_triggerStatusHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_unreadRunLogCountHasBeenSet(false)
{
}

CoreInternalOutcome AppTriggerSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ExecuteType") && !value["ExecuteType"].IsNull())
    {
        if (!value["ExecuteType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.ExecuteType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executeType = value["ExecuteType"].GetInt64();
        m_executeTypeHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.FailedCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = string(value["FailedCount"].GetString());
        m_failedCountHasBeenSet = true;
    }

    if (value.HasMember("LastSessionId") && !value["LastSessionId"].IsNull())
    {
        if (!value["LastSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.LastSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastSessionId = string(value["LastSessionId"].GetString());
        m_lastSessionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.SuccessCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = string(value["SuccessCount"].GetString());
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("TriggerId") && !value["TriggerId"].IsNull())
    {
        if (!value["TriggerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.TriggerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerId = string(value["TriggerId"].GetString());
        m_triggerIdHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerStatus") && !value["TriggerStatus"].IsNull())
    {
        if (!value["TriggerStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.TriggerStatus` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.TriggerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = value["TriggerType"].GetInt64();
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("UnreadRunLogCount") && !value["UnreadRunLogCount"].IsNull())
    {
        if (!value["UnreadRunLogCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppTriggerSummary.UnreadRunLogCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unreadRunLogCount = string(value["UnreadRunLogCount"].GetString());
        m_unreadRunLogCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppTriggerSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
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

    if (m_lastSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastSessionId.c_str(), allocator).Move(), allocator);
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

    if (m_unreadRunLogCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnreadRunLogCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unreadRunLogCount.c_str(), allocator).Move(), allocator);
    }

}


string AppTriggerSummary::GetAppId() const
{
    return m_appId;
}

void AppTriggerSummary::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AppTriggerSummary::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t AppTriggerSummary::GetExecuteType() const
{
    return m_executeType;
}

void AppTriggerSummary::SetExecuteType(const int64_t& _executeType)
{
    m_executeType = _executeType;
    m_executeTypeHasBeenSet = true;
}

bool AppTriggerSummary::ExecuteTypeHasBeenSet() const
{
    return m_executeTypeHasBeenSet;
}

string AppTriggerSummary::GetFailedCount() const
{
    return m_failedCount;
}

void AppTriggerSummary::SetFailedCount(const string& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool AppTriggerSummary::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

string AppTriggerSummary::GetLastSessionId() const
{
    return m_lastSessionId;
}

void AppTriggerSummary::SetLastSessionId(const string& _lastSessionId)
{
    m_lastSessionId = _lastSessionId;
    m_lastSessionIdHasBeenSet = true;
}

bool AppTriggerSummary::LastSessionIdHasBeenSet() const
{
    return m_lastSessionIdHasBeenSet;
}

int64_t AppTriggerSummary::GetStatus() const
{
    return m_status;
}

void AppTriggerSummary::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AppTriggerSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AppTriggerSummary::GetSuccessCount() const
{
    return m_successCount;
}

void AppTriggerSummary::SetSuccessCount(const string& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool AppTriggerSummary::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

string AppTriggerSummary::GetTriggerId() const
{
    return m_triggerId;
}

void AppTriggerSummary::SetTriggerId(const string& _triggerId)
{
    m_triggerId = _triggerId;
    m_triggerIdHasBeenSet = true;
}

bool AppTriggerSummary::TriggerIdHasBeenSet() const
{
    return m_triggerIdHasBeenSet;
}

string AppTriggerSummary::GetTriggerName() const
{
    return m_triggerName;
}

void AppTriggerSummary::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool AppTriggerSummary::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

TriggerStatus AppTriggerSummary::GetTriggerStatus() const
{
    return m_triggerStatus;
}

void AppTriggerSummary::SetTriggerStatus(const TriggerStatus& _triggerStatus)
{
    m_triggerStatus = _triggerStatus;
    m_triggerStatusHasBeenSet = true;
}

bool AppTriggerSummary::TriggerStatusHasBeenSet() const
{
    return m_triggerStatusHasBeenSet;
}

int64_t AppTriggerSummary::GetTriggerType() const
{
    return m_triggerType;
}

void AppTriggerSummary::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool AppTriggerSummary::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string AppTriggerSummary::GetUnreadRunLogCount() const
{
    return m_unreadRunLogCount;
}

void AppTriggerSummary::SetUnreadRunLogCount(const string& _unreadRunLogCount)
{
    m_unreadRunLogCount = _unreadRunLogCount;
    m_unreadRunLogCountHasBeenSet = true;
}

bool AppTriggerSummary::UnreadRunLogCountHasBeenSet() const
{
    return m_unreadRunLogCountHasBeenSet;
}

