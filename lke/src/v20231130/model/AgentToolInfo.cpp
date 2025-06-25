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

#include <tencentcloud/lke/v20231130/model/AgentToolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentToolInfo::AgentToolInfo() :
    m_pluginIdHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_pluginTypeHasBeenSet(false),
    m_toolIdHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_toolDescHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_createTypeHasBeenSet(false),
    m_mcpServerHasBeenSet(false),
    m_isBindingKnowledgeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_callingMethodHasBeenSet(false)
{
}

CoreInternalOutcome AgentToolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("PluginType") && !value["PluginType"].IsNull())
    {
        if (!value["PluginType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.PluginType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginType = value["PluginType"].GetUint64();
        m_pluginTypeHasBeenSet = true;
    }

    if (value.HasMember("ToolId") && !value["ToolId"].IsNull())
    {
        if (!value["ToolId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.ToolId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolId = string(value["ToolId"].GetString());
        m_toolIdHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("ToolDesc") && !value["ToolDesc"].IsNull())
    {
        if (!value["ToolDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.ToolDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolDesc = string(value["ToolDesc"].GetString());
        m_toolDescHasBeenSet = true;
    }

    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolReqParam item;
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

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentToolRspParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("CreateType") && !value["CreateType"].IsNull())
    {
        if (!value["CreateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.CreateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createType = value["CreateType"].GetInt64();
        m_createTypeHasBeenSet = true;
    }

    if (value.HasMember("McpServer") && !value["McpServer"].IsNull())
    {
        if (!value["McpServer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.McpServer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mcpServer.Deserialize(value["McpServer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mcpServerHasBeenSet = true;
    }

    if (value.HasMember("IsBindingKnowledge") && !value["IsBindingKnowledge"].IsNull())
    {
        if (!value["IsBindingKnowledge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.IsBindingKnowledge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isBindingKnowledge = value["IsBindingKnowledge"].GetBool();
        m_isBindingKnowledgeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgentPluginHeader item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headers.push_back(item);
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("CallingMethod") && !value["CallingMethod"].IsNull())
    {
        if (!value["CallingMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentToolInfo.CallingMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callingMethod = string(value["CallingMethod"].GetString());
        m_callingMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentToolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginType, allocator);
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

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createType, allocator);
    }

    if (m_mcpServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mcpServer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isBindingKnowledgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBindingKnowledge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBindingKnowledge, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_callingMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallingMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callingMethod.c_str(), allocator).Move(), allocator);
    }

}


string AgentToolInfo::GetPluginId() const
{
    return m_pluginId;
}

void AgentToolInfo::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool AgentToolInfo::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string AgentToolInfo::GetPluginName() const
{
    return m_pluginName;
}

void AgentToolInfo::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool AgentToolInfo::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string AgentToolInfo::GetIconUrl() const
{
    return m_iconUrl;
}

void AgentToolInfo::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool AgentToolInfo::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

uint64_t AgentToolInfo::GetPluginType() const
{
    return m_pluginType;
}

void AgentToolInfo::SetPluginType(const uint64_t& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool AgentToolInfo::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}

string AgentToolInfo::GetToolId() const
{
    return m_toolId;
}

void AgentToolInfo::SetToolId(const string& _toolId)
{
    m_toolId = _toolId;
    m_toolIdHasBeenSet = true;
}

bool AgentToolInfo::ToolIdHasBeenSet() const
{
    return m_toolIdHasBeenSet;
}

string AgentToolInfo::GetToolName() const
{
    return m_toolName;
}

void AgentToolInfo::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool AgentToolInfo::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string AgentToolInfo::GetToolDesc() const
{
    return m_toolDesc;
}

void AgentToolInfo::SetToolDesc(const string& _toolDesc)
{
    m_toolDesc = _toolDesc;
    m_toolDescHasBeenSet = true;
}

bool AgentToolInfo::ToolDescHasBeenSet() const
{
    return m_toolDescHasBeenSet;
}

vector<AgentToolReqParam> AgentToolInfo::GetInputs() const
{
    return m_inputs;
}

void AgentToolInfo::SetInputs(const vector<AgentToolReqParam>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool AgentToolInfo::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

vector<AgentToolRspParam> AgentToolInfo::GetOutputs() const
{
    return m_outputs;
}

void AgentToolInfo::SetOutputs(const vector<AgentToolRspParam>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool AgentToolInfo::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

int64_t AgentToolInfo::GetCreateType() const
{
    return m_createType;
}

void AgentToolInfo::SetCreateType(const int64_t& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool AgentToolInfo::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

AgentMCPServerInfo AgentToolInfo::GetMcpServer() const
{
    return m_mcpServer;
}

void AgentToolInfo::SetMcpServer(const AgentMCPServerInfo& _mcpServer)
{
    m_mcpServer = _mcpServer;
    m_mcpServerHasBeenSet = true;
}

bool AgentToolInfo::McpServerHasBeenSet() const
{
    return m_mcpServerHasBeenSet;
}

bool AgentToolInfo::GetIsBindingKnowledge() const
{
    return m_isBindingKnowledge;
}

void AgentToolInfo::SetIsBindingKnowledge(const bool& _isBindingKnowledge)
{
    m_isBindingKnowledge = _isBindingKnowledge;
    m_isBindingKnowledgeHasBeenSet = true;
}

bool AgentToolInfo::IsBindingKnowledgeHasBeenSet() const
{
    return m_isBindingKnowledgeHasBeenSet;
}

int64_t AgentToolInfo::GetStatus() const
{
    return m_status;
}

void AgentToolInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AgentToolInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AgentPluginHeader> AgentToolInfo::GetHeaders() const
{
    return m_headers;
}

void AgentToolInfo::SetHeaders(const vector<AgentPluginHeader>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool AgentToolInfo::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string AgentToolInfo::GetCallingMethod() const
{
    return m_callingMethod;
}

void AgentToolInfo::SetCallingMethod(const string& _callingMethod)
{
    m_callingMethod = _callingMethod;
    m_callingMethodHasBeenSet = true;
}

bool AgentToolInfo::CallingMethodHasBeenSet() const
{
    return m_callingMethodHasBeenSet;
}

