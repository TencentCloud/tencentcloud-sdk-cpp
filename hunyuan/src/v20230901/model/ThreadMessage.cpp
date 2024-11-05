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

#include <tencentcloud/hunyuan/v20230901/model/ThreadMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ThreadMessage::ThreadMessage() :
    m_iDHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_threadIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inCompleteDetailsHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_inCompleteAtHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_assistantIDHasBeenSet(false),
    m_runIDHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
}

CoreInternalOutcome ThreadMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Object") && !value["Object"].IsNull())
    {
        if (!value["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(value["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = value["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("ThreadID") && !value["ThreadID"].IsNull())
    {
        if (!value["ThreadID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.ThreadID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threadID = string(value["ThreadID"].GetString());
        m_threadIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InCompleteDetails") && !value["InCompleteDetails"].IsNull())
    {
        if (!value["InCompleteDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.InCompleteDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inCompleteDetails.Deserialize(value["InCompleteDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inCompleteDetailsHasBeenSet = true;
    }

    if (value.HasMember("CompletedAt") && !value["CompletedAt"].IsNull())
    {
        if (!value["CompletedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.CompletedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completedAt = value["CompletedAt"].GetInt64();
        m_completedAtHasBeenSet = true;
    }

    if (value.HasMember("InCompleteAt") && !value["InCompleteAt"].IsNull())
    {
        if (!value["InCompleteAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.InCompleteAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inCompleteAt = value["InCompleteAt"].GetInt64();
        m_inCompleteAtHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("AssistantID") && !value["AssistantID"].IsNull())
    {
        if (!value["AssistantID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.AssistantID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assistantID = string(value["AssistantID"].GetString());
        m_assistantIDHasBeenSet = true;
    }

    if (value.HasMember("RunID") && !value["RunID"].IsNull())
    {
        if (!value["RunID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.RunID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runID = string(value["RunID"].GetString());
        m_runIDHasBeenSet = true;
    }

    if (value.HasMember("Attachments") && !value["Attachments"].IsNull())
    {
        if (!value["Attachments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThreadMessage.Attachments` is not array type"));

        const rapidjson::Value &tmpValue = value["Attachments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThreadMessageAttachmentObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachments.push_back(item);
        }
        m_attachmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThreadMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_threadIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threadID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inCompleteDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCompleteDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inCompleteDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_completedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completedAt, allocator);
    }

    if (m_inCompleteAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCompleteAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inCompleteAt, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_assistantIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssistantID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assistantID.c_str(), allocator).Move(), allocator);
    }

    if (m_runIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runID.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachments.begin(); itr != m_attachments.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ThreadMessage::GetID() const
{
    return m_iD;
}

void ThreadMessage::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ThreadMessage::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ThreadMessage::GetObject() const
{
    return m_object;
}

void ThreadMessage::SetObject(const string& _object)
{
    m_object = _object;
    m_objectHasBeenSet = true;
}

bool ThreadMessage::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

int64_t ThreadMessage::GetCreatedAt() const
{
    return m_createdAt;
}

void ThreadMessage::SetCreatedAt(const int64_t& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool ThreadMessage::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string ThreadMessage::GetThreadID() const
{
    return m_threadID;
}

void ThreadMessage::SetThreadID(const string& _threadID)
{
    m_threadID = _threadID;
    m_threadIDHasBeenSet = true;
}

bool ThreadMessage::ThreadIDHasBeenSet() const
{
    return m_threadIDHasBeenSet;
}

string ThreadMessage::GetStatus() const
{
    return m_status;
}

void ThreadMessage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ThreadMessage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ThreadMessageInCompleteDetailsObject ThreadMessage::GetInCompleteDetails() const
{
    return m_inCompleteDetails;
}

void ThreadMessage::SetInCompleteDetails(const ThreadMessageInCompleteDetailsObject& _inCompleteDetails)
{
    m_inCompleteDetails = _inCompleteDetails;
    m_inCompleteDetailsHasBeenSet = true;
}

bool ThreadMessage::InCompleteDetailsHasBeenSet() const
{
    return m_inCompleteDetailsHasBeenSet;
}

int64_t ThreadMessage::GetCompletedAt() const
{
    return m_completedAt;
}

void ThreadMessage::SetCompletedAt(const int64_t& _completedAt)
{
    m_completedAt = _completedAt;
    m_completedAtHasBeenSet = true;
}

bool ThreadMessage::CompletedAtHasBeenSet() const
{
    return m_completedAtHasBeenSet;
}

int64_t ThreadMessage::GetInCompleteAt() const
{
    return m_inCompleteAt;
}

void ThreadMessage::SetInCompleteAt(const int64_t& _inCompleteAt)
{
    m_inCompleteAt = _inCompleteAt;
    m_inCompleteAtHasBeenSet = true;
}

bool ThreadMessage::InCompleteAtHasBeenSet() const
{
    return m_inCompleteAtHasBeenSet;
}

string ThreadMessage::GetRole() const
{
    return m_role;
}

void ThreadMessage::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ThreadMessage::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ThreadMessage::GetContent() const
{
    return m_content;
}

void ThreadMessage::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ThreadMessage::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ThreadMessage::GetAssistantID() const
{
    return m_assistantID;
}

void ThreadMessage::SetAssistantID(const string& _assistantID)
{
    m_assistantID = _assistantID;
    m_assistantIDHasBeenSet = true;
}

bool ThreadMessage::AssistantIDHasBeenSet() const
{
    return m_assistantIDHasBeenSet;
}

string ThreadMessage::GetRunID() const
{
    return m_runID;
}

void ThreadMessage::SetRunID(const string& _runID)
{
    m_runID = _runID;
    m_runIDHasBeenSet = true;
}

bool ThreadMessage::RunIDHasBeenSet() const
{
    return m_runIDHasBeenSet;
}

vector<ThreadMessageAttachmentObject> ThreadMessage::GetAttachments() const
{
    return m_attachments;
}

void ThreadMessage::SetAttachments(const vector<ThreadMessageAttachmentObject>& _attachments)
{
    m_attachments = _attachments;
    m_attachmentsHasBeenSet = true;
}

bool ThreadMessage::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}

