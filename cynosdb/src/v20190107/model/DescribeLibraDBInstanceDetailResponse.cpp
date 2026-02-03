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

#include <tencentcloud/cynosdb/v20190107/model/DescribeLibraDBInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeLibraDBInstanceDetailResponse::DescribeLibraDBInstanceDetailResponse() :
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
    m_libraDBVersionHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_periodStartTimeHasBeenSet(false),
    m_periodEndTimeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_instanceNetInfoHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_nodeInfoHasBeenSet(false),
    m_nodeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLibraDBInstanceDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = rsp["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
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

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = rsp["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
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

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
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

    if (rsp.HasMember("StatusDesc") && !rsp["StatusDesc"].IsNull())
    {
        if (!rsp["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(rsp["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (rsp.HasMember("LibraDBVersion") && !rsp["LibraDBVersion"].IsNull())
    {
        if (!rsp["LibraDBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LibraDBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraDBVersion = string(rsp["LibraDBVersion"].GetString());
        m_libraDBVersionHasBeenSet = true;
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

    if (rsp.HasMember("StorageType") && !rsp["StorageType"].IsNull())
    {
        if (!rsp["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(rsp["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
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

    if (rsp.HasMember("InstanceRole") && !rsp["InstanceRole"].IsNull())
    {
        if (!rsp["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(rsp["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
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

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PayMode") && !rsp["PayMode"].IsNull())
    {
        if (!rsp["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = rsp["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (rsp.HasMember("PeriodStartTime") && !rsp["PeriodStartTime"].IsNull())
    {
        if (!rsp["PeriodStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PeriodStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodStartTime = string(rsp["PeriodStartTime"].GetString());
        m_periodStartTimeHasBeenSet = true;
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

    if (rsp.HasMember("RenewFlag") && !rsp["RenewFlag"].IsNull())
    {
        if (!rsp["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = rsp["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("NetType") && !rsp["NetType"].IsNull())
    {
        if (!rsp["NetType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_netType = rsp["NetType"].GetInt64();
        m_netTypeHasBeenSet = true;
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

    if (rsp.HasMember("InstanceNetInfo") && !rsp["InstanceNetInfo"].IsNull())
    {
        if (!rsp["InstanceNetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceNetInfo.Deserialize(rsp["InstanceNetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceNetInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceTags") && !rsp["ResourceTags"].IsNull())
    {
        if (!rsp["ResourceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourceTags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ResourceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

    if (rsp.HasMember("NodeInfo") && !rsp["NodeInfo"].IsNull())
    {
        if (!rsp["NodeInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LibraDBNodeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeInfo.push_back(item);
        }
        m_nodeInfoHasBeenSet = true;
    }

    if (rsp.HasMember("NodeCount") && !rsp["NodeCount"].IsNull())
    {
        if (!rsp["NodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = rsp["NodeCount"].GetUint64();
        m_nodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLibraDBInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_libraDBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraDBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraDBVersion.c_str(), allocator).Move(), allocator);
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

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
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

    if (m_periodStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
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

    if (m_instanceNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceNetInfo.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_nodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeInfo.begin(); itr != m_nodeInfo.end(); ++itr, ++i)
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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeLibraDBInstanceDetailResponse::GetUin() const
{
    return m_uin;
}

bool DescribeLibraDBInstanceDetailResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeLibraDBInstanceDetailResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeLibraDBInstanceDetailResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeLibraDBInstanceDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeLibraDBInstanceDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeLibraDBInstanceDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetProjectId() const
{
    return m_projectId;
}

bool DescribeLibraDBInstanceDetailResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeLibraDBInstanceDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetZone() const
{
    return m_zone;
}

bool DescribeLibraDBInstanceDetailResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeLibraDBInstanceDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetStatusDesc() const
{
    return m_statusDesc;
}

bool DescribeLibraDBInstanceDetailResponse::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetLibraDBVersion() const
{
    return m_libraDBVersion;
}

bool DescribeLibraDBInstanceDetailResponse::LibraDBVersionHasBeenSet() const
{
    return m_libraDBVersionHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetCpu() const
{
    return m_cpu;
}

bool DescribeLibraDBInstanceDetailResponse::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetMemory() const
{
    return m_memory;
}

bool DescribeLibraDBInstanceDetailResponse::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetStorage() const
{
    return m_storage;
}

bool DescribeLibraDBInstanceDetailResponse::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetStorageType() const
{
    return m_storageType;
}

bool DescribeLibraDBInstanceDetailResponse::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeLibraDBInstanceDetailResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetInstanceRole() const
{
    return m_instanceRole;
}

bool DescribeLibraDBInstanceDetailResponse::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeLibraDBInstanceDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeLibraDBInstanceDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetPayMode() const
{
    return m_payMode;
}

bool DescribeLibraDBInstanceDetailResponse::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetPeriodStartTime() const
{
    return m_periodStartTime;
}

bool DescribeLibraDBInstanceDetailResponse::PeriodStartTimeHasBeenSet() const
{
    return m_periodStartTimeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetPeriodEndTime() const
{
    return m_periodEndTime;
}

bool DescribeLibraDBInstanceDetailResponse::PeriodEndTimeHasBeenSet() const
{
    return m_periodEndTimeHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetRenewFlag() const
{
    return m_renewFlag;
}

bool DescribeLibraDBInstanceDetailResponse::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetNetType() const
{
    return m_netType;
}

bool DescribeLibraDBInstanceDetailResponse::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeLibraDBInstanceDetailResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeLibraDBInstanceDetailResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DescribeLibraDBInstanceDetailResponse::GetVip() const
{
    return m_vip;
}

bool DescribeLibraDBInstanceDetailResponse::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t DescribeLibraDBInstanceDetailResponse::GetVport() const
{
    return m_vport;
}

bool DescribeLibraDBInstanceDetailResponse::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

InstanceNetInfo DescribeLibraDBInstanceDetailResponse::GetInstanceNetInfo() const
{
    return m_instanceNetInfo;
}

bool DescribeLibraDBInstanceDetailResponse::InstanceNetInfoHasBeenSet() const
{
    return m_instanceNetInfoHasBeenSet;
}

vector<Tag> DescribeLibraDBInstanceDetailResponse::GetResourceTags() const
{
    return m_resourceTags;
}

bool DescribeLibraDBInstanceDetailResponse::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

vector<LibraDBNodeInfo> DescribeLibraDBInstanceDetailResponse::GetNodeInfo() const
{
    return m_nodeInfo;
}

bool DescribeLibraDBInstanceDetailResponse::NodeInfoHasBeenSet() const
{
    return m_nodeInfoHasBeenSet;
}

uint64_t DescribeLibraDBInstanceDetailResponse::GetNodeCount() const
{
    return m_nodeCount;
}

bool DescribeLibraDBInstanceDetailResponse::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}


