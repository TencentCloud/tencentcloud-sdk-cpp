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

#include <tencentcloud/es/v20180416/model/EventTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

EventTypeInfo::EventTypeInfo() :
    m_eventTypeHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false)
{
}

CoreInternalOutcome EventTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventTypeInfo.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventTypeName") && !value["EventTypeName"].IsNull())
    {
        if (!value["EventTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTypeInfo.EventTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTypeName = string(value["EventTypeName"].GetString());
        m_eventTypeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_eventTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTypeName.c_str(), allocator).Move(), allocator);
    }

}


int64_t EventTypeInfo::GetEventType() const
{
    return m_eventType;
}

void EventTypeInfo::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventTypeInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventTypeInfo::GetEventTypeName() const
{
    return m_eventTypeName;
}

void EventTypeInfo::SetEventTypeName(const string& _eventTypeName)
{
    m_eventTypeName = _eventTypeName;
    m_eventTypeNameHasBeenSet = true;
}

bool EventTypeInfo::EventTypeNameHasBeenSet() const
{
    return m_eventTypeNameHasBeenSet;
}

