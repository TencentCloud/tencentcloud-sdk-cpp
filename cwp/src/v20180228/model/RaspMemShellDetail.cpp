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

#include <tencentcloud/cwp/v20180228/model/RaspMemShellDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspMemShellDetail::RaspMemShellDetail() :
    m_idHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_hostTagsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_classLoaderNameHasBeenSet(false),
    m_superClassNameHasBeenSet(false),
    m_interfacesHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_pidHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_classContentHasBeenSet(false),
    m_classContentPrettyHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_securityAdviceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_recentFoundTimeHasBeenSet(false),
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
    m_clusterIdHasBeenSet(false)
{
}

CoreInternalOutcome RaspMemShellDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("HostTags") && !value["HostTags"].IsNull())
    {
        if (!value["HostTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.HostTags` is not array type"));

        const rapidjson::Value &tmpValue = value["HostTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostTags.push_back((*itr).GetString());
        }
        m_hostTagsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClassLoaderName") && !value["ClassLoaderName"].IsNull())
    {
        if (!value["ClassLoaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClassLoaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classLoaderName = string(value["ClassLoaderName"].GetString());
        m_classLoaderNameHasBeenSet = true;
    }

    if (value.HasMember("SuperClassName") && !value["SuperClassName"].IsNull())
    {
        if (!value["SuperClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.SuperClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassName = string(value["SuperClassName"].GetString());
        m_superClassNameHasBeenSet = true;
    }

    if (value.HasMember("Interfaces") && !value["Interfaces"].IsNull())
    {
        if (!value["Interfaces"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Interfaces` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaces = string(value["Interfaces"].GetString());
        m_interfacesHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Annotations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotations = string(value["Annotations"].GetString());
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("ClassContent") && !value["ClassContent"].IsNull())
    {
        if (!value["ClassContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClassContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classContent = string(value["ClassContent"].GetString());
        m_classContentHasBeenSet = true;
    }

    if (value.HasMember("ClassContentPretty") && !value["ClassContentPretty"].IsNull())
    {
        if (!value["ClassContentPretty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClassContentPretty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classContentPretty = string(value["ClassContentPretty"].GetString());
        m_classContentPrettyHasBeenSet = true;
    }

    if (value.HasMember("EventDescription") && !value["EventDescription"].IsNull())
    {
        if (!value["EventDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.EventDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDescription = string(value["EventDescription"].GetString());
        m_eventDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SecurityAdvice") && !value["SecurityAdvice"].IsNull())
    {
        if (!value["SecurityAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.SecurityAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityAdvice = string(value["SecurityAdvice"].GetString());
        m_securityAdviceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentFoundTime") && !value["RecentFoundTime"].IsNull())
    {
        if (!value["RecentFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.RecentFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentFoundTime = string(value["RecentFoundTime"].GetString());
        m_recentFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspMemShellDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspMemShellDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostTags.begin(); itr != m_hostTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_classLoaderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassLoaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classLoaderName.c_str(), allocator).Move(), allocator);
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

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
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

    if (m_classContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classContent.c_str(), allocator).Move(), allocator);
    }

    if (m_classContentPrettyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassContentPretty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classContentPretty.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_securityAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityAdvice.c_str(), allocator).Move(), allocator);
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

}


uint64_t RaspMemShellDetail::GetId() const
{
    return m_id;
}

void RaspMemShellDetail::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RaspMemShellDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RaspMemShellDetail::GetQuuid() const
{
    return m_quuid;
}

void RaspMemShellDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RaspMemShellDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RaspMemShellDetail::GetAlias() const
{
    return m_alias;
}

void RaspMemShellDetail::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RaspMemShellDetail::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string RaspMemShellDetail::GetInstanceID() const
{
    return m_instanceID;
}

void RaspMemShellDetail::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RaspMemShellDetail::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RaspMemShellDetail::GetPrivateIp() const
{
    return m_privateIp;
}

void RaspMemShellDetail::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool RaspMemShellDetail::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string RaspMemShellDetail::GetPublicIp() const
{
    return m_publicIp;
}

void RaspMemShellDetail::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool RaspMemShellDetail::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

vector<string> RaspMemShellDetail::GetHostTags() const
{
    return m_hostTags;
}

void RaspMemShellDetail::SetHostTags(const vector<string>& _hostTags)
{
    m_hostTags = _hostTags;
    m_hostTagsHasBeenSet = true;
}

bool RaspMemShellDetail::HostTagsHasBeenSet() const
{
    return m_hostTagsHasBeenSet;
}

uint64_t RaspMemShellDetail::GetType() const
{
    return m_type;
}

void RaspMemShellDetail::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RaspMemShellDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t RaspMemShellDetail::GetStatus() const
{
    return m_status;
}

void RaspMemShellDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspMemShellDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspMemShellDetail::GetClassLoaderName() const
{
    return m_classLoaderName;
}

void RaspMemShellDetail::SetClassLoaderName(const string& _classLoaderName)
{
    m_classLoaderName = _classLoaderName;
    m_classLoaderNameHasBeenSet = true;
}

bool RaspMemShellDetail::ClassLoaderNameHasBeenSet() const
{
    return m_classLoaderNameHasBeenSet;
}

string RaspMemShellDetail::GetSuperClassName() const
{
    return m_superClassName;
}

void RaspMemShellDetail::SetSuperClassName(const string& _superClassName)
{
    m_superClassName = _superClassName;
    m_superClassNameHasBeenSet = true;
}

bool RaspMemShellDetail::SuperClassNameHasBeenSet() const
{
    return m_superClassNameHasBeenSet;
}

string RaspMemShellDetail::GetInterfaces() const
{
    return m_interfaces;
}

void RaspMemShellDetail::SetInterfaces(const string& _interfaces)
{
    m_interfaces = _interfaces;
    m_interfacesHasBeenSet = true;
}

bool RaspMemShellDetail::InterfacesHasBeenSet() const
{
    return m_interfacesHasBeenSet;
}

string RaspMemShellDetail::GetAnnotations() const
{
    return m_annotations;
}

void RaspMemShellDetail::SetAnnotations(const string& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool RaspMemShellDetail::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string RaspMemShellDetail::GetClassName() const
{
    return m_className;
}

void RaspMemShellDetail::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool RaspMemShellDetail::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string RaspMemShellDetail::GetMd5() const
{
    return m_md5;
}

void RaspMemShellDetail::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool RaspMemShellDetail::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

int64_t RaspMemShellDetail::GetPid() const
{
    return m_pid;
}

void RaspMemShellDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RaspMemShellDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RaspMemShellDetail::GetExe() const
{
    return m_exe;
}

void RaspMemShellDetail::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool RaspMemShellDetail::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string RaspMemShellDetail::GetArgs() const
{
    return m_args;
}

void RaspMemShellDetail::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool RaspMemShellDetail::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string RaspMemShellDetail::GetClassContent() const
{
    return m_classContent;
}

void RaspMemShellDetail::SetClassContent(const string& _classContent)
{
    m_classContent = _classContent;
    m_classContentHasBeenSet = true;
}

bool RaspMemShellDetail::ClassContentHasBeenSet() const
{
    return m_classContentHasBeenSet;
}

string RaspMemShellDetail::GetClassContentPretty() const
{
    return m_classContentPretty;
}

void RaspMemShellDetail::SetClassContentPretty(const string& _classContentPretty)
{
    m_classContentPretty = _classContentPretty;
    m_classContentPrettyHasBeenSet = true;
}

bool RaspMemShellDetail::ClassContentPrettyHasBeenSet() const
{
    return m_classContentPrettyHasBeenSet;
}

string RaspMemShellDetail::GetEventDescription() const
{
    return m_eventDescription;
}

void RaspMemShellDetail::SetEventDescription(const string& _eventDescription)
{
    m_eventDescription = _eventDescription;
    m_eventDescriptionHasBeenSet = true;
}

bool RaspMemShellDetail::EventDescriptionHasBeenSet() const
{
    return m_eventDescriptionHasBeenSet;
}

string RaspMemShellDetail::GetSecurityAdvice() const
{
    return m_securityAdvice;
}

void RaspMemShellDetail::SetSecurityAdvice(const string& _securityAdvice)
{
    m_securityAdvice = _securityAdvice;
    m_securityAdviceHasBeenSet = true;
}

bool RaspMemShellDetail::SecurityAdviceHasBeenSet() const
{
    return m_securityAdviceHasBeenSet;
}

string RaspMemShellDetail::GetCreateTime() const
{
    return m_createTime;
}

void RaspMemShellDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RaspMemShellDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RaspMemShellDetail::GetRecentFoundTime() const
{
    return m_recentFoundTime;
}

void RaspMemShellDetail::SetRecentFoundTime(const string& _recentFoundTime)
{
    m_recentFoundTime = _recentFoundTime;
    m_recentFoundTimeHasBeenSet = true;
}

bool RaspMemShellDetail::RecentFoundTimeHasBeenSet() const
{
    return m_recentFoundTimeHasBeenSet;
}

string RaspMemShellDetail::GetNodeName() const
{
    return m_nodeName;
}

void RaspMemShellDetail::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RaspMemShellDetail::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RaspMemShellDetail::GetNodeId() const
{
    return m_nodeId;
}

void RaspMemShellDetail::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RaspMemShellDetail::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RaspMemShellDetail::GetContainerName() const
{
    return m_containerName;
}

void RaspMemShellDetail::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RaspMemShellDetail::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RaspMemShellDetail::GetContainerId() const
{
    return m_containerId;
}

void RaspMemShellDetail::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RaspMemShellDetail::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RaspMemShellDetail::GetContainerStatus() const
{
    return m_containerStatus;
}

void RaspMemShellDetail::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool RaspMemShellDetail::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string RaspMemShellDetail::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RaspMemShellDetail::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RaspMemShellDetail::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RaspMemShellDetail::GetImageId() const
{
    return m_imageId;
}

void RaspMemShellDetail::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RaspMemShellDetail::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RaspMemShellDetail::GetImageName() const
{
    return m_imageName;
}

void RaspMemShellDetail::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RaspMemShellDetail::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RaspMemShellDetail::GetPodName() const
{
    return m_podName;
}

void RaspMemShellDetail::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RaspMemShellDetail::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RaspMemShellDetail::GetPodIp() const
{
    return m_podIp;
}

void RaspMemShellDetail::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RaspMemShellDetail::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string RaspMemShellDetail::GetClusterName() const
{
    return m_clusterName;
}

void RaspMemShellDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RaspMemShellDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RaspMemShellDetail::GetClusterId() const
{
    return m_clusterId;
}

void RaspMemShellDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RaspMemShellDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

