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

#include <tencentcloud/cynosdb/v20190107/model/ClusterInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ClusterInstanceDetail::ClusterInstanceDetail() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_instanceStatusDescHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_instanceCpuHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceMemoryHasBeenSet(false),
    m_instanceStorageHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_maintainStartTimeHasBeenSet(false),
    m_maintainDurationHasBeenSet(false),
    m_maintainWeekDaysHasBeenSet(false),
    m_instanceTasksHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceDeviceTypeHasBeenSet(false),
    m_instanceStorageTypeHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_serverlessStatusHasBeenSet(false),
    m_aIOptimizerStatusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_destroyDeadlineTextHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_wanIPHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_instanceNetInfoHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_processingTaskHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_instanceAbilityHasBeenSet(false),
    m_gdnIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatusDesc") && !value["InstanceStatusDesc"].IsNull())
    {
        if (!value["InstanceStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatusDesc = string(value["InstanceStatusDesc"].GetString());
        m_instanceStatusDescHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("InstanceCpu") && !value["InstanceCpu"].IsNull())
    {
        if (!value["InstanceCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCpu = value["InstanceCpu"].GetInt64();
        m_instanceCpuHasBeenSet = true;
    }

    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.MinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetDouble();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.MaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetDouble();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceMemory") && !value["InstanceMemory"].IsNull())
    {
        if (!value["InstanceMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMemory = value["InstanceMemory"].GetInt64();
        m_instanceMemoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorage") && !value["InstanceStorage"].IsNull())
    {
        if (!value["InstanceStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorage = value["InstanceStorage"].GetInt64();
        m_instanceStorageHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("MaintainStartTime") && !value["MaintainStartTime"].IsNull())
    {
        if (!value["MaintainStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.MaintainStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainStartTime = value["MaintainStartTime"].GetInt64();
        m_maintainStartTimeHasBeenSet = true;
    }

    if (value.HasMember("MaintainDuration") && !value["MaintainDuration"].IsNull())
    {
        if (!value["MaintainDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.MaintainDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maintainDuration = value["MaintainDuration"].GetInt64();
        m_maintainDurationHasBeenSet = true;
    }

    if (value.HasMember("MaintainWeekDays") && !value["MaintainWeekDays"].IsNull())
    {
        if (!value["MaintainWeekDays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.MaintainWeekDays` is not array type"));

        const rapidjson::Value &tmpValue = value["MaintainWeekDays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_maintainWeekDays.push_back((*itr).GetString());
        }
        m_maintainWeekDaysHasBeenSet = true;
    }

    if (value.HasMember("InstanceTasks") && !value["InstanceTasks"].IsNull())
    {
        if (!value["InstanceTasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceTasks` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTasks.push_back(item);
        }
        m_instanceTasksHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceDeviceType") && !value["InstanceDeviceType"].IsNull())
    {
        if (!value["InstanceDeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceDeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceDeviceType = string(value["InstanceDeviceType"].GetString());
        m_instanceDeviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorageType") && !value["InstanceStorageType"].IsNull())
    {
        if (!value["InstanceStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorageType = string(value["InstanceStorageType"].GetString());
        m_instanceStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.NodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodeList.push_back((*itr).GetString());
        }
        m_nodeListHasBeenSet = true;
    }

    if (value.HasMember("ServerlessStatus") && !value["ServerlessStatus"].IsNull())
    {
        if (!value["ServerlessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ServerlessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessStatus = string(value["ServerlessStatus"].GetString());
        m_serverlessStatusHasBeenSet = true;
    }

    if (value.HasMember("AIOptimizerStatus") && !value["AIOptimizerStatus"].IsNull())
    {
        if (!value["AIOptimizerStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.AIOptimizerStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aIOptimizerStatus.Deserialize(value["AIOptimizerStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aIOptimizerStatusHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StoragePayMode") && !value["StoragePayMode"].IsNull())
    {
        if (!value["StoragePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.StoragePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storagePayMode = value["StoragePayMode"].GetInt64();
        m_storagePayModeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DestroyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = string(value["DestroyTime"].GetString());
        m_destroyTimeHasBeenSet = true;
    }

    if (value.HasMember("DestroyDeadlineText") && !value["DestroyDeadlineText"].IsNull())
    {
        if (!value["DestroyDeadlineText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.DestroyDeadlineText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyDeadlineText = string(value["DestroyDeadlineText"].GetString());
        m_destroyDeadlineTextHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.NetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetInt64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.WanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = string(value["WanStatus"].GetString());
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("InstanceNetInfo") && !value["InstanceNetInfo"].IsNull())
    {
        if (!value["InstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNetInfo.push_back(item);
        }
        m_instanceNetInfoHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProcessingTask") && !value["ProcessingTask"].IsNull())
    {
        if (!value["ProcessingTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ProcessingTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processingTask = string(value["ProcessingTask"].GetString());
        m_processingTaskHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.Tasks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tasks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ObjectTask item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tasks.push_back(item);
        }
        m_tasksHasBeenSet = true;
    }

    if (value.HasMember("IsFreeze") && !value["IsFreeze"].IsNull())
    {
        if (!value["IsFreeze"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourceTags.push_back(item);
        }
        m_resourceTagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceAbility") && !value["InstanceAbility"].IsNull())
    {
        if (!value["InstanceAbility"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.InstanceAbility` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAbility.Deserialize(value["InstanceAbility"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAbilityHasBeenSet = true;
    }

    if (value.HasMember("GdnId") && !value["GdnId"].IsNull())
    {
        if (!value["GdnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterInstanceDetail.GdnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnId = string(value["GdnId"].GetString());
        m_gdnIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_instanceCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCpu, allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceMemory, allocator);
    }

    if (m_instanceStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStorage, allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_maintainStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainStartTime, allocator);
    }

    if (m_maintainDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maintainDuration, allocator);
    }

    if (m_maintainWeekDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintainWeekDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_maintainWeekDays.begin(); itr != m_maintainWeekDays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTasks.begin(); itr != m_instanceTasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceDeviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceDeviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeList.begin(); itr != m_nodeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_serverlessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_aIOptimizerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIOptimizerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aIOptimizerStatus.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalZone.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_storageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageId.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storagePayMode, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyDeadlineTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyDeadlineText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyDeadlineText.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
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

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

    if (m_wanIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIP.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNetInfo.begin(); itr != m_instanceNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_processingTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processingTask.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isFreezeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFreeze";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFreeze.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceAbilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAbility.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

}


string ClusterInstanceDetail::GetUin() const
{
    return m_uin;
}

void ClusterInstanceDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ClusterInstanceDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t ClusterInstanceDetail::GetAppId() const
{
    return m_appId;
}

void ClusterInstanceDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ClusterInstanceDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ClusterInstanceDetail::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInstanceDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInstanceDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInstanceDetail::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInstanceDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInstanceDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void ClusterInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void ClusterInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void ClusterInstanceDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ClusterInstanceDetail::GetStatus() const
{
    return m_status;
}

void ClusterInstanceDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void ClusterInstanceDetail::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string ClusterInstanceDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void ClusterInstanceDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool ClusterInstanceDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceStatusDesc() const
{
    return m_instanceStatusDesc;
}

void ClusterInstanceDetail::SetInstanceStatusDesc(const string& _instanceStatusDesc)
{
    m_instanceStatusDesc = _instanceStatusDesc;
    m_instanceStatusDescHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStatusDescHasBeenSet() const
{
    return m_instanceStatusDescHasBeenSet;
}

int64_t ClusterInstanceDetail::GetCpu() const
{
    return m_cpu;
}

void ClusterInstanceDetail::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool ClusterInstanceDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceCpu() const
{
    return m_instanceCpu;
}

void ClusterInstanceDetail::SetInstanceCpu(const int64_t& _instanceCpu)
{
    m_instanceCpu = _instanceCpu;
    m_instanceCpuHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceCpuHasBeenSet() const
{
    return m_instanceCpuHasBeenSet;
}

double ClusterInstanceDetail::GetMinCpu() const
{
    return m_minCpu;
}

void ClusterInstanceDetail::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool ClusterInstanceDetail::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double ClusterInstanceDetail::GetMaxCpu() const
{
    return m_maxCpu;
}

void ClusterInstanceDetail::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool ClusterInstanceDetail::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

int64_t ClusterInstanceDetail::GetMemory() const
{
    return m_memory;
}

void ClusterInstanceDetail::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool ClusterInstanceDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceMemory() const
{
    return m_instanceMemory;
}

void ClusterInstanceDetail::SetInstanceMemory(const int64_t& _instanceMemory)
{
    m_instanceMemory = _instanceMemory;
    m_instanceMemoryHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceMemoryHasBeenSet() const
{
    return m_instanceMemoryHasBeenSet;
}

int64_t ClusterInstanceDetail::GetInstanceStorage() const
{
    return m_instanceStorage;
}

void ClusterInstanceDetail::SetInstanceStorage(const int64_t& _instanceStorage)
{
    m_instanceStorage = _instanceStorage;
    m_instanceStorageHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStorageHasBeenSet() const
{
    return m_instanceStorageHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceRole() const
{
    return m_instanceRole;
}

void ClusterInstanceDetail::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

int64_t ClusterInstanceDetail::GetMaintainStartTime() const
{
    return m_maintainStartTime;
}

void ClusterInstanceDetail::SetMaintainStartTime(const int64_t& _maintainStartTime)
{
    m_maintainStartTime = _maintainStartTime;
    m_maintainStartTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::MaintainStartTimeHasBeenSet() const
{
    return m_maintainStartTimeHasBeenSet;
}

int64_t ClusterInstanceDetail::GetMaintainDuration() const
{
    return m_maintainDuration;
}

void ClusterInstanceDetail::SetMaintainDuration(const int64_t& _maintainDuration)
{
    m_maintainDuration = _maintainDuration;
    m_maintainDurationHasBeenSet = true;
}

bool ClusterInstanceDetail::MaintainDurationHasBeenSet() const
{
    return m_maintainDurationHasBeenSet;
}

vector<string> ClusterInstanceDetail::GetMaintainWeekDays() const
{
    return m_maintainWeekDays;
}

void ClusterInstanceDetail::SetMaintainWeekDays(const vector<string>& _maintainWeekDays)
{
    m_maintainWeekDays = _maintainWeekDays;
    m_maintainWeekDaysHasBeenSet = true;
}

bool ClusterInstanceDetail::MaintainWeekDaysHasBeenSet() const
{
    return m_maintainWeekDaysHasBeenSet;
}

vector<ObjectTask> ClusterInstanceDetail::GetInstanceTasks() const
{
    return m_instanceTasks;
}

void ClusterInstanceDetail::SetInstanceTasks(const vector<ObjectTask>& _instanceTasks)
{
    m_instanceTasks = _instanceTasks;
    m_instanceTasksHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceTasksHasBeenSet() const
{
    return m_instanceTasksHasBeenSet;
}

string ClusterInstanceDetail::GetDeviceType() const
{
    return m_deviceType;
}

void ClusterInstanceDetail::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceDeviceType() const
{
    return m_instanceDeviceType;
}

void ClusterInstanceDetail::SetInstanceDeviceType(const string& _instanceDeviceType)
{
    m_instanceDeviceType = _instanceDeviceType;
    m_instanceDeviceTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceDeviceTypeHasBeenSet() const
{
    return m_instanceDeviceTypeHasBeenSet;
}

string ClusterInstanceDetail::GetInstanceStorageType() const
{
    return m_instanceStorageType;
}

void ClusterInstanceDetail::SetInstanceStorageType(const string& _instanceStorageType)
{
    m_instanceStorageType = _instanceStorageType;
    m_instanceStorageTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceStorageTypeHasBeenSet() const
{
    return m_instanceStorageTypeHasBeenSet;
}

string ClusterInstanceDetail::GetDbMode() const
{
    return m_dbMode;
}

void ClusterInstanceDetail::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool ClusterInstanceDetail::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

vector<string> ClusterInstanceDetail::GetNodeList() const
{
    return m_nodeList;
}

void ClusterInstanceDetail::SetNodeList(const vector<string>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool ClusterInstanceDetail::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

string ClusterInstanceDetail::GetServerlessStatus() const
{
    return m_serverlessStatus;
}

void ClusterInstanceDetail::SetServerlessStatus(const string& _serverlessStatus)
{
    m_serverlessStatus = _serverlessStatus;
    m_serverlessStatusHasBeenSet = true;
}

bool ClusterInstanceDetail::ServerlessStatusHasBeenSet() const
{
    return m_serverlessStatusHasBeenSet;
}

AIOptimizerStatus ClusterInstanceDetail::GetAIOptimizerStatus() const
{
    return m_aIOptimizerStatus;
}

void ClusterInstanceDetail::SetAIOptimizerStatus(const AIOptimizerStatus& _aIOptimizerStatus)
{
    m_aIOptimizerStatus = _aIOptimizerStatus;
    m_aIOptimizerStatusHasBeenSet = true;
}

bool ClusterInstanceDetail::AIOptimizerStatusHasBeenSet() const
{
    return m_aIOptimizerStatusHasBeenSet;
}

int64_t ClusterInstanceDetail::GetProjectId() const
{
    return m_projectId;
}

void ClusterInstanceDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ClusterInstanceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ClusterInstanceDetail::GetRegion() const
{
    return m_region;
}

void ClusterInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ClusterInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ClusterInstanceDetail::GetZone() const
{
    return m_zone;
}

void ClusterInstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ClusterInstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ClusterInstanceDetail::GetPhysicalZone() const
{
    return m_physicalZone;
}

void ClusterInstanceDetail::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool ClusterInstanceDetail::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

string ClusterInstanceDetail::GetDbType() const
{
    return m_dbType;
}

void ClusterInstanceDetail::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string ClusterInstanceDetail::GetDbVersion() const
{
    return m_dbVersion;
}

void ClusterInstanceDetail::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool ClusterInstanceDetail::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t ClusterInstanceDetail::GetStorage() const
{
    return m_storage;
}

void ClusterInstanceDetail::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool ClusterInstanceDetail::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string ClusterInstanceDetail::GetStorageId() const
{
    return m_storageId;
}

void ClusterInstanceDetail::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool ClusterInstanceDetail::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

int64_t ClusterInstanceDetail::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void ClusterInstanceDetail::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool ClusterInstanceDetail::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

string ClusterInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void ClusterInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterInstanceDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ClusterInstanceDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ClusterInstanceDetail::GetIsolateTime() const
{
    return m_isolateTime;
}

void ClusterInstanceDetail::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string ClusterInstanceDetail::GetDestroyTime() const
{
    return m_destroyTime;
}

void ClusterInstanceDetail::SetDestroyTime(const string& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

string ClusterInstanceDetail::GetDestroyDeadlineText() const
{
    return m_destroyDeadlineText;
}

void ClusterInstanceDetail::SetDestroyDeadlineText(const string& _destroyDeadlineText)
{
    m_destroyDeadlineText = _destroyDeadlineText;
    m_destroyDeadlineTextHasBeenSet = true;
}

bool ClusterInstanceDetail::DestroyDeadlineTextHasBeenSet() const
{
    return m_destroyDeadlineTextHasBeenSet;
}

string ClusterInstanceDetail::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void ClusterInstanceDetail::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool ClusterInstanceDetail::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string ClusterInstanceDetail::GetVpcId() const
{
    return m_vpcId;
}

void ClusterInstanceDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterInstanceDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ClusterInstanceDetail::GetSubnetId() const
{
    return m_subnetId;
}

void ClusterInstanceDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ClusterInstanceDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ClusterInstanceDetail::GetVip() const
{
    return m_vip;
}

void ClusterInstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool ClusterInstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t ClusterInstanceDetail::GetVport() const
{
    return m_vport;
}

void ClusterInstanceDetail::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ClusterInstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t ClusterInstanceDetail::GetNetType() const
{
    return m_netType;
}

void ClusterInstanceDetail::SetNetType(const int64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool ClusterInstanceDetail::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string ClusterInstanceDetail::GetWanIP() const
{
    return m_wanIP;
}

void ClusterInstanceDetail::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool ClusterInstanceDetail::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

int64_t ClusterInstanceDetail::GetWanPort() const
{
    return m_wanPort;
}

void ClusterInstanceDetail::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool ClusterInstanceDetail::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string ClusterInstanceDetail::GetWanStatus() const
{
    return m_wanStatus;
}

void ClusterInstanceDetail::SetWanStatus(const string& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool ClusterInstanceDetail::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

string ClusterInstanceDetail::GetWanDomain() const
{
    return m_wanDomain;
}

void ClusterInstanceDetail::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool ClusterInstanceDetail::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

vector<InstanceNetInfo> ClusterInstanceDetail::GetInstanceNetInfo() const
{
    return m_instanceNetInfo;
}

void ClusterInstanceDetail::SetInstanceNetInfo(const vector<InstanceNetInfo>& _instanceNetInfo)
{
    m_instanceNetInfo = _instanceNetInfo;
    m_instanceNetInfoHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceNetInfoHasBeenSet() const
{
    return m_instanceNetInfoHasBeenSet;
}

int64_t ClusterInstanceDetail::GetPayMode() const
{
    return m_payMode;
}

void ClusterInstanceDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ClusterInstanceDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string ClusterInstanceDetail::GetProcessingTask() const
{
    return m_processingTask;
}

void ClusterInstanceDetail::SetProcessingTask(const string& _processingTask)
{
    m_processingTask = _processingTask;
    m_processingTaskHasBeenSet = true;
}

bool ClusterInstanceDetail::ProcessingTaskHasBeenSet() const
{
    return m_processingTaskHasBeenSet;
}

int64_t ClusterInstanceDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void ClusterInstanceDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool ClusterInstanceDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

vector<ObjectTask> ClusterInstanceDetail::GetTasks() const
{
    return m_tasks;
}

void ClusterInstanceDetail::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool ClusterInstanceDetail::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string ClusterInstanceDetail::GetIsFreeze() const
{
    return m_isFreeze;
}

void ClusterInstanceDetail::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool ClusterInstanceDetail::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

vector<Tag> ClusterInstanceDetail::GetResourceTags() const
{
    return m_resourceTags;
}

void ClusterInstanceDetail::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool ClusterInstanceDetail::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

InstanceAbility ClusterInstanceDetail::GetInstanceAbility() const
{
    return m_instanceAbility;
}

void ClusterInstanceDetail::SetInstanceAbility(const InstanceAbility& _instanceAbility)
{
    m_instanceAbility = _instanceAbility;
    m_instanceAbilityHasBeenSet = true;
}

bool ClusterInstanceDetail::InstanceAbilityHasBeenSet() const
{
    return m_instanceAbilityHasBeenSet;
}

string ClusterInstanceDetail::GetGdnId() const
{
    return m_gdnId;
}

void ClusterInstanceDetail::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool ClusterInstanceDetail::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

