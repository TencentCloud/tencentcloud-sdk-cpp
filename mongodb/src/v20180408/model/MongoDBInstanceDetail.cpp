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

#include <tencentcloud/mongodb/v20180408/model/MongoDBInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20180408::Model;
using namespace std;

MongoDBInstanceDetail::MongoDBInstanceDetail() :
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
    m_realInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome MongoDBInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.PayMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetUint64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ClusterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = value["ClusterType"].GetUint64();
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.NetType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetUint64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Vport` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetUint64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadLine") && !value["DeadLine"].IsNull())
    {
        if (!value["DeadLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.DeadLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLine = string(value["DeadLine"].GetString());
        m_deadLineHasBeenSet = true;
    }

    if (value.HasMember("MongoVersion") && !value["MongoVersion"].IsNull())
    {
        if (!value["MongoVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.MongoVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongoVersion = string(value["MongoVersion"].GetString());
        m_mongoVersionHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Memory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetUint64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Volume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetUint64();
        m_volumeHasBeenSet = true;
    }

    if (value.HasMember("CpuNum") && !value["CpuNum"].IsNull())
    {
        if (!value["CpuNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.CpuNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuNum = value["CpuNum"].GetUint64();
        m_cpuNumHasBeenSet = true;
    }

    if (value.HasMember("MachineType") && !value["MachineType"].IsNull())
    {
        if (!value["MachineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.MachineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineType = string(value["MachineType"].GetString());
        m_machineTypeHasBeenSet = true;
    }

    if (value.HasMember("SecondaryNum") && !value["SecondaryNum"].IsNull())
    {
        if (!value["SecondaryNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.SecondaryNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryNum = value["SecondaryNum"].GetUint64();
        m_secondaryNumHasBeenSet = true;
    }

    if (value.HasMember("ReplicationSetNum") && !value["ReplicationSetNum"].IsNull())
    {
        if (!value["ReplicationSetNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ReplicationSetNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_replicationSetNum = value["ReplicationSetNum"].GetUint64();
        m_replicationSetNumHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("UsedVolume") && !value["UsedVolume"].IsNull())
    {
        if (!value["UsedVolume"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.UsedVolume` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedVolume = value["UsedVolume"].GetUint64();
        m_usedVolumeHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceStart") && !value["MaintenanceStart"].IsNull())
    {
        if (!value["MaintenanceStart"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.MaintenanceStart` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceStart = string(value["MaintenanceStart"].GetString());
        m_maintenanceStartHasBeenSet = true;
    }

    if (value.HasMember("MaintenanceEnd") && !value["MaintenanceEnd"].IsNull())
    {
        if (!value["MaintenanceEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.MaintenanceEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maintenanceEnd = string(value["MaintenanceEnd"].GetString());
        m_maintenanceEndHasBeenSet = true;
    }

    if (value.HasMember("ReplicaSets") && !value["ReplicaSets"].IsNull())
    {
        if (!value["ReplicaSets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ReplicaSets` is not array type"));

        const rapidjson::Value &tmpValue = value["ReplicaSets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongodbShardInfo item;
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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ReadonlyInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadonlyInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBInstance item;
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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.StandbyInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["StandbyInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBInstance item;
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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.CloneInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["CloneInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MongoDBInstance item;
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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.RelatedInstance` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Tags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.InstanceVer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVer = value["InstanceVer"].GetUint64();
        m_instanceVerHasBeenSet = true;
    }

    if (value.HasMember("ClusterVer") && !value["ClusterVer"].IsNull())
    {
        if (!value["ClusterVer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.ClusterVer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVer = value["ClusterVer"].GetUint64();
        m_clusterVerHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.Protocol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = value["Protocol"].GetUint64();
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.InstanceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetUint64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("RealInstanceId") && !value["RealInstanceId"].IsNull())
    {
        if (!value["RealInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MongoDBInstanceDetail.RealInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realInstanceId = string(value["RealInstanceId"].GetString());
        m_realInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MongoDBInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string MongoDBInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void MongoDBInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MongoDBInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MongoDBInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void MongoDBInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MongoDBInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetPayMode() const
{
    return m_payMode;
}

void MongoDBInstanceDetail::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool MongoDBInstanceDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetProjectId() const
{
    return m_projectId;
}

void MongoDBInstanceDetail::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MongoDBInstanceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetClusterType() const
{
    return m_clusterType;
}

void MongoDBInstanceDetail::SetClusterType(const uint64_t& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool MongoDBInstanceDetail::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string MongoDBInstanceDetail::GetRegion() const
{
    return m_region;
}

void MongoDBInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool MongoDBInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string MongoDBInstanceDetail::GetZone() const
{
    return m_zone;
}

void MongoDBInstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool MongoDBInstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetNetType() const
{
    return m_netType;
}

void MongoDBInstanceDetail::SetNetType(const uint64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool MongoDBInstanceDetail::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string MongoDBInstanceDetail::GetVpcId() const
{
    return m_vpcId;
}

void MongoDBInstanceDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MongoDBInstanceDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MongoDBInstanceDetail::GetSubnetId() const
{
    return m_subnetId;
}

void MongoDBInstanceDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool MongoDBInstanceDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t MongoDBInstanceDetail::GetStatus() const
{
    return m_status;
}

void MongoDBInstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MongoDBInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MongoDBInstanceDetail::GetVip() const
{
    return m_vip;
}

void MongoDBInstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool MongoDBInstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetVport() const
{
    return m_vport;
}

void MongoDBInstanceDetail::SetVport(const uint64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool MongoDBInstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string MongoDBInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void MongoDBInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MongoDBInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MongoDBInstanceDetail::GetDeadLine() const
{
    return m_deadLine;
}

void MongoDBInstanceDetail::SetDeadLine(const string& _deadLine)
{
    m_deadLine = _deadLine;
    m_deadLineHasBeenSet = true;
}

bool MongoDBInstanceDetail::DeadLineHasBeenSet() const
{
    return m_deadLineHasBeenSet;
}

string MongoDBInstanceDetail::GetMongoVersion() const
{
    return m_mongoVersion;
}

void MongoDBInstanceDetail::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool MongoDBInstanceDetail::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetMemory() const
{
    return m_memory;
}

void MongoDBInstanceDetail::SetMemory(const uint64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool MongoDBInstanceDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetVolume() const
{
    return m_volume;
}

void MongoDBInstanceDetail::SetVolume(const uint64_t& _volume)
{
    m_volume = _volume;
    m_volumeHasBeenSet = true;
}

bool MongoDBInstanceDetail::VolumeHasBeenSet() const
{
    return m_volumeHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetCpuNum() const
{
    return m_cpuNum;
}

void MongoDBInstanceDetail::SetCpuNum(const uint64_t& _cpuNum)
{
    m_cpuNum = _cpuNum;
    m_cpuNumHasBeenSet = true;
}

bool MongoDBInstanceDetail::CpuNumHasBeenSet() const
{
    return m_cpuNumHasBeenSet;
}

string MongoDBInstanceDetail::GetMachineType() const
{
    return m_machineType;
}

void MongoDBInstanceDetail::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool MongoDBInstanceDetail::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetSecondaryNum() const
{
    return m_secondaryNum;
}

void MongoDBInstanceDetail::SetSecondaryNum(const uint64_t& _secondaryNum)
{
    m_secondaryNum = _secondaryNum;
    m_secondaryNumHasBeenSet = true;
}

bool MongoDBInstanceDetail::SecondaryNumHasBeenSet() const
{
    return m_secondaryNumHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetReplicationSetNum() const
{
    return m_replicationSetNum;
}

void MongoDBInstanceDetail::SetReplicationSetNum(const uint64_t& _replicationSetNum)
{
    m_replicationSetNum = _replicationSetNum;
    m_replicationSetNumHasBeenSet = true;
}

bool MongoDBInstanceDetail::ReplicationSetNumHasBeenSet() const
{
    return m_replicationSetNumHasBeenSet;
}

int64_t MongoDBInstanceDetail::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void MongoDBInstanceDetail::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool MongoDBInstanceDetail::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetUsedVolume() const
{
    return m_usedVolume;
}

void MongoDBInstanceDetail::SetUsedVolume(const uint64_t& _usedVolume)
{
    m_usedVolume = _usedVolume;
    m_usedVolumeHasBeenSet = true;
}

bool MongoDBInstanceDetail::UsedVolumeHasBeenSet() const
{
    return m_usedVolumeHasBeenSet;
}

string MongoDBInstanceDetail::GetMaintenanceStart() const
{
    return m_maintenanceStart;
}

void MongoDBInstanceDetail::SetMaintenanceStart(const string& _maintenanceStart)
{
    m_maintenanceStart = _maintenanceStart;
    m_maintenanceStartHasBeenSet = true;
}

bool MongoDBInstanceDetail::MaintenanceStartHasBeenSet() const
{
    return m_maintenanceStartHasBeenSet;
}

string MongoDBInstanceDetail::GetMaintenanceEnd() const
{
    return m_maintenanceEnd;
}

void MongoDBInstanceDetail::SetMaintenanceEnd(const string& _maintenanceEnd)
{
    m_maintenanceEnd = _maintenanceEnd;
    m_maintenanceEndHasBeenSet = true;
}

bool MongoDBInstanceDetail::MaintenanceEndHasBeenSet() const
{
    return m_maintenanceEndHasBeenSet;
}

vector<MongodbShardInfo> MongoDBInstanceDetail::GetReplicaSets() const
{
    return m_replicaSets;
}

void MongoDBInstanceDetail::SetReplicaSets(const vector<MongodbShardInfo>& _replicaSets)
{
    m_replicaSets = _replicaSets;
    m_replicaSetsHasBeenSet = true;
}

bool MongoDBInstanceDetail::ReplicaSetsHasBeenSet() const
{
    return m_replicaSetsHasBeenSet;
}

vector<MongoDBInstance> MongoDBInstanceDetail::GetReadonlyInstances() const
{
    return m_readonlyInstances;
}

void MongoDBInstanceDetail::SetReadonlyInstances(const vector<MongoDBInstance>& _readonlyInstances)
{
    m_readonlyInstances = _readonlyInstances;
    m_readonlyInstancesHasBeenSet = true;
}

bool MongoDBInstanceDetail::ReadonlyInstancesHasBeenSet() const
{
    return m_readonlyInstancesHasBeenSet;
}

vector<MongoDBInstance> MongoDBInstanceDetail::GetStandbyInstances() const
{
    return m_standbyInstances;
}

void MongoDBInstanceDetail::SetStandbyInstances(const vector<MongoDBInstance>& _standbyInstances)
{
    m_standbyInstances = _standbyInstances;
    m_standbyInstancesHasBeenSet = true;
}

bool MongoDBInstanceDetail::StandbyInstancesHasBeenSet() const
{
    return m_standbyInstancesHasBeenSet;
}

vector<MongoDBInstance> MongoDBInstanceDetail::GetCloneInstances() const
{
    return m_cloneInstances;
}

void MongoDBInstanceDetail::SetCloneInstances(const vector<MongoDBInstance>& _cloneInstances)
{
    m_cloneInstances = _cloneInstances;
    m_cloneInstancesHasBeenSet = true;
}

bool MongoDBInstanceDetail::CloneInstancesHasBeenSet() const
{
    return m_cloneInstancesHasBeenSet;
}

MongoDBInstance MongoDBInstanceDetail::GetRelatedInstance() const
{
    return m_relatedInstance;
}

void MongoDBInstanceDetail::SetRelatedInstance(const MongoDBInstance& _relatedInstance)
{
    m_relatedInstance = _relatedInstance;
    m_relatedInstanceHasBeenSet = true;
}

bool MongoDBInstanceDetail::RelatedInstanceHasBeenSet() const
{
    return m_relatedInstanceHasBeenSet;
}

vector<TagInfo> MongoDBInstanceDetail::GetTags() const
{
    return m_tags;
}

void MongoDBInstanceDetail::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MongoDBInstanceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetInstanceVer() const
{
    return m_instanceVer;
}

void MongoDBInstanceDetail::SetInstanceVer(const uint64_t& _instanceVer)
{
    m_instanceVer = _instanceVer;
    m_instanceVerHasBeenSet = true;
}

bool MongoDBInstanceDetail::InstanceVerHasBeenSet() const
{
    return m_instanceVerHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetClusterVer() const
{
    return m_clusterVer;
}

void MongoDBInstanceDetail::SetClusterVer(const uint64_t& _clusterVer)
{
    m_clusterVer = _clusterVer;
    m_clusterVerHasBeenSet = true;
}

bool MongoDBInstanceDetail::ClusterVerHasBeenSet() const
{
    return m_clusterVerHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetProtocol() const
{
    return m_protocol;
}

void MongoDBInstanceDetail::SetProtocol(const uint64_t& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool MongoDBInstanceDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t MongoDBInstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void MongoDBInstanceDetail::SetInstanceType(const uint64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool MongoDBInstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string MongoDBInstanceDetail::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void MongoDBInstanceDetail::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool MongoDBInstanceDetail::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

string MongoDBInstanceDetail::GetRealInstanceId() const
{
    return m_realInstanceId;
}

void MongoDBInstanceDetail::SetRealInstanceId(const string& _realInstanceId)
{
    m_realInstanceId = _realInstanceId;
    m_realInstanceIdHasBeenSet = true;
}

bool MongoDBInstanceDetail::RealInstanceIdHasBeenSet() const
{
    return m_realInstanceIdHasBeenSet;
}

