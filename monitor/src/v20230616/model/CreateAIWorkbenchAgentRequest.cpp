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

#include <tencentcloud/monitor/v20230616/model/CreateAIWorkbenchAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

CreateAIWorkbenchAgentRequest::CreateAIWorkbenchAgentRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_resourceMapIdHasBeenSet(false),
    m_mCPIdsHasBeenSet(false),
    m_camTagsHasBeenSet(false),
    m_envVarsHasBeenSet(false)
{
}

string CreateAIWorkbenchAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_camTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_camTags.begin(); itr != m_camTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


string CreateAIWorkbenchAgentRequest::GetName() const
{
    return m_name;
}

void CreateAIWorkbenchAgentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAIWorkbenchAgentRequest::GetDescription() const
{
    return m_description;
}

void CreateAIWorkbenchAgentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateAIWorkbenchAgentRequest::GetCategory() const
{
    return m_category;
}

void CreateAIWorkbenchAgentRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

vector<string> CreateAIWorkbenchAgentRequest::GetTags() const
{
    return m_tags;
}

void CreateAIWorkbenchAgentRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

InstructionConfig CreateAIWorkbenchAgentRequest::GetInstruction() const
{
    return m_instruction;
}

void CreateAIWorkbenchAgentRequest::SetInstruction(const InstructionConfig& _instruction)
{
    m_instruction = _instruction;
    m_instructionHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::InstructionHasBeenSet() const
{
    return m_instructionHasBeenSet;
}

vector<string> CreateAIWorkbenchAgentRequest::GetSkillIds() const
{
    return m_skillIds;
}

void CreateAIWorkbenchAgentRequest::SetSkillIds(const vector<string>& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

string CreateAIWorkbenchAgentRequest::GetSource() const
{
    return m_source;
}

void CreateAIWorkbenchAgentRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateAIWorkbenchAgentRequest::GetResourceMapId() const
{
    return m_resourceMapId;
}

void CreateAIWorkbenchAgentRequest::SetResourceMapId(const string& _resourceMapId)
{
    m_resourceMapId = _resourceMapId;
    m_resourceMapIdHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::ResourceMapIdHasBeenSet() const
{
    return m_resourceMapIdHasBeenSet;
}

vector<string> CreateAIWorkbenchAgentRequest::GetMCPIds() const
{
    return m_mCPIds;
}

void CreateAIWorkbenchAgentRequest::SetMCPIds(const vector<string>& _mCPIds)
{
    m_mCPIds = _mCPIds;
    m_mCPIdsHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::MCPIdsHasBeenSet() const
{
    return m_mCPIdsHasBeenSet;
}

vector<Tag> CreateAIWorkbenchAgentRequest::GetCamTags() const
{
    return m_camTags;
}

void CreateAIWorkbenchAgentRequest::SetCamTags(const vector<Tag>& _camTags)
{
    m_camTags = _camTags;
    m_camTagsHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::CamTagsHasBeenSet() const
{
    return m_camTagsHasBeenSet;
}

vector<EnvVar> CreateAIWorkbenchAgentRequest::GetEnvVars() const
{
    return m_envVars;
}

void CreateAIWorkbenchAgentRequest::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool CreateAIWorkbenchAgentRequest::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}


