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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CynosdbInstance::CynosdbInstance() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_destroyDeadlineTextHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanIPHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_destroyTimeHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_processingTaskHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_serverlessStatusHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_instanceNetInfoHasBeenSet(false),
    m_resourcePackagesHasBeenSet(false),
    m_instanceIndexModeHasBeenSet(false),
    m_instanceAbilityHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_instanceStorageTypeHasBeenSet(false),
    m_cynosVersionTagHasBeenSet(false),
    m_nodeListHasBeenSet(false),
    m_gdnIdHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("DestroyDeadlineText") && !value["DestroyDeadlineText"].IsNull())
    {
        if (!value["DestroyDeadlineText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DestroyDeadlineText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyDeadlineText = string(value["DestroyDeadlineText"].GetString());
        m_destroyDeadlineTextHasBeenSet = true;
    }

    if (value.HasMember("IsolateTime") && !value["IsolateTime"].IsNull())
    {
        if (!value["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(value["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.NetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetInt64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanIP") && !value["WanIP"].IsNull())
    {
        if (!value["WanIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.WanIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIP = string(value["WanIP"].GetString());
        m_wanIPHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.WanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = string(value["WanStatus"].GetString());
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("DestroyTime") && !value["DestroyTime"].IsNull())
    {
        if (!value["DestroyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DestroyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyTime = string(value["DestroyTime"].GetString());
        m_destroyTimeHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("ProcessingTask") && !value["ProcessingTask"].IsNull())
    {
        if (!value["ProcessingTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ProcessingTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processingTask = string(value["ProcessingTask"].GetString());
        m_processingTaskHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.MinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetDouble();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.MaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetDouble();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("ServerlessStatus") && !value["ServerlessStatus"].IsNull())
    {
        if (!value["ServerlessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ServerlessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessStatus = string(value["ServerlessStatus"].GetString());
        m_serverlessStatusHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StoragePayMode") && !value["StoragePayMode"].IsNull())
    {
        if (!value["StoragePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.StoragePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storagePayMode = value["StoragePayMode"].GetInt64();
        m_storagePayModeHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.BusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = string(value["BusinessType"].GetString());
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.Tasks` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ResourceTags` is not array type"));

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

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZones") && !value["SlaveZones"].IsNull())
    {
        if (!value["SlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.SlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZones.push_back((*itr).GetString());
        }
        m_slaveZonesHasBeenSet = true;
    }

    if (value.HasMember("InstanceNetInfo") && !value["InstanceNetInfo"].IsNull())
    {
        if (!value["InstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceNetInfo` is not array type"));

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

    if (value.HasMember("ResourcePackages") && !value["ResourcePackages"].IsNull())
    {
        if (!value["ResourcePackages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.ResourcePackages` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourcePackages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourcePackage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resourcePackages.push_back(item);
        }
        m_resourcePackagesHasBeenSet = true;
    }

    if (value.HasMember("InstanceIndexMode") && !value["InstanceIndexMode"].IsNull())
    {
        if (!value["InstanceIndexMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceIndexMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceIndexMode = string(value["InstanceIndexMode"].GetString());
        m_instanceIndexModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceAbility") && !value["InstanceAbility"].IsNull())
    {
        if (!value["InstanceAbility"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceAbility` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAbility.Deserialize(value["InstanceAbility"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAbilityHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStorageType") && !value["InstanceStorageType"].IsNull())
    {
        if (!value["InstanceStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.InstanceStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStorageType = string(value["InstanceStorageType"].GetString());
        m_instanceStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("CynosVersionTag") && !value["CynosVersionTag"].IsNull())
    {
        if (!value["CynosVersionTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.CynosVersionTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersionTag = string(value["CynosVersionTag"].GetString());
        m_cynosVersionTagHasBeenSet = true;
    }

    if (value.HasMember("NodeList") && !value["NodeList"].IsNull())
    {
        if (!value["NodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.NodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_nodeList.push_back((*itr).GetString());
        }
        m_nodeListHasBeenSet = true;
    }

    if (value.HasMember("GdnId") && !value["GdnId"].IsNull())
    {
        if (!value["GdnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstance.GdnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnId = string(value["GdnId"].GetString());
        m_gdnIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
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

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyDeadlineTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyDeadlineText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyDeadlineText.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
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

    if (m_destroyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
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

    if (m_serverlessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessStatus.c_str(), allocator).Move(), allocator);
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

    if (m_physicalZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalZone.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
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

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_slaveZones.begin(); itr != m_slaveZones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_resourcePackagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePackages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourcePackages.begin(); itr != m_resourcePackages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIndexModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIndexMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceIndexMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceAbilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAbility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAbility.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersionTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersionTag.c_str(), allocator).Move(), allocator);
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

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

}


string CynosdbInstance::GetUin() const
{
    return m_uin;
}

void CynosdbInstance::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CynosdbInstance::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t CynosdbInstance::GetAppId() const
{
    return m_appId;
}

void CynosdbInstance::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CynosdbInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CynosdbInstance::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbInstance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbInstance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CynosdbInstance::GetClusterName() const
{
    return m_clusterName;
}

void CynosdbInstance::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CynosdbInstance::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CynosdbInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CynosdbInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CynosdbInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CynosdbInstance::GetInstanceName() const
{
    return m_instanceName;
}

void CynosdbInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CynosdbInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CynosdbInstance::GetProjectId() const
{
    return m_projectId;
}

void CynosdbInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CynosdbInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CynosdbInstance::GetRegion() const
{
    return m_region;
}

void CynosdbInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CynosdbInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CynosdbInstance::GetZone() const
{
    return m_zone;
}

void CynosdbInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CynosdbInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CynosdbInstance::GetStatus() const
{
    return m_status;
}

void CynosdbInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbInstance::GetStatusDesc() const
{
    return m_statusDesc;
}

void CynosdbInstance::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CynosdbInstance::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CynosdbInstance::GetDbMode() const
{
    return m_dbMode;
}

void CynosdbInstance::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CynosdbInstance::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string CynosdbInstance::GetDbType() const
{
    return m_dbType;
}

void CynosdbInstance::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CynosdbInstance::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CynosdbInstance::GetDbVersion() const
{
    return m_dbVersion;
}

void CynosdbInstance::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CynosdbInstance::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CynosdbInstance::GetCpu() const
{
    return m_cpu;
}

void CynosdbInstance::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CynosdbInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CynosdbInstance::GetMemory() const
{
    return m_memory;
}

void CynosdbInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CynosdbInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CynosdbInstance::GetStorage() const
{
    return m_storage;
}

void CynosdbInstance::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CynosdbInstance::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CynosdbInstance::GetInstanceType() const
{
    return m_instanceType;
}

void CynosdbInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CynosdbInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CynosdbInstance::GetInstanceRole() const
{
    return m_instanceRole;
}

void CynosdbInstance::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool CynosdbInstance::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string CynosdbInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void CynosdbInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CynosdbInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CynosdbInstance::GetCreateTime() const
{
    return m_createTime;
}

void CynosdbInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CynosdbInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CynosdbInstance::GetVpcId() const
{
    return m_vpcId;
}

void CynosdbInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CynosdbInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CynosdbInstance::GetSubnetId() const
{
    return m_subnetId;
}

void CynosdbInstance::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CynosdbInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CynosdbInstance::GetVip() const
{
    return m_vip;
}

void CynosdbInstance::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbInstance::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbInstance::GetVport() const
{
    return m_vport;
}

void CynosdbInstance::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbInstance::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t CynosdbInstance::GetPayMode() const
{
    return m_payMode;
}

void CynosdbInstance::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CynosdbInstance::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CynosdbInstance::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void CynosdbInstance::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool CynosdbInstance::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string CynosdbInstance::GetDestroyDeadlineText() const
{
    return m_destroyDeadlineText;
}

void CynosdbInstance::SetDestroyDeadlineText(const string& _destroyDeadlineText)
{
    m_destroyDeadlineText = _destroyDeadlineText;
    m_destroyDeadlineTextHasBeenSet = true;
}

bool CynosdbInstance::DestroyDeadlineTextHasBeenSet() const
{
    return m_destroyDeadlineTextHasBeenSet;
}

string CynosdbInstance::GetIsolateTime() const
{
    return m_isolateTime;
}

void CynosdbInstance::SetIsolateTime(const string& _isolateTime)
{
    m_isolateTime = _isolateTime;
    m_isolateTimeHasBeenSet = true;
}

bool CynosdbInstance::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

int64_t CynosdbInstance::GetNetType() const
{
    return m_netType;
}

void CynosdbInstance::SetNetType(const int64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool CynosdbInstance::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string CynosdbInstance::GetWanDomain() const
{
    return m_wanDomain;
}

void CynosdbInstance::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool CynosdbInstance::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string CynosdbInstance::GetWanIP() const
{
    return m_wanIP;
}

void CynosdbInstance::SetWanIP(const string& _wanIP)
{
    m_wanIP = _wanIP;
    m_wanIPHasBeenSet = true;
}

bool CynosdbInstance::WanIPHasBeenSet() const
{
    return m_wanIPHasBeenSet;
}

int64_t CynosdbInstance::GetWanPort() const
{
    return m_wanPort;
}

void CynosdbInstance::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool CynosdbInstance::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string CynosdbInstance::GetWanStatus() const
{
    return m_wanStatus;
}

void CynosdbInstance::SetWanStatus(const string& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool CynosdbInstance::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

string CynosdbInstance::GetDestroyTime() const
{
    return m_destroyTime;
}

void CynosdbInstance::SetDestroyTime(const string& _destroyTime)
{
    m_destroyTime = _destroyTime;
    m_destroyTimeHasBeenSet = true;
}

bool CynosdbInstance::DestroyTimeHasBeenSet() const
{
    return m_destroyTimeHasBeenSet;
}

string CynosdbInstance::GetCynosVersion() const
{
    return m_cynosVersion;
}

void CynosdbInstance::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool CynosdbInstance::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string CynosdbInstance::GetProcessingTask() const
{
    return m_processingTask;
}

void CynosdbInstance::SetProcessingTask(const string& _processingTask)
{
    m_processingTask = _processingTask;
    m_processingTaskHasBeenSet = true;
}

bool CynosdbInstance::ProcessingTaskHasBeenSet() const
{
    return m_processingTaskHasBeenSet;
}

int64_t CynosdbInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void CynosdbInstance::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CynosdbInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

double CynosdbInstance::GetMinCpu() const
{
    return m_minCpu;
}

void CynosdbInstance::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool CynosdbInstance::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double CynosdbInstance::GetMaxCpu() const
{
    return m_maxCpu;
}

void CynosdbInstance::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool CynosdbInstance::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string CynosdbInstance::GetServerlessStatus() const
{
    return m_serverlessStatus;
}

void CynosdbInstance::SetServerlessStatus(const string& _serverlessStatus)
{
    m_serverlessStatus = _serverlessStatus;
    m_serverlessStatusHasBeenSet = true;
}

bool CynosdbInstance::ServerlessStatusHasBeenSet() const
{
    return m_serverlessStatusHasBeenSet;
}

string CynosdbInstance::GetStorageId() const
{
    return m_storageId;
}

void CynosdbInstance::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool CynosdbInstance::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

int64_t CynosdbInstance::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CynosdbInstance::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CynosdbInstance::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

string CynosdbInstance::GetPhysicalZone() const
{
    return m_physicalZone;
}

void CynosdbInstance::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool CynosdbInstance::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

string CynosdbInstance::GetBusinessType() const
{
    return m_businessType;
}

void CynosdbInstance::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool CynosdbInstance::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

vector<ObjectTask> CynosdbInstance::GetTasks() const
{
    return m_tasks;
}

void CynosdbInstance::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CynosdbInstance::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CynosdbInstance::GetIsFreeze() const
{
    return m_isFreeze;
}

void CynosdbInstance::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool CynosdbInstance::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

vector<Tag> CynosdbInstance::GetResourceTags() const
{
    return m_resourceTags;
}

void CynosdbInstance::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CynosdbInstance::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CynosdbInstance::GetMasterZone() const
{
    return m_masterZone;
}

void CynosdbInstance::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool CynosdbInstance::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<string> CynosdbInstance::GetSlaveZones() const
{
    return m_slaveZones;
}

void CynosdbInstance::SetSlaveZones(const vector<string>& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool CynosdbInstance::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

vector<InstanceNetInfo> CynosdbInstance::GetInstanceNetInfo() const
{
    return m_instanceNetInfo;
}

void CynosdbInstance::SetInstanceNetInfo(const vector<InstanceNetInfo>& _instanceNetInfo)
{
    m_instanceNetInfo = _instanceNetInfo;
    m_instanceNetInfoHasBeenSet = true;
}

bool CynosdbInstance::InstanceNetInfoHasBeenSet() const
{
    return m_instanceNetInfoHasBeenSet;
}

vector<ResourcePackage> CynosdbInstance::GetResourcePackages() const
{
    return m_resourcePackages;
}

void CynosdbInstance::SetResourcePackages(const vector<ResourcePackage>& _resourcePackages)
{
    m_resourcePackages = _resourcePackages;
    m_resourcePackagesHasBeenSet = true;
}

bool CynosdbInstance::ResourcePackagesHasBeenSet() const
{
    return m_resourcePackagesHasBeenSet;
}

string CynosdbInstance::GetInstanceIndexMode() const
{
    return m_instanceIndexMode;
}

void CynosdbInstance::SetInstanceIndexMode(const string& _instanceIndexMode)
{
    m_instanceIndexMode = _instanceIndexMode;
    m_instanceIndexModeHasBeenSet = true;
}

bool CynosdbInstance::InstanceIndexModeHasBeenSet() const
{
    return m_instanceIndexModeHasBeenSet;
}

InstanceAbility CynosdbInstance::GetInstanceAbility() const
{
    return m_instanceAbility;
}

void CynosdbInstance::SetInstanceAbility(const InstanceAbility& _instanceAbility)
{
    m_instanceAbility = _instanceAbility;
    m_instanceAbilityHasBeenSet = true;
}

bool CynosdbInstance::InstanceAbilityHasBeenSet() const
{
    return m_instanceAbilityHasBeenSet;
}

string CynosdbInstance::GetDeviceType() const
{
    return m_deviceType;
}

void CynosdbInstance::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CynosdbInstance::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CynosdbInstance::GetInstanceStorageType() const
{
    return m_instanceStorageType;
}

void CynosdbInstance::SetInstanceStorageType(const string& _instanceStorageType)
{
    m_instanceStorageType = _instanceStorageType;
    m_instanceStorageTypeHasBeenSet = true;
}

bool CynosdbInstance::InstanceStorageTypeHasBeenSet() const
{
    return m_instanceStorageTypeHasBeenSet;
}

string CynosdbInstance::GetCynosVersionTag() const
{
    return m_cynosVersionTag;
}

void CynosdbInstance::SetCynosVersionTag(const string& _cynosVersionTag)
{
    m_cynosVersionTag = _cynosVersionTag;
    m_cynosVersionTagHasBeenSet = true;
}

bool CynosdbInstance::CynosVersionTagHasBeenSet() const
{
    return m_cynosVersionTagHasBeenSet;
}

vector<string> CynosdbInstance::GetNodeList() const
{
    return m_nodeList;
}

void CynosdbInstance::SetNodeList(const vector<string>& _nodeList)
{
    m_nodeList = _nodeList;
    m_nodeListHasBeenSet = true;
}

bool CynosdbInstance::NodeListHasBeenSet() const
{
    return m_nodeListHasBeenSet;
}

string CynosdbInstance::GetGdnId() const
{
    return m_gdnId;
}

void CynosdbInstance::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool CynosdbInstance::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

