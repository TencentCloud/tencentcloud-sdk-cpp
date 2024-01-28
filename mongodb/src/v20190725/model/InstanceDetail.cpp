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

#include <tencentcloud/mongodb/v20190725/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deadLineHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_cpuNumHasBeenSet(false),
    m_machineTypeHasBeenSet(false),
    m_secondaryNumHasBeenSet(false),
    m_replicationSetNumHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_usedVolumeHasBeenSet(false),
    m_maintenanceStartHasBeenSet(false),
    m_maintenanceEndHasBeenSet(false),
    m_replicaSetsHasBeenSet(false),
    m_readonlyInstancesHasBeenSet(false),
    m_standbyInstancesHasBeenSet(false),
    m_cloneInstancesHasBeenSet(false),
    m_relatedInstanceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceVerHasBeenSet(false),
    m_clusterVerHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_realInstanceIdHasBeenSet(false),
    m_zoneListHasBeenSet(false),
    m_mongosNodeNumHasBeenSet(false),
    m_mongosMemoryHasBeenSet(false),
    m_mongosCpuNumHasBeenSet(false),
    m_configServerNodeNumHasBeenSet(false),
    m_configServerMemoryHasBeenSet(false),
    m_configServerVolumeHasBeenSet(false),
    m_configServerCpuNumHasBeenSet(false),
    m_readonlyNodeNumHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ClusterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetUint64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.NetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetUint64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Vport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetUint64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadLine") && !value["DeadLine"].IsNull())
    {
        if (!value["DeadLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.DeadLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLine = string(value["DeadLine"].GetString());
        m_deadLineHasBeenSet = true;
    }

    if (value.HasMember("MongoVersion") && !value["MongoVersion"].IsNull())
    {
        if (!value["MongoVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MongoVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersion = string(value["MongoVersion"].GetString());
        m_mongoVersionHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryNum") && !value["SecondaryNum"].IsNull())
    {
        if (!value["SecondaryNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.SecondaryNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryNum = value["SecondaryNum"].GetUint64();
        m_secondaryNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicationSetNum") && !value["ReplicationSetNum"].IsNull())
    {
        if (!value["ReplicationSetNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReplicationSetNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicationSetNum = value["ReplicationSetNum"].GetUint64();
        m_replicationSetNumHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("UsedVolume") && !value["UsedVolume"].IsNull())
    {
        if (!value["UsedVolume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UsedVolume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedVolume = value["UsedVolume"].GetUint64();
        m_usedVolumeHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceStart") && !value["MaintenanceStart"].IsNull())
    {
        if (!value["MaintenanceStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MaintenanceStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceStart = string(value["MaintenanceStart"].GetString());
        m_maintenanceStartHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceEnd") && !value["MaintenanceEnd"].IsNull())
    {
        if (!value["MaintenanceEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MaintenanceEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceEnd = string(value["MaintenanceEnd"].GetString());
        m_maintenanceEndHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSets") && !value["ReplicaSets"].IsNull())
    {
        if (!value["ReplicaSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReplicaSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ReplicaSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_replicaSets.push_back(item);
        }
        m_replicaSetsHasBeenSet = true;
    }

    if (value.HasMember("ReadonlyInstances") && !value["ReadonlyInstances"].IsNull())
    {
        if (!value["ReadonlyInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadonlyInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadonlyInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readonlyInstances.push_back(item);
        }
        m_readonlyInstancesHasBeenSet = true;
    }

    if (value.HasMember("StandbyInstances") && !value["StandbyInstances"].IsNull())
    {
        if (!value["StandbyInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.StandbyInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["StandbyInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_standbyInstances.push_back(item);
        }
        m_standbyInstancesHasBeenSet = true;
    }

    if (value.HasMember("CloneInstances") && !value["CloneInstances"].IsNull())
    {
        if (!value["CloneInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CloneInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["CloneInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloneInstances.push_back(item);
        }
        m_cloneInstancesHasBeenSet = true;
    }

    if (value.HasMember("RelatedInstance") && !value["RelatedInstance"].IsNull())
    {
        if (!value["RelatedInstance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.RelatedInstance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_relatedInstance.Deserialize(value["RelatedInstance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_relatedInstanceHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceVer") && !value["InstanceVer"].IsNull())
    {
        if (!value["InstanceVer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceVer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVer = value["InstanceVer"].GetUint64();
        m_instanceVerHasBeenSet = true;
    }

    if (value.HasMember("ClusterVer") && !value["ClusterVer"].IsNull())
    {
        if (!value["ClusterVer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ClusterVer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVer = value["ClusterVer"].GetUint64();
        m_clusterVerHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Protocol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = value["Protocol"].GetUint64();
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("RealInstanceId") && !value["RealInstanceId"].IsNull())
    {
        if (!value["RealInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.RealInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realInstanceId = string(value["RealInstanceId"].GetString());
        m_realInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneList") && !value["ZoneList"].IsNull())
    {
        if (!value["ZoneList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ZoneList` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneList.push_back((*itr).GetString());
        }
        m_zoneListHasBeenSet = true;
    }

    if (value.HasMember("MongosNodeNum") && !value["MongosNodeNum"].IsNull())
    {
        if (!value["MongosNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MongosNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongosNodeNum = value["MongosNodeNum"].GetUint64();
        m_mongosNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MongosMemory") && !value["MongosMemory"].IsNull())
    {
        if (!value["MongosMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MongosMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongosMemory = value["MongosMemory"].GetUint64();
        m_mongosMemoryHasBeenSet = true;
    }

    if (value.HasMember("MongosCpuNum") && !value["MongosCpuNum"].IsNull())
    {
        if (!value["MongosCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MongosCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongosCpuNum = value["MongosCpuNum"].GetUint64();
        m_mongosCpuNumHasBeenSet = true;
    }

    if (value.HasMember("ConfigServerNodeNum") && !value["ConfigServerNodeNum"].IsNull())
    {
        if (!value["ConfigServerNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ConfigServerNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configServerNodeNum = value["ConfigServerNodeNum"].GetUint64();
        m_configServerNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ConfigServerMemory") && !value["ConfigServerMemory"].IsNull())
    {
        if (!value["ConfigServerMemory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ConfigServerMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configServerMemory = value["ConfigServerMemory"].GetUint64();
        m_configServerMemoryHasBeenSet = true;
    }

    if (value.HasMember("ConfigServerVolume") && !value["ConfigServerVolume"].IsNull())
    {
        if (!value["ConfigServerVolume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ConfigServerVolume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configServerVolume = value["ConfigServerVolume"].GetUint64();
        m_configServerVolumeHasBeenSet = true;
    }

    if (value.HasMember("ConfigServerCpuNum") && !value["ConfigServerCpuNum"].IsNull())
    {
        if (!value["ConfigServerCpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ConfigServerCpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_configServerCpuNum = value["ConfigServerCpuNum"].GetUint64();
        m_configServerCpuNumHasBeenSet = true;
    }

    if (value.HasMember("ReadonlyNodeNum") && !value["ReadonlyNodeNum"].IsNull())
    {
        if (!value["ReadonlyNodeNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ReadonlyNodeNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_readonlyNodeNum = value["ReadonlyNodeNum"].GetUint64();
        m_readonlyNodeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterType, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLine.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_volumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volume, allocator);
    }

    if (m_cpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuNum, allocator);
    }

    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryNum, allocator);
    }

    if (m_replicationSetNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationSetNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replicationSetNum, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_usedVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedVolume, allocator);
    }

    if (m_maintenanceStartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceStart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintenanceStart.c_str(), allocator).Move(), allocator);
    }

    if (m_maintenanceEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maintenanceEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaSetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaSets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_replicaSets.begin(); itr != m_replicaSets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_readonlyInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readonlyInstances.begin(); itr != m_readonlyInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_standbyInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_standbyInstances.begin(); itr != m_standbyInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cloneInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloneInstances.begin(); itr != m_cloneInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relatedInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_relatedInstance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceVer, allocator);
    }

    if (m_clusterVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterVer, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protocol, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_instanceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_realInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneList.begin(); itr != m_zoneList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mongosNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongosNodeNum, allocator);
    }

    if (m_mongosMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongosMemory, allocator);
    }

    if (m_mongosCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongosCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongosCpuNum, allocator);
    }

    if (m_configServerNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configServerNodeNum, allocator);
    }

    if (m_configServerMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configServerMemory, allocator);
    }

    if (m_configServerVolumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerVolume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configServerVolume, allocator);
    }

    if (m_configServerCpuNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServerCpuNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configServerCpuNum, allocator);
    }

    if (m_readonlyNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadonlyNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readonlyNodeNum, allocator);
    }

}


string InstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t InstanceDetail::GetPayMode() const
{
    return m_payMode;
}

void InstanceDetail::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t InstanceDetail::GetProjectId() const
{
    return m_projectId;
}

void InstanceDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t InstanceDetail::GetClusterType() const
{
    return m_clusterType;
}

void InstanceDetail::SetClusterType(const uint64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool InstanceDetail::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string InstanceDetail::GetRegion() const
{
    return m_region;
}

void InstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceDetail::GetZone() const
{
    return m_zone;
}

void InstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t InstanceDetail::GetNetType() const
{
    return m_netType;
}

void InstanceDetail::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool InstanceDetail::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string InstanceDetail::GetVpcId() const
{
    return m_vpcId;
}

void InstanceDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceDetail::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceDetail::GetStatus() const
{
    return m_status;
}

void InstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceDetail::GetVip() const
{
    return m_vip;
}

void InstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t InstanceDetail::GetVport() const
{
    return m_vport;
}

void InstanceDetail::SetVport(const uint64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string InstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void InstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceDetail::GetDeadLine() const
{
    return m_deadLine;
}

void InstanceDetail::SetDeadLine(const string& _deadLine)
{
    m_deadLine = _deadLine;
    m_deadLineHasBeenSet = true;
}

bool InstanceDetail::DeadLineHasBeenSet() const
{
    return m_deadLineHasBeenSet;
}

string InstanceDetail::GetMongoVersion() const
{
    return m_mongoVersion;
}

void InstanceDetail::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool InstanceDetail::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

uint64_t InstanceDetail::GetMemory() const
{
    return m_memory;
}

void InstanceDetail::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool InstanceDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t InstanceDetail::GetVolume() const
{
    return m_volume;
}

void InstanceDetail::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool InstanceDetail::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t InstanceDetail::GetCpuNum() const
{
    return m_cpuNum;
}

void InstanceDetail::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool InstanceDetail::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

string InstanceDetail::GetMachineType() const
{
    return m_machineType;
}

void InstanceDetail::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool InstanceDetail::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

uint64_t InstanceDetail::GetSecondaryNum() const
{
    return m_secondaryNum;
}

void InstanceDetail::SetSecondaryNum(const uint64_t& _secondaryNum)
{
    m_secondaryNum = _secondaryNum;
    m_secondaryNumHasBeenSet = true;
}

bool InstanceDetail::SecondaryNumHasBeenSet() const
{
    return m_secondaryNumHasBeenSet;
}

uint64_t InstanceDetail::GetReplicationSetNum() const
{
    return m_replicationSetNum;
}

void InstanceDetail::SetReplicationSetNum(const uint64_t& _replicationSetNum)
{
    m_replicationSetNum = _replicationSetNum;
    m_replicationSetNumHasBeenSet = true;
}

bool InstanceDetail::ReplicationSetNumHasBeenSet() const
{
    return m_replicationSetNumHasBeenSet;
}

int64_t InstanceDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceDetail::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t InstanceDetail::GetUsedVolume() const
{
    return m_usedVolume;
}

void InstanceDetail::SetUsedVolume(const uint64_t& _usedVolume)
{
    m_usedVolume = _usedVolume;
    m_usedVolumeHasBeenSet = true;
}

bool InstanceDetail::UsedVolumeHasBeenSet() const
{
    return m_usedVolumeHasBeenSet;
}

string InstanceDetail::GetMaintenanceStart() const
{
    return m_maintenanceStart;
}

void InstanceDetail::SetMaintenanceStart(const string& _maintenanceStart)
{
    m_maintenanceStart = _maintenanceStart;
    m_maintenanceStartHasBeenSet = true;
}

bool InstanceDetail::MaintenanceStartHasBeenSet() const
{
    return m_maintenanceStartHasBeenSet;
}

string InstanceDetail::GetMaintenanceEnd() const
{
    return m_maintenanceEnd;
}

void InstanceDetail::SetMaintenanceEnd(const string& _maintenanceEnd)
{
    m_maintenanceEnd = _maintenanceEnd;
    m_maintenanceEndHasBeenSet = true;
}

bool InstanceDetail::MaintenanceEndHasBeenSet() const
{
    return m_maintenanceEndHasBeenSet;
}

vector<ShardInfo> InstanceDetail::GetReplicaSets() const
{
    return m_replicaSets;
}

void InstanceDetail::SetReplicaSets(const vector<ShardInfo>& _replicaSets)
{
    m_replicaSets = _replicaSets;
    m_replicaSetsHasBeenSet = true;
}

bool InstanceDetail::ReplicaSetsHasBeenSet() const
{
    return m_replicaSetsHasBeenSet;
}

vector<DBInstanceInfo> InstanceDetail::GetReadonlyInstances() const
{
    return m_readonlyInstances;
}

void InstanceDetail::SetReadonlyInstances(const vector<DBInstanceInfo>& _readonlyInstances)
{
    m_readonlyInstances = _readonlyInstances;
    m_readonlyInstancesHasBeenSet = true;
}

bool InstanceDetail::ReadonlyInstancesHasBeenSet() const
{
    return m_readonlyInstancesHasBeenSet;
}

vector<DBInstanceInfo> InstanceDetail::GetStandbyInstances() const
{
    return m_standbyInstances;
}

void InstanceDetail::SetStandbyInstances(const vector<DBInstanceInfo>& _standbyInstances)
{
    m_standbyInstances = _standbyInstances;
    m_standbyInstancesHasBeenSet = true;
}

bool InstanceDetail::StandbyInstancesHasBeenSet() const
{
    return m_standbyInstancesHasBeenSet;
}

vector<DBInstanceInfo> InstanceDetail::GetCloneInstances() const
{
    return m_cloneInstances;
}

void InstanceDetail::SetCloneInstances(const vector<DBInstanceInfo>& _cloneInstances)
{
    m_cloneInstances = _cloneInstances;
    m_cloneInstancesHasBeenSet = true;
}

bool InstanceDetail::CloneInstancesHasBeenSet() const
{
    return m_cloneInstancesHasBeenSet;
}

DBInstanceInfo InstanceDetail::GetRelatedInstance() const
{
    return m_relatedInstance;
}

void InstanceDetail::SetRelatedInstance(const DBInstanceInfo& _relatedInstance)
{
    m_relatedInstance = _relatedInstance;
    m_relatedInstanceHasBeenSet = true;
}

bool InstanceDetail::RelatedInstanceHasBeenSet() const
{
    return m_relatedInstanceHasBeenSet;
}

vector<TagInfo> InstanceDetail::GetTags() const
{
    return m_tags;
}

void InstanceDetail::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t InstanceDetail::GetInstanceVer() const
{
    return m_instanceVer;
}

void InstanceDetail::SetInstanceVer(const uint64_t& _instanceVer)
{
    m_instanceVer = _instanceVer;
    m_instanceVerHasBeenSet = true;
}

bool InstanceDetail::InstanceVerHasBeenSet() const
{
    return m_instanceVerHasBeenSet;
}

uint64_t InstanceDetail::GetClusterVer() const
{
    return m_clusterVer;
}

void InstanceDetail::SetClusterVer(const uint64_t& _clusterVer)
{
    m_clusterVer = _clusterVer;
    m_clusterVerHasBeenSet = true;
}

bool InstanceDetail::ClusterVerHasBeenSet() const
{
    return m_clusterVerHasBeenSet;
}

uint64_t InstanceDetail::GetProtocol() const
{
    return m_protocol;
}

void InstanceDetail::SetProtocol(const uint64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool InstanceDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t InstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceDetail::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceDetail::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void InstanceDetail::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool InstanceDetail::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

string InstanceDetail::GetRealInstanceId() const
{
    return m_realInstanceId;
}

void InstanceDetail::SetRealInstanceId(const string& _realInstanceId)
{
    m_realInstanceId = _realInstanceId;
    m_realInstanceIdHasBeenSet = true;
}

bool InstanceDetail::RealInstanceIdHasBeenSet() const
{
    return m_realInstanceIdHasBeenSet;
}

vector<string> InstanceDetail::GetZoneList() const
{
    return m_zoneList;
}

void InstanceDetail::SetZoneList(const vector<string>& _zoneList)
{
    m_zoneList = _zoneList;
    m_zoneListHasBeenSet = true;
}

bool InstanceDetail::ZoneListHasBeenSet() const
{
    return m_zoneListHasBeenSet;
}

uint64_t InstanceDetail::GetMongosNodeNum() const
{
    return m_mongosNodeNum;
}

void InstanceDetail::SetMongosNodeNum(const uint64_t& _mongosNodeNum)
{
    m_mongosNodeNum = _mongosNodeNum;
    m_mongosNodeNumHasBeenSet = true;
}

bool InstanceDetail::MongosNodeNumHasBeenSet() const
{
    return m_mongosNodeNumHasBeenSet;
}

uint64_t InstanceDetail::GetMongosMemory() const
{
    return m_mongosMemory;
}

void InstanceDetail::SetMongosMemory(const uint64_t& _mongosMemory)
{
    m_mongosMemory = _mongosMemory;
    m_mongosMemoryHasBeenSet = true;
}

bool InstanceDetail::MongosMemoryHasBeenSet() const
{
    return m_mongosMemoryHasBeenSet;
}

uint64_t InstanceDetail::GetMongosCpuNum() const
{
    return m_mongosCpuNum;
}

void InstanceDetail::SetMongosCpuNum(const uint64_t& _mongosCpuNum)
{
    m_mongosCpuNum = _mongosCpuNum;
    m_mongosCpuNumHasBeenSet = true;
}

bool InstanceDetail::MongosCpuNumHasBeenSet() const
{
    return m_mongosCpuNumHasBeenSet;
}

uint64_t InstanceDetail::GetConfigServerNodeNum() const
{
    return m_configServerNodeNum;
}

void InstanceDetail::SetConfigServerNodeNum(const uint64_t& _configServerNodeNum)
{
    m_configServerNodeNum = _configServerNodeNum;
    m_configServerNodeNumHasBeenSet = true;
}

bool InstanceDetail::ConfigServerNodeNumHasBeenSet() const
{
    return m_configServerNodeNumHasBeenSet;
}

uint64_t InstanceDetail::GetConfigServerMemory() const
{
    return m_configServerMemory;
}

void InstanceDetail::SetConfigServerMemory(const uint64_t& _configServerMemory)
{
    m_configServerMemory = _configServerMemory;
    m_configServerMemoryHasBeenSet = true;
}

bool InstanceDetail::ConfigServerMemoryHasBeenSet() const
{
    return m_configServerMemoryHasBeenSet;
}

uint64_t InstanceDetail::GetConfigServerVolume() const
{
    return m_configServerVolume;
}

void InstanceDetail::SetConfigServerVolume(const uint64_t& _configServerVolume)
{
    m_configServerVolume = _configServerVolume;
    m_configServerVolumeHasBeenSet = true;
}

bool InstanceDetail::ConfigServerVolumeHasBeenSet() const
{
    return m_configServerVolumeHasBeenSet;
}

uint64_t InstanceDetail::GetConfigServerCpuNum() const
{
    return m_configServerCpuNum;
}

void InstanceDetail::SetConfigServerCpuNum(const uint64_t& _configServerCpuNum)
{
    m_configServerCpuNum = _configServerCpuNum;
    m_configServerCpuNumHasBeenSet = true;
}

bool InstanceDetail::ConfigServerCpuNumHasBeenSet() const
{
    return m_configServerCpuNumHasBeenSet;
}

uint64_t InstanceDetail::GetReadonlyNodeNum() const
{
    return m_readonlyNodeNum;
}

void InstanceDetail::SetReadonlyNodeNum(const uint64_t& _readonlyNodeNum)
{
    m_readonlyNodeNum = _readonlyNodeNum;
    m_readonlyNodeNumHasBeenSet = true;
}

bool InstanceDetail::ReadonlyNodeNumHasBeenSet() const
{
    return m_readonlyNodeNumHasBeenSet;
}

