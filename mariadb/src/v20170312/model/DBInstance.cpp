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

#include <tencentcloud/mariadb/v20170312/model/DBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DBInstance::DBInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_wanVipHasBeenSet(false),
    m_wanPortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_tdsqlVersionHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_uniqueVpcIdHasBeenSet(false),
    m_uniqueSubnetIdHasBeenSet(false),
    m_originSerialIdHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_isTmpHasBeenSet(false),
    m_exclusterIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_paymodeHasBeenSet(false),
    m_lockerHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_wanStatusHasBeenSet(false),
    m_isAuditSupportedHasBeenSet(false),
    m_machineHasBeenSet(false),
    m_isEncryptSupportedHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_ipv6FlagHasBeenSet(false),
    m_vipv6HasBeenSet(false),
    m_wanVipv6HasBeenSet(false),
    m_wanPortIpv6HasBeenSet(false),
    m_wanStatusIpv6HasBeenSet(false),
    m_dbEngineHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_dcnFlagHasBeenSet(false),
    m_dcnStatusHasBeenSet(false),
    m_dcnDstNumHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dbVersionIdHasBeenSet(false)
{
}

CoreInternalOutcome DBInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.VpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = value["VpcId"].GetInt64();
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.SubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = value["SubnetId"].GetInt64();
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("WanVip") && !value["WanVip"].IsNull())
    {
        if (!value["WanVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVip = string(value["WanVip"].GetString());
        m_wanVipHasBeenSet = true;
    }

    if (value.HasMember("WanPort") && !value["WanPort"].IsNull())
    {
        if (!value["WanPort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanPort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPort = value["WanPort"].GetInt64();
        m_wanPortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("TdsqlVersion") && !value["TdsqlVersion"].IsNull())
    {
        if (!value["TdsqlVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.TdsqlVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tdsqlVersion = string(value["TdsqlVersion"].GetString());
        m_tdsqlVersionHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("UniqueVpcId") && !value["UniqueVpcId"].IsNull())
    {
        if (!value["UniqueVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UniqueVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueVpcId = string(value["UniqueVpcId"].GetString());
        m_uniqueVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueSubnetId") && !value["UniqueSubnetId"].IsNull())
    {
        if (!value["UniqueSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.UniqueSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueSubnetId = string(value["UniqueSubnetId"].GetString());
        m_uniqueSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("OriginSerialId") && !value["OriginSerialId"].IsNull())
    {
        if (!value["OriginSerialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.OriginSerialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originSerialId = string(value["OriginSerialId"].GetString());
        m_originSerialIdHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("IsTmp") && !value["IsTmp"].IsNull())
    {
        if (!value["IsTmp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsTmp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isTmp = value["IsTmp"].GetUint64();
        m_isTmpHasBeenSet = true;
    }

    if (value.HasMember("ExclusterId") && !value["ExclusterId"].IsNull())
    {
        if (!value["ExclusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.ExclusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusterId = string(value["ExclusterId"].GetString());
        m_exclusterIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Qps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetInt64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("Paymode") && !value["Paymode"].IsNull())
    {
        if (!value["Paymode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Paymode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paymode = string(value["Paymode"].GetString());
        m_paymodeHasBeenSet = true;
    }

    if (value.HasMember("Locker") && !value["Locker"].IsNull())
    {
        if (!value["Locker"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Locker` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locker = value["Locker"].GetInt64();
        m_lockerHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("WanStatus") && !value["WanStatus"].IsNull())
    {
        if (!value["WanStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatus = value["WanStatus"].GetInt64();
        m_wanStatusHasBeenSet = true;
    }

    if (value.HasMember("IsAuditSupported") && !value["IsAuditSupported"].IsNull())
    {
        if (!value["IsAuditSupported"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsAuditSupported` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuditSupported = value["IsAuditSupported"].GetUint64();
        m_isAuditSupportedHasBeenSet = true;
    }

    if (value.HasMember("Machine") && !value["Machine"].IsNull())
    {
        if (!value["Machine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Machine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machine = string(value["Machine"].GetString());
        m_machineHasBeenSet = true;
    }

    if (value.HasMember("IsEncryptSupported") && !value["IsEncryptSupported"].IsNull())
    {
        if (!value["IsEncryptSupported"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.IsEncryptSupported` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEncryptSupported = value["IsEncryptSupported"].GetInt64();
        m_isEncryptSupportedHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Ipv6Flag") && !value["Ipv6Flag"].IsNull())
    {
        if (!value["Ipv6Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Ipv6Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6Flag = value["Ipv6Flag"].GetUint64();
        m_ipv6FlagHasBeenSet = true;
    }

    if (value.HasMember("Vipv6") && !value["Vipv6"].IsNull())
    {
        if (!value["Vipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.Vipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vipv6 = string(value["Vipv6"].GetString());
        m_vipv6HasBeenSet = true;
    }

    if (value.HasMember("WanVipv6") && !value["WanVipv6"].IsNull())
    {
        if (!value["WanVipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanVipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanVipv6 = string(value["WanVipv6"].GetString());
        m_wanVipv6HasBeenSet = true;
    }

    if (value.HasMember("WanPortIpv6") && !value["WanPortIpv6"].IsNull())
    {
        if (!value["WanPortIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanPortIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wanPortIpv6 = value["WanPortIpv6"].GetUint64();
        m_wanPortIpv6HasBeenSet = true;
    }

    if (value.HasMember("WanStatusIpv6") && !value["WanStatusIpv6"].IsNull())
    {
        if (!value["WanStatusIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.WanStatusIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wanStatusIpv6 = value["WanStatusIpv6"].GetUint64();
        m_wanStatusIpv6HasBeenSet = true;
    }

    if (value.HasMember("DbEngine") && !value["DbEngine"].IsNull())
    {
        if (!value["DbEngine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DbEngine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbEngine = string(value["DbEngine"].GetString());
        m_dbEngineHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("DcnFlag") && !value["DcnFlag"].IsNull())
    {
        if (!value["DcnFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DcnFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnFlag = value["DcnFlag"].GetInt64();
        m_dcnFlagHasBeenSet = true;
    }

    if (value.HasMember("DcnStatus") && !value["DcnStatus"].IsNull())
    {
        if (!value["DcnStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DcnStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnStatus = value["DcnStatus"].GetInt64();
        m_dcnStatusHasBeenSet = true;
    }

    if (value.HasMember("DcnDstNum") && !value["DcnDstNum"].IsNull())
    {
        if (!value["DcnDstNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.DcnDstNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dcnDstNum = value["DcnDstNum"].GetInt64();
        m_dcnDstNumHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DBInstance.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DBInstance.ResourceTags` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DBInstance.DbVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersionId = string(value["DbVersionId"].GetString());
        m_dbVersionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_tdsqlVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TdsqlVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tdsqlVersion.c_str(), allocator).Move(), allocator);
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

    if (m_originSerialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginSerialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originSerialId.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
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

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
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

    if (m_machineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machine.c_str(), allocator).Move(), allocator);
    }

    if (m_isEncryptSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEncryptSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEncryptSupported, allocator);
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


string DBInstance::GetInstanceId() const
{
    return m_instanceId;
}

void DBInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBInstance::GetInstanceName() const
{
    return m_instanceName;
}

void DBInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DBInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DBInstance::GetAppId() const
{
    return m_appId;
}

void DBInstance::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DBInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DBInstance::GetProjectId() const
{
    return m_projectId;
}

void DBInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DBInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DBInstance::GetRegion() const
{
    return m_region;
}

void DBInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBInstance::GetZone() const
{
    return m_zone;
}

void DBInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t DBInstance::GetVpcId() const
{
    return m_vpcId;
}

void DBInstance::SetVpcId(const int64_t& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t DBInstance::GetSubnetId() const
{
    return m_subnetId;
}

void DBInstance::SetSubnetId(const int64_t& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DBInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DBInstance::GetStatus() const
{
    return m_status;
}

void DBInstance::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DBInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DBInstance::GetVip() const
{
    return m_vip;
}

void DBInstance::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DBInstance::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DBInstance::GetVport() const
{
    return m_vport;
}

void DBInstance::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool DBInstance::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DBInstance::GetWanDomain() const
{
    return m_wanDomain;
}

void DBInstance::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool DBInstance::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string DBInstance::GetWanVip() const
{
    return m_wanVip;
}

void DBInstance::SetWanVip(const string& _wanVip)
{
    m_wanVip = _wanVip;
    m_wanVipHasBeenSet = true;
}

bool DBInstance::WanVipHasBeenSet() const
{
    return m_wanVipHasBeenSet;
}

int64_t DBInstance::GetWanPort() const
{
    return m_wanPort;
}

void DBInstance::SetWanPort(const int64_t& _wanPort)
{
    m_wanPort = _wanPort;
    m_wanPortHasBeenSet = true;
}

bool DBInstance::WanPortHasBeenSet() const
{
    return m_wanPortHasBeenSet;
}

string DBInstance::GetCreateTime() const
{
    return m_createTime;
}

void DBInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DBInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void DBInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DBInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DBInstance::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void DBInstance::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool DBInstance::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DBInstance::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void DBInstance::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool DBInstance::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

string DBInstance::GetUin() const
{
    return m_uin;
}

void DBInstance::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DBInstance::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DBInstance::GetTdsqlVersion() const
{
    return m_tdsqlVersion;
}

void DBInstance::SetTdsqlVersion(const string& _tdsqlVersion)
{
    m_tdsqlVersion = _tdsqlVersion;
    m_tdsqlVersionHasBeenSet = true;
}

bool DBInstance::TdsqlVersionHasBeenSet() const
{
    return m_tdsqlVersionHasBeenSet;
}

int64_t DBInstance::GetMemory() const
{
    return m_memory;
}

void DBInstance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DBInstance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DBInstance::GetStorage() const
{
    return m_storage;
}

void DBInstance::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool DBInstance::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DBInstance::GetUniqueVpcId() const
{
    return m_uniqueVpcId;
}

void DBInstance::SetUniqueVpcId(const string& _uniqueVpcId)
{
    m_uniqueVpcId = _uniqueVpcId;
    m_uniqueVpcIdHasBeenSet = true;
}

bool DBInstance::UniqueVpcIdHasBeenSet() const
{
    return m_uniqueVpcIdHasBeenSet;
}

string DBInstance::GetUniqueSubnetId() const
{
    return m_uniqueSubnetId;
}

void DBInstance::SetUniqueSubnetId(const string& _uniqueSubnetId)
{
    m_uniqueSubnetId = _uniqueSubnetId;
    m_uniqueSubnetIdHasBeenSet = true;
}

bool DBInstance::UniqueSubnetIdHasBeenSet() const
{
    return m_uniqueSubnetIdHasBeenSet;
}

string DBInstance::GetOriginSerialId() const
{
    return m_originSerialId;
}

void DBInstance::SetOriginSerialId(const string& _originSerialId)
{
    m_originSerialId = _originSerialId;
    m_originSerialIdHasBeenSet = true;
}

bool DBInstance::OriginSerialIdHasBeenSet() const
{
    return m_originSerialIdHasBeenSet;
}

uint64_t DBInstance::GetNodeCount() const
{
    return m_nodeCount;
}

void DBInstance::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool DBInstance::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

uint64_t DBInstance::GetIsTmp() const
{
    return m_isTmp;
}

void DBInstance::SetIsTmp(const uint64_t& _isTmp)
{
    m_isTmp = _isTmp;
    m_isTmpHasBeenSet = true;
}

bool DBInstance::IsTmpHasBeenSet() const
{
    return m_isTmpHasBeenSet;
}

string DBInstance::GetExclusterId() const
{
    return m_exclusterId;
}

void DBInstance::SetExclusterId(const string& _exclusterId)
{
    m_exclusterId = _exclusterId;
    m_exclusterIdHasBeenSet = true;
}

bool DBInstance::ExclusterIdHasBeenSet() const
{
    return m_exclusterIdHasBeenSet;
}

uint64_t DBInstance::GetId() const
{
    return m_id;
}

void DBInstance::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DBInstance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DBInstance::GetPid() const
{
    return m_pid;
}

void DBInstance::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool DBInstance::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

int64_t DBInstance::GetQps() const
{
    return m_qps;
}

void DBInstance::SetQps(const int64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool DBInstance::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

string DBInstance::GetPaymode() const
{
    return m_paymode;
}

void DBInstance::SetPaymode(const string& _paymode)
{
    m_paymode = _paymode;
    m_paymodeHasBeenSet = true;
}

bool DBInstance::PaymodeHasBeenSet() const
{
    return m_paymodeHasBeenSet;
}

int64_t DBInstance::GetLocker() const
{
    return m_locker;
}

void DBInstance::SetLocker(const int64_t& _locker)
{
    m_locker = _locker;
    m_lockerHasBeenSet = true;
}

bool DBInstance::LockerHasBeenSet() const
{
    return m_lockerHasBeenSet;
}

string DBInstance::GetStatusDesc() const
{
    return m_statusDesc;
}

void DBInstance::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool DBInstance::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DBInstance::GetWanStatus() const
{
    return m_wanStatus;
}

void DBInstance::SetWanStatus(const int64_t& _wanStatus)
{
    m_wanStatus = _wanStatus;
    m_wanStatusHasBeenSet = true;
}

bool DBInstance::WanStatusHasBeenSet() const
{
    return m_wanStatusHasBeenSet;
}

uint64_t DBInstance::GetIsAuditSupported() const
{
    return m_isAuditSupported;
}

void DBInstance::SetIsAuditSupported(const uint64_t& _isAuditSupported)
{
    m_isAuditSupported = _isAuditSupported;
    m_isAuditSupportedHasBeenSet = true;
}

bool DBInstance::IsAuditSupportedHasBeenSet() const
{
    return m_isAuditSupportedHasBeenSet;
}

string DBInstance::GetMachine() const
{
    return m_machine;
}

void DBInstance::SetMachine(const string& _machine)
{
    m_machine = _machine;
    m_machineHasBeenSet = true;
}

bool DBInstance::MachineHasBeenSet() const
{
    return m_machineHasBeenSet;
}

int64_t DBInstance::GetIsEncryptSupported() const
{
    return m_isEncryptSupported;
}

void DBInstance::SetIsEncryptSupported(const int64_t& _isEncryptSupported)
{
    m_isEncryptSupported = _isEncryptSupported;
    m_isEncryptSupportedHasBeenSet = true;
}

bool DBInstance::IsEncryptSupportedHasBeenSet() const
{
    return m_isEncryptSupportedHasBeenSet;
}

int64_t DBInstance::GetCpu() const
{
    return m_cpu;
}

void DBInstance::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool DBInstance::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

uint64_t DBInstance::GetIpv6Flag() const
{
    return m_ipv6Flag;
}

void DBInstance::SetIpv6Flag(const uint64_t& _ipv6Flag)
{
    m_ipv6Flag = _ipv6Flag;
    m_ipv6FlagHasBeenSet = true;
}

bool DBInstance::Ipv6FlagHasBeenSet() const
{
    return m_ipv6FlagHasBeenSet;
}

string DBInstance::GetVipv6() const
{
    return m_vipv6;
}

void DBInstance::SetVipv6(const string& _vipv6)
{
    m_vipv6 = _vipv6;
    m_vipv6HasBeenSet = true;
}

bool DBInstance::Vipv6HasBeenSet() const
{
    return m_vipv6HasBeenSet;
}

string DBInstance::GetWanVipv6() const
{
    return m_wanVipv6;
}

void DBInstance::SetWanVipv6(const string& _wanVipv6)
{
    m_wanVipv6 = _wanVipv6;
    m_wanVipv6HasBeenSet = true;
}

bool DBInstance::WanVipv6HasBeenSet() const
{
    return m_wanVipv6HasBeenSet;
}

uint64_t DBInstance::GetWanPortIpv6() const
{
    return m_wanPortIpv6;
}

void DBInstance::SetWanPortIpv6(const uint64_t& _wanPortIpv6)
{
    m_wanPortIpv6 = _wanPortIpv6;
    m_wanPortIpv6HasBeenSet = true;
}

bool DBInstance::WanPortIpv6HasBeenSet() const
{
    return m_wanPortIpv6HasBeenSet;
}

uint64_t DBInstance::GetWanStatusIpv6() const
{
    return m_wanStatusIpv6;
}

void DBInstance::SetWanStatusIpv6(const uint64_t& _wanStatusIpv6)
{
    m_wanStatusIpv6 = _wanStatusIpv6;
    m_wanStatusIpv6HasBeenSet = true;
}

bool DBInstance::WanStatusIpv6HasBeenSet() const
{
    return m_wanStatusIpv6HasBeenSet;
}

string DBInstance::GetDbEngine() const
{
    return m_dbEngine;
}

void DBInstance::SetDbEngine(const string& _dbEngine)
{
    m_dbEngine = _dbEngine;
    m_dbEngineHasBeenSet = true;
}

bool DBInstance::DbEngineHasBeenSet() const
{
    return m_dbEngineHasBeenSet;
}

string DBInstance::GetDbVersion() const
{
    return m_dbVersion;
}

void DBInstance::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool DBInstance::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t DBInstance::GetDcnFlag() const
{
    return m_dcnFlag;
}

void DBInstance::SetDcnFlag(const int64_t& _dcnFlag)
{
    m_dcnFlag = _dcnFlag;
    m_dcnFlagHasBeenSet = true;
}

bool DBInstance::DcnFlagHasBeenSet() const
{
    return m_dcnFlagHasBeenSet;
}

int64_t DBInstance::GetDcnStatus() const
{
    return m_dcnStatus;
}

void DBInstance::SetDcnStatus(const int64_t& _dcnStatus)
{
    m_dcnStatus = _dcnStatus;
    m_dcnStatusHasBeenSet = true;
}

bool DBInstance::DcnStatusHasBeenSet() const
{
    return m_dcnStatusHasBeenSet;
}

int64_t DBInstance::GetDcnDstNum() const
{
    return m_dcnDstNum;
}

void DBInstance::SetDcnDstNum(const int64_t& _dcnDstNum)
{
    m_dcnDstNum = _dcnDstNum;
    m_dcnDstNumHasBeenSet = true;
}

bool DBInstance::DcnDstNumHasBeenSet() const
{
    return m_dcnDstNumHasBeenSet;
}

int64_t DBInstance::GetInstanceType() const
{
    return m_instanceType;
}

void DBInstance::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DBInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<ResourceTag> DBInstance::GetResourceTags() const
{
    return m_resourceTags;
}

void DBInstance::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool DBInstance::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string DBInstance::GetDbVersionId() const
{
    return m_dbVersionId;
}

void DBInstance::SetDbVersionId(const string& _dbVersionId)
{
    m_dbVersionId = _dbVersionId;
    m_dbVersionIdHasBeenSet = true;
}

bool DBInstance::DbVersionIdHasBeenSet() const
{
    return m_dbVersionIdHasBeenSet;
}

