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

#include <tencentcloud/cwp/v20180228/model/RaspMemShellEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspMemShellEvent::RaspMemShellEvent() :
    m_idHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_recentFoundTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_superClassNameHasBeenSet(false),
    m_interfacesHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_loaderClassNameHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIpHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_hostInnerIPHasBeenSet(false),
    m_hostPublicIPHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false)
{
}

CoreInternalOutcome RaspMemShellEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentFoundTime") && !value["RecentFoundTime"].IsNull())
    {
        if (!value["RecentFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.RecentFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentFoundTime = string(value["RecentFoundTime"].GetString());
        m_recentFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("SuperClassName") && !value["SuperClassName"].IsNull())
    {
        if (!value["SuperClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.SuperClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassName = string(value["SuperClassName"].GetString());
        m_superClassNameHasBeenSet = true;
    }

    if (value.HasMember("Interfaces") && !value["Interfaces"].IsNull())
    {
        if (!value["Interfaces"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Interfaces` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaces = string(value["Interfaces"].GetString());
        m_interfacesHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Annotations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotations = string(value["Annotations"].GetString());
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("LoaderClassName") && !value["LoaderClassName"].IsNull())
    {
        if (!value["LoaderClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.LoaderClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loaderClassName = string(value["LoaderClassName"].GetString());
        m_loaderClassNameHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("HostInnerIP") && !value["HostInnerIP"].IsNull())
    {
        if (!value["HostInnerIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.HostInnerIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostInnerIP = string(value["HostInnerIP"].GetString());
        m_hostInnerIPHasBeenSet = true;
    }

    if (value.HasMember("HostPublicIP") && !value["HostPublicIP"].IsNull())
    {
        if (!value["HostPublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.HostPublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostPublicIP = string(value["HostPublicIP"].GetString());
        m_hostPublicIPHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellEvent.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspMemShellEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_superClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_interfacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interfaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfaces.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotations.c_str(), allocator).Move(), allocator);
    }

    if (m_loaderClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoaderClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loaderClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_args.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostInnerIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInnerIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostInnerIP.c_str(), allocator).Move(), allocator);
    }

    if (m_hostPublicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostPublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostPublicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RaspMemShellEvent::GetId() const
{
    return m_id;
}

void RaspMemShellEvent::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RaspMemShellEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RaspMemShellEvent::GetQuuid() const
{
    return m_quuid;
}

void RaspMemShellEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RaspMemShellEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RaspMemShellEvent::GetAlias() const
{
    return m_alias;
}

void RaspMemShellEvent::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RaspMemShellEvent::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string RaspMemShellEvent::GetHostIp() const
{
    return m_hostIp;
}

void RaspMemShellEvent::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool RaspMemShellEvent::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t RaspMemShellEvent::GetType() const
{
    return m_type;
}

void RaspMemShellEvent::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RaspMemShellEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RaspMemShellEvent::GetDescription() const
{
    return m_description;
}

void RaspMemShellEvent::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RaspMemShellEvent::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RaspMemShellEvent::GetCreateTime() const
{
    return m_createTime;
}

void RaspMemShellEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RaspMemShellEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RaspMemShellEvent::GetRecentFoundTime() const
{
    return m_recentFoundTime;
}

void RaspMemShellEvent::SetRecentFoundTime(const string& _recentFoundTime)
{
    m_recentFoundTime = _recentFoundTime;
    m_recentFoundTimeHasBeenSet = true;
}

bool RaspMemShellEvent::RecentFoundTimeHasBeenSet() const
{
    return m_recentFoundTimeHasBeenSet;
}

uint64_t RaspMemShellEvent::GetStatus() const
{
    return m_status;
}

void RaspMemShellEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspMemShellEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspMemShellEvent::GetMd5() const
{
    return m_md5;
}

void RaspMemShellEvent::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool RaspMemShellEvent::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string RaspMemShellEvent::GetClassName() const
{
    return m_className;
}

void RaspMemShellEvent::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool RaspMemShellEvent::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string RaspMemShellEvent::GetSuperClassName() const
{
    return m_superClassName;
}

void RaspMemShellEvent::SetSuperClassName(const string& _superClassName)
{
    m_superClassName = _superClassName;
    m_superClassNameHasBeenSet = true;
}

bool RaspMemShellEvent::SuperClassNameHasBeenSet() const
{
    return m_superClassNameHasBeenSet;
}

string RaspMemShellEvent::GetInterfaces() const
{
    return m_interfaces;
}

void RaspMemShellEvent::SetInterfaces(const string& _interfaces)
{
    m_interfaces = _interfaces;
    m_interfacesHasBeenSet = true;
}

bool RaspMemShellEvent::InterfacesHasBeenSet() const
{
    return m_interfacesHasBeenSet;
}

string RaspMemShellEvent::GetAnnotations() const
{
    return m_annotations;
}

void RaspMemShellEvent::SetAnnotations(const string& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool RaspMemShellEvent::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string RaspMemShellEvent::GetLoaderClassName() const
{
    return m_loaderClassName;
}

void RaspMemShellEvent::SetLoaderClassName(const string& _loaderClassName)
{
    m_loaderClassName = _loaderClassName;
    m_loaderClassNameHasBeenSet = true;
}

bool RaspMemShellEvent::LoaderClassNameHasBeenSet() const
{
    return m_loaderClassNameHasBeenSet;
}

int64_t RaspMemShellEvent::GetPid() const
{
    return m_pid;
}

void RaspMemShellEvent::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RaspMemShellEvent::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RaspMemShellEvent::GetExe() const
{
    return m_exe;
}

void RaspMemShellEvent::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool RaspMemShellEvent::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string RaspMemShellEvent::GetArgs() const
{
    return m_args;
}

void RaspMemShellEvent::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool RaspMemShellEvent::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string RaspMemShellEvent::GetNodeName() const
{
    return m_nodeName;
}

void RaspMemShellEvent::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RaspMemShellEvent::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RaspMemShellEvent::GetNodeId() const
{
    return m_nodeId;
}

void RaspMemShellEvent::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RaspMemShellEvent::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RaspMemShellEvent::GetContainerName() const
{
    return m_containerName;
}

void RaspMemShellEvent::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RaspMemShellEvent::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RaspMemShellEvent::GetContainerId() const
{
    return m_containerId;
}

void RaspMemShellEvent::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RaspMemShellEvent::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RaspMemShellEvent::GetContainerStatus() const
{
    return m_containerStatus;
}

void RaspMemShellEvent::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool RaspMemShellEvent::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string RaspMemShellEvent::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RaspMemShellEvent::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RaspMemShellEvent::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RaspMemShellEvent::GetImageId() const
{
    return m_imageId;
}

void RaspMemShellEvent::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RaspMemShellEvent::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RaspMemShellEvent::GetImageName() const
{
    return m_imageName;
}

void RaspMemShellEvent::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RaspMemShellEvent::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RaspMemShellEvent::GetPodName() const
{
    return m_podName;
}

void RaspMemShellEvent::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RaspMemShellEvent::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RaspMemShellEvent::GetPodIp() const
{
    return m_podIp;
}

void RaspMemShellEvent::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RaspMemShellEvent::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string RaspMemShellEvent::GetClusterName() const
{
    return m_clusterName;
}

void RaspMemShellEvent::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RaspMemShellEvent::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RaspMemShellEvent::GetClusterId() const
{
    return m_clusterId;
}

void RaspMemShellEvent::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RaspMemShellEvent::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RaspMemShellEvent::GetInstanceID() const
{
    return m_instanceID;
}

void RaspMemShellEvent::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RaspMemShellEvent::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RaspMemShellEvent::GetHostInnerIP() const
{
    return m_hostInnerIP;
}

void RaspMemShellEvent::SetHostInnerIP(const string& _hostInnerIP)
{
    m_hostInnerIP = _hostInnerIP;
    m_hostInnerIPHasBeenSet = true;
}

bool RaspMemShellEvent::HostInnerIPHasBeenSet() const
{
    return m_hostInnerIPHasBeenSet;
}

string RaspMemShellEvent::GetHostPublicIP() const
{
    return m_hostPublicIP;
}

void RaspMemShellEvent::SetHostPublicIP(const string& _hostPublicIP)
{
    m_hostPublicIP = _hostPublicIP;
    m_hostPublicIPHasBeenSet = true;
}

bool RaspMemShellEvent::HostPublicIPHasBeenSet() const
{
    return m_hostPublicIPHasBeenSet;
}

string RaspMemShellEvent::GetNodeType() const
{
    return m_nodeType;
}

void RaspMemShellEvent::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RaspMemShellEvent::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string RaspMemShellEvent::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void RaspMemShellEvent::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool RaspMemShellEvent::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

