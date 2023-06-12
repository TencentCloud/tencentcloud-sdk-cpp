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

#include <tencentcloud/dbbrain/v20191016/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_healthScoreHasBeenSet(false),
    m_productHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_volumeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_deployModeHasBeenSet(false),
    m_initFlagHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_instanceConfHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_isSupportedHasBeenSet(false),
    m_secAuditStatusHasBeenSet(false),
    m_auditPolicyStatusHasBeenSet(false),
    m_auditRunningStatusHasBeenSet(false),
    m_internalVipHasBeenSet(false),
    m_internalVportHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
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

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("HealthScore") && !value["HealthScore"].IsNull())
    {
        if (!value["HealthScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HealthScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthScore = value["HealthScore"].GetInt64();
        m_healthScoreHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
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

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
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

    if (value.HasMember("Volume") && !value["Volume"].IsNull())
    {
        if (!value["Volume"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Volume` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volume = value["Volume"].GetInt64();
        m_volumeHasBeenSet = true;
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

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
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

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("DeployMode") && !value["DeployMode"].IsNull())
    {
        if (!value["DeployMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeployMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployMode = string(value["DeployMode"].GetString());
        m_deployModeHasBeenSet = true;
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

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TaskStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetInt64();
        m_taskStatusHasBeenSet = true;
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

    if (value.HasMember("InstanceConf") && !value["InstanceConf"].IsNull())
    {
        if (!value["InstanceConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceConf.Deserialize(value["InstanceConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceConfHasBeenSet = true;
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

    if (value.HasMember("IsSupported") && !value["IsSupported"].IsNull())
    {
        if (!value["IsSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupported = value["IsSupported"].GetBool();
        m_isSupportedHasBeenSet = true;
    }

    if (value.HasMember("SecAuditStatus") && !value["SecAuditStatus"].IsNull())
    {
        if (!value["SecAuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SecAuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secAuditStatus = string(value["SecAuditStatus"].GetString());
        m_secAuditStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditPolicyStatus") && !value["AuditPolicyStatus"].IsNull())
    {
        if (!value["AuditPolicyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditPolicyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditPolicyStatus = string(value["AuditPolicyStatus"].GetString());
        m_auditPolicyStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditRunningStatus") && !value["AuditRunningStatus"].IsNull())
    {
        if (!value["AuditRunningStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditRunningStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditRunningStatus = string(value["AuditRunningStatus"].GetString());
        m_auditRunningStatusHasBeenSet = true;
    }

    if (value.HasMember("InternalVip") && !value["InternalVip"].IsNull())
    {
        if (!value["InternalVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InternalVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internalVip = string(value["InternalVip"].GetString());
        m_internalVipHasBeenSet = true;
    }

    if (value.HasMember("InternalVport") && !value["InternalVport"].IsNull())
    {
        if (!value["InternalVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InternalVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internalVport = value["InternalVport"].GetInt64();
        m_internalVportHasBeenSet = true;
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

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_healthScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthScore, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
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

    if (m_engineVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineVersion.c_str(), allocator).Move(), allocator);
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

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_deployModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployMode.c_str(), allocator).Move(), allocator);
    }

    if (m_initFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initFlag, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupported, allocator);
    }

    if (m_secAuditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecAuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secAuditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_auditPolicyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditPolicyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditPolicyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_auditRunningStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditRunningStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditRunningStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_internalVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internalVip.c_str(), allocator).Move(), allocator);
    }

    if (m_internalVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalVport, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

int64_t InstanceInfo::GetHealthScore() const
{
    return m_healthScore;
}

void InstanceInfo::SetHealthScore(const int64_t& _healthScore)
{
    m_healthScore = _healthScore;
    m_healthScoreHasBeenSet = true;
}

bool InstanceInfo::HealthScoreHasBeenSet() const
{
    return m_healthScoreHasBeenSet;
}

string InstanceInfo::GetProduct() const
{
    return m_product;
}

void InstanceInfo::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool InstanceInfo::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

int64_t InstanceInfo::GetEventCount() const
{
    return m_eventCount;
}

void InstanceInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool InstanceInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
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

string InstanceInfo::GetSource() const
{
    return m_source;
}

void InstanceInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool InstanceInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string InstanceInfo::GetGroupId() const
{
    return m_groupId;
}

void InstanceInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool InstanceInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string InstanceInfo::GetGroupName() const
{
    return m_groupName;
}

void InstanceInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool InstanceInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
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

string InstanceInfo::GetDeployMode() const
{
    return m_deployMode;
}

void InstanceInfo::SetDeployMode(const string& _deployMode)
{
    m_deployMode = _deployMode;
    m_deployModeHasBeenSet = true;
}

bool InstanceInfo::DeployModeHasBeenSet() const
{
    return m_deployModeHasBeenSet;
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

InstanceConfs InstanceInfo::GetInstanceConf() const
{
    return m_instanceConf;
}

void InstanceInfo::SetInstanceConf(const InstanceConfs& _instanceConf)
{
    m_instanceConf = _instanceConf;
    m_instanceConfHasBeenSet = true;
}

bool InstanceInfo::InstanceConfHasBeenSet() const
{
    return m_instanceConfHasBeenSet;
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

bool InstanceInfo::GetIsSupported() const
{
    return m_isSupported;
}

void InstanceInfo::SetIsSupported(const bool& _isSupported)
{
    m_isSupported = _isSupported;
    m_isSupportedHasBeenSet = true;
}

bool InstanceInfo::IsSupportedHasBeenSet() const
{
    return m_isSupportedHasBeenSet;
}

string InstanceInfo::GetSecAuditStatus() const
{
    return m_secAuditStatus;
}

void InstanceInfo::SetSecAuditStatus(const string& _secAuditStatus)
{
    m_secAuditStatus = _secAuditStatus;
    m_secAuditStatusHasBeenSet = true;
}

bool InstanceInfo::SecAuditStatusHasBeenSet() const
{
    return m_secAuditStatusHasBeenSet;
}

string InstanceInfo::GetAuditPolicyStatus() const
{
    return m_auditPolicyStatus;
}

void InstanceInfo::SetAuditPolicyStatus(const string& _auditPolicyStatus)
{
    m_auditPolicyStatus = _auditPolicyStatus;
    m_auditPolicyStatusHasBeenSet = true;
}

bool InstanceInfo::AuditPolicyStatusHasBeenSet() const
{
    return m_auditPolicyStatusHasBeenSet;
}

string InstanceInfo::GetAuditRunningStatus() const
{
    return m_auditRunningStatus;
}

void InstanceInfo::SetAuditRunningStatus(const string& _auditRunningStatus)
{
    m_auditRunningStatus = _auditRunningStatus;
    m_auditRunningStatusHasBeenSet = true;
}

bool InstanceInfo::AuditRunningStatusHasBeenSet() const
{
    return m_auditRunningStatusHasBeenSet;
}

string InstanceInfo::GetInternalVip() const
{
    return m_internalVip;
}

void InstanceInfo::SetInternalVip(const string& _internalVip)
{
    m_internalVip = _internalVip;
    m_internalVipHasBeenSet = true;
}

bool InstanceInfo::InternalVipHasBeenSet() const
{
    return m_internalVipHasBeenSet;
}

int64_t InstanceInfo::GetInternalVport() const
{
    return m_internalVport;
}

void InstanceInfo::SetInternalVport(const int64_t& _internalVport)
{
    m_internalVport = _internalVport;
    m_internalVportHasBeenSet = true;
}

bool InstanceInfo::InternalVportHasBeenSet() const
{
    return m_internalVportHasBeenSet;
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

string InstanceInfo::GetClusterId() const
{
    return m_clusterId;
}

void InstanceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InstanceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string InstanceInfo::GetClusterName() const
{
    return m_clusterName;
}

void InstanceInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool InstanceInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

