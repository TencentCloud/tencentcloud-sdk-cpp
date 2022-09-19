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

#include <tencentcloud/cloudstudio/v20210524/model/AgentSpaceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

AgentSpaceDTO::AgentSpaceDTO() :
    m_nameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_remoteUserHasBeenSet(false),
    m_remoteHostHasBeenSet(false),
    m_remotePortHasBeenSet(false),
    m_workspaceTypeHasBeenSet(false),
    m_workspaceVersionHasBeenSet(false),
    m_workspaceResourceDTOHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome AgentSpaceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.ImageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = value["ImageId"].GetInt64();
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("RemoteUser") && !value["RemoteUser"].IsNull())
    {
        if (!value["RemoteUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.RemoteUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteUser = string(value["RemoteUser"].GetString());
        m_remoteUserHasBeenSet = true;
    }

    if (value.HasMember("RemoteHost") && !value["RemoteHost"].IsNull())
    {
        if (!value["RemoteHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.RemoteHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteHost = string(value["RemoteHost"].GetString());
        m_remoteHostHasBeenSet = true;
    }

    if (value.HasMember("RemotePort") && !value["RemotePort"].IsNull())
    {
        if (!value["RemotePort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.RemotePort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePort = string(value["RemotePort"].GetString());
        m_remotePortHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceType") && !value["WorkspaceType"].IsNull())
    {
        if (!value["WorkspaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.WorkspaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceType = string(value["WorkspaceType"].GetString());
        m_workspaceTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceVersion") && !value["WorkspaceVersion"].IsNull())
    {
        if (!value["WorkspaceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.WorkspaceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceVersion = value["WorkspaceVersion"].GetInt64();
        m_workspaceVersionHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceResourceDTO") && !value["WorkspaceResourceDTO"].IsNull())
    {
        if (!value["WorkspaceResourceDTO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.WorkspaceResourceDTO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workspaceResourceDTO.Deserialize(value["WorkspaceResourceDTO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workspaceResourceDTOHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSpaceDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSpaceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageId, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteUser.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteHost.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePort.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceVersion, allocator);
    }

    if (m_workspaceResourceDTOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceResourceDTO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workspaceResourceDTO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string AgentSpaceDTO::GetName() const
{
    return m_name;
}

void AgentSpaceDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AgentSpaceDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t AgentSpaceDTO::GetImageId() const
{
    return m_imageId;
}

void AgentSpaceDTO::SetImageId(const int64_t& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AgentSpaceDTO::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AgentSpaceDTO::GetImageName() const
{
    return m_imageName;
}

void AgentSpaceDTO::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool AgentSpaceDTO::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string AgentSpaceDTO::GetRemoteUser() const
{
    return m_remoteUser;
}

void AgentSpaceDTO::SetRemoteUser(const string& _remoteUser)
{
    m_remoteUser = _remoteUser;
    m_remoteUserHasBeenSet = true;
}

bool AgentSpaceDTO::RemoteUserHasBeenSet() const
{
    return m_remoteUserHasBeenSet;
}

string AgentSpaceDTO::GetRemoteHost() const
{
    return m_remoteHost;
}

void AgentSpaceDTO::SetRemoteHost(const string& _remoteHost)
{
    m_remoteHost = _remoteHost;
    m_remoteHostHasBeenSet = true;
}

bool AgentSpaceDTO::RemoteHostHasBeenSet() const
{
    return m_remoteHostHasBeenSet;
}

string AgentSpaceDTO::GetRemotePort() const
{
    return m_remotePort;
}

void AgentSpaceDTO::SetRemotePort(const string& _remotePort)
{
    m_remotePort = _remotePort;
    m_remotePortHasBeenSet = true;
}

bool AgentSpaceDTO::RemotePortHasBeenSet() const
{
    return m_remotePortHasBeenSet;
}

string AgentSpaceDTO::GetWorkspaceType() const
{
    return m_workspaceType;
}

void AgentSpaceDTO::SetWorkspaceType(const string& _workspaceType)
{
    m_workspaceType = _workspaceType;
    m_workspaceTypeHasBeenSet = true;
}

bool AgentSpaceDTO::WorkspaceTypeHasBeenSet() const
{
    return m_workspaceTypeHasBeenSet;
}

int64_t AgentSpaceDTO::GetWorkspaceVersion() const
{
    return m_workspaceVersion;
}

void AgentSpaceDTO::SetWorkspaceVersion(const int64_t& _workspaceVersion)
{
    m_workspaceVersion = _workspaceVersion;
    m_workspaceVersionHasBeenSet = true;
}

bool AgentSpaceDTO::WorkspaceVersionHasBeenSet() const
{
    return m_workspaceVersionHasBeenSet;
}

WorkspaceResourceDTO AgentSpaceDTO::GetWorkspaceResourceDTO() const
{
    return m_workspaceResourceDTO;
}

void AgentSpaceDTO::SetWorkspaceResourceDTO(const WorkspaceResourceDTO& _workspaceResourceDTO)
{
    m_workspaceResourceDTO = _workspaceResourceDTO;
    m_workspaceResourceDTOHasBeenSet = true;
}

bool AgentSpaceDTO::WorkspaceResourceDTOHasBeenSet() const
{
    return m_workspaceResourceDTOHasBeenSet;
}

string AgentSpaceDTO::GetDescription() const
{
    return m_description;
}

void AgentSpaceDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AgentSpaceDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

