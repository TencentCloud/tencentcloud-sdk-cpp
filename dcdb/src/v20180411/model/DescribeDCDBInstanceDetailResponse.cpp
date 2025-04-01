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

#include <tencentcloud/dcdb/v20180411/model/DescribeDCDBInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDCDBInstanceDetailResponse::DescribeDCDBInstanceDetailResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanVipHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_exclusterIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_isAuditSupportedHasBeenSet(false),
    m_isEncryptSupportedHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageUsageHasBeenSet(false),
    m_logStorageHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_masterZoneHasBeenSet(false),
    m_slaveZonesHasBeenSet(false),
    m_shardsHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_dbEngineHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_wanVipv6HasBeenSet(false),
    m_wanStatusIpv6HasBeenSet(false),
    m_wanPortIpv6HasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dcnFlagHasBeenSet(false),
    m_dcnStatusHasBeenSet(false),
    m_dcnDstNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isMaxUserConnectionsSupportedHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false),
    m_encryptStatusHasBeenSet(false),
    m_exclusterTypeHasBeenSet(false),
    m_rsAccessStrategyHasBeenSet(false),
    m_reservedNetResourcesHasBeenSet(false),
    m_isPhysicalReplicationSupportedHasBeenSet(false),
    m_isDcnStrongSyncSupportedHasBeenSet(false),
    m_isDcnSwitchSupportedHasBeenSet(false),
    m_cpuTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDCDBInstanceDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("Vip") && !rsp["Vip"].IsNull())
    {
        if (!rsp["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(rsp["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (rsp.HasMember("Vport") && !rsp["Vport"].IsNull())
    {
        if (!rsp["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = rsp["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (rsp.HasMember("NodeCount") && !rsp["NodeCount"].IsNull())
    {
        if (!rsp["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = rsp["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("WanStatus") && !rsp["WanStatus"].IsNull())
    {
        if (!rsp["WanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = rsp["WanStatus"].GetInt64();
        m_wanStatusHasBeenSet = true;
    }

    if (rsp.HasMember("WanDomain") && !rsp["WanDomain"].IsNull())
    {
        if (!rsp["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(rsp["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (rsp.HasMember("WanVip") && !rsp["WanVip"].IsNull())
    {
        if (!rsp["WanVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVip = string(rsp["WanVip"].GetString());
        m_wanVipHasBeenSet = true;
    }

    if (rsp.HasMember("WanPort") && !rsp["WanPort"].IsNull())
    {
        if (!rsp["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = rsp["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = rsp["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ExclusterId") && !rsp["ExclusterId"].IsNull())
    {
        if (!rsp["ExclusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusterId = string(rsp["ExclusterId"].GetString());
        m_exclusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(rsp["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PeriodEndTime") && !rsp["PeriodEndTime"].IsNull())
    {
        if (!rsp["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(rsp["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DbVersion") && !rsp["DbVersion"].IsNull())
    {
        if (!rsp["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(rsp["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (rsp.HasMember("IsAuditSupported") && !rsp["IsAuditSupported"].IsNull())
    {
        if (!rsp["IsAuditSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAuditSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuditSupported = rsp["IsAuditSupported"].GetInt64();
        m_isAuditSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("IsEncryptSupported") && !rsp["IsEncryptSupported"].IsNull())
    {
        if (!rsp["IsEncryptSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsEncryptSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEncryptSupported = rsp["IsEncryptSupported"].GetInt64();
        m_isEncryptSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("Machine") && !rsp["Machine"].IsNull())
    {
        if (!rsp["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(rsp["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (rsp.HasMember("Memory") && !rsp["Memory"].IsNull())
    {
        if (!rsp["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = rsp["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (rsp.HasMember("Storage") && !rsp["Storage"].IsNull())
    {
        if (!rsp["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = rsp["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (rsp.HasMember("StorageUsage") && !rsp["StorageUsage"].IsNull())
    {
        if (!rsp["StorageUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StorageUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = rsp["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }

    if (rsp.HasMember("LogStorage") && !rsp["LogStorage"].IsNull())
    {
        if (!rsp["LogStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logStorage = rsp["LogStorage"].GetInt64();
        m_logStorageHasBeenSet = true;
    }

    if (rsp.HasMember("Pid") && !rsp["Pid"].IsNull())
    {
        if (!rsp["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = rsp["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (rsp.HasMember("MasterZone") && !rsp["MasterZone"].IsNull())
    {
        if (!rsp["MasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterZone = string(rsp["MasterZone"].GetString());
        m_masterZoneHasBeenSet = true;
    }

    if (rsp.HasMember("SlaveZones") && !rsp["SlaveZones"].IsNull())
    {
        if (!rsp["SlaveZones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SlaveZones` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SlaveZones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_slaveZones.push_back((*itr).GetString());
        }
        m_slaveZonesHasBeenSet = true;
    }

    if (rsp.HasMember("Shards") && !rsp["Shards"].IsNull())
    {
        if (!rsp["Shards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Shards` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Shards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShardBriefInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shards.push_back(item);
        }
        m_shardsHasBeenSet = true;
    }

    if (rsp.HasMember("Vip6") && !rsp["Vip6"].IsNull())
    {
        if (!rsp["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(rsp["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (rsp.HasMember("Cpu") && !rsp["Cpu"].IsNull())
    {
        if (!rsp["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = rsp["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (rsp.HasMember("Qps") && !rsp["Qps"].IsNull())
    {
        if (!rsp["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = rsp["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (rsp.HasMember("DbEngine") && !rsp["DbEngine"].IsNull())
    {
        if (!rsp["DbEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbEngine = string(rsp["DbEngine"].GetString());
        m_dbEngineHasBeenSet = true;
    }

    if (rsp.HasMember("Ipv6Flag") && !rsp["Ipv6Flag"].IsNull())
    {
        if (!rsp["Ipv6Flag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Ipv6Flag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Flag = rsp["Ipv6Flag"].GetInt64();
        m_ipv6FlagHasBeenSet = true;
    }

    if (rsp.HasMember("WanVipv6") && !rsp["WanVipv6"].IsNull())
    {
        if (!rsp["WanVipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WanVipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVipv6 = string(rsp["WanVipv6"].GetString());
        m_wanVipv6HasBeenSet = true;
    }

    if (rsp.HasMember("WanStatusIpv6") && !rsp["WanStatusIpv6"].IsNull())
    {
        if (!rsp["WanStatusIpv6"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WanStatusIpv6` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatusIpv6 = rsp["WanStatusIpv6"].GetInt64();
        m_wanStatusIpv6HasBeenSet = true;
    }

    if (rsp.HasMember("WanPortIpv6") && !rsp["WanPortIpv6"].IsNull())
    {
        if (!rsp["WanPortIpv6"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WanPortIpv6` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPortIpv6 = rsp["WanPortIpv6"].GetInt64();
        m_wanPortIpv6HasBeenSet = true;
    }

    if (rsp.HasMember("ResourceTags") && !rsp["ResourceTags"].IsNull())
    {
        if (!rsp["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceTags"];
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

    if (rsp.HasMember("DcnFlag") && !rsp["DcnFlag"].IsNull())
    {
        if (!rsp["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = rsp["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }

    if (rsp.HasMember("DcnStatus") && !rsp["DcnStatus"].IsNull())
    {
        if (!rsp["DcnStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnStatus = rsp["DcnStatus"].GetInt64();
        m_dcnStatusHasBeenSet = true;
    }

    if (rsp.HasMember("DcnDstNum") && !rsp["DcnDstNum"].IsNull())
    {
        if (!rsp["DcnDstNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DcnDstNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnDstNum = rsp["DcnDstNum"].GetInt64();
        m_dcnDstNumHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = rsp["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IsMaxUserConnectionsSupported") && !rsp["IsMaxUserConnectionsSupported"].IsNull())
    {
        if (!rsp["IsMaxUserConnectionsSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsMaxUserConnectionsSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMaxUserConnectionsSupported = rsp["IsMaxUserConnectionsSupported"].GetBool();
        m_isMaxUserConnectionsSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("DbVersionId") && !rsp["DbVersionId"].IsNull())
    {
        if (!rsp["DbVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DbVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersionId = string(rsp["DbVersionId"].GetString());
        m_dbVersionIdHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptStatus") && !rsp["EncryptStatus"].IsNull())
    {
        if (!rsp["EncryptStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptStatus = rsp["EncryptStatus"].GetInt64();
        m_encryptStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ExclusterType") && !rsp["ExclusterType"].IsNull())
    {
        if (!rsp["ExclusterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusterType = rsp["ExclusterType"].GetInt64();
        m_exclusterTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RsAccessStrategy") && !rsp["RsAccessStrategy"].IsNull())
    {
        if (!rsp["RsAccessStrategy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RsAccessStrategy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rsAccessStrategy = rsp["RsAccessStrategy"].GetInt64();
        m_rsAccessStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedNetResources") && !rsp["ReservedNetResources"].IsNull())
    {
        if (!rsp["ReservedNetResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReservedNetResources` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ReservedNetResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReservedNetResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_reservedNetResources.push_back(item);
        }
        m_reservedNetResourcesHasBeenSet = true;
    }

    if (rsp.HasMember("IsPhysicalReplicationSupported") && !rsp["IsPhysicalReplicationSupported"].IsNull())
    {
        if (!rsp["IsPhysicalReplicationSupported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPhysicalReplicationSupported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPhysicalReplicationSupported = rsp["IsPhysicalReplicationSupported"].GetBool();
        m_isPhysicalReplicationSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("IsDcnStrongSyncSupported") && !rsp["IsDcnStrongSyncSupported"].IsNull())
    {
        if (!rsp["IsDcnStrongSyncSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsDcnStrongSyncSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDcnStrongSyncSupported = rsp["IsDcnStrongSyncSupported"].GetInt64();
        m_isDcnStrongSyncSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("IsDcnSwitchSupported") && !rsp["IsDcnSwitchSupported"].IsNull())
    {
        if (!rsp["IsDcnSwitchSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsDcnSwitchSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDcnSwitchSupported = rsp["IsDcnSwitchSupported"].GetInt64();
        m_isDcnSwitchSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("CpuType") && !rsp["CpuType"].IsNull())
    {
        if (!rsp["CpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cpuType = string(rsp["CpuType"].GetString());
        m_cpuTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDCDBInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
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

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
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

    if (m_wanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanStatus, allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_exclusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuditSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuditSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuditSupported, allocator);
    }

    if (m_isEncryptSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEncryptSupported, allocator);
    }

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
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

    if (m_storageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsage, allocator);
    }

    if (m_logStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logStorage, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
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

    if (m_shardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shards.begin(); itr != m_shards.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_dbEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbEngine.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6Flag, allocator);
    }

    if (m_wanVipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanVipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanVipv6.c_str(), allocator).Move(), allocator);
    }

    if (m_wanStatusIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanStatusIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanStatusIpv6, allocator);
    }

    if (m_wanPortIpv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanPortIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wanPortIpv6, allocator);
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

    if (m_isMaxUserConnectionsSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMaxUserConnectionsSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMaxUserConnectionsSupported, allocator);
    }

    if (m_dbVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptStatus, allocator);
    }

    if (m_exclusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusterType, allocator);
    }

    if (m_rsAccessStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RsAccessStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rsAccessStrategy, allocator);
    }

    if (m_reservedNetResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedNetResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_reservedNetResources.begin(); itr != m_reservedNetResources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isPhysicalReplicationSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPhysicalReplicationSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPhysicalReplicationSupported, allocator);
    }

    if (m_isDcnStrongSyncSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDcnStrongSyncSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDcnStrongSyncSupported, allocator);
    }

    if (m_isDcnSwitchSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDcnSwitchSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDcnSwitchSupported, allocator);
    }

    if (m_cpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cpuType.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDCDBInstanceDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDCDBInstanceDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeDCDBInstanceDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDCDBInstanceDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeDCDBInstanceDetailResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetVip() const
{
    return m_vip;
}

bool DescribeDCDBInstanceDetailResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetVport() const
{
    return m_vport;
}

bool DescribeDCDBInstanceDetailResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetNodeCount() const
{
    return m_nodeCount;
}

bool DescribeDCDBInstanceDetailResponse::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeDCDBInstanceDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeDCDBInstanceDetailResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeDCDBInstanceDetailResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetWanStatus() const
{
    return m_wanStatus;
}

bool DescribeDCDBInstanceDetailResponse::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetWanDomain() const
{
    return m_wanDomain;
}

bool DescribeDCDBInstanceDetailResponse::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetWanVip() const
{
    return m_wanVip;
}

bool DescribeDCDBInstanceDetailResponse::WanVipHasBeenSet() const
{
    return m_wanVipHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetWanPort() const
{
    return m_wanPort;
}

bool DescribeDCDBInstanceDetailResponse::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetProjectId() const
{
    return m_projectId;
}

bool DescribeDCDBInstanceDetailResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeDCDBInstanceDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetExclusterId() const
{
    return m_exclusterId;
}

bool DescribeDCDBInstanceDetailResponse::ExclusterIdHasBeenSet() const
{
    return m_exclusterIdHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeDCDBInstanceDetailResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDCDBInstanceDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

bool DescribeDCDBInstanceDetailResponse::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetDbVersion() const
{
    return m_dbVersion;
}

bool DescribeDCDBInstanceDetailResponse::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetIsAuditSupported() const
{
    return m_isAuditSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsAuditSupportedHasBeenSet() const
{
    return m_isAuditSupportedHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetIsEncryptSupported() const
{
    return m_isEncryptSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsEncryptSupportedHasBeenSet() const
{
    return m_isEncryptSupportedHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetMachine() const
{
    return m_machine;
}

bool DescribeDCDBInstanceDetailResponse::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetMemory() const
{
    return m_memory;
}

bool DescribeDCDBInstanceDetailResponse::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetStorage() const
{
    return m_storage;
}

bool DescribeDCDBInstanceDetailResponse::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

double DescribeDCDBInstanceDetailResponse::GetStorageUsage() const
{
    return m_storageUsage;
}

bool DescribeDCDBInstanceDetailResponse::StorageUsageHasBeenSet() const
{
    return m_storageUsageHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetLogStorage() const
{
    return m_logStorage;
}

bool DescribeDCDBInstanceDetailResponse::LogStorageHasBeenSet() const
{
    return m_logStorageHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetPid() const
{
    return m_pid;
}

bool DescribeDCDBInstanceDetailResponse::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetMasterZone() const
{
    return m_masterZone;
}

bool DescribeDCDBInstanceDetailResponse::MasterZoneHasBeenSet() const
{
    return m_masterZoneHasBeenSet;
}

vector<string> DescribeDCDBInstanceDetailResponse::GetSlaveZones() const
{
    return m_slaveZones;
}

bool DescribeDCDBInstanceDetailResponse::SlaveZonesHasBeenSet() const
{
    return m_slaveZonesHasBeenSet;
}

vector<ShardBriefInfo> DescribeDCDBInstanceDetailResponse::GetShards() const
{
    return m_shards;
}

bool DescribeDCDBInstanceDetailResponse::ShardsHasBeenSet() const
{
    return m_shardsHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetVip6() const
{
    return m_vip6;
}

bool DescribeDCDBInstanceDetailResponse::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeDCDBInstanceDetailResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetQps() const
{
    return m_qps;
}

bool DescribeDCDBInstanceDetailResponse::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetDbEngine() const
{
    return m_dbEngine;
}

bool DescribeDCDBInstanceDetailResponse::DbEngineHasBeenSet() const
{
    return m_dbEngineHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

bool DescribeDCDBInstanceDetailResponse::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetWanVipv6() const
{
    return m_wanVipv6;
}

bool DescribeDCDBInstanceDetailResponse::WanVipv6HasBeenSet() const
{
    return m_wanVipv6HasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetWanStatusIpv6() const
{
    return m_wanStatusIpv6;
}

bool DescribeDCDBInstanceDetailResponse::WanStatusIpv6HasBeenSet() const
{
    return m_wanStatusIpv6HasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetWanPortIpv6() const
{
    return m_wanPortIpv6;
}

bool DescribeDCDBInstanceDetailResponse::WanPortIpv6HasBeenSet() const
{
    return m_wanPortIpv6HasBeenSet;
}

vector<ResourceTag> DescribeDCDBInstanceDetailResponse::GetResourceTags() const
{
    return m_resourceTags;
}

bool DescribeDCDBInstanceDetailResponse::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetDcnFlag() const
{
    return m_dcnFlag;
}

bool DescribeDCDBInstanceDetailResponse::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetDcnStatus() const
{
    return m_dcnStatus;
}

bool DescribeDCDBInstanceDetailResponse::DcnStatusHasBeenSet() const
{
    return m_dcnStatusHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetDcnDstNum() const
{
    return m_dcnDstNum;
}

bool DescribeDCDBInstanceDetailResponse::DcnDstNumHasBeenSet() const
{
    return m_dcnDstNumHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeDCDBInstanceDetailResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

bool DescribeDCDBInstanceDetailResponse::GetIsMaxUserConnectionsSupported() const
{
    return m_isMaxUserConnectionsSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsMaxUserConnectionsSupportedHasBeenSet() const
{
    return m_isMaxUserConnectionsSupportedHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetDbVersionId() const
{
    return m_dbVersionId;
}

bool DescribeDCDBInstanceDetailResponse::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetEncryptStatus() const
{
    return m_encryptStatus;
}

bool DescribeDCDBInstanceDetailResponse::EncryptStatusHasBeenSet() const
{
    return m_encryptStatusHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetExclusterType() const
{
    return m_exclusterType;
}

bool DescribeDCDBInstanceDetailResponse::ExclusterTypeHasBeenSet() const
{
    return m_exclusterTypeHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetRsAccessStrategy() const
{
    return m_rsAccessStrategy;
}

bool DescribeDCDBInstanceDetailResponse::RsAccessStrategyHasBeenSet() const
{
    return m_rsAccessStrategyHasBeenSet;
}

vector<ReservedNetResource> DescribeDCDBInstanceDetailResponse::GetReservedNetResources() const
{
    return m_reservedNetResources;
}

bool DescribeDCDBInstanceDetailResponse::ReservedNetResourcesHasBeenSet() const
{
    return m_reservedNetResourcesHasBeenSet;
}

bool DescribeDCDBInstanceDetailResponse::GetIsPhysicalReplicationSupported() const
{
    return m_isPhysicalReplicationSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsPhysicalReplicationSupportedHasBeenSet() const
{
    return m_isPhysicalReplicationSupportedHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetIsDcnStrongSyncSupported() const
{
    return m_isDcnStrongSyncSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsDcnStrongSyncSupportedHasBeenSet() const
{
    return m_isDcnStrongSyncSupportedHasBeenSet;
}

int64_t DescribeDCDBInstanceDetailResponse::GetIsDcnSwitchSupported() const
{
    return m_isDcnSwitchSupported;
}

bool DescribeDCDBInstanceDetailResponse::IsDcnSwitchSupportedHasBeenSet() const
{
    return m_isDcnSwitchSupportedHasBeenSet;
}

string DescribeDCDBInstanceDetailResponse::GetCpuType() const
{
    return m_cpuType;
}

bool DescribeDCDBInstanceDetailResponse::CpuTypeHasBeenSet() const
{
    return m_cpuTypeHasBeenSet;
}


