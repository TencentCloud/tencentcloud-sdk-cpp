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

#include <tencentcloud/cynosdb/v20190107/model/LibraDBClusterSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LibraDBClusterSet::LibraDBClusterSet() :
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_cynosVersionTagHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_isFreezeHasBeenSet(false),
    m_netAddrsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_projectIDHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_physicalZoneHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome LibraDBClusterSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("CynosVersionTag") && !value["CynosVersionTag"].IsNull())
    {
        if (!value["CynosVersionTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.CynosVersionTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersionTag = string(value["CynosVersionTag"].GetString());
        m_cynosVersionTagHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("InstanceNum") && !value["InstanceNum"].IsNull())
    {
        if (!value["InstanceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.InstanceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceNum = value["InstanceNum"].GetInt64();
        m_instanceNumHasBeenSet = true;
    }

    if (value.HasMember("IsFreeze") && !value["IsFreeze"].IsNull())
    {
        if (!value["IsFreeze"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.IsFreeze` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isFreeze = string(value["IsFreeze"].GetString());
        m_isFreezeHasBeenSet = true;
    }

    if (value.HasMember("NetAddrs") && !value["NetAddrs"].IsNull())
    {
        if (!value["NetAddrs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.NetAddrs` is not array type"));

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

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("ProjectID") && !value["ProjectID"].IsNull())
    {
        if (!value["ProjectID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.ProjectID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectID = value["ProjectID"].GetInt64();
        m_projectIDHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Tasks") && !value["Tasks"].IsNull())
    {
        if (!value["Tasks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Tasks` is not array type"));

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

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("MasterZone") && !value["MasterZone"].IsNull())
    {
        if (!value["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(value["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (value.HasMember("PhysicalZone") && !value["PhysicalZone"].IsNull())
    {
        if (!value["PhysicalZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.PhysicalZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_physicalZone = string(value["PhysicalZone"].GetString());
        m_physicalZoneHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBClusterSet.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LibraDBClusterSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_isFreezeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFreeze";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isFreeze.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
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

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
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

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_masterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_physicalZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhysicalZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_physicalZone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


int64_t LibraDBClusterSet::GetAppId() const
{
    return m_appId;
}

void LibraDBClusterSet::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LibraDBClusterSet::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LibraDBClusterSet::GetClusterId() const
{
    return m_clusterId;
}

void LibraDBClusterSet::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool LibraDBClusterSet::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string LibraDBClusterSet::GetClusterName() const
{
    return m_clusterName;
}

void LibraDBClusterSet::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool LibraDBClusterSet::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string LibraDBClusterSet::GetCreateTime() const
{
    return m_createTime;
}

void LibraDBClusterSet::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LibraDBClusterSet::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LibraDBClusterSet::GetCynosVersion() const
{
    return m_cynosVersion;
}

void LibraDBClusterSet::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool LibraDBClusterSet::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

string LibraDBClusterSet::GetCynosVersionTag() const
{
    return m_cynosVersionTag;
}

void LibraDBClusterSet::SetCynosVersionTag(const string& _cynosVersionTag)
{
    m_cynosVersionTag = _cynosVersionTag;
    m_cynosVersionTagHasBeenSet = true;
}

bool LibraDBClusterSet::CynosVersionTagHasBeenSet() const
{
    return m_cynosVersionTagHasBeenSet;
}

string LibraDBClusterSet::GetDbVersion() const
{
    return m_dbVersion;
}

void LibraDBClusterSet::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool LibraDBClusterSet::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t LibraDBClusterSet::GetInstanceNum() const
{
    return m_instanceNum;
}

void LibraDBClusterSet::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool LibraDBClusterSet::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string LibraDBClusterSet::GetIsFreeze() const
{
    return m_isFreeze;
}

void LibraDBClusterSet::SetIsFreeze(const string& _isFreeze)
{
    m_isFreeze = _isFreeze;
    m_isFreezeHasBeenSet = true;
}

bool LibraDBClusterSet::IsFreezeHasBeenSet() const
{
    return m_isFreezeHasBeenSet;
}

vector<NetAddr> LibraDBClusterSet::GetNetAddrs() const
{
    return m_netAddrs;
}

void LibraDBClusterSet::SetNetAddrs(const vector<NetAddr>& _netAddrs)
{
    m_netAddrs = _netAddrs;
    m_netAddrsHasBeenSet = true;
}

bool LibraDBClusterSet::NetAddrsHasBeenSet() const
{
    return m_netAddrsHasBeenSet;
}

int64_t LibraDBClusterSet::GetPayMode() const
{
    return m_payMode;
}

void LibraDBClusterSet::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool LibraDBClusterSet::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string LibraDBClusterSet::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void LibraDBClusterSet::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool LibraDBClusterSet::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t LibraDBClusterSet::GetProjectID() const
{
    return m_projectID;
}

void LibraDBClusterSet::SetProjectID(const int64_t& _projectID)
{
    m_projectID = _projectID;
    m_projectIDHasBeenSet = true;
}

bool LibraDBClusterSet::ProjectIDHasBeenSet() const
{
    return m_projectIDHasBeenSet;
}

string LibraDBClusterSet::GetRegion() const
{
    return m_region;
}

void LibraDBClusterSet::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LibraDBClusterSet::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t LibraDBClusterSet::GetRenewFlag() const
{
    return m_renewFlag;
}

void LibraDBClusterSet::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool LibraDBClusterSet::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string LibraDBClusterSet::GetStatus() const
{
    return m_status;
}

void LibraDBClusterSet::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LibraDBClusterSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LibraDBClusterSet::GetStatusDesc() const
{
    return m_statusDesc;
}

void LibraDBClusterSet::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool LibraDBClusterSet::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t LibraDBClusterSet::GetStorage() const
{
    return m_storage;
}

void LibraDBClusterSet::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool LibraDBClusterSet::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string LibraDBClusterSet::GetSubnetId() const
{
    return m_subnetId;
}

void LibraDBClusterSet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool LibraDBClusterSet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<ObjectTask> LibraDBClusterSet::GetTasks() const
{
    return m_tasks;
}

void LibraDBClusterSet::SetTasks(const vector<ObjectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool LibraDBClusterSet::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string LibraDBClusterSet::GetUin() const
{
    return m_uin;
}

void LibraDBClusterSet::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool LibraDBClusterSet::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string LibraDBClusterSet::GetVip() const
{
    return m_vip;
}

void LibraDBClusterSet::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool LibraDBClusterSet::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string LibraDBClusterSet::GetVpcId() const
{
    return m_vpcId;
}

void LibraDBClusterSet::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool LibraDBClusterSet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t LibraDBClusterSet::GetVport() const
{
    return m_vport;
}

void LibraDBClusterSet::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool LibraDBClusterSet::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string LibraDBClusterSet::GetUpdateTime() const
{
    return m_updateTime;
}

void LibraDBClusterSet::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool LibraDBClusterSet::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string LibraDBClusterSet::GetMasterZone() const
{
    return m_masterZone;
}

void LibraDBClusterSet::SetMasterZone(const string& _masterZone)
{
    m_masterZone = _masterZone;
    m_masterZoneHasBeenSet = true;
}

bool LibraDBClusterSet::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

string LibraDBClusterSet::GetPhysicalZone() const
{
    return m_physicalZone;
}

void LibraDBClusterSet::SetPhysicalZone(const string& _physicalZone)
{
    m_physicalZone = _physicalZone;
    m_physicalZoneHasBeenSet = true;
}

bool LibraDBClusterSet::PhysicalZoneHasBeenSet() const
{
    return m_physicalZoneHasBeenSet;
}

string LibraDBClusterSet::GetZone() const
{
    return m_zone;
}

void LibraDBClusterSet::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool LibraDBClusterSet::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

