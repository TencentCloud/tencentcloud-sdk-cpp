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

#include <tencentcloud/tdai/v20250717/model/CreateAgentInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdai::V20250717::Model;
using namespace std;

CreateAgentInstanceRequest::CreateAgentInstanceRequest() :
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_skillsHasBeenSet(false),
    m_soulIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateAgentInstanceRequest::ToJsonString() const
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

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_skillsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skills";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skills.begin(); itr != m_skills.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_soulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoulId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_soulId, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentInstanceRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateAgentInstanceRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateAgentInstanceRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string CreateAgentInstanceRequest::GetAgentVersion() const
{
    return m_agentVersion;
}

void CreateAgentInstanceRequest::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool CreateAgentInstanceRequest::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string CreateAgentInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateAgentInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateAgentInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<Parameter> CreateAgentInstanceRequest::GetParameters() const
{
    return m_parameters;
}

void CreateAgentInstanceRequest::SetParameters(const vector<Parameter>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool CreateAgentInstanceRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

vector<TagItem> CreateAgentInstanceRequest::GetTags() const
{
    return m_tags;
}

void CreateAgentInstanceRequest::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAgentInstanceRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateAgentInstanceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateAgentInstanceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateAgentInstanceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t CreateAgentInstanceRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateAgentInstanceRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateAgentInstanceRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

vector<string> CreateAgentInstanceRequest::GetSkills() const
{
    return m_skills;
}

void CreateAgentInstanceRequest::SetSkills(const vector<string>& _skills)
{
    m_skills = _skills;
    m_skillsHasBeenSet = true;
}

bool CreateAgentInstanceRequest::SkillsHasBeenSet() const
{
    return m_skillsHasBeenSet;
}

int64_t CreateAgentInstanceRequest::GetSoulId() const
{
    return m_soulId;
}

void CreateAgentInstanceRequest::SetSoulId(const int64_t& _soulId)
{
    m_soulId = _soulId;
    m_soulIdHasBeenSet = true;
}

bool CreateAgentInstanceRequest::SoulIdHasBeenSet() const
{
    return m_soulIdHasBeenSet;
}

string CreateAgentInstanceRequest::GetDescription() const
{
    return m_description;
}

void CreateAgentInstanceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateAgentInstanceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


