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

#include <tencentcloud/emr/v20190103/model/ClusterInstancesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace rapidjson;
using namespace std;

ClusterInstancesInfo::ClusterInstancesInfo() :
    m_idHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_ftitleHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_runTimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_masterIpHasBeenSet(false),
    m_emrVersionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_tradeVersionHasBeenSet(false),
    m_resourceOrderIdHasBeenSet(false),
    m_isTradeClusterHasBeenSet(false),
    m_alarmInfoHasBeenSet(false),
    m_isWoodpeckerClusterHasBeenSet(false),
    m_metaDbHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hiveMetaDbHasBeenSet(false),
    m_serviceClassHasBeenSet(false),
    m_aliasInfoHasBeenSet(false),
    m_productIdHasBeenSet(false)
{
}

CoreInternalOutcome ClusterInstancesInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Ftitle") && !value["Ftitle"].IsNull())
    {
        if (!value["Ftitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Ftitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ftitle = string(value["Ftitle"].GetString());
        m_ftitleHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("RunTime") && !value["RunTime"].IsNull())
    {
        if (!value["RunTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.RunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runTime = string(value["RunTime"].GetString());
        m_runTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("MasterIp") && !value["MasterIp"].IsNull())
    {
        if (!value["MasterIp"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.MasterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterIp = string(value["MasterIp"].GetString());
        m_masterIpHasBeenSet = true;
    }

    if (value.HasMember("EmrVersion") && !value["EmrVersion"].IsNull())
    {
        if (!value["EmrVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.EmrVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrVersion = string(value["EmrVersion"].GetString());
        m_emrVersionHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetInt64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("TradeVersion") && !value["TradeVersion"].IsNull())
    {
        if (!value["TradeVersion"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.TradeVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeVersion = value["TradeVersion"].GetInt64();
        m_tradeVersionHasBeenSet = true;
    }

    if (value.HasMember("ResourceOrderId") && !value["ResourceOrderId"].IsNull())
    {
        if (!value["ResourceOrderId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ResourceOrderId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceOrderId = value["ResourceOrderId"].GetInt64();
        m_resourceOrderIdHasBeenSet = true;
    }

    if (value.HasMember("IsTradeCluster") && !value["IsTradeCluster"].IsNull())
    {
        if (!value["IsTradeCluster"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.IsTradeCluster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTradeCluster = value["IsTradeCluster"].GetInt64();
        m_isTradeClusterHasBeenSet = true;
    }

    if (value.HasMember("AlarmInfo") && !value["AlarmInfo"].IsNull())
    {
        if (!value["AlarmInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.AlarmInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmInfo = string(value["AlarmInfo"].GetString());
        m_alarmInfoHasBeenSet = true;
    }

    if (value.HasMember("IsWoodpeckerCluster") && !value["IsWoodpeckerCluster"].IsNull())
    {
        if (!value["IsWoodpeckerCluster"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.IsWoodpeckerCluster` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isWoodpeckerCluster = value["IsWoodpeckerCluster"].GetInt64();
        m_isWoodpeckerClusterHasBeenSet = true;
    }

    if (value.HasMember("MetaDb") && !value["MetaDb"].IsNull())
    {
        if (!value["MetaDb"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.MetaDb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaDb = string(value["MetaDb"].GetString());
        m_metaDbHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.Tags` is not array type"));

        const Value &tmpValue = value["Tags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (value.HasMember("HiveMetaDb") && !value["HiveMetaDb"].IsNull())
    {
        if (!value["HiveMetaDb"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.HiveMetaDb` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hiveMetaDb = string(value["HiveMetaDb"].GetString());
        m_hiveMetaDbHasBeenSet = true;
    }

    if (value.HasMember("ServiceClass") && !value["ServiceClass"].IsNull())
    {
        if (!value["ServiceClass"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ServiceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceClass = string(value["ServiceClass"].GetString());
        m_serviceClassHasBeenSet = true;
    }

    if (value.HasMember("AliasInfo") && !value["AliasInfo"].IsNull())
    {
        if (!value["AliasInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.AliasInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasInfo = string(value["AliasInfo"].GetString());
        m_aliasInfoHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ClusterInstancesInfo.ProductId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetInt64();
        m_productIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterInstancesInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_ftitleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Ftitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ftitle.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_runTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_masterIpHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MasterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_masterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_emrVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EmrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_emrVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_tradeVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TradeVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeVersion, allocator);
    }

    if (m_resourceOrderIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceOrderId, allocator);
    }

    if (m_isTradeClusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsTradeCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTradeCluster, allocator);
    }

    if (m_alarmInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AlarmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_alarmInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isWoodpeckerClusterHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsWoodpeckerCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWoodpeckerCluster, allocator);
    }

    if (m_metaDbHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaDb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_metaDb.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hiveMetaDbHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HiveMetaDb";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_hiveMetaDb.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceClassHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ServiceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_serviceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AliasInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_aliasInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

}


int64_t ClusterInstancesInfo::GetId() const
{
    return m_id;
}

void ClusterInstancesInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ClusterInstancesInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ClusterInstancesInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterInstancesInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterInstancesInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ClusterInstancesInfo::GetFtitle() const
{
    return m_ftitle;
}

void ClusterInstancesInfo::SetFtitle(const string& _ftitle)
{
    m_ftitle = _ftitle;
    m_ftitleHasBeenSet = true;
}

bool ClusterInstancesInfo::FtitleHasBeenSet() const
{
    return m_ftitleHasBeenSet;
}

string ClusterInstancesInfo::GetClusterName() const
{
    return m_clusterName;
}

void ClusterInstancesInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ClusterInstancesInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

int64_t ClusterInstancesInfo::GetRegionId() const
{
    return m_regionId;
}

void ClusterInstancesInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ClusterInstancesInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetZoneId() const
{
    return m_zoneId;
}

void ClusterInstancesInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ClusterInstancesInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetAppId() const
{
    return m_appId;
}

void ClusterInstancesInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ClusterInstancesInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string ClusterInstancesInfo::GetUin() const
{
    return m_uin;
}

void ClusterInstancesInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ClusterInstancesInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t ClusterInstancesInfo::GetProjectId() const
{
    return m_projectId;
}

void ClusterInstancesInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ClusterInstancesInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetVpcId() const
{
    return m_vpcId;
}

void ClusterInstancesInfo::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ClusterInstancesInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetSubnetId() const
{
    return m_subnetId;
}

void ClusterInstancesInfo::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ClusterInstancesInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetStatus() const
{
    return m_status;
}

void ClusterInstancesInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterInstancesInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterInstancesInfo::GetAddTime() const
{
    return m_addTime;
}

void ClusterInstancesInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool ClusterInstancesInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string ClusterInstancesInfo::GetRunTime() const
{
    return m_runTime;
}

void ClusterInstancesInfo::SetRunTime(const string& _runTime)
{
    m_runTime = _runTime;
    m_runTimeHasBeenSet = true;
}

bool ClusterInstancesInfo::RunTimeHasBeenSet() const
{
    return m_runTimeHasBeenSet;
}

EmrProductConfigOutter ClusterInstancesInfo::GetConfig() const
{
    return m_config;
}

void ClusterInstancesInfo::SetConfig(const EmrProductConfigOutter& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ClusterInstancesInfo::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

string ClusterInstancesInfo::GetMasterIp() const
{
    return m_masterIp;
}

void ClusterInstancesInfo::SetMasterIp(const string& _masterIp)
{
    m_masterIp = _masterIp;
    m_masterIpHasBeenSet = true;
}

bool ClusterInstancesInfo::MasterIpHasBeenSet() const
{
    return m_masterIpHasBeenSet;
}

string ClusterInstancesInfo::GetEmrVersion() const
{
    return m_emrVersion;
}

void ClusterInstancesInfo::SetEmrVersion(const string& _emrVersion)
{
    m_emrVersion = _emrVersion;
    m_emrVersionHasBeenSet = true;
}

bool ClusterInstancesInfo::EmrVersionHasBeenSet() const
{
    return m_emrVersionHasBeenSet;
}

int64_t ClusterInstancesInfo::GetChargeType() const
{
    return m_chargeType;
}

void ClusterInstancesInfo::SetChargeType(const int64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ClusterInstancesInfo::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

int64_t ClusterInstancesInfo::GetTradeVersion() const
{
    return m_tradeVersion;
}

void ClusterInstancesInfo::SetTradeVersion(const int64_t& _tradeVersion)
{
    m_tradeVersion = _tradeVersion;
    m_tradeVersionHasBeenSet = true;
}

bool ClusterInstancesInfo::TradeVersionHasBeenSet() const
{
    return m_tradeVersionHasBeenSet;
}

int64_t ClusterInstancesInfo::GetResourceOrderId() const
{
    return m_resourceOrderId;
}

void ClusterInstancesInfo::SetResourceOrderId(const int64_t& _resourceOrderId)
{
    m_resourceOrderId = _resourceOrderId;
    m_resourceOrderIdHasBeenSet = true;
}

bool ClusterInstancesInfo::ResourceOrderIdHasBeenSet() const
{
    return m_resourceOrderIdHasBeenSet;
}

int64_t ClusterInstancesInfo::GetIsTradeCluster() const
{
    return m_isTradeCluster;
}

void ClusterInstancesInfo::SetIsTradeCluster(const int64_t& _isTradeCluster)
{
    m_isTradeCluster = _isTradeCluster;
    m_isTradeClusterHasBeenSet = true;
}

bool ClusterInstancesInfo::IsTradeClusterHasBeenSet() const
{
    return m_isTradeClusterHasBeenSet;
}

string ClusterInstancesInfo::GetAlarmInfo() const
{
    return m_alarmInfo;
}

void ClusterInstancesInfo::SetAlarmInfo(const string& _alarmInfo)
{
    m_alarmInfo = _alarmInfo;
    m_alarmInfoHasBeenSet = true;
}

bool ClusterInstancesInfo::AlarmInfoHasBeenSet() const
{
    return m_alarmInfoHasBeenSet;
}

int64_t ClusterInstancesInfo::GetIsWoodpeckerCluster() const
{
    return m_isWoodpeckerCluster;
}

void ClusterInstancesInfo::SetIsWoodpeckerCluster(const int64_t& _isWoodpeckerCluster)
{
    m_isWoodpeckerCluster = _isWoodpeckerCluster;
    m_isWoodpeckerClusterHasBeenSet = true;
}

bool ClusterInstancesInfo::IsWoodpeckerClusterHasBeenSet() const
{
    return m_isWoodpeckerClusterHasBeenSet;
}

string ClusterInstancesInfo::GetMetaDb() const
{
    return m_metaDb;
}

void ClusterInstancesInfo::SetMetaDb(const string& _metaDb)
{
    m_metaDb = _metaDb;
    m_metaDbHasBeenSet = true;
}

bool ClusterInstancesInfo::MetaDbHasBeenSet() const
{
    return m_metaDbHasBeenSet;
}

vector<Tag> ClusterInstancesInfo::GetTags() const
{
    return m_tags;
}

void ClusterInstancesInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ClusterInstancesInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ClusterInstancesInfo::GetHiveMetaDb() const
{
    return m_hiveMetaDb;
}

void ClusterInstancesInfo::SetHiveMetaDb(const string& _hiveMetaDb)
{
    m_hiveMetaDb = _hiveMetaDb;
    m_hiveMetaDbHasBeenSet = true;
}

bool ClusterInstancesInfo::HiveMetaDbHasBeenSet() const
{
    return m_hiveMetaDbHasBeenSet;
}

string ClusterInstancesInfo::GetServiceClass() const
{
    return m_serviceClass;
}

void ClusterInstancesInfo::SetServiceClass(const string& _serviceClass)
{
    m_serviceClass = _serviceClass;
    m_serviceClassHasBeenSet = true;
}

bool ClusterInstancesInfo::ServiceClassHasBeenSet() const
{
    return m_serviceClassHasBeenSet;
}

string ClusterInstancesInfo::GetAliasInfo() const
{
    return m_aliasInfo;
}

void ClusterInstancesInfo::SetAliasInfo(const string& _aliasInfo)
{
    m_aliasInfo = _aliasInfo;
    m_aliasInfoHasBeenSet = true;
}

bool ClusterInstancesInfo::AliasInfoHasBeenSet() const
{
    return m_aliasInfoHasBeenSet;
}

int64_t ClusterInstancesInfo::GetProductId() const
{
    return m_productId;
}

void ClusterInstancesInfo::SetProductId(const int64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ClusterInstancesInfo::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

