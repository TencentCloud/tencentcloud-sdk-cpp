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

#include <tencentcloud/ags/v20250920/model/SessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

SessionInfo::SessionInfo() :
    m_sessionIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SessionId") && !value["SessionId"].IsNull())
    {
        if (!value["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(value["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.State` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_state.Deserialize(value["State"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SessionInfo.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetadataVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadata.push_back(item);
        }
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_state.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string SessionInfo::GetSessionId() const
{
    return m_sessionId;
}

void SessionInfo::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool SessionInfo::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string SessionInfo::GetSpaceId() const
{
    return m_spaceId;
}

void SessionInfo::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool SessionInfo::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

SessionState SessionInfo::GetState() const
{
    return m_state;
}

void SessionInfo::SetState(const SessionState& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool SessionInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<MetadataVar> SessionInfo::GetMetadata() const
{
    return m_metadata;
}

void SessionInfo::SetMetadata(const vector<MetadataVar>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool SessionInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

string SessionInfo::GetAgentId() const
{
    return m_agentId;
}

void SessionInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool SessionInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string SessionInfo::GetUserId() const
{
    return m_userId;
}

void SessionInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SessionInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string SessionInfo::GetTitle() const
{
    return m_title;
}

void SessionInfo::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool SessionInfo::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t SessionInfo::GetEventCount() const
{
    return m_eventCount;
}

void SessionInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool SessionInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string SessionInfo::GetCreateTime() const
{
    return m_createTime;
}

void SessionInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SessionInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SessionInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SessionInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SessionInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

