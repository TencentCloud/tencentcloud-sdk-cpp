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

#include <tencentcloud/lighthouse/v20200324/model/ModifyMcpServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ModifyMcpServerRequest::ModifyMcpServerRequest() :
    m_instanceIdHasBeenSet(false),
    m_mcpServerIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_envsHasBeenSet(false)
{
}

string ModifyMcpServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mcpServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
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


string ModifyMcpServerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyMcpServerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyMcpServerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyMcpServerRequest::GetMcpServerId() const
{
    return m_mcpServerId;
}

void ModifyMcpServerRequest::SetMcpServerId(const string& _mcpServerId)
{
    m_mcpServerId = _mcpServerId;
    m_mcpServerIdHasBeenSet = true;
}

bool ModifyMcpServerRequest::McpServerIdHasBeenSet() const
{
    return m_mcpServerIdHasBeenSet;
}

string ModifyMcpServerRequest::GetName() const
{
    return m_name;
}

void ModifyMcpServerRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMcpServerRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyMcpServerRequest::GetCommand() const
{
    return m_command;
}

void ModifyMcpServerRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ModifyMcpServerRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string ModifyMcpServerRequest::GetDescription() const
{
    return m_description;
}

void ModifyMcpServerRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyMcpServerRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<McpServerEnv> ModifyMcpServerRequest::GetEnvs() const
{
    return m_envs;
}

void ModifyMcpServerRequest::SetEnvs(const vector<McpServerEnv>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ModifyMcpServerRequest::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}


