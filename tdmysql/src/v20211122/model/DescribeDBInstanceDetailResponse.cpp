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

#include <tencentcloud/tdmysql/v20211122/model/DescribeDBInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeDBInstanceDetailResponse::DescribeDBInstanceDetailResponse() :
    m_instanceNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_createVersionHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_diskHasBeenSet(false),
    m_storageNodeNumHasBeenSet(false),
    m_initParamsHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_replicationsHasBeenSet(false),
    m_fullReplicationsHasBeenSet(false),
    m_charSetHasBeenSet(false),
    m_nodeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_specCodeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_storageNodeCpuHasBeenSet(false),
    m_storageNodeMemHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_expireAtHasBeenSet(false),
    m_isolatedAtHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_binlogStatusHasBeenSet(false),
    m_aZModeHasBeenSet(false),
    m_standbyFlagHasBeenSet(false),
    m_binlogTypeHasBeenSet(false),
    m_timingModifyInstanceFlagHasBeenSet(false),
    m_columnarNodeCpuHasBeenSet(false),
    m_columnarNodeMemHasBeenSet(false),
    m_columnarNodeNumHasBeenSet(false),
    m_columnarNodeDiskHasBeenSet(false),
    m_columnarNodeStorageTypeHasBeenSet(false),
    m_columnarNodeSpecCodeHasBeenSet(false),
    m_columnarVipHasBeenSet(false),
    m_columnarVportHasBeenSet(false),
    m_isSupportColumnarHasBeenSet(false),
    m_instanceCategoryHasBeenSet(false),
    m_sQLModeHasBeenSet(false),
    m_isSwitchFullReplicationsEnableHasBeenSet(false),
    m_instanceModeHasBeenSet(false),
    m_dumperVipHasBeenSet(false),
    m_dumperVportHasBeenSet(false),
    m_autoScaleConfigHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_analysisModeHasBeenSet(false),
    m_analysisRelationInfosHasBeenSet(false),
    m_analysisInstanceInfoHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_encryptionEnableHasBeenSet(false),
    m_encryptionKmsRegionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstanceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
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

    if (rsp.HasMember("CreateVersion") && !rsp["CreateVersion"].IsNull())
    {
        if (!rsp["CreateVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createVersion = string(rsp["CreateVersion"].GetString());
        m_createVersionHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Disk") && !rsp["Disk"].IsNull())
    {
        if (!rsp["Disk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Disk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_disk = rsp["Disk"].GetInt64();
        m_diskHasBeenSet = true;
    }

    if (rsp.HasMember("StorageNodeNum") && !rsp["StorageNodeNum"].IsNull())
    {
        if (!rsp["StorageNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeNum = rsp["StorageNodeNum"].GetInt64();
        m_storageNodeNumHasBeenSet = true;
    }

    if (rsp.HasMember("InitParams") && !rsp["InitParams"].IsNull())
    {
        if (!rsp["InitParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InitParams` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InitParams"];
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Replications") && !rsp["Replications"].IsNull())
    {
        if (!rsp["Replications"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Replications` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replications = rsp["Replications"].GetInt64();
        m_replicationsHasBeenSet = true;
    }

    if (rsp.HasMember("FullReplications") && !rsp["FullReplications"].IsNull())
    {
        if (!rsp["FullReplications"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FullReplications` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fullReplications = rsp["FullReplications"].GetInt64();
        m_fullReplicationsHasBeenSet = true;
    }

    if (rsp.HasMember("CharSet") && !rsp["CharSet"].IsNull())
    {
        if (!rsp["CharSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CharSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_charSet = string(rsp["CharSet"].GetString());
        m_charSetHasBeenSet = true;
    }

    if (rsp.HasMember("Node") && !rsp["Node"].IsNull())
    {
        if (!rsp["Node"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Node` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Node"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_node.push_back(item);
        }
        m_nodeHasBeenSet = true;
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

    if (rsp.HasMember("SpecCode") && !rsp["SpecCode"].IsNull())
    {
        if (!rsp["SpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specCode = string(rsp["SpecCode"].GetString());
        m_specCodeHasBeenSet = true;
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

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("StorageNodeCpu") && !rsp["StorageNodeCpu"].IsNull())
    {
        if (!rsp["StorageNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeCpu = rsp["StorageNodeCpu"].GetInt64();
        m_storageNodeCpuHasBeenSet = true;
    }

    if (rsp.HasMember("StorageNodeMem") && !rsp["StorageNodeMem"].IsNull())
    {
        if (!rsp["StorageNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageNodeMem = rsp["StorageNodeMem"].GetInt64();
        m_storageNodeMemHasBeenSet = true;
    }

    if (rsp.HasMember("RenewFlag") && !rsp["RenewFlag"].IsNull())
    {
        if (!rsp["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = rsp["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
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

    if (rsp.HasMember("ExpireAt") && !rsp["ExpireAt"].IsNull())
    {
        if (!rsp["ExpireAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireAt = string(rsp["ExpireAt"].GetString());
        m_expireAtHasBeenSet = true;
    }

    if (rsp.HasMember("IsolatedAt") && !rsp["IsolatedAt"].IsNull())
    {
        if (!rsp["IsolatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedAt = string(rsp["IsolatedAt"].GetString());
        m_isolatedAtHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StorageType") && !rsp["StorageType"].IsNull())
    {
        if (!rsp["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(rsp["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Zones") && !rsp["Zones"].IsNull())
    {
        if (!rsp["Zones"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Zones` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Zones"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_zones.push_back((*itr).GetString());
        }
        m_zonesHasBeenSet = true;
    }

    if (rsp.HasMember("DiskUsage") && !rsp["DiskUsage"].IsNull())
    {
        if (!rsp["DiskUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = rsp["DiskUsage"].GetInt64();
        m_diskUsageHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogStatus") && !rsp["BinlogStatus"].IsNull())
    {
        if (!rsp["BinlogStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_binlogStatus = rsp["BinlogStatus"].GetInt64();
        m_binlogStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AZMode") && !rsp["AZMode"].IsNull())
    {
        if (!rsp["AZMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AZMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aZMode = rsp["AZMode"].GetInt64();
        m_aZModeHasBeenSet = true;
    }

    if (rsp.HasMember("StandbyFlag") && !rsp["StandbyFlag"].IsNull())
    {
        if (!rsp["StandbyFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandbyFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_standbyFlag = rsp["StandbyFlag"].GetInt64();
        m_standbyFlagHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogType") && !rsp["BinlogType"].IsNull())
    {
        if (!rsp["BinlogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogType = string(rsp["BinlogType"].GetString());
        m_binlogTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TimingModifyInstanceFlag") && !rsp["TimingModifyInstanceFlag"].IsNull())
    {
        if (!rsp["TimingModifyInstanceFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimingModifyInstanceFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timingModifyInstanceFlag = rsp["TimingModifyInstanceFlag"].GetInt64();
        m_timingModifyInstanceFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeCpu") && !rsp["ColumnarNodeCpu"].IsNull())
    {
        if (!rsp["ColumnarNodeCpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeCpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeCpu = rsp["ColumnarNodeCpu"].GetInt64();
        m_columnarNodeCpuHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeMem") && !rsp["ColumnarNodeMem"].IsNull())
    {
        if (!rsp["ColumnarNodeMem"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeMem` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeMem = rsp["ColumnarNodeMem"].GetInt64();
        m_columnarNodeMemHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeNum") && !rsp["ColumnarNodeNum"].IsNull())
    {
        if (!rsp["ColumnarNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeNum = rsp["ColumnarNodeNum"].GetInt64();
        m_columnarNodeNumHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeDisk") && !rsp["ColumnarNodeDisk"].IsNull())
    {
        if (!rsp["ColumnarNodeDisk"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeDisk` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeDisk = rsp["ColumnarNodeDisk"].GetInt64();
        m_columnarNodeDiskHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeStorageType") && !rsp["ColumnarNodeStorageType"].IsNull())
    {
        if (!rsp["ColumnarNodeStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeStorageType = string(rsp["ColumnarNodeStorageType"].GetString());
        m_columnarNodeStorageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarNodeSpecCode") && !rsp["ColumnarNodeSpecCode"].IsNull())
    {
        if (!rsp["ColumnarNodeSpecCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarNodeSpecCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnarNodeSpecCode = string(rsp["ColumnarNodeSpecCode"].GetString());
        m_columnarNodeSpecCodeHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarVip") && !rsp["ColumnarVip"].IsNull())
    {
        if (!rsp["ColumnarVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnarVip = string(rsp["ColumnarVip"].GetString());
        m_columnarVipHasBeenSet = true;
    }

    if (rsp.HasMember("ColumnarVport") && !rsp["ColumnarVport"].IsNull())
    {
        if (!rsp["ColumnarVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnarVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_columnarVport = rsp["ColumnarVport"].GetInt64();
        m_columnarVportHasBeenSet = true;
    }

    if (rsp.HasMember("IsSupportColumnar") && !rsp["IsSupportColumnar"].IsNull())
    {
        if (!rsp["IsSupportColumnar"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSupportColumnar` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSupportColumnar = rsp["IsSupportColumnar"].GetBool();
        m_isSupportColumnarHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceCategory") && !rsp["InstanceCategory"].IsNull())
    {
        if (!rsp["InstanceCategory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceCategory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCategory = rsp["InstanceCategory"].GetInt64();
        m_instanceCategoryHasBeenSet = true;
    }

    if (rsp.HasMember("SQLMode") && !rsp["SQLMode"].IsNull())
    {
        if (!rsp["SQLMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SQLMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLMode = string(rsp["SQLMode"].GetString());
        m_sQLModeHasBeenSet = true;
    }

    if (rsp.HasMember("IsSwitchFullReplicationsEnable") && !rsp["IsSwitchFullReplicationsEnable"].IsNull())
    {
        if (!rsp["IsSwitchFullReplicationsEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSwitchFullReplicationsEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSwitchFullReplicationsEnable = rsp["IsSwitchFullReplicationsEnable"].GetBool();
        m_isSwitchFullReplicationsEnableHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceMode") && !rsp["InstanceMode"].IsNull())
    {
        if (!rsp["InstanceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceMode = string(rsp["InstanceMode"].GetString());
        m_instanceModeHasBeenSet = true;
    }

    if (rsp.HasMember("DumperVip") && !rsp["DumperVip"].IsNull())
    {
        if (!rsp["DumperVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DumperVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dumperVip = string(rsp["DumperVip"].GetString());
        m_dumperVipHasBeenSet = true;
    }

    if (rsp.HasMember("DumperVport") && !rsp["DumperVport"].IsNull())
    {
        if (!rsp["DumperVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DumperVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dumperVport = rsp["DumperVport"].GetInt64();
        m_dumperVportHasBeenSet = true;
    }

    if (rsp.HasMember("AutoScaleConfig") && !rsp["AutoScaleConfig"].IsNull())
    {
        if (!rsp["AutoScaleConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScaleConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoScaleConfig.Deserialize(rsp["AutoScaleConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoScaleConfigHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(rsp["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisMode") && !rsp["AnalysisMode"].IsNull())
    {
        if (!rsp["AnalysisMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisMode = string(rsp["AnalysisMode"].GetString());
        m_analysisModeHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisRelationInfos") && !rsp["AnalysisRelationInfos"].IsNull())
    {
        if (!rsp["AnalysisRelationInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AnalysisRelationInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AnalysisRelationInfos"];
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

    if (rsp.HasMember("AnalysisInstanceInfo") && !rsp["AnalysisInstanceInfo"].IsNull())
    {
        if (!rsp["AnalysisInstanceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisInstanceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_analysisInstanceInfo.Deserialize(rsp["AnalysisInstanceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_analysisInstanceInfoHasBeenSet = true;
    }

    if (rsp.HasMember("MaintenanceWindow") && !rsp["MaintenanceWindow"].IsNull())
    {
        if (!rsp["MaintenanceWindow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceWindow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maintenanceWindow.Deserialize(rsp["MaintenanceWindow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maintenanceWindowHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptionEnable") && !rsp["EncryptionEnable"].IsNull())
    {
        if (!rsp["EncryptionEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionEnable = rsp["EncryptionEnable"].GetInt64();
        m_encryptionEnableHasBeenSet = true;
    }

    if (rsp.HasMember("EncryptionKmsRegion") && !rsp["EncryptionKmsRegion"].IsNull())
    {
        if (!rsp["EncryptionKmsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EncryptionKmsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptionKmsRegion = string(rsp["EncryptionKmsRegion"].GetString());
        m_encryptionKmsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_createVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createVersion.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_diskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disk, allocator);
    }

    if (m_storageNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageNodeNum, allocator);
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

    if (m_charSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CharSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_charSet.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_node.begin(); itr != m_node.end(); ++itr, ++i)
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

    if (m_specCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specCode.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
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

    if (m_diskUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskUsage, allocator);
    }

    if (m_binlogStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_binlogStatus, allocator);
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

    if (m_binlogTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogType.c_str(), allocator).Move(), allocator);
    }

    if (m_timingModifyInstanceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingModifyInstanceFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timingModifyInstanceFlag, allocator);
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

    if (m_columnarNodeSpecCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarNodeSpecCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnarNodeSpecCode.c_str(), allocator).Move(), allocator);
    }

    if (m_columnarVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnarVip.c_str(), allocator).Move(), allocator);
    }

    if (m_columnarVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnarVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnarVport, allocator);
    }

    if (m_isSupportColumnarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSupportColumnar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSupportColumnar, allocator);
    }

    if (m_instanceCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCategory, allocator);
    }

    if (m_sQLModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLMode.c_str(), allocator).Move(), allocator);
    }

    if (m_isSwitchFullReplicationsEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSwitchFullReplicationsEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSwitchFullReplicationsEnable, allocator);
    }

    if (m_instanceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dumperVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumperVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dumperVip.c_str(), allocator).Move(), allocator);
    }

    if (m_dumperVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DumperVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dumperVport, allocator);
    }

    if (m_autoScaleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScaleConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoScaleConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
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

    if (m_maintenanceWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaintenanceWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maintenanceWindow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encryptionEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptionEnable, allocator);
    }

    if (m_encryptionKmsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptionKmsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptionKmsRegion.c_str(), allocator).Move(), allocator);
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


string DescribeDBInstanceDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeDBInstanceDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetZone() const
{
    return m_zone;
}

bool DescribeDBInstanceDetailResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeDBInstanceDetailResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeDBInstanceDetailResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetCreateVersion() const
{
    return m_createVersion;
}

bool DescribeDBInstanceDetailResponse::CreateVersionHasBeenSet() const
{
    return m_createVersionHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetVip() const
{
    return m_vip;
}

bool DescribeDBInstanceDetailResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetVport() const
{
    return m_vport;
}

bool DescribeDBInstanceDetailResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDBInstanceDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetDisk() const
{
    return m_disk;
}

bool DescribeDBInstanceDetailResponse::DiskHasBeenSet() const
{
    return m_diskHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetStorageNodeNum() const
{
    return m_storageNodeNum;
}

bool DescribeDBInstanceDetailResponse::StorageNodeNumHasBeenSet() const
{
    return m_storageNodeNumHasBeenSet;
}

vector<InstanceParam> DescribeDBInstanceDetailResponse::GetInitParams() const
{
    return m_initParams;
}

bool DescribeDBInstanceDetailResponse::InitParamsHasBeenSet() const
{
    return m_initParamsHasBeenSet;
}

vector<ResourceTag> DescribeDBInstanceDetailResponse::GetResourceTags() const
{
    return m_resourceTags;
}

bool DescribeDBInstanceDetailResponse::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeDBInstanceDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeDBInstanceDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetReplications() const
{
    return m_replications;
}

bool DescribeDBInstanceDetailResponse::ReplicationsHasBeenSet() const
{
    return m_replicationsHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetFullReplications() const
{
    return m_fullReplications;
}

bool DescribeDBInstanceDetailResponse::FullReplicationsHasBeenSet() const
{
    return m_fullReplicationsHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetCharSet() const
{
    return m_charSet;
}

bool DescribeDBInstanceDetailResponse::CharSetHasBeenSet() const
{
    return m_charSetHasBeenSet;
}

vector<NodeInfo> DescribeDBInstanceDetailResponse::GetNode() const
{
    return m_node;
}

bool DescribeDBInstanceDetailResponse::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeDBInstanceDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetSpecCode() const
{
    return m_specCode;
}

bool DescribeDBInstanceDetailResponse::SpecCodeHasBeenSet() const
{
    return m_specCodeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDBInstanceDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeDBInstanceDetailResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetStorageNodeCpu() const
{
    return m_storageNodeCpu;
}

bool DescribeDBInstanceDetailResponse::StorageNodeCpuHasBeenSet() const
{
    return m_storageNodeCpuHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetStorageNodeMem() const
{
    return m_storageNodeMem;
}

bool DescribeDBInstanceDetailResponse::StorageNodeMemHasBeenSet() const
{
    return m_storageNodeMemHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool DescribeDBInstanceDetailResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeDBInstanceDetailResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetExpireAt() const
{
    return m_expireAt;
}

bool DescribeDBInstanceDetailResponse::ExpireAtHasBeenSet() const
{
    return m_expireAtHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetIsolatedAt() const
{
    return m_isolatedAt;
}

bool DescribeDBInstanceDetailResponse::IsolatedAtHasBeenSet() const
{
    return m_isolatedAtHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeDBInstanceDetailResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetStorageType() const
{
    return m_storageType;
}

bool DescribeDBInstanceDetailResponse::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

vector<string> DescribeDBInstanceDetailResponse::GetZones() const
{
    return m_zones;
}

bool DescribeDBInstanceDetailResponse::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetDiskUsage() const
{
    return m_diskUsage;
}

bool DescribeDBInstanceDetailResponse::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetBinlogStatus() const
{
    return m_binlogStatus;
}

bool DescribeDBInstanceDetailResponse::BinlogStatusHasBeenSet() const
{
    return m_binlogStatusHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetAZMode() const
{
    return m_aZMode;
}

bool DescribeDBInstanceDetailResponse::AZModeHasBeenSet() const
{
    return m_aZModeHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetStandbyFlag() const
{
    return m_standbyFlag;
}

bool DescribeDBInstanceDetailResponse::StandbyFlagHasBeenSet() const
{
    return m_standbyFlagHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetBinlogType() const
{
    return m_binlogType;
}

bool DescribeDBInstanceDetailResponse::BinlogTypeHasBeenSet() const
{
    return m_binlogTypeHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetTimingModifyInstanceFlag() const
{
    return m_timingModifyInstanceFlag;
}

bool DescribeDBInstanceDetailResponse::TimingModifyInstanceFlagHasBeenSet() const
{
    return m_timingModifyInstanceFlagHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetColumnarNodeCpu() const
{
    return m_columnarNodeCpu;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeCpuHasBeenSet() const
{
    return m_columnarNodeCpuHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetColumnarNodeMem() const
{
    return m_columnarNodeMem;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeMemHasBeenSet() const
{
    return m_columnarNodeMemHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetColumnarNodeNum() const
{
    return m_columnarNodeNum;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeNumHasBeenSet() const
{
    return m_columnarNodeNumHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetColumnarNodeDisk() const
{
    return m_columnarNodeDisk;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeDiskHasBeenSet() const
{
    return m_columnarNodeDiskHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetColumnarNodeStorageType() const
{
    return m_columnarNodeStorageType;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeStorageTypeHasBeenSet() const
{
    return m_columnarNodeStorageTypeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetColumnarNodeSpecCode() const
{
    return m_columnarNodeSpecCode;
}

bool DescribeDBInstanceDetailResponse::ColumnarNodeSpecCodeHasBeenSet() const
{
    return m_columnarNodeSpecCodeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetColumnarVip() const
{
    return m_columnarVip;
}

bool DescribeDBInstanceDetailResponse::ColumnarVipHasBeenSet() const
{
    return m_columnarVipHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetColumnarVport() const
{
    return m_columnarVport;
}

bool DescribeDBInstanceDetailResponse::ColumnarVportHasBeenSet() const
{
    return m_columnarVportHasBeenSet;
}

bool DescribeDBInstanceDetailResponse::GetIsSupportColumnar() const
{
    return m_isSupportColumnar;
}

bool DescribeDBInstanceDetailResponse::IsSupportColumnarHasBeenSet() const
{
    return m_isSupportColumnarHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetInstanceCategory() const
{
    return m_instanceCategory;
}

bool DescribeDBInstanceDetailResponse::InstanceCategoryHasBeenSet() const
{
    return m_instanceCategoryHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetSQLMode() const
{
    return m_sQLMode;
}

bool DescribeDBInstanceDetailResponse::SQLModeHasBeenSet() const
{
    return m_sQLModeHasBeenSet;
}

bool DescribeDBInstanceDetailResponse::GetIsSwitchFullReplicationsEnable() const
{
    return m_isSwitchFullReplicationsEnable;
}

bool DescribeDBInstanceDetailResponse::IsSwitchFullReplicationsEnableHasBeenSet() const
{
    return m_isSwitchFullReplicationsEnableHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetInstanceMode() const
{
    return m_instanceMode;
}

bool DescribeDBInstanceDetailResponse::InstanceModeHasBeenSet() const
{
    return m_instanceModeHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetDumperVip() const
{
    return m_dumperVip;
}

bool DescribeDBInstanceDetailResponse::DumperVipHasBeenSet() const
{
    return m_dumperVipHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetDumperVport() const
{
    return m_dumperVport;
}

bool DescribeDBInstanceDetailResponse::DumperVportHasBeenSet() const
{
    return m_dumperVportHasBeenSet;
}

AutoScalingConfig DescribeDBInstanceDetailResponse::GetAutoScaleConfig() const
{
    return m_autoScaleConfig;
}

bool DescribeDBInstanceDetailResponse::AutoScaleConfigHasBeenSet() const
{
    return m_autoScaleConfigHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeDBInstanceDetailResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetTemplateName() const
{
    return m_templateName;
}

bool DescribeDBInstanceDetailResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetAnalysisMode() const
{
    return m_analysisMode;
}

bool DescribeDBInstanceDetailResponse::AnalysisModeHasBeenSet() const
{
    return m_analysisModeHasBeenSet;
}

vector<AnalysisRelationInfo> DescribeDBInstanceDetailResponse::GetAnalysisRelationInfos() const
{
    return m_analysisRelationInfos;
}

bool DescribeDBInstanceDetailResponse::AnalysisRelationInfosHasBeenSet() const
{
    return m_analysisRelationInfosHasBeenSet;
}

AnalysisInstanceInfo DescribeDBInstanceDetailResponse::GetAnalysisInstanceInfo() const
{
    return m_analysisInstanceInfo;
}

bool DescribeDBInstanceDetailResponse::AnalysisInstanceInfoHasBeenSet() const
{
    return m_analysisInstanceInfoHasBeenSet;
}

MaintenanceWindowInfo DescribeDBInstanceDetailResponse::GetMaintenanceWindow() const
{
    return m_maintenanceWindow;
}

bool DescribeDBInstanceDetailResponse::MaintenanceWindowHasBeenSet() const
{
    return m_maintenanceWindowHasBeenSet;
}

int64_t DescribeDBInstanceDetailResponse::GetEncryptionEnable() const
{
    return m_encryptionEnable;
}

bool DescribeDBInstanceDetailResponse::EncryptionEnableHasBeenSet() const
{
    return m_encryptionEnableHasBeenSet;
}

string DescribeDBInstanceDetailResponse::GetEncryptionKmsRegion() const
{
    return m_encryptionKmsRegion;
}

bool DescribeDBInstanceDetailResponse::EncryptionKmsRegionHasBeenSet() const
{
    return m_encryptionKmsRegionHasBeenSet;
}


