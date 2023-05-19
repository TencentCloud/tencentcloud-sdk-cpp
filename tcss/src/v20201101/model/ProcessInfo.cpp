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

#include <tencentcloud/tcss/v20201101/model/ProcessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ProcessInfo::ProcessInfo() :
    m_startTimeHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_pIDHasBeenSet(false),
    m_containerPIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false)
{
}

CoreInternalOutcome ProcessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RunAs") && !value["RunAs"].IsNull())
    {
        if (!value["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(value["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.PID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pID = value["PID"].GetUint64();
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerPID") && !value["ContainerPID"].IsNull())
    {
        if (!value["ContainerPID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.ContainerPID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerPID = value["ContainerPID"].GetUint64();
        m_containerPIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_pIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pID, allocator);
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


string ProcessInfo::GetStartTime() const
{
    return m_startTime;
}

void ProcessInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ProcessInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ProcessInfo::GetRunAs() const
{
    return m_runAs;
}

void ProcessInfo::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool ProcessInfo::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string ProcessInfo::GetCmdLine() const
{
    return m_cmdLine;
}

void ProcessInfo::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool ProcessInfo::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string ProcessInfo::GetExe() const
{
    return m_exe;
}

void ProcessInfo::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool ProcessInfo::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

uint64_t ProcessInfo::GetPID() const
{
    return m_pID;
}

void ProcessInfo::SetPID(const uint64_t& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool ProcessInfo::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

uint64_t ProcessInfo::GetContainerPID() const
{
    return m_containerPID;
}

void ProcessInfo::SetContainerPID(const uint64_t& _containerPID)
{
    m_containerPID = _containerPID;
    m_containerPIDHasBeenSet = true;
}

bool ProcessInfo::ContainerPIDHasBeenSet() const
{
    return m_containerPIDHasBeenSet;
}

string ProcessInfo::GetContainerName() const
{
    return m_containerName;
}

void ProcessInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ProcessInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string ProcessInfo::GetHostID() const
{
    return m_hostID;
}

void ProcessInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool ProcessInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string ProcessInfo::GetHostIP() const
{
    return m_hostIP;
}

void ProcessInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool ProcessInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string ProcessInfo::GetProcessName() const
{
    return m_processName;
}

void ProcessInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ProcessInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string ProcessInfo::GetHostName() const
{
    return m_hostName;
}

void ProcessInfo::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ProcessInfo::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ProcessInfo::GetPublicIp() const
{
    return m_publicIp;
}

void ProcessInfo::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool ProcessInfo::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string ProcessInfo::GetNodeID() const
{
    return m_nodeID;
}

void ProcessInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool ProcessInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string ProcessInfo::GetPodIP() const
{
    return m_podIP;
}

void ProcessInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool ProcessInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string ProcessInfo::GetPodName() const
{
    return m_podName;
}

void ProcessInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ProcessInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ProcessInfo::GetNodeType() const
{
    return m_nodeType;
}

void ProcessInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ProcessInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ProcessInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void ProcessInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool ProcessInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

