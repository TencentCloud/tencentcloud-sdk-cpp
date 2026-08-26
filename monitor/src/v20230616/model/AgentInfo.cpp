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

#include <tencentcloud/monitor/v20230616/model/AgentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AgentInfo::AgentInfo() :
    m_agentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_skillIdsHasBeenSet(false),
    m_resourceMapIdHasBeenSet(false),
    m_mCPIdsHasBeenSet(false),
    m_camTagsHasBeenSet(false),
    m_envVarsHasBeenSet(false)
{
}

CoreInternalOutcome AgentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SkillIds") && !value["SkillIds"].IsNull())
    {
        if (!value["SkillIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInfo.SkillIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_skillIds.push_back((*itr).GetString());
        }
        m_skillIdsHasBeenSet = true;
    }

    if (value.HasMember("ResourceMapId") && !value["ResourceMapId"].IsNull())
    {
        if (!value["ResourceMapId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentInfo.ResourceMapId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceMapId = string(value["ResourceMapId"].GetString());
        m_resourceMapIdHasBeenSet = true;
    }

    if (value.HasMember("MCPIds") && !value["MCPIds"].IsNull())
    {
        if (!value["MCPIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInfo.MCPIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MCPIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mCPIds.push_back((*itr).GetString());
        }
        m_mCPIdsHasBeenSet = true;
    }

    if (value.HasMember("CamTags") && !value["CamTags"].IsNull())
    {
        if (!value["CamTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInfo.CamTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CamTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_camTags.push_back(item);
        }
        m_camTagsHasBeenSet = true;
    }

    if (value.HasMember("EnvVars") && !value["EnvVars"].IsNull())
    {
        if (!value["EnvVars"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentInfo.EnvVars` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvVars"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EnvVar item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envVars.push_back(item);
        }
        m_envVarsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_skillIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_skillIds.begin(); itr != m_skillIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceMapIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceMapId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceMapId.c_str(), allocator).Move(), allocator);
    }

    if (m_mCPIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCPIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mCPIds.begin(); itr != m_mCPIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_camTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CamTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_camTags.begin(); itr != m_camTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_envVarsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvVars";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envVars.begin(); itr != m_envVars.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentInfo::GetAgentId() const
{
    return m_agentId;
}

void AgentInfo::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentInfo::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string AgentInfo::GetName() const
{
    return m_name;
}

void AgentInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AgentInfo::GetDescription() const
{
    return m_description;
}

void AgentInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AgentInfo::GetCategory() const
{
    return m_category;
}

void AgentInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool AgentInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string AgentInfo::GetStatus() const
{
    return m_status;
}

void AgentInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> AgentInfo::GetSkillIds() const
{
    return m_skillIds;
}

void AgentInfo::SetSkillIds(const vector<string>& _skillIds)
{
    m_skillIds = _skillIds;
    m_skillIdsHasBeenSet = true;
}

bool AgentInfo::SkillIdsHasBeenSet() const
{
    return m_skillIdsHasBeenSet;
}

string AgentInfo::GetResourceMapId() const
{
    return m_resourceMapId;
}

void AgentInfo::SetResourceMapId(const string& _resourceMapId)
{
    m_resourceMapId = _resourceMapId;
    m_resourceMapIdHasBeenSet = true;
}

bool AgentInfo::ResourceMapIdHasBeenSet() const
{
    return m_resourceMapIdHasBeenSet;
}

vector<string> AgentInfo::GetMCPIds() const
{
    return m_mCPIds;
}

void AgentInfo::SetMCPIds(const vector<string>& _mCPIds)
{
    m_mCPIds = _mCPIds;
    m_mCPIdsHasBeenSet = true;
}

bool AgentInfo::MCPIdsHasBeenSet() const
{
    return m_mCPIdsHasBeenSet;
}

vector<Tag> AgentInfo::GetCamTags() const
{
    return m_camTags;
}

void AgentInfo::SetCamTags(const vector<Tag>& _camTags)
{
    m_camTags = _camTags;
    m_camTagsHasBeenSet = true;
}

bool AgentInfo::CamTagsHasBeenSet() const
{
    return m_camTagsHasBeenSet;
}

vector<EnvVar> AgentInfo::GetEnvVars() const
{
    return m_envVars;
}

void AgentInfo::SetEnvVars(const vector<EnvVar>& _envVars)
{
    m_envVars = _envVars;
    m_envVarsHasBeenSet = true;
}

bool AgentInfo::EnvVarsHasBeenSet() const
{
    return m_envVarsHasBeenSet;
}

