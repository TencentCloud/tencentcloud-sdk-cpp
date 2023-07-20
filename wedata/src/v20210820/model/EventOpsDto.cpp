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

#include <tencentcloud/wedata/v20210820/model/EventOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventOpsDto::EventOpsDto() :
    m_nameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_dimensionFormatHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_eventCasesHasBeenSet(false)
{
}

CoreInternalOutcome EventOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }

    if (value.HasMember("EventBroadcastType") && !value["EventBroadcastType"].IsNull())
    {
        if (!value["EventBroadcastType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.EventBroadcastType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBroadcastType = string(value["EventBroadcastType"].GetString());
        m_eventBroadcastTypeHasBeenSet = true;
    }

    if (value.HasMember("DimensionFormat") && !value["DimensionFormat"].IsNull())
    {
        if (!value["DimensionFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.DimensionFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionFormat = string(value["DimensionFormat"].GetString());
        m_dimensionFormatHasBeenSet = true;
    }

    if (value.HasMember("TimeToLive") && !value["TimeToLive"].IsNull())
    {
        if (!value["TimeToLive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.TimeToLive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeToLive = value["TimeToLive"].GetUint64();
        m_timeToLiveHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.CreationTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = string(value["CreationTimestamp"].GetString());
        m_creationTimestampHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Listeners") && !value["Listeners"].IsNull())
    {
        if (!value["Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.Listeners` is not array type"));

        const rapidjson::Value &tmpValue = value["Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventListenerOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listeners.push_back(item);
        }
        m_listenersHasBeenSet = true;
    }

    if (value.HasMember("EventCases") && !value["EventCases"].IsNull())
    {
        if (!value["EventCases"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventOpsDto.EventCases` is not array type"));

        const rapidjson::Value &tmpValue = value["EventCases"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventCaseOpsDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventCases.push_back(item);
        }
        m_eventCasesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_dimensionFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeToLive, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_listenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listeners.begin(); itr != m_listeners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eventCasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCases";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventCases.begin(); itr != m_eventCases.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventOpsDto::GetName() const
{
    return m_name;
}

void EventOpsDto::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventOpsDto::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventOpsDto::GetEventType() const
{
    return m_eventType;
}

void EventOpsDto::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventOpsDto::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventOpsDto::GetEventSubType() const
{
    return m_eventSubType;
}

void EventOpsDto::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool EventOpsDto::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string EventOpsDto::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void EventOpsDto::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool EventOpsDto::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

string EventOpsDto::GetDimensionFormat() const
{
    return m_dimensionFormat;
}

void EventOpsDto::SetDimensionFormat(const string& _dimensionFormat)
{
    m_dimensionFormat = _dimensionFormat;
    m_dimensionFormatHasBeenSet = true;
}

bool EventOpsDto::DimensionFormatHasBeenSet() const
{
    return m_dimensionFormatHasBeenSet;
}

uint64_t EventOpsDto::GetTimeToLive() const
{
    return m_timeToLive;
}

void EventOpsDto::SetTimeToLive(const uint64_t& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool EventOpsDto::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}

string EventOpsDto::GetTimeUnit() const
{
    return m_timeUnit;
}

void EventOpsDto::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool EventOpsDto::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string EventOpsDto::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

void EventOpsDto::SetCreationTimestamp(const string& _creationTimestamp)
{
    m_creationTimestamp = _creationTimestamp;
    m_creationTimestampHasBeenSet = true;
}

bool EventOpsDto::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}

string EventOpsDto::GetOwner() const
{
    return m_owner;
}

void EventOpsDto::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool EventOpsDto::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string EventOpsDto::GetProperties() const
{
    return m_properties;
}

void EventOpsDto::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool EventOpsDto::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string EventOpsDto::GetDescription() const
{
    return m_description;
}

void EventOpsDto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventOpsDto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<EventListenerOpsDto> EventOpsDto::GetListeners() const
{
    return m_listeners;
}

void EventOpsDto::SetListeners(const vector<EventListenerOpsDto>& _listeners)
{
    m_listeners = _listeners;
    m_listenersHasBeenSet = true;
}

bool EventOpsDto::ListenersHasBeenSet() const
{
    return m_listenersHasBeenSet;
}

vector<EventCaseOpsDto> EventOpsDto::GetEventCases() const
{
    return m_eventCases;
}

void EventOpsDto::SetEventCases(const vector<EventCaseOpsDto>& _eventCases)
{
    m_eventCases = _eventCases;
    m_eventCasesHasBeenSet = true;
}

bool EventOpsDto::EventCasesHasBeenSet() const
{
    return m_eventCasesHasBeenSet;
}

