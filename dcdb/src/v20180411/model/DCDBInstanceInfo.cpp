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

#include <tencentcloud/dcdb/v20180411/model/DCDBInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DCDBInstanceInfo::DCDBInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_shardCountHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_isolatedTimestampHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_shardDetailHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_isTmpHasBeenSet(false),
    m_exclusterIdHasBeenSet(false),
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanVipHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dbEngineHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_lockerHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_isAuditSupportedHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_vipv6HasBeenSet(false),
    m_wanVipv6HasBeenSet(false),
    m_wanPortIpv6HasBeenSet(false),
    m_wanStatusIpv6HasBeenSet(false),
    m_dcnFlagHasBeenSet(false),
    m_dcnStatusHasBeenSet(false),
    m_dcnDstNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false)
{
}

CoreInternalOutcome DCDBInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("ShardCount") && !value["ShardCount"].IsNull())
    {
        if (!value["ShardCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.ShardCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shardCount = value["ShardCount"].GetInt64();
        m_shardCountHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTimestamp") && !value["IsolatedTimestamp"].IsNull())
    {
        if (!value["IsolatedTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.IsolatedTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTimestamp = string(value["IsolatedTimestamp"].GetString());
        m_isolatedTimestampHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("ShardDetail") && !value["ShardDetail"].IsNull())
    {
        if (!value["ShardDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.ShardDetail` is not array type"));

        const rapidjson::Value &tmpValue = value["ShardDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShardInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shardDetail.push_back(item);
        }
        m_shardDetailHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("IsTmp") && !value["IsTmp"].IsNull())
    {
        if (!value["IsTmp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.IsTmp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isTmp = value["IsTmp"].GetInt64();
        m_isTmpHasBeenSet = true;
    }

    if (value.HasMember("ExclusterId") && !value["ExclusterId"].IsNull())
    {
        if (!value["ExclusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.ExclusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusterId = string(value["ExclusterId"].GetString());
        m_exclusterIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanVip") && !value["WanVip"].IsNull())
    {
        if (!value["WanVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVip = string(value["WanVip"].GetString());
        m_wanVipHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DbEngine") && !value["DbEngine"].IsNull())
    {
        if (!value["DbEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DbEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbEngine = string(value["DbEngine"].GetString());
        m_dbEngineHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("Paymode") && !value["Paymode"].IsNull())
    {
        if (!value["Paymode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Paymode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymode = string(value["Paymode"].GetString());
        m_paymodeHasBeenSet = true;
    }

    if (value.HasMember("Locker") && !value["Locker"].IsNull())
    {
        if (!value["Locker"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Locker` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locker = value["Locker"].GetInt64();
        m_lockerHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = value["WanStatus"].GetInt64();
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("IsAuditSupported") && !value["IsAuditSupported"].IsNull())
    {
        if (!value["IsAuditSupported"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.IsAuditSupported` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuditSupported = value["IsAuditSupported"].GetUint64();
        m_isAuditSupportedHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Cpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetUint64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Flag") && !value["Ipv6Flag"].IsNull())
    {
        if (!value["Ipv6Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Ipv6Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Flag = value["Ipv6Flag"].GetUint64();
        m_ipv6FlagHasBeenSet = true;
    }

    if (value.HasMember("Vipv6") && !value["Vipv6"].IsNull())
    {
        if (!value["Vipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.Vipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipv6 = string(value["Vipv6"].GetString());
        m_vipv6HasBeenSet = true;
    }

    if (value.HasMember("WanVipv6") && !value["WanVipv6"].IsNull())
    {
        if (!value["WanVipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanVipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVipv6 = string(value["WanVipv6"].GetString());
        m_wanVipv6HasBeenSet = true;
    }

    if (value.HasMember("WanPortIpv6") && !value["WanPortIpv6"].IsNull())
    {
        if (!value["WanPortIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanPortIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPortIpv6 = value["WanPortIpv6"].GetUint64();
        m_wanPortIpv6HasBeenSet = true;
    }

    if (value.HasMember("WanStatusIpv6") && !value["WanStatusIpv6"].IsNull())
    {
        if (!value["WanStatusIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.WanStatusIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatusIpv6 = value["WanStatusIpv6"].GetUint64();
        m_wanStatusIpv6HasBeenSet = true;
    }

    if (value.HasMember("DcnFlag") && !value["DcnFlag"].IsNull())
    {
        if (!value["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = value["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }

    if (value.HasMember("DcnStatus") && !value["DcnStatus"].IsNull())
    {
        if (!value["DcnStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DcnStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnStatus = value["DcnStatus"].GetInt64();
        m_dcnStatusHasBeenSet = true;
    }

    if (value.HasMember("DcnDstNum") && !value["DcnDstNum"].IsNull())
    {
        if (!value["DcnDstNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DcnDstNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnDstNum = value["DcnDstNum"].GetInt64();
        m_dcnDstNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTag item;
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

    if (value.HasMember("DbVersionId") && !value["DbVersionId"].IsNull())
    {
        if (!value["DbVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCDBInstanceInfo.DbVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersionId = string(value["DbVersionId"].GetString());
        m_dbVersionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DCDBInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
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

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
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

    if (m_shardCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardCount, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_shardDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shardDetail.begin(); itr != m_shardDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_isTmpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTmp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTmp, allocator);
    }

    if (m_exclusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_wanDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_wanVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanVip.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPort, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_paymodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paymode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paymode.c_str(), allocator).Move(), allocator);
    }

    if (m_lockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locker, allocator);
    }

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanStatus, allocator);
    }

    if (m_isAuditSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuditSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuditSupported, allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_ipv6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Flag, allocator);
    }

    if (m_vipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_wanVipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanVipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanVipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_wanPortIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPortIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPortIpv6, allocator);
    }

    if (m_wanStatusIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatusIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanStatusIpv6, allocator);
    }

    if (m_dcnFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnFlag, allocator);
    }

    if (m_dcnStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnStatus, allocator);
    }

    if (m_dcnDstNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DcnDstNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcnDstNum, allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
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

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

}


string DCDBInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void DCDBInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DCDBInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DCDBInstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void DCDBInstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DCDBInstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DCDBInstanceInfo::GetAppId() const
{
    return m_appId;
}

void DCDBInstanceInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DCDBInstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DCDBInstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void DCDBInstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DCDBInstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DCDBInstanceInfo::GetRegion() const
{
    return m_region;
}

void DCDBInstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DCDBInstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DCDBInstanceInfo::GetZone() const
{
    return m_zone;
}

void DCDBInstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DCDBInstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DCDBInstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void DCDBInstanceInfo::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DCDBInstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t DCDBInstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void DCDBInstanceInfo::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DCDBInstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DCDBInstanceInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void DCDBInstanceInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DCDBInstanceInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DCDBInstanceInfo::GetStatus() const
{
    return m_status;
}

void DCDBInstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DCDBInstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DCDBInstanceInfo::GetVip() const
{
    return m_vip;
}

void DCDBInstanceInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DCDBInstanceInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DCDBInstanceInfo::GetVport() const
{
    return m_vport;
}

void DCDBInstanceInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DCDBInstanceInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DCDBInstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void DCDBInstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DCDBInstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DCDBInstanceInfo::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DCDBInstanceInfo::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DCDBInstanceInfo::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t DCDBInstanceInfo::GetMemory() const
{
    return m_memory;
}

void DCDBInstanceInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DCDBInstanceInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DCDBInstanceInfo::GetStorage() const
{
    return m_storage;
}

void DCDBInstanceInfo::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DCDBInstanceInfo::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

int64_t DCDBInstanceInfo::GetShardCount() const
{
    return m_shardCount;
}

void DCDBInstanceInfo::SetShardCount(const int64_t& _shardCount)
{
    m_shardCount = _shardCount;
    m_shardCountHasBeenSet = true;
}

bool DCDBInstanceInfo::ShardCountHasBeenSet() const
{
    return m_shardCountHasBeenSet;
}

string DCDBInstanceInfo::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DCDBInstanceInfo::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DCDBInstanceInfo::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string DCDBInstanceInfo::GetIsolatedTimestamp() const
{
    return m_isolatedTimestamp;
}

void DCDBInstanceInfo::SetIsolatedTimestamp(const string& _isolatedTimestamp)
{
    m_isolatedTimestamp = _isolatedTimestamp;
    m_isolatedTimestampHasBeenSet = true;
}

bool DCDBInstanceInfo::IsolatedTimestampHasBeenSet() const
{
    return m_isolatedTimestampHasBeenSet;
}

string DCDBInstanceInfo::GetUin() const
{
    return m_uin;
}

void DCDBInstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DCDBInstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

vector<ShardInfo> DCDBInstanceInfo::GetShardDetail() const
{
    return m_shardDetail;
}

void DCDBInstanceInfo::SetShardDetail(const vector<ShardInfo>& _shardDetail)
{
    m_shardDetail = _shardDetail;
    m_shardDetailHasBeenSet = true;
}

bool DCDBInstanceInfo::ShardDetailHasBeenSet() const
{
    return m_shardDetailHasBeenSet;
}

int64_t DCDBInstanceInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void DCDBInstanceInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool DCDBInstanceInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t DCDBInstanceInfo::GetIsTmp() const
{
    return m_isTmp;
}

void DCDBInstanceInfo::SetIsTmp(const int64_t& _isTmp)
{
    m_isTmp = _isTmp;
    m_isTmpHasBeenSet = true;
}

bool DCDBInstanceInfo::IsTmpHasBeenSet() const
{
    return m_isTmpHasBeenSet;
}

string DCDBInstanceInfo::GetExclusterId() const
{
    return m_exclusterId;
}

void DCDBInstanceInfo::SetExclusterId(const string& _exclusterId)
{
    m_exclusterId = _exclusterId;
    m_exclusterIdHasBeenSet = true;
}

bool DCDBInstanceInfo::ExclusterIdHasBeenSet() const
{
    return m_exclusterIdHasBeenSet;
}

string DCDBInstanceInfo::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void DCDBInstanceInfo::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool DCDBInstanceInfo::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string DCDBInstanceInfo::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void DCDBInstanceInfo::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool DCDBInstanceInfo::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

uint64_t DCDBInstanceInfo::GetId() const
{
    return m_id;
}

void DCDBInstanceInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DCDBInstanceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DCDBInstanceInfo::GetWanDomain() const
{
    return m_wanDomain;
}

void DCDBInstanceInfo::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool DCDBInstanceInfo::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string DCDBInstanceInfo::GetWanVip() const
{
    return m_wanVip;
}

void DCDBInstanceInfo::SetWanVip(const string& _wanVip)
{
    m_wanVip = _wanVip;
    m_wanVipHasBeenSet = true;
}

bool DCDBInstanceInfo::WanVipHasBeenSet() const
{
    return m_wanVipHasBeenSet;
}

int64_t DCDBInstanceInfo::GetWanPort() const
{
    return m_wanPort;
}

void DCDBInstanceInfo::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool DCDBInstanceInfo::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

int64_t DCDBInstanceInfo::GetPid() const
{
    return m_pid;
}

void DCDBInstanceInfo::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DCDBInstanceInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DCDBInstanceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DCDBInstanceInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DCDBInstanceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DCDBInstanceInfo::GetDbEngine() const
{
    return m_dbEngine;
}

void DCDBInstanceInfo::SetDbEngine(const string& _dbEngine)
{
    m_dbEngine = _dbEngine;
    m_dbEngineHasBeenSet = true;
}

bool DCDBInstanceInfo::DbEngineHasBeenSet() const
{
    return m_dbEngineHasBeenSet;
}

string DCDBInstanceInfo::GetDbVersion() const
{
    return m_dbVersion;
}

void DCDBInstanceInfo::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool DCDBInstanceInfo::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

string DCDBInstanceInfo::GetPaymode() const
{
    return m_paymode;
}

void DCDBInstanceInfo::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool DCDBInstanceInfo::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

int64_t DCDBInstanceInfo::GetLocker() const
{
    return m_locker;
}

void DCDBInstanceInfo::SetLocker(const int64_t& _locker)
{
    m_locker = _locker;
    m_lockerHasBeenSet = true;
}

bool DCDBInstanceInfo::LockerHasBeenSet() const
{
    return m_lockerHasBeenSet;
}

int64_t DCDBInstanceInfo::GetWanStatus() const
{
    return m_wanStatus;
}

void DCDBInstanceInfo::SetWanStatus(const int64_t& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool DCDBInstanceInfo::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

uint64_t DCDBInstanceInfo::GetIsAuditSupported() const
{
    return m_isAuditSupported;
}

void DCDBInstanceInfo::SetIsAuditSupported(const uint64_t& _isAuditSupported)
{
    m_isAuditSupported = _isAuditSupported;
    m_isAuditSupportedHasBeenSet = true;
}

bool DCDBInstanceInfo::IsAuditSupportedHasBeenSet() const
{
    return m_isAuditSupportedHasBeenSet;
}

uint64_t DCDBInstanceInfo::GetCpu() const
{
    return m_cpu;
}

void DCDBInstanceInfo::SetCpu(const uint64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DCDBInstanceInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t DCDBInstanceInfo::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void DCDBInstanceInfo::SetIpv6Flag(const uint64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool DCDBInstanceInfo::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

string DCDBInstanceInfo::GetVipv6() const
{
    return m_vipv6;
}

void DCDBInstanceInfo::SetVipv6(const string& _vipv6)
{
    m_vipv6 = _vipv6;
    m_vipv6HasBeenSet = true;
}

bool DCDBInstanceInfo::Vipv6HasBeenSet() const
{
    return m_vipv6HasBeenSet;
}

string DCDBInstanceInfo::GetWanVipv6() const
{
    return m_wanVipv6;
}

void DCDBInstanceInfo::SetWanVipv6(const string& _wanVipv6)
{
    m_wanVipv6 = _wanVipv6;
    m_wanVipv6HasBeenSet = true;
}

bool DCDBInstanceInfo::WanVipv6HasBeenSet() const
{
    return m_wanVipv6HasBeenSet;
}

uint64_t DCDBInstanceInfo::GetWanPortIpv6() const
{
    return m_wanPortIpv6;
}

void DCDBInstanceInfo::SetWanPortIpv6(const uint64_t& _wanPortIpv6)
{
    m_wanPortIpv6 = _wanPortIpv6;
    m_wanPortIpv6HasBeenSet = true;
}

bool DCDBInstanceInfo::WanPortIpv6HasBeenSet() const
{
    return m_wanPortIpv6HasBeenSet;
}

uint64_t DCDBInstanceInfo::GetWanStatusIpv6() const
{
    return m_wanStatusIpv6;
}

void DCDBInstanceInfo::SetWanStatusIpv6(const uint64_t& _wanStatusIpv6)
{
    m_wanStatusIpv6 = _wanStatusIpv6;
    m_wanStatusIpv6HasBeenSet = true;
}

bool DCDBInstanceInfo::WanStatusIpv6HasBeenSet() const
{
    return m_wanStatusIpv6HasBeenSet;
}

int64_t DCDBInstanceInfo::GetDcnFlag() const
{
    return m_dcnFlag;
}

void DCDBInstanceInfo::SetDcnFlag(const int64_t& _dcnFlag)
{
    m_dcnFlag = _dcnFlag;
    m_dcnFlagHasBeenSet = true;
}

bool DCDBInstanceInfo::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}

int64_t DCDBInstanceInfo::GetDcnStatus() const
{
    return m_dcnStatus;
}

void DCDBInstanceInfo::SetDcnStatus(const int64_t& _dcnStatus)
{
    m_dcnStatus = _dcnStatus;
    m_dcnStatusHasBeenSet = true;
}

bool DCDBInstanceInfo::DcnStatusHasBeenSet() const
{
    return m_dcnStatusHasBeenSet;
}

int64_t DCDBInstanceInfo::GetDcnDstNum() const
{
    return m_dcnDstNum;
}

void DCDBInstanceInfo::SetDcnDstNum(const int64_t& _dcnDstNum)
{
    m_dcnDstNum = _dcnDstNum;
    m_dcnDstNumHasBeenSet = true;
}

bool DCDBInstanceInfo::DcnDstNumHasBeenSet() const
{
    return m_dcnDstNumHasBeenSet;
}

int64_t DCDBInstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void DCDBInstanceInfo::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DCDBInstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<ResourceTag> DCDBInstanceInfo::GetResourceTags() const
{
    return m_resourceTags;
}

void DCDBInstanceInfo::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool DCDBInstanceInfo::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string DCDBInstanceInfo::GetDbVersionId() const
{
    return m_dbVersionId;
}

void DCDBInstanceInfo::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool DCDBInstanceInfo::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

