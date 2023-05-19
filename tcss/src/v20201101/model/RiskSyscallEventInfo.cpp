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

#include <tencentcloud/tcss/v20201101/model/RiskSyscallEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RiskSyscallEventInfo::RiskSyscallEventInfo() :
    m_processNameHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_syscallNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_ruleExistHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome RiskSyscallEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SyscallName") && !value["SyscallName"].IsNull())
    {
        if (!value["SyscallName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.SyscallName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syscallName = string(value["SyscallName"].GetString());
        m_syscallNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(value["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("RuleExist") && !value["RuleExist"].IsNull())
    {
        if (!value["RuleExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.RuleExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExist = value["RuleExist"].GetBool();
        m_ruleExistHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetSubStatus") && !value["ContainerNetSubStatus"].IsNull())
    {
        if (!value["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(value["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerIsolateOperationSrc") && !value["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!value["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(value["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSyscallEventInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskSyscallEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_syscallNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyscallName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syscallName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExist, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIsolateOperationSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIsolateOperationSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerIsolateOperationSrc.c_str(), allocator).Move(), allocator);
    }

    if (m_containerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


string RiskSyscallEventInfo::GetProcessName() const
{
    return m_processName;
}

void RiskSyscallEventInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string RiskSyscallEventInfo::GetProcessPath() const
{
    return m_processPath;
}

void RiskSyscallEventInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool RiskSyscallEventInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string RiskSyscallEventInfo::GetImageId() const
{
    return m_imageId;
}

void RiskSyscallEventInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RiskSyscallEventInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerId() const
{
    return m_containerId;
}

void RiskSyscallEventInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RiskSyscallEventInfo::GetImageName() const
{
    return m_imageName;
}

void RiskSyscallEventInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerName() const
{
    return m_containerName;
}

void RiskSyscallEventInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RiskSyscallEventInfo::GetFoundTime() const
{
    return m_foundTime;
}

void RiskSyscallEventInfo::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool RiskSyscallEventInfo::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string RiskSyscallEventInfo::GetSolution() const
{
    return m_solution;
}

void RiskSyscallEventInfo::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool RiskSyscallEventInfo::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string RiskSyscallEventInfo::GetDescription() const
{
    return m_description;
}

void RiskSyscallEventInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RiskSyscallEventInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RiskSyscallEventInfo::GetSyscallName() const
{
    return m_syscallName;
}

void RiskSyscallEventInfo::SetSyscallName(const string& _syscallName)
{
    m_syscallName = _syscallName;
    m_syscallNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::SyscallNameHasBeenSet() const
{
    return m_syscallNameHasBeenSet;
}

string RiskSyscallEventInfo::GetStatus() const
{
    return m_status;
}

void RiskSyscallEventInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RiskSyscallEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RiskSyscallEventInfo::GetEventId() const
{
    return m_eventId;
}

void RiskSyscallEventInfo::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RiskSyscallEventInfo::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string RiskSyscallEventInfo::GetNodeName() const
{
    return m_nodeName;
}

void RiskSyscallEventInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RiskSyscallEventInfo::GetPodName() const
{
    return m_podName;
}

void RiskSyscallEventInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RiskSyscallEventInfo::GetRemark() const
{
    return m_remark;
}

void RiskSyscallEventInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RiskSyscallEventInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool RiskSyscallEventInfo::GetRuleExist() const
{
    return m_ruleExist;
}

void RiskSyscallEventInfo::SetRuleExist(const bool& _ruleExist)
{
    m_ruleExist = _ruleExist;
    m_ruleExistHasBeenSet = true;
}

bool RiskSyscallEventInfo::RuleExistHasBeenSet() const
{
    return m_ruleExistHasBeenSet;
}

int64_t RiskSyscallEventInfo::GetEventCount() const
{
    return m_eventCount;
}

void RiskSyscallEventInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool RiskSyscallEventInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string RiskSyscallEventInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void RiskSyscallEventInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool RiskSyscallEventInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RiskSyscallEventInfo::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

void RiskSyscallEventInfo::SetContainerNetSubStatus(const string& _containerNetSubStatus)
{
    m_containerNetSubStatus = _containerNetSubStatus;
    m_containerNetSubStatusHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

void RiskSyscallEventInfo::SetContainerIsolateOperationSrc(const string& _containerIsolateOperationSrc)
{
    m_containerIsolateOperationSrc = _containerIsolateOperationSrc;
    m_containerIsolateOperationSrcHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

string RiskSyscallEventInfo::GetContainerStatus() const
{
    return m_containerStatus;
}

void RiskSyscallEventInfo::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool RiskSyscallEventInfo::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string RiskSyscallEventInfo::GetNodeType() const
{
    return m_nodeType;
}

void RiskSyscallEventInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RiskSyscallEventInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string RiskSyscallEventInfo::GetClusterID() const
{
    return m_clusterID;
}

void RiskSyscallEventInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool RiskSyscallEventInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string RiskSyscallEventInfo::GetPodIP() const
{
    return m_podIP;
}

void RiskSyscallEventInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool RiskSyscallEventInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string RiskSyscallEventInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void RiskSyscallEventInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool RiskSyscallEventInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string RiskSyscallEventInfo::GetPublicIP() const
{
    return m_publicIP;
}

void RiskSyscallEventInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool RiskSyscallEventInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string RiskSyscallEventInfo::GetNodeID() const
{
    return m_nodeID;
}

void RiskSyscallEventInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool RiskSyscallEventInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string RiskSyscallEventInfo::GetHostID() const
{
    return m_hostID;
}

void RiskSyscallEventInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool RiskSyscallEventInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string RiskSyscallEventInfo::GetHostIP() const
{
    return m_hostIP;
}

void RiskSyscallEventInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool RiskSyscallEventInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string RiskSyscallEventInfo::GetClusterName() const
{
    return m_clusterName;
}

void RiskSyscallEventInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RiskSyscallEventInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

