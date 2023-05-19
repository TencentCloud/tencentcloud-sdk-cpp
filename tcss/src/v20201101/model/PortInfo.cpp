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

#include <tencentcloud/tcss/v20201101/model/PortInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

PortInfo::PortInfo() :
    m_typeHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_publicPortHasBeenSet(false),
    m_containerPortHasBeenSet(false),
    m_containerPIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_listenContainerHasBeenSet(false),
    m_listenHostHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false)
{
}

CoreInternalOutcome PortInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PublicPort") && !value["PublicPort"].IsNull())
    {
        if (!value["PublicPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.PublicPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publicPort = value["PublicPort"].GetUint64();
        m_publicPortHasBeenSet = true;
    }

    if (value.HasMember("ContainerPort") && !value["ContainerPort"].IsNull())
    {
        if (!value["ContainerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ContainerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPort = value["ContainerPort"].GetUint64();
        m_containerPortHasBeenSet = true;
    }

    if (value.HasMember("ContainerPID") && !value["ContainerPID"].IsNull())
    {
        if (!value["ContainerPID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ContainerPID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPID = value["ContainerPID"].GetUint64();
        m_containerPIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ListenContainer") && !value["ListenContainer"].IsNull())
    {
        if (!value["ListenContainer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ListenContainer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenContainer = string(value["ListenContainer"].GetString());
        m_listenContainerHasBeenSet = true;
    }

    if (value.HasMember("ListenHost") && !value["ListenHost"].IsNull())
    {
        if (!value["ListenHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.ListenHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenHost = string(value["ListenHost"].GetString());
        m_listenHostHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_publicPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicPort, allocator);
    }

    if (m_containerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPort, allocator);
    }

    if (m_containerPIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerPID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerPID, allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_listenContainerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenContainer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenContainer.c_str(), allocator).Move(), allocator);
    }

    if (m_listenHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenHost.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
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


string PortInfo::GetType() const
{
    return m_type;
}

void PortInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PortInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PortInfo::GetPublicIP() const
{
    return m_publicIP;
}

void PortInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool PortInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

uint64_t PortInfo::GetPublicPort() const
{
    return m_publicPort;
}

void PortInfo::SetPublicPort(const uint64_t& _publicPort)
{
    m_publicPort = _publicPort;
    m_publicPortHasBeenSet = true;
}

bool PortInfo::PublicPortHasBeenSet() const
{
    return m_publicPortHasBeenSet;
}

uint64_t PortInfo::GetContainerPort() const
{
    return m_containerPort;
}

void PortInfo::SetContainerPort(const uint64_t& _containerPort)
{
    m_containerPort = _containerPort;
    m_containerPortHasBeenSet = true;
}

bool PortInfo::ContainerPortHasBeenSet() const
{
    return m_containerPortHasBeenSet;
}

uint64_t PortInfo::GetContainerPID() const
{
    return m_containerPID;
}

void PortInfo::SetContainerPID(const uint64_t& _containerPID)
{
    m_containerPID = _containerPID;
    m_containerPIDHasBeenSet = true;
}

bool PortInfo::ContainerPIDHasBeenSet() const
{
    return m_containerPIDHasBeenSet;
}

string PortInfo::GetContainerName() const
{
    return m_containerName;
}

void PortInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool PortInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string PortInfo::GetHostID() const
{
    return m_hostID;
}

void PortInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool PortInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string PortInfo::GetHostIP() const
{
    return m_hostIP;
}

void PortInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool PortInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string PortInfo::GetProcessName() const
{
    return m_processName;
}

void PortInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool PortInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string PortInfo::GetListenContainer() const
{
    return m_listenContainer;
}

void PortInfo::SetListenContainer(const string& _listenContainer)
{
    m_listenContainer = _listenContainer;
    m_listenContainerHasBeenSet = true;
}

bool PortInfo::ListenContainerHasBeenSet() const
{
    return m_listenContainerHasBeenSet;
}

string PortInfo::GetListenHost() const
{
    return m_listenHost;
}

void PortInfo::SetListenHost(const string& _listenHost)
{
    m_listenHost = _listenHost;
    m_listenHostHasBeenSet = true;
}

bool PortInfo::ListenHostHasBeenSet() const
{
    return m_listenHostHasBeenSet;
}

string PortInfo::GetRunAs() const
{
    return m_runAs;
}

void PortInfo::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool PortInfo::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string PortInfo::GetHostName() const
{
    return m_hostName;
}

void PortInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool PortInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string PortInfo::GetPublicIp() const
{
    return m_publicIp;
}

void PortInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool PortInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string PortInfo::GetNodeID() const
{
    return m_nodeID;
}

void PortInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool PortInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string PortInfo::GetPodIP() const
{
    return m_podIP;
}

void PortInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool PortInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string PortInfo::GetPodName() const
{
    return m_podName;
}

void PortInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool PortInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string PortInfo::GetNodeType() const
{
    return m_nodeType;
}

void PortInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool PortInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string PortInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void PortInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool PortInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

