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

#include <tencentcloud/workbuddyenterprise/v20260709/model/SessionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

SessionItem::SessionItem() :
    m_sessionIdHasBeenSet(false),
    m_sessionNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false)
{
}

CoreInternalOutcome SessionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SessionName") && !value["SessionName"].IsNull())
    {
        if (!value["SessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.SessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionName = string(value["SessionName"].GetString());
        m_sessionNameHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

}


string SessionItem::GetSessionId() const
{
    return m_sessionId;
}

void SessionItem::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionItem::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SessionItem::GetSessionName() const
{
    return m_sessionName;
}

void SessionItem::SetSessionName(const string& _sessionName)
{
    m_sessionName = _sessionName;
    m_sessionNameHasBeenSet = true;
}

bool SessionItem::SessionNameHasBeenSet() const
{
    return m_sessionNameHasBeenSet;
}

string SessionItem::GetAgentId() const
{
    return m_agentId;
}

void SessionItem::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool SessionItem::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string SessionItem::GetAgentName() const
{
    return m_agentName;
}

void SessionItem::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool SessionItem::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string SessionItem::GetVersionName() const
{
    return m_versionName;
}

void SessionItem::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool SessionItem::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string SessionItem::GetVersionId() const
{
    return m_versionId;
}

void SessionItem::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool SessionItem::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string SessionItem::GetStatus() const
{
    return m_status;
}

void SessionItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SessionItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SessionItem::GetCreator() const
{
    return m_creator;
}

void SessionItem::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool SessionItem::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string SessionItem::GetSource() const
{
    return m_source;
}

void SessionItem::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SessionItem::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string SessionItem::GetCreatedTime() const
{
    return m_createdTime;
}

void SessionItem::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool SessionItem::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string SessionItem::GetModifiedTime() const
{
    return m_modifiedTime;
}

void SessionItem::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool SessionItem::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

