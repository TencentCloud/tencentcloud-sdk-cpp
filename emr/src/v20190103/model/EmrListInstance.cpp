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

#include <tencentcloud/emr/v20190103/model/EmrListInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

EmrListInstance::EmrListInstance() :
    m_clusterIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_runTimeHasBeenSet(false),
    m_masterIpHasBeenSet(false),
    m_emrVersionHasBeenSet(false),
    m_chargeTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_alarmInfoHasBeenSet(false),
    m_isWoodpeckerClusterHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_clusterClassHasBeenSet(false),
    m_isMultiZoneClusterHasBeenSet(false),
    m_isHandsClusterHasBeenSet(false),
    m_outSideSoftInfoHasBeenSet(false),
    m_isSupportOutsideClusterHasBeenSet(false),
    m_isDedicatedClusterHasBeenSet(false),
    m_isSupportCloneHasBeenSet(false)
{
}

CoreInternalOutcome EmrListInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("RunTime") && !value["RunTime"].IsNull())
    {
        if (!value["RunTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.RunTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runTime = string(value["RunTime"].GetString());
        m_runTimeHasBeenSet = true;
    }

    if (value.HasMember("MasterIp") && !value["MasterIp"].IsNull())
    {
        if (!value["MasterIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.MasterIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterIp = string(value["MasterIp"].GetString());
        m_masterIpHasBeenSet = true;
    }

    if (value.HasMember("EmrVersion") && !value["EmrVersion"].IsNull())
    {
        if (!value["EmrVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.EmrVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emrVersion = string(value["EmrVersion"].GetString());
        m_emrVersionHasBeenSet = true;
    }

    if (value.HasMember("ChargeType") && !value["ChargeType"].IsNull())
    {
        if (!value["ChargeType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ChargeType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeType = value["ChargeType"].GetUint64();
        m_chargeTypeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ProductId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productId = value["ProductId"].GetUint64();
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.SubnetId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetUint64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.VpcId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetUint64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("AlarmInfo") && !value["AlarmInfo"].IsNull())
    {
        if (!value["AlarmInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.AlarmInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmInfo = string(value["AlarmInfo"].GetString());
        m_alarmInfoHasBeenSet = true;
    }

    if (value.HasMember("IsWoodpeckerCluster") && !value["IsWoodpeckerCluster"].IsNull())
    {
        if (!value["IsWoodpeckerCluster"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsWoodpeckerCluster` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isWoodpeckerCluster = value["IsWoodpeckerCluster"].GetUint64();
        m_isWoodpeckerClusterHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterClass") && !value["ClusterClass"].IsNull())
    {
        if (!value["ClusterClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.ClusterClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterClass = string(value["ClusterClass"].GetString());
        m_clusterClassHasBeenSet = true;
    }

    if (value.HasMember("IsMultiZoneCluster") && !value["IsMultiZoneCluster"].IsNull())
    {
        if (!value["IsMultiZoneCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsMultiZoneCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMultiZoneCluster = value["IsMultiZoneCluster"].GetBool();
        m_isMultiZoneClusterHasBeenSet = true;
    }

    if (value.HasMember("IsHandsCluster") && !value["IsHandsCluster"].IsNull())
    {
        if (!value["IsHandsCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsHandsCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isHandsCluster = value["IsHandsCluster"].GetBool();
        m_isHandsClusterHasBeenSet = true;
    }

    if (value.HasMember("OutSideSoftInfo") && !value["OutSideSoftInfo"].IsNull())
    {
        if (!value["OutSideSoftInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.OutSideSoftInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["OutSideSoftInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SoftDependInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outSideSoftInfo.push_back(item);
        }
        m_outSideSoftInfoHasBeenSet = true;
    }

    if (value.HasMember("IsSupportOutsideCluster") && !value["IsSupportOutsideCluster"].IsNull())
    {
        if (!value["IsSupportOutsideCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsSupportOutsideCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportOutsideCluster = value["IsSupportOutsideCluster"].GetBool();
        m_isSupportOutsideClusterHasBeenSet = true;
    }

    if (value.HasMember("IsDedicatedCluster") && !value["IsDedicatedCluster"].IsNull())
    {
        if (!value["IsDedicatedCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsDedicatedCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDedicatedCluster = value["IsDedicatedCluster"].GetBool();
        m_isDedicatedClusterHasBeenSet = true;
    }

    if (value.HasMember("IsSupportClone") && !value["IsSupportClone"].IsNull())
    {
        if (!value["IsSupportClone"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EmrListInstance.IsSupportClone` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportClone = value["IsSupportClone"].GetBool();
        m_isSupportCloneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EmrListInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runTime.c_str(), allocator).Move(), allocator);
    }

    if (m_masterIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterIp.c_str(), allocator).Move(), allocator);
    }

    if (m_emrVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmrVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emrVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeType, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcId, allocator);
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
        value.AddMember(iKey, m_status, allocator);
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

    if (m_alarmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isWoodpeckerClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWoodpeckerCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWoodpeckerCluster, allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterClass.c_str(), allocator).Move(), allocator);
    }

    if (m_isMultiZoneClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMultiZoneCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMultiZoneCluster, allocator);
    }

    if (m_isHandsClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHandsCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHandsCluster, allocator);
    }

    if (m_outSideSoftInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSideSoftInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outSideSoftInfo.begin(); itr != m_outSideSoftInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isSupportOutsideClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportOutsideCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportOutsideCluster, allocator);
    }

    if (m_isDedicatedClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDedicatedCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDedicatedCluster, allocator);
    }

    if (m_isSupportCloneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportClone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportClone, allocator);
    }

}


