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

#include <tencentcloud/tdmysql/v20211122/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_computeNodeNumHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_createVersionHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_memHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_mCCpuHasBeenSet(false),
    m_mCMemHasBeenSet(false),
    m_computerNodeCpuHasBeenSet(false),
    m_computerNodeMemHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_mCNumHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_accountTagHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_destroyedAtHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_isolatedAtHasBeenSet(false),
    m_isolatedFromHasBeenSet(false),
    m_replicationsHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_nodesHasBeenSet(false),
    m_binlogStatusHasBeenSet(false),
    m_cdcNodeCpuHasBeenSet(false),
    m_cdcNodeMemHasBeenSet(false),
    m_cdcNodeNumHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_standbyFlagHasBeenSet(false),
    m_standbySecondaryNumHasBeenSet(false),
    m_columnarNodeCpuHasBeenSet(false),
    m_columnarNodeMemHasBeenSet(false),
    m_columnarNodeNumHasBeenSet(false),
    m_columnarNodeDiskHasBeenSet(false),
    m_columnarNodeStorageTypeHasBeenSet(false),
    m_instanceCategoryHasBeenSet(false),
    m_exclusiveClusterIdHasBeenSet(false),
    m_sQLModeHasBeenSet(false),
    m_instanceModeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_autoScaleConfigHasBeenSet(false),
    m_analysisModeHasBeenSet(false),
    m_analysisRelationInfosHasBeenSet(false),
    m_analysisInstanceInfoHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeNodeNum") && !value["ComputeNodeNum"].IsNull())
    {
        if (!value["ComputeNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ComputeNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computeNodeNum = value["ComputeNodeNum"].GetInt64();
        m_computeNodeNumHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("CreateVersion") && !value["CreateVersion"].IsNull())
    {
        if (!value["CreateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createVersion = string(value["CreateVersion"].GetString());
        m_createVersionHasBeenSet = true;
    }

    if (value.HasMember("InitParams") && !value["InitParams"].IsNull())
    {
        if (!value["InitParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InitParams` is not array type"));

        const rapidjson::Value &tmpValue = value["InitParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_initParams.push_back(item);
        }
        m_initParamsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
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

    if (value.HasMember("StorageNodeNum") && !value["StorageNodeNum"].IsNull())
    {
        if (!value["StorageNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StorageNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeNum = value["StorageNodeNum"].GetInt64();
        m_storageNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ResourceTags") && !value["ResourceTags"].IsNull())
    {
        if (!value["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ResourceTags` is not array type"));

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

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Mem") && !value["Mem"].IsNull())
    {
        if (!value["Mem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Mem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mem = value["Mem"].GetInt64();
        m_memHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Disk") && !value["Disk"].IsNull())
    {
        if (!value["Disk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Disk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = value["Disk"].GetInt64();
        m_diskHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
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

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("MCCpu") && !value["MCCpu"].IsNull())
    {
        if (!value["MCCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MCCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mCCpu = value["MCCpu"].GetInt64();
        m_mCCpuHasBeenSet = true;
    }

    if (value.HasMember("MCMem") && !value["MCMem"].IsNull())
    {
        if (!value["MCMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MCMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mCMem = value["MCMem"].GetInt64();
        m_mCMemHasBeenSet = true;
    }

    if (value.HasMember("ComputerNodeCpu") && !value["ComputerNodeCpu"].IsNull())
    {
        if (!value["ComputerNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ComputerNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computerNodeCpu = value["ComputerNodeCpu"].GetInt64();
        m_computerNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("ComputerNodeMem") && !value["ComputerNodeMem"].IsNull())
    {
        if (!value["ComputerNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ComputerNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_computerNodeMem = value["ComputerNodeMem"].GetInt64();
        m_computerNodeMemHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeCpu") && !value["StorageNodeCpu"].IsNull())
    {
        if (!value["StorageNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StorageNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeCpu = value["StorageNodeCpu"].GetInt64();
        m_storageNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("StorageNodeMem") && !value["StorageNodeMem"].IsNull())
    {
        if (!value["StorageNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StorageNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMem = value["StorageNodeMem"].GetInt64();
        m_storageNodeMemHasBeenSet = true;
    }

    if (value.HasMember("MCNum") && !value["MCNum"].IsNull())
    {
        if (!value["MCNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MCNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mCNum = value["MCNum"].GetInt64();
        m_mCNumHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("AccountTag") && !value["AccountTag"].IsNull())
    {
        if (!value["AccountTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AccountTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountTag = string(value["AccountTag"].GetString());
        m_accountTagHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("DestroyedAt") && !value["DestroyedAt"].IsNull())
    {
        if (!value["DestroyedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.DestroyedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destroyedAt = string(value["DestroyedAt"].GetString());
        m_destroyedAtHasBeenSet = true;
    }

    if (value.HasMember("ExpireAt") && !value["ExpireAt"].IsNull())
    {
        if (!value["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(value["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (value.HasMember("IsolatedAt") && !value["IsolatedAt"].IsNull())
    {
        if (!value["IsolatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsolatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedAt = string(value["IsolatedAt"].GetString());
        m_isolatedAtHasBeenSet = true;
    }

    if (value.HasMember("IsolatedFrom") && !value["IsolatedFrom"].IsNull())
    {
        if (!value["IsolatedFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.IsolatedFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedFrom = string(value["IsolatedFrom"].GetString());
        m_isolatedFromHasBeenSet = true;
    }

    if (value.HasMember("Replications") && !value["Replications"].IsNull())
    {
        if (!value["Replications"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Replications` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replications = value["Replications"].GetInt64();
        m_replicationsHasBeenSet = true;
    }

    if (value.HasMember("FullReplications") && !value["FullReplications"].IsNull())
    {
        if (!value["FullReplications"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.FullReplications` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullReplications = value["FullReplications"].GetInt64();
        m_fullReplicationsHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Zones") && !value["Zones"].IsNull())
    {
        if (!value["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zones` is not array type"));

        const rapidjson::Value &tmpValue = value["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (value.HasMember("Nodes") && !value["Nodes"].IsNull())
    {
        if (!value["Nodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Nodes` is not array type"));

        const rapidjson::Value &tmpValue = value["Nodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodes.push_back(item);
        }
        m_nodesHasBeenSet = true;
    }

    if (value.HasMember("BinlogStatus") && !value["BinlogStatus"].IsNull())
    {
        if (!value["BinlogStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.BinlogStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogStatus = value["BinlogStatus"].GetInt64();
        m_binlogStatusHasBeenSet = true;
    }

    if (value.HasMember("CdcNodeCpu") && !value["CdcNodeCpu"].IsNull())
    {
        if (!value["CdcNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CdcNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdcNodeCpu = value["CdcNodeCpu"].GetInt64();
        m_cdcNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("CdcNodeMem") && !value["CdcNodeMem"].IsNull())
    {
        if (!value["CdcNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CdcNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdcNodeMem = value["CdcNodeMem"].GetInt64();
        m_cdcNodeMemHasBeenSet = true;
    }

    if (value.HasMember("CdcNodeNum") && !value["CdcNodeNum"].IsNull())
    {
        if (!value["CdcNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.CdcNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cdcNodeNum = value["CdcNodeNum"].GetInt64();
        m_cdcNodeNumHasBeenSet = true;
    }

    if (value.HasMember("AZMode") && !value["AZMode"].IsNull())
    {
        if (!value["AZMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AZMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aZMode = value["AZMode"].GetInt64();
        m_aZModeHasBeenSet = true;
    }

    if (value.HasMember("StandbyFlag") && !value["StandbyFlag"].IsNull())
    {
        if (!value["StandbyFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StandbyFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_standbyFlag = value["StandbyFlag"].GetInt64();
        m_standbyFlagHasBeenSet = true;
    }

    if (value.HasMember("StandbySecondaryNum") && !value["StandbySecondaryNum"].IsNull())
    {
        if (!value["StandbySecondaryNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.StandbySecondaryNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_standbySecondaryNum = value["StandbySecondaryNum"].GetInt64();
        m_standbySecondaryNumHasBeenSet = true;
    }

    if (value.HasMember("ColumnarNodeCpu") && !value["ColumnarNodeCpu"].IsNull())
    {
        if (!value["ColumnarNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColumnarNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeCpu = value["ColumnarNodeCpu"].GetInt64();
        m_columnarNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("ColumnarNodeMem") && !value["ColumnarNodeMem"].IsNull())
    {
        if (!value["ColumnarNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColumnarNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeMem = value["ColumnarNodeMem"].GetInt64();
        m_columnarNodeMemHasBeenSet = true;
    }

    if (value.HasMember("ColumnarNodeNum") && !value["ColumnarNodeNum"].IsNull())
    {
        if (!value["ColumnarNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColumnarNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeNum = value["ColumnarNodeNum"].GetInt64();
        m_columnarNodeNumHasBeenSet = true;
    }

    if (value.HasMember("ColumnarNodeDisk") && !value["ColumnarNodeDisk"].IsNull())
    {
        if (!value["ColumnarNodeDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColumnarNodeDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeDisk = value["ColumnarNodeDisk"].GetInt64();
        m_columnarNodeDiskHasBeenSet = true;
    }

    if (value.HasMember("ColumnarNodeStorageType") && !value["ColumnarNodeStorageType"].IsNull())
    {
        if (!value["ColumnarNodeStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ColumnarNodeStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeStorageType = string(value["ColumnarNodeStorageType"].GetString());
        m_columnarNodeStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCategory") && !value["InstanceCategory"].IsNull())
    {
        if (!value["InstanceCategory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceCategory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCategory = value["InstanceCategory"].GetInt64();
        m_instanceCategoryHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveClusterId") && !value["ExclusiveClusterId"].IsNull())
    {
        if (!value["ExclusiveClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ExclusiveClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exclusiveClusterId = string(value["ExclusiveClusterId"].GetString());
        m_exclusiveClusterIdHasBeenSet = true;
    }

    if (value.HasMember("SQLMode") && !value["SQLMode"].IsNull())
    {
        if (!value["SQLMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SQLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLMode = string(value["SQLMode"].GetString());
        m_sQLModeHasBeenSet = true;
    }

    if (value.HasMember("InstanceMode") && !value["InstanceMode"].IsNull())
    {
        if (!value["InstanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMode = string(value["InstanceMode"].GetString());
        m_instanceModeHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("AutoScaleConfig") && !value["AutoScaleConfig"].IsNull())
    {
        if (!value["AutoScaleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AutoScaleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoScaleConfig.Deserialize(value["AutoScaleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoScaleConfigHasBeenSet = true;
    }

    if (value.HasMember("AnalysisMode") && !value["AnalysisMode"].IsNull())
    {
        if (!value["AnalysisMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AnalysisMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisMode = string(value["AnalysisMode"].GetString());
        m_analysisModeHasBeenSet = true;
    }

    if (value.HasMember("AnalysisRelationInfos") && !value["AnalysisRelationInfos"].IsNull())
    {
        if (!value["AnalysisRelationInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AnalysisRelationInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalysisRelationInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisRelationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisRelationInfos.push_back(item);
        }
        m_analysisRelationInfosHasBeenSet = true;
    }

    if (value.HasMember("AnalysisInstanceInfo") && !value["AnalysisInstanceInfo"].IsNull())
    {
        if (!value["AnalysisInstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AnalysisInstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analysisInstanceInfo.Deserialize(value["AnalysisInstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analysisInstanceInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computeNodeNum, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_createVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_initParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initParams.begin(); itr != m_initParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeNum, allocator);
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_memHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mem, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_mCCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mCCpu, allocator);
    }

    if (m_mCMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mCMem, allocator);
    }

    if (m_computerNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputerNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computerNodeCpu, allocator);
    }

    if (m_computerNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputerNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_computerNodeMem, allocator);
    }

    if (m_storageNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeCpu, allocator);
    }

    if (m_storageNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeMem, allocator);
    }

    if (m_mCNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MCNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mCNum, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountTag.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_destroyedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestroyedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destroyedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expireAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replications, allocator);
    }

    if (m_fullReplicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullReplications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fullReplications, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodes.begin(); itr != m_nodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_binlogStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogStatus, allocator);
    }

    if (m_cdcNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdcNodeCpu, allocator);
    }

    if (m_cdcNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdcNodeMem, allocator);
    }

    if (m_cdcNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cdcNodeNum, allocator);
    }

    if (m_aZModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AZMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aZMode, allocator);
    }

    if (m_standbyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standbyFlag, allocator);
    }

    if (m_standbySecondaryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbySecondaryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standbySecondaryNum, allocator);
    }

    if (m_columnarNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnarNodeCpu, allocator);
    }

    if (m_columnarNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnarNodeMem, allocator);
    }

    if (m_columnarNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnarNodeNum, allocator);
    }

    if (m_columnarNodeDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnarNodeDisk, allocator);
    }

    if (m_columnarNodeStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnarNodeStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCategory, allocator);
    }

    if (m_exclusiveClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exclusiveClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoScaleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScaleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_analysisModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisMode.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisRelationInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisRelationInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisRelationInfos.begin(); itr != m_analysisRelationInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_analysisInstanceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisInstanceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_analysisInstanceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t InstanceInfo::GetComputeNodeNum() const
{
    return m_computeNodeNum;
}

void InstanceInfo::SetComputeNodeNum(const int64_t& _computeNodeNum)
{
    m_computeNodeNum = _computeNodeNum;
    m_computeNodeNumHasBeenSet = true;
}

bool InstanceInfo::ComputeNodeNumHasBeenSet() const
{
    return m_computeNodeNumHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string InstanceInfo::GetCreateVersion() const
{
    return m_createVersion;
}

void InstanceInfo::SetCreateVersion(const string& _createVersion)
{
    m_createVersion = _createVersion;
    m_createVersionHasBeenSet = true;
}

bool InstanceInfo::CreateVersionHasBeenSet() const
{
    return m_createVersionHasBeenSet;
}

vector<InstanceParam> InstanceInfo::GetInitParams() const
{
    return m_initParams;
}

void InstanceInfo::SetInitParams(const vector<InstanceParam>& _initParams)
{
    m_initParams = _initParams;
    m_initParamsHasBeenSet = true;
}

bool InstanceInfo::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
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

int64_t InstanceInfo::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

void InstanceInfo::SetStorageNodeNum(const int64_t& _storageNodeNum)
{
    m_storageNodeNum = _storageNodeNum;
    m_storageNodeNumHasBeenSet = true;
}

bool InstanceInfo::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

vector<ResourceTag> InstanceInfo::GetResourceTags() const
{
    return m_resourceTags;
}

void InstanceInfo::SetResourceTags(const vector<ResourceTag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool InstanceInfo::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
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

int64_t InstanceInfo::GetCpu() const
{
    return m_cpu;
}

void InstanceInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool InstanceInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

string InstanceInfo::GetVpcId() const
{
    return m_vpcId;
}

void InstanceInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InstanceInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

int64_t InstanceInfo::GetMem() const
{
    return m_mem;
}

void InstanceInfo::SetMem(const int64_t& _mem)
{
    m_mem = _mem;
    m_memHasBeenSet = true;
}

bool InstanceInfo::MemHasBeenSet() const
{
    return m_memHasBeenSet;
}

string InstanceInfo::GetVip() const
{
    return m_vip;
}

void InstanceInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string InstanceInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InstanceInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InstanceInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t InstanceInfo::GetVport() const
{
    return m_vport;
}

void InstanceInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

int64_t InstanceInfo::GetDisk() const
{
    return m_disk;
}

void InstanceInfo::SetDisk(const int64_t& _disk)
{
    m_disk = _disk;
    m_diskHasBeenSet = true;
}

bool InstanceInfo::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

string InstanceInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
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

string InstanceInfo::GetStatusDesc() const
{
    return m_statusDesc;
}

void InstanceInfo::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool InstanceInfo::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t InstanceInfo::GetMCCpu() const
{
    return m_mCCpu;
}

void InstanceInfo::SetMCCpu(const int64_t& _mCCpu)
{
    m_mCCpu = _mCCpu;
    m_mCCpuHasBeenSet = true;
}

bool InstanceInfo::MCCpuHasBeenSet() const
{
    return m_mCCpuHasBeenSet;
}

int64_t InstanceInfo::GetMCMem() const
{
    return m_mCMem;
}

void InstanceInfo::SetMCMem(const int64_t& _mCMem)
{
    m_mCMem = _mCMem;
    m_mCMemHasBeenSet = true;
}

bool InstanceInfo::MCMemHasBeenSet() const
{
    return m_mCMemHasBeenSet;
}

int64_t InstanceInfo::GetComputerNodeCpu() const
{
    return m_computerNodeCpu;
}

void InstanceInfo::SetComputerNodeCpu(const int64_t& _computerNodeCpu)
{
    m_computerNodeCpu = _computerNodeCpu;
    m_computerNodeCpuHasBeenSet = true;
}

bool InstanceInfo::ComputerNodeCpuHasBeenSet() const
{
    return m_computerNodeCpuHasBeenSet;
}

int64_t InstanceInfo::GetComputerNodeMem() const
{
    return m_computerNodeMem;
}

void InstanceInfo::SetComputerNodeMem(const int64_t& _computerNodeMem)
{
    m_computerNodeMem = _computerNodeMem;
    m_computerNodeMemHasBeenSet = true;
}

bool InstanceInfo::ComputerNodeMemHasBeenSet() const
{
    return m_computerNodeMemHasBeenSet;
}

int64_t InstanceInfo::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

void InstanceInfo::SetStorageNodeCpu(const int64_t& _storageNodeCpu)
{
    m_storageNodeCpu = _storageNodeCpu;
    m_storageNodeCpuHasBeenSet = true;
}

bool InstanceInfo::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t InstanceInfo::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

void InstanceInfo::SetStorageNodeMem(const int64_t& _storageNodeMem)
{
    m_storageNodeMem = _storageNodeMem;
    m_storageNodeMemHasBeenSet = true;
}

bool InstanceInfo::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

int64_t InstanceInfo::GetMCNum() const
{
    return m_mCNum;
}

void InstanceInfo::SetMCNum(const int64_t& _mCNum)
{
    m_mCNum = _mCNum;
    m_mCNumHasBeenSet = true;
}

bool InstanceInfo::MCNumHasBeenSet() const
{
    return m_mCNumHasBeenSet;
}

int64_t InstanceInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void InstanceInfo::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool InstanceInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string InstanceInfo::GetPayMode() const
{
    return m_payMode;
}

void InstanceInfo::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool InstanceInfo::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string InstanceInfo::GetAccountTag() const
{
    return m_accountTag;
}

void InstanceInfo::SetAccountTag(const string& _accountTag)
{
    m_accountTag = _accountTag;
    m_accountTagHasBeenSet = true;
}

bool InstanceInfo::AccountTagHasBeenSet() const
{
    return m_accountTagHasBeenSet;
}

string InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceInfo::GetStorageType() const
{
    return m_storageType;
}

void InstanceInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool InstanceInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string InstanceInfo::GetDestroyedAt() const
{
    return m_destroyedAt;
}

void InstanceInfo::SetDestroyedAt(const string& _destroyedAt)
{
    m_destroyedAt = _destroyedAt;
    m_destroyedAtHasBeenSet = true;
}

bool InstanceInfo::DestroyedAtHasBeenSet() const
{
    return m_destroyedAtHasBeenSet;
}

string InstanceInfo::GetExpireAt() const
{
    return m_expireAt;
}

void InstanceInfo::SetExpireAt(const string& _expireAt)
{
    m_expireAt = _expireAt;
    m_expireAtHasBeenSet = true;
}

bool InstanceInfo::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

string InstanceInfo::GetIsolatedAt() const
{
    return m_isolatedAt;
}

void InstanceInfo::SetIsolatedAt(const string& _isolatedAt)
{
    m_isolatedAt = _isolatedAt;
    m_isolatedAtHasBeenSet = true;
}

bool InstanceInfo::IsolatedAtHasBeenSet() const
{
    return m_isolatedAtHasBeenSet;
}

string InstanceInfo::GetIsolatedFrom() const
{
    return m_isolatedFrom;
}

void InstanceInfo::SetIsolatedFrom(const string& _isolatedFrom)
{
    m_isolatedFrom = _isolatedFrom;
    m_isolatedFromHasBeenSet = true;
}

bool InstanceInfo::IsolatedFromHasBeenSet() const
{
    return m_isolatedFromHasBeenSet;
}

int64_t InstanceInfo::GetReplications() const
{
    return m_replications;
}

void InstanceInfo::SetReplications(const int64_t& _replications)
{
    m_replications = _replications;
    m_replicationsHasBeenSet = true;
}

bool InstanceInfo::ReplicationsHasBeenSet() const
{
    return m_replicationsHasBeenSet;
}

int64_t InstanceInfo::GetFullReplications() const
{
    return m_fullReplications;
}

void InstanceInfo::SetFullReplications(const int64_t& _fullReplications)
{
    m_fullReplications = _fullReplications;
    m_fullReplicationsHasBeenSet = true;
}

bool InstanceInfo::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

int64_t InstanceInfo::GetAppId() const
{
    return m_appId;
}

void InstanceInfo::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool InstanceInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string InstanceInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void InstanceInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool InstanceInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string InstanceInfo::GetUin() const
{
    return m_uin;
}

void InstanceInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool InstanceInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

vector<string> InstanceInfo::GetZones() const
{
    return m_zones;
}

void InstanceInfo::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool InstanceInfo::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

vector<InstanceNode> InstanceInfo::GetNodes() const
{
    return m_nodes;
}

void InstanceInfo::SetNodes(const vector<InstanceNode>& _nodes)
{
    m_nodes = _nodes;
    m_nodesHasBeenSet = true;
}

bool InstanceInfo::NodesHasBeenSet() const
{
    return m_nodesHasBeenSet;
}

int64_t InstanceInfo::GetBinlogStatus() const
{
    return m_binlogStatus;
}

void InstanceInfo::SetBinlogStatus(const int64_t& _binlogStatus)
{
    m_binlogStatus = _binlogStatus;
    m_binlogStatusHasBeenSet = true;
}

bool InstanceInfo::BinlogStatusHasBeenSet() const
{
    return m_binlogStatusHasBeenSet;
}

int64_t InstanceInfo::GetCdcNodeCpu() const
{
    return m_cdcNodeCpu;
}

void InstanceInfo::SetCdcNodeCpu(const int64_t& _cdcNodeCpu)
{
    m_cdcNodeCpu = _cdcNodeCpu;
    m_cdcNodeCpuHasBeenSet = true;
}

bool InstanceInfo::CdcNodeCpuHasBeenSet() const
{
    return m_cdcNodeCpuHasBeenSet;
}

int64_t InstanceInfo::GetCdcNodeMem() const
{
    return m_cdcNodeMem;
}

void InstanceInfo::SetCdcNodeMem(const int64_t& _cdcNodeMem)
{
    m_cdcNodeMem = _cdcNodeMem;
    m_cdcNodeMemHasBeenSet = true;
}

bool InstanceInfo::CdcNodeMemHasBeenSet() const
{
    return m_cdcNodeMemHasBeenSet;
}

int64_t InstanceInfo::GetCdcNodeNum() const
{
    return m_cdcNodeNum;
}

void InstanceInfo::SetCdcNodeNum(const int64_t& _cdcNodeNum)
{
    m_cdcNodeNum = _cdcNodeNum;
    m_cdcNodeNumHasBeenSet = true;
}

bool InstanceInfo::CdcNodeNumHasBeenSet() const
{
    return m_cdcNodeNumHasBeenSet;
}

int64_t InstanceInfo::GetAZMode() const
{
    return m_aZMode;
}

void InstanceInfo::SetAZMode(const int64_t& _aZMode)
{
    m_aZMode = _aZMode;
    m_aZModeHasBeenSet = true;
}

bool InstanceInfo::AZModeHasBeenSet() const
{
    return m_aZModeHasBeenSet;
}

int64_t InstanceInfo::GetStandbyFlag() const
{
    return m_standbyFlag;
}

void InstanceInfo::SetStandbyFlag(const int64_t& _standbyFlag)
{
    m_standbyFlag = _standbyFlag;
    m_standbyFlagHasBeenSet = true;
}

bool InstanceInfo::StandbyFlagHasBeenSet() const
{
    return m_standbyFlagHasBeenSet;
}

int64_t InstanceInfo::GetStandbySecondaryNum() const
{
    return m_standbySecondaryNum;
}

void InstanceInfo::SetStandbySecondaryNum(const int64_t& _standbySecondaryNum)
{
    m_standbySecondaryNum = _standbySecondaryNum;
    m_standbySecondaryNumHasBeenSet = true;
}

bool InstanceInfo::StandbySecondaryNumHasBeenSet() const
{
    return m_standbySecondaryNumHasBeenSet;
}

int64_t InstanceInfo::GetColumnarNodeCpu() const
{
    return m_columnarNodeCpu;
}

void InstanceInfo::SetColumnarNodeCpu(const int64_t& _columnarNodeCpu)
{
    m_columnarNodeCpu = _columnarNodeCpu;
    m_columnarNodeCpuHasBeenSet = true;
}

bool InstanceInfo::ColumnarNodeCpuHasBeenSet() const
{
    return m_columnarNodeCpuHasBeenSet;
}

int64_t InstanceInfo::GetColumnarNodeMem() const
{
    return m_columnarNodeMem;
}

void InstanceInfo::SetColumnarNodeMem(const int64_t& _columnarNodeMem)
{
    m_columnarNodeMem = _columnarNodeMem;
    m_columnarNodeMemHasBeenSet = true;
}

bool InstanceInfo::ColumnarNodeMemHasBeenSet() const
{
    return m_columnarNodeMemHasBeenSet;
}

int64_t InstanceInfo::GetColumnarNodeNum() const
{
    return m_columnarNodeNum;
}

void InstanceInfo::SetColumnarNodeNum(const int64_t& _columnarNodeNum)
{
    m_columnarNodeNum = _columnarNodeNum;
    m_columnarNodeNumHasBeenSet = true;
}

bool InstanceInfo::ColumnarNodeNumHasBeenSet() const
{
    return m_columnarNodeNumHasBeenSet;
}

int64_t InstanceInfo::GetColumnarNodeDisk() const
{
    return m_columnarNodeDisk;
}

void InstanceInfo::SetColumnarNodeDisk(const int64_t& _columnarNodeDisk)
{
    m_columnarNodeDisk = _columnarNodeDisk;
    m_columnarNodeDiskHasBeenSet = true;
}

bool InstanceInfo::ColumnarNodeDiskHasBeenSet() const
{
    return m_columnarNodeDiskHasBeenSet;
}

string InstanceInfo::GetColumnarNodeStorageType() const
{
    return m_columnarNodeStorageType;
}

void InstanceInfo::SetColumnarNodeStorageType(const string& _columnarNodeStorageType)
{
    m_columnarNodeStorageType = _columnarNodeStorageType;
    m_columnarNodeStorageTypeHasBeenSet = true;
}

bool InstanceInfo::ColumnarNodeStorageTypeHasBeenSet() const
{
    return m_columnarNodeStorageTypeHasBeenSet;
}

int64_t InstanceInfo::GetInstanceCategory() const
{
    return m_instanceCategory;
}

void InstanceInfo::SetInstanceCategory(const int64_t& _instanceCategory)
{
    m_instanceCategory = _instanceCategory;
    m_instanceCategoryHasBeenSet = true;
}

bool InstanceInfo::InstanceCategoryHasBeenSet() const
{
    return m_instanceCategoryHasBeenSet;
}

string InstanceInfo::GetExclusiveClusterId() const
{
    return m_exclusiveClusterId;
}

void InstanceInfo::SetExclusiveClusterId(const string& _exclusiveClusterId)
{
    m_exclusiveClusterId = _exclusiveClusterId;
    m_exclusiveClusterIdHasBeenSet = true;
}

bool InstanceInfo::ExclusiveClusterIdHasBeenSet() const
{
    return m_exclusiveClusterIdHasBeenSet;
}

string InstanceInfo::GetSQLMode() const
{
    return m_sQLMode;
}

void InstanceInfo::SetSQLMode(const string& _sQLMode)
{
    m_sQLMode = _sQLMode;
    m_sQLModeHasBeenSet = true;
}

bool InstanceInfo::SQLModeHasBeenSet() const
{
    return m_sQLModeHasBeenSet;
}

string InstanceInfo::GetInstanceMode() const
{
    return m_instanceMode;
}

void InstanceInfo::SetInstanceMode(const string& _instanceMode)
{
    m_instanceMode = _instanceMode;
    m_instanceModeHasBeenSet = true;
}

bool InstanceInfo::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}

string InstanceInfo::GetClusterId() const
{
    return m_clusterId;
}

void InstanceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InstanceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

AutoScalingConfig InstanceInfo::GetAutoScaleConfig() const
{
    return m_autoScaleConfig;
}

void InstanceInfo::SetAutoScaleConfig(const AutoScalingConfig& _autoScaleConfig)
{
    m_autoScaleConfig = _autoScaleConfig;
    m_autoScaleConfigHasBeenSet = true;
}

bool InstanceInfo::AutoScaleConfigHasBeenSet() const
{
    return m_autoScaleConfigHasBeenSet;
}

string InstanceInfo::GetAnalysisMode() const
{
    return m_analysisMode;
}

void InstanceInfo::SetAnalysisMode(const string& _analysisMode)
{
    m_analysisMode = _analysisMode;
    m_analysisModeHasBeenSet = true;
}

bool InstanceInfo::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}

vector<AnalysisRelationInfo> InstanceInfo::GetAnalysisRelationInfos() const
{
    return m_analysisRelationInfos;
}

void InstanceInfo::SetAnalysisRelationInfos(const vector<AnalysisRelationInfo>& _analysisRelationInfos)
{
    m_analysisRelationInfos = _analysisRelationInfos;
    m_analysisRelationInfosHasBeenSet = true;
}

bool InstanceInfo::AnalysisRelationInfosHasBeenSet() const
{
    return m_analysisRelationInfosHasBeenSet;
}

AnalysisInstanceInfo InstanceInfo::GetAnalysisInstanceInfo() const
{
    return m_analysisInstanceInfo;
}

void InstanceInfo::SetAnalysisInstanceInfo(const AnalysisInstanceInfo& _analysisInstanceInfo)
{
    m_analysisInstanceInfo = _analysisInstanceInfo;
    m_analysisInstanceInfoHasBeenSet = true;
}

bool InstanceInfo::AnalysisInstanceInfoHasBeenSet() const
{
    return m_analysisInstanceInfoHasBeenSet;
}

