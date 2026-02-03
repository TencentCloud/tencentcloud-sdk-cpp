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

#include <tencentcloud/cynosdb/v20190107/model/LibraDBClusterDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraDBClusterDetail::LibraDBClusterDetail() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_usedStorageHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_roAddrHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_instanceSetHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_cynosVersionTagHasBeenSet(false),
    m_noSupportAddRoHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_physicalZoneHasBeenSet(false)
{
}

CoreInternalOutcome LibraDBClusterDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("UsedStorage") && !value["UsedStorage"].IsNull())
    {
        if (!value["UsedStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.UsedStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStorage = value["UsedStorage"].GetInt64();
        m_usedStorageHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("RoAddr") && !value["RoAddr"].IsNull())
    {
        if (!value["RoAddr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.RoAddr` is not array type"));

        const rapidjson::Value &tmpValue = value["RoAddr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoAddr item;
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

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("IsFreeze") && !value["IsFreeze"].IsNull())
    {
        if (!value["IsFreeze"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Tasks` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceSet") && !value["InstanceSet"].IsNull())
    {
        if (!value["InstanceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.InstanceSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceSet item;
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
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CynosVersionTag") && !value["CynosVersionTag"].IsNull())
    {
        if (!value["CynosVersionTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.CynosVersionTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersionTag = string(value["CynosVersionTag"].GetString());
        m_cynosVersionTagHasBeenSet = true;
    }

    if (value.HasMember("NoSupportAddRo") && !value["NoSupportAddRo"].IsNull())
    {
        if (!value["NoSupportAddRo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.NoSupportAddRo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noSupportAddRo = string(value["NoSupportAddRo"].GetString());
        m_noSupportAddRoHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterDetail.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraDBClusterDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storage, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
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

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
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

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_cynosVersionTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersionTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersionTag.c_str(), allocator).Move(), allocator);
    }

    if (m_noSupportAddRoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoSupportAddRo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noSupportAddRo.c_str(), allocator).Move(), allocator);
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

}


string LibraDBClusterDetail::GetClusterId() const
{
    return m_clusterId;
}

void LibraDBClusterDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool LibraDBClusterDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string LibraDBClusterDetail::GetClusterName() const
{
    return m_clusterName;
}

void LibraDBClusterDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool LibraDBClusterDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string LibraDBClusterDetail::GetRegion() const
{
    return m_region;
}

void LibraDBClusterDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LibraDBClusterDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LibraDBClusterDetail::GetStatus() const
{
    return m_status;
}

void LibraDBClusterDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LibraDBClusterDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LibraDBClusterDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void LibraDBClusterDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool LibraDBClusterDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t LibraDBClusterDetail::GetStorage() const
{
    return m_storage;
}

void LibraDBClusterDetail::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool LibraDBClusterDetail::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string LibraDBClusterDetail::GetVpcName() const
{
    return m_vpcName;
}

void LibraDBClusterDetail::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool LibraDBClusterDetail::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string LibraDBClusterDetail::GetVpcId() const
{
    return m_vpcId;
}

void LibraDBClusterDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LibraDBClusterDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string LibraDBClusterDetail::GetSubnetName() const
{
    return m_subnetName;
}

void LibraDBClusterDetail::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool LibraDBClusterDetail::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string LibraDBClusterDetail::GetSubnetId() const
{
    return m_subnetId;
}

void LibraDBClusterDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LibraDBClusterDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string LibraDBClusterDetail::GetCreateTime() const
{
    return m_createTime;
}

void LibraDBClusterDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LibraDBClusterDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LibraDBClusterDetail::GetDbVersion() const
{
    return m_dbVersion;
}

void LibraDBClusterDetail::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool LibraDBClusterDetail::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t LibraDBClusterDetail::GetUsedStorage() const
{
    return m_usedStorage;
}

void LibraDBClusterDetail::SetUsedStorage(const int64_t& _usedStorage)
{
    m_usedStorage = _usedStorage;
    m_usedStorageHasBeenSet = true;
}

bool LibraDBClusterDetail::UsedStorageHasBeenSet() const
{
    return m_usedStorageHasBeenSet;
}

string LibraDBClusterDetail::GetVip() const
{
    return m_vip;
}

void LibraDBClusterDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool LibraDBClusterDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t LibraDBClusterDetail::GetVport() const
{
    return m_vport;
}

void LibraDBClusterDetail::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool LibraDBClusterDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

vector<RoAddr> LibraDBClusterDetail::GetRoAddr() const
{
    return m_roAddr;
}

void LibraDBClusterDetail::SetRoAddr(const vector<RoAddr>& _roAddr)
{
    m_roAddr = _roAddr;
    m_roAddrHasBeenSet = true;
}

bool LibraDBClusterDetail::RoAddrHasBeenSet() const
{
    return m_roAddrHasBeenSet;
}

string LibraDBClusterDetail::GetCynosVersion() const
{
    return m_cynosVersion;
}

void LibraDBClusterDetail::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool LibraDBClusterDetail::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string LibraDBClusterDetail::GetIsFreeze() const
{
    return m_isFreeze;
}

void LibraDBClusterDetail::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool LibraDBClusterDetail::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

vector<ObjectTask> LibraDBClusterDetail::GetTasks() const
{
    return m_tasks;
}

void LibraDBClusterDetail::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool LibraDBClusterDetail::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string LibraDBClusterDetail::GetMasterZone() const
{
    return m_masterZone;
}

void LibraDBClusterDetail::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool LibraDBClusterDetail::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<InstanceSet> LibraDBClusterDetail::GetInstanceSet() const
{
    return m_instanceSet;
}

void LibraDBClusterDetail::SetInstanceSet(const vector<InstanceSet>& _instanceSet)
{
    m_instanceSet = _instanceSet;
    m_instanceSetHasBeenSet = true;
}

bool LibraDBClusterDetail::InstanceSetHasBeenSet() const
{
    return m_instanceSetHasBeenSet;
}

int64_t LibraDBClusterDetail::GetPayMode() const
{
    return m_payMode;
}

void LibraDBClusterDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool LibraDBClusterDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string LibraDBClusterDetail::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void LibraDBClusterDetail::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool LibraDBClusterDetail::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t LibraDBClusterDetail::GetProjectID() const
{
    return m_projectID;
}

void LibraDBClusterDetail::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool LibraDBClusterDetail::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

int64_t LibraDBClusterDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void LibraDBClusterDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool LibraDBClusterDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string LibraDBClusterDetail::GetCynosVersionTag() const
{
    return m_cynosVersionTag;
}

void LibraDBClusterDetail::SetCynosVersionTag(const string& _cynosVersionTag)
{
    m_cynosVersionTag = _cynosVersionTag;
    m_cynosVersionTagHasBeenSet = true;
}

bool LibraDBClusterDetail::CynosVersionTagHasBeenSet() const
{
    return m_cynosVersionTagHasBeenSet;
}

string LibraDBClusterDetail::GetNoSupportAddRo() const
{
    return m_noSupportAddRo;
}

void LibraDBClusterDetail::SetNoSupportAddRo(const string& _noSupportAddRo)
{
    m_noSupportAddRo = _noSupportAddRo;
    m_noSupportAddRoHasBeenSet = true;
}

bool LibraDBClusterDetail::NoSupportAddRoHasBeenSet() const
{
    return m_noSupportAddRoHasBeenSet;
}

string LibraDBClusterDetail::GetZone() const
{
    return m_zone;
}

void LibraDBClusterDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LibraDBClusterDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string LibraDBClusterDetail::GetPhysicalZone() const
{
    return m_physicalZone;
}

void LibraDBClusterDetail::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool LibraDBClusterDetail::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

