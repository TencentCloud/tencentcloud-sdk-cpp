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

#include <tencentcloud/ckafka/v20190819/model/InstanceAttributesResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceAttributesResponse::InstanceAttributesResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_healthyMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_msgRetentionTimeHasBeenSet(false),
    m_configHasBeenSet(false),
    m_remainderPartitionsHasBeenSet(false),
    m_remainderTopicsHasBeenSet(false),
    m_createdPartitionsHasBeenSet(false),
    m_createdTopicsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_zoneIdsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false),
    m_cvmHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_retentionTimeConfigHasBeenSet(false),
    m_maxConnectionHasBeenSet(false),
    m_publicNetworkHasBeenSet(false),
    m_deleteRouteTimestampHasBeenSet(false),
    m_remainingPartitionsHasBeenSet(false),
    m_remainingTopicsHasBeenSet(false),
    m_dynamicDiskConfigHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_freePartitionNumberHasBeenSet(false),
    m_elasticFloatBandwidthHasBeenSet(false),
    m_customCertIdHasBeenSet(false),
    m_uncleanLeaderElectionEnableHasBeenSet(false),
    m_deleteProtectionEnableHasBeenSet(false)
{
}

CoreInternalOutcome InstanceAttributesResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VipList") && !value["VipList"].IsNull())
    {
        if (!value["VipList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.VipList` is not array type"));

        const rapidjson::Value &tmpValue = value["VipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VipEntity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vipList.push_back(item);
        }
        m_vipListHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Vport` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vport = string(value["Vport"].GetString());
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Bandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetInt64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("HealthyMessage") && !value["HealthyMessage"].IsNull())
    {
        if (!value["HealthyMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.HealthyMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyMessage = string(value["HealthyMessage"].GetString());
        m_healthyMessageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionTime") && !value["MsgRetentionTime"].IsNull())
    {
        if (!value["MsgRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.MsgRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionTime = value["MsgRetentionTime"].GetInt64();
        m_msgRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("RemainderPartitions") && !value["RemainderPartitions"].IsNull())
    {
        if (!value["RemainderPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.RemainderPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainderPartitions = value["RemainderPartitions"].GetInt64();
        m_remainderPartitionsHasBeenSet = true;
    }

    if (value.HasMember("RemainderTopics") && !value["RemainderTopics"].IsNull())
    {
        if (!value["RemainderTopics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.RemainderTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainderTopics = value["RemainderTopics"].GetInt64();
        m_remainderTopicsHasBeenSet = true;
    }

    if (value.HasMember("CreatedPartitions") && !value["CreatedPartitions"].IsNull())
    {
        if (!value["CreatedPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.CreatedPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdPartitions = value["CreatedPartitions"].GetInt64();
        m_createdPartitionsHasBeenSet = true;
    }

    if (value.HasMember("CreatedTopics") && !value["CreatedTopics"].IsNull())
    {
        if (!value["CreatedTopics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.CreatedTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdTopics = value["CreatedTopics"].GetInt64();
        m_createdTopicsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Tags` is not array type"));

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

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("ZoneIds") && !value["ZoneIds"].IsNull())
    {
        if (!value["ZoneIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.ZoneIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ZoneIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zoneIds.push_back((*itr).GetInt64());
        }
        m_zoneIdsHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("MaxGroupNum") && !value["MaxGroupNum"].IsNull())
    {
        if (!value["MaxGroupNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.MaxGroupNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = value["MaxGroupNum"].GetInt64();
        m_maxGroupNumHasBeenSet = true;
    }

    if (value.HasMember("Cvm") && !value["Cvm"].IsNull())
    {
        if (!value["Cvm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Cvm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cvm = value["Cvm"].GetInt64();
        m_cvmHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Features") && !value["Features"].IsNull())
    {
        if (!value["Features"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.Features` is not array type"));

        const rapidjson::Value &tmpValue = value["Features"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_features.push_back((*itr).GetString());
        }
        m_featuresHasBeenSet = true;
    }

    if (value.HasMember("RetentionTimeConfig") && !value["RetentionTimeConfig"].IsNull())
    {
        if (!value["RetentionTimeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.RetentionTimeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_retentionTimeConfig.Deserialize(value["RetentionTimeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_retentionTimeConfigHasBeenSet = true;
    }

    if (value.HasMember("MaxConnection") && !value["MaxConnection"].IsNull())
    {
        if (!value["MaxConnection"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.MaxConnection` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConnection = value["MaxConnection"].GetUint64();
        m_maxConnectionHasBeenSet = true;
    }

    if (value.HasMember("PublicNetwork") && !value["PublicNetwork"].IsNull())
    {
        if (!value["PublicNetwork"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.PublicNetwork` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetwork = value["PublicNetwork"].GetInt64();
        m_publicNetworkHasBeenSet = true;
    }

    if (value.HasMember("DeleteRouteTimestamp") && !value["DeleteRouteTimestamp"].IsNull())
    {
        if (!value["DeleteRouteTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.DeleteRouteTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteRouteTimestamp = string(value["DeleteRouteTimestamp"].GetString());
        m_deleteRouteTimestampHasBeenSet = true;
    }

    if (value.HasMember("RemainingPartitions") && !value["RemainingPartitions"].IsNull())
    {
        if (!value["RemainingPartitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.RemainingPartitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingPartitions = value["RemainingPartitions"].GetInt64();
        m_remainingPartitionsHasBeenSet = true;
    }

    if (value.HasMember("RemainingTopics") && !value["RemainingTopics"].IsNull())
    {
        if (!value["RemainingTopics"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.RemainingTopics` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingTopics = value["RemainingTopics"].GetInt64();
        m_remainingTopicsHasBeenSet = true;
    }

    if (value.HasMember("DynamicDiskConfig") && !value["DynamicDiskConfig"].IsNull())
    {
        if (!value["DynamicDiskConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.DynamicDiskConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dynamicDiskConfig.Deserialize(value["DynamicDiskConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dynamicDiskConfigHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("FreePartitionNumber") && !value["FreePartitionNumber"].IsNull())
    {
        if (!value["FreePartitionNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.FreePartitionNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freePartitionNumber = value["FreePartitionNumber"].GetInt64();
        m_freePartitionNumberHasBeenSet = true;
    }

    if (value.HasMember("ElasticFloatBandwidth") && !value["ElasticFloatBandwidth"].IsNull())
    {
        if (!value["ElasticFloatBandwidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.ElasticFloatBandwidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticFloatBandwidth = value["ElasticFloatBandwidth"].GetInt64();
        m_elasticFloatBandwidthHasBeenSet = true;
    }

    if (value.HasMember("CustomCertId") && !value["CustomCertId"].IsNull())
    {
        if (!value["CustomCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.CustomCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customCertId = string(value["CustomCertId"].GetString());
        m_customCertIdHasBeenSet = true;
    }

    if (value.HasMember("UncleanLeaderElectionEnable") && !value["UncleanLeaderElectionEnable"].IsNull())
    {
        if (!value["UncleanLeaderElectionEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.UncleanLeaderElectionEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uncleanLeaderElectionEnable = value["UncleanLeaderElectionEnable"].GetInt64();
        m_uncleanLeaderElectionEnableHasBeenSet = true;
    }

    if (value.HasMember("DeleteProtectionEnable") && !value["DeleteProtectionEnable"].IsNull())
    {
        if (!value["DeleteProtectionEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceAttributesResponse.DeleteProtectionEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteProtectionEnable = value["DeleteProtectionEnable"].GetInt64();
        m_deleteProtectionEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceAttributesResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_vipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vipList.begin(); itr != m_vipList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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
        value.AddMember(iKey, rapidjson::Value(m_vport.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
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

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_healthyMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthyMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_msgRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionTime, allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_remainderPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainderPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainderPartitions, allocator);
    }

    if (m_remainderTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainderTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainderTopics, allocator);
    }

    if (m_createdPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdPartitions, allocator);
    }

    if (m_createdTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdTopics, allocator);
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

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_zoneIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zoneIds.begin(); itr != m_zoneIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_maxGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGroupNum, allocator);
    }

    if (m_cvmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cvm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvm, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_featuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Features";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_features.begin(); itr != m_features.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_retentionTimeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionTimeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionTimeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConnection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConnection, allocator);
    }

    if (m_publicNetworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetwork";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicNetwork, allocator);
    }

    if (m_deleteRouteTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteRouteTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteRouteTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_remainingPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingPartitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingPartitions, allocator);
    }

    if (m_remainingTopicsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingTopics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingTopics, allocator);
    }

    if (m_dynamicDiskConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicDiskConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicDiskConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_freePartitionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreePartitionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freePartitionNumber, allocator);
    }

    if (m_elasticFloatBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticFloatBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticFloatBandwidth, allocator);
    }

    if (m_customCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_uncleanLeaderElectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncleanLeaderElectionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncleanLeaderElectionEnable, allocator);
    }

    if (m_deleteProtectionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteProtectionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteProtectionEnable, allocator);
    }

}


string InstanceAttributesResponse::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceAttributesResponse::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceAttributesResponse::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceAttributesResponse::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<VipEntity> InstanceAttributesResponse::GetVipList() const
{
    return m_vipList;
}

void InstanceAttributesResponse::SetVipList(const vector<VipEntity>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool InstanceAttributesResponse::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

string InstanceAttributesResponse::GetVip() const
{
    return m_vip;
}

void InstanceAttributesResponse::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceAttributesResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string InstanceAttributesResponse::GetVport() const
{
    return m_vport;
}

void InstanceAttributesResponse::SetVport(const string& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceAttributesResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t InstanceAttributesResponse::GetStatus() const
{
    return m_status;
}

void InstanceAttributesResponse::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceAttributesResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceAttributesResponse::GetBandwidth() const
{
    return m_bandwidth;
}

void InstanceAttributesResponse::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool InstanceAttributesResponse::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t InstanceAttributesResponse::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceAttributesResponse::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceAttributesResponse::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

int64_t InstanceAttributesResponse::GetZoneId() const
{
    return m_zoneId;
}

void InstanceAttributesResponse::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceAttributesResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string InstanceAttributesResponse::GetVpcId() const
{
    return m_vpcId;
}

void InstanceAttributesResponse::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceAttributesResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InstanceAttributesResponse::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceAttributesResponse::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceAttributesResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceAttributesResponse::GetHealthy() const
{
    return m_healthy;
}

void InstanceAttributesResponse::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool InstanceAttributesResponse::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string InstanceAttributesResponse::GetHealthyMessage() const
{
    return m_healthyMessage;
}

void InstanceAttributesResponse::SetHealthyMessage(const string& _healthyMessage)
{
    m_healthyMessage = _healthyMessage;
    m_healthyMessageHasBeenSet = true;
}

bool InstanceAttributesResponse::HealthyMessageHasBeenSet() const
{
    return m_healthyMessageHasBeenSet;
}

uint64_t InstanceAttributesResponse::GetCreateTime() const
{
    return m_createTime;
}

void InstanceAttributesResponse::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t InstanceAttributesResponse::GetMsgRetentionTime() const
{
    return m_msgRetentionTime;
}

void InstanceAttributesResponse::SetMsgRetentionTime(const int64_t& _msgRetentionTime)
{
    m_msgRetentionTime = _msgRetentionTime;
    m_msgRetentionTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::MsgRetentionTimeHasBeenSet() const
{
    return m_msgRetentionTimeHasBeenSet;
}

InstanceConfigDO InstanceAttributesResponse::GetConfig() const
{
    return m_config;
}

void InstanceAttributesResponse::SetConfig(const InstanceConfigDO& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool InstanceAttributesResponse::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainderPartitions() const
{
    return m_remainderPartitions;
}

void InstanceAttributesResponse::SetRemainderPartitions(const int64_t& _remainderPartitions)
{
    m_remainderPartitions = _remainderPartitions;
    m_remainderPartitionsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainderPartitionsHasBeenSet() const
{
    return m_remainderPartitionsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainderTopics() const
{
    return m_remainderTopics;
}

void InstanceAttributesResponse::SetRemainderTopics(const int64_t& _remainderTopics)
{
    m_remainderTopics = _remainderTopics;
    m_remainderTopicsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainderTopicsHasBeenSet() const
{
    return m_remainderTopicsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCreatedPartitions() const
{
    return m_createdPartitions;
}

void InstanceAttributesResponse::SetCreatedPartitions(const int64_t& _createdPartitions)
{
    m_createdPartitions = _createdPartitions;
    m_createdPartitionsHasBeenSet = true;
}

bool InstanceAttributesResponse::CreatedPartitionsHasBeenSet() const
{
    return m_createdPartitionsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCreatedTopics() const
{
    return m_createdTopics;
}

void InstanceAttributesResponse::SetCreatedTopics(const int64_t& _createdTopics)
{
    m_createdTopics = _createdTopics;
    m_createdTopicsHasBeenSet = true;
}

bool InstanceAttributesResponse::CreatedTopicsHasBeenSet() const
{
    return m_createdTopicsHasBeenSet;
}

vector<Tag> InstanceAttributesResponse::GetTags() const
{
    return m_tags;
}

void InstanceAttributesResponse::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceAttributesResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t InstanceAttributesResponse::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceAttributesResponse::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceAttributesResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<int64_t> InstanceAttributesResponse::GetZoneIds() const
{
    return m_zoneIds;
}

void InstanceAttributesResponse::SetZoneIds(const vector<int64_t>& _zoneIds)
{
    m_zoneIds = _zoneIds;
    m_zoneIdsHasBeenSet = true;
}

bool InstanceAttributesResponse::ZoneIdsHasBeenSet() const
{
    return m_zoneIdsHasBeenSet;
}

string InstanceAttributesResponse::GetVersion() const
{
    return m_version;
}

void InstanceAttributesResponse::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceAttributesResponse::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t InstanceAttributesResponse::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

void InstanceAttributesResponse::SetMaxGroupNum(const int64_t& _maxGroupNum)
{
    m_maxGroupNum = _maxGroupNum;
    m_maxGroupNumHasBeenSet = true;
}

bool InstanceAttributesResponse::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

int64_t InstanceAttributesResponse::GetCvm() const
{
    return m_cvm;
}

void InstanceAttributesResponse::SetCvm(const int64_t& _cvm)
{
    m_cvm = _cvm;
    m_cvmHasBeenSet = true;
}

bool InstanceAttributesResponse::CvmHasBeenSet() const
{
    return m_cvmHasBeenSet;
}

string InstanceAttributesResponse::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceAttributesResponse::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> InstanceAttributesResponse::GetFeatures() const
{
    return m_features;
}

void InstanceAttributesResponse::SetFeatures(const vector<string>& _features)
{
    m_features = _features;
    m_featuresHasBeenSet = true;
}

bool InstanceAttributesResponse::FeaturesHasBeenSet() const
{
    return m_featuresHasBeenSet;
}

DynamicRetentionTime InstanceAttributesResponse::GetRetentionTimeConfig() const
{
    return m_retentionTimeConfig;
}

void InstanceAttributesResponse::SetRetentionTimeConfig(const DynamicRetentionTime& _retentionTimeConfig)
{
    m_retentionTimeConfig = _retentionTimeConfig;
    m_retentionTimeConfigHasBeenSet = true;
}

bool InstanceAttributesResponse::RetentionTimeConfigHasBeenSet() const
{
    return m_retentionTimeConfigHasBeenSet;
}

uint64_t InstanceAttributesResponse::GetMaxConnection() const
{
    return m_maxConnection;
}

void InstanceAttributesResponse::SetMaxConnection(const uint64_t& _maxConnection)
{
    m_maxConnection = _maxConnection;
    m_maxConnectionHasBeenSet = true;
}

bool InstanceAttributesResponse::MaxConnectionHasBeenSet() const
{
    return m_maxConnectionHasBeenSet;
}

int64_t InstanceAttributesResponse::GetPublicNetwork() const
{
    return m_publicNetwork;
}

void InstanceAttributesResponse::SetPublicNetwork(const int64_t& _publicNetwork)
{
    m_publicNetwork = _publicNetwork;
    m_publicNetworkHasBeenSet = true;
}

bool InstanceAttributesResponse::PublicNetworkHasBeenSet() const
{
    return m_publicNetworkHasBeenSet;
}

string InstanceAttributesResponse::GetDeleteRouteTimestamp() const
{
    return m_deleteRouteTimestamp;
}

void InstanceAttributesResponse::SetDeleteRouteTimestamp(const string& _deleteRouteTimestamp)
{
    m_deleteRouteTimestamp = _deleteRouteTimestamp;
    m_deleteRouteTimestampHasBeenSet = true;
}

bool InstanceAttributesResponse::DeleteRouteTimestampHasBeenSet() const
{
    return m_deleteRouteTimestampHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainingPartitions() const
{
    return m_remainingPartitions;
}

void InstanceAttributesResponse::SetRemainingPartitions(const int64_t& _remainingPartitions)
{
    m_remainingPartitions = _remainingPartitions;
    m_remainingPartitionsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainingPartitionsHasBeenSet() const
{
    return m_remainingPartitionsHasBeenSet;
}

int64_t InstanceAttributesResponse::GetRemainingTopics() const
{
    return m_remainingTopics;
}

void InstanceAttributesResponse::SetRemainingTopics(const int64_t& _remainingTopics)
{
    m_remainingTopics = _remainingTopics;
    m_remainingTopicsHasBeenSet = true;
}

bool InstanceAttributesResponse::RemainingTopicsHasBeenSet() const
{
    return m_remainingTopicsHasBeenSet;
}

DynamicDiskConfig InstanceAttributesResponse::GetDynamicDiskConfig() const
{
    return m_dynamicDiskConfig;
}

void InstanceAttributesResponse::SetDynamicDiskConfig(const DynamicDiskConfig& _dynamicDiskConfig)
{
    m_dynamicDiskConfig = _dynamicDiskConfig;
    m_dynamicDiskConfigHasBeenSet = true;
}

bool InstanceAttributesResponse::DynamicDiskConfigHasBeenSet() const
{
    return m_dynamicDiskConfigHasBeenSet;
}

string InstanceAttributesResponse::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InstanceAttributesResponse::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InstanceAttributesResponse::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string InstanceAttributesResponse::GetClusterType() const
{
    return m_clusterType;
}

void InstanceAttributesResponse::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool InstanceAttributesResponse::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t InstanceAttributesResponse::GetFreePartitionNumber() const
{
    return m_freePartitionNumber;
}

void InstanceAttributesResponse::SetFreePartitionNumber(const int64_t& _freePartitionNumber)
{
    m_freePartitionNumber = _freePartitionNumber;
    m_freePartitionNumberHasBeenSet = true;
}

bool InstanceAttributesResponse::FreePartitionNumberHasBeenSet() const
{
    return m_freePartitionNumberHasBeenSet;
}

int64_t InstanceAttributesResponse::GetElasticFloatBandwidth() const
{
    return m_elasticFloatBandwidth;
}

void InstanceAttributesResponse::SetElasticFloatBandwidth(const int64_t& _elasticFloatBandwidth)
{
    m_elasticFloatBandwidth = _elasticFloatBandwidth;
    m_elasticFloatBandwidthHasBeenSet = true;
}

bool InstanceAttributesResponse::ElasticFloatBandwidthHasBeenSet() const
{
    return m_elasticFloatBandwidthHasBeenSet;
}

string InstanceAttributesResponse::GetCustomCertId() const
{
    return m_customCertId;
}

void InstanceAttributesResponse::SetCustomCertId(const string& _customCertId)
{
    m_customCertId = _customCertId;
    m_customCertIdHasBeenSet = true;
}

bool InstanceAttributesResponse::CustomCertIdHasBeenSet() const
{
    return m_customCertIdHasBeenSet;
}

int64_t InstanceAttributesResponse::GetUncleanLeaderElectionEnable() const
{
    return m_uncleanLeaderElectionEnable;
}

void InstanceAttributesResponse::SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable)
{
    m_uncleanLeaderElectionEnable = _uncleanLeaderElectionEnable;
    m_uncleanLeaderElectionEnableHasBeenSet = true;
}

bool InstanceAttributesResponse::UncleanLeaderElectionEnableHasBeenSet() const
{
    return m_uncleanLeaderElectionEnableHasBeenSet;
}

int64_t InstanceAttributesResponse::GetDeleteProtectionEnable() const
{
    return m_deleteProtectionEnable;
}

void InstanceAttributesResponse::SetDeleteProtectionEnable(const int64_t& _deleteProtectionEnable)
{
    m_deleteProtectionEnable = _deleteProtectionEnable;
    m_deleteProtectionEnableHasBeenSet = true;
}

bool InstanceAttributesResponse::DeleteProtectionEnableHasBeenSet() const
{
    return m_deleteProtectionEnableHasBeenSet;
}

