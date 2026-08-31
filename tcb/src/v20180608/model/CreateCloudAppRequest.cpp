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

#include <tencentcloud/tcb/v20180608/model/CreateCloudAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateCloudAppRequest::CreateCloudAppRequest() :
    m_envIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_buildTypeHasBeenSet(false),
    m_staticConfigHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_commandsHasBeenSet(false),
    m_envHasBeenSet(false),
    m_customStepsHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_nodeJsVersionHasBeenSet(false)
{
}

string CreateCloudAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

    if (m_staticConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_source.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_commandsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Commands";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_commands.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Env";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_env.begin(); itr != m_env.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_customStepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomSteps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customSteps.begin(); itr != m_customSteps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_secretsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secrets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_secrets.begin(); itr != m_secrets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nodeJsVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeJsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeJsVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudAppRequest::GetEnvId() const
{
    return m_envId;
}

void CreateCloudAppRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateCloudAppRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateCloudAppRequest::GetServiceName() const
{
    return m_serviceName;
}

void CreateCloudAppRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool CreateCloudAppRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string CreateCloudAppRequest::GetDeployType() const
{
    return m_deployType;
}

void CreateCloudAppRequest::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool CreateCloudAppRequest::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string CreateCloudAppRequest::GetBuildType() const
{
    return m_buildType;
}

void CreateCloudAppRequest::SetBuildType(const string& _buildType)
{
    m_buildType = _buildType;
    m_buildTypeHasBeenSet = true;
}

bool CreateCloudAppRequest::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

StaticConfig CreateCloudAppRequest::GetStaticConfig() const
{
    return m_staticConfig;
}

void CreateCloudAppRequest::SetStaticConfig(const StaticConfig& _staticConfig)
{
    m_staticConfig = _staticConfig;
    m_staticConfigHasBeenSet = true;
}

bool CreateCloudAppRequest::StaticConfigHasBeenSet() const
{
    return m_staticConfigHasBeenSet;
}

BuildSource CreateCloudAppRequest::GetSource() const
{
    return m_source;
}

void CreateCloudAppRequest::SetSource(const BuildSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateCloudAppRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

BuildCommands CreateCloudAppRequest::GetCommands() const
{
    return m_commands;
}

void CreateCloudAppRequest::SetCommands(const BuildCommands& _commands)
{
    m_commands = _commands;
    m_commandsHasBeenSet = true;
}

bool CreateCloudAppRequest::CommandsHasBeenSet() const
{
    return m_commandsHasBeenSet;
}

vector<Variable> CreateCloudAppRequest::GetEnv() const
{
    return m_env;
}

void CreateCloudAppRequest::SetEnv(const vector<Variable>& _env)
{
    m_env = _env;
    m_envHasBeenSet = true;
}

bool CreateCloudAppRequest::EnvHasBeenSet() const
{
    return m_envHasBeenSet;
}

vector<BuildStep> CreateCloudAppRequest::GetCustomSteps() const
{
    return m_customSteps;
}

void CreateCloudAppRequest::SetCustomSteps(const vector<BuildStep>& _customSteps)
{
    m_customSteps = _customSteps;
    m_customStepsHasBeenSet = true;
}

bool CreateCloudAppRequest::CustomStepsHasBeenSet() const
{
    return m_customStepsHasBeenSet;
}

vector<BuildSecret> CreateCloudAppRequest::GetSecrets() const
{
    return m_secrets;
}

void CreateCloudAppRequest::SetSecrets(const vector<BuildSecret>& _secrets)
{
    m_secrets = _secrets;
    m_secretsHasBeenSet = true;
}

bool CreateCloudAppRequest::SecretsHasBeenSet() const
{
    return m_secretsHasBeenSet;
}

string CreateCloudAppRequest::GetNodeJsVersion() const
{
    return m_nodeJsVersion;
}

void CreateCloudAppRequest::SetNodeJsVersion(const string& _nodeJsVersion)
{
    m_nodeJsVersion = _nodeJsVersion;
    m_nodeJsVersionHasBeenSet = true;
}

bool CreateCloudAppRequest::NodeJsVersionHasBeenSet() const
{
    return m_nodeJsVersionHasBeenSet;
}


