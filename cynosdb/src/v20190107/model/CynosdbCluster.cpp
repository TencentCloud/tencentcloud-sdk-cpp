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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbCluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CynosdbCluster::CynosdbCluster() :
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_cynosVersionTagHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_processingTaskHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_serverlessStatusHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_netAddrsHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_hasSlaveZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_orderSourceHasBeenSet(false),
    m_abilityHasBeenSet(false),
    m_resourcePackagesHasBeenSet(false),
    m_gdnIdHasBeenSet(false),
    m_gdnRoleHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbCluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("CynosVersionTag") && !value["CynosVersionTag"].IsNull())
    {
        if (!value["CynosVersionTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.CynosVersionTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersionTag = string(value["CynosVersionTag"].GetString());
        m_cynosVersionTagHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ProcessingTask") && !value["ProcessingTask"].IsNull())
    {
        if (!value["ProcessingTask"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ProcessingTask` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processingTask = string(value["ProcessingTask"].GetString());
        m_processingTaskHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Tasks` is not array type"));

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

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ResourceTags` is not array type"));

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

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("ServerlessStatus") && !value["ServerlessStatus"].IsNull())
    {
        if (!value["ServerlessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ServerlessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessStatus = string(value["ServerlessStatus"].GetString());
        m_serverlessStatusHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("StoragePayMode") && !value["StoragePayMode"].IsNull())
    {
        if (!value["StoragePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.StoragePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storagePayMode = value["StoragePayMode"].GetInt64();
        m_storagePayModeHasBeenSet = true;
    }

    if (value.HasMember("MinStorageSize") && !value["MinStorageSize"].IsNull())
    {
        if (!value["MinStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.MinStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorageSize = value["MinStorageSize"].GetInt64();
        m_minStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.MaxStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetInt64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("NetAddrs") && !value["NetAddrs"].IsNull())
    {
        if (!value["NetAddrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.NetAddrs` is not array type"));

        const rapidjson::Value &tmpValue = value["NetAddrs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetAddr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_netAddrs.push_back(item);
        }
        m_netAddrsHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("HasSlaveZone") && !value["HasSlaveZone"].IsNull())
    {
        if (!value["HasSlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.HasSlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasSlaveZone = string(value["HasSlaveZone"].GetString());
        m_hasSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZones") && !value["SlaveZones"].IsNull())
    {
        if (!value["SlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.SlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZones.push_back((*itr).GetString());
        }
        m_slaveZonesHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.BusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = string(value["BusinessType"].GetString());
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("IsFreeze") && !value["IsFreeze"].IsNull())
    {
        if (!value["IsFreeze"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("OrderSource") && !value["OrderSource"].IsNull())
    {
        if (!value["OrderSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.OrderSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderSource = string(value["OrderSource"].GetString());
        m_orderSourceHasBeenSet = true;
    }

    if (value.HasMember("Ability") && !value["Ability"].IsNull())
    {
        if (!value["Ability"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.Ability` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ability.Deserialize(value["Ability"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abilityHasBeenSet = true;
    }

    if (value.HasMember("ResourcePackages") && !value["ResourcePackages"].IsNull())
    {
        if (!value["ResourcePackages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.ResourcePackages` is not array type"));

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

    if (value.HasMember("GdnId") && !value["GdnId"].IsNull())
    {
        if (!value["GdnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.GdnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnId = string(value["GdnId"].GetString());
        m_gdnIdHasBeenSet = true;
    }

    if (value.HasMember("GdnRole") && !value["GdnRole"].IsNull())
    {
        if (!value["GdnRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbCluster.GdnRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnRole = string(value["GdnRole"].GetString());
        m_gdnRoleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbCluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
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

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersionTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersionTag.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_processingTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessingTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processingTask.c_str(), allocator).Move(), allocator);
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

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_serverlessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessStatus.c_str(), allocator).Move(), allocator);
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

    if (m_minStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorageSize, allocator);
    }

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_netAddrsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetAddrs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_netAddrs.begin(); itr != m_netAddrs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_physicalZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalZone.c_str(), allocator).Move(), allocator);
    }

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasSlaveZone.c_str(), allocator).Move(), allocator);
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

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreezeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFreeze";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFreeze.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderSource.c_str(), allocator).Move(), allocator);
    }

    if (m_abilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ability.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

    if (m_gdnRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnRole.c_str(), allocator).Move(), allocator);
    }

}


string CynosdbCluster::GetStatus() const
{
    return m_status;
}

void CynosdbCluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbCluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbCluster::GetUpdateTime() const
{
    return m_updateTime;
}

void CynosdbCluster::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CynosdbCluster::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CynosdbCluster::GetZone() const
{
    return m_zone;
}

void CynosdbCluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CynosdbCluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CynosdbCluster::GetClusterName() const
{
    return m_clusterName;
}

void CynosdbCluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CynosdbCluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CynosdbCluster::GetRegion() const
{
    return m_region;
}

void CynosdbCluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CynosdbCluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CynosdbCluster::GetDbVersion() const
{
    return m_dbVersion;
}

void CynosdbCluster::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CynosdbCluster::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string CynosdbCluster::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbCluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbCluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t CynosdbCluster::GetInstanceNum() const
{
    return m_instanceNum;
}

void CynosdbCluster::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool CynosdbCluster::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string CynosdbCluster::GetUin() const
{
    return m_uin;
}

void CynosdbCluster::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CynosdbCluster::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string CynosdbCluster::GetDbType() const
{
    return m_dbType;
}

void CynosdbCluster::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CynosdbCluster::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

int64_t CynosdbCluster::GetAppId() const
{
    return m_appId;
}

void CynosdbCluster::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CynosdbCluster::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CynosdbCluster::GetStatusDesc() const
{
    return m_statusDesc;
}

void CynosdbCluster::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CynosdbCluster::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CynosdbCluster::GetCreateTime() const
{
    return m_createTime;
}

void CynosdbCluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CynosdbCluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CynosdbCluster::GetPayMode() const
{
    return m_payMode;
}

void CynosdbCluster::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CynosdbCluster::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CynosdbCluster::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void CynosdbCluster::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool CynosdbCluster::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string CynosdbCluster::GetVip() const
{
    return m_vip;
}

void CynosdbCluster::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbCluster::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbCluster::GetVport() const
{
    return m_vport;
}

void CynosdbCluster::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbCluster::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t CynosdbCluster::GetProjectID() const
{
    return m_projectID;
}

void CynosdbCluster::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool CynosdbCluster::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string CynosdbCluster::GetVpcId() const
{
    return m_vpcId;
}

void CynosdbCluster::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CynosdbCluster::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CynosdbCluster::GetSubnetId() const
{
    return m_subnetId;
}

void CynosdbCluster::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CynosdbCluster::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CynosdbCluster::GetCynosVersion() const
{
    return m_cynosVersion;
}

void CynosdbCluster::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool CynosdbCluster::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string CynosdbCluster::GetCynosVersionTag() const
{
    return m_cynosVersionTag;
}

void CynosdbCluster::SetCynosVersionTag(const string& _cynosVersionTag)
{
    m_cynosVersionTag = _cynosVersionTag;
    m_cynosVersionTagHasBeenSet = true;
}

bool CynosdbCluster::CynosVersionTagHasBeenSet() const
{
    return m_cynosVersionTagHasBeenSet;
}

int64_t CynosdbCluster::GetStorageLimit() const
{
    return m_storageLimit;
}

void CynosdbCluster::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CynosdbCluster::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CynosdbCluster::GetRenewFlag() const
{
    return m_renewFlag;
}

void CynosdbCluster::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CynosdbCluster::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CynosdbCluster::GetProcessingTask() const
{
    return m_processingTask;
}

void CynosdbCluster::SetProcessingTask(const string& _processingTask)
{
    m_processingTask = _processingTask;
    m_processingTaskHasBeenSet = true;
}

bool CynosdbCluster::ProcessingTaskHasBeenSet() const
{
    return m_processingTaskHasBeenSet;
}

vector<ObjectTask> CynosdbCluster::GetTasks() const
{
    return m_tasks;
}

void CynosdbCluster::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CynosdbCluster::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

vector<Tag> CynosdbCluster::GetResourceTags() const
{
    return m_resourceTags;
}

void CynosdbCluster::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CynosdbCluster::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CynosdbCluster::GetDbMode() const
{
    return m_dbMode;
}

void CynosdbCluster::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CynosdbCluster::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string CynosdbCluster::GetServerlessStatus() const
{
    return m_serverlessStatus;
}

void CynosdbCluster::SetServerlessStatus(const string& _serverlessStatus)
{
    m_serverlessStatus = _serverlessStatus;
    m_serverlessStatusHasBeenSet = true;
}

bool CynosdbCluster::ServerlessStatusHasBeenSet() const
{
    return m_serverlessStatusHasBeenSet;
}

int64_t CynosdbCluster::GetStorage() const
{
    return m_storage;
}

void CynosdbCluster::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CynosdbCluster::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CynosdbCluster::GetStorageId() const
{
    return m_storageId;
}

void CynosdbCluster::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool CynosdbCluster::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

int64_t CynosdbCluster::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CynosdbCluster::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CynosdbCluster::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

int64_t CynosdbCluster::GetMinStorageSize() const
{
    return m_minStorageSize;
}

void CynosdbCluster::SetMinStorageSize(const int64_t& _minStorageSize)
{
    m_minStorageSize = _minStorageSize;
    m_minStorageSizeHasBeenSet = true;
}

bool CynosdbCluster::MinStorageSizeHasBeenSet() const
{
    return m_minStorageSizeHasBeenSet;
}

int64_t CynosdbCluster::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void CynosdbCluster::SetMaxStorageSize(const int64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool CynosdbCluster::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

vector<NetAddr> CynosdbCluster::GetNetAddrs() const
{
    return m_netAddrs;
}

void CynosdbCluster::SetNetAddrs(const vector<NetAddr>& _netAddrs)
{
    m_netAddrs = _netAddrs;
    m_netAddrsHasBeenSet = true;
}

bool CynosdbCluster::NetAddrsHasBeenSet() const
{
    return m_netAddrsHasBeenSet;
}

string CynosdbCluster::GetPhysicalZone() const
{
    return m_physicalZone;
}

void CynosdbCluster::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool CynosdbCluster::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

string CynosdbCluster::GetMasterZone() const
{
    return m_masterZone;
}

void CynosdbCluster::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool CynosdbCluster::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

string CynosdbCluster::GetHasSlaveZone() const
{
    return m_hasSlaveZone;
}

void CynosdbCluster::SetHasSlaveZone(const string& _hasSlaveZone)
{
    m_hasSlaveZone = _hasSlaveZone;
    m_hasSlaveZoneHasBeenSet = true;
}

bool CynosdbCluster::HasSlaveZoneHasBeenSet() const
{
    return m_hasSlaveZoneHasBeenSet;
}

vector<string> CynosdbCluster::GetSlaveZones() const
{
    return m_slaveZones;
}

void CynosdbCluster::SetSlaveZones(const vector<string>& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool CynosdbCluster::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

string CynosdbCluster::GetBusinessType() const
{
    return m_businessType;
}

void CynosdbCluster::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool CynosdbCluster::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string CynosdbCluster::GetIsFreeze() const
{
    return m_isFreeze;
}

void CynosdbCluster::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool CynosdbCluster::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

string CynosdbCluster::GetOrderSource() const
{
    return m_orderSource;
}

void CynosdbCluster::SetOrderSource(const string& _orderSource)
{
    m_orderSource = _orderSource;
    m_orderSourceHasBeenSet = true;
}

bool CynosdbCluster::OrderSourceHasBeenSet() const
{
    return m_orderSourceHasBeenSet;
}

Ability CynosdbCluster::GetAbility() const
{
    return m_ability;
}

void CynosdbCluster::SetAbility(const Ability& _ability)
{
    m_ability = _ability;
    m_abilityHasBeenSet = true;
}

bool CynosdbCluster::AbilityHasBeenSet() const
{
    return m_abilityHasBeenSet;
}

vector<ResourcePackage> CynosdbCluster::GetResourcePackages() const
{
    return m_resourcePackages;
}

void CynosdbCluster::SetResourcePackages(const vector<ResourcePackage>& _resourcePackages)
{
    m_resourcePackages = _resourcePackages;
    m_resourcePackagesHasBeenSet = true;
}

bool CynosdbCluster::ResourcePackagesHasBeenSet() const
{
    return m_resourcePackagesHasBeenSet;
}

string CynosdbCluster::GetGdnId() const
{
    return m_gdnId;
}

void CynosdbCluster::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool CynosdbCluster::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

string CynosdbCluster::GetGdnRole() const
{
    return m_gdnRole;
}

void CynosdbCluster::SetGdnRole(const string& _gdnRole)
{
    m_gdnRole = _gdnRole;
    m_gdnRoleHasBeenSet = true;
}

bool CynosdbCluster::GdnRoleHasBeenSet() const
{
    return m_gdnRoleHasBeenSet;
}

