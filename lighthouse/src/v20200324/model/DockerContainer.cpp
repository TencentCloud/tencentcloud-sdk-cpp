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

#include <tencentcloud/lighthouse/v20200324/model/DockerContainer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DockerContainer::DockerContainer() :
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerImageHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_publishPortSetHasBeenSet(false),
    m_volumeSetHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome DockerContainer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerImage") && !value["ContainerImage"].IsNull())
    {
        if (!value["ContainerImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.ContainerImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerImage = string(value["ContainerImage"].GetString());
        m_containerImageHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("PublishPortSet") && !value["PublishPortSet"].IsNull())
    {
        if (!value["PublishPortSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerContainer.PublishPortSet` is not array type"));

        const rapidjson::Value &tmpValue = value["PublishPortSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DockerContainerPublishPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_publishPortSet.push_back(item);
        }
        m_publishPortSetHasBeenSet = true;
    }

    if (value.HasMember("VolumeSet") && !value["VolumeSet"].IsNull())
    {
        if (!value["VolumeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DockerContainer.VolumeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VolumeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DockerContainerVolume item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumeSet.push_back(item);
        }
        m_volumeSetHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DockerContainer.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DockerContainer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerImage.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_publishPortSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishPortSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_publishPortSet.begin(); itr != m_publishPortSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_volumeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumeSet.begin(); itr != m_volumeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string DockerContainer::GetContainerId() const
{
    return m_containerId;
}

void DockerContainer::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool DockerContainer::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string DockerContainer::GetContainerName() const
{
    return m_containerName;
}

void DockerContainer::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool DockerContainer::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DockerContainer::GetContainerImage() const
{
    return m_containerImage;
}

void DockerContainer::SetContainerImage(const string& _containerImage)
{
    m_containerImage = _containerImage;
    m_containerImageHasBeenSet = true;
}

bool DockerContainer::ContainerImageHasBeenSet() const
{
    return m_containerImageHasBeenSet;
}

string DockerContainer::GetCommand() const
{
    return m_command;
}

void DockerContainer::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool DockerContainer::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string DockerContainer::GetStatus() const
{
    return m_status;
}

void DockerContainer::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DockerContainer::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DockerContainer::GetState() const
{
    return m_state;
}

void DockerContainer::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DockerContainer::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

vector<DockerContainerPublishPort> DockerContainer::GetPublishPortSet() const
{
    return m_publishPortSet;
}

void DockerContainer::SetPublishPortSet(const vector<DockerContainerPublishPort>& _publishPortSet)
{
    m_publishPortSet = _publishPortSet;
    m_publishPortSetHasBeenSet = true;
}

bool DockerContainer::PublishPortSetHasBeenSet() const
{
    return m_publishPortSetHasBeenSet;
}

vector<DockerContainerVolume> DockerContainer::GetVolumeSet() const
{
    return m_volumeSet;
}

void DockerContainer::SetVolumeSet(const vector<DockerContainerVolume>& _volumeSet)
{
    m_volumeSet = _volumeSet;
    m_volumeSetHasBeenSet = true;
}

bool DockerContainer::VolumeSetHasBeenSet() const
{
    return m_volumeSetHasBeenSet;
}

string DockerContainer::GetCreatedTime() const
{
    return m_createdTime;
}

void DockerContainer::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool DockerContainer::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

