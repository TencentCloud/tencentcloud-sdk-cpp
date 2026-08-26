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

#include <tencentcloud/monitor/v20230616/model/MessageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

MessageInfo::MessageInfo() :
    m_entryIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_contentBlocksHasBeenSet(false)
{
}

CoreInternalOutcome MessageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntryId") && !value["EntryId"].IsNull())
    {
        if (!value["EntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageInfo.EntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryId = string(value["EntryId"].GetString());
        m_entryIdHasBeenSet = true;
    }

    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageInfo.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ContentBlocks") && !value["ContentBlocks"].IsNull())
    {
        if (!value["ContentBlocks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MessageInfo.ContentBlocks` is not array type"));

        const rapidjson::Value &tmpValue = value["ContentBlocks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContentBlockInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contentBlocks.push_back(item);
        }
        m_contentBlocksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_contentBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentBlocks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contentBlocks.begin(); itr != m_contentBlocks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MessageInfo::GetEntryId() const
{
    return m_entryId;
}

void MessageInfo::SetEntryId(const string& _entryId)
{
    m_entryId = _entryId;
    m_entryIdHasBeenSet = true;
}

bool MessageInfo::EntryIdHasBeenSet() const
{
    return m_entryIdHasBeenSet;
}

string MessageInfo::GetSessionId() const
{
    return m_sessionId;
}

void MessageInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool MessageInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string MessageInfo::GetRole() const
{
    return m_role;
}

void MessageInfo::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool MessageInfo::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string MessageInfo::GetContent() const
{
    return m_content;
}

void MessageInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool MessageInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string MessageInfo::GetStatus() const
{
    return m_status;
}

void MessageInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MessageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ContentBlockInfo> MessageInfo::GetContentBlocks() const
{
    return m_contentBlocks;
}

void MessageInfo::SetContentBlocks(const vector<ContentBlockInfo>& _contentBlocks)
{
    m_contentBlocks = _contentBlocks;
    m_contentBlocksHasBeenSet = true;
}

bool MessageInfo::ContentBlocksHasBeenSet() const
{
    return m_contentBlocksHasBeenSet;
}

