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

#include <tencentcloud/lighthouse/v20200324/model/ModifyDockerContainerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ModifyDockerContainerRequest::ModifyDockerContainerRequest() :
    m_instanceIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_envsHasBeenSet(false),
    m_publishPortsHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_restartPolicyHasBeenSet(false)
{
}

string ModifyDockerContainerRequest::ToJsonString() const
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

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
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

    if (m_publishPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishPorts.begin(); itr != m_publishPorts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_volumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volumes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumes.begin(); itr != m_volumes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_restartPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_restartPolicy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDockerContainerRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDockerContainerRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDockerContainerRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDockerContainerRequest::GetContainerId() const
{
    return m_containerId;
}

void ModifyDockerContainerRequest::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ModifyDockerContainerRequest::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

vector<ContainerEnv> ModifyDockerContainerRequest::GetEnvs() const
{
    return m_envs;
}

void ModifyDockerContainerRequest::SetEnvs(const vector<ContainerEnv>& _envs)
{
    m_envs = _envs;
    m_envsHasBeenSet = true;
}

bool ModifyDockerContainerRequest::EnvsHasBeenSet() const
{
    return m_envsHasBeenSet;
}

vector<DockerContainerPublishPort> ModifyDockerContainerRequest::GetPublishPorts() const
{
    return m_publishPorts;
}

void ModifyDockerContainerRequest::SetPublishPorts(const vector<DockerContainerPublishPort>& _publishPorts)
{
    m_publishPorts = _publishPorts;
    m_publishPortsHasBeenSet = true;
}

bool ModifyDockerContainerRequest::PublishPortsHasBeenSet() const
{
    return m_publishPortsHasBeenSet;
}

vector<DockerContainerVolume> ModifyDockerContainerRequest::GetVolumes() const
{
    return m_volumes;
}

void ModifyDockerContainerRequest::SetVolumes(const vector<DockerContainerVolume>& _volumes)
{
    m_volumes = _volumes;
    m_volumesHasBeenSet = true;
}

bool ModifyDockerContainerRequest::VolumesHasBeenSet() const
{
    return m_volumesHasBeenSet;
}

string ModifyDockerContainerRequest::GetCommand() const
{
    return m_command;
}

void ModifyDockerContainerRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ModifyDockerContainerRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string ModifyDockerContainerRequest::GetRestartPolicy() const
{
    return m_restartPolicy;
}

void ModifyDockerContainerRequest::SetRestartPolicy(const string& _restartPolicy)
{
    m_restartPolicy = _restartPolicy;
    m_restartPolicyHasBeenSet = true;
}

bool ModifyDockerContainerRequest::RestartPolicyHasBeenSet() const
{
    return m_restartPolicyHasBeenSet;
}


