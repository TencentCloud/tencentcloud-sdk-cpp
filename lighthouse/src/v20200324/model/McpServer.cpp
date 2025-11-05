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

#include <tencentcloud/lighthouse/v20200324/model/McpServer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

McpServer::McpServer() :
    m_mcpServerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_mcpServerTypeHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_serverUrlHasBeenSet(false),
    m_configHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_envSetHasBeenSet(false),
    m_transportTypeHasBeenSet(false)
{
}

CoreInternalOutcome McpServer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("McpServerId") && !value["McpServerId"].IsNull())
    {
        if (!value["McpServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.McpServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServerId = string(value["McpServerId"].GetString());
        m_mcpServerIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("McpServerType") && !value["McpServerType"].IsNull())
    {
        if (!value["McpServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.McpServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServerType = string(value["McpServerType"].GetString());
        m_mcpServerTypeHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ServerUrl") && !value["ServerUrl"].IsNull())
    {
        if (!value["ServerUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.ServerUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverUrl = string(value["ServerUrl"].GetString());
        m_serverUrlHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.Config` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_config = string(value["Config"].GetString());
        m_configHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("EnvSet") && !value["EnvSet"].IsNull())
    {
        if (!value["EnvSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `McpServer.EnvSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EnvSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McpServerEnv item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envSet.push_back(item);
        }
        m_envSetHasBeenSet = true;
    }

    if (value.HasMember("TransportType") && !value["TransportType"].IsNull())
    {
        if (!value["TransportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpServer.TransportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transportType = string(value["TransportType"].GetString());
        m_transportTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpServer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mcpServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mcpServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mcpServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_serverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_envSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envSet.begin(); itr != m_envSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_transportTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transportType.c_str(), allocator).Move(), allocator);
    }

}


string McpServer::GetMcpServerId() const
{
    return m_mcpServerId;
}

void McpServer::SetMcpServerId(const string& _mcpServerId)
{
    m_mcpServerId = _mcpServerId;
    m_mcpServerIdHasBeenSet = true;
}

bool McpServer::McpServerIdHasBeenSet() const
{
    return m_mcpServerIdHasBeenSet;
}

string McpServer::GetName() const
{
    return m_name;
}

void McpServer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool McpServer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string McpServer::GetMcpServerType() const
{
    return m_mcpServerType;
}

void McpServer::SetMcpServerType(const string& _mcpServerType)
{
    m_mcpServerType = _mcpServerType;
    m_mcpServerTypeHasBeenSet = true;
}

bool McpServer::McpServerTypeHasBeenSet() const
{
    return m_mcpServerTypeHasBeenSet;
}

string McpServer::GetIconUrl() const
{
    return m_iconUrl;
}

void McpServer::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool McpServer::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

string McpServer::GetCommand() const
{
    return m_command;
}

void McpServer::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool McpServer::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string McpServer::GetState() const
{
    return m_state;
}

void McpServer::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool McpServer::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string McpServer::GetServerUrl() const
{
    return m_serverUrl;
}

void McpServer::SetServerUrl(const string& _serverUrl)
{
    m_serverUrl = _serverUrl;
    m_serverUrlHasBeenSet = true;
}

bool McpServer::ServerUrlHasBeenSet() const
{
    return m_serverUrlHasBeenSet;
}

string McpServer::GetConfig() const
{
    return m_config;
}

void McpServer::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool McpServer::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string McpServer::GetDescription() const
{
    return m_description;
}

void McpServer::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool McpServer::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string McpServer::GetCreatedTime() const
{
    return m_createdTime;
}

void McpServer::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool McpServer::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string McpServer::GetUpdatedTime() const
{
    return m_updatedTime;
}

void McpServer::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool McpServer::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

vector<McpServerEnv> McpServer::GetEnvSet() const
{
    return m_envSet;
}

void McpServer::SetEnvSet(const vector<McpServerEnv>& _envSet)
{
    m_envSet = _envSet;
    m_envSetHasBeenSet = true;
}

bool McpServer::EnvSetHasBeenSet() const
{
    return m_envSetHasBeenSet;
}

string McpServer::GetTransportType() const
{
    return m_transportType;
}

void McpServer::SetTransportType(const string& _transportType)
{
    m_transportType = _transportType;
    m_transportTypeHasBeenSet = true;
}

bool McpServer::TransportTypeHasBeenSet() const
{
    return m_transportTypeHasBeenSet;
}

