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

#include <tencentcloud/tcss/v20201101/model/ContainerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ContainerInfo::ContainerInfo() :
    m_containerIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_cPUUsageHasBeenSet(false),
    m_ramUsageHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_pODHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_netStatusHasBeenSet(false),
    m_netSubStatusHasBeenSet(false),
    m_isolateSourceHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_podCpuHasBeenSet(false),
    m_podMemHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_podUidHasBeenSet(false)
{
}

CoreInternalOutcome ContainerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("CPUUsage") && !value["CPUUsage"].IsNull())
    {
        if (!value["CPUUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.CPUUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUUsage = value["CPUUsage"].GetUint64();
        m_cPUUsageHasBeenSet = true;
    }

    if (value.HasMember("RamUsage") && !value["RamUsage"].IsNull())
    {
        if (!value["RamUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.RamUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ramUsage = value["RamUsage"].GetUint64();
        m_ramUsageHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("POD") && !value["POD"].IsNull())
    {
        if (!value["POD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.POD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pOD = string(value["POD"].GetString());
        m_pODHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("NetStatus") && !value["NetStatus"].IsNull())
    {
        if (!value["NetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.NetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netStatus = string(value["NetStatus"].GetString());
        m_netStatusHasBeenSet = true;
    }

    if (value.HasMember("NetSubStatus") && !value["NetSubStatus"].IsNull())
    {
        if (!value["NetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.NetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netSubStatus = string(value["NetSubStatus"].GetString());
        m_netSubStatusHasBeenSet = true;
    }

    if (value.HasMember("IsolateSource") && !value["IsolateSource"].IsNull())
    {
        if (!value["IsolateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.IsolateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateSource = string(value["IsolateSource"].GetString());
        m_isolateSourceHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PodCpu") && !value["PodCpu"].IsNull())
    {
        if (!value["PodCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PodCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podCpu = value["PodCpu"].GetInt64();
        m_podCpuHasBeenSet = true;
    }

    if (value.HasMember("PodMem") && !value["PodMem"].IsNull())
    {
        if (!value["PodMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PodMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_podMem = value["PodMem"].GetInt64();
        m_podMemHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("PodUid") && !value["PodUid"].IsNull())
    {
        if (!value["PodUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInfo.PodUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podUid = string(value["PodUid"].GetString());
        m_podUidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CPUUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPUUsage, allocator);
    }

    if (m_ramUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RamUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ramUsage, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_pODHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "POD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pOD.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_netStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_netSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateSource.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
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

    if (m_podCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podCpu, allocator);
    }

    if (m_podMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_podMem, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_podUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podUid.c_str(), allocator).Move(), allocator);
    }

}


string ContainerInfo::GetContainerID() const
{
    return m_containerID;
}

void ContainerInfo::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool ContainerInfo::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string ContainerInfo::GetContainerName() const
{
    return m_containerName;
}

void ContainerInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ContainerInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string ContainerInfo::GetStatus() const
{
    return m_status;
}

void ContainerInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContainerInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ContainerInfo::GetCreateTime() const
{
    return m_createTime;
}

void ContainerInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ContainerInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ContainerInfo::GetRunAs() const
{
    return m_runAs;
}

void ContainerInfo::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ContainerInfo::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string ContainerInfo::GetCmd() const
{
    return m_cmd;
}

void ContainerInfo::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool ContainerInfo::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t ContainerInfo::GetCPUUsage() const
{
    return m_cPUUsage;
}

void ContainerInfo::SetCPUUsage(const uint64_t& _cPUUsage)
{
    m_cPUUsage = _cPUUsage;
    m_cPUUsageHasBeenSet = true;
}

bool ContainerInfo::CPUUsageHasBeenSet() const
{
    return m_cPUUsageHasBeenSet;
}

uint64_t ContainerInfo::GetRamUsage() const
{
    return m_ramUsage;
}

void ContainerInfo::SetRamUsage(const uint64_t& _ramUsage)
{
    m_ramUsage = _ramUsage;
    m_ramUsageHasBeenSet = true;
}

bool ContainerInfo::RamUsageHasBeenSet() const
{
    return m_ramUsageHasBeenSet;
}

string ContainerInfo::GetImageName() const
{
    return m_imageName;
}

void ContainerInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ContainerInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ContainerInfo::GetImageID() const
{
    return m_imageID;
}

void ContainerInfo::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ContainerInfo::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string ContainerInfo::GetPOD() const
{
    return m_pOD;
}

void ContainerInfo::SetPOD(const string& _pOD)
{
    m_pOD = _pOD;
    m_pODHasBeenSet = true;
}

bool ContainerInfo::PODHasBeenSet() const
{
    return m_pODHasBeenSet;
}

string ContainerInfo::GetHostID() const
{
    return m_hostID;
}

void ContainerInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool ContainerInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string ContainerInfo::GetHostIP() const
{
    return m_hostIP;
}

void ContainerInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ContainerInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ContainerInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ContainerInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ContainerInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ContainerInfo::GetHostName() const
{
    return m_hostName;
}

void ContainerInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ContainerInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ContainerInfo::GetPublicIp() const
{
    return m_publicIp;
}

void ContainerInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ContainerInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string ContainerInfo::GetNetStatus() const
{
    return m_netStatus;
}

void ContainerInfo::SetNetStatus(const string& _netStatus)
{
    m_netStatus = _netStatus;
    m_netStatusHasBeenSet = true;
}

bool ContainerInfo::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}

string ContainerInfo::GetNetSubStatus() const
{
    return m_netSubStatus;
}

void ContainerInfo::SetNetSubStatus(const string& _netSubStatus)
{
    m_netSubStatus = _netSubStatus;
    m_netSubStatusHasBeenSet = true;
}

bool ContainerInfo::NetSubStatusHasBeenSet() const
{
    return m_netSubStatusHasBeenSet;
}

string ContainerInfo::GetIsolateSource() const
{
    return m_isolateSource;
}

void ContainerInfo::SetIsolateSource(const string& _isolateSource)
{
    m_isolateSource = _isolateSource;
    m_isolateSourceHasBeenSet = true;
}

bool ContainerInfo::IsolateSourceHasBeenSet() const
{
    return m_isolateSourceHasBeenSet;
}

string ContainerInfo::GetIsolateTime() const
{
    return m_isolateTime;
}

void ContainerInfo::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool ContainerInfo::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string ContainerInfo::GetNodeID() const
{
    return m_nodeID;
}

void ContainerInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool ContainerInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string ContainerInfo::GetPodIP() const
{
    return m_podIP;
}

void ContainerInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool ContainerInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string ContainerInfo::GetPodName() const
{
    return m_podName;
}

void ContainerInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ContainerInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ContainerInfo::GetNodeType() const
{
    return m_nodeType;
}

void ContainerInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ContainerInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ContainerInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void ContainerInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool ContainerInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

int64_t ContainerInfo::GetPodCpu() const
{
    return m_podCpu;
}

void ContainerInfo::SetPodCpu(const int64_t& _podCpu)
{
    m_podCpu = _podCpu;
    m_podCpuHasBeenSet = true;
}

bool ContainerInfo::PodCpuHasBeenSet() const
{
    return m_podCpuHasBeenSet;
}

int64_t ContainerInfo::GetPodMem() const
{
    return m_podMem;
}

void ContainerInfo::SetPodMem(const int64_t& _podMem)
{
    m_podMem = _podMem;
    m_podMemHasBeenSet = true;
}

bool ContainerInfo::PodMemHasBeenSet() const
{
    return m_podMemHasBeenSet;
}

string ContainerInfo::GetClusterName() const
{
    return m_clusterName;
}

void ContainerInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ContainerInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ContainerInfo::GetClusterID() const
{
    return m_clusterID;
}

void ContainerInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ContainerInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ContainerInfo::GetPodUid() const
{
    return m_podUid;
}

void ContainerInfo::SetPodUid(const string& _podUid)
{
    m_podUid = _podUid;
    m_podUidHasBeenSet = true;
}

bool ContainerInfo::PodUidHasBeenSet() const
{
    return m_podUidHasBeenSet;
}

