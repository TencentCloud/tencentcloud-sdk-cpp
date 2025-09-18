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

#include <tencentcloud/lke/v20231130/model/Agent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Agent::Agent() :
    m_agentIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_instructionsHasBeenSet(false),
    m_handoffDescriptionHasBeenSet(false),
    m_handoffsHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_isStartingAgentHasBeenSet(false),
    m_agentTypeHasBeenSet(false),
    m_agentModeHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
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

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Instructions") && !value["Instructions"].IsNull())
    {
        if (!value["Instructions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Instructions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructions = string(value["Instructions"].GetString());
        m_instructionsHasBeenSet = true;
    }

    if (value.HasMember("HandoffDescription") && !value["HandoffDescription"].IsNull())
    {
        if (!value["HandoffDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.HandoffDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handoffDescription = string(value["HandoffDescription"].GetString());
        m_handoffDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Handoffs") && !value["Handoffs"].IsNull())
    {
        if (!value["Handoffs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Agent.Handoffs` is not array type"));

        const rapidjson::Value &tmpValue = value["Handoffs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_handoffs.push_back((*itr).GetString());
        }
        m_handoffsHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Tools") && !value["Tools"].IsNull())
    {
        if (!value["Tools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Agent.Tools` is not array type"));

        const rapidjson::Value &tmpValue = value["Tools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tools.push_back(item);
        }
        m_toolsHasBeenSet = true;
    }

    if (value.HasMember("Plugins") && !value["Plugins"].IsNull())
    {
        if (!value["Plugins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Agent.Plugins` is not array type"));

        const rapidjson::Value &tmpValue = value["Plugins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_plugins.push_back(item);
        }
        m_pluginsHasBeenSet = true;
    }

    if (value.HasMember("IsStartingAgent") && !value["IsStartingAgent"].IsNull())
    {
        if (!value["IsStartingAgent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.IsStartingAgent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isStartingAgent = value["IsStartingAgent"].GetBool();
        m_isStartingAgentHasBeenSet = true;
    }

    if (value.HasMember("AgentType") && !value["AgentType"].IsNull())
    {
        if (!value["AgentType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentType = value["AgentType"].GetUint64();
        m_agentTypeHasBeenSet = true;
    }

    if (value.HasMember("AgentMode") && !value["AgentMode"].IsNull())
    {
        if (!value["AgentMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AgentMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_agentMode = value["AgentMode"].GetInt64();
        m_agentModeHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AdvancedConfig` is not object type").SetRequestId(requestId));
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

void Agent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instructions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instructions.c_str(), allocator).Move(), allocator);
    }

    if (m_handoffDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandoffDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handoffDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_handoffsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handoffs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_handoffs.begin(); itr != m_handoffs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tools.begin(); itr != m_tools.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pluginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plugins.begin(); itr != m_plugins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isStartingAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsStartingAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isStartingAgent, allocator);
    }

    if (m_agentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentType, allocator);
    }

    if (m_agentModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentMode, allocator);
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

string Agent::GetWorkflowId() const
{
    return m_workflowId;
}

void Agent::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool Agent::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string Agent::GetName() const
{
    return m_name;
}

void Agent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Agent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Agent::GetIconUrl() const
{
    return m_iconUrl;
}

void Agent::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool Agent::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string Agent::GetInstructions() const
{
    return m_instructions;
}

void Agent::SetInstructions(const string& _instructions)
{
    m_instructions = _instructions;
    m_instructionsHasBeenSet = true;
}

bool Agent::InstructionsHasBeenSet() const
{
    return m_instructionsHasBeenSet;
}

string Agent::GetHandoffDescription() const
{
    return m_handoffDescription;
}

void Agent::SetHandoffDescription(const string& _handoffDescription)
{
    m_handoffDescription = _handoffDescription;
    m_handoffDescriptionHasBeenSet = true;
}

bool Agent::HandoffDescriptionHasBeenSet() const
{
    return m_handoffDescriptionHasBeenSet;
}

vector<string> Agent::GetHandoffs() const
{
    return m_handoffs;
}

void Agent::SetHandoffs(const vector<string>& _handoffs)
{
    m_handoffs = _handoffs;
    m_handoffsHasBeenSet = true;
}

bool Agent::HandoffsHasBeenSet() const
{
    return m_handoffsHasBeenSet;
}

AgentModelInfo Agent::GetModel() const
{
    return m_model;
}

void Agent::SetModel(const AgentModelInfo& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool Agent::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

vector<AgentToolInfo> Agent::GetTools() const
{
    return m_tools;
}

void Agent::SetTools(const vector<AgentToolInfo>& _tools)
{
    m_tools = _tools;
    m_toolsHasBeenSet = true;
}

bool Agent::ToolsHasBeenSet() const
{
    return m_toolsHasBeenSet;
}

vector<AgentPluginInfo> Agent::GetPlugins() const
{
    return m_plugins;
}

void Agent::SetPlugins(const vector<AgentPluginInfo>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool Agent::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

bool Agent::GetIsStartingAgent() const
{
    return m_isStartingAgent;
}

void Agent::SetIsStartingAgent(const bool& _isStartingAgent)
{
    m_isStartingAgent = _isStartingAgent;
    m_isStartingAgentHasBeenSet = true;
}

bool Agent::IsStartingAgentHasBeenSet() const
{
    return m_isStartingAgentHasBeenSet;
}

uint64_t Agent::GetAgentType() const
{
    return m_agentType;
}

void Agent::SetAgentType(const uint64_t& _agentType)
{
    m_agentType = _agentType;
    m_agentTypeHasBeenSet = true;
}

bool Agent::AgentTypeHasBeenSet() const
{
    return m_agentTypeHasBeenSet;
}

int64_t Agent::GetAgentMode() const
{
    return m_agentMode;
}

void Agent::SetAgentMode(const int64_t& _agentMode)
{
    m_agentMode = _agentMode;
    m_agentModeHasBeenSet = true;
}

bool Agent::AgentModeHasBeenSet() const
{
    return m_agentModeHasBeenSet;
}

AgentAdvancedConfig Agent::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void Agent::SetAdvancedConfig(const AgentAdvancedConfig& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool Agent::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

