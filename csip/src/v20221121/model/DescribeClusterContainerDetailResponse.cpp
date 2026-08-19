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

#include <tencentcloud/csip/v20221121/model/DescribeClusterContainerDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterContainerDetailResponse::DescribeClusterContainerDetailResponse() :
    m_appIDHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_cmdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_isolateStatusHasBeenSet(false),
    m_riskEventCriticalCountHasBeenSet(false),
    m_riskEventHighCountHasBeenSet(false),
    m_riskEventMiddleCountHasBeenSet(false),
    m_riskEventLowCountHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageSizeHasBeenSet(false),
    m_imageCreateTimeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeInternalIPHasBeenSet(false),
    m_nodeRunStatusHasBeenSet(false),
    m_mountsHasBeenSet(false),
    m_networkNameHasBeenSet(false),
    m_networkModeHasBeenSet(false),
    m_networkIdHasBeenSet(false),
    m_endpointIdHasBeenSet(false),
    m_gatewayHasBeenSet(false),
    m_iPv4HasBeenSet(false),
    m_iPv6HasBeenSet(false),
    m_mACHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_nodeInstanceIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_clusterCaMD5HasBeenSet(false),
    m_enableLinkImageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterContainerDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerId") && !rsp["ContainerId"].IsNull())
    {
        if (!rsp["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(rsp["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RunStatus") && !rsp["RunStatus"].IsNull())
    {
        if (!rsp["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(rsp["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateStatus") && !rsp["IsolateStatus"].IsNull())
    {
        if (!rsp["IsolateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateStatus = string(rsp["IsolateStatus"].GetString());
        m_isolateStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventCriticalCount") && !rsp["RiskEventCriticalCount"].IsNull())
    {
        if (!rsp["RiskEventCriticalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventCriticalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCriticalCount = rsp["RiskEventCriticalCount"].GetInt64();
        m_riskEventCriticalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventHighCount") && !rsp["RiskEventHighCount"].IsNull())
    {
        if (!rsp["RiskEventHighCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventHighCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventHighCount = rsp["RiskEventHighCount"].GetInt64();
        m_riskEventHighCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventMiddleCount") && !rsp["RiskEventMiddleCount"].IsNull())
    {
        if (!rsp["RiskEventMiddleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventMiddleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventMiddleCount = rsp["RiskEventMiddleCount"].GetInt64();
        m_riskEventMiddleCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventLowCount") && !rsp["RiskEventLowCount"].IsNull())
    {
        if (!rsp["RiskEventLowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventLowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventLowCount = rsp["RiskEventLowCount"].GetInt64();
        m_riskEventLowCountHasBeenSet = true;
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

    if (rsp.HasMember("ImageId") && !rsp["ImageId"].IsNull())
    {
        if (!rsp["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(rsp["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSize") && !rsp["ImageSize"].IsNull())
    {
        if (!rsp["ImageSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSize = string(rsp["ImageSize"].GetString());
        m_imageSizeHasBeenSet = true;
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

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeInternalIP") && !rsp["NodeInternalIP"].IsNull())
    {
        if (!rsp["NodeInternalIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInternalIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInternalIP = string(rsp["NodeInternalIP"].GetString());
        m_nodeInternalIPHasBeenSet = true;
    }

    if (rsp.HasMember("NodeRunStatus") && !rsp["NodeRunStatus"].IsNull())
    {
        if (!rsp["NodeRunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeRunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeRunStatus = string(rsp["NodeRunStatus"].GetString());
        m_nodeRunStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Mounts") && !rsp["Mounts"].IsNull())
    {
        if (!rsp["Mounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Mounts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Mounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContainerMountItem item;
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

    if (rsp.HasMember("NetworkName") && !rsp["NetworkName"].IsNull())
    {
        if (!rsp["NetworkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkName = string(rsp["NetworkName"].GetString());
        m_networkNameHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkMode") && !rsp["NetworkMode"].IsNull())
    {
        if (!rsp["NetworkMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkMode = string(rsp["NetworkMode"].GetString());
        m_networkModeHasBeenSet = true;
    }

    if (rsp.HasMember("NetworkId") && !rsp["NetworkId"].IsNull())
    {
        if (!rsp["NetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkId = string(rsp["NetworkId"].GetString());
        m_networkIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndpointId") && !rsp["EndpointId"].IsNull())
    {
        if (!rsp["EndpointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndpointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointId = string(rsp["EndpointId"].GetString());
        m_endpointIdHasBeenSet = true;
    }

    if (rsp.HasMember("Gateway") && !rsp["Gateway"].IsNull())
    {
        if (!rsp["Gateway"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Gateway` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gateway = string(rsp["Gateway"].GetString());
        m_gatewayHasBeenSet = true;
    }

    if (rsp.HasMember("IPv4") && !rsp["IPv4"].IsNull())
    {
        if (!rsp["IPv4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv4 = string(rsp["IPv4"].GetString());
        m_iPv4HasBeenSet = true;
    }

    if (rsp.HasMember("IPv6") && !rsp["IPv6"].IsNull())
    {
        if (!rsp["IPv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6 = string(rsp["IPv6"].GetString());
        m_iPv6HasBeenSet = true;
    }

    if (rsp.HasMember("MAC") && !rsp["MAC"].IsNull())
    {
        if (!rsp["MAC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MAC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mAC = string(rsp["MAC"].GetString());
        m_mACHasBeenSet = true;
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

    if (rsp.HasMember("NodeInstanceId") && !rsp["NodeInstanceId"].IsNull())
    {
        if (!rsp["NodeInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInstanceId = string(rsp["NodeInstanceId"].GetString());
        m_nodeInstanceIdHasBeenSet = true;
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

    if (rsp.HasMember("ClusterCaMD5") && !rsp["ClusterCaMD5"].IsNull())
    {
        if (!rsp["ClusterCaMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCaMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCaMD5 = string(rsp["ClusterCaMD5"].GetString());
        m_clusterCaMD5HasBeenSet = true;
    }

    if (rsp.HasMember("EnableLinkImage") && !rsp["EnableLinkImage"].IsNull())
    {
        if (!rsp["EnableLinkImage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableLinkImage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLinkImage = rsp["EnableLinkImage"].GetBool();
        m_enableLinkImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterContainerDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_riskEventCriticalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventCriticalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventCriticalCount, allocator);
    }

    if (m_riskEventHighCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventHighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventHighCount, allocator);
    }

    if (m_riskEventMiddleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventMiddleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventMiddleCount, allocator);
    }

    if (m_riskEventLowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventLowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventLowCount, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSize.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInternalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInternalIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRunStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeRunStatus.c_str(), allocator).Move(), allocator);
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

    if (m_networkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkMode.c_str(), allocator).Move(), allocator);
    }

    if (m_networkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gateway";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gateway.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv4.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_mACHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MAC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mAC.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInstanceId.c_str(), allocator).Move(), allocator);
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

    if (m_clusterCaMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCaMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_enableLinkImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLinkImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLinkImage, allocator);
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


int64_t DescribeClusterContainerDetailResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeClusterContainerDetailResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetContainerId() const
{
    return m_containerId;
}

bool DescribeClusterContainerDetailResponse::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetCmd() const
{
    return m_cmd;
}

bool DescribeClusterContainerDetailResponse::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeClusterContainerDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetRunStatus() const
{
    return m_runStatus;
}

bool DescribeClusterContainerDetailResponse::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetIsolateStatus() const
{
    return m_isolateStatus;
}

bool DescribeClusterContainerDetailResponse::IsolateStatusHasBeenSet() const
{
    return m_isolateStatusHasBeenSet;
}

int64_t DescribeClusterContainerDetailResponse::GetRiskEventCriticalCount() const
{
    return m_riskEventCriticalCount;
}

bool DescribeClusterContainerDetailResponse::RiskEventCriticalCountHasBeenSet() const
{
    return m_riskEventCriticalCountHasBeenSet;
}

int64_t DescribeClusterContainerDetailResponse::GetRiskEventHighCount() const
{
    return m_riskEventHighCount;
}

bool DescribeClusterContainerDetailResponse::RiskEventHighCountHasBeenSet() const
{
    return m_riskEventHighCountHasBeenSet;
}

int64_t DescribeClusterContainerDetailResponse::GetRiskEventMiddleCount() const
{
    return m_riskEventMiddleCount;
}

bool DescribeClusterContainerDetailResponse::RiskEventMiddleCountHasBeenSet() const
{
    return m_riskEventMiddleCountHasBeenSet;
}

int64_t DescribeClusterContainerDetailResponse::GetRiskEventLowCount() const
{
    return m_riskEventLowCount;
}

bool DescribeClusterContainerDetailResponse::RiskEventLowCountHasBeenSet() const
{
    return m_riskEventLowCountHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeClusterContainerDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetImageId() const
{
    return m_imageId;
}

bool DescribeClusterContainerDetailResponse::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetImageSize() const
{
    return m_imageSize;
}

bool DescribeClusterContainerDetailResponse::ImageSizeHasBeenSet() const
{
    return m_imageSizeHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetImageCreateTime() const
{
    return m_imageCreateTime;
}

bool DescribeClusterContainerDetailResponse::ImageCreateTimeHasBeenSet() const
{
    return m_imageCreateTimeHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeClusterContainerDetailResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeInternalIP() const
{
    return m_nodeInternalIP;
}

bool DescribeClusterContainerDetailResponse::NodeInternalIPHasBeenSet() const
{
    return m_nodeInternalIPHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeRunStatus() const
{
    return m_nodeRunStatus;
}

bool DescribeClusterContainerDetailResponse::NodeRunStatusHasBeenSet() const
{
    return m_nodeRunStatusHasBeenSet;
}

vector<ContainerMountItem> DescribeClusterContainerDetailResponse::GetMounts() const
{
    return m_mounts;
}

bool DescribeClusterContainerDetailResponse::MountsHasBeenSet() const
{
    return m_mountsHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNetworkName() const
{
    return m_networkName;
}

bool DescribeClusterContainerDetailResponse::NetworkNameHasBeenSet() const
{
    return m_networkNameHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNetworkMode() const
{
    return m_networkMode;
}

bool DescribeClusterContainerDetailResponse::NetworkModeHasBeenSet() const
{
    return m_networkModeHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNetworkId() const
{
    return m_networkId;
}

bool DescribeClusterContainerDetailResponse::NetworkIdHasBeenSet() const
{
    return m_networkIdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetEndpointId() const
{
    return m_endpointId;
}

bool DescribeClusterContainerDetailResponse::EndpointIdHasBeenSet() const
{
    return m_endpointIdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetGateway() const
{
    return m_gateway;
}

bool DescribeClusterContainerDetailResponse::GatewayHasBeenSet() const
{
    return m_gatewayHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetIPv4() const
{
    return m_iPv4;
}

bool DescribeClusterContainerDetailResponse::IPv4HasBeenSet() const
{
    return m_iPv4HasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetIPv6() const
{
    return m_iPv6;
}

bool DescribeClusterContainerDetailResponse::IPv6HasBeenSet() const
{
    return m_iPv6HasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetMAC() const
{
    return m_mAC;
}

bool DescribeClusterContainerDetailResponse::MACHasBeenSet() const
{
    return m_mACHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetContainerName() const
{
    return m_containerName;
}

bool DescribeClusterContainerDetailResponse::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeInstanceId() const
{
    return m_nodeInstanceId;
}

bool DescribeClusterContainerDetailResponse::NodeInstanceIdHasBeenSet() const
{
    return m_nodeInstanceIdHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeClusterContainerDetailResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

bool DescribeClusterContainerDetailResponse::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string DescribeClusterContainerDetailResponse::GetClusterCaMD5() const
{
    return m_clusterCaMD5;
}

bool DescribeClusterContainerDetailResponse::ClusterCaMD5HasBeenSet() const
{
    return m_clusterCaMD5HasBeenSet;
}

bool DescribeClusterContainerDetailResponse::GetEnableLinkImage() const
{
    return m_enableLinkImage;
}

bool DescribeClusterContainerDetailResponse::EnableLinkImageHasBeenSet() const
{
    return m_enableLinkImageHasBeenSet;
}


