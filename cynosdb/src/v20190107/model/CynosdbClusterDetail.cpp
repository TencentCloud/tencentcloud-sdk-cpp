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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbClusterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CynosdbClusterDetail::CynosdbClusterDetail() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_serverlessStatusHasBeenSet(false),
    m_storageIdHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_maxStorageSizeHasBeenSet(false),
    m_minStorageSizeHasBeenSet(false),
    m_storagePayModeHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_usedStorageHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_roAddrHasBeenSet(false),
    m_abilityHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_hasSlaveZoneHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_instanceSetHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_proxyStatusHasBeenSet(false),
    m_logBinHasBeenSet(false),
    m_isSkipTradeHasBeenSet(false),
    m_pitrTypeHasBeenSet(false),
    m_isOpenPasswordComplexityHasBeenSet(false),
    m_networkStatusHasBeenSet(false),
    m_resourcePackagesHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_slaveZoneAttrHasBeenSet(false),
    m_cynosVersionTagHasBeenSet(false),
    m_gdnIdHasBeenSet(false),
    m_gdnRoleHasBeenSet(false),
    m_usedArchiveStorageHasBeenSet(false),
    m_archiveStatusHasBeenSet(false),
    m_archiveProgressHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbClusterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("ServerlessStatus") && !value["ServerlessStatus"].IsNull())
    {
        if (!value["ServerlessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ServerlessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessStatus = string(value["ServerlessStatus"].GetString());
        m_serverlessStatusHasBeenSet = true;
    }

    if (value.HasMember("StorageId") && !value["StorageId"].IsNull())
    {
        if (!value["StorageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.StorageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageId = string(value["StorageId"].GetString());
        m_storageIdHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageSize") && !value["MaxStorageSize"].IsNull())
    {
        if (!value["MaxStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.MaxStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageSize = value["MaxStorageSize"].GetInt64();
        m_maxStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("MinStorageSize") && !value["MinStorageSize"].IsNull())
    {
        if (!value["MinStorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.MinStorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minStorageSize = value["MinStorageSize"].GetInt64();
        m_minStorageSizeHasBeenSet = true;
    }

    if (value.HasMember("StoragePayMode") && !value["StoragePayMode"].IsNull())
    {
        if (!value["StoragePayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.StoragePayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storagePayMode = value["StoragePayMode"].GetInt64();
        m_storagePayModeHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Charset") && !value["Charset"].IsNull())
    {
        if (!value["Charset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Charset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charset = string(value["Charset"].GetString());
        m_charsetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.StorageLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetInt64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("UsedStorage") && !value["UsedStorage"].IsNull())
    {
        if (!value["UsedStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.UsedStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStorage = value["UsedStorage"].GetInt64();
        m_usedStorageHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("RoAddr") && !value["RoAddr"].IsNull())
    {
        if (!value["RoAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.RoAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["RoAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Addr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roAddr.push_back(item);
        }
        m_roAddrHasBeenSet = true;
    }

    if (value.HasMember("Ability") && !value["Ability"].IsNull())
    {
        if (!value["Ability"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Ability` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ability.Deserialize(value["Ability"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_abilityHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("BusinessType") && !value["BusinessType"].IsNull())
    {
        if (!value["BusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.BusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessType = string(value["BusinessType"].GetString());
        m_businessTypeHasBeenSet = true;
    }

    if (value.HasMember("HasSlaveZone") && !value["HasSlaveZone"].IsNull())
    {
        if (!value["HasSlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.HasSlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasSlaveZone = string(value["HasSlaveZone"].GetString());
        m_hasSlaveZoneHasBeenSet = true;
    }

    if (value.HasMember("IsFreeze") && !value["IsFreeze"].IsNull())
    {
        if (!value["IsFreeze"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.Tasks` is not array type"));

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

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("SlaveZones") && !value["SlaveZones"].IsNull())
    {
        if (!value["SlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.SlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZones.push_back((*itr).GetString());
        }
        m_slaveZonesHasBeenSet = true;
    }

    if (value.HasMember("InstanceSet") && !value["InstanceSet"].IsNull())
    {
        if (!value["InstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.InstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterInstanceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceSet.push_back(item);
        }
        m_instanceSetHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ResourceTags` is not array type"));

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

    if (value.HasMember("ProxyStatus") && !value["ProxyStatus"].IsNull())
    {
        if (!value["ProxyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ProxyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyStatus = string(value["ProxyStatus"].GetString());
        m_proxyStatusHasBeenSet = true;
    }

    if (value.HasMember("LogBin") && !value["LogBin"].IsNull())
    {
        if (!value["LogBin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.LogBin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logBin = string(value["LogBin"].GetString());
        m_logBinHasBeenSet = true;
    }

    if (value.HasMember("IsSkipTrade") && !value["IsSkipTrade"].IsNull())
    {
        if (!value["IsSkipTrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.IsSkipTrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSkipTrade = string(value["IsSkipTrade"].GetString());
        m_isSkipTradeHasBeenSet = true;
    }

    if (value.HasMember("PitrType") && !value["PitrType"].IsNull())
    {
        if (!value["PitrType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.PitrType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pitrType = string(value["PitrType"].GetString());
        m_pitrTypeHasBeenSet = true;
    }

    if (value.HasMember("IsOpenPasswordComplexity") && !value["IsOpenPasswordComplexity"].IsNull())
    {
        if (!value["IsOpenPasswordComplexity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.IsOpenPasswordComplexity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isOpenPasswordComplexity = string(value["IsOpenPasswordComplexity"].GetString());
        m_isOpenPasswordComplexityHasBeenSet = true;
    }

    if (value.HasMember("NetworkStatus") && !value["NetworkStatus"].IsNull())
    {
        if (!value["NetworkStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.NetworkStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkStatus = string(value["NetworkStatus"].GetString());
        m_networkStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourcePackages") && !value["ResourcePackages"].IsNull())
    {
        if (!value["ResourcePackages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ResourcePackages` is not array type"));

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

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("NetworkType") && !value["NetworkType"].IsNull())
    {
        if (!value["NetworkType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.NetworkType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkType = string(value["NetworkType"].GetString());
        m_networkTypeHasBeenSet = true;
    }

    if (value.HasMember("SlaveZoneAttr") && !value["SlaveZoneAttr"].IsNull())
    {
        if (!value["SlaveZoneAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.SlaveZoneAttr` is not array type"));

        const rapidjson::Value &tmpValue = value["SlaveZoneAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SlaveZoneAttrItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_slaveZoneAttr.push_back(item);
        }
        m_slaveZoneAttrHasBeenSet = true;
    }

    if (value.HasMember("CynosVersionTag") && !value["CynosVersionTag"].IsNull())
    {
        if (!value["CynosVersionTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.CynosVersionTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersionTag = string(value["CynosVersionTag"].GetString());
        m_cynosVersionTagHasBeenSet = true;
    }

    if (value.HasMember("GdnId") && !value["GdnId"].IsNull())
    {
        if (!value["GdnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.GdnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnId = string(value["GdnId"].GetString());
        m_gdnIdHasBeenSet = true;
    }

    if (value.HasMember("GdnRole") && !value["GdnRole"].IsNull())
    {
        if (!value["GdnRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.GdnRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnRole = string(value["GdnRole"].GetString());
        m_gdnRoleHasBeenSet = true;
    }

    if (value.HasMember("UsedArchiveStorage") && !value["UsedArchiveStorage"].IsNull())
    {
        if (!value["UsedArchiveStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.UsedArchiveStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedArchiveStorage = value["UsedArchiveStorage"].GetInt64();
        m_usedArchiveStorageHasBeenSet = true;
    }

    if (value.HasMember("ArchiveStatus") && !value["ArchiveStatus"].IsNull())
    {
        if (!value["ArchiveStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ArchiveStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_archiveStatus = string(value["ArchiveStatus"].GetString());
        m_archiveStatusHasBeenSet = true;
    }

    if (value.HasMember("ArchiveProgress") && !value["ArchiveProgress"].IsNull())
    {
        if (!value["ArchiveProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbClusterDetail.ArchiveProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_archiveProgress = value["ArchiveProgress"].GetInt64();
        m_archiveProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbClusterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
    }

    if (m_maxStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageSize, allocator);
    }

    if (m_minStorageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinStorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minStorageSize, allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storagePayMode, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_usedStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedStorage, allocator);
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

    if (m_roAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roAddr.begin(); itr != m_roAddr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_abilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ability";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ability.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessType.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasSlaveZone.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreezeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFreeze";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFreeze.c_str(), allocator).Move(), allocator);
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

    if (m_instanceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceSet.begin(); itr != m_instanceSet.end(); ++itr, ++i)
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

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectID, allocator);
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

    if (m_proxyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_logBinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logBin.c_str(), allocator).Move(), allocator);
    }

    if (m_isSkipTradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSkipTrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSkipTrade.c_str(), allocator).Move(), allocator);
    }

    if (m_pitrTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PitrType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pitrType.c_str(), allocator).Move(), allocator);
    }

    if (m_isOpenPasswordComplexityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenPasswordComplexity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isOpenPasswordComplexity.c_str(), allocator).Move(), allocator);
    }

    if (m_networkStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkStatus.c_str(), allocator).Move(), allocator);
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

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveZoneAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveZoneAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slaveZoneAttr.begin(); itr != m_slaveZoneAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cynosVersionTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersionTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersionTag.c_str(), allocator).Move(), allocator);
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

    if (m_usedArchiveStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedArchiveStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedArchiveStorage, allocator);
    }

    if (m_archiveStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_archiveStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_archiveProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArchiveProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_archiveProgress, allocator);
    }

}


string CynosdbClusterDetail::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbClusterDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbClusterDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CynosdbClusterDetail::GetClusterName() const
{
    return m_clusterName;
}

void CynosdbClusterDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CynosdbClusterDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CynosdbClusterDetail::GetRegion() const
{
    return m_region;
}

void CynosdbClusterDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CynosdbClusterDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CynosdbClusterDetail::GetZone() const
{
    return m_zone;
}

void CynosdbClusterDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CynosdbClusterDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CynosdbClusterDetail::GetPhysicalZone() const
{
    return m_physicalZone;
}

void CynosdbClusterDetail::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool CynosdbClusterDetail::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

string CynosdbClusterDetail::GetStatus() const
{
    return m_status;
}

void CynosdbClusterDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbClusterDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbClusterDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void CynosdbClusterDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CynosdbClusterDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CynosdbClusterDetail::GetServerlessStatus() const
{
    return m_serverlessStatus;
}

void CynosdbClusterDetail::SetServerlessStatus(const string& _serverlessStatus)
{
    m_serverlessStatus = _serverlessStatus;
    m_serverlessStatusHasBeenSet = true;
}

bool CynosdbClusterDetail::ServerlessStatusHasBeenSet() const
{
    return m_serverlessStatusHasBeenSet;
}

string CynosdbClusterDetail::GetStorageId() const
{
    return m_storageId;
}

void CynosdbClusterDetail::SetStorageId(const string& _storageId)
{
    m_storageId = _storageId;
    m_storageIdHasBeenSet = true;
}

bool CynosdbClusterDetail::StorageIdHasBeenSet() const
{
    return m_storageIdHasBeenSet;
}

int64_t CynosdbClusterDetail::GetStorage() const
{
    return m_storage;
}

void CynosdbClusterDetail::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CynosdbClusterDetail::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t CynosdbClusterDetail::GetMaxStorageSize() const
{
    return m_maxStorageSize;
}

void CynosdbClusterDetail::SetMaxStorageSize(const int64_t& _maxStorageSize)
{
    m_maxStorageSize = _maxStorageSize;
    m_maxStorageSizeHasBeenSet = true;
}

bool CynosdbClusterDetail::MaxStorageSizeHasBeenSet() const
{
    return m_maxStorageSizeHasBeenSet;
}

int64_t CynosdbClusterDetail::GetMinStorageSize() const
{
    return m_minStorageSize;
}

void CynosdbClusterDetail::SetMinStorageSize(const int64_t& _minStorageSize)
{
    m_minStorageSize = _minStorageSize;
    m_minStorageSizeHasBeenSet = true;
}

bool CynosdbClusterDetail::MinStorageSizeHasBeenSet() const
{
    return m_minStorageSizeHasBeenSet;
}

int64_t CynosdbClusterDetail::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void CynosdbClusterDetail::SetStoragePayMode(const int64_t& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool CynosdbClusterDetail::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

string CynosdbClusterDetail::GetVpcName() const
{
    return m_vpcName;
}

void CynosdbClusterDetail::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CynosdbClusterDetail::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string CynosdbClusterDetail::GetVpcId() const
{
    return m_vpcId;
}

void CynosdbClusterDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CynosdbClusterDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CynosdbClusterDetail::GetSubnetName() const
{
    return m_subnetName;
}

void CynosdbClusterDetail::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool CynosdbClusterDetail::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string CynosdbClusterDetail::GetSubnetId() const
{
    return m_subnetId;
}

void CynosdbClusterDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CynosdbClusterDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CynosdbClusterDetail::GetCharset() const
{
    return m_charset;
}

void CynosdbClusterDetail::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool CynosdbClusterDetail::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string CynosdbClusterDetail::GetCreateTime() const
{
    return m_createTime;
}

void CynosdbClusterDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CynosdbClusterDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CynosdbClusterDetail::GetDbType() const
{
    return m_dbType;
}

void CynosdbClusterDetail::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CynosdbClusterDetail::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CynosdbClusterDetail::GetDbMode() const
{
    return m_dbMode;
}

void CynosdbClusterDetail::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CynosdbClusterDetail::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

string CynosdbClusterDetail::GetDbVersion() const
{
    return m_dbVersion;
}

void CynosdbClusterDetail::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CynosdbClusterDetail::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CynosdbClusterDetail::GetStorageLimit() const
{
    return m_storageLimit;
}

void CynosdbClusterDetail::SetStorageLimit(const int64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool CynosdbClusterDetail::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

int64_t CynosdbClusterDetail::GetUsedStorage() const
{
    return m_usedStorage;
}

void CynosdbClusterDetail::SetUsedStorage(const int64_t& _usedStorage)
{
    m_usedStorage = _usedStorage;
    m_usedStorageHasBeenSet = true;
}

bool CynosdbClusterDetail::UsedStorageHasBeenSet() const
{
    return m_usedStorageHasBeenSet;
}

string CynosdbClusterDetail::GetVip() const
{
    return m_vip;
}

void CynosdbClusterDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbClusterDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbClusterDetail::GetVport() const
{
    return m_vport;
}

void CynosdbClusterDetail::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbClusterDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

vector<Addr> CynosdbClusterDetail::GetRoAddr() const
{
    return m_roAddr;
}

void CynosdbClusterDetail::SetRoAddr(const vector<Addr>& _roAddr)
{
    m_roAddr = _roAddr;
    m_roAddrHasBeenSet = true;
}

bool CynosdbClusterDetail::RoAddrHasBeenSet() const
{
    return m_roAddrHasBeenSet;
}

Ability CynosdbClusterDetail::GetAbility() const
{
    return m_ability;
}

void CynosdbClusterDetail::SetAbility(const Ability& _ability)
{
    m_ability = _ability;
    m_abilityHasBeenSet = true;
}

bool CynosdbClusterDetail::AbilityHasBeenSet() const
{
    return m_abilityHasBeenSet;
}

string CynosdbClusterDetail::GetCynosVersion() const
{
    return m_cynosVersion;
}

void CynosdbClusterDetail::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool CynosdbClusterDetail::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string CynosdbClusterDetail::GetBusinessType() const
{
    return m_businessType;
}

void CynosdbClusterDetail::SetBusinessType(const string& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool CynosdbClusterDetail::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string CynosdbClusterDetail::GetHasSlaveZone() const
{
    return m_hasSlaveZone;
}

void CynosdbClusterDetail::SetHasSlaveZone(const string& _hasSlaveZone)
{
    m_hasSlaveZone = _hasSlaveZone;
    m_hasSlaveZoneHasBeenSet = true;
}

bool CynosdbClusterDetail::HasSlaveZoneHasBeenSet() const
{
    return m_hasSlaveZoneHasBeenSet;
}

string CynosdbClusterDetail::GetIsFreeze() const
{
    return m_isFreeze;
}

void CynosdbClusterDetail::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool CynosdbClusterDetail::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

vector<ObjectTask> CynosdbClusterDetail::GetTasks() const
{
    return m_tasks;
}

void CynosdbClusterDetail::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CynosdbClusterDetail::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CynosdbClusterDetail::GetMasterZone() const
{
    return m_masterZone;
}

void CynosdbClusterDetail::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool CynosdbClusterDetail::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<string> CynosdbClusterDetail::GetSlaveZones() const
{
    return m_slaveZones;
}

void CynosdbClusterDetail::SetSlaveZones(const vector<string>& _slaveZones)
{
    m_slaveZones = _slaveZones;
    m_slaveZonesHasBeenSet = true;
}

bool CynosdbClusterDetail::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

vector<ClusterInstanceDetail> CynosdbClusterDetail::GetInstanceSet() const
{
    return m_instanceSet;
}

void CynosdbClusterDetail::SetInstanceSet(const vector<ClusterInstanceDetail>& _instanceSet)
{
    m_instanceSet = _instanceSet;
    m_instanceSetHasBeenSet = true;
}

bool CynosdbClusterDetail::InstanceSetHasBeenSet() const
{
    return m_instanceSetHasBeenSet;
}

int64_t CynosdbClusterDetail::GetPayMode() const
{
    return m_payMode;
}

void CynosdbClusterDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CynosdbClusterDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CynosdbClusterDetail::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void CynosdbClusterDetail::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool CynosdbClusterDetail::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t CynosdbClusterDetail::GetProjectID() const
{
    return m_projectID;
}

void CynosdbClusterDetail::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool CynosdbClusterDetail::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

vector<Tag> CynosdbClusterDetail::GetResourceTags() const
{
    return m_resourceTags;
}

void CynosdbClusterDetail::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CynosdbClusterDetail::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string CynosdbClusterDetail::GetProxyStatus() const
{
    return m_proxyStatus;
}

void CynosdbClusterDetail::SetProxyStatus(const string& _proxyStatus)
{
    m_proxyStatus = _proxyStatus;
    m_proxyStatusHasBeenSet = true;
}

bool CynosdbClusterDetail::ProxyStatusHasBeenSet() const
{
    return m_proxyStatusHasBeenSet;
}

string CynosdbClusterDetail::GetLogBin() const
{
    return m_logBin;
}

void CynosdbClusterDetail::SetLogBin(const string& _logBin)
{
    m_logBin = _logBin;
    m_logBinHasBeenSet = true;
}

bool CynosdbClusterDetail::LogBinHasBeenSet() const
{
    return m_logBinHasBeenSet;
}

string CynosdbClusterDetail::GetIsSkipTrade() const
{
    return m_isSkipTrade;
}

void CynosdbClusterDetail::SetIsSkipTrade(const string& _isSkipTrade)
{
    m_isSkipTrade = _isSkipTrade;
    m_isSkipTradeHasBeenSet = true;
}

bool CynosdbClusterDetail::IsSkipTradeHasBeenSet() const
{
    return m_isSkipTradeHasBeenSet;
}

string CynosdbClusterDetail::GetPitrType() const
{
    return m_pitrType;
}

void CynosdbClusterDetail::SetPitrType(const string& _pitrType)
{
    m_pitrType = _pitrType;
    m_pitrTypeHasBeenSet = true;
}

bool CynosdbClusterDetail::PitrTypeHasBeenSet() const
{
    return m_pitrTypeHasBeenSet;
}

string CynosdbClusterDetail::GetIsOpenPasswordComplexity() const
{
    return m_isOpenPasswordComplexity;
}

void CynosdbClusterDetail::SetIsOpenPasswordComplexity(const string& _isOpenPasswordComplexity)
{
    m_isOpenPasswordComplexity = _isOpenPasswordComplexity;
    m_isOpenPasswordComplexityHasBeenSet = true;
}

bool CynosdbClusterDetail::IsOpenPasswordComplexityHasBeenSet() const
{
    return m_isOpenPasswordComplexityHasBeenSet;
}

string CynosdbClusterDetail::GetNetworkStatus() const
{
    return m_networkStatus;
}

void CynosdbClusterDetail::SetNetworkStatus(const string& _networkStatus)
{
    m_networkStatus = _networkStatus;
    m_networkStatusHasBeenSet = true;
}

bool CynosdbClusterDetail::NetworkStatusHasBeenSet() const
{
    return m_networkStatusHasBeenSet;
}

vector<ResourcePackage> CynosdbClusterDetail::GetResourcePackages() const
{
    return m_resourcePackages;
}

void CynosdbClusterDetail::SetResourcePackages(const vector<ResourcePackage>& _resourcePackages)
{
    m_resourcePackages = _resourcePackages;
    m_resourcePackagesHasBeenSet = true;
}

bool CynosdbClusterDetail::ResourcePackagesHasBeenSet() const
{
    return m_resourcePackagesHasBeenSet;
}

int64_t CynosdbClusterDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void CynosdbClusterDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CynosdbClusterDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string CynosdbClusterDetail::GetNetworkType() const
{
    return m_networkType;
}

void CynosdbClusterDetail::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CynosdbClusterDetail::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

vector<SlaveZoneAttrItem> CynosdbClusterDetail::GetSlaveZoneAttr() const
{
    return m_slaveZoneAttr;
}

void CynosdbClusterDetail::SetSlaveZoneAttr(const vector<SlaveZoneAttrItem>& _slaveZoneAttr)
{
    m_slaveZoneAttr = _slaveZoneAttr;
    m_slaveZoneAttrHasBeenSet = true;
}

bool CynosdbClusterDetail::SlaveZoneAttrHasBeenSet() const
{
    return m_slaveZoneAttrHasBeenSet;
}

string CynosdbClusterDetail::GetCynosVersionTag() const
{
    return m_cynosVersionTag;
}

void CynosdbClusterDetail::SetCynosVersionTag(const string& _cynosVersionTag)
{
    m_cynosVersionTag = _cynosVersionTag;
    m_cynosVersionTagHasBeenSet = true;
}

bool CynosdbClusterDetail::CynosVersionTagHasBeenSet() const
{
    return m_cynosVersionTagHasBeenSet;
}

string CynosdbClusterDetail::GetGdnId() const
{
    return m_gdnId;
}

void CynosdbClusterDetail::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool CynosdbClusterDetail::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

string CynosdbClusterDetail::GetGdnRole() const
{
    return m_gdnRole;
}

void CynosdbClusterDetail::SetGdnRole(const string& _gdnRole)
{
    m_gdnRole = _gdnRole;
    m_gdnRoleHasBeenSet = true;
}

bool CynosdbClusterDetail::GdnRoleHasBeenSet() const
{
    return m_gdnRoleHasBeenSet;
}

int64_t CynosdbClusterDetail::GetUsedArchiveStorage() const
{
    return m_usedArchiveStorage;
}

void CynosdbClusterDetail::SetUsedArchiveStorage(const int64_t& _usedArchiveStorage)
{
    m_usedArchiveStorage = _usedArchiveStorage;
    m_usedArchiveStorageHasBeenSet = true;
}

bool CynosdbClusterDetail::UsedArchiveStorageHasBeenSet() const
{
    return m_usedArchiveStorageHasBeenSet;
}

string CynosdbClusterDetail::GetArchiveStatus() const
{
    return m_archiveStatus;
}

void CynosdbClusterDetail::SetArchiveStatus(const string& _archiveStatus)
{
    m_archiveStatus = _archiveStatus;
    m_archiveStatusHasBeenSet = true;
}

bool CynosdbClusterDetail::ArchiveStatusHasBeenSet() const
{
    return m_archiveStatusHasBeenSet;
}

int64_t CynosdbClusterDetail::GetArchiveProgress() const
{
    return m_archiveProgress;
}

void CynosdbClusterDetail::SetArchiveProgress(const int64_t& _archiveProgress)
{
    m_archiveProgress = _archiveProgress;
    m_archiveProgressHasBeenSet = true;
}

bool CynosdbClusterDetail::ArchiveProgressHasBeenSet() const
{
    return m_archiveProgressHasBeenSet;
}

