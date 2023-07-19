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

#include <tencentcloud/lighthouse/v20200324/model/DockerContainerConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DockerContainerConfiguration::DockerContainerConfiguration() :
    m_containerImageHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_publishPortsHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_restartPolicyHasBeenSet(false)
{
}

CoreInternalOutcome DockerContainerConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerImage") && !value["ContainerImage"].IsNull())
    {
        if (!value["ContainerImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.ContainerImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerImage = string(value["ContainerImage"].GetString());
        m_containerImageHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("Envs") && !value["Envs"].IsNull())
    {
        if (!value["Envs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.Envs` is not array type"));

        const rapidjson::Value &tmpValue = value["Envs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContainerEnv item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_envs.push_back(item);
        }
        m_envsHasBeenSet = true;
    }

    if (value.HasMember("PublishPorts") && !value["PublishPorts"].IsNull())
    {
        if (!value["PublishPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.PublishPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["PublishPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DockerContainerPublishPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publishPorts.push_back(item);
        }
        m_publishPortsHasBeenSet = true;
    }

    if (value.HasMember("Volumes") && !value["Volumes"].IsNull())
    {
        if (!value["Volumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.Volumes` is not array type"));

        const rapidjson::Value &tmpValue = value["Volumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DockerContainerVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumes.push_back(item);
        }
        m_volumesHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("RestartPolicy") && !value["RestartPolicy"].IsNull())
    {
        if (!value["RestartPolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainerConfiguration.RestartPolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restartPolicy = string(value["RestartPolicy"].GetString());
        m_restartPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerContainerConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerImage.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_envsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Envs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_envs.begin(); itr != m_envs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_publishPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishPorts.begin(); itr != m_publishPorts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_volumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumes.begin(); itr != m_volumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }

}


string DockerContainerConfiguration::GetContainerImage() const
{
    return m_containerImage;
}

void DockerContainerConfiguration::SetContainerImage(const string& _containerImage)
{
    m_containerImage = _containerImage;
    m_containerImageHasBeenSet = true;
}

bool DockerContainerConfiguration::ContainerImageHasBeenSet() const
{
    return m_containerImageHasBeenSet;
}

string DockerContainerConfiguration::GetContainerName() const
{
    return m_containerName;
}

void DockerContainerConfiguration::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DockerContainerConfiguration::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

vector<ContainerEnv> DockerContainerConfiguration::GetEnvs() const
{
    return m_envs;
}

void DockerContainerConfiguration::SetEnvs(const vector<ContainerEnv>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool DockerContainerConfiguration::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<DockerContainerPublishPort> DockerContainerConfiguration::GetPublishPorts() const
{
    return m_publishPorts;
}

void DockerContainerConfiguration::SetPublishPorts(const vector<DockerContainerPublishPort>& _publishPorts)
{
    m_publishPorts = _publishPorts;
    m_publishPortsHasBeenSet = true;
}

bool DockerContainerConfiguration::PublishPortsHasBeenSet() const
{
    return m_publishPortsHasBeenSet;
}

vector<DockerContainerVolume> DockerContainerConfiguration::GetVolumes() const
{
    return m_volumes;
}

void DockerContainerConfiguration::SetVolumes(const vector<DockerContainerVolume>& _volumes)
{
    m_volumes = _volumes;
    m_volumesHasBeenSet = true;
}

bool DockerContainerConfiguration::VolumesHasBeenSet() const
{
    return m_volumesHasBeenSet;
}

string DockerContainerConfiguration::GetCommand() const
{
    return m_command;
}

void DockerContainerConfiguration::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool DockerContainerConfiguration::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string DockerContainerConfiguration::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void DockerContainerConfiguration::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool DockerContainerConfiguration::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}

