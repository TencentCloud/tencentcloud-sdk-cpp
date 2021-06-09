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

#include <tencentcloud/cme/v20191029/model/EventContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

EventContent::EventContent() :
    m_eventTypeHasBeenSet(false),
    m_storageNewFileCreatedEventHasBeenSet(false)
{
}

CoreInternalOutcome EventContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventContent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageNewFileCreatedEvent") && !value["StorageNewFileCreatedEvent"].IsNull())
    {
        if (!value["StorageNewFileCreatedEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.StorageNewFileCreatedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageNewFileCreatedEvent.Deserialize(value["StorageNewFileCreatedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageNewFileCreatedEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNewFileCreatedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNewFileCreatedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageNewFileCreatedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventContent::GetEventType() const
{
    return m_eventType;
}

void EventContent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventContent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

StorageNewFileCreatedEvent EventContent::GetStorageNewFileCreatedEvent() const
{
    return m_storageNewFileCreatedEvent;
}

void EventContent::SetStorageNewFileCreatedEvent(const StorageNewFileCreatedEvent& _storageNewFileCreatedEvent)
{
    m_storageNewFileCreatedEvent = _storageNewFileCreatedEvent;
    m_storageNewFileCreatedEventHasBeenSet = true;
}

bool EventContent::StorageNewFileCreatedEventHasBeenSet() const
{
    return m_storageNewFileCreatedEventHasBeenSet;
}

