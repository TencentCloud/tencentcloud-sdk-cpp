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

#include <tencentcloud/workbuddyenterprise/v20260709/model/MessageEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

MessageEvent::MessageEvent() :
    m_sequenceHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_occurredAtHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_toolCallHasBeenSet(false)
{
}

CoreInternalOutcome MessageEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Sequence") && !value["Sequence"].IsNull())
    {
        if (!value["Sequence"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEvent.Sequence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sequence = value["Sequence"].GetInt64();
        m_sequenceHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEvent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("OccurredAt") && !value["OccurredAt"].IsNull())
    {
        if (!value["OccurredAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEvent.OccurredAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occurredAt = string(value["OccurredAt"].GetString());
        m_occurredAtHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEvent.Message` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_message.Deserialize(value["Message"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ToolCall") && !value["ToolCall"].IsNull())
    {
        if (!value["ToolCall"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MessageEvent.ToolCall` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_toolCall.Deserialize(value["ToolCall"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_toolCallHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sequence, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_occurredAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurredAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occurredAt.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_message.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_toolCall.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MessageEvent::GetSequence() const
{
    return m_sequence;
}

void MessageEvent::SetSequence(const int64_t& _sequence)
{
    m_sequence = _sequence;
    m_sequenceHasBeenSet = true;
}

bool MessageEvent::SequenceHasBeenSet() const
{
    return m_sequenceHasBeenSet;
}

string MessageEvent::GetEventType() const
{
    return m_eventType;
}

void MessageEvent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool MessageEvent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string MessageEvent::GetOccurredAt() const
{
    return m_occurredAt;
}

void MessageEvent::SetOccurredAt(const string& _occurredAt)
{
    m_occurredAt = _occurredAt;
    m_occurredAtHasBeenSet = true;
}

bool MessageEvent::OccurredAtHasBeenSet() const
{
    return m_occurredAtHasBeenSet;
}

MessageEventMessage MessageEvent::GetMessage() const
{
    return m_message;
}

void MessageEvent::SetMessage(const MessageEventMessage& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MessageEvent::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

MessageEventToolCall MessageEvent::GetToolCall() const
{
    return m_toolCall;
}

void MessageEvent::SetToolCall(const MessageEventToolCall& _toolCall)
{
    m_toolCall = _toolCall;
    m_toolCallHasBeenSet = true;
}

bool MessageEvent::ToolCallHasBeenSet() const
{
    return m_toolCallHasBeenSet;
}