string EmrListInstance::GetClusterId() const
{
    return m_clusterId;
}

void EmrListInstance::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool EmrListInstance::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string EmrListInstance::GetStatusDesc() const
{
    return m_statusDesc;
}

void EmrListInstance::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool EmrListInstance::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string EmrListInstance::GetClusterName() const
{
    return m_clusterName;
}

void EmrListInstance::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool EmrListInstance::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t EmrListInstance::GetZoneId() const
{
    return m_zoneId;
}

void EmrListInstance::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool EmrListInstance::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t EmrListInstance::GetAppId() const
{
    return m_appId;
}

void EmrListInstance::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool EmrListInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string EmrListInstance::GetAddTime() const
{
    return m_addTime;
}

void EmrListInstance::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool EmrListInstance::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string EmrListInstance::GetRunTime() const
{
    return m_runTime;
}

void EmrListInstance::SetRunTime(const string& _runTime)
{
    m_runTime = _runTime;
    m_runTimeHasBeenSet = true;
}

bool EmrListInstance::RunTimeHasBeenSet() const
{
    return m_runTimeHasBeenSet;
}

string EmrListInstance::GetMasterIp() const
{
    return m_masterIp;
}

void EmrListInstance::SetMasterIp(const string& _masterIp)
{
    m_masterIp = _masterIp;
    m_masterIpHasBeenSet = true;
}

bool EmrListInstance::MasterIpHasBeenSet() const
{
    return m_masterIpHasBeenSet;
}

string EmrListInstance::GetEmrVersion() const
{
    return m_emrVersion;
}

void EmrListInstance::SetEmrVersion(const string& _emrVersion)
{
    m_emrVersion = _emrVersion;
    m_emrVersionHasBeenSet = true;
}

bool EmrListInstance::EmrVersionHasBeenSet() const
{
    return m_emrVersionHasBeenSet;
}

uint64_t EmrListInstance::GetChargeType() const
{
    return m_chargeType;
}

void EmrListInstance::SetChargeType(const uint64_t& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool EmrListInstance::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}

uint64_t EmrListInstance::GetId() const
{
    return m_id;
}

void EmrListInstance::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool EmrListInstance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t EmrListInstance::GetProductId() const
{
    return m_productId;
}

