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

#include <tencentcloud/ags/v20250920/model/UpdateRegistryRecordRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

UpdateRegistryRecordRequest::UpdateRegistryRecordRequest() :
    m_registryIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_changeLogHasBeenSet(false),
    m_mCPSourceHasBeenSet(false),
    m_agentSourceHasBeenSet(false),
    m_skillSourceHasBeenSet(false),
    m_customDescriptorsHasBeenSet(false),
    m_labelMutationsHasBeenSet(false)
{
}

string UpdateRegistryRecordRequest::ToJsonString() const
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

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
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

    if (m_changeLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeLog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_changeLog.c_str(), allocator).Move(), allocator);
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

    if (m_labelMutationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelMutations";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelMutations.begin(); itr != m_labelMutations.end(); ++itr, ++i)
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


string UpdateRegistryRecordRequest::GetRegistryId() const
{
    return m_registryId;
}

void UpdateRegistryRecordRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string UpdateRegistryRecordRequest::GetRecordId() const
{
    return m_recordId;
}

void UpdateRegistryRecordRequest::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string UpdateRegistryRecordRequest::GetDescription() const
{
    return m_description;
}

void UpdateRegistryRecordRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateRegistryRecordRequest::GetVersionName() const
{
    return m_versionName;
}

void UpdateRegistryRecordRequest::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string UpdateRegistryRecordRequest::GetChangeLog() const
{
    return m_changeLog;
}

void UpdateRegistryRecordRequest::SetChangeLog(const string& _changeLog)
{
    m_changeLog = _changeLog;
    m_changeLogHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::ChangeLogHasBeenSet() const
{
    return m_changeLogHasBeenSet;
}

CloudMCPSourceInput UpdateRegistryRecordRequest::GetMCPSource() const
{
    return m_mCPSource;
}

void UpdateRegistryRecordRequest::SetMCPSource(const CloudMCPSourceInput& _mCPSource)
{
    m_mCPSource = _mCPSource;
    m_mCPSourceHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::MCPSourceHasBeenSet() const
{
    return m_mCPSourceHasBeenSet;
}

CloudAgentSourceInput UpdateRegistryRecordRequest::GetAgentSource() const
{
    return m_agentSource;
}

void UpdateRegistryRecordRequest::SetAgentSource(const CloudAgentSourceInput& _agentSource)
{
    m_agentSource = _agentSource;
    m_agentSourceHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::AgentSourceHasBeenSet() const
{
    return m_agentSourceHasBeenSet;
}

CloudSkillSourceInput UpdateRegistryRecordRequest::GetSkillSource() const
{
    return m_skillSource;
}

void UpdateRegistryRecordRequest::SetSkillSource(const CloudSkillSourceInput& _skillSource)
{
    m_skillSource = _skillSource;
    m_skillSourceHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::SkillSourceHasBeenSet() const
{
    return m_skillSourceHasBeenSet;
}

string UpdateRegistryRecordRequest::GetCustomDescriptors() const
{
    return m_customDescriptors;
}

void UpdateRegistryRecordRequest::SetCustomDescriptors(const string& _customDescriptors)
{
    m_customDescriptors = _customDescriptors;
    m_customDescriptorsHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::CustomDescriptorsHasBeenSet() const
{
    return m_customDescriptorsHasBeenSet;
}

vector<CloudRecordLabelMutation> UpdateRegistryRecordRequest::GetLabelMutations() const
{
    return m_labelMutations;
}

void UpdateRegistryRecordRequest::SetLabelMutations(const vector<CloudRecordLabelMutation>& _labelMutations)
{
    m_labelMutations = _labelMutations;
    m_labelMutationsHasBeenSet = true;
}

bool UpdateRegistryRecordRequest::LabelMutationsHasBeenSet() const
{
    return m_labelMutationsHasBeenSet;
}


