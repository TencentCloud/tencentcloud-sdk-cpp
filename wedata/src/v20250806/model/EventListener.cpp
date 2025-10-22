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

#include <tencentcloud/wedata/v20250806/model/EventListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

EventListener::EventListener() :
    m_eventNameHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_propertiesListHasBeenSet(false)
{
}

CoreInternalOutcome EventListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListener.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("EventSubType") && !value["EventSubType"].IsNull())
    {
        if (!value["EventSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListener.EventSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSubType = string(value["EventSubType"].GetString());
        m_eventSubTypeHasBeenSet = true;
    }

    if (value.HasMember("EventBroadcastType") && !value["EventBroadcastType"].IsNull())
    {
        if (!value["EventBroadcastType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListener.EventBroadcastType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBroadcastType = string(value["EventBroadcastType"].GetString());
        m_eventBroadcastTypeHasBeenSet = true;
    }

    if (value.HasMember("PropertiesList") && !value["PropertiesList"].IsNull())
    {
        if (!value["PropertiesList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventListener.PropertiesList` is not array type"));

        const rapidjson::Value &tmpValue = value["PropertiesList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_propertiesList.push_back(item);
        }
        m_propertiesListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
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

    if (m_propertiesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertiesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_propertiesList.begin(); itr != m_propertiesList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string EventListener::GetEventName() const
{
    return m_eventName;
}

void EventListener::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventListener::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string EventListener::GetEventSubType() const
{
    return m_eventSubType;
}

void EventListener::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool EventListener::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string EventListener::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void EventListener::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool EventListener::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

vector<ParamInfo> EventListener::GetPropertiesList() const
{
    return m_propertiesList;
}

void EventListener::SetPropertiesList(const vector<ParamInfo>& _propertiesList)
{
    m_propertiesList = _propertiesList;
    m_propertiesListHasBeenSet = true;
}

bool EventListener::PropertiesListHasBeenSet() const
{
    return m_propertiesListHasBeenSet;
}

