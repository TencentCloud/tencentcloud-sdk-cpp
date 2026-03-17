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

#include <tencentcloud/cwp/v20180228/model/RaspEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspEvent::RaspEvent() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_attackPortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_attackTypeNameHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
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
    m_raspDetailHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_pocHasBeenSet(false)
{
}

CoreInternalOutcome RaspEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AttackPort") && !value["AttackPort"].IsNull())
    {
        if (!value["AttackPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.AttackPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackPort = value["AttackPort"].GetUint64();
        m_attackPortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AttackTypeName") && !value["AttackTypeName"].IsNull())
    {
        if (!value["AttackTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.AttackTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTypeName = string(value["AttackTypeName"].GetString());
        m_attackTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.AttackType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = value["AttackType"].GetInt64();
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("RaspDetail") && !value["RaspDetail"].IsNull())
    {
        if (!value["RaspDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.RaspDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raspDetail = string(value["RaspDetail"].GetString());
        m_raspDetailHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Poc") && !value["Poc"].IsNull())
    {
        if (!value["Poc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEvent.Poc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poc = string(value["Poc"].GetString());
        m_pocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_attackPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackPort, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mergeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_attackTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackType, allocator);
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

    if (m_raspDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raspDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_pocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Poc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poc.c_str(), allocator).Move(), allocator);
    }

}


int64_t RaspEvent::GetId() const
{
    return m_id;
}

void RaspEvent::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RaspEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RaspEvent::GetUuid() const
{
    return m_uuid;
}

void RaspEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RaspEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RaspEvent::GetQuuid() const
{
    return m_quuid;
}

void RaspEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RaspEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RaspEvent::GetAlias() const
{
    return m_alias;
}

void RaspEvent::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RaspEvent::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string RaspEvent::GetInstanceID() const
{
    return m_instanceID;
}

void RaspEvent::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RaspEvent::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RaspEvent::GetPrivateIp() const
{
    return m_privateIp;
}

void RaspEvent::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool RaspEvent::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string RaspEvent::GetPublicIp() const
{
    return m_publicIp;
}

void RaspEvent::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool RaspEvent::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t RaspEvent::GetVulId() const
{
    return m_vulId;
}

void RaspEvent::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool RaspEvent::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string RaspEvent::GetVulName() const
{
    return m_vulName;
}

void RaspEvent::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool RaspEvent::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string RaspEvent::GetCveId() const
{
    return m_cveId;
}

void RaspEvent::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool RaspEvent::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string RaspEvent::GetSourceIp() const
{
    return m_sourceIp;
}

void RaspEvent::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool RaspEvent::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string RaspEvent::GetCity() const
{
    return m_city;
}

void RaspEvent::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool RaspEvent::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t RaspEvent::GetAttackPort() const
{
    return m_attackPort;
}

void RaspEvent::SetAttackPort(const uint64_t& _attackPort)
{
    m_attackPort = _attackPort;
    m_attackPortHasBeenSet = true;
}

bool RaspEvent::AttackPortHasBeenSet() const
{
    return m_attackPortHasBeenSet;
}

string RaspEvent::GetCreateTime() const
{
    return m_createTime;
}

void RaspEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RaspEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RaspEvent::GetMergeTime() const
{
    return m_mergeTime;
}

void RaspEvent::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool RaspEvent::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

uint64_t RaspEvent::GetCount() const
{
    return m_count;
}

void RaspEvent::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RaspEvent::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t RaspEvent::GetStatus() const
{
    return m_status;
}

void RaspEvent::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspEvent::GetAttackTypeName() const
{
    return m_attackTypeName;
}

void RaspEvent::SetAttackTypeName(const string& _attackTypeName)
{
    m_attackTypeName = _attackTypeName;
    m_attackTypeNameHasBeenSet = true;
}

bool RaspEvent::AttackTypeNameHasBeenSet() const
{
    return m_attackTypeNameHasBeenSet;
}

int64_t RaspEvent::GetAttackType() const
{
    return m_attackType;
}

void RaspEvent::SetAttackType(const int64_t& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool RaspEvent::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string RaspEvent::GetNodeName() const
{
    return m_nodeName;
}

void RaspEvent::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RaspEvent::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RaspEvent::GetNodeId() const
{
    return m_nodeId;
}

void RaspEvent::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RaspEvent::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RaspEvent::GetContainerName() const
{
    return m_containerName;
}

void RaspEvent::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RaspEvent::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RaspEvent::GetContainerId() const
{
    return m_containerId;
}

void RaspEvent::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RaspEvent::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RaspEvent::GetContainerStatus() const
{
    return m_containerStatus;
}

void RaspEvent::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool RaspEvent::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string RaspEvent::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RaspEvent::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RaspEvent::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RaspEvent::GetImageId() const
{
    return m_imageId;
}

void RaspEvent::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RaspEvent::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RaspEvent::GetImageName() const
{
    return m_imageName;
}

void RaspEvent::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RaspEvent::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RaspEvent::GetPodName() const
{
    return m_podName;
}

void RaspEvent::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RaspEvent::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RaspEvent::GetPodIp() const
{
    return m_podIp;
}

void RaspEvent::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RaspEvent::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string RaspEvent::GetClusterName() const
{
    return m_clusterName;
}

void RaspEvent::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RaspEvent::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RaspEvent::GetClusterId() const
{
    return m_clusterId;
}

void RaspEvent::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RaspEvent::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RaspEvent::GetRaspDetail() const
{
    return m_raspDetail;
}

void RaspEvent::SetRaspDetail(const string& _raspDetail)
{
    m_raspDetail = _raspDetail;
    m_raspDetailHasBeenSet = true;
}

bool RaspEvent::RaspDetailHasBeenSet() const
{
    return m_raspDetailHasBeenSet;
}

string RaspEvent::GetNodeType() const
{
    return m_nodeType;
}

void RaspEvent::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool RaspEvent::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

int64_t RaspEvent::GetEventType() const
{
    return m_eventType;
}

void RaspEvent::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool RaspEvent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string RaspEvent::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void RaspEvent::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool RaspEvent::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string RaspEvent::GetPocID() const
{
    return m_pocID;
}

void RaspEvent::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool RaspEvent::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string RaspEvent::GetUrl() const
{
    return m_url;
}

void RaspEvent::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RaspEvent::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string RaspEvent::GetPoc() const
{
    return m_poc;
}

void RaspEvent::SetPoc(const string& _poc)
{
    m_poc = _poc;
    m_pocHasBeenSet = true;
}

bool RaspEvent::PocHasBeenSet() const
{
    return m_pocHasBeenSet;
}

