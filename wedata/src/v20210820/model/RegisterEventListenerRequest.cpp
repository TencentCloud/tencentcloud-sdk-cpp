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

#include <tencentcloud/wedata/v20210820/model/RegisterEventListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RegisterEventListenerRequest::RegisterEventListenerRequest() :
    m_keyHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

string RegisterEventListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterEventListenerRequest::GetKey() const
{
    return m_key;
}

void RegisterEventListenerRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool RegisterEventListenerRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string RegisterEventListenerRequest::GetEventName() const
{
    return m_eventName;
}

void RegisterEventListenerRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool RegisterEventListenerRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string RegisterEventListenerRequest::GetProjectId() const
{
    return m_projectId;
}

void RegisterEventListenerRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RegisterEventListenerRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RegisterEventListenerRequest::GetType() const
{
    return m_type;
}

void RegisterEventListenerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RegisterEventListenerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RegisterEventListenerRequest::GetProperties() const
{
    return m_properties;
}

void RegisterEventListenerRequest::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool RegisterEventListenerRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}


