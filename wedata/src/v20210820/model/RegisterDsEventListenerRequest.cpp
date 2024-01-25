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

#include <tencentcloud/wedata/v20210820/model/RegisterDsEventListenerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RegisterDsEventListenerRequest::RegisterDsEventListenerRequest() :
    m_projectIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_requestFromSourceHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_eventProjectIdHasBeenSet(false)
{
}

string RegisterDsEventListenerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestFromSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFromSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_requestFromSource.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_eventProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventProjectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterDsEventListenerRequest::GetProjectId() const
{
    return m_projectId;
}

void RegisterDsEventListenerRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RegisterDsEventListenerRequest::GetKey() const
{
    return m_key;
}

void RegisterDsEventListenerRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string RegisterDsEventListenerRequest::GetType() const
{
    return m_type;
}

void RegisterDsEventListenerRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RegisterDsEventListenerRequest::GetEventName() const
{
    return m_eventName;
}

void RegisterDsEventListenerRequest::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string RegisterDsEventListenerRequest::GetRequestFromSource() const
{
    return m_requestFromSource;
}

void RegisterDsEventListenerRequest::SetRequestFromSource(const string& _requestFromSource)
{
    m_requestFromSource = _requestFromSource;
    m_requestFromSourceHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::RequestFromSourceHasBeenSet() const
{
    return m_requestFromSourceHasBeenSet;
}

vector<ParamInfoDs> RegisterDsEventListenerRequest::GetProperties() const
{
    return m_properties;
}

void RegisterDsEventListenerRequest::SetProperties(const vector<ParamInfoDs>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string RegisterDsEventListenerRequest::GetEventProjectId() const
{
    return m_eventProjectId;
}

void RegisterDsEventListenerRequest::SetEventProjectId(const string& _eventProjectId)
{
    m_eventProjectId = _eventProjectId;
    m_eventProjectIdHasBeenSet = true;
}

bool RegisterDsEventListenerRequest::EventProjectIdHasBeenSet() const
{
    return m_eventProjectIdHasBeenSet;
}


