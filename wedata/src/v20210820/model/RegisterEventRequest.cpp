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

#include <tencentcloud/wedata/v20210820/model/RegisterEventRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RegisterEventRequest::RegisterEventRequest() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_eventSubTypeHasBeenSet(false),
    m_eventBroadcastTypeHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_dimensionFormatHasBeenSet(false),
    m_timeToLiveHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string RegisterEventRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventBroadcastTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBroadcastType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventBroadcastType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimensionFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_timeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeToLive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeToLive, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterEventRequest::GetProjectId() const
{
    return m_projectId;
}

void RegisterEventRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RegisterEventRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RegisterEventRequest::GetName() const
{
    return m_name;
}

void RegisterEventRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RegisterEventRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RegisterEventRequest::GetEventSubType() const
{
    return m_eventSubType;
}

void RegisterEventRequest::SetEventSubType(const string& _eventSubType)
{
    m_eventSubType = _eventSubType;
    m_eventSubTypeHasBeenSet = true;
}

bool RegisterEventRequest::EventSubTypeHasBeenSet() const
{
    return m_eventSubTypeHasBeenSet;
}

string RegisterEventRequest::GetEventBroadcastType() const
{
    return m_eventBroadcastType;
}

void RegisterEventRequest::SetEventBroadcastType(const string& _eventBroadcastType)
{
    m_eventBroadcastType = _eventBroadcastType;
    m_eventBroadcastTypeHasBeenSet = true;
}

bool RegisterEventRequest::EventBroadcastTypeHasBeenSet() const
{
    return m_eventBroadcastTypeHasBeenSet;
}

string RegisterEventRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void RegisterEventRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool RegisterEventRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

string RegisterEventRequest::GetOwner() const
{
    return m_owner;
}

void RegisterEventRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool RegisterEventRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string RegisterEventRequest::GetEventType() const
{
    return m_eventType;
}

void RegisterEventRequest::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool RegisterEventRequest::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string RegisterEventRequest::GetDimensionFormat() const
{
    return m_dimensionFormat;
}

void RegisterEventRequest::SetDimensionFormat(const string& _dimensionFormat)
{
    m_dimensionFormat = _dimensionFormat;
    m_dimensionFormatHasBeenSet = true;
}

bool RegisterEventRequest::DimensionFormatHasBeenSet() const
{
    return m_dimensionFormatHasBeenSet;
}

int64_t RegisterEventRequest::GetTimeToLive() const
{
    return m_timeToLive;
}

void RegisterEventRequest::SetTimeToLive(const int64_t& _timeToLive)
{
    m_timeToLive = _timeToLive;
    m_timeToLiveHasBeenSet = true;
}

bool RegisterEventRequest::TimeToLiveHasBeenSet() const
{
    return m_timeToLiveHasBeenSet;
}

string RegisterEventRequest::GetDescription() const
{
    return m_description;
}

void RegisterEventRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RegisterEventRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