void EmrListInstance::SetProductId(const uint64_t& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool EmrListInstance::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t EmrListInstance::GetProjectId() const
{
    return m_projectId;
}

void EmrListInstance::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool EmrListInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t EmrListInstance::GetRegionId() const
{
    return m_regionId;
}

void EmrListInstance::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool EmrListInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

uint64_t EmrListInstance::GetSubnetId() const
{
    return m_subnetId;
}

void EmrListInstance::SetSubnetId(const uint64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool EmrListInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t EmrListInstance::GetVpcId() const
{
    return m_vpcId;
}

void EmrListInstance::SetVpcId(const uint64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool EmrListInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string EmrListInstance::GetZone() const
{
    return m_zone;
}

void EmrListInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool EmrListInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t EmrListInstance::GetStatus() const
{
    return m_status;
}

void EmrListInstance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EmrListInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Tag> EmrListInstance::GetTags() const
{
    return m_tags;
}

void EmrListInstance::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool EmrListInstance::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string EmrListInstance::GetAlarmInfo() const
{
    return m_alarmInfo;
}

void EmrListInstance::SetAlarmInfo(const string& _alarmInfo)
{
    m_alarmInfo = _alarmInfo;
    m_alarmInfoHasBeenSet = true;
}

bool EmrListInstance::AlarmInfoHasBeenSet() const
{
    return m_alarmInfoHasBeenSet;
}

uint64_t EmrListInstance::GetIsWoodpeckerCluster() const
{
    return m_isWoodpeckerCluster;
}

void EmrListInstance::SetIsWoodpeckerCluster(const uint64_t& _isWoodpeckerCluster)
{
    m_isWoodpeckerCluster = _isWoodpeckerCluster;
    m_isWoodpeckerClusterHasBeenSet = true;
}

bool EmrListInstance::IsWoodpeckerClusterHasBeenSet() const
{
    return m_isWoodpeckerClusterHasBeenSet;
}

string EmrListInstance::GetVpcName() const
{
    return m_vpcName;
}

void EmrListInstance::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool EmrListInstance::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

string EmrListInstance::GetSubnetName() const
{
    return m_subnetName;
}

void EmrListInstance::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool EmrListInstance::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string EmrListInstance::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void EmrListInstance::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool EmrListInstance::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string EmrListInstance::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void EmrListInstance::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool EmrListInstance::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string EmrListInstance::GetClusterClass() const
{
    return m_clusterClass;
}

void EmrListInstance::SetClusterClass(const string& _clusterClass)
{
    m_clusterClass = _clusterClass;
    m_clusterClassHasBeenSet = true;
}

bool EmrListInstance::ClusterClassHasBeenSet() const
{
    return m_clusterClassHasBeenSet;
}

bool EmrListInstance::GetIsMultiZoneCluster() const
{
    return m_isMultiZoneCluster;
}

void EmrListInstance::SetIsMultiZoneCluster(const bool& _isMultiZoneCluster)
{
    m_isMultiZoneCluster = _isMultiZoneCluster;
    m_isMultiZoneClusterHasBeenSet = true;
}

bool EmrListInstance::IsMultiZoneClusterHasBeenSet() const
{
    return m_isMultiZoneClusterHasBeenSet;
}

bool EmrListInstance::GetIsHandsCluster() const
{
    return m_isHandsCluster;
}

void EmrListInstance::SetIsHandsCluster(const bool& _isHandsCluster)
{
    m_isHandsCluster = _isHandsCluster;
    m_isHandsClusterHasBeenSet = true;
}

bool EmrListInstance::IsHandsClusterHasBeenSet() const
{
    return m_isHandsClusterHasBeenSet;
}

vector<SoftDependInfo> EmrListInstance::GetOutSideSoftInfo() const
{
    return m_outSideSoftInfo;
}

void EmrListInstance::SetOutSideSoftInfo(const vector<SoftDependInfo>& _outSideSoftInfo)
{
    m_outSideSoftInfo = _outSideSoftInfo;
    m_outSideSoftInfoHasBeenSet = true;
}

bool EmrListInstance::OutSideSoftInfoHasBeenSet() const
{
    return m_outSideSoftInfoHasBeenSet;
}

bool EmrListInstance::GetIsSupportOutsideCluster() const
{
    return m_isSupportOutsideCluster;
}

void EmrListInstance::SetIsSupportOutsideCluster(const bool& _isSupportOutsideCluster)
{
    m_isSupportOutsideCluster = _isSupportOutsideCluster;
    m_isSupportOutsideClusterHasBeenSet = true;
}

bool EmrListInstance::IsSupportOutsideClusterHasBeenSet() const
{
    return m_isSupportOutsideClusterHasBeenSet;
}

bool EmrListInstance::GetIsDedicatedCluster() const
{
    return m_isDedicatedCluster;
}

void EmrListInstance::SetIsDedicatedCluster(const bool& _isDedicatedCluster)
{
    m_isDedicatedCluster = _isDedicatedCluster;
    m_isDedicatedClusterHasBeenSet = true;
}

bool EmrListInstance::IsDedicatedClusterHasBeenSet() const
{
    return m_isDedicatedClusterHasBeenSet;
}

bool EmrListInstance::GetIsSupportClone() const
{
    return m_isSupportClone;
}

void EmrListInstance::SetIsSupportClone(const bool& _isSupportClone)
{
    m_isSupportClone = _isSupportClone;
    m_isSupportCloneHasBeenSet = true;
}

bool EmrListInstance::IsSupportCloneHasBeenSet() const
{
    return m_isSupportCloneHasBeenSet;
}

