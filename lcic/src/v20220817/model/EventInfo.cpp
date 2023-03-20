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

#include <tencentcloud/lcic/v20220817/model/EventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

EventInfo::EventInfo() :
    m_timestampHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventDataHasBeenSet(false)
{
}

CoreInternalOutcome EventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Timestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetUint64();
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventData") && !value["EventData"].IsNull())
    {
        if (!value["EventData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EventData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventData.Deserialize(value["EventData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_eventDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventData.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t EventInfo::GetTimestamp() const
{
    return m_timestamp;
}

void EventInfo::SetTimestamp(const uint64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool EventInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

string EventInfo::GetEventType() const
{
    return m_eventType;
}

void EventInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

EventDataInfo EventInfo::GetEventData() const
{
    return m_eventData;
}

void EventInfo::SetEventData(const EventDataInfo& _eventData)
{
    m_eventData = _eventData;
    m_eventDataHasBeenSet = true;
}

bool EventInfo::EventDataHasBeenSet() const
{
    return m_eventDataHasBeenSet;
}

