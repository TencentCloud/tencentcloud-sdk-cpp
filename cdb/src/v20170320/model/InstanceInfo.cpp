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

#include <tencentcloud/cdb/v20170320/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_wanStatusHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_initFlagHasBeenSet(false),
    m_roVipInfoHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_slaveInfoHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_protectModeHasBeenSet(false),
    m_roGroupsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_masterInfoHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_drInfoHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_cdbErrorHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_physicalIdHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_deviceClassHasBeenSet(false),
    m_deployGroupIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_instanceNodesHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_maxDelayTimeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_expandCpuHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_analysisNodeInfosHasBeenSet(false),
    m_deviceBandwidthHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = value["WanStatus"].GetInt64();
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InitFlag") && !value["InitFlag"].IsNull())
    {
        if (!value["InitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initFlag = value["InitFlag"].GetInt64();
        m_initFlagHasBeenSet = true;
    }

    if (value.HasMember("RoVipInfo") && !value["RoVipInfo"].IsNull())
    {
        if (!value["RoVipInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RoVipInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_roVipInfo.Deserialize(value["RoVipInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_roVipInfoHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SlaveInfo") && !value["SlaveInfo"].IsNull())
    {
        if (!value["SlaveInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SlaveInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slaveInfo.Deserialize(value["SlaveInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slaveInfoHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Volume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetInt64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoRenew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetInt64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("ProtectMode") && !value["ProtectMode"].IsNull())
    {
        if (!value["ProtectMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProtectMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectMode = value["ProtectMode"].GetInt64();
        m_protectModeHasBeenSet = true;
    }

    if (value.HasMember("RoGroups") && !value["RoGroups"].IsNull())
    {
        if (!value["RoGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RoGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["RoGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roGroups.push_back(item);
        }
        m_roGroupsHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeployMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = value["DeployMode"].GetInt64();
        m_deployModeHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("MasterInfo") && !value["MasterInfo"].IsNull())
    {
        if (!value["MasterInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MasterInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_masterInfo.Deserialize(value["MasterInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_masterInfoHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("EngineVersion") && !value["EngineVersion"].IsNull())
    {
        if (!value["EngineVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EngineVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineVersion = string(value["EngineVersion"].GetString());
        m_engineVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("DrInfo") && !value["DrInfo"].IsNull())
    {
        if (!value["DrInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DrInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DrInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_drInfo.push_back(item);
        }
        m_drInfoHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = value["PayType"].GetInt64();
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CdbError") && !value["CdbError"].IsNull())
    {
        if (!value["CdbError"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CdbError` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdbError = value["CdbError"].GetInt64();
        m_cdbErrorHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("PhysicalId") && !value["PhysicalId"].IsNull())
    {
        if (!value["PhysicalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PhysicalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalId = string(value["PhysicalId"].GetString());
        m_physicalIdHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceClass") && !value["DeviceClass"].IsNull())
    {
        if (!value["DeviceClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeviceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceClass = string(value["DeviceClass"].GetString());
        m_deviceClassHasBeenSet = true;
    }

    if (value.HasMember("DeployGroupId") && !value["DeployGroupId"].IsNull())
    {
        if (!value["DeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployGroupId = string(value["DeployGroupId"].GetString());
        m_deployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceNodes") && !value["InstanceNodes"].IsNull())
    {
        if (!value["InstanceNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNodes = value["InstanceNodes"].GetInt64();
        m_instanceNodesHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfoItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxDelayTime") && !value["MaxDelayTime"].IsNull())
    {
        if (!value["MaxDelayTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MaxDelayTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDelayTime = value["MaxDelayTime"].GetInt64();
        m_maxDelayTimeHasBeenSet = true;
    }

    if (value.HasMember("DiskType") && !value["DiskType"].IsNull())
    {
        if (!value["DiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskType = string(value["DiskType"].GetString());
        m_diskTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpandCpu") && !value["ExpandCpu"].IsNull())
    {
        if (!value["ExpandCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpandCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandCpu = value["ExpandCpu"].GetInt64();
        m_expandCpuHasBeenSet = true;
    }

    if (value.HasMember("ClusterInfo") && !value["ClusterInfo"].IsNull())
    {
        if (!value["ClusterInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClusterInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ClusterInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterInfo.push_back(item);
        }
        m_clusterInfoHasBeenSet = true;
    }

    if (value.HasMember("AnalysisNodeInfos") && !value["AnalysisNodeInfos"].IsNull())
    {
        if (!value["AnalysisNodeInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AnalysisNodeInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalysisNodeInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisNodeInfos.push_back(item);
        }
        m_analysisNodeInfosHasBeenSet = true;
    }

    if (value.HasMember("DeviceBandwidth") && !value["DeviceBandwidth"].IsNull())
    {
        if (!value["DeviceBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeviceBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceBandwidth = value["DeviceBandwidth"].GetUint64();
        m_deviceBandwidthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanStatus, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_initFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initFlag, allocator);
    }

    if (m_roVipInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVipInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_roVipInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_slaveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slaveInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_protectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectMode, allocator);
    }

    if (m_roGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roGroups.begin(); itr != m_roGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployMode, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_masterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_masterInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_drInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_drInfo.begin(); itr != m_drInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_cdbErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdbError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdbError, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalId.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_deployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_instanceNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNodes, allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDelayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDelayTime, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_expandCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandCpu, allocator);
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterInfo.begin(); itr != m_clusterInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_analysisNodeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisNodeInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisNodeInfos.begin(); itr != m_analysisNodeInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceBandwidth, allocator);
    }

}


int64_t InstanceInfo::GetWanStatus() const
{
    return m_wanStatus;
}

void InstanceInfo::SetWanStatus(const int64_t& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool InstanceInfo::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t InstanceInfo::GetInitFlag() const
{
    return m_initFlag;
}

void InstanceInfo::SetInitFlag(const int64_t& _initFlag)
{
    m_initFlag = _initFlag;
    m_initFlagHasBeenSet = true;
}

bool InstanceInfo::InitFlagHasBeenSet() const
{
    return m_initFlagHasBeenSet;
}

RoVipInfo InstanceInfo::GetRoVipInfo() const
{
    return m_roVipInfo;
}

void InstanceInfo::SetRoVipInfo(const RoVipInfo& _roVipInfo)
{
    m_roVipInfo = _roVipInfo;
    m_roVipInfoHasBeenSet = true;
}

bool InstanceInfo::RoVipInfoHasBeenSet() const
{
    return m_roVipInfoHasBeenSet;
}

int64_t InstanceInfo::GetMemory() const
{
    return m_memory;
}

void InstanceInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

SlaveInfo InstanceInfo::GetSlaveInfo() const
{
    return m_slaveInfo;
}

void InstanceInfo::SetSlaveInfo(const SlaveInfo& _slaveInfo)
{
    m_slaveInfo = _slaveInfo;
    m_slaveInfoHasBeenSet = true;
}

bool InstanceInfo::SlaveInfoHasBeenSet() const
{
    return m_slaveInfoHasBeenSet;
}

string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceInfo::GetVolume() const
{
    return m_volume;
}

void InstanceInfo::SetVolume(const int64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool InstanceInfo::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

int64_t InstanceInfo::GetAutoRenew() const
{
    return m_autoRenew;
}

void InstanceInfo::SetAutoRenew(const int64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool InstanceInfo::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

int64_t InstanceInfo::GetProtectMode() const
{
    return m_protectMode;
}

void InstanceInfo::SetProtectMode(const int64_t& _protectMode)
{
    m_protectMode = _protectMode;
    m_protectModeHasBeenSet = true;
}

bool InstanceInfo::ProtectModeHasBeenSet() const
{
    return m_protectModeHasBeenSet;
}

vector<RoGroup> InstanceInfo::GetRoGroups() const
{
    return m_roGroups;
}

void InstanceInfo::SetRoGroups(const vector<RoGroup>& _roGroups)
{
    m_roGroups = _roGroups;
    m_roGroupsHasBeenSet = true;
}

bool InstanceInfo::RoGroupsHasBeenSet() const
{
    return m_roGroupsHasBeenSet;
}

int64_t InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

int64_t InstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void InstanceInfo::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool InstanceInfo::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

int64_t InstanceInfo::GetDeployMode() const
{
    return m_deployMode;
}

void InstanceInfo::SetDeployMode(const int64_t& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool InstanceInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
}

int64_t InstanceInfo::GetTaskStatus() const
{
    return m_taskStatus;
}

void InstanceInfo::SetTaskStatus(const int64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool InstanceInfo::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

MasterInfo InstanceInfo::GetMasterInfo() const
{
    return m_masterInfo;
}

void InstanceInfo::SetMasterInfo(const MasterInfo& _masterInfo)
{
    m_masterInfo = _masterInfo;
    m_masterInfoHasBeenSet = true;
}

bool InstanceInfo::MasterInfoHasBeenSet() const
{
    return m_masterInfoHasBeenSet;
}

string InstanceInfo::GetDeviceType() const
{
    return m_deviceType;
}

void InstanceInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool InstanceInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string InstanceInfo::GetEngineVersion() const
{
    return m_engineVersion;
}

void InstanceInfo::SetEngineVersion(const string& _engineVersion)
{
    m_engineVersion = _engineVersion;
    m_engineVersionHasBeenSet = true;
}

bool InstanceInfo::EngineVersionHasBeenSet() const
{
    return m_engineVersionHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<DrInfo> InstanceInfo::GetDrInfo() const
{
    return m_drInfo;
}

void InstanceInfo::SetDrInfo(const vector<DrInfo>& _drInfo)
{
    m_drInfo = _drInfo;
    m_drInfoHasBeenSet = true;
}

bool InstanceInfo::DrInfoHasBeenSet() const
{
    return m_drInfoHasBeenSet;
}

string InstanceInfo::GetWanDomain() const
{
    return m_wanDomain;
}

void InstanceInfo::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool InstanceInfo::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

int64_t InstanceInfo::GetWanPort() const
{
    return m_wanPort;
}

void InstanceInfo::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool InstanceInfo::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

int64_t InstanceInfo::GetPayType() const
{
    return m_payType;
}

void InstanceInfo::SetPayType(const int64_t& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool InstanceInfo::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceInfo::GetVip() const
{
    return m_vip;
}

void InstanceInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t InstanceInfo::GetVport() const
{
    return m_vport;
}

void InstanceInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t InstanceInfo::GetCdbError() const
{
    return m_cdbError;
}

void InstanceInfo::SetCdbError(const int64_t& _cdbError)
{
    m_cdbError = _cdbError;
    m_cdbErrorHasBeenSet = true;
}

bool InstanceInfo::CdbErrorHasBeenSet() const
{
    return m_cdbErrorHasBeenSet;
}

string InstanceInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void InstanceInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool InstanceInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string InstanceInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void InstanceInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool InstanceInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string InstanceInfo::GetPhysicalId() const
{
    return m_physicalId;
}

void InstanceInfo::SetPhysicalId(const string& _physicalId)
{
    m_physicalId = _physicalId;
    m_physicalIdHasBeenSet = true;
}

bool InstanceInfo::PhysicalIdHasBeenSet() const
{
    return m_physicalIdHasBeenSet;
}

int64_t InstanceInfo::GetCpu() const
{
    return m_cpu;
}

void InstanceInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t InstanceInfo::GetQps() const
{
    return m_qps;
}

void InstanceInfo::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool InstanceInfo::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string InstanceInfo::GetZoneName() const
{
    return m_zoneName;
}

void InstanceInfo::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool InstanceInfo::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string InstanceInfo::GetDeviceClass() const
{
    return m_deviceClass;
}

void InstanceInfo::SetDeviceClass(const string& _deviceClass)
{
    m_deviceClass = _deviceClass;
    m_deviceClassHasBeenSet = true;
}

bool InstanceInfo::DeviceClassHasBeenSet() const
{
    return m_deviceClassHasBeenSet;
}

string InstanceInfo::GetDeployGroupId() const
{
    return m_deployGroupId;
}

void InstanceInfo::SetDeployGroupId(const string& _deployGroupId)
{
    m_deployGroupId = _deployGroupId;
    m_deployGroupIdHasBeenSet = true;
}

bool InstanceInfo::DeployGroupIdHasBeenSet() const
{
    return m_deployGroupIdHasBeenSet;
}

int64_t InstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void InstanceInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InstanceInfo::GetInstanceNodes() const
{
    return m_instanceNodes;
}

void InstanceInfo::SetInstanceNodes(const int64_t& _instanceNodes)
{
    m_instanceNodes = _instanceNodes;
    m_instanceNodesHasBeenSet = true;
}

bool InstanceInfo::InstanceNodesHasBeenSet() const
{
    return m_instanceNodesHasBeenSet;
}

vector<TagInfoItem> InstanceInfo::GetTagList() const
{
    return m_tagList;
}

void InstanceInfo::SetTagList(const vector<TagInfoItem>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool InstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string InstanceInfo::GetEngineType() const
{
    return m_engineType;
}

void InstanceInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool InstanceInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

int64_t InstanceInfo::GetMaxDelayTime() const
{
    return m_maxDelayTime;
}

void InstanceInfo::SetMaxDelayTime(const int64_t& _maxDelayTime)
{
    m_maxDelayTime = _maxDelayTime;
    m_maxDelayTimeHasBeenSet = true;
}

bool InstanceInfo::MaxDelayTimeHasBeenSet() const
{
    return m_maxDelayTimeHasBeenSet;
}

string InstanceInfo::GetDiskType() const
{
    return m_diskType;
}

void InstanceInfo::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool InstanceInfo::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

int64_t InstanceInfo::GetExpandCpu() const
{
    return m_expandCpu;
}

void InstanceInfo::SetExpandCpu(const int64_t& _expandCpu)
{
    m_expandCpu = _expandCpu;
    m_expandCpuHasBeenSet = true;
}

bool InstanceInfo::ExpandCpuHasBeenSet() const
{
    return m_expandCpuHasBeenSet;
}

vector<ClusterInfo> InstanceInfo::GetClusterInfo() const
{
    return m_clusterInfo;
}

void InstanceInfo::SetClusterInfo(const vector<ClusterInfo>& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool InstanceInfo::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

vector<AnalysisNodeInfo> InstanceInfo::GetAnalysisNodeInfos() const
{
    return m_analysisNodeInfos;
}

void InstanceInfo::SetAnalysisNodeInfos(const vector<AnalysisNodeInfo>& _analysisNodeInfos)
{
    m_analysisNodeInfos = _analysisNodeInfos;
    m_analysisNodeInfosHasBeenSet = true;
}

bool InstanceInfo::AnalysisNodeInfosHasBeenSet() const
{
    return m_analysisNodeInfosHasBeenSet;
}

uint64_t InstanceInfo::GetDeviceBandwidth() const
{
    return m_deviceBandwidth;
}

void InstanceInfo::SetDeviceBandwidth(const uint64_t& _deviceBandwidth)
{
    m_deviceBandwidth = _deviceBandwidth;
    m_deviceBandwidthHasBeenSet = true;
}

bool InstanceInfo::DeviceBandwidthHasBeenSet() const
{
    return m_deviceBandwidthHasBeenSet;
}

