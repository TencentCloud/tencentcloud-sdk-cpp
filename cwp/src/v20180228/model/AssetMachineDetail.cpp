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

#include <tencentcloud/cwp/v20180228/model/AssetMachineDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetMachineDetail::AssetMachineDetail() :
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memSizeHasBeenSet(false),
    m_memLoadHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskLoadHasBeenSet(false),
    m_partitionCountHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_cpuSizeHasBeenSet(false),
    m_cpuLoadHasBeenSet(false),
    m_protectLevelHasBeenSet(false),
    m_riskStatusHasBeenSet(false),
    m_protectDaysHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_coreVersionHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_installTimeHasBeenSet(false),
    m_bootTimeHasBeenSet(false),
    m_lastLiveTimeHasBeenSet(false),
    m_producerHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_netCardsHasBeenSet(false),
    m_disksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_deviceVersionHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_cpuLoadVulHasBeenSet(false),
    m_firstTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetMachineDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Cpu` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = string(value["Cpu"].GetString());
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("MemSize") && !value["MemSize"].IsNull())
    {
        if (!value["MemSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MemSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memSize = value["MemSize"].GetUint64();
        m_memSizeHasBeenSet = true;
    }

    if (value.HasMember("MemLoad") && !value["MemLoad"].IsNull())
    {
        if (!value["MemLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MemLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memLoad = string(value["MemLoad"].GetString());
        m_memLoadHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskLoad") && !value["DiskLoad"].IsNull())
    {
        if (!value["DiskLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.DiskLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskLoad = string(value["DiskLoad"].GetString());
        m_diskLoadHasBeenSet = true;
    }

    if (value.HasMember("PartitionCount") && !value["PartitionCount"].IsNull())
    {
        if (!value["PartitionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.PartitionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionCount = value["PartitionCount"].GetUint64();
        m_partitionCountHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("CpuSize") && !value["CpuSize"].IsNull())
    {
        if (!value["CpuSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.CpuSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuSize = value["CpuSize"].GetUint64();
        m_cpuSizeHasBeenSet = true;
    }

    if (value.HasMember("CpuLoad") && !value["CpuLoad"].IsNull())
    {
        if (!value["CpuLoad"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.CpuLoad` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoad = string(value["CpuLoad"].GetString());
        m_cpuLoadHasBeenSet = true;
    }

    if (value.HasMember("ProtectLevel") && !value["ProtectLevel"].IsNull())
    {
        if (!value["ProtectLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.ProtectLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectLevel = value["ProtectLevel"].GetUint64();
        m_protectLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskStatus") && !value["RiskStatus"].IsNull())
    {
        if (!value["RiskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.RiskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskStatus = string(value["RiskStatus"].GetString());
        m_riskStatusHasBeenSet = true;
    }

    if (value.HasMember("ProtectDays") && !value["ProtectDays"].IsNull())
    {
        if (!value["ProtectDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.ProtectDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectDays = value["ProtectDays"].GetUint64();
        m_protectDaysHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.BuyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = string(value["BuyTime"].GetString());
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CoreVersion") && !value["CoreVersion"].IsNull())
    {
        if (!value["CoreVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.CoreVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coreVersion = string(value["CoreVersion"].GetString());
        m_coreVersionHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.OsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osType = string(value["OsType"].GetString());
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("AgentVersion") && !value["AgentVersion"].IsNull())
    {
        if (!value["AgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.AgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentVersion = string(value["AgentVersion"].GetString());
        m_agentVersionHasBeenSet = true;
    }

    if (value.HasMember("InstallTime") && !value["InstallTime"].IsNull())
    {
        if (!value["InstallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.InstallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installTime = string(value["InstallTime"].GetString());
        m_installTimeHasBeenSet = true;
    }

    if (value.HasMember("BootTime") && !value["BootTime"].IsNull())
    {
        if (!value["BootTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.BootTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bootTime = string(value["BootTime"].GetString());
        m_bootTimeHasBeenSet = true;
    }

    if (value.HasMember("LastLiveTime") && !value["LastLiveTime"].IsNull())
    {
        if (!value["LastLiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.LastLiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastLiveTime = string(value["LastLiveTime"].GetString());
        m_lastLiveTimeHasBeenSet = true;
    }

    if (value.HasMember("Producer") && !value["Producer"].IsNull())
    {
        if (!value["Producer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Producer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producer = string(value["Producer"].GetString());
        m_producerHasBeenSet = true;
    }

    if (value.HasMember("SerialNumber") && !value["SerialNumber"].IsNull())
    {
        if (!value["SerialNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.SerialNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNumber = string(value["SerialNumber"].GetString());
        m_serialNumberHasBeenSet = true;
    }

    if (value.HasMember("NetCards") && !value["NetCards"].IsNull())
    {
        if (!value["NetCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.NetCards` is not array type"));

        const rapidjson::Value &tmpValue = value["NetCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetNetworkCardInfo item;
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

    if (value.HasMember("Disks") && !value["Disks"].IsNull())
    {
        if (!value["Disks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Disks` is not array type"));

        const rapidjson::Value &tmpValue = value["Disks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetDiskPartitionInfo item;
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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceVersion") && !value["DeviceVersion"].IsNull())
    {
        if (!value["DeviceVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.DeviceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceVersion = string(value["DeviceVersion"].GetString());
        m_deviceVersionHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("CpuLoadVul") && !value["CpuLoadVul"].IsNull())
    {
        if (!value["CpuLoadVul"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.CpuLoadVul` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuLoadVul = string(value["CpuLoadVul"].GetString());
        m_cpuLoadVulHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetMachineDetail.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetMachineDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpu.c_str(), allocator).Move(), allocator);
    }

    if (m_memSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memSize, allocator);
    }

    if (m_memLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionCount, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuSize, allocator);
    }

    if (m_cpuLoadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoad.c_str(), allocator).Move(), allocator);
    }

    if (m_protectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectLevel, allocator);
    }

    if (m_riskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_protectDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectDays, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coreVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coreVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_agentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_installTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installTime.c_str(), allocator).Move(), allocator);
    }

    if (m_bootTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bootTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastLiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastLiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastLiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_producerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Producer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producer.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNumber.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_deviceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuLoadVulHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuLoadVul";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuLoadVul.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

}


string AssetMachineDetail::GetQuuid() const
{
    return m_quuid;
}

void AssetMachineDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetMachineDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetMachineDetail::GetUuid() const
{
    return m_uuid;
}

void AssetMachineDetail::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetMachineDetail::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetMachineDetail::GetMachineIp() const
{
    return m_machineIp;
}

void AssetMachineDetail::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetMachineDetail::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetMachineDetail::GetMachineName() const
{
    return m_machineName;
}

void AssetMachineDetail::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetMachineDetail::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetMachineDetail::GetOsInfo() const
{
    return m_osInfo;
}

void AssetMachineDetail::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetMachineDetail::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetMachineDetail::GetCpu() const
{
    return m_cpu;
}

void AssetMachineDetail::SetCpu(const string& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool AssetMachineDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t AssetMachineDetail::GetMemSize() const
{
    return m_memSize;
}

void AssetMachineDetail::SetMemSize(const uint64_t& _memSize)
{
    m_memSize = _memSize;
    m_memSizeHasBeenSet = true;
}

bool AssetMachineDetail::MemSizeHasBeenSet() const
{
    return m_memSizeHasBeenSet;
}

string AssetMachineDetail::GetMemLoad() const
{
    return m_memLoad;
}

void AssetMachineDetail::SetMemLoad(const string& _memLoad)
{
    m_memLoad = _memLoad;
    m_memLoadHasBeenSet = true;
}

bool AssetMachineDetail::MemLoadHasBeenSet() const
{
    return m_memLoadHasBeenSet;
}

uint64_t AssetMachineDetail::GetDiskSize() const
{
    return m_diskSize;
}

void AssetMachineDetail::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool AssetMachineDetail::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string AssetMachineDetail::GetDiskLoad() const
{
    return m_diskLoad;
}

void AssetMachineDetail::SetDiskLoad(const string& _diskLoad)
{
    m_diskLoad = _diskLoad;
    m_diskLoadHasBeenSet = true;
}

bool AssetMachineDetail::DiskLoadHasBeenSet() const
{
    return m_diskLoadHasBeenSet;
}

uint64_t AssetMachineDetail::GetPartitionCount() const
{
    return m_partitionCount;
}

void AssetMachineDetail::SetPartitionCount(const uint64_t& _partitionCount)
{
    m_partitionCount = _partitionCount;
    m_partitionCountHasBeenSet = true;
}

bool AssetMachineDetail::PartitionCountHasBeenSet() const
{
    return m_partitionCountHasBeenSet;
}

string AssetMachineDetail::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetMachineDetail::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetMachineDetail::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

uint64_t AssetMachineDetail::GetCpuSize() const
{
    return m_cpuSize;
}

void AssetMachineDetail::SetCpuSize(const uint64_t& _cpuSize)
{
    m_cpuSize = _cpuSize;
    m_cpuSizeHasBeenSet = true;
}

bool AssetMachineDetail::CpuSizeHasBeenSet() const
{
    return m_cpuSizeHasBeenSet;
}

string AssetMachineDetail::GetCpuLoad() const
{
    return m_cpuLoad;
}

void AssetMachineDetail::SetCpuLoad(const string& _cpuLoad)
{
    m_cpuLoad = _cpuLoad;
    m_cpuLoadHasBeenSet = true;
}

bool AssetMachineDetail::CpuLoadHasBeenSet() const
{
    return m_cpuLoadHasBeenSet;
}

uint64_t AssetMachineDetail::GetProtectLevel() const
{
    return m_protectLevel;
}

void AssetMachineDetail::SetProtectLevel(const uint64_t& _protectLevel)
{
    m_protectLevel = _protectLevel;
    m_protectLevelHasBeenSet = true;
}

bool AssetMachineDetail::ProtectLevelHasBeenSet() const
{
    return m_protectLevelHasBeenSet;
}

string AssetMachineDetail::GetRiskStatus() const
{
    return m_riskStatus;
}

void AssetMachineDetail::SetRiskStatus(const string& _riskStatus)
{
    m_riskStatus = _riskStatus;
    m_riskStatusHasBeenSet = true;
}

bool AssetMachineDetail::RiskStatusHasBeenSet() const
{
    return m_riskStatusHasBeenSet;
}

uint64_t AssetMachineDetail::GetProtectDays() const
{
    return m_protectDays;
}

void AssetMachineDetail::SetProtectDays(const uint64_t& _protectDays)
{
    m_protectDays = _protectDays;
    m_protectDaysHasBeenSet = true;
}

bool AssetMachineDetail::ProtectDaysHasBeenSet() const
{
    return m_protectDaysHasBeenSet;
}

string AssetMachineDetail::GetBuyTime() const
{
    return m_buyTime;
}

void AssetMachineDetail::SetBuyTime(const string& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool AssetMachineDetail::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

string AssetMachineDetail::GetEndTime() const
{
    return m_endTime;
}

void AssetMachineDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AssetMachineDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string AssetMachineDetail::GetCoreVersion() const
{
    return m_coreVersion;
}

void AssetMachineDetail::SetCoreVersion(const string& _coreVersion)
{
    m_coreVersion = _coreVersion;
    m_coreVersionHasBeenSet = true;
}

bool AssetMachineDetail::CoreVersionHasBeenSet() const
{
    return m_coreVersionHasBeenSet;
}

string AssetMachineDetail::GetOsType() const
{
    return m_osType;
}

void AssetMachineDetail::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool AssetMachineDetail::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

string AssetMachineDetail::GetAgentVersion() const
{
    return m_agentVersion;
}

void AssetMachineDetail::SetAgentVersion(const string& _agentVersion)
{
    m_agentVersion = _agentVersion;
    m_agentVersionHasBeenSet = true;
}

bool AssetMachineDetail::AgentVersionHasBeenSet() const
{
    return m_agentVersionHasBeenSet;
}

string AssetMachineDetail::GetInstallTime() const
{
    return m_installTime;
}

void AssetMachineDetail::SetInstallTime(const string& _installTime)
{
    m_installTime = _installTime;
    m_installTimeHasBeenSet = true;
}

bool AssetMachineDetail::InstallTimeHasBeenSet() const
{
    return m_installTimeHasBeenSet;
}

string AssetMachineDetail::GetBootTime() const
{
    return m_bootTime;
}

void AssetMachineDetail::SetBootTime(const string& _bootTime)
{
    m_bootTime = _bootTime;
    m_bootTimeHasBeenSet = true;
}

bool AssetMachineDetail::BootTimeHasBeenSet() const
{
    return m_bootTimeHasBeenSet;
}

string AssetMachineDetail::GetLastLiveTime() const
{
    return m_lastLiveTime;
}

void AssetMachineDetail::SetLastLiveTime(const string& _lastLiveTime)
{
    m_lastLiveTime = _lastLiveTime;
    m_lastLiveTimeHasBeenSet = true;
}

bool AssetMachineDetail::LastLiveTimeHasBeenSet() const
{
    return m_lastLiveTimeHasBeenSet;
}

string AssetMachineDetail::GetProducer() const
{
    return m_producer;
}

void AssetMachineDetail::SetProducer(const string& _producer)
{
    m_producer = _producer;
    m_producerHasBeenSet = true;
}

bool AssetMachineDetail::ProducerHasBeenSet() const
{
    return m_producerHasBeenSet;
}

string AssetMachineDetail::GetSerialNumber() const
{
    return m_serialNumber;
}

void AssetMachineDetail::SetSerialNumber(const string& _serialNumber)
{
    m_serialNumber = _serialNumber;
    m_serialNumberHasBeenSet = true;
}

bool AssetMachineDetail::SerialNumberHasBeenSet() const
{
    return m_serialNumberHasBeenSet;
}

vector<AssetNetworkCardInfo> AssetMachineDetail::GetNetCards() const
{
    return m_netCards;
}

void AssetMachineDetail::SetNetCards(const vector<AssetNetworkCardInfo>& _netCards)
{
    m_netCards = _netCards;
    m_netCardsHasBeenSet = true;
}

bool AssetMachineDetail::NetCardsHasBeenSet() const
{
    return m_netCardsHasBeenSet;
}

vector<AssetDiskPartitionInfo> AssetMachineDetail::GetDisks() const
{
    return m_disks;
}

void AssetMachineDetail::SetDisks(const vector<AssetDiskPartitionInfo>& _disks)
{
    m_disks = _disks;
    m_disksHasBeenSet = true;
}

bool AssetMachineDetail::DisksHasBeenSet() const
{
    return m_disksHasBeenSet;
}

uint64_t AssetMachineDetail::GetStatus() const
{
    return m_status;
}

void AssetMachineDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetMachineDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AssetMachineDetail::GetProjectId() const
{
    return m_projectId;
}

void AssetMachineDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetMachineDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string AssetMachineDetail::GetDeviceVersion() const
{
    return m_deviceVersion;
}

void AssetMachineDetail::SetDeviceVersion(const string& _deviceVersion)
{
    m_deviceVersion = _deviceVersion;
    m_deviceVersionHasBeenSet = true;
}

bool AssetMachineDetail::DeviceVersionHasBeenSet() const
{
    return m_deviceVersionHasBeenSet;
}

string AssetMachineDetail::GetOfflineTime() const
{
    return m_offlineTime;
}

void AssetMachineDetail::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool AssetMachineDetail::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

string AssetMachineDetail::GetInstanceId() const
{
    return m_instanceId;
}

void AssetMachineDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AssetMachineDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AssetMachineDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetMachineDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetMachineDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

MachineExtraInfo AssetMachineDetail::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetMachineDetail::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetMachineDetail::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string AssetMachineDetail::GetCpuLoadVul() const
{
    return m_cpuLoadVul;
}

void AssetMachineDetail::SetCpuLoadVul(const string& _cpuLoadVul)
{
    m_cpuLoadVul = _cpuLoadVul;
    m_cpuLoadVulHasBeenSet = true;
}

bool AssetMachineDetail::CpuLoadVulHasBeenSet() const
{
    return m_cpuLoadVulHasBeenSet;
}

string AssetMachineDetail::GetFirstTime() const
{
    return m_firstTime;
}

void AssetMachineDetail::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetMachineDetail::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

