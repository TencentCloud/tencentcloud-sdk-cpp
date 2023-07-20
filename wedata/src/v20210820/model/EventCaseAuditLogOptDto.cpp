/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/wedata/v20210820/model/EventCaseAuditLogOptDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventCaseAuditLogOptDto::EventCaseAuditLogOptDto() :
    m_caseIdHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_tTLHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_dimensionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventTriggerTimestampHasBeenSet(false),
    m_logTimestampHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome EventCaseAuditLogOptDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseId") && !value["CaseId"].IsNull())
    {
        if (!value["CaseId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.CaseId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_caseId = string(value["CaseId"].GetString());
        m_caseIdHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }

    if (value.HasMember("EventBroadcastType") && !value["EventBroadcastType"].IsNull())
    {
        if (!value["EventBroadcastType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.EventBroadcastType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBroadcastType = string(value["EventBroadcastType"].GetString());
        m_eventBroadcastTypeHasBeenSet = true;
    }

    if (value.HasMember("TTL") && !value["TTL"].IsNull())
    {
        if (!value["TTL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.TTL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tTL = value["TTL"].GetUint64();
        m_tTLHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("Dimension") && !value["Dimension"].IsNull())
    {
        if (!value["Dimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.Dimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimension = string(value["Dimension"].GetString());
        m_dimensionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventTriggerTimestamp") && !value["EventTriggerTimestamp"].IsNull())
    {
        if (!value["EventTriggerTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.EventTriggerTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTriggerTimestamp = string(value["EventTriggerTimestamp"].GetString());
        m_eventTriggerTimestampHasBeenSet = true;
    }

    if (value.HasMember("LogTimestamp") && !value["LogTimestamp"].IsNull())
    {
        if (!value["LogTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.LogTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTimestamp = string(value["LogTimestamp"].GetString());
        m_logTimestampHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventCaseAuditLogOptDto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventCaseAuditLogOptDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_caseId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBroadcastTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBroadcastType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBroadcastType.c_str(), allocator).Move(), allocator);
    }

    if (m_tTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tTL, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTriggerTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTriggerTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTriggerTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_logTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string EventCaseAuditLogOptDto::GetCaseId() const
{
    return m_caseId;
}

void EventCaseAuditLogOptDto::SetCaseId(const string& _caseId)
{
    m_caseId = _caseId;
    m_caseIdHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::CaseIdHasBeenSet() const
{
    return m_caseIdHasBeenSet;
}

string EventCaseAuditLogOptDto::GetEventName() const
{
    return m_eventName;
}

void EventCaseAuditLogOptDto::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string EventCaseAuditLogOptDto::GetEventType() const
{
    return m_eventType;
}

void EventCaseAuditLogOptDto::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventCaseAuditLogOptDto::GetEventSubType() const
{
    return m_eventSubType;
}

void EventCaseAuditLogOptDto::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string EventCaseAuditLogOptDto::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void EventCaseAuditLogOptDto::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

uint64_t EventCaseAuditLogOptDto::GetTTL() const
{
    return m_tTL;
}

void EventCaseAuditLogOptDto::SetTTL(const uint64_t& _tTL)
{
    m_tTL = _tTL;
    m_tTLHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::TTLHasBeenSet() const
{
    return m_tTLHasBeenSet;
}

string EventCaseAuditLogOptDto::GetTimeUnit() const
{
    return m_timeUnit;
}

void EventCaseAuditLogOptDto::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string EventCaseAuditLogOptDto::GetDimension() const
{
    return m_dimension;
}

void EventCaseAuditLogOptDto::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string EventCaseAuditLogOptDto::GetStatus() const
{
    return m_status;
}

void EventCaseAuditLogOptDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EventCaseAuditLogOptDto::GetEventTriggerTimestamp() const
{
    return m_eventTriggerTimestamp;
}

void EventCaseAuditLogOptDto::SetEventTriggerTimestamp(const string& _eventTriggerTimestamp)
{
    m_eventTriggerTimestamp = _eventTriggerTimestamp;
    m_eventTriggerTimestampHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::EventTriggerTimestampHasBeenSet() const
{
    return m_eventTriggerTimestampHasBeenSet;
}

string EventCaseAuditLogOptDto::GetLogTimestamp() const
{
    return m_logTimestamp;
}

void EventCaseAuditLogOptDto::SetLogTimestamp(const string& _logTimestamp)
{
    m_logTimestamp = _logTimestamp;
    m_logTimestampHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::LogTimestampHasBeenSet() const
{
    return m_logTimestampHasBeenSet;
}

string EventCaseAuditLogOptDto::GetDescription() const
{
    return m_description;
}

void EventCaseAuditLogOptDto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventCaseAuditLogOptDto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

