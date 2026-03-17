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

#include <tencentcloud/cwp/v20180228/model/RaspEventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspEventDetail::RaspEventDetail() :
    m_idHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_hostTagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_attackTypeNameHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_attackPortHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_networkPayloadHasBeenSet(false),
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
    m_pidHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_stackTraceHasBeenSet(false),
    m_raspDetailHasBeenSet(false),
    m_eventTypeHasBeenSet(false)
{
}

CoreInternalOutcome RaspEventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("HostTags") && !value["HostTags"].IsNull())
    {
        if (!value["HostTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.HostTags` is not array type"));

        const rapidjson::Value &tmpValue = value["HostTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hostTags.push_back((*itr).GetString());
        }
        m_hostTagsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackTypeName") && !value["AttackTypeName"].IsNull())
    {
        if (!value["AttackTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.AttackTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTypeName = string(value["AttackTypeName"].GetString());
        m_attackTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.AttackType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = value["AttackType"].GetInt64();
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("AttackPort") && !value["AttackPort"].IsNull())
    {
        if (!value["AttackPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.AttackPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackPort = value["AttackPort"].GetUint64();
        m_attackPortHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("NetworkPayload") && !value["NetworkPayload"].IsNull())
    {
        if (!value["NetworkPayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.NetworkPayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPayload = string(value["NetworkPayload"].GetString());
        m_networkPayloadHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("StackTrace") && !value["StackTrace"].IsNull())
    {
        if (!value["StackTrace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.StackTrace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackTrace = string(value["StackTrace"].GetString());
        m_stackTraceHasBeenSet = true;
    }

    if (value.HasMember("RaspDetail") && !value["RaspDetail"].IsNull())
    {
        if (!value["RaspDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.RaspDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_raspDetail = string(value["RaspDetail"].GetString());
        m_raspDetailHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspEventDetail.EventType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetInt64();
        m_eventTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspEventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPayload.c_str(), allocator).Move(), allocator);
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

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
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

    if (m_raspDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RaspDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_raspDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

}


int64_t RaspEventDetail::GetId() const
{
    return m_id;
}

void RaspEventDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RaspEventDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t RaspEventDetail::GetStatus() const
{
    return m_status;
}

void RaspEventDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspEventDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspEventDetail::GetQuuid() const
{
    return m_quuid;
}

void RaspEventDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RaspEventDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RaspEventDetail::GetAlias() const
{
    return m_alias;
}

void RaspEventDetail::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RaspEventDetail::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string RaspEventDetail::GetInstanceID() const
{
    return m_instanceID;
}

void RaspEventDetail::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool RaspEventDetail::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string RaspEventDetail::GetPrivateIp() const
{
    return m_privateIp;
}

void RaspEventDetail::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool RaspEventDetail::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string RaspEventDetail::GetPublicIp() const
{
    return m_publicIp;
}

void RaspEventDetail::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool RaspEventDetail::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

vector<string> RaspEventDetail::GetHostTags() const
{
    return m_hostTags;
}

void RaspEventDetail::SetHostTags(const vector<string>& _hostTags)
{
    m_hostTags = _hostTags;
    m_hostTagsHasBeenSet = true;
}

bool RaspEventDetail::HostTagsHasBeenSet() const
{
    return m_hostTagsHasBeenSet;
}

string RaspEventDetail::GetCreateTime() const
{
    return m_createTime;
}

void RaspEventDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RaspEventDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RaspEventDetail::GetMergeTime() const
{
    return m_mergeTime;
}

void RaspEventDetail::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool RaspEventDetail::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

string RaspEventDetail::GetAttackTypeName() const
{
    return m_attackTypeName;
}

void RaspEventDetail::SetAttackTypeName(const string& _attackTypeName)
{
    m_attackTypeName = _attackTypeName;
    m_attackTypeNameHasBeenSet = true;
}

bool RaspEventDetail::AttackTypeNameHasBeenSet() const
{
    return m_attackTypeNameHasBeenSet;
}

int64_t RaspEventDetail::GetAttackType() const
{
    return m_attackType;
}

void RaspEventDetail::SetAttackType(const int64_t& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool RaspEventDetail::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string RaspEventDetail::GetUrl() const
{
    return m_url;
}

void RaspEventDetail::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RaspEventDetail::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string RaspEventDetail::GetVulName() const
{
    return m_vulName;
}

void RaspEventDetail::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool RaspEventDetail::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t RaspEventDetail::GetCount() const
{
    return m_count;
}

void RaspEventDetail::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RaspEventDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string RaspEventDetail::GetCveId() const
{
    return m_cveId;
}

void RaspEventDetail::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool RaspEventDetail::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string RaspEventDetail::GetSourceIp() const
{
    return m_sourceIp;
}

void RaspEventDetail::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool RaspEventDetail::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string RaspEventDetail::GetCity() const
{
    return m_city;
}

void RaspEventDetail::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool RaspEventDetail::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t RaspEventDetail::GetAttackPort() const
{
    return m_attackPort;
}

void RaspEventDetail::SetAttackPort(const uint64_t& _attackPort)
{
    m_attackPort = _attackPort;
    m_attackPortHasBeenSet = true;
}

bool RaspEventDetail::AttackPortHasBeenSet() const
{
    return m_attackPortHasBeenSet;
}

string RaspEventDetail::GetDescription() const
{
    return m_description;
}

void RaspEventDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RaspEventDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RaspEventDetail::GetFix() const
{
    return m_fix;
}

void RaspEventDetail::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool RaspEventDetail::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string RaspEventDetail::GetNetworkPayload() const
{
    return m_networkPayload;
}

void RaspEventDetail::SetNetworkPayload(const string& _networkPayload)
{
    m_networkPayload = _networkPayload;
    m_networkPayloadHasBeenSet = true;
}

bool RaspEventDetail::NetworkPayloadHasBeenSet() const
{
    return m_networkPayloadHasBeenSet;
}

string RaspEventDetail::GetNodeName() const
{
    return m_nodeName;
}

void RaspEventDetail::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool RaspEventDetail::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string RaspEventDetail::GetNodeId() const
{
    return m_nodeId;
}

void RaspEventDetail::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool RaspEventDetail::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string RaspEventDetail::GetContainerName() const
{
    return m_containerName;
}

void RaspEventDetail::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool RaspEventDetail::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string RaspEventDetail::GetContainerId() const
{
    return m_containerId;
}

void RaspEventDetail::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool RaspEventDetail::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string RaspEventDetail::GetContainerStatus() const
{
    return m_containerStatus;
}

void RaspEventDetail::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool RaspEventDetail::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string RaspEventDetail::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void RaspEventDetail::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool RaspEventDetail::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string RaspEventDetail::GetImageId() const
{
    return m_imageId;
}

void RaspEventDetail::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool RaspEventDetail::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string RaspEventDetail::GetImageName() const
{
    return m_imageName;
}

void RaspEventDetail::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool RaspEventDetail::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string RaspEventDetail::GetPodName() const
{
    return m_podName;
}

void RaspEventDetail::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool RaspEventDetail::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string RaspEventDetail::GetPodIp() const
{
    return m_podIp;
}

void RaspEventDetail::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RaspEventDetail::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string RaspEventDetail::GetClusterName() const
{
    return m_clusterName;
}

void RaspEventDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RaspEventDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string RaspEventDetail::GetClusterId() const
{
    return m_clusterId;
}

void RaspEventDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RaspEventDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t RaspEventDetail::GetPid() const
{
    return m_pid;
}

void RaspEventDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RaspEventDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RaspEventDetail::GetMainClass() const
{
    return m_mainClass;
}

void RaspEventDetail::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool RaspEventDetail::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string RaspEventDetail::GetStackTrace() const
{
    return m_stackTrace;
}

void RaspEventDetail::SetStackTrace(const string& _stackTrace)
{
    m_stackTrace = _stackTrace;
    m_stackTraceHasBeenSet = true;
}

bool RaspEventDetail::StackTraceHasBeenSet() const
{
    return m_stackTraceHasBeenSet;
}

string RaspEventDetail::GetRaspDetail() const
{
    return m_raspDetail;
}

void RaspEventDetail::SetRaspDetail(const string& _raspDetail)
{
    m_raspDetail = _raspDetail;
    m_raspDetailHasBeenSet = true;
}

bool RaspEventDetail::RaspDetailHasBeenSet() const
{
    return m_raspDetailHasBeenSet;
}

int64_t RaspEventDetail::GetEventType() const
{
    return m_eventType;
}

void RaspEventDetail::SetEventType(const int64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool RaspEventDetail::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

