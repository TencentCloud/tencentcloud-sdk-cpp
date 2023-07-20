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

#include <tencentcloud/wedata/v20210820/model/EventListenerOpsDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

EventListenerOpsDto::EventListenerOpsDto() :
    m_eventNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_creationTimestampHasBeenSet(false)
{
}

CoreInternalOutcome EventListenerOpsDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerOpsDto.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerOpsDto.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerOpsDto.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerOpsDto.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("CreationTimestamp") && !value["CreationTimestamp"].IsNull())
    {
        if (!value["CreationTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventListenerOpsDto.CreationTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTimestamp = string(value["CreationTimestamp"].GetString());
        m_creationTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventListenerOpsDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string EventListenerOpsDto::GetEventName() const
{
    return m_eventName;
}

void EventListenerOpsDto::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool EventListenerOpsDto::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string EventListenerOpsDto::GetKey() const
{
    return m_key;
}

void EventListenerOpsDto::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EventListenerOpsDto::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EventListenerOpsDto::GetType() const
{
    return m_type;
}

void EventListenerOpsDto::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool EventListenerOpsDto::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string EventListenerOpsDto::GetProperties() const
{
    return m_properties;
}

void EventListenerOpsDto::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool EventListenerOpsDto::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string EventListenerOpsDto::GetCreationTimestamp() const
{
    return m_creationTimestamp;
}

void EventListenerOpsDto::SetCreationTimestamp(const string& _creationTimestamp)
{
    m_creationTimestamp = _creationTimestamp;
    m_creationTimestampHasBeenSet = true;
}

bool EventListenerOpsDto::CreationTimestampHasBeenSet() const
{
    return m_creationTimestampHasBeenSet;
}

