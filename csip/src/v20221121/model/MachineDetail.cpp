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

#include <tencentcloud/csip/v20221121/model/MachineDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

MachineDetail::MachineDetail() :
    m_agentStatusHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_assetTypeNameHasBeenSet(false),
    m_bootTimeHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_cloudFromEnumHasBeenSet(false),
    m_cloudTagsHasBeenSet(false),
    m_coreVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_cpuLoadHasBeenSet(false),
    m_cpuSizeHasBeenSet(false),
    m_deviceVersionHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_exposedStatusHasBeenSet(false),
    m_installTimeHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_latestLiveTimeHasBeenSet(false),
    m_latestOfflineTimeHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_machineOsHasBeenSet(false),
    m_machineStatusHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memoryLoadHasBeenSet(false),
    m_netCardsHasBeenSet(false),
    m_osByAgentHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_protectDaysHasBeenSet(false),
    m_protectTypeHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_regionInfoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_tagItemsHasBeenSet(false),
    m_tagModifyInfoHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_containerDefendStatusHasBeenSet(false),
    m_clusterCaMd5HasBeenSet(false),
    m_containerEnvInfoHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome MachineDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentStatus") && !value["AgentStatus"].IsNull())
    {
        if (!value["AgentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.AgentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentStatus = string(value["AgentStatus"].GetString());
        m_agentStatusHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AssetTypeName") && !value["AssetTypeName"].IsNull())
    {
        if (!value["AssetTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.AssetTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetTypeName = string(value["AssetTypeName"].GetString());
        m_assetTypeNameHasBeenSet = true;
    }

    if (value.HasMember("BootTime") && !value["BootTime"].IsNull())
    {
        if (!value["BootTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.BootTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bootTime = value["BootTime"].GetInt64();
        m_bootTimeHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.BuyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = value["BuyTime"].GetInt64();
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("CloudFromEnum") && !value["CloudFromEnum"].IsNull())
    {
        if (!value["CloudFromEnum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.CloudFromEnum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudFromEnum = string(value["CloudFromEnum"].GetString());
        m_cloudFromEnumHasBeenSet = true;
    }

    if (value.HasMember("CloudTags") && !value["CloudTags"].IsNull())
    {
        if (!value["CloudTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineDetail.CloudTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudTags.push_back(item);
        }
        m_cloudTagsHasBeenSet = true;
    }

    if (value.HasMember("CoreVersion") && !value["CoreVersion"].IsNull())
    {
        if (!value["CoreVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.CoreVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreVersion = string(value["CoreVersion"].GetString());
        m_coreVersionHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.Cpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = string(value["Cpu"].GetString());
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("CpuLoad") && !value["CpuLoad"].IsNull())
    {
        if (!value["CpuLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.CpuLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoad = string(value["CpuLoad"].GetString());
        m_cpuLoadHasBeenSet = true;
    }

    if (value.HasMember("CpuSize") && !value["CpuSize"].IsNull())
    {
        if (!value["CpuSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.CpuSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = value["CpuSize"].GetUint64();
        m_cpuSizeHasBeenSet = true;
    }

    if (value.HasMember("DeviceVersion") && !value["DeviceVersion"].IsNull())
    {
        if (!value["DeviceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.DeviceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceVersion = string(value["DeviceVersion"].GetString());
        m_deviceVersionHasBeenSet = true;
    }

    if (value.HasMember("Disks") && !value["Disks"].IsNull())
    {
        if (!value["Disks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineDetail.Disks` is not array type"));

        const rapidjson::Value &tmpValue = value["Disks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskPartitionInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disks.push_back(item);
        }
        m_disksHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("ExposedStatus") && !value["ExposedStatus"].IsNull())
    {
        if (!value["ExposedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ExposedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exposedStatus = string(value["ExposedStatus"].GetString());
        m_exposedStatusHasBeenSet = true;
    }

    if (value.HasMember("InstallTime") && !value["InstallTime"].IsNull())
    {
        if (!value["InstallTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.InstallTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_installTime = value["InstallTime"].GetInt64();
        m_installTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("KernelVersion") && !value["KernelVersion"].IsNull())
    {
        if (!value["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(value["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }

    if (value.HasMember("LatestLiveTime") && !value["LatestLiveTime"].IsNull())
    {
        if (!value["LatestLiveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.LatestLiveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestLiveTime = value["LatestLiveTime"].GetInt64();
        m_latestLiveTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestOfflineTime") && !value["LatestOfflineTime"].IsNull())
    {
        if (!value["LatestOfflineTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.LatestOfflineTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_latestOfflineTime = value["LatestOfflineTime"].GetInt64();
        m_latestOfflineTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("MachineOs") && !value["MachineOs"].IsNull())
    {
        if (!value["MachineOs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MachineOs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineOs = string(value["MachineOs"].GetString());
        m_machineOsHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemoryLoad") && !value["MemoryLoad"].IsNull())
    {
        if (!value["MemoryLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.MemoryLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memoryLoad = string(value["MemoryLoad"].GetString());
        m_memoryLoadHasBeenSet = true;
    }

    if (value.HasMember("NetCards") && !value["NetCards"].IsNull())
    {
        if (!value["NetCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineDetail.NetCards` is not array type"));

        const rapidjson::Value &tmpValue = value["NetCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkCardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netCards.push_back(item);
        }
        m_netCardsHasBeenSet = true;
    }

    if (value.HasMember("OsByAgent") && !value["OsByAgent"].IsNull())
    {
        if (!value["OsByAgent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.OsByAgent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osByAgent = string(value["OsByAgent"].GetString());
        m_osByAgentHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectDays") && !value["ProtectDays"].IsNull())
    {
        if (!value["ProtectDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ProtectDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDays = value["ProtectDays"].GetUint64();
        m_protectDaysHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("RegionInfo") && !value["RegionInfo"].IsNull())
    {
        if (!value["RegionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.RegionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regionInfo.Deserialize(value["RegionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionInfoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("TagItems") && !value["TagItems"].IsNull())
    {
        if (!value["TagItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MachineDetail.TagItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TagItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MiniTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagItems.push_back(item);
        }
        m_tagItemsHasBeenSet = true;
    }

    if (value.HasMember("TagModifyInfo") && !value["TagModifyInfo"].IsNull())
    {
        if (!value["TagModifyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.TagModifyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagModifyInfo.Deserialize(value["TagModifyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagModifyInfoHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ContainerDefendStatus") && !value["ContainerDefendStatus"].IsNull())
    {
        if (!value["ContainerDefendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ContainerDefendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerDefendStatus = string(value["ContainerDefendStatus"].GetString());
        m_containerDefendStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterCaMd5") && !value["ClusterCaMd5"].IsNull())
    {
        if (!value["ClusterCaMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ClusterCaMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCaMd5 = string(value["ClusterCaMd5"].GetString());
        m_clusterCaMd5HasBeenSet = true;
    }

    if (value.HasMember("ContainerEnvInfo") && !value["ContainerEnvInfo"].IsNull())
    {
        if (!value["ContainerEnvInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ContainerEnvInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containerEnvInfo.Deserialize(value["ContainerEnvInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerEnvInfoHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_assetTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_bootTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bootTime, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyTime, allocator);
    }

    if (m_cloudFromEnumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFromEnum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudFromEnum.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudTags.begin(); itr != m_cloudTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_coreVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSize, allocator);
    }

    if (m_deviceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_disksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disks.begin(); itr != m_disks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_exposedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exposedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_installTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installTime, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_latestLiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestLiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestLiveTime, allocator);
    }

    if (m_latestOfflineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestOfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latestOfflineTime, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineOsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineOs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineOs.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_memoryLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memoryLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_netCardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetCards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netCards.begin(); itr != m_netCards.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_osByAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsByAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osByAgent.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_protectDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDays, allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_regionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_tagItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagItems.begin(); itr != m_tagItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagModifyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagModifyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagModifyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_containerDefendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerDefendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerDefendStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCaMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCaMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterCaMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_containerEnvInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerEnvInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerEnvInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


string MachineDetail::GetAgentStatus() const
{
    return m_agentStatus;
}

void MachineDetail::SetAgentStatus(const string& _agentStatus)
{
    m_agentStatus = _agentStatus;
    m_agentStatusHasBeenSet = true;
}

bool MachineDetail::AgentStatusHasBeenSet() const
{
    return m_agentStatusHasBeenSet;
}

string MachineDetail::GetAgentVersion() const
{
    return m_agentVersion;
}

void MachineDetail::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool MachineDetail::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

uint64_t MachineDetail::GetAppId() const
{
    return m_appId;
}

void MachineDetail::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool MachineDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string MachineDetail::GetAssetTypeName() const
{
    return m_assetTypeName;
}

void MachineDetail::SetAssetTypeName(const string& _assetTypeName)
{
    m_assetTypeName = _assetTypeName;
    m_assetTypeNameHasBeenSet = true;
}

bool MachineDetail::AssetTypeNameHasBeenSet() const
{
    return m_assetTypeNameHasBeenSet;
}

int64_t MachineDetail::GetBootTime() const
{
    return m_bootTime;
}

void MachineDetail::SetBootTime(const int64_t& _bootTime)
{
    m_bootTime = _bootTime;
    m_bootTimeHasBeenSet = true;
}

bool MachineDetail::BootTimeHasBeenSet() const
{
    return m_bootTimeHasBeenSet;
}

int64_t MachineDetail::GetBuyTime() const
{
    return m_buyTime;
}

void MachineDetail::SetBuyTime(const int64_t& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool MachineDetail::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

string MachineDetail::GetCloudFromEnum() const
{
    return m_cloudFromEnum;
}

void MachineDetail::SetCloudFromEnum(const string& _cloudFromEnum)
{
    m_cloudFromEnum = _cloudFromEnum;
    m_cloudFromEnumHasBeenSet = true;
}

bool MachineDetail::CloudFromEnumHasBeenSet() const
{
    return m_cloudFromEnumHasBeenSet;
}

vector<Tags> MachineDetail::GetCloudTags() const
{
    return m_cloudTags;
}

void MachineDetail::SetCloudTags(const vector<Tags>& _cloudTags)
{
    m_cloudTags = _cloudTags;
    m_cloudTagsHasBeenSet = true;
}

bool MachineDetail::CloudTagsHasBeenSet() const
{
    return m_cloudTagsHasBeenSet;
}

string MachineDetail::GetCoreVersion() const
{
    return m_coreVersion;
}

void MachineDetail::SetCoreVersion(const string& _coreVersion)
{
    m_coreVersion = _coreVersion;
    m_coreVersionHasBeenSet = true;
}

bool MachineDetail::CoreVersionHasBeenSet() const
{
    return m_coreVersionHasBeenSet;
}

string MachineDetail::GetCpu() const
{
    return m_cpu;
}

void MachineDetail::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool MachineDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string MachineDetail::GetCpuLoad() const
{
    return m_cpuLoad;
}

void MachineDetail::SetCpuLoad(const string& _cpuLoad)
{
    m_cpuLoad = _cpuLoad;
    m_cpuLoadHasBeenSet = true;
}

bool MachineDetail::CpuLoadHasBeenSet() const
{
    return m_cpuLoadHasBeenSet;
}

uint64_t MachineDetail::GetCpuSize() const
{
    return m_cpuSize;
}

void MachineDetail::SetCpuSize(const uint64_t& _cpuSize)
{
    m_cpuSize = _cpuSize;
    m_cpuSizeHasBeenSet = true;
}

bool MachineDetail::CpuSizeHasBeenSet() const
{
    return m_cpuSizeHasBeenSet;
}

string MachineDetail::GetDeviceVersion() const
{
    return m_deviceVersion;
}

void MachineDetail::SetDeviceVersion(const string& _deviceVersion)
{
    m_deviceVersion = _deviceVersion;
    m_deviceVersionHasBeenSet = true;
}

bool MachineDetail::DeviceVersionHasBeenSet() const
{
    return m_deviceVersionHasBeenSet;
}

vector<DiskPartitionInfo> MachineDetail::GetDisks() const
{
    return m_disks;
}

void MachineDetail::SetDisks(const vector<DiskPartitionInfo>& _disks)
{
    m_disks = _disks;
    m_disksHasBeenSet = true;
}

bool MachineDetail::DisksHasBeenSet() const
{
    return m_disksHasBeenSet;
}

int64_t MachineDetail::GetEndTime() const
{
    return m_endTime;
}

void MachineDetail::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MachineDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string MachineDetail::GetExposedStatus() const
{
    return m_exposedStatus;
}

void MachineDetail::SetExposedStatus(const string& _exposedStatus)
{
    m_exposedStatus = _exposedStatus;
    m_exposedStatusHasBeenSet = true;
}

bool MachineDetail::ExposedStatusHasBeenSet() const
{
    return m_exposedStatusHasBeenSet;
}

int64_t MachineDetail::GetInstallTime() const
{
    return m_installTime;
}

void MachineDetail::SetInstallTime(const int64_t& _installTime)
{
    m_installTime = _installTime;
    m_installTimeHasBeenSet = true;
}

bool MachineDetail::InstallTimeHasBeenSet() const
{
    return m_installTimeHasBeenSet;
}

string MachineDetail::GetInstanceID() const
{
    return m_instanceID;
}

void MachineDetail::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool MachineDetail::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string MachineDetail::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void MachineDetail::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool MachineDetail::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string MachineDetail::GetKernelVersion() const
{
    return m_kernelVersion;
}

void MachineDetail::SetKernelVersion(const string& _kernelVersion)
{
    m_kernelVersion = _kernelVersion;
    m_kernelVersionHasBeenSet = true;
}

bool MachineDetail::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}

int64_t MachineDetail::GetLatestLiveTime() const
{
    return m_latestLiveTime;
}

void MachineDetail::SetLatestLiveTime(const int64_t& _latestLiveTime)
{
    m_latestLiveTime = _latestLiveTime;
    m_latestLiveTimeHasBeenSet = true;
}

bool MachineDetail::LatestLiveTimeHasBeenSet() const
{
    return m_latestLiveTimeHasBeenSet;
}

int64_t MachineDetail::GetLatestOfflineTime() const
{
    return m_latestOfflineTime;
}

void MachineDetail::SetLatestOfflineTime(const int64_t& _latestOfflineTime)
{
    m_latestOfflineTime = _latestOfflineTime;
    m_latestOfflineTimeHasBeenSet = true;
}

bool MachineDetail::LatestOfflineTimeHasBeenSet() const
{
    return m_latestOfflineTimeHasBeenSet;
}

string MachineDetail::GetMachineIp() const
{
    return m_machineIp;
}

void MachineDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool MachineDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string MachineDetail::GetMachineName() const
{
    return m_machineName;
}

void MachineDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool MachineDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string MachineDetail::GetMachineOs() const
{
    return m_machineOs;
}

void MachineDetail::SetMachineOs(const string& _machineOs)
{
    m_machineOs = _machineOs;
    m_machineOsHasBeenSet = true;
}

bool MachineDetail::MachineOsHasBeenSet() const
{
    return m_machineOsHasBeenSet;
}

string MachineDetail::GetMachineStatus() const
{
    return m_machineStatus;
}

void MachineDetail::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool MachineDetail::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string MachineDetail::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void MachineDetail::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool MachineDetail::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

uint64_t MachineDetail::GetMemSize() const
{
    return m_memSize;
}

void MachineDetail::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool MachineDetail::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string MachineDetail::GetMemoryLoad() const
{
    return m_memoryLoad;
}

void MachineDetail::SetMemoryLoad(const string& _memoryLoad)
{
    m_memoryLoad = _memoryLoad;
    m_memoryLoadHasBeenSet = true;
}

bool MachineDetail::MemoryLoadHasBeenSet() const
{
    return m_memoryLoadHasBeenSet;
}

vector<NetworkCardInfo> MachineDetail::GetNetCards() const
{
    return m_netCards;
}

void MachineDetail::SetNetCards(const vector<NetworkCardInfo>& _netCards)
{
    m_netCards = _netCards;
    m_netCardsHasBeenSet = true;
}

bool MachineDetail::NetCardsHasBeenSet() const
{
    return m_netCardsHasBeenSet;
}

string MachineDetail::GetOsByAgent() const
{
    return m_osByAgent;
}

void MachineDetail::SetOsByAgent(const string& _osByAgent)
{
    m_osByAgent = _osByAgent;
    m_osByAgentHasBeenSet = true;
}

bool MachineDetail::OsByAgentHasBeenSet() const
{
    return m_osByAgentHasBeenSet;
}

string MachineDetail::GetPayMode() const
{
    return m_payMode;
}

void MachineDetail::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool MachineDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t MachineDetail::GetProjectId() const
{
    return m_projectId;
}

void MachineDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MachineDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t MachineDetail::GetProtectDays() const
{
    return m_protectDays;
}

void MachineDetail::SetProtectDays(const uint64_t& _protectDays)
{
    m_protectDays = _protectDays;
    m_protectDaysHasBeenSet = true;
}

bool MachineDetail::ProtectDaysHasBeenSet() const
{
    return m_protectDaysHasBeenSet;
}

string MachineDetail::GetProtectType() const
{
    return m_protectType;
}

void MachineDetail::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool MachineDetail::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

string MachineDetail::GetQuuid() const
{
    return m_quuid;
}

void MachineDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool MachineDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

RegionInfo MachineDetail::GetRegionInfo() const
{
    return m_regionInfo;
}

void MachineDetail::SetRegionInfo(const RegionInfo& _regionInfo)
{
    m_regionInfo = _regionInfo;
    m_regionInfoHasBeenSet = true;
}

bool MachineDetail::RegionInfoHasBeenSet() const
{
    return m_regionInfoHasBeenSet;
}

string MachineDetail::GetRemark() const
{
    return m_remark;
}

void MachineDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MachineDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string MachineDetail::GetSerialNumber() const
{
    return m_serialNumber;
}

void MachineDetail::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool MachineDetail::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

vector<MiniTagItem> MachineDetail::GetTagItems() const
{
    return m_tagItems;
}

void MachineDetail::SetTagItems(const vector<MiniTagItem>& _tagItems)
{
    m_tagItems = _tagItems;
    m_tagItemsHasBeenSet = true;
}

bool MachineDetail::TagItemsHasBeenSet() const
{
    return m_tagItemsHasBeenSet;
}

AssetTagModifyAssetItem MachineDetail::GetTagModifyInfo() const
{
    return m_tagModifyInfo;
}

void MachineDetail::SetTagModifyInfo(const AssetTagModifyAssetItem& _tagModifyInfo)
{
    m_tagModifyInfo = _tagModifyInfo;
    m_tagModifyInfoHasBeenSet = true;
}

bool MachineDetail::TagModifyInfoHasBeenSet() const
{
    return m_tagModifyInfoHasBeenSet;
}

string MachineDetail::GetUuid() const
{
    return m_uuid;
}

void MachineDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool MachineDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string MachineDetail::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void MachineDetail::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool MachineDetail::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string MachineDetail::GetVpcId() const
{
    return m_vpcId;
}

void MachineDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MachineDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MachineDetail::GetVpcName() const
{
    return m_vpcName;
}

void MachineDetail::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool MachineDetail::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string MachineDetail::GetNodeType() const
{
    return m_nodeType;
}

void MachineDetail::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool MachineDetail::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string MachineDetail::GetContainerDefendStatus() const
{
    return m_containerDefendStatus;
}

void MachineDetail::SetContainerDefendStatus(const string& _containerDefendStatus)
{
    m_containerDefendStatus = _containerDefendStatus;
    m_containerDefendStatusHasBeenSet = true;
}

bool MachineDetail::ContainerDefendStatusHasBeenSet() const
{
    return m_containerDefendStatusHasBeenSet;
}

string MachineDetail::GetClusterCaMd5() const
{
    return m_clusterCaMd5;
}

void MachineDetail::SetClusterCaMd5(const string& _clusterCaMd5)
{
    m_clusterCaMd5 = _clusterCaMd5;
    m_clusterCaMd5HasBeenSet = true;
}

bool MachineDetail::ClusterCaMd5HasBeenSet() const
{
    return m_clusterCaMd5HasBeenSet;
}

ContainerEnvInfo MachineDetail::GetContainerEnvInfo() const
{
    return m_containerEnvInfo;
}

void MachineDetail::SetContainerEnvInfo(const ContainerEnvInfo& _containerEnvInfo)
{
    m_containerEnvInfo = _containerEnvInfo;
    m_containerEnvInfoHasBeenSet = true;
}

bool MachineDetail::ContainerEnvInfoHasBeenSet() const
{
    return m_containerEnvInfoHasBeenSet;
}

string MachineDetail::GetClusterId() const
{
    return m_clusterId;
}

void MachineDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool MachineDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string MachineDetail::GetClusterName() const
{
    return m_clusterName;
}

void MachineDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool MachineDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

