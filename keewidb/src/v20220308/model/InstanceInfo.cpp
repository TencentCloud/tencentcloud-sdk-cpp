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

#include <tencentcloud/keewidb/v20220308/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_portHasBeenSet(false),
    m_createtimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
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
    m_readOnlyHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_remainBandwidthDurationHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_monitorVersionHasBeenSet(false),
    m_clientLimitMinHasBeenSet(false),
    m_clientLimitMaxHasBeenSet(false),
    m_nodeSetHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_machineMemoryHasBeenSet(false),
    m_diskShardSizeHasBeenSet(false),
    m_diskShardNumHasBeenSet(false),
    m_diskReplicasNumHasBeenSet(false),
    m_compressionHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Appid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetInt64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Createtime") && !value["Createtime"].IsNull())
    {
        if (!value["Createtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Createtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createtime = string(value["Createtime"].GetString());
        m_createtimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Size` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetDouble();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("ProductType") && !value["ProductType"].IsNull())
    {
        if (!value["ProductType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProductType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productType = string(value["ProductType"].GetString());
        m_productTypeHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("BillingMode") && !value["BillingMode"].IsNull())
    {
        if (!value["BillingMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BillingMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingMode = value["BillingMode"].GetInt64();
        m_billingModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceTitle") && !value["InstanceTitle"].IsNull())
    {
        if (!value["InstanceTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTitle = string(value["InstanceTitle"].GetString());
        m_instanceTitleHasBeenSet = true;
    }

    if (value.HasMember("OfflineTime") && !value["OfflineTime"].IsNull())
    {
        if (!value["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(value["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subStatus = value["SubStatus"].GetInt64();
        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("RedisShardSize") && !value["RedisShardSize"].IsNull())
    {
        if (!value["RedisShardSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RedisShardSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardSize = value["RedisShardSize"].GetInt64();
        m_redisShardSizeHasBeenSet = true;
    }

    if (value.HasMember("RedisShardNum") && !value["RedisShardNum"].IsNull())
    {
        if (!value["RedisShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RedisShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisShardNum = value["RedisShardNum"].GetInt64();
        m_redisShardNumHasBeenSet = true;
    }

    if (value.HasMember("RedisReplicasNum") && !value["RedisReplicasNum"].IsNull())
    {
        if (!value["RedisReplicasNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RedisReplicasNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redisReplicasNum = value["RedisReplicasNum"].GetInt64();
        m_redisReplicasNumHasBeenSet = true;
    }

    if (value.HasMember("PriceId") && !value["PriceId"].IsNull())
    {
        if (!value["PriceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PriceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priceId = value["PriceId"].GetInt64();
        m_priceIdHasBeenSet = true;
    }

    if (value.HasMember("CloseTime") && !value["CloseTime"].IsNull())
    {
        if (!value["CloseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CloseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_closeTime = string(value["CloseTime"].GetString());
        m_closeTimeHasBeenSet = true;
    }

    if (value.HasMember("SlaveReadWeight") && !value["SlaveReadWeight"].IsNull())
    {
        if (!value["SlaveReadWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SlaveReadWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slaveReadWeight = value["SlaveReadWeight"].GetInt64();
        m_slaveReadWeightHasBeenSet = true;
    }

    if (value.HasMember("InstanceTags") && !value["InstanceTags"].IsNull())
    {
        if (!value["InstanceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceTags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("NoAuth") && !value["NoAuth"].IsNull())
    {
        if (!value["NoAuth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NoAuth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_noAuth = value["NoAuth"].GetBool();
        m_noAuthHasBeenSet = true;
    }

    if (value.HasMember("ClientLimit") && !value["ClientLimit"].IsNull())
    {
        if (!value["ClientLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClientLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimit = value["ClientLimit"].GetInt64();
        m_clientLimitHasBeenSet = true;
    }

    if (value.HasMember("DtsStatus") && !value["DtsStatus"].IsNull())
    {
        if (!value["DtsStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DtsStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dtsStatus = value["DtsStatus"].GetInt64();
        m_dtsStatusHasBeenSet = true;
    }

    if (value.HasMember("NetLimit") && !value["NetLimit"].IsNull())
    {
        if (!value["NetLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NetLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netLimit = value["NetLimit"].GetInt64();
        m_netLimitHasBeenSet = true;
    }

    if (value.HasMember("PasswordFree") && !value["PasswordFree"].IsNull())
    {
        if (!value["PasswordFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PasswordFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passwordFree = value["PasswordFree"].GetInt64();
        m_passwordFreeHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ReadOnly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetInt64();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("RemainBandwidthDuration") && !value["RemainBandwidthDuration"].IsNull())
    {
        if (!value["RemainBandwidthDuration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RemainBandwidthDuration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remainBandwidthDuration = string(value["RemainBandwidthDuration"].GetString());
        m_remainBandwidthDurationHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("MonitorVersion") && !value["MonitorVersion"].IsNull())
    {
        if (!value["MonitorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MonitorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorVersion = string(value["MonitorVersion"].GetString());
        m_monitorVersionHasBeenSet = true;
    }

    if (value.HasMember("ClientLimitMin") && !value["ClientLimitMin"].IsNull())
    {
        if (!value["ClientLimitMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClientLimitMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMin = value["ClientLimitMin"].GetInt64();
        m_clientLimitMinHasBeenSet = true;
    }

    if (value.HasMember("ClientLimitMax") && !value["ClientLimitMax"].IsNull())
    {
        if (!value["ClientLimitMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClientLimitMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientLimitMax = value["ClientLimitMax"].GetInt64();
        m_clientLimitMaxHasBeenSet = true;
    }

    if (value.HasMember("NodeSet") && !value["NodeSet"].IsNull())
    {
        if (!value["NodeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.NodeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NodeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
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
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("MachineMemory") && !value["MachineMemory"].IsNull())
    {
        if (!value["MachineMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MachineMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineMemory = value["MachineMemory"].GetInt64();
        m_machineMemoryHasBeenSet = true;
    }

    if (value.HasMember("DiskShardSize") && !value["DiskShardSize"].IsNull())
    {
        if (!value["DiskShardSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskShardSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskShardSize = value["DiskShardSize"].GetInt64();
        m_diskShardSizeHasBeenSet = true;
    }

    if (value.HasMember("DiskShardNum") && !value["DiskShardNum"].IsNull())
    {
        if (!value["DiskShardNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskShardNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskShardNum = value["DiskShardNum"].GetInt64();
        m_diskShardNumHasBeenSet = true;
    }

    if (value.HasMember("DiskReplicasNum") && !value["DiskReplicasNum"].IsNull())
    {
        if (!value["DiskReplicasNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DiskReplicasNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskReplicasNum = value["DiskReplicasNum"].GetInt64();
        m_diskReplicasNumHasBeenSet = true;
    }

    if (value.HasMember("Compression") && !value["Compression"].IsNull())
    {
        if (!value["Compression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Compression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compression = string(value["Compression"].GetString());
        m_compressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnetId, allocator);
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

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
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

    if (m_machineMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineMemory, allocator);
    }

    if (m_diskShardSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskShardSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskShardSize, allocator);
    }

    if (m_diskShardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskShardNum, allocator);
    }

    if (m_diskReplicasNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskReplicasNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskReplicasNum, allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compression.c_str(), allocator).Move(), allocator);
    }

}


string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceInfo::GetAppid() const
{
    return m_appid;
}

void InstanceInfo::SetAppid(const int64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool InstanceInfo::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

int64_t InstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t InstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void InstanceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t InstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void InstanceInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string InstanceInfo::GetWanIp() const
{
    return m_wanIp;
}

void InstanceInfo::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool InstanceInfo::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

int64_t InstanceInfo::GetPort() const
{
    return m_port;
}

void InstanceInfo::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool InstanceInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string InstanceInfo::GetCreatetime() const
{
    return m_createtime;
}

void InstanceInfo::SetCreatetime(const string& _createtime)
{
    m_createtime = _createtime;
    m_createtimeHasBeenSet = true;
}

bool InstanceInfo::CreatetimeHasBeenSet() const
{
    return m_createtimeHasBeenSet;
}

double InstanceInfo::GetSize() const
{
    return m_size;
}

void InstanceInfo::SetSize(const double& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool InstanceInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t InstanceInfo::GetType() const
{
    return m_type;
}

void InstanceInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t InstanceInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void InstanceInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool InstanceInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string InstanceInfo::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void InstanceInfo::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool InstanceInfo::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

string InstanceInfo::GetEngine() const
{
    return m_engine;
}

void InstanceInfo::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool InstanceInfo::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

string InstanceInfo::GetProductType() const
{
    return m_productType;
}

void InstanceInfo::SetProductType(const string& _productType)
{
    m_productType = _productType;
    m_productTypeHasBeenSet = true;
}

bool InstanceInfo::ProductTypeHasBeenSet() const
{
    return m_productTypeHasBeenSet;
}

string InstanceInfo::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void InstanceInfo::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool InstanceInfo::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string InstanceInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void InstanceInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool InstanceInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t InstanceInfo::GetBillingMode() const
{
    return m_billingMode;
}

void InstanceInfo::SetBillingMode(const int64_t& _billingMode)
{
    m_billingMode = _billingMode;
    m_billingModeHasBeenSet = true;
}

bool InstanceInfo::BillingModeHasBeenSet() const
{
    return m_billingModeHasBeenSet;
}

string InstanceInfo::GetInstanceTitle() const
{
    return m_instanceTitle;
}

void InstanceInfo::SetInstanceTitle(const string& _instanceTitle)
{
    m_instanceTitle = _instanceTitle;
    m_instanceTitleHasBeenSet = true;
}

bool InstanceInfo::InstanceTitleHasBeenSet() const
{
    return m_instanceTitleHasBeenSet;
}

string InstanceInfo::GetOfflineTime() const
{
    return m_offlineTime;
}

void InstanceInfo::SetOfflineTime(const string& _offlineTime)
{
    m_offlineTime = _offlineTime;
    m_offlineTimeHasBeenSet = true;
}

bool InstanceInfo::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

int64_t InstanceInfo::GetSubStatus() const
{
    return m_subStatus;
}

void InstanceInfo::SetSubStatus(const int64_t& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool InstanceInfo::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

vector<string> InstanceInfo::GetTags() const
{
    return m_tags;
}

void InstanceInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool InstanceInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t InstanceInfo::GetRedisShardSize() const
{
    return m_redisShardSize;
}

void InstanceInfo::SetRedisShardSize(const int64_t& _redisShardSize)
{
    m_redisShardSize = _redisShardSize;
    m_redisShardSizeHasBeenSet = true;
}

bool InstanceInfo::RedisShardSizeHasBeenSet() const
{
    return m_redisShardSizeHasBeenSet;
}

int64_t InstanceInfo::GetRedisShardNum() const
{
    return m_redisShardNum;
}

void InstanceInfo::SetRedisShardNum(const int64_t& _redisShardNum)
{
    m_redisShardNum = _redisShardNum;
    m_redisShardNumHasBeenSet = true;
}

bool InstanceInfo::RedisShardNumHasBeenSet() const
{
    return m_redisShardNumHasBeenSet;
}

int64_t InstanceInfo::GetRedisReplicasNum() const
{
    return m_redisReplicasNum;
}

void InstanceInfo::SetRedisReplicasNum(const int64_t& _redisReplicasNum)
{
    m_redisReplicasNum = _redisReplicasNum;
    m_redisReplicasNumHasBeenSet = true;
}

bool InstanceInfo::RedisReplicasNumHasBeenSet() const
{
    return m_redisReplicasNumHasBeenSet;
}

int64_t InstanceInfo::GetPriceId() const
{
    return m_priceId;
}

void InstanceInfo::SetPriceId(const int64_t& _priceId)
{
    m_priceId = _priceId;
    m_priceIdHasBeenSet = true;
}

bool InstanceInfo::PriceIdHasBeenSet() const
{
    return m_priceIdHasBeenSet;
}

string InstanceInfo::GetCloseTime() const
{
    return m_closeTime;
}

void InstanceInfo::SetCloseTime(const string& _closeTime)
{
    m_closeTime = _closeTime;
    m_closeTimeHasBeenSet = true;
}

bool InstanceInfo::CloseTimeHasBeenSet() const
{
    return m_closeTimeHasBeenSet;
}

int64_t InstanceInfo::GetSlaveReadWeight() const
{
    return m_slaveReadWeight;
}

void InstanceInfo::SetSlaveReadWeight(const int64_t& _slaveReadWeight)
{
    m_slaveReadWeight = _slaveReadWeight;
    m_slaveReadWeightHasBeenSet = true;
}

bool InstanceInfo::SlaveReadWeightHasBeenSet() const
{
    return m_slaveReadWeightHasBeenSet;
}

vector<InstanceTagInfo> InstanceInfo::GetInstanceTags() const
{
    return m_instanceTags;
}

void InstanceInfo::SetInstanceTags(const vector<InstanceTagInfo>& _instanceTags)
{
    m_instanceTags = _instanceTags;
    m_instanceTagsHasBeenSet = true;
}

bool InstanceInfo::InstanceTagsHasBeenSet() const
{
    return m_instanceTagsHasBeenSet;
}

string InstanceInfo::GetProjectName() const
{
    return m_projectName;
}

void InstanceInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool InstanceInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

bool InstanceInfo::GetNoAuth() const
{
    return m_noAuth;
}

void InstanceInfo::SetNoAuth(const bool& _noAuth)
{
    m_noAuth = _noAuth;
    m_noAuthHasBeenSet = true;
}

bool InstanceInfo::NoAuthHasBeenSet() const
{
    return m_noAuthHasBeenSet;
}

int64_t InstanceInfo::GetClientLimit() const
{
    return m_clientLimit;
}

void InstanceInfo::SetClientLimit(const int64_t& _clientLimit)
{
    m_clientLimit = _clientLimit;
    m_clientLimitHasBeenSet = true;
}

bool InstanceInfo::ClientLimitHasBeenSet() const
{
    return m_clientLimitHasBeenSet;
}

int64_t InstanceInfo::GetDtsStatus() const
{
    return m_dtsStatus;
}

void InstanceInfo::SetDtsStatus(const int64_t& _dtsStatus)
{
    m_dtsStatus = _dtsStatus;
    m_dtsStatusHasBeenSet = true;
}

bool InstanceInfo::DtsStatusHasBeenSet() const
{
    return m_dtsStatusHasBeenSet;
}

int64_t InstanceInfo::GetNetLimit() const
{
    return m_netLimit;
}

void InstanceInfo::SetNetLimit(const int64_t& _netLimit)
{
    m_netLimit = _netLimit;
    m_netLimitHasBeenSet = true;
}

bool InstanceInfo::NetLimitHasBeenSet() const
{
    return m_netLimitHasBeenSet;
}

int64_t InstanceInfo::GetPasswordFree() const
{
    return m_passwordFree;
}

void InstanceInfo::SetPasswordFree(const int64_t& _passwordFree)
{
    m_passwordFree = _passwordFree;
    m_passwordFreeHasBeenSet = true;
}

bool InstanceInfo::PasswordFreeHasBeenSet() const
{
    return m_passwordFreeHasBeenSet;
}

int64_t InstanceInfo::GetReadOnly() const
{
    return m_readOnly;
}

void InstanceInfo::SetReadOnly(const int64_t& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool InstanceInfo::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

string InstanceInfo::GetVip6() const
{
    return m_vip6;
}

void InstanceInfo::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool InstanceInfo::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

string InstanceInfo::GetRemainBandwidthDuration() const
{
    return m_remainBandwidthDuration;
}

void InstanceInfo::SetRemainBandwidthDuration(const string& _remainBandwidthDuration)
{
    m_remainBandwidthDuration = _remainBandwidthDuration;
    m_remainBandwidthDurationHasBeenSet = true;
}

bool InstanceInfo::RemainBandwidthDurationHasBeenSet() const
{
    return m_remainBandwidthDurationHasBeenSet;
}

int64_t InstanceInfo::GetDiskSize() const
{
    return m_diskSize;
}

void InstanceInfo::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InstanceInfo::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InstanceInfo::GetMonitorVersion() const
{
    return m_monitorVersion;
}

void InstanceInfo::SetMonitorVersion(const string& _monitorVersion)
{
    m_monitorVersion = _monitorVersion;
    m_monitorVersionHasBeenSet = true;
}

bool InstanceInfo::MonitorVersionHasBeenSet() const
{
    return m_monitorVersionHasBeenSet;
}

int64_t InstanceInfo::GetClientLimitMin() const
{
    return m_clientLimitMin;
}

void InstanceInfo::SetClientLimitMin(const int64_t& _clientLimitMin)
{
    m_clientLimitMin = _clientLimitMin;
    m_clientLimitMinHasBeenSet = true;
}

bool InstanceInfo::ClientLimitMinHasBeenSet() const
{
    return m_clientLimitMinHasBeenSet;
}

int64_t InstanceInfo::GetClientLimitMax() const
{
    return m_clientLimitMax;
}

void InstanceInfo::SetClientLimitMax(const int64_t& _clientLimitMax)
{
    m_clientLimitMax = _clientLimitMax;
    m_clientLimitMaxHasBeenSet = true;
}

bool InstanceInfo::ClientLimitMaxHasBeenSet() const
{
    return m_clientLimitMaxHasBeenSet;
}

vector<NodeInfo> InstanceInfo::GetNodeSet() const
{
    return m_nodeSet;
}

void InstanceInfo::SetNodeSet(const vector<NodeInfo>& _nodeSet)
{
    m_nodeSet = _nodeSet;
    m_nodeSetHasBeenSet = true;
}

bool InstanceInfo::NodeSetHasBeenSet() const
{
    return m_nodeSetHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

int64_t InstanceInfo::GetMachineMemory() const
{
    return m_machineMemory;
}

void InstanceInfo::SetMachineMemory(const int64_t& _machineMemory)
{
    m_machineMemory = _machineMemory;
    m_machineMemoryHasBeenSet = true;
}

bool InstanceInfo::MachineMemoryHasBeenSet() const
{
    return m_machineMemoryHasBeenSet;
}

int64_t InstanceInfo::GetDiskShardSize() const
{
    return m_diskShardSize;
}

void InstanceInfo::SetDiskShardSize(const int64_t& _diskShardSize)
{
    m_diskShardSize = _diskShardSize;
    m_diskShardSizeHasBeenSet = true;
}

bool InstanceInfo::DiskShardSizeHasBeenSet() const
{
    return m_diskShardSizeHasBeenSet;
}

int64_t InstanceInfo::GetDiskShardNum() const
{
    return m_diskShardNum;
}

void InstanceInfo::SetDiskShardNum(const int64_t& _diskShardNum)
{
    m_diskShardNum = _diskShardNum;
    m_diskShardNumHasBeenSet = true;
}

bool InstanceInfo::DiskShardNumHasBeenSet() const
{
    return m_diskShardNumHasBeenSet;
}

int64_t InstanceInfo::GetDiskReplicasNum() const
{
    return m_diskReplicasNum;
}

void InstanceInfo::SetDiskReplicasNum(const int64_t& _diskReplicasNum)
{
    m_diskReplicasNum = _diskReplicasNum;
    m_diskReplicasNumHasBeenSet = true;
}

bool InstanceInfo::DiskReplicasNumHasBeenSet() const
{
    return m_diskReplicasNumHasBeenSet;
}

string InstanceInfo::GetCompression() const
{
    return m_compression;
}

void InstanceInfo::SetCompression(const string& _compression)
{
    m_compression = _compression;
    m_compressionHasBeenSet = true;
}

bool InstanceInfo::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

