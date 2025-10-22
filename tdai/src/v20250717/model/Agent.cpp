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

#include <tencentcloud/tdai/v20250717/model/Agent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

Agent::Agent() :
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentInternalNameHasBeenSet(false),
    m_agentStatusHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updaterHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Agent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("AgentInternalName") && !value["AgentInternalName"].IsNull())
    {
        if (!value["AgentInternalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentInternalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentInternalName = string(value["AgentInternalName"].GetString());
        m_agentInternalNameHasBeenSet = true;
    }

    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("DefaultVersion") && !value["DefaultVersion"].IsNull())
    {
        if (!value["DefaultVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.DefaultVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultVersion = string(value["DefaultVersion"].GetString());
        m_defaultVersionHasBeenSet = true;
    }

    if (value.HasMember("AgentType") && !value["AgentType"].IsNull())
    {
        if (!value["AgentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentType = string(value["AgentType"].GetString());
        m_agentTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Updater") && !value["Updater"].IsNull())
    {
        if (!value["Updater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Updater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updater = string(value["Updater"].GetString());
        m_updaterHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Agent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_agentInternalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentInternalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentInternalName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updaterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updater.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string Agent::GetAgentId() const
{
    return m_agentId;
}

void Agent::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool Agent::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string Agent::GetAgentName() const
{
    return m_agentName;
}

void Agent::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool Agent::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string Agent::GetAgentInternalName() const
{
    return m_agentInternalName;
}

void Agent::SetAgentInternalName(const string& _agentInternalName)
{
    m_agentInternalName = _agentInternalName;
    m_agentInternalNameHasBeenSet = true;
}

bool Agent::AgentInternalNameHasBeenSet() const
{
    return m_agentInternalNameHasBeenSet;
}

string Agent::GetAgentStatus() const
{
    return m_agentStatus;
}

void Agent::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool Agent::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string Agent::GetDefaultVersion() const
{
    return m_defaultVersion;
}

void Agent::SetDefaultVersion(const string& _defaultVersion)
{
    m_defaultVersion = _defaultVersion;
    m_defaultVersionHasBeenSet = true;
}

bool Agent::DefaultVersionHasBeenSet() const
{
    return m_defaultVersionHasBeenSet;
}

string Agent::GetAgentType() const
{
    return m_agentType;
}

void Agent::SetAgentType(const string& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool Agent::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

string Agent::GetDescription() const
{
    return m_description;
}

void Agent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Agent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Agent::GetCreator() const
{
    return m_creator;
}

void Agent::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Agent::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string Agent::GetCreateTime() const
{
    return m_createTime;
}

void Agent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Agent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Agent::GetUpdater() const
{
    return m_updater;
}

void Agent::SetUpdater(const string& _updater)
{
    m_updater = _updater;
    m_updaterHasBeenSet = true;
}

bool Agent::UpdaterHasBeenSet() const
{
    return m_updaterHasBeenSet;
}

string Agent::GetUpdateTime() const
{
    return m_updateTime;
}

void Agent::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Agent::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

