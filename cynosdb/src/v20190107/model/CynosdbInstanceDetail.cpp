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

#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CynosdbInstanceDetail::CynosdbInstanceDetail() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_serverlessStatusHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_dbVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_wanDomainHasBeenSet(false),
    m_charsetHasBeenSet(false),
    m_cynosVersionHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_dbModeHasBeenSet(false)
{
}

CoreInternalOutcome CynosdbInstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("ServerlessStatus") && !value["ServerlessStatus"].IsNull())
    {
        if (!value["ServerlessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.ServerlessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverlessStatus = string(value["ServerlessStatus"].GetString());
        m_serverlessStatusHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("DbVersion") && !value["DbVersion"].IsNull())
    {
        if (!value["DbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.DbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbVersion = string(value["DbVersion"].GetString());
        m_dbVersionHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Storage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storage = value["Storage"].GetInt64();
        m_storageHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PeriodEndTime") && !value["PeriodEndTime"].IsNull())
    {
        if (!value["PeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.PeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEndTime = string(value["PeriodEndTime"].GetString());
        m_periodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("NetType") && !value["NetType"].IsNull())
    {
        if (!value["NetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.NetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = value["NetType"].GetInt64();
        m_netTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("WanDomain") && !value["WanDomain"].IsNull())
    {
        if (!value["WanDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.WanDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanDomain = string(value["WanDomain"].GetString());
        m_wanDomainHasBeenSet = true;
    }

    if (value.HasMember("Charset") && !value["Charset"].IsNull())
    {
        if (!value["Charset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.Charset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charset = string(value["Charset"].GetString());
        m_charsetHasBeenSet = true;
    }

    if (value.HasMember("CynosVersion") && !value["CynosVersion"].IsNull())
    {
        if (!value["CynosVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.CynosVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cynosVersion = string(value["CynosVersion"].GetString());
        m_cynosVersionHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("MinCpu") && !value["MinCpu"].IsNull())
    {
        if (!value["MinCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.MinCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_minCpu = value["MinCpu"].GetDouble();
        m_minCpuHasBeenSet = true;
    }

    if (value.HasMember("MaxCpu") && !value["MaxCpu"].IsNull())
    {
        if (!value["MaxCpu"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.MaxCpu` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxCpu = value["MaxCpu"].GetDouble();
        m_maxCpuHasBeenSet = true;
    }

    if (value.HasMember("DbMode") && !value["DbMode"].IsNull())
    {
        if (!value["DbMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CynosdbInstanceDetail.DbMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMode = string(value["DbMode"].GetString());
        m_dbModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CynosdbInstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

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

    if (m_serverlessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerlessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverlessStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netType, allocator);
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

    if (m_charsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charset.c_str(), allocator).Move(), allocator);
    }

    if (m_cynosVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cynosVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

}


string CynosdbInstanceDetail::GetUin() const
{
    return m_uin;
}

void CynosdbInstanceDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CynosdbInstanceDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetAppId() const
{
    return m_appId;
}

void CynosdbInstanceDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CynosdbInstanceDetail::GetClusterId() const
{
    return m_clusterId;
}

void CynosdbInstanceDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CynosdbInstanceDetail::GetClusterName() const
{
    return m_clusterName;
}

void CynosdbInstanceDetail::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CynosdbInstanceDetail::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string CynosdbInstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void CynosdbInstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CynosdbInstanceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void CynosdbInstanceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CynosdbInstanceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetProjectId() const
{
    return m_projectId;
}

void CynosdbInstanceDetail::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CynosdbInstanceDetail::GetRegion() const
{
    return m_region;
}

void CynosdbInstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CynosdbInstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CynosdbInstanceDetail::GetZone() const
{
    return m_zone;
}

void CynosdbInstanceDetail::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CynosdbInstanceDetail::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string CynosdbInstanceDetail::GetStatus() const
{
    return m_status;
}

void CynosdbInstanceDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CynosdbInstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CynosdbInstanceDetail::GetStatusDesc() const
{
    return m_statusDesc;
}

void CynosdbInstanceDetail::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool CynosdbInstanceDetail::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string CynosdbInstanceDetail::GetServerlessStatus() const
{
    return m_serverlessStatus;
}

void CynosdbInstanceDetail::SetServerlessStatus(const string& _serverlessStatus)
{
    m_serverlessStatus = _serverlessStatus;
    m_serverlessStatusHasBeenSet = true;
}

bool CynosdbInstanceDetail::ServerlessStatusHasBeenSet() const
{
    return m_serverlessStatusHasBeenSet;
}

string CynosdbInstanceDetail::GetDbType() const
{
    return m_dbType;
}

void CynosdbInstanceDetail::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool CynosdbInstanceDetail::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

string CynosdbInstanceDetail::GetDbVersion() const
{
    return m_dbVersion;
}

void CynosdbInstanceDetail::SetDbVersion(const string& _dbVersion)
{
    m_dbVersion = _dbVersion;
    m_dbVersionHasBeenSet = true;
}

bool CynosdbInstanceDetail::DbVersionHasBeenSet() const
{
    return m_dbVersionHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetCpu() const
{
    return m_cpu;
}

void CynosdbInstanceDetail::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool CynosdbInstanceDetail::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetMemory() const
{
    return m_memory;
}

void CynosdbInstanceDetail::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool CynosdbInstanceDetail::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetStorage() const
{
    return m_storage;
}

void CynosdbInstanceDetail::SetStorage(const int64_t& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool CynosdbInstanceDetail::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string CynosdbInstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void CynosdbInstanceDetail::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CynosdbInstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CynosdbInstanceDetail::GetInstanceRole() const
{
    return m_instanceRole;
}

void CynosdbInstanceDetail::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool CynosdbInstanceDetail::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string CynosdbInstanceDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void CynosdbInstanceDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CynosdbInstanceDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CynosdbInstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void CynosdbInstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CynosdbInstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetPayMode() const
{
    return m_payMode;
}

void CynosdbInstanceDetail::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CynosdbInstanceDetail::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string CynosdbInstanceDetail::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

void CynosdbInstanceDetail::SetPeriodEndTime(const string& _periodEndTime)
{
    m_periodEndTime = _periodEndTime;
    m_periodEndTimeHasBeenSet = true;
}

bool CynosdbInstanceDetail::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetNetType() const
{
    return m_netType;
}

void CynosdbInstanceDetail::SetNetType(const int64_t& _netType)
{
    m_netType = _netType;
    m_netTypeHasBeenSet = true;
}

bool CynosdbInstanceDetail::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string CynosdbInstanceDetail::GetVpcId() const
{
    return m_vpcId;
}

void CynosdbInstanceDetail::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CynosdbInstanceDetail::GetSubnetId() const
{
    return m_subnetId;
}

void CynosdbInstanceDetail::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CynosdbInstanceDetail::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CynosdbInstanceDetail::GetVip() const
{
    return m_vip;
}

void CynosdbInstanceDetail::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool CynosdbInstanceDetail::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetVport() const
{
    return m_vport;
}

void CynosdbInstanceDetail::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool CynosdbInstanceDetail::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string CynosdbInstanceDetail::GetWanDomain() const
{
    return m_wanDomain;
}

void CynosdbInstanceDetail::SetWanDomain(const string& _wanDomain)
{
    m_wanDomain = _wanDomain;
    m_wanDomainHasBeenSet = true;
}

bool CynosdbInstanceDetail::WanDomainHasBeenSet() const
{
    return m_wanDomainHasBeenSet;
}

string CynosdbInstanceDetail::GetCharset() const
{
    return m_charset;
}

void CynosdbInstanceDetail::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool CynosdbInstanceDetail::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}

string CynosdbInstanceDetail::GetCynosVersion() const
{
    return m_cynosVersion;
}

void CynosdbInstanceDetail::SetCynosVersion(const string& _cynosVersion)
{
    m_cynosVersion = _cynosVersion;
    m_cynosVersionHasBeenSet = true;
}

bool CynosdbInstanceDetail::CynosVersionHasBeenSet() const
{
    return m_cynosVersionHasBeenSet;
}

int64_t CynosdbInstanceDetail::GetRenewFlag() const
{
    return m_renewFlag;
}

void CynosdbInstanceDetail::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CynosdbInstanceDetail::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

double CynosdbInstanceDetail::GetMinCpu() const
{
    return m_minCpu;
}

void CynosdbInstanceDetail::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool CynosdbInstanceDetail::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double CynosdbInstanceDetail::GetMaxCpu() const
{
    return m_maxCpu;
}

void CynosdbInstanceDetail::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool CynosdbInstanceDetail::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string CynosdbInstanceDetail::GetDbMode() const
{
    return m_dbMode;
}

void CynosdbInstanceDetail::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool CynosdbInstanceDetail::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

