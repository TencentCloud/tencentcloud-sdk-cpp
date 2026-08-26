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

#include <tencentcloud/monitor/v20230616/model/UpdateAIWorkbenchAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

UpdateAIWorkbenchAgentRequest::UpdateAIWorkbenchAgentRequest() :
    m_agentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceMapIdHasBeenSet(false),
    m_mCPIdsHasBeenSet(false),
    m_envVarsHasBeenSet(false)
{
}

string UpdateAIWorkbenchAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instructionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instruction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instruction.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skillIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillIds.begin(); itr != m_skillIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceMapIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMapId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceMapId.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mCPIds.begin(); itr != m_mCPIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAIWorkbenchAgentRequest::GetAgentId() const
{
    return m_agentId;
}

void UpdateAIWorkbenchAgentRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetName() const
{
    return m_name;
}

void UpdateAIWorkbenchAgentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetDescription() const
{
    return m_description;
}

void UpdateAIWorkbenchAgentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetCategory() const
{
    return m_category;
}

void UpdateAIWorkbenchAgentRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<string> UpdateAIWorkbenchAgentRequest::GetTags() const
{
    return m_tags;
}

void UpdateAIWorkbenchAgentRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

InstructionConfig UpdateAIWorkbenchAgentRequest::GetInstruction() const
{
    return m_instruction;
}

void UpdateAIWorkbenchAgentRequest::SetInstruction(const InstructionConfig& _instruction)
{
    m_instruction = _instruction;
    m_instructionHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::InstructionHasBeenSet() const
{
    return m_instructionHasBeenSet;
}

vector<string> UpdateAIWorkbenchAgentRequest::GetSkillIds() const
{
    return m_skillIds;
}

void UpdateAIWorkbenchAgentRequest::SetSkillIds(const vector<string>& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetSource() const
{
    return m_source;
}

void UpdateAIWorkbenchAgentRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetStatus() const
{
    return m_status;
}

void UpdateAIWorkbenchAgentRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpdateAIWorkbenchAgentRequest::GetResourceMapId() const
{
    return m_resourceMapId;
}

void UpdateAIWorkbenchAgentRequest::SetResourceMapId(const string& _resourceMapId)
{
    m_resourceMapId = _resourceMapId;
    m_resourceMapIdHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::ResourceMapIdHasBeenSet() const
{
    return m_resourceMapIdHasBeenSet;
}

vector<string> UpdateAIWorkbenchAgentRequest::GetMCPIds() const
{
    return m_mCPIds;
}

void UpdateAIWorkbenchAgentRequest::SetMCPIds(const vector<string>& _mCPIds)
{
    m_mCPIds = _mCPIds;
    m_mCPIdsHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::MCPIdsHasBeenSet() const
{
    return m_mCPIdsHasBeenSet;
}

vector<EnvVar> UpdateAIWorkbenchAgentRequest::GetEnvVars() const
{
    return m_envVars;
}

void UpdateAIWorkbenchAgentRequest::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool UpdateAIWorkbenchAgentRequest::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}


