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

#include <tencentcloud/wedata/v20210820/model/EventDsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventDsDto::EventDsDto() :
    m_nameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_dimensionFormatHasBeenSet(false),
    m_creationTsHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome EventDsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("TimeToLive") && !value["TimeToLive"].IsNull())
    {
        if (!value["TimeToLive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.TimeToLive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeToLive = value["TimeToLive"].GetInt64();
        m_timeToLiveHasBeenSet = true;
    }

    if (value.HasMember("TimeUnit") && !value["TimeUnit"].IsNull())
    {
        if (!value["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(value["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }

    if (value.HasMember("EventBroadcastType") && !value["EventBroadcastType"].IsNull())
    {
        if (!value["EventBroadcastType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.EventBroadcastType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBroadcastType = string(value["EventBroadcastType"].GetString());
        m_eventBroadcastTypeHasBeenSet = true;
    }

    if (value.HasMember("DimensionFormat") && !value["DimensionFormat"].IsNull())
    {
        if (!value["DimensionFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.DimensionFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionFormat = string(value["DimensionFormat"].GetString());
        m_dimensionFormatHasBeenSet = true;
    }

    if (value.HasMember("CreationTs") && !value["CreationTs"].IsNull())
    {
        if (!value["CreationTs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.CreationTs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTs = string(value["CreationTs"].GetString());
        m_creationTsHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Listeners") && !value["Listeners"].IsNull())
    {
        if (!value["Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventDsDto.Listeners` is not array type"));

        const rapidjson::Value &tmpValue = value["Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EventListenerDTO item;
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

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventDsDto.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventDsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_creationTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTs.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


string EventDsDto::GetName() const
{
    return m_name;
}

void EventDsDto::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventDsDto::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventDsDto::GetEventType() const
{
    return m_eventType;
}

void EventDsDto::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventDsDto::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

int64_t EventDsDto::GetTimeToLive() const
{
    return m_timeToLive;
}

void EventDsDto::SetTimeToLive(const int64_t& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool EventDsDto::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}

string EventDsDto::GetTimeUnit() const
{
    return m_timeUnit;
}

void EventDsDto::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool EventDsDto::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string EventDsDto::GetEventSubType() const
{
    return m_eventSubType;
}

void EventDsDto::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool EventDsDto::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string EventDsDto::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void EventDsDto::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool EventDsDto::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

string EventDsDto::GetDimensionFormat() const
{
    return m_dimensionFormat;
}

void EventDsDto::SetDimensionFormat(const string& _dimensionFormat)
{
    m_dimensionFormat = _dimensionFormat;
    m_dimensionFormatHasBeenSet = true;
}

bool EventDsDto::DimensionFormatHasBeenSet() const
{
    return m_dimensionFormatHasBeenSet;
}

string EventDsDto::GetCreationTs() const
{
    return m_creationTs;
}

void EventDsDto::SetCreationTs(const string& _creationTs)
{
    m_creationTs = _creationTs;
    m_creationTsHasBeenSet = true;
}

bool EventDsDto::CreationTsHasBeenSet() const
{
    return m_creationTsHasBeenSet;
}

string EventDsDto::GetOwner() const
{
    return m_owner;
}

void EventDsDto::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool EventDsDto::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string EventDsDto::GetProperties() const
{
    return m_properties;
}

void EventDsDto::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool EventDsDto::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string EventDsDto::GetDescription() const
{
    return m_description;
}

void EventDsDto::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool EventDsDto::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<EventListenerDTO> EventDsDto::GetListeners() const
{
    return m_listeners;
}

void EventDsDto::SetListeners(const vector<EventListenerDTO>& _listeners)
{
    m_listeners = _listeners;
    m_listenersHasBeenSet = true;
}

bool EventDsDto::ListenersHasBeenSet() const
{
    return m_listenersHasBeenSet;
}

string EventDsDto::GetProjectId() const
{
    return m_projectId;
}

void EventDsDto::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool EventDsDto::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string EventDsDto::GetProjectName() const
{
    return m_projectName;
}

void EventDsDto::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool EventDsDto::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

