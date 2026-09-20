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

#include <tencentcloud/ags/v20250920/model/EventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

EventInfo::EventInfo() :
    m_eventIdHasBeenSet(false),
    m_invocationIdHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome EventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("InvocationId") && !value["InvocationId"].IsNull())
    {
        if (!value["InvocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.InvocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationId = string(value["InvocationId"].GetString());
        m_invocationIdHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Actions") && !value["Actions"].IsNull())
    {
        if (!value["Actions"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Actions` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_actions.Deserialize(value["Actions"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionsHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Metadata` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metadata = string(value["Metadata"].GetString());
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Extensions") && !value["Extensions"].IsNull())
    {
        if (!value["Extensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Extensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extensions = string(value["Extensions"].GetString());
        m_extensionsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventInfo.Timestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = string(value["Timestamp"].GetString());
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Actions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actions.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metadata.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extensions.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timestamp.c_str(), allocator).Move(), allocator);
    }

}


string EventInfo::GetEventId() const
{
    return m_eventId;
}

void EventInfo::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool EventInfo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string EventInfo::GetInvocationId() const
{
    return m_invocationId;
}

void EventInfo::SetInvocationId(const string& _invocationId)
{
    m_invocationId = _invocationId;
    m_invocationIdHasBeenSet = true;
}

bool EventInfo::InvocationIdHasBeenSet() const
{
    return m_invocationIdHasBeenSet;
}

string EventInfo::GetAuthor() const
{
    return m_author;
}

void EventInfo::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool EventInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

EventContentInfo EventInfo::GetContent() const
{
    return m_content;
}

void EventInfo::SetContent(const EventContentInfo& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool EventInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

EventActionsInfo EventInfo::GetActions() const
{
    return m_actions;
}

void EventInfo::SetActions(const EventActionsInfo& _actions)
{
    m_actions = _actions;
    m_actionsHasBeenSet = true;
}

bool EventInfo::ActionsHasBeenSet() const
{
    return m_actionsHasBeenSet;
}

string EventInfo::GetMetadata() const
{
    return m_metadata;
}

void EventInfo::SetMetadata(const string& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool EventInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string EventInfo::GetExtensions() const
{
    return m_extensions;
}

void EventInfo::SetExtensions(const string& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool EventInfo::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

string EventInfo::GetErrorCode() const
{
    return m_errorCode;
}

void EventInfo::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool EventInfo::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string EventInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void EventInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool EventInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string EventInfo::GetTimestamp() const
{
    return m_timestamp;
}

void EventInfo::SetTimestamp(const string& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool EventInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

