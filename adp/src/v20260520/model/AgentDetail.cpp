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

#include <tencentcloud/adp/v20260520/model/AgentDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentDetail::AgentDetail() :
    m_agentIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_toolListHasBeenSet(false),
    m_pluginListHasBeenSet(false),
    m_skillListHasBeenSet(false),
    m_advancedConfigHasBeenSet(false),
    m_externalToolListHasBeenSet(false),
    m_providerTypeHasBeenSet(false),
    m_referenceAppIdHasBeenSet(false),
    m_referenceAppStatusHasBeenSet(false),
    m_referenceAppHasBeenSet(false),
    m_builtinToolListHasBeenSet(false)
{
}

CoreInternalOutcome AgentDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Instructions") && !value["Instructions"].IsNull())
    {
        if (!value["Instructions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.Instructions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructions = string(value["Instructions"].GetString());
        m_instructionsHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("ToolList") && !value["ToolList"].IsNull())
    {
        if (!value["ToolList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentTool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_toolList.push_back(item);
        }
        m_toolListHasBeenSet = true;
    }

    if (value.HasMember("PluginList") && !value["PluginList"].IsNull())
    {
        if (!value["PluginList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDetail.PluginList` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPlugin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginList.push_back(item);
        }
        m_pluginListHasBeenSet = true;
    }

    if (value.HasMember("SkillList") && !value["SkillList"].IsNull())
    {
        if (!value["SkillList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDetail.SkillList` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentSkill item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_skillList.push_back(item);
        }
        m_skillListHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(value["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }

    if (value.HasMember("ExternalToolList") && !value["ExternalToolList"].IsNull())
    {
        if (!value["ExternalToolList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ExternalToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["ExternalToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentExternalToolConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_externalToolList.push_back(item);
        }
        m_externalToolListHasBeenSet = true;
    }

    if (value.HasMember("ProviderType") && !value["ProviderType"].IsNull())
    {
        if (!value["ProviderType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ProviderType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = value["ProviderType"].GetInt64();
        m_providerTypeHasBeenSet = true;
    }

    if (value.HasMember("ReferenceAppId") && !value["ReferenceAppId"].IsNull())
    {
        if (!value["ReferenceAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ReferenceAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceAppId = string(value["ReferenceAppId"].GetString());
        m_referenceAppIdHasBeenSet = true;
    }

    if (value.HasMember("ReferenceAppStatus") && !value["ReferenceAppStatus"].IsNull())
    {
        if (!value["ReferenceAppStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ReferenceAppStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceAppStatus = value["ReferenceAppStatus"].GetInt64();
        m_referenceAppStatusHasBeenSet = true;
    }

    if (value.HasMember("ReferenceApp") && !value["ReferenceApp"].IsNull())
    {
        if (!value["ReferenceApp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentDetail.ReferenceApp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_referenceApp.Deserialize(value["ReferenceApp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_referenceAppHasBeenSet = true;
    }

    if (value.HasMember("BuiltinToolList") && !value["BuiltinToolList"].IsNull())
    {
        if (!value["BuiltinToolList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentDetail.BuiltinToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["BuiltinToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentBuiltinTool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_builtinToolList.push_back(item);
        }
        m_builtinToolListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instructionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instructions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instructions.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolList.begin(); itr != m_toolList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pluginListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginList.begin(); itr != m_pluginList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_skillListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_skillList.begin(); itr != m_skillList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advancedConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_externalToolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalToolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_externalToolList.begin(); itr != m_externalToolList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerType, allocator);
    }

    if (m_referenceAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceAppStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceAppStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceAppStatus, allocator);
    }

    if (m_referenceAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_referenceApp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_builtinToolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuiltinToolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_builtinToolList.begin(); itr != m_builtinToolList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AgentDetail::GetAgentId() const
{
    return m_agentId;
}

void AgentDetail::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool AgentDetail::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

AgentProfile AgentDetail::GetProfile() const
{
    return m_profile;
}

void AgentDetail::SetProfile(const AgentProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AgentDetail::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string AgentDetail::GetInstructions() const
{
    return m_instructions;
}

void AgentDetail::SetInstructions(const string& _instructions)
{
    m_instructions = _instructions;
    m_instructionsHasBeenSet = true;
}

bool AgentDetail::InstructionsHasBeenSet() const
{
    return m_instructionsHasBeenSet;
}

AgentModelConfig AgentDetail::GetModel() const
{
    return m_model;
}

void AgentDetail::SetModel(const AgentModelConfig& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AgentDetail::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<AgentTool> AgentDetail::GetToolList() const
{
    return m_toolList;
}

void AgentDetail::SetToolList(const vector<AgentTool>& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool AgentDetail::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}

vector<AgentPlugin> AgentDetail::GetPluginList() const
{
    return m_pluginList;
}

void AgentDetail::SetPluginList(const vector<AgentPlugin>& _pluginList)
{
    m_pluginList = _pluginList;
    m_pluginListHasBeenSet = true;
}

bool AgentDetail::PluginListHasBeenSet() const
{
    return m_pluginListHasBeenSet;
}

vector<AgentSkill> AgentDetail::GetSkillList() const
{
    return m_skillList;
}

void AgentDetail::SetSkillList(const vector<AgentSkill>& _skillList)
{
    m_skillList = _skillList;
    m_skillListHasBeenSet = true;
}

bool AgentDetail::SkillListHasBeenSet() const
{
    return m_skillListHasBeenSet;
}

AgentAdvancedConfig AgentDetail::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void AgentDetail::SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool AgentDetail::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

vector<AgentExternalToolConfig> AgentDetail::GetExternalToolList() const
{
    return m_externalToolList;
}

void AgentDetail::SetExternalToolList(const vector<AgentExternalToolConfig>& _externalToolList)
{
    m_externalToolList = _externalToolList;
    m_externalToolListHasBeenSet = true;
}

bool AgentDetail::ExternalToolListHasBeenSet() const
{
    return m_externalToolListHasBeenSet;
}

int64_t AgentDetail::GetProviderType() const
{
    return m_providerType;
}

void AgentDetail::SetProviderType(const int64_t& _providerType)
{
    m_providerType = _providerType;
    m_providerTypeHasBeenSet = true;
}

bool AgentDetail::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string AgentDetail::GetReferenceAppId() const
{
    return m_referenceAppId;
}

void AgentDetail::SetReferenceAppId(const string& _referenceAppId)
{
    m_referenceAppId = _referenceAppId;
    m_referenceAppIdHasBeenSet = true;
}

bool AgentDetail::ReferenceAppIdHasBeenSet() const
{
    return m_referenceAppIdHasBeenSet;
}

int64_t AgentDetail::GetReferenceAppStatus() const
{
    return m_referenceAppStatus;
}

void AgentDetail::SetReferenceAppStatus(const int64_t& _referenceAppStatus)
{
    m_referenceAppStatus = _referenceAppStatus;
    m_referenceAppStatusHasBeenSet = true;
}

bool AgentDetail::ReferenceAppStatusHasBeenSet() const
{
    return m_referenceAppStatusHasBeenSet;
}

ReferenceAppDetail AgentDetail::GetReferenceApp() const
{
    return m_referenceApp;
}

void AgentDetail::SetReferenceApp(const ReferenceAppDetail& _referenceApp)
{
    m_referenceApp = _referenceApp;
    m_referenceAppHasBeenSet = true;
}

bool AgentDetail::ReferenceAppHasBeenSet() const
{
    return m_referenceAppHasBeenSet;
}

vector<AgentBuiltinTool> AgentDetail::GetBuiltinToolList() const
{
    return m_builtinToolList;
}

void AgentDetail::SetBuiltinToolList(const vector<AgentBuiltinTool>& _builtinToolList)
{
    m_builtinToolList = _builtinToolList;
    m_builtinToolListHasBeenSet = true;
}

bool AgentDetail::BuiltinToolListHasBeenSet() const
{
    return m_builtinToolListHasBeenSet;
}

