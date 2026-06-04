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

#include <tencentcloud/adp/v20260520/model/AgentSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AgentSpec::AgentSpec() :
    m_profileHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_toolListHasBeenSet(false),
    m_pluginListHasBeenSet(false),
    m_skillListHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome AgentSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpec.Profile` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AgentSpec.Instructions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructions = string(value["Instructions"].GetString());
        m_instructionsHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpec.Model` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AgentSpec.ToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolConfig item;
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
            return CoreInternalOutcome(Core::Error("response `AgentSpec.PluginList` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginConfig item;
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
            return CoreInternalOutcome(Core::Error("response `AgentSpec.SkillList` is not array type"));

        const rapidjson::Value &tmpValue = value["SkillList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentSkillConfig item;
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
            return CoreInternalOutcome(Core::Error("response `AgentSpec.AdvancedConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advancedConfig.Deserialize(value["AdvancedConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


AgentProfile AgentSpec::GetProfile() const
{
    return m_profile;
}

void AgentSpec::SetProfile(const AgentProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool AgentSpec::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string AgentSpec::GetInstructions() const
{
    return m_instructions;
}

void AgentSpec::SetInstructions(const string& _instructions)
{
    m_instructions = _instructions;
    m_instructionsHasBeenSet = true;
}

bool AgentSpec::InstructionsHasBeenSet() const
{
    return m_instructionsHasBeenSet;
}

AgentModelConfig AgentSpec::GetModel() const
{
    return m_model;
}

void AgentSpec::SetModel(const AgentModelConfig& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AgentSpec::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<AgentToolConfig> AgentSpec::GetToolList() const
{
    return m_toolList;
}

void AgentSpec::SetToolList(const vector<AgentToolConfig>& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool AgentSpec::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}

vector<AgentPluginConfig> AgentSpec::GetPluginList() const
{
    return m_pluginList;
}

void AgentSpec::SetPluginList(const vector<AgentPluginConfig>& _pluginList)
{
    m_pluginList = _pluginList;
    m_pluginListHasBeenSet = true;
}

bool AgentSpec::PluginListHasBeenSet() const
{
    return m_pluginListHasBeenSet;
}

vector<AgentSkillConfig> AgentSpec::GetSkillList() const
{
    return m_skillList;
}

void AgentSpec::SetSkillList(const vector<AgentSkillConfig>& _skillList)
{
    m_skillList = _skillList;
    m_skillListHasBeenSet = true;
}

bool AgentSpec::SkillListHasBeenSet() const
{
    return m_skillListHasBeenSet;
}

AgentAdvancedConfig AgentSpec::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void AgentSpec::SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool AgentSpec::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

