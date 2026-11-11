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

#include <tencentcloud/ags/v20250920/model/EventItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

EventItem::EventItem() :
    m_eventIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_objectTypeHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_eventLevelHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_occurredAtHasBeenSet(false),
    m_countHasBeenSet(false),
    m_firstOccurredAtHasBeenSet(false),
    m_lastOccurredAtHasBeenSet(false)
{
}

CoreInternalOutcome EventItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("EventLevel") && !value["EventLevel"].IsNull())
    {
        if (!value["EventLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.EventLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventLevel = string(value["EventLevel"].GetString());
        m_eventLevelHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Extensions") && !value["Extensions"].IsNull())
    {
        if (!value["Extensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Extensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensions = string(value["Extensions"].GetString());
        m_extensionsHasBeenSet = true;
    }

    if (value.HasMember("OccurredAt") && !value["OccurredAt"].IsNull())
    {
        if (!value["OccurredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.OccurredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occurredAt = string(value["OccurredAt"].GetString());
        m_occurredAtHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("FirstOccurredAt") && !value["FirstOccurredAt"].IsNull())
    {
        if (!value["FirstOccurredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.FirstOccurredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstOccurredAt = string(value["FirstOccurredAt"].GetString());
        m_firstOccurredAtHasBeenSet = true;
    }

    if (value.HasMember("LastOccurredAt") && !value["LastOccurredAt"].IsNull())
    {
        if (!value["LastOccurredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventItem.LastOccurredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOccurredAt = string(value["LastOccurredAt"].GetString());
        m_lastOccurredAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensions.c_str(), allocator).Move(), allocator);
    }

    if (m_occurredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occurredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_firstOccurredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstOccurredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstOccurredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOccurredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOccurredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOccurredAt.c_str(), allocator).Move(), allocator);
    }

}


string EventItem::GetEventId() const
{
    return m_eventId;
}

void EventItem::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EventItem::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string EventItem::GetSource() const
{
    return m_source;
}

void EventItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool EventItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string EventItem::GetObjectType() const
{
    return m_objectType;
}

void EventItem::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool EventItem::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string EventItem::GetObjectId() const
{
    return m_objectId;
}

void EventItem::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool EventItem::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string EventItem::GetEventLevel() const
{
    return m_eventLevel;
}

void EventItem::SetEventLevel(const string& _eventLevel)
{
    m_eventLevel = _eventLevel;
    m_eventLevelHasBeenSet = true;
}

bool EventItem::EventLevelHasBeenSet() const
{
    return m_eventLevelHasBeenSet;
}

string EventItem::GetEventType() const
{
    return m_eventType;
}

void EventItem::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventItem::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventItem::GetReason() const
{
    return m_reason;
}

void EventItem::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool EventItem::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string EventItem::GetMessage() const
{
    return m_message;
}

void EventItem::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool EventItem::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string EventItem::GetExtensions() const
{
    return m_extensions;
}

void EventItem::SetExtensions(const string& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool EventItem::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

string EventItem::GetOccurredAt() const
{
    return m_occurredAt;
}

void EventItem::SetOccurredAt(const string& _occurredAt)
{
    m_occurredAt = _occurredAt;
    m_occurredAtHasBeenSet = true;
}

bool EventItem::OccurredAtHasBeenSet() const
{
    return m_occurredAtHasBeenSet;
}

int64_t EventItem::GetCount() const
{
    return m_count;
}

void EventItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool EventItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string EventItem::GetFirstOccurredAt() const
{
    return m_firstOccurredAt;
}

void EventItem::SetFirstOccurredAt(const string& _firstOccurredAt)
{
    m_firstOccurredAt = _firstOccurredAt;
    m_firstOccurredAtHasBeenSet = true;
}

bool EventItem::FirstOccurredAtHasBeenSet() const
{
    return m_firstOccurredAtHasBeenSet;
}

string EventItem::GetLastOccurredAt() const
{
    return m_lastOccurredAt;
}

void EventItem::SetLastOccurredAt(const string& _lastOccurredAt)
{
    m_lastOccurredAt = _lastOccurredAt;
    m_lastOccurredAtHasBeenSet = true;
}

bool EventItem::LastOccurredAtHasBeenSet() const
{
    return m_lastOccurredAtHasBeenSet;
}

