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

#include <tencentcloud/tcss/v20201101/model/DescribeAssetContainerDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAssetContainerDetailResponse::DescribeAssetContainerDetailResponse() :
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_cPUUsageHasBeenSet(false),
    m_ramUsageHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_pODHasBeenSet(false),
    m_k8sMasterHasBeenSet(false),
    m_processCntHasBeenSet(false),
    m_portCntHasBeenSet(false),
    m_componentCntHasBeenSet(false),
    m_appCntHasBeenSet(false),
    m_webServiceCntHasBeenSet(false),
    m_mountsHasBeenSet(false),
    m_networkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_imageCreateTimeHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_hostStatusHasBeenSet(false),
    m_netStatusHasBeenSet(false),
    m_netSubStatusHasBeenSet(false),
    m_isolateSourceHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podStatusHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_publicIPHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetContainerDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("HostID") && !rsp["HostID"].IsNull())
    {
        if (!rsp["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(rsp["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (rsp.HasMember("HostIP") && !rsp["HostIP"].IsNull())
    {
        if (!rsp["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(rsp["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerName") && !rsp["ContainerName"].IsNull())
    {
        if (!rsp["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(rsp["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("RunAs") && !rsp["RunAs"].IsNull())
    {
        if (!rsp["RunAs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunAs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runAs = string(rsp["RunAs"].GetString());
        m_runAsHasBeenSet = true;
    }

    if (rsp.HasMember("Cmd") && !rsp["Cmd"].IsNull())
    {
        if (!rsp["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(rsp["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (rsp.HasMember("CPUUsage") && !rsp["CPUUsage"].IsNull())
    {
        if (!rsp["CPUUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CPUUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cPUUsage = rsp["CPUUsage"].GetUint64();
        m_cPUUsageHasBeenSet = true;
    }

    if (rsp.HasMember("RamUsage") && !rsp["RamUsage"].IsNull())
    {
        if (!rsp["RamUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RamUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ramUsage = rsp["RamUsage"].GetUint64();
        m_ramUsageHasBeenSet = true;
    }

    if (rsp.HasMember("ImageName") && !rsp["ImageName"].IsNull())
    {
        if (!rsp["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(rsp["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (rsp.HasMember("ImageID") && !rsp["ImageID"].IsNull())
    {
        if (!rsp["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(rsp["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (rsp.HasMember("POD") && !rsp["POD"].IsNull())
    {
        if (!rsp["POD"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `POD` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pOD = string(rsp["POD"].GetString());
        m_pODHasBeenSet = true;
    }

    if (rsp.HasMember("K8sMaster") && !rsp["K8sMaster"].IsNull())
    {
        if (!rsp["K8sMaster"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8sMaster` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_k8sMaster = string(rsp["K8sMaster"].GetString());
        m_k8sMasterHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessCnt") && !rsp["ProcessCnt"].IsNull())
    {
        if (!rsp["ProcessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_processCnt = rsp["ProcessCnt"].GetUint64();
        m_processCntHasBeenSet = true;
    }

    if (rsp.HasMember("PortCnt") && !rsp["PortCnt"].IsNull())
    {
        if (!rsp["PortCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PortCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_portCnt = rsp["PortCnt"].GetUint64();
        m_portCntHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentCnt") && !rsp["ComponentCnt"].IsNull())
    {
        if (!rsp["ComponentCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_componentCnt = rsp["ComponentCnt"].GetUint64();
        m_componentCntHasBeenSet = true;
    }

    if (rsp.HasMember("AppCnt") && !rsp["AppCnt"].IsNull())
    {
        if (!rsp["AppCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appCnt = rsp["AppCnt"].GetUint64();
        m_appCntHasBeenSet = true;
    }

    if (rsp.HasMember("WebServiceCnt") && !rsp["WebServiceCnt"].IsNull())
    {
        if (!rsp["WebServiceCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebServiceCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webServiceCnt = rsp["WebServiceCnt"].GetUint64();
        m_webServiceCntHasBeenSet = true;
    }

    if (rsp.HasMember("Mounts") && !rsp["Mounts"].IsNull())
    {
        if (!rsp["Mounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Mounts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Mounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContainerMount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mounts.push_back(item);
        }
        m_mountsHasBeenSet = true;
    }

    if (rsp.HasMember("Network") && !rsp["Network"].IsNull())
    {
        if (!rsp["Network"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Network` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_network.Deserialize(rsp["Network"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_networkHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageCreateTime") && !rsp["ImageCreateTime"].IsNull())
    {
        if (!rsp["ImageCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCreateTime = string(rsp["ImageCreateTime"].GetString());
        m_imageCreateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSize") && !rsp["ImageSize"].IsNull())
    {
        if (!rsp["ImageSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = rsp["ImageSize"].GetUint64();
        m_imageSizeHasBeenSet = true;
    }

    if (rsp.HasMember("HostStatus") && !rsp["HostStatus"].IsNull())
    {
        if (!rsp["HostStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostStatus = string(rsp["HostStatus"].GetString());
        m_hostStatusHasBeenSet = true;
    }

    if (rsp.HasMember("NetStatus") && !rsp["NetStatus"].IsNull())
    {
        if (!rsp["NetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netStatus = string(rsp["NetStatus"].GetString());
        m_netStatusHasBeenSet = true;
    }

    if (rsp.HasMember("NetSubStatus") && !rsp["NetSubStatus"].IsNull())
    {
        if (!rsp["NetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netSubStatus = string(rsp["NetSubStatus"].GetString());
        m_netSubStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateSource") && !rsp["IsolateSource"].IsNull())
    {
        if (!rsp["IsolateSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateSource = string(rsp["IsolateSource"].GetString());
        m_isolateSourceHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateTime") && !rsp["IsolateTime"].IsNull())
    {
        if (!rsp["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(rsp["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeID") && !rsp["NodeID"].IsNull())
    {
        if (!rsp["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(rsp["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetID") && !rsp["NodeSubNetID"].IsNull())
    {
        if (!rsp["NodeSubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetID = string(rsp["NodeSubNetID"].GetString());
        m_nodeSubNetIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetName") && !rsp["NodeSubNetName"].IsNull())
    {
        if (!rsp["NodeSubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetName = string(rsp["NodeSubNetName"].GetString());
        m_nodeSubNetNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetCIDR") && !rsp["NodeSubNetCIDR"].IsNull())
    {
        if (!rsp["NodeSubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetCIDR = string(rsp["NodeSubNetCIDR"].GetString());
        m_nodeSubNetCIDRHasBeenSet = true;
    }

    if (rsp.HasMember("PodName") && !rsp["PodName"].IsNull())
    {
        if (!rsp["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(rsp["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (rsp.HasMember("PodIP") && !rsp["PodIP"].IsNull())
    {
        if (!rsp["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(rsp["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (rsp.HasMember("PodStatus") && !rsp["PodStatus"].IsNull())
    {
        if (!rsp["PodStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podStatus = string(rsp["PodStatus"].GetString());
        m_podStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterID") && !rsp["ClusterID"].IsNull())
    {
        if (!rsp["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(rsp["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeType") && !rsp["NodeType"].IsNull())
    {
        if (!rsp["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(rsp["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("NodeUniqueID") && !rsp["NodeUniqueID"].IsNull())
    {
        if (!rsp["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(rsp["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIP") && !rsp["PublicIP"].IsNull())
    {
        if (!rsp["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(rsp["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetContainerDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_k8sMasterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sMaster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_k8sMaster.c_str(), allocator).Move(), allocator);
    }

    if (m_processCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processCnt, allocator);
    }

    if (m_portCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_portCnt, allocator);
    }

    if (m_componentCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_componentCnt, allocator);
    }

    if (m_appCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appCnt, allocator);
    }

    if (m_webServiceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebServiceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webServiceCnt, allocator);
    }

    if (m_mountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mounts.begin(); itr != m_mounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Network";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_network.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSize, allocator);
    }

    if (m_hostStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostStatus.c_str(), allocator).Move(), allocator);
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

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetID.c_str(), allocator).Move(), allocator);
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

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podStatus.c_str(), allocator).Move(), allocator);
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

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetContainerDetailResponse::GetHostID() const
{
    return m_hostID;
}

bool DescribeAssetContainerDetailResponse::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetHostIP() const
{
    return m_hostIP;
}

bool DescribeAssetContainerDetailResponse::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetContainerName() const
{
    return m_containerName;
}

bool DescribeAssetContainerDetailResponse::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAssetContainerDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetRunAs() const
{
    return m_runAs;
}

bool DescribeAssetContainerDetailResponse::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetCmd() const
{
    return m_cmd;
}

bool DescribeAssetContainerDetailResponse::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetCPUUsage() const
{
    return m_cPUUsage;
}

bool DescribeAssetContainerDetailResponse::CPUUsageHasBeenSet() const
{
    return m_cPUUsageHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetRamUsage() const
{
    return m_ramUsage;
}

bool DescribeAssetContainerDetailResponse::RamUsageHasBeenSet() const
{
    return m_ramUsageHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeAssetContainerDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetImageID() const
{
    return m_imageID;
}

bool DescribeAssetContainerDetailResponse::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetPOD() const
{
    return m_pOD;
}

bool DescribeAssetContainerDetailResponse::PODHasBeenSet() const
{
    return m_pODHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetK8sMaster() const
{
    return m_k8sMaster;
}

bool DescribeAssetContainerDetailResponse::K8sMasterHasBeenSet() const
{
    return m_k8sMasterHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetProcessCnt() const
{
    return m_processCnt;
}

bool DescribeAssetContainerDetailResponse::ProcessCntHasBeenSet() const
{
    return m_processCntHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetPortCnt() const
{
    return m_portCnt;
}

bool DescribeAssetContainerDetailResponse::PortCntHasBeenSet() const
{
    return m_portCntHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetComponentCnt() const
{
    return m_componentCnt;
}

bool DescribeAssetContainerDetailResponse::ComponentCntHasBeenSet() const
{
    return m_componentCntHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetAppCnt() const
{
    return m_appCnt;
}

bool DescribeAssetContainerDetailResponse::AppCntHasBeenSet() const
{
    return m_appCntHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetWebServiceCnt() const
{
    return m_webServiceCnt;
}

bool DescribeAssetContainerDetailResponse::WebServiceCntHasBeenSet() const
{
    return m_webServiceCntHasBeenSet;
}

vector<ContainerMount> DescribeAssetContainerDetailResponse::GetMounts() const
{
    return m_mounts;
}

bool DescribeAssetContainerDetailResponse::MountsHasBeenSet() const
{
    return m_mountsHasBeenSet;
}

ContainerNetwork DescribeAssetContainerDetailResponse::GetNetwork() const
{
    return m_network;
}

bool DescribeAssetContainerDetailResponse::NetworkHasBeenSet() const
{
    return m_networkHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAssetContainerDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

bool DescribeAssetContainerDetailResponse::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
}

uint64_t DescribeAssetContainerDetailResponse::GetImageSize() const
{
    return m_imageSize;
}

bool DescribeAssetContainerDetailResponse::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetHostStatus() const
{
    return m_hostStatus;
}

bool DescribeAssetContainerDetailResponse::HostStatusHasBeenSet() const
{
    return m_hostStatusHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNetStatus() const
{
    return m_netStatus;
}

bool DescribeAssetContainerDetailResponse::NetStatusHasBeenSet() const
{
    return m_netStatusHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNetSubStatus() const
{
    return m_netSubStatus;
}

bool DescribeAssetContainerDetailResponse::NetSubStatusHasBeenSet() const
{
    return m_netSubStatusHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetIsolateSource() const
{
    return m_isolateSource;
}

bool DescribeAssetContainerDetailResponse::IsolateSourceHasBeenSet() const
{
    return m_isolateSourceHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetIsolateTime() const
{
    return m_isolateTime;
}

bool DescribeAssetContainerDetailResponse::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeID() const
{
    return m_nodeID;
}

bool DescribeAssetContainerDetailResponse::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeAssetContainerDetailResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

bool DescribeAssetContainerDetailResponse::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

bool DescribeAssetContainerDetailResponse::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

bool DescribeAssetContainerDetailResponse::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetPodName() const
{
    return m_podName;
}

bool DescribeAssetContainerDetailResponse::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetPodIP() const
{
    return m_podIP;
}

bool DescribeAssetContainerDetailResponse::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetPodStatus() const
{
    return m_podStatus;
}

bool DescribeAssetContainerDetailResponse::PodStatusHasBeenSet() const
{
    return m_podStatusHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeAssetContainerDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeAssetContainerDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeAssetContainerDetailResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

bool DescribeAssetContainerDetailResponse::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string DescribeAssetContainerDetailResponse::GetPublicIP() const
{
    return m_publicIP;
}

bool DescribeAssetContainerDetailResponse::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}


