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

#include <tencentcloud/ccc/v20200210/model/SessionEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

SessionEvent::SessionEvent() :
    m_timestampHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_staffEventDetailHasBeenSet(false)
{
}

CoreInternalOutcome SessionEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionEvent.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionEvent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("StaffEventDetail") && !value["StaffEventDetail"].IsNull())
    {
        if (!value["StaffEventDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionEvent.StaffEventDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staffEventDetail.Deserialize(value["StaffEventDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staffEventDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_staffEventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaffEventDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staffEventDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t SessionEvent::GetTimestamp() const
{
    return m_timestamp;
}

void SessionEvent::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool SessionEvent::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string SessionEvent::GetEventType() const
{
    return m_eventType;
}

void SessionEvent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool SessionEvent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

EventStaffDetail SessionEvent::GetStaffEventDetail() const
{
    return m_staffEventDetail;
}

void SessionEvent::SetStaffEventDetail(const EventStaffDetail& _staffEventDetail)
{
    m_staffEventDetail = _staffEventDetail;
    m_staffEventDetailHasBeenSet = true;
}

bool SessionEvent::StaffEventDetailHasBeenSet() const
{
    return m_staffEventDetailHasBeenSet;
}

