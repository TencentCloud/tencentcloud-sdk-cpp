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

#include <tencentcloud/ags/v20250920/model/CreateRegistryRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CreateRegistryRecordRequest::CreateRegistryRecordRequest() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptorTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_mCPSourceHasBeenSet(false),
    m_agentSourceHasBeenSet(false),
    m_skillSourceHasBeenSet(false),
    m_customDescriptorsHasBeenSet(false)
{
}

string CreateRegistryRecordRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_descriptorType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mCPSource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agentSource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_skillSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skillSource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_customDescriptorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDescriptors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customDescriptors.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRegistryRecordRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateRegistryRecordRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateRegistryRecordRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateRegistryRecordRequest::GetName() const
{
    return m_name;
}

void CreateRegistryRecordRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRegistryRecordRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRegistryRecordRequest::GetDescriptorType() const
{
    return m_descriptorType;
}

void CreateRegistryRecordRequest::SetDescriptorType(const string& _descriptorType)
{
    m_descriptorType = _descriptorType;
    m_descriptorTypeHasBeenSet = true;
}

bool CreateRegistryRecordRequest::DescriptorTypeHasBeenSet() const
{
    return m_descriptorTypeHasBeenSet;
}

string CreateRegistryRecordRequest::GetDescription() const
{
    return m_description;
}

void CreateRegistryRecordRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRegistryRecordRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateRegistryRecordRequest::GetVersionName() const
{
    return m_versionName;
}

void CreateRegistryRecordRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CreateRegistryRecordRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

CloudMCPSourceInput CreateRegistryRecordRequest::GetMCPSource() const
{
    return m_mCPSource;
}

void CreateRegistryRecordRequest::SetMCPSource(const CloudMCPSourceInput& _mCPSource)
{
    m_mCPSource = _mCPSource;
    m_mCPSourceHasBeenSet = true;
}

bool CreateRegistryRecordRequest::MCPSourceHasBeenSet() const
{
    return m_mCPSourceHasBeenSet;
}

CloudAgentSourceInput CreateRegistryRecordRequest::GetAgentSource() const
{
    return m_agentSource;
}

void CreateRegistryRecordRequest::SetAgentSource(const CloudAgentSourceInput& _agentSource)
{
    m_agentSource = _agentSource;
    m_agentSourceHasBeenSet = true;
}

bool CreateRegistryRecordRequest::AgentSourceHasBeenSet() const
{
    return m_agentSourceHasBeenSet;
}

CloudSkillSourceInput CreateRegistryRecordRequest::GetSkillSource() const
{
    return m_skillSource;
}

void CreateRegistryRecordRequest::SetSkillSource(const CloudSkillSourceInput& _skillSource)
{
    m_skillSource = _skillSource;
    m_skillSourceHasBeenSet = true;
}

bool CreateRegistryRecordRequest::SkillSourceHasBeenSet() const
{
    return m_skillSourceHasBeenSet;
}

string CreateRegistryRecordRequest::GetCustomDescriptors() const
{
    return m_customDescriptors;
}

void CreateRegistryRecordRequest::SetCustomDescriptors(const string& _customDescriptors)
{
    m_customDescriptors = _customDescriptors;
    m_customDescriptorsHasBeenSet = true;
}

bool CreateRegistryRecordRequest::CustomDescriptorsHasBeenSet() const
{
    return m_customDescriptorsHasBeenSet;
}


