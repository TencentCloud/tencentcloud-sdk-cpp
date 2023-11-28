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

#include <tencentcloud/tcss/v20201101/model/VulDefenceEventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulDefenceEventDetail::VulDefenceEventDetail() :
    m_cVEIDHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_sourceIPHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_containerIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_eventIDHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_officialSolutionHasBeenSet(false),
    m_networkPayloadHasBeenSet(false),
    m_pIDHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_stackTraceHasBeenSet(false),
    m_serverAccountHasBeenSet(false),
    m_serverPortHasBeenSet(false),
    m_serverExeHasBeenSet(false),
    m_serverArgHasBeenSet(false),
    m_qUUIDHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_jNDIUrlHasBeenSet(false),
    m_raspDetailHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadTypeHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceEventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceIP") && !value["SourceIP"].IsNull())
    {
        if (!value["SourceIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.SourceIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIP = string(value["SourceIP"].GetString());
        m_sourceIPHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerID") && !value["ContainerID"].IsNull())
    {
        if (!value["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(value["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.SourcePort` is not array type"));

        const rapidjson::Value &tmpValue = value["SourcePort"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourcePort.push_back((*itr).GetString());
        }
        m_sourcePortHasBeenSet = true;
    }

    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.EventID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = value["EventID"].GetInt64();
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OfficialSolution") && !value["OfficialSolution"].IsNull())
    {
        if (!value["OfficialSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.OfficialSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_officialSolution = string(value["OfficialSolution"].GetString());
        m_officialSolutionHasBeenSet = true;
    }

    if (value.HasMember("NetworkPayload") && !value["NetworkPayload"].IsNull())
    {
        if (!value["NetworkPayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NetworkPayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPayload = string(value["NetworkPayload"].GetString());
        m_networkPayloadHasBeenSet = true;
    }

    if (value.HasMember("PID") && !value["PID"].IsNull())
    {
        if (!value["PID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pID = value["PID"].GetInt64();
        m_pIDHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("StackTrace") && !value["StackTrace"].IsNull())
    {
        if (!value["StackTrace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.StackTrace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackTrace = string(value["StackTrace"].GetString());
        m_stackTraceHasBeenSet = true;
    }

    if (value.HasMember("ServerAccount") && !value["ServerAccount"].IsNull())
    {
        if (!value["ServerAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ServerAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverAccount = string(value["ServerAccount"].GetString());
        m_serverAccountHasBeenSet = true;
    }

    if (value.HasMember("ServerPort") && !value["ServerPort"].IsNull())
    {
        if (!value["ServerPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ServerPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverPort = string(value["ServerPort"].GetString());
        m_serverPortHasBeenSet = true;
    }

    if (value.HasMember("ServerExe") && !value["ServerExe"].IsNull())
    {
        if (!value["ServerExe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ServerExe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverExe = string(value["ServerExe"].GetString());
        m_serverExeHasBeenSet = true;
    }

    if (value.HasMember("ServerArg") && !value["ServerArg"].IsNull())
    {
        if (!value["ServerArg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ServerArg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverArg = string(value["ServerArg"].GetString());
        m_serverArgHasBeenSet = true;
    }

    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetSubStatus") && !value["ContainerNetSubStatus"].IsNull())
    {
        if (!value["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(value["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerIsolateOperationSrc") && !value["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!value["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(value["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("JNDIUrl") && !value["JNDIUrl"].IsNull())
    {
        if (!value["JNDIUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.JNDIUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jNDIUrl = string(value["JNDIUrl"].GetString());
        m_jNDIUrlHasBeenSet = true;
    }

    if (value.HasMember("RaspDetail") && !value["RaspDetail"].IsNull())
    {
        if (!value["RaspDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.RaspDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["RaspDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RaspInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_raspDetail.push_back(item);
        }
        m_raspDetailHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetName") && !value["NodeSubNetName"].IsNull())
    {
        if (!value["NodeSubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeSubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetName = string(value["NodeSubNetName"].GetString());
        m_nodeSubNetNameHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetCIDR") && !value["NodeSubNetCIDR"].IsNull())
    {
        if (!value["NodeSubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeSubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetCIDR = string(value["NodeSubNetCIDR"].GetString());
        m_nodeSubNetCIDRHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("NodeSubNetID") && !value["NodeSubNetID"].IsNull())
    {
        if (!value["NodeSubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NodeSubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetID = string(value["NodeSubNetID"].GetString());
        m_nodeSubNetIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("WorkloadType") && !value["WorkloadType"].IsNull())
    {
        if (!value["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(value["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefenceEventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIP.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

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

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourcePort.begin(); itr != m_sourcePort.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventID, allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_officialSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfficialSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_officialSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPayload.c_str(), allocator).Move(), allocator);
    }

    if (m_pIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pID, allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_stackTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackTrace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stackTrace.c_str(), allocator).Move(), allocator);
    }

    if (m_serverAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_serverPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverPort.c_str(), allocator).Move(), allocator);
    }

    if (m_serverExeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerExe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverExe.c_str(), allocator).Move(), allocator);
    }

    if (m_serverArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerArg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverArg.c_str(), allocator).Move(), allocator);
    }

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUUID.c_str(), allocator).Move(), allocator);
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

    if (m_jNDIUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JNDIUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jNDIUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_raspDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_raspDetail.begin(); itr != m_raspDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeSubNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

}


string VulDefenceEventDetail::GetCVEID() const
{
    return m_cVEID;
}

void VulDefenceEventDetail::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool VulDefenceEventDetail::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string VulDefenceEventDetail::GetVulName() const
{
    return m_vulName;
}

void VulDefenceEventDetail::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulDefenceEventDetail::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulDefenceEventDetail::GetPocID() const
{
    return m_pocID;
}

void VulDefenceEventDetail::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool VulDefenceEventDetail::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string VulDefenceEventDetail::GetEventType() const
{
    return m_eventType;
}

void VulDefenceEventDetail::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool VulDefenceEventDetail::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string VulDefenceEventDetail::GetSourceIP() const
{
    return m_sourceIP;
}

void VulDefenceEventDetail::SetSourceIP(const string& _sourceIP)
{
    m_sourceIP = _sourceIP;
    m_sourceIPHasBeenSet = true;
}

bool VulDefenceEventDetail::SourceIPHasBeenSet() const
{
    return m_sourceIPHasBeenSet;
}

string VulDefenceEventDetail::GetCity() const
{
    return m_city;
}

void VulDefenceEventDetail::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool VulDefenceEventDetail::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

int64_t VulDefenceEventDetail::GetEventCount() const
{
    return m_eventCount;
}

void VulDefenceEventDetail::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool VulDefenceEventDetail::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string VulDefenceEventDetail::GetContainerID() const
{
    return m_containerID;
}

void VulDefenceEventDetail::SetContainerID(const string& _containerID)
{
    m_containerID = _containerID;
    m_containerIDHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string VulDefenceEventDetail::GetContainerName() const
{
    return m_containerName;
}

void VulDefenceEventDetail::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string VulDefenceEventDetail::GetImageID() const
{
    return m_imageID;
}

void VulDefenceEventDetail::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool VulDefenceEventDetail::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string VulDefenceEventDetail::GetImageName() const
{
    return m_imageName;
}

void VulDefenceEventDetail::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool VulDefenceEventDetail::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string VulDefenceEventDetail::GetStatus() const
{
    return m_status;
}

void VulDefenceEventDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefenceEventDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> VulDefenceEventDetail::GetSourcePort() const
{
    return m_sourcePort;
}

void VulDefenceEventDetail::SetSourcePort(const vector<string>& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool VulDefenceEventDetail::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

int64_t VulDefenceEventDetail::GetEventID() const
{
    return m_eventID;
}

void VulDefenceEventDetail::SetEventID(const int64_t& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool VulDefenceEventDetail::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string VulDefenceEventDetail::GetHostName() const
{
    return m_hostName;
}

void VulDefenceEventDetail::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool VulDefenceEventDetail::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string VulDefenceEventDetail::GetHostIP() const
{
    return m_hostIP;
}

void VulDefenceEventDetail::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool VulDefenceEventDetail::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string VulDefenceEventDetail::GetPublicIP() const
{
    return m_publicIP;
}

void VulDefenceEventDetail::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool VulDefenceEventDetail::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string VulDefenceEventDetail::GetPodName() const
{
    return m_podName;
}

void VulDefenceEventDetail::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool VulDefenceEventDetail::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string VulDefenceEventDetail::GetDescription() const
{
    return m_description;
}

void VulDefenceEventDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VulDefenceEventDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VulDefenceEventDetail::GetOfficialSolution() const
{
    return m_officialSolution;
}

void VulDefenceEventDetail::SetOfficialSolution(const string& _officialSolution)
{
    m_officialSolution = _officialSolution;
    m_officialSolutionHasBeenSet = true;
}

bool VulDefenceEventDetail::OfficialSolutionHasBeenSet() const
{
    return m_officialSolutionHasBeenSet;
}

string VulDefenceEventDetail::GetNetworkPayload() const
{
    return m_networkPayload;
}

void VulDefenceEventDetail::SetNetworkPayload(const string& _networkPayload)
{
    m_networkPayload = _networkPayload;
    m_networkPayloadHasBeenSet = true;
}

bool VulDefenceEventDetail::NetworkPayloadHasBeenSet() const
{
    return m_networkPayloadHasBeenSet;
}

int64_t VulDefenceEventDetail::GetPID() const
{
    return m_pID;
}

void VulDefenceEventDetail::SetPID(const int64_t& _pID)
{
    m_pID = _pID;
    m_pIDHasBeenSet = true;
}

bool VulDefenceEventDetail::PIDHasBeenSet() const
{
    return m_pIDHasBeenSet;
}

string VulDefenceEventDetail::GetMainClass() const
{
    return m_mainClass;
}

void VulDefenceEventDetail::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool VulDefenceEventDetail::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string VulDefenceEventDetail::GetStackTrace() const
{
    return m_stackTrace;
}

void VulDefenceEventDetail::SetStackTrace(const string& _stackTrace)
{
    m_stackTrace = _stackTrace;
    m_stackTraceHasBeenSet = true;
}

bool VulDefenceEventDetail::StackTraceHasBeenSet() const
{
    return m_stackTraceHasBeenSet;
}

string VulDefenceEventDetail::GetServerAccount() const
{
    return m_serverAccount;
}

void VulDefenceEventDetail::SetServerAccount(const string& _serverAccount)
{
    m_serverAccount = _serverAccount;
    m_serverAccountHasBeenSet = true;
}

bool VulDefenceEventDetail::ServerAccountHasBeenSet() const
{
    return m_serverAccountHasBeenSet;
}

string VulDefenceEventDetail::GetServerPort() const
{
    return m_serverPort;
}

void VulDefenceEventDetail::SetServerPort(const string& _serverPort)
{
    m_serverPort = _serverPort;
    m_serverPortHasBeenSet = true;
}

bool VulDefenceEventDetail::ServerPortHasBeenSet() const
{
    return m_serverPortHasBeenSet;
}

string VulDefenceEventDetail::GetServerExe() const
{
    return m_serverExe;
}

void VulDefenceEventDetail::SetServerExe(const string& _serverExe)
{
    m_serverExe = _serverExe;
    m_serverExeHasBeenSet = true;
}

bool VulDefenceEventDetail::ServerExeHasBeenSet() const
{
    return m_serverExeHasBeenSet;
}

string VulDefenceEventDetail::GetServerArg() const
{
    return m_serverArg;
}

void VulDefenceEventDetail::SetServerArg(const string& _serverArg)
{
    m_serverArg = _serverArg;
    m_serverArgHasBeenSet = true;
}

bool VulDefenceEventDetail::ServerArgHasBeenSet() const
{
    return m_serverArgHasBeenSet;
}

string VulDefenceEventDetail::GetQUUID() const
{
    return m_qUUID;
}

void VulDefenceEventDetail::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool VulDefenceEventDetail::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string VulDefenceEventDetail::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void VulDefenceEventDetail::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string VulDefenceEventDetail::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

void VulDefenceEventDetail::SetContainerNetSubStatus(const string& _containerNetSubStatus)
{
    m_containerNetSubStatus = _containerNetSubStatus;
    m_containerNetSubStatusHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string VulDefenceEventDetail::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

void VulDefenceEventDetail::SetContainerIsolateOperationSrc(const string& _containerIsolateOperationSrc)
{
    m_containerIsolateOperationSrc = _containerIsolateOperationSrc;
    m_containerIsolateOperationSrcHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

string VulDefenceEventDetail::GetContainerStatus() const
{
    return m_containerStatus;
}

void VulDefenceEventDetail::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool VulDefenceEventDetail::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string VulDefenceEventDetail::GetJNDIUrl() const
{
    return m_jNDIUrl;
}

void VulDefenceEventDetail::SetJNDIUrl(const string& _jNDIUrl)
{
    m_jNDIUrl = _jNDIUrl;
    m_jNDIUrlHasBeenSet = true;
}

bool VulDefenceEventDetail::JNDIUrlHasBeenSet() const
{
    return m_jNDIUrlHasBeenSet;
}

vector<RaspInfo> VulDefenceEventDetail::GetRaspDetail() const
{
    return m_raspDetail;
}

void VulDefenceEventDetail::SetRaspDetail(const vector<RaspInfo>& _raspDetail)
{
    m_raspDetail = _raspDetail;
    m_raspDetailHasBeenSet = true;
}

bool VulDefenceEventDetail::RaspDetailHasBeenSet() const
{
    return m_raspDetailHasBeenSet;
}

string VulDefenceEventDetail::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

void VulDefenceEventDetail::SetNodeSubNetName(const string& _nodeSubNetName)
{
    m_nodeSubNetName = _nodeSubNetName;
    m_nodeSubNetNameHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string VulDefenceEventDetail::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

void VulDefenceEventDetail::SetNodeSubNetCIDR(const string& _nodeSubNetCIDR)
{
    m_nodeSubNetCIDR = _nodeSubNetCIDR;
    m_nodeSubNetCIDRHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string VulDefenceEventDetail::GetPodIP() const
{
    return m_podIP;
}

void VulDefenceEventDetail::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool VulDefenceEventDetail::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string VulDefenceEventDetail::GetNodeType() const
{
    return m_nodeType;
}

void VulDefenceEventDetail::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string VulDefenceEventDetail::GetNodeID() const
{
    return m_nodeID;
}

void VulDefenceEventDetail::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string VulDefenceEventDetail::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void VulDefenceEventDetail::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string VulDefenceEventDetail::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

void VulDefenceEventDetail::SetNodeSubNetID(const string& _nodeSubNetID)
{
    m_nodeSubNetID = _nodeSubNetID;
    m_nodeSubNetIDHasBeenSet = true;
}

bool VulDefenceEventDetail::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string VulDefenceEventDetail::GetClusterID() const
{
    return m_clusterID;
}

void VulDefenceEventDetail::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool VulDefenceEventDetail::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string VulDefenceEventDetail::GetClusterName() const
{
    return m_clusterName;
}

void VulDefenceEventDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool VulDefenceEventDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string VulDefenceEventDetail::GetNamespace() const
{
    return m_namespace;
}

void VulDefenceEventDetail::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool VulDefenceEventDetail::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string VulDefenceEventDetail::GetWorkloadType() const
{
    return m_workloadType;
}

void VulDefenceEventDetail::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool VulDefenceEventDetail::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

