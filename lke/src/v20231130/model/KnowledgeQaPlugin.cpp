/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/lke/v20231130/model/KnowledgeQaPlugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

KnowledgeQaPlugin::KnowledgeQaPlugin() :
    m_pluginIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_pluginIconHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_toolDescHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_isBindingKnowledgeHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeQaPlugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("PluginIcon") && !value["PluginIcon"].IsNull())
    {
        if (!value["PluginIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.PluginIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginIcon = string(value["PluginIcon"].GetString());
        m_pluginIconHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("ToolDesc") && !value["ToolDesc"].IsNull())
    {
        if (!value["ToolDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.ToolDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolDesc = string(value["ToolDesc"].GetString());
        m_toolDescHasBeenSet = true;
    }

    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginToolReqParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputs.push_back(item);
        }
        m_inputsHasBeenSet = true;
    }

    if (value.HasMember("IsBindingKnowledge") && !value["IsBindingKnowledge"].IsNull())
    {
        if (!value["IsBindingKnowledge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeQaPlugin.IsBindingKnowledge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBindingKnowledge = value["IsBindingKnowledge"].GetBool();
        m_isBindingKnowledgeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeQaPlugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolId.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_toolDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isBindingKnowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBindingKnowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBindingKnowledge, allocator);
    }

}


string KnowledgeQaPlugin::GetPluginId() const
{
    return m_pluginId;
}

void KnowledgeQaPlugin::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool KnowledgeQaPlugin::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string KnowledgeQaPlugin::GetPluginName() const
{
    return m_pluginName;
}

void KnowledgeQaPlugin::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool KnowledgeQaPlugin::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string KnowledgeQaPlugin::GetPluginIcon() const
{
    return m_pluginIcon;
}

void KnowledgeQaPlugin::SetPluginIcon(const string& _pluginIcon)
{
    m_pluginIcon = _pluginIcon;
    m_pluginIconHasBeenSet = true;
}

bool KnowledgeQaPlugin::PluginIconHasBeenSet() const
{
    return m_pluginIconHasBeenSet;
}

string KnowledgeQaPlugin::GetToolId() const
{
    return m_toolId;
}

void KnowledgeQaPlugin::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool KnowledgeQaPlugin::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string KnowledgeQaPlugin::GetToolName() const
{
    return m_toolName;
}

void KnowledgeQaPlugin::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool KnowledgeQaPlugin::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string KnowledgeQaPlugin::GetToolDesc() const
{
    return m_toolDesc;
}

void KnowledgeQaPlugin::SetToolDesc(const string& _toolDesc)
{
    m_toolDesc = _toolDesc;
    m_toolDescHasBeenSet = true;
}

bool KnowledgeQaPlugin::ToolDescHasBeenSet() const
{
    return m_toolDescHasBeenSet;
}

vector<PluginToolReqParam> KnowledgeQaPlugin::GetInputs() const
{
    return m_inputs;
}

void KnowledgeQaPlugin::SetInputs(const vector<PluginToolReqParam>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool KnowledgeQaPlugin::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

bool KnowledgeQaPlugin::GetIsBindingKnowledge() const
{
    return m_isBindingKnowledge;
}

void KnowledgeQaPlugin::SetIsBindingKnowledge(const bool& _isBindingKnowledge)
{
    m_isBindingKnowledge = _isBindingKnowledge;
    m_isBindingKnowledgeHasBeenSet = true;
}

bool KnowledgeQaPlugin::IsBindingKnowledgeHasBeenSet() const
{
    return m_isBindingKnowledgeHasBeenSet;
}

