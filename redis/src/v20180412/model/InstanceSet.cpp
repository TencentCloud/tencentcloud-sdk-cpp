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

#include <tencentcloud/redis/v20180412/model/InstanceSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceSet::InstanceSet() :
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_portHasBeenSet(false),
    m_createtimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_sizeUsedHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_productTypeHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_billingModeHasBeenSet(false),
    m_instanceTitleHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceNodeHasBeenSet(false),
    m_redisShardSizeHasBeenSet(false),
    m_redisShardNumHasBeenSet(false),
    m_redisReplicasNumHasBeenSet(false),
    m_priceIdHasBeenSet(false),
    m_closeTimeHasBeenSet(false),
    m_slaveReadWeightHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_noAuthHasBeenSet(false),
    m_clientLimitHasBeenSet(false),
    m_dtsStatusHasBeenSet(false),
    m_netLimitHasBeenSet(false),
    m_passwordFreeHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_iPv6HasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_remainBandwidthDurationHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_monitorVersionHasBeenSet(false),
    m_clientLimitMinHasBeenSet(false),
    m_clientLimitMaxHasBeenSet(false),
    m_nodeSetHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_wanAddressHasBeenSet(false),
    m_polarisServerHasBeenSet(false),
    m_redisClusterIdHasBeenSet(false),
    m_dedicatedClusterIdHasBeenSet(false),
    m_productVersionHasBeenSet(false),
    m_currentProxyVersionHasBeenSet(false),
    m_currentRedisVersionHasBeenSet(false),
    m_upgradeProxyVersionHasBeenSet(false),
    m_upgradeRedisVersionHasBeenSet(false),
    m_backupModeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Appid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetInt64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Createtime") && !value["Createtime"].IsNull())
    {
        if (!value["Createtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Createtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createtime = string(value["Createtime"].GetString());
        m_createtimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Size` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetDouble();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("SizeUsed") && !value["SizeUsed"].IsNull())
    {
        if (!value["SizeUsed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.SizeUsed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sizeUsed = value["SizeUsed"].GetDouble();
        m_sizeUsedHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.BillingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = value["BillingMode"].GetInt64();
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTitle") && !value["InstanceTitle"].IsNull())
    {
        if (!value["InstanceTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTitle = string(value["InstanceTitle"].GetString());
        m_instanceTitleHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.SubStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = value["SubStatus"].GetInt64();
        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceNode") && !value["InstanceNode"].IsNull())
    {
        if (!value["InstanceNode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceNode` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceNode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceNode.push_back(item);
        }
        m_instanceNodeHasBeenSet = true;
    }

    if (value.HasMember("RedisShardSize") && !value["RedisShardSize"].IsNull())
    {
        if (!value["RedisShardSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RedisShardSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardSize = value["RedisShardSize"].GetInt64();
        m_redisShardSizeHasBeenSet = true;
    }

    if (value.HasMember("RedisShardNum") && !value["RedisShardNum"].IsNull())
    {
        if (!value["RedisShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RedisShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardNum = value["RedisShardNum"].GetInt64();
        m_redisShardNumHasBeenSet = true;
    }

    if (value.HasMember("RedisReplicasNum") && !value["RedisReplicasNum"].IsNull())
    {
        if (!value["RedisReplicasNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RedisReplicasNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisReplicasNum = value["RedisReplicasNum"].GetInt64();
        m_redisReplicasNumHasBeenSet = true;
    }

    if (value.HasMember("PriceId") && !value["PriceId"].IsNull())
    {
        if (!value["PriceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.PriceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priceId = value["PriceId"].GetInt64();
        m_priceIdHasBeenSet = true;
    }

    if (value.HasMember("CloseTime") && !value["CloseTime"].IsNull())
    {
        if (!value["CloseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.CloseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_closeTime = string(value["CloseTime"].GetString());
        m_closeTimeHasBeenSet = true;
    }

    if (value.HasMember("SlaveReadWeight") && !value["SlaveReadWeight"].IsNull())
    {
        if (!value["SlaveReadWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.SlaveReadWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slaveReadWeight = value["SlaveReadWeight"].GetInt64();
        m_slaveReadWeightHasBeenSet = true;
    }

    if (value.HasMember("InstanceTags") && !value["InstanceTags"].IsNull())
    {
        if (!value["InstanceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.InstanceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceTagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instanceTags.push_back(item);
        }
        m_instanceTagsHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("NoAuth") && !value["NoAuth"].IsNull())
    {
        if (!value["NoAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.NoAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noAuth = value["NoAuth"].GetBool();
        m_noAuthHasBeenSet = true;
    }

    if (value.HasMember("ClientLimit") && !value["ClientLimit"].IsNull())
    {
        if (!value["ClientLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ClientLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimit = value["ClientLimit"].GetInt64();
        m_clientLimitHasBeenSet = true;
    }

    if (value.HasMember("DtsStatus") && !value["DtsStatus"].IsNull())
    {
        if (!value["DtsStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.DtsStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dtsStatus = value["DtsStatus"].GetInt64();
        m_dtsStatusHasBeenSet = true;
    }

    if (value.HasMember("NetLimit") && !value["NetLimit"].IsNull())
    {
        if (!value["NetLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.NetLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netLimit = value["NetLimit"].GetInt64();
        m_netLimitHasBeenSet = true;
    }

    if (value.HasMember("PasswordFree") && !value["PasswordFree"].IsNull())
    {
        if (!value["PasswordFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.PasswordFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordFree = value["PasswordFree"].GetInt64();
        m_passwordFreeHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("IPv6") && !value["IPv6"].IsNull())
    {
        if (!value["IPv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.IPv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv6 = string(value["IPv6"].GetString());
        m_iPv6HasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ReadOnly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetInt64();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("RemainBandwidthDuration") && !value["RemainBandwidthDuration"].IsNull())
    {
        if (!value["RemainBandwidthDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RemainBandwidthDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remainBandwidthDuration = string(value["RemainBandwidthDuration"].GetString());
        m_remainBandwidthDurationHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("MonitorVersion") && !value["MonitorVersion"].IsNull())
    {
        if (!value["MonitorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.MonitorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorVersion = string(value["MonitorVersion"].GetString());
        m_monitorVersionHasBeenSet = true;
    }

    if (value.HasMember("ClientLimitMin") && !value["ClientLimitMin"].IsNull())
    {
        if (!value["ClientLimitMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ClientLimitMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMin = value["ClientLimitMin"].GetInt64();
        m_clientLimitMinHasBeenSet = true;
    }

    if (value.HasMember("ClientLimitMax") && !value["ClientLimitMax"].IsNull())
    {
        if (!value["ClientLimitMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ClientLimitMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMax = value["ClientLimitMax"].GetInt64();
        m_clientLimitMaxHasBeenSet = true;
    }

    if (value.HasMember("NodeSet") && !value["NodeSet"].IsNull())
    {
        if (!value["NodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceSet.NodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RedisNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeSet.push_back(item);
        }
        m_nodeSetHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("WanAddress") && !value["WanAddress"].IsNull())
    {
        if (!value["WanAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.WanAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanAddress = string(value["WanAddress"].GetString());
        m_wanAddressHasBeenSet = true;
    }

    if (value.HasMember("PolarisServer") && !value["PolarisServer"].IsNull())
    {
        if (!value["PolarisServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.PolarisServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_polarisServer = string(value["PolarisServer"].GetString());
        m_polarisServerHasBeenSet = true;
    }

    if (value.HasMember("RedisClusterId") && !value["RedisClusterId"].IsNull())
    {
        if (!value["RedisClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.RedisClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_redisClusterId = string(value["RedisClusterId"].GetString());
        m_redisClusterIdHasBeenSet = true;
    }

    if (value.HasMember("DedicatedClusterId") && !value["DedicatedClusterId"].IsNull())
    {
        if (!value["DedicatedClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.DedicatedClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedClusterId = string(value["DedicatedClusterId"].GetString());
        m_dedicatedClusterIdHasBeenSet = true;
    }

    if (value.HasMember("ProductVersion") && !value["ProductVersion"].IsNull())
    {
        if (!value["ProductVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.ProductVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productVersion = string(value["ProductVersion"].GetString());
        m_productVersionHasBeenSet = true;
    }

    if (value.HasMember("CurrentProxyVersion") && !value["CurrentProxyVersion"].IsNull())
    {
        if (!value["CurrentProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.CurrentProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentProxyVersion = string(value["CurrentProxyVersion"].GetString());
        m_currentProxyVersionHasBeenSet = true;
    }

    if (value.HasMember("CurrentRedisVersion") && !value["CurrentRedisVersion"].IsNull())
    {
        if (!value["CurrentRedisVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.CurrentRedisVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentRedisVersion = string(value["CurrentRedisVersion"].GetString());
        m_currentRedisVersionHasBeenSet = true;
    }

    if (value.HasMember("UpgradeProxyVersion") && !value["UpgradeProxyVersion"].IsNull())
    {
        if (!value["UpgradeProxyVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.UpgradeProxyVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeProxyVersion = string(value["UpgradeProxyVersion"].GetString());
        m_upgradeProxyVersionHasBeenSet = true;
    }

    if (value.HasMember("UpgradeRedisVersion") && !value["UpgradeRedisVersion"].IsNull())
    {
        if (!value["UpgradeRedisVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.UpgradeRedisVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeRedisVersion = string(value["UpgradeRedisVersion"].GetString());
        m_upgradeRedisVersionHasBeenSet = true;
    }

    if (value.HasMember("BackupMode") && !value["BackupMode"].IsNull())
    {
        if (!value["BackupMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceSet.BackupMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupMode = string(value["BackupMode"].GetString());
        m_backupModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
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
        value.AddMember(iKey, m_vpcId, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_createtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Createtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createtime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_sizeUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeUsed, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_productTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productType.c_str(), allocator).Move(), allocator);
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

    if (m_billingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingMode, allocator);
    }

    if (m_instanceTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subStatus, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceNode.begin(); itr != m_instanceNode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_redisShardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisShardSize, allocator);
    }

    if (m_redisShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisShardNum, allocator);
    }

    if (m_redisReplicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redisReplicasNum, allocator);
    }

    if (m_priceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priceId, allocator);
    }

    if (m_closeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_closeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveReadWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveReadWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slaveReadWeight, allocator);
    }

    if (m_instanceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceTags.begin(); itr != m_instanceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_noAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_noAuth, allocator);
    }

    if (m_clientLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimit, allocator);
    }

    if (m_dtsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DtsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dtsStatus, allocator);
    }

    if (m_netLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netLimit, allocator);
    }

    if (m_passwordFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passwordFree, allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv6.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_remainBandwidthDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainBandwidthDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remainBandwidthDuration.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_monitorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_clientLimitMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimitMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimitMin, allocator);
    }

    if (m_clientLimitMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientLimitMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientLimitMax, allocator);
    }

    if (m_nodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeSet.begin(); itr != m_nodeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_wanAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_polarisServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolarisServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_polarisServer.c_str(), allocator).Move(), allocator);
    }

    if (m_redisClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedisClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_redisClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dedicatedClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_productVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_currentProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_currentRedisVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentRedisVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentRedisVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeProxyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeProxyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeProxyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeRedisVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeRedisVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upgradeRedisVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_backupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupMode.c_str(), allocator).Move(), allocator);
    }

}


string InstanceSet::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceSet::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceSet::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceSet::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceSet::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceSet::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceSet::GetAppid() const
{
    return m_appid;
}

void InstanceSet::SetAppid(const int64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool InstanceSet::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

int64_t InstanceSet::GetProjectId() const
{
    return m_projectId;
}

void InstanceSet::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceSet::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t InstanceSet::GetRegionId() const
{
    return m_regionId;
}

void InstanceSet::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceSet::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t InstanceSet::GetZoneId() const
{
    return m_zoneId;
}

void InstanceSet::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceSet::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InstanceSet::GetVpcId() const
{
    return m_vpcId;
}

void InstanceSet::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceSet::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t InstanceSet::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceSet::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceSet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceSet::GetStatus() const
{
    return m_status;
}

void InstanceSet::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceSet::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceSet::GetWanIp() const
{
    return m_wanIp;
}

void InstanceSet::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool InstanceSet::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

int64_t InstanceSet::GetPort() const
{
    return m_port;
}

void InstanceSet::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool InstanceSet::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string InstanceSet::GetCreatetime() const
{
    return m_createtime;
}

void InstanceSet::SetCreatetime(const string& _createtime)
{
    m_createtime = _createtime;
    m_createtimeHasBeenSet = true;
}

bool InstanceSet::CreatetimeHasBeenSet() const
{
    return m_createtimeHasBeenSet;
}

double InstanceSet::GetSize() const
{
    return m_size;
}

void InstanceSet::SetSize(const double& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool InstanceSet::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

double InstanceSet::GetSizeUsed() const
{
    return m_sizeUsed;
}

void InstanceSet::SetSizeUsed(const double& _sizeUsed)
{
    m_sizeUsed = _sizeUsed;
    m_sizeUsedHasBeenSet = true;
}

bool InstanceSet::SizeUsedHasBeenSet() const
{
    return m_sizeUsedHasBeenSet;
}

int64_t InstanceSet::GetType() const
{
    return m_type;
}

void InstanceSet::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceSet::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t InstanceSet::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceSet::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceSet::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string InstanceSet::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void InstanceSet::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool InstanceSet::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string InstanceSet::GetEngine() const
{
    return m_engine;
}

void InstanceSet::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool InstanceSet::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string InstanceSet::GetProductType() const
{
    return m_productType;
}

void InstanceSet::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool InstanceSet::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string InstanceSet::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void InstanceSet::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool InstanceSet::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string InstanceSet::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void InstanceSet::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool InstanceSet::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t InstanceSet::GetBillingMode() const
{
    return m_billingMode;
}

void InstanceSet::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool InstanceSet::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

string InstanceSet::GetInstanceTitle() const
{
    return m_instanceTitle;
}

void InstanceSet::SetInstanceTitle(const string& _instanceTitle)
{
    m_instanceTitle = _instanceTitle;
    m_instanceTitleHasBeenSet = true;
}

bool InstanceSet::InstanceTitleHasBeenSet() const
{
    return m_instanceTitleHasBeenSet;
}

string InstanceSet::GetOfflineTime() const
{
    return m_offlineTime;
}

void InstanceSet::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool InstanceSet::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

int64_t InstanceSet::GetSubStatus() const
{
    return m_subStatus;
}

void InstanceSet::SetSubStatus(const int64_t& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool InstanceSet::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

vector<string> InstanceSet::GetTags() const
{
    return m_tags;
}

void InstanceSet::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceSet::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<InstanceNode> InstanceSet::GetInstanceNode() const
{
    return m_instanceNode;
}

void InstanceSet::SetInstanceNode(const vector<InstanceNode>& _instanceNode)
{
    m_instanceNode = _instanceNode;
    m_instanceNodeHasBeenSet = true;
}

bool InstanceSet::InstanceNodeHasBeenSet() const
{
    return m_instanceNodeHasBeenSet;
}

int64_t InstanceSet::GetRedisShardSize() const
{
    return m_redisShardSize;
}

void InstanceSet::SetRedisShardSize(const int64_t& _redisShardSize)
{
    m_redisShardSize = _redisShardSize;
    m_redisShardSizeHasBeenSet = true;
}

bool InstanceSet::RedisShardSizeHasBeenSet() const
{
    return m_redisShardSizeHasBeenSet;
}

int64_t InstanceSet::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void InstanceSet::SetRedisShardNum(const int64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool InstanceSet::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

int64_t InstanceSet::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void InstanceSet::SetRedisReplicasNum(const int64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool InstanceSet::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}

int64_t InstanceSet::GetPriceId() const
{
    return m_priceId;
}

void InstanceSet::SetPriceId(const int64_t& _priceId)
{
    m_priceId = _priceId;
    m_priceIdHasBeenSet = true;
}

bool InstanceSet::PriceIdHasBeenSet() const
{
    return m_priceIdHasBeenSet;
}

string InstanceSet::GetCloseTime() const
{
    return m_closeTime;
}

void InstanceSet::SetCloseTime(const string& _closeTime)
{
    m_closeTime = _closeTime;
    m_closeTimeHasBeenSet = true;
}

bool InstanceSet::CloseTimeHasBeenSet() const
{
    return m_closeTimeHasBeenSet;
}

int64_t InstanceSet::GetSlaveReadWeight() const
{
    return m_slaveReadWeight;
}

void InstanceSet::SetSlaveReadWeight(const int64_t& _slaveReadWeight)
{
    m_slaveReadWeight = _slaveReadWeight;
    m_slaveReadWeightHasBeenSet = true;
}

bool InstanceSet::SlaveReadWeightHasBeenSet() const
{
    return m_slaveReadWeightHasBeenSet;
}

vector<InstanceTagInfo> InstanceSet::GetInstanceTags() const
{
    return m_instanceTags;
}

void InstanceSet::SetInstanceTags(const vector<InstanceTagInfo>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool InstanceSet::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

string InstanceSet::GetProjectName() const
{
    return m_projectName;
}

void InstanceSet::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool InstanceSet::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

bool InstanceSet::GetNoAuth() const
{
    return m_noAuth;
}

void InstanceSet::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool InstanceSet::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}

int64_t InstanceSet::GetClientLimit() const
{
    return m_clientLimit;
}

void InstanceSet::SetClientLimit(const int64_t& _clientLimit)
{
    m_clientLimit = _clientLimit;
    m_clientLimitHasBeenSet = true;
}

bool InstanceSet::ClientLimitHasBeenSet() const
{
    return m_clientLimitHasBeenSet;
}

int64_t InstanceSet::GetDtsStatus() const
{
    return m_dtsStatus;
}

void InstanceSet::SetDtsStatus(const int64_t& _dtsStatus)
{
    m_dtsStatus = _dtsStatus;
    m_dtsStatusHasBeenSet = true;
}

bool InstanceSet::DtsStatusHasBeenSet() const
{
    return m_dtsStatusHasBeenSet;
}

int64_t InstanceSet::GetNetLimit() const
{
    return m_netLimit;
}

void InstanceSet::SetNetLimit(const int64_t& _netLimit)
{
    m_netLimit = _netLimit;
    m_netLimitHasBeenSet = true;
}

bool InstanceSet::NetLimitHasBeenSet() const
{
    return m_netLimitHasBeenSet;
}

int64_t InstanceSet::GetPasswordFree() const
{
    return m_passwordFree;
}

void InstanceSet::SetPasswordFree(const int64_t& _passwordFree)
{
    m_passwordFree = _passwordFree;
    m_passwordFreeHasBeenSet = true;
}

bool InstanceSet::PasswordFreeHasBeenSet() const
{
    return m_passwordFreeHasBeenSet;
}

string InstanceSet::GetVip6() const
{
    return m_vip6;
}

void InstanceSet::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool InstanceSet::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

string InstanceSet::GetIPv6() const
{
    return m_iPv6;
}

void InstanceSet::SetIPv6(const string& _iPv6)
{
    m_iPv6 = _iPv6;
    m_iPv6HasBeenSet = true;
}

bool InstanceSet::IPv6HasBeenSet() const
{
    return m_iPv6HasBeenSet;
}

int64_t InstanceSet::GetReadOnly() const
{
    return m_readOnly;
}

void InstanceSet::SetReadOnly(const int64_t& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool InstanceSet::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string InstanceSet::GetRemainBandwidthDuration() const
{
    return m_remainBandwidthDuration;
}

void InstanceSet::SetRemainBandwidthDuration(const string& _remainBandwidthDuration)
{
    m_remainBandwidthDuration = _remainBandwidthDuration;
    m_remainBandwidthDurationHasBeenSet = true;
}

bool InstanceSet::RemainBandwidthDurationHasBeenSet() const
{
    return m_remainBandwidthDurationHasBeenSet;
}

int64_t InstanceSet::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceSet::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceSet::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceSet::GetMonitorVersion() const
{
    return m_monitorVersion;
}

void InstanceSet::SetMonitorVersion(const string& _monitorVersion)
{
    m_monitorVersion = _monitorVersion;
    m_monitorVersionHasBeenSet = true;
}

bool InstanceSet::MonitorVersionHasBeenSet() const
{
    return m_monitorVersionHasBeenSet;
}

int64_t InstanceSet::GetClientLimitMin() const
{
    return m_clientLimitMin;
}

void InstanceSet::SetClientLimitMin(const int64_t& _clientLimitMin)
{
    m_clientLimitMin = _clientLimitMin;
    m_clientLimitMinHasBeenSet = true;
}

bool InstanceSet::ClientLimitMinHasBeenSet() const
{
    return m_clientLimitMinHasBeenSet;
}

int64_t InstanceSet::GetClientLimitMax() const
{
    return m_clientLimitMax;
}

void InstanceSet::SetClientLimitMax(const int64_t& _clientLimitMax)
{
    m_clientLimitMax = _clientLimitMax;
    m_clientLimitMaxHasBeenSet = true;
}

bool InstanceSet::ClientLimitMaxHasBeenSet() const
{
    return m_clientLimitMaxHasBeenSet;
}

vector<RedisNodeInfo> InstanceSet::GetNodeSet() const
{
    return m_nodeSet;
}

void InstanceSet::SetNodeSet(const vector<RedisNodeInfo>& _nodeSet)
{
    m_nodeSet = _nodeSet;
    m_nodeSetHasBeenSet = true;
}

bool InstanceSet::NodeSetHasBeenSet() const
{
    return m_nodeSetHasBeenSet;
}

string InstanceSet::GetRegion() const
{
    return m_region;
}

void InstanceSet::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceSet::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceSet::GetWanAddress() const
{
    return m_wanAddress;
}

void InstanceSet::SetWanAddress(const string& _wanAddress)
{
    m_wanAddress = _wanAddress;
    m_wanAddressHasBeenSet = true;
}

bool InstanceSet::WanAddressHasBeenSet() const
{
    return m_wanAddressHasBeenSet;
}

string InstanceSet::GetPolarisServer() const
{
    return m_polarisServer;
}

void InstanceSet::SetPolarisServer(const string& _polarisServer)
{
    m_polarisServer = _polarisServer;
    m_polarisServerHasBeenSet = true;
}

bool InstanceSet::PolarisServerHasBeenSet() const
{
    return m_polarisServerHasBeenSet;
}

string InstanceSet::GetRedisClusterId() const
{
    return m_redisClusterId;
}

void InstanceSet::SetRedisClusterId(const string& _redisClusterId)
{
    m_redisClusterId = _redisClusterId;
    m_redisClusterIdHasBeenSet = true;
}

bool InstanceSet::RedisClusterIdHasBeenSet() const
{
    return m_redisClusterIdHasBeenSet;
}

string InstanceSet::GetDedicatedClusterId() const
{
    return m_dedicatedClusterId;
}

void InstanceSet::SetDedicatedClusterId(const string& _dedicatedClusterId)
{
    m_dedicatedClusterId = _dedicatedClusterId;
    m_dedicatedClusterIdHasBeenSet = true;
}

bool InstanceSet::DedicatedClusterIdHasBeenSet() const
{
    return m_dedicatedClusterIdHasBeenSet;
}

string InstanceSet::GetProductVersion() const
{
    return m_productVersion;
}

void InstanceSet::SetProductVersion(const string& _productVersion)
{
    m_productVersion = _productVersion;
    m_productVersionHasBeenSet = true;
}

bool InstanceSet::ProductVersionHasBeenSet() const
{
    return m_productVersionHasBeenSet;
}

string InstanceSet::GetCurrentProxyVersion() const
{
    return m_currentProxyVersion;
}

void InstanceSet::SetCurrentProxyVersion(const string& _currentProxyVersion)
{
    m_currentProxyVersion = _currentProxyVersion;
    m_currentProxyVersionHasBeenSet = true;
}

bool InstanceSet::CurrentProxyVersionHasBeenSet() const
{
    return m_currentProxyVersionHasBeenSet;
}

string InstanceSet::GetCurrentRedisVersion() const
{
    return m_currentRedisVersion;
}

void InstanceSet::SetCurrentRedisVersion(const string& _currentRedisVersion)
{
    m_currentRedisVersion = _currentRedisVersion;
    m_currentRedisVersionHasBeenSet = true;
}

bool InstanceSet::CurrentRedisVersionHasBeenSet() const
{
    return m_currentRedisVersionHasBeenSet;
}

string InstanceSet::GetUpgradeProxyVersion() const
{
    return m_upgradeProxyVersion;
}

void InstanceSet::SetUpgradeProxyVersion(const string& _upgradeProxyVersion)
{
    m_upgradeProxyVersion = _upgradeProxyVersion;
    m_upgradeProxyVersionHasBeenSet = true;
}

bool InstanceSet::UpgradeProxyVersionHasBeenSet() const
{
    return m_upgradeProxyVersionHasBeenSet;
}

string InstanceSet::GetUpgradeRedisVersion() const
{
    return m_upgradeRedisVersion;
}

void InstanceSet::SetUpgradeRedisVersion(const string& _upgradeRedisVersion)
{
    m_upgradeRedisVersion = _upgradeRedisVersion;
    m_upgradeRedisVersionHasBeenSet = true;
}

bool InstanceSet::UpgradeRedisVersionHasBeenSet() const
{
    return m_upgradeRedisVersionHasBeenSet;
}

string InstanceSet::GetBackupMode() const
{
    return m_backupMode;
}

void InstanceSet::SetBackupMode(const string& _backupMode)
{
    m_backupMode = _backupMode;
    m_backupModeHasBeenSet = true;
}

bool InstanceSet::BackupModeHasBeenSet() const
{
    return m_backupModeHasBeenSet;
}

